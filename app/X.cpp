#ifdef ENABLE_DOCTEST_IN_LIBRARY
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest/doctest.h"
#endif

#include <iostream>
#include <stdlib.h>

#include "exampleConfig.h"
#include "Dummy.h"
#include "Tlog.h"

#include "spdlog/spdlog.h"

using namespace std;


/*
 */
int main() {
  spdlog::info("Welcome to X language: {} !", "any thing");
  std::system("echo X language is a new language !");

  cout<<__cplusplus<<endl;

  Tlog t = Tlog();
  t.log();

  Dummy d = Dummy();
  int ret = d.doSomething() ? 0 : -1;
  std::cout << "ret: " << ret
          << std::endl;
  return ret;
}
