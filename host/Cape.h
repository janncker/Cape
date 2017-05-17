/*  _____  _____   _____   _____
   |      |     | |     | |
   |      |_____| |_____| |_____
   |      |     | |       |
   |_____ |     | |       |_____  version 1.4

Cape Copyright (c) 2012-2016, Giovanni Blu Mitolo All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#ifndef Cape_h
  #define Cape_h
#endif

#include <stdint.h>
#define BUFFER_LEN 30
class Cape {
  public:
    Cape(char *key, uint8_t key_length = 0);
    void compute_reduced_key(char *key, uint8_t length);
    void crypt(char *source, char *destination, uint8_t length, bool initialization_vector = false, bool side = false);
    void decrypt(char *source,  uint8_t length);
    void encrypt(char *source,  uint8_t length);
    void set_key(char *key, uint8_t length);
    char* get_result();
    uint8_t generate_IV();
    char destination[BUFFER_LEN];
  private:
    char * _key;
    char   _key_length;
    char   _reduced_key;
};
