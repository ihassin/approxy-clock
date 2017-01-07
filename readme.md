[![Build Status](https://travis-ci.org/ihassin/approxy-clock.svg?branch=master)](https://travis-ci.org/ihassin/approxy-clock)

# Approxy Clock

Will tell you what the approximate time is. It's written to drive a device much like [this](https://www.amazon.com/LED-Wall-Word-Clock-12/dp/B01H5RPQAO/ref=pd_rhf_gw_p_img_6?_encoding=UTF8&psc=1&refRID=2A38P730NS4CD8K8Z4F1) one.

# Building

It uses [cmake](https://cmake.org/), so do the following:

```bash
mkdir build
cd build
cmake ..
```
## Tests

Use [Unity]() as the framework. Run them from ./approxy_clock_tests

## Code

Will be written for [Arduino](https://www.arduino.cc/), so will need to be uploaded to the device.

## Simulator

Will simulate the LEDs lighting up.

# Hardware

Will use [WS2812B](https://cdn-shop.adafruit.com/datasheets/WS2812B.pdf), and will need to be wired up in serial behind the clock's face.

