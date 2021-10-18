void buildPacket(uint8_t txBuffer[7])
{
  char buffer[1];
  uint8_t r = rand() % 256;
  txBuffer[0] = r;

}
