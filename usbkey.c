
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



//unix permission 0444 that allows for read-only permission
//Makes 
module_param(vid,int,0444); 
module_param(pid, int,0444);
module_param(serial,charp,0444);

//conditional if the USB is inserted. This will be default set to false.
static bool key_present = false;

struct usb_device {
static int VENDOR_ID = vid;
static int PRODUCT_ID = pid;  
static char *serial = "";

}
static bool isCorrectKey(struct usb_device){
    
}


