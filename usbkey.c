
#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/usb.h>

//macro for the USB device's vendor and product IDs
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Hendrick");
MODULE_DESCRIPTION("A simple USB key kernel module");

//set variables to the vendor and product IDs of the USB device

int VENDOR_ID = 0x6300;


