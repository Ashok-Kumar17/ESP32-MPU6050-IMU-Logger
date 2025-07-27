#include <Wire.h>
#include <MPU6050_light.h>

MPU6050 mpu(Wire);

void setup() {
  Serial.begin(115200);
  Wire.begin(21, 22);  // SDA, SCL
  byte status = mpu.begin();
  Serial.print(F("MPU6050 status: "));
  Serial.println(status);
  while(status != 0){ delay(1000); }

  Serial.println(F("Calibrating..."));
  mpu.calcOffsets(); // Calibrate
  Serial.println(F("Done!\n"));
}

void loop() {
  mpu.update();
  Serial.print("Acc [");
  Serial.print(mpu.getAccX()); Serial.print(", ");
  Serial.print(mpu.getAccY()); Serial.print(", ");
  Serial.print(mpu.getAccZ()); Serial.print("] | Gyro [");
  Serial.print(mpu.getGyroX()); Serial.print(", ");
  Serial.print(mpu.getGyroY()); Serial.print(", ");
  Serial.print(mpu.getGyroZ()); Serial.println("]");
  delay(500);
}
