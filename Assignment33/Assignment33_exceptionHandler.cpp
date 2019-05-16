#include "exceptionHandler.h"
#include<string>

ExceptionHandler::ExceptionHandler(std::string message) {
  this->message = message;
}

const char * ExceptionHandler::what() const throw() {
  return message.c_str();
}
