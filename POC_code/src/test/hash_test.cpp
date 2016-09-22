#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE hash_test

#include "hash.h"
#include "utility.h"
#include <boost/test/unit_test.hpp>
BOOST_AUTO_TEST_CASE(test_hash256){
  unsigned char raw_tx[371] = {0x01, 0x00, 0x00, 0x00, 0x01, 0x04, 0x25, 0x3a,
                               0x70, 0x28, 0x74, 0xff, 0xd4, 0xd6, 0x1f, 0x07,
                               0x5e, 0x88, 0x23, 0x21, 0x54, 0x64, 0x3a, 0x7e,
                               0x1e, 0x85, 0x5f, 0x5b, 0x1a, 0xa5, 0x81, 0x95,
                               0xa0, 0x5e, 0x04, 0x1b, 0xdb, 0x01, 0x00, 0x00,
                               0x00, 0xfd, 0x1c, 0x01, 0x48, 0x30, 0x45, 0x02,
                               0x21, 0x00, 0x94, 0xf2, 0xbc, 0x26, 0xcc, 0x69,
                               0x6f, 0x0e, 0xa2, 0xb7, 0xf0, 0xe1, 0xe2, 0x90,
                               0x15, 0xe6, 0xa6, 0x51, 0x3a, 0xe5, 0x56, 0x9d,
                               0x1c, 0x6f, 0x5e, 0x5f, 0x06, 0xf6, 0xd2, 0x13,
                               0x7f, 0x1f, 0x02, 0x20, 0x30, 0x9e, 0x1f, 0xa6,
                               0x36, 0xf5, 0xce, 0x91, 0xd1, 0xf3, 0x8a, 0xf7,
                               0x15, 0xae, 0xbe, 0xfc, 0x32, 0x4f, 0xf2, 0xc0,
                               0x49, 0xce, 0x62, 0xd2, 0x1e, 0xcd, 0xb2, 0x08,
                               0xa1, 0xa4, 0x4f, 0x9d, 0x01, 0x00, 0x4c, 0xd0,
                               0x63, 0x52, 0x41, 0x04, 0x35, 0xfd, 0x62, 0x87,
                               0x13, 0x5f, 0x10, 0x70, 0x1b, 0x72, 0xc3, 0xd6,
                               0x17, 0xe4, 0xad, 0xe6, 0x38, 0x69, 0x1e, 0x59,
                               0x67, 0x31, 0xe7, 0x9f, 0x64, 0xda, 0x64, 0x90,
                               0xbb, 0x42, 0xb3, 0xa8, 0xe8, 0xe6, 0xf9, 0x01,
                               0xaf, 0x05, 0xbe, 0xb1, 0x6a, 0xe9, 0x7d, 0x6e,
                               0xac, 0xa0, 0x6c, 0x2f, 0xc0, 0x0b, 0x8c, 0xba,
                               0x65, 0xf6, 0x3e, 0xf2, 0x28, 0xdd, 0xb3, 0x80,
                               0x36, 0x75, 0x34, 0x7e, 0x41, 0x04, 0xc5, 0xa8,
                               0xdd, 0x46, 0xdb, 0x19, 0x75, 0xc4, 0x86, 0xe6,
                               0xfc, 0xab, 0x75, 0x44, 0x91, 0x73, 0xb8, 0x21,
                               0x7c, 0x93, 0x85, 0xea, 0xe3, 0x90, 0xff, 0xa1,
                               0xa9, 0x0b, 0x65, 0xd6, 0xcc, 0x1d, 0x9f, 0x8b,
                               0xa8, 0x74, 0x0d, 0x76, 0x42, 0x91, 0x82, 0xc8,
                               0xf9, 0x83, 0xc0, 0xad, 0x90, 0xc4, 0xe9, 0xed,
                               0x64, 0xe4, 0x4d, 0xc6, 0x46, 0xd5, 0xd2, 0x29,
                               0x3f, 0x92, 0x41, 0x31, 0x5c, 0x05, 0x52, 0xae,
                               0x67, 0x5a, 0xb1, 0x75, 0x41, 0x04, 0x35, 0xfd,
                               0x62, 0x87, 0x13, 0x5f, 0x10, 0x70, 0x1b, 0x72,
                               0xc3, 0xd6, 0x17, 0xe4, 0xad, 0xe6, 0x38, 0x69,
                               0x1e, 0x59, 0x67, 0x31, 0xe7, 0x9f, 0x64, 0xda,
                               0x64, 0x90, 0xbb, 0x42, 0xb3, 0xa8, 0xe8, 0xe6,
                               0xf9, 0x01, 0xaf, 0x05, 0xbe, 0xb1, 0x6a, 0xe9,
                               0x7d, 0x6e, 0xac, 0xa0, 0x6c, 0x2f, 0xc0, 0x0b,
                               0x8c, 0xba, 0x65, 0xf6, 0x3e, 0xf2, 0x28, 0xdd,
                               0xb3, 0x80, 0x36, 0x75, 0x34, 0x7e, 0xac, 0x68,
                               0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x38, 0x01,
                               0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x76, 0xa9,
                               0x14, 0xb0, 0xf2, 0x8c, 0x75, 0x33, 0x3e, 0x6f,
                               0x7a, 0x65, 0xc9, 0x9e, 0x7e, 0xb1, 0xaa, 0x5c,
                               0x9d, 0x6b, 0x98, 0xdb, 0x5a, 0x88, 0xac, 0x1e,
                               0x00, 0x00, 0x00};

      Bin* tx = new Bin();
      tx->len = 371;
      tx->data = raw_tx;

      Bin* tx_id = hash256(tx);

      unsigned char * tx_id_str = (unsigned char *) get_hex_str_rev(tx_id);

      BOOST_CHECK_MESSAGE(memcmp(tx_id_str, "23daa9d3868255bab14d5dfe46f7fb787aaef49b17d0014902e36e4491440311", HASH_256 * 2) == 0 , "test_txid: TX ID's don't match");
      delete tx_id;

      tx->len = 0;
      delete tx;
      free(tx_id_str);
}

BOOST_AUTO_TEST_CASE(test_hmac){

  // From https://tools.ietf.org/html/rfc4231
  unsigned char key[20] = {0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
                           0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa,
                           0xaa, 0xaa, 0xaa, 0xaa};

 unsigned char data[50] = {0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
                          0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
                          0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
                          0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
                          0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
                          0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd,
                          0xdd, 0xdd};

  unsigned char e[32] = {0x77, 0x3e, 0xa9, 0x1e, 0x36, 0x80, 0x0e, 0x46,
                         0x85, 0x4d, 0xb8, 0xeb, 0xd0, 0x91, 0x81, 0xa7,
                         0x29, 0x59, 0x09, 0x8b, 0x3e, 0xf8, 0xc1, 0x22,
                         0xd9, 0x63, 0x55, 0x14, 0xce, 0xd5, 0x65, 0xfe};


Bin* bkey = new Bin();
bkey->len = 20;
bkey->data = key;

Bin* msg = new Bin();
msg->len = 50;
msg->data = data;

Bin* output = hmac256(msg, bkey);

BOOST_CHECK_MESSAGE(memcmp(e, output->data, 32)  == 0 , "test_hmac: Not expected");

// Cleanup
msg->data = NULL;
bkey->data = NULL;
delete msg;
delete bkey;
delete output;
}