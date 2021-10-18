void buildPacket(uint8_t txBuffer[1])
{
  long randNumber;
  randNumber = random(256);
  uint8_t r = randNumber;
  txBuffer[0] = r;
  Serial.print(F("Random Number: "));
  Serial.println(randNumber);
}
