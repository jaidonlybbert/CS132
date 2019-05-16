#include "player.h"
#include "iomanip"


// Constructors =================================
Player::Player(std::string name, bool activePlayer) {
  this->activePlayer = activePlayer;
  hand = new Hand;
  matches = new Match;
  this->name = name;
}
// ==============================================


// Accessors ====================================
Hand* Player::getHand() const {
  return hand;
}

Match* Player::getMatches() const {
  return matches;
}

std::string Player::getName() const {
  return name;
}
// ==============================================


// Mutators =====================================
void Player::setName(const std::string& name) {
  this->name = name;
}

void Player::addCard(PlayingCard* cardPointer) {
  hand->addCard(cardPointer);
  addMatch(cardPointer->getCardIndex());
}

void Player::addMatch(int cardIndex) {
  matches->addMatch(cardIndex);
  if (matches->matches[cardIndex] == 4) {
    std::cout << endl << name << " made a match!\n";
    hand->removeAllCards(cardIndex);
    matches->matches[cardIndex] = 0;
    matches->matches[13]++; // index thirteen signifies complete matches
  }
}

void Player::removeCard(PlayingCard* card) {
  matches->removeMatch(card->getCardIndex());
  hand->removeCard(card);
}

// ==============================================


// Checks for card in opponents possesion
void Player::cardQuery(Player* opponent, Deck* playdeck) {
  bool onARoll = true;
  string guess;

  while (onARoll) {

    if (hand->getSize() == 0 || opponent->getHand()->getSize() == 0) {
      break;
    }

    guess = getMatches()->nextGuess(hand->getSize());

    std::cout << endl << name << " asks for " << guess << "'s\n";

    if (opponent->getHand()->hasCard(guess)) {
      cardFromPlayer(guess, opponent);
    } else {
      goFish(playdeck);
      onARoll = false;
    }
  }
}


// Manual input check for card in opponents possesion
void Player::manualCardQuery(Player* opponent, Deck* playdeck) {
  bool onARoll = true;
  bool validInput;
  string guess;

  while (onARoll) {

    hand->printHand();

    if (hand->getSize() == 0 || opponent->getHand()->getSize() == 0) {
      break;
    }

    validInput = false;
    while(validInput == false) {
      cout << "\nEnter guess: ";
      cin >> guess;

      validInput = false;
      for (int i = 0; i < 13; i++) {
        if (guess == Deck::cards[i]) {
          validInput = true;
          break;
        }
      }

      if (!validInput) {
        std::cout << "\nInvalid input! Try one of the following: 'Ace', '2', '3',"
             << " '4'\n"
             << "'5', '6', '7', '8', '9', '10', 'Jack', 'Queen', 'King'\n";
        cin.clear();
        cin.ignore(1000, '\n');
      }
    }

    cout << setfill('\n') << setw(100) << "\n";

    if (opponent->getHand()->hasCard(guess)) {
      cardFromPlayer(guess, opponent);
    } else {
      goFish(playdeck);
      onARoll = false;
    }
  }
}


// Draws a card from the deck
void Player::goFish(Deck* playDeck) {
  std::cout << "Go fish!\n";

  if (activePlayer) {
    playDeck->getTopCard()->printCard();
    std::cout << " drawn.\n";
  }

  playDeck->deal(this);
}


void Player::cardFromPlayer(std::string card, Player* opponent) {
  PlayingCard* currentCard;
  for (int i = 0; i < opponent->getHand()->cardsInHand.size(); i++) {
    currentCard = opponent->getHand()->cardsInHand[i];
    if (currentCard->getCard() == card) {
      currentCard->printCard();
      std::cout << " handed over.\n";

      addCard(currentCard);
      opponent->removeCard(currentCard);

      i = -1;
    }
  }
}
