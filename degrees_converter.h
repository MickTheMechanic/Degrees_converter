#ifndef DEGREES_CONVERTER_H
#define DEGREES_CONVERTER_H

void convert_degrees (float angle, char *buffer) {
  float degrees = (int)angle;
  float decimal = angle - (float)degrees;
  degrees = angle;
  if (degrees < 0.0 && degrees > -1.0) degrees = -0.1;
  else degrees = degrees - decimal;
  uint8_t minutes = fabs (decimal * 60.f);
  minutes = minutes + 5 / 2;
  minutes -= minutes % 5;
  if (minutes == 60) minutes = 55;
  snprintf(buffer, 10, "%+.0f° %02d'", degrees, minutes);
}

#endif
