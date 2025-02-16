// Copyright (C) 2020 Intel Corporation

// SPDX-License-Identifier: MIT

#include <sycl/sycl.hpp>
using namespace sycl;

int main() { 

// START CODE SNIP

  try {
    // Do some SYCL work
  } catch (sycl::exception &e) {
    // Do something to output or handle the exception
    std::cout << "Caught sync SYCL exception: " << e.what() << "\n";
    return 1;
  } 

// END CODE SNIP
  
  return 0;
}

