/*

Credentials file

*/

#pragma once

// Only one of these settings must be defined
#define USE_ABP
//#define USE_OTAA

#ifdef USE_ABP

// UPDATE WITH YOUR TTN KEYS AND ADDR.
static const PROGMEM u1_t NWKSKEY[16] = { 0xe1, 0x5c, 0x13, 0xd5, 0x24, 0x78, 0x6f, 0x10, 0xec, 0xf9, 0x4e, 0x7e, 0x39, 0x0b, 0xc9, 0xad };
static const u1_t PROGMEM APPSKEY[16] = { 0x3e, 0x8e, 0xc1, 0x20, 0xd7, 0xdc, 0x27, 0x8e, 0x90, 0x97, 0xc4, 0x94, 0x78, 0xee, 0x1e, 0x65 };
static const u4_t DEVADDR = 0x017dc7e2 ; // <-- Change this address for every node!

#endif

#ifdef USE_OTAA

    // This EUI must be in little-endian format, so least-significant-byte
    // first. When copying an EUI from ttnctl output, this means to reverse
    // the bytes. For TTN issued EUIs the last bytes should be 0x00, 0x00,
    // 0x00.
    static const u1_t PROGMEM APPEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    // This should also be in little endian format, see above. (least-significant-byte
    // first)
    static const u1_t PROGMEM DEVEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    // This key should be in big endian format (or, since it is not really a
    // number but a block of memory, endianness does not really apply). In
    // practice, a key taken from ttnctl can be copied as-is.
    // The key shown here is the semtech default key.
    static const u1_t PROGMEM APPKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

#endif
