#include <iostream>
#include <libusb.h>

libusb_context* context = NULL;

int main() {
  int r;
  r = libusb_init(&context);
  if (r < 0)
        return r;
  std::cout << "Hello World!\n";
  return 0;
}
