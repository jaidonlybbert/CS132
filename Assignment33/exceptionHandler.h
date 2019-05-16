#ifndef EXCEPTION_HANDLER_H
#define EXCEPTION_HANDLER_H

#include<iostream>

class ExceptionHandler : public std::exception {
  std::string message;
public:
  ExceptionHandler(std::string message);
  const char * what() const throw();
};

#endif
