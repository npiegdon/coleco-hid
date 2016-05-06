// ColecoHID
//
// Copyright (c)2014 Nicholas Piegdon
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software
// and associated documentation files(the "Software"), to deal in the Software without restriction,
// including without limitation the rights to use, copy, modify, merge, publish, distribute,
// sublicense, and / or sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or
// substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
// BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
// DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#include "Descriptors.h"

const USB_Descriptor_HIDReport_Datatype_t PROGMEM ColecoDescriptor[] =
{
	HID_RI_USAGE_PAGE(8, 0x01), // Generic Desktop
	HID_RI_USAGE(8, 0x04), // Joystick
	HID_RI_COLLECTION(8, 0x01), // Application
        HID_RI_REPORT_ID(8, HID_REPORTID_Joystick1),

		HID_RI_USAGE(8, 0x01), // Pointer
		HID_RI_COLLECTION(8, 0x00), // Physical
			HID_RI_USAGE(8, 0x30), // Usage X
			HID_RI_USAGE(8, 0x31), // Usage Y
			HID_RI_LOGICAL_MINIMUM(8, -127),
			HID_RI_LOGICAL_MAXIMUM(8, 127),
			HID_RI_PHYSICAL_MINIMUM(8, -127),
			HID_RI_PHYSICAL_MAXIMUM(8, 127),
			HID_RI_REPORT_COUNT(8, 0x02),
			HID_RI_REPORT_SIZE(8, 0x08),
			HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE),
		HID_RI_END_COLLECTION(0),

        HID_RI_USAGE(8, 0x38), // Wheel
        HID_RI_LOGICAL_MINIMUM(8, -127),
        HID_RI_LOGICAL_MAXIMUM(8, 127),
        HID_RI_PHYSICAL_MINIMUM(8, -127),
        HID_RI_PHYSICAL_MAXIMUM(8, 127),
        HID_RI_REPORT_COUNT(8, 0x01),
        HID_RI_REPORT_SIZE(8, 0x08),
        HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_RELATIVE),

		HID_RI_USAGE_PAGE(8, 0x09), // Button
		HID_RI_USAGE_MINIMUM(8, 0x01),
		HID_RI_USAGE_MAXIMUM(8, 0x10),
		HID_RI_LOGICAL_MINIMUM(8, 0x00),
		HID_RI_LOGICAL_MAXIMUM(8, 0x01),
		HID_RI_REPORT_COUNT(8, 0x10),
		HID_RI_REPORT_SIZE(8, 0x01),
		HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE),
	HID_RI_END_COLLECTION(0),
    
  	HID_RI_USAGE_PAGE(8, 0x01), // Generic Desktop
  	HID_RI_USAGE(8, 0x04), // Joystick
  	HID_RI_COLLECTION(8, 0x01), // Application
  	    HID_RI_REPORT_ID(8, HID_REPORTID_Joystick2),
  	    HID_RI_USAGE(8, 0x01), // Pointer
  	    HID_RI_COLLECTION(8, 0x00), // Physical
  	        HID_RI_USAGE(8, 0x30), // Usage X
  	        HID_RI_USAGE(8, 0x31), // Usage Y
  	        HID_RI_LOGICAL_MINIMUM(8, -127),
  	        HID_RI_LOGICAL_MAXIMUM(8, 127),
  	        HID_RI_PHYSICAL_MINIMUM(8, -127),
  	        HID_RI_PHYSICAL_MAXIMUM(8, 127),
  	        HID_RI_REPORT_COUNT(8, 0x02),
  	        HID_RI_REPORT_SIZE(8, 0x08),
  	        HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE),
  	    HID_RI_END_COLLECTION(0),
          
        HID_RI_USAGE(8, 0x38), // Wheel
        HID_RI_LOGICAL_MINIMUM(8, -127),
        HID_RI_LOGICAL_MAXIMUM(8, 127),
        HID_RI_PHYSICAL_MINIMUM(8, -127),
        HID_RI_PHYSICAL_MAXIMUM(8, 127),
        HID_RI_REPORT_COUNT(8, 0x01),
        HID_RI_REPORT_SIZE(8, 0x08),
        HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_RELATIVE),

  	    HID_RI_USAGE_PAGE(8, 0x09), // Button
  	    HID_RI_USAGE_MINIMUM(8, 0x01),
  	    HID_RI_USAGE_MAXIMUM(8, 0x10),
  	    HID_RI_LOGICAL_MINIMUM(8, 0x00),
  	    HID_RI_LOGICAL_MAXIMUM(8, 0x01),
  	    HID_RI_REPORT_COUNT(8, 0x10),
  	    HID_RI_REPORT_SIZE(8, 0x01),
  	    HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE),
 	HID_RI_END_COLLECTION(0),
      
    HID_RI_USAGE_PAGE(8, 0x01), // Generic Desktop
    HID_RI_USAGE(8, 0x02), // Mouse
    HID_RI_COLLECTION(8, 0x01), // Application
        HID_RI_REPORT_ID(8, HID_REPORTID_Mouse),
        HID_RI_USAGE(8, 0x01), // Pointer
        HID_RI_COLLECTION(8, 0x00), // Physical
            HID_RI_USAGE_PAGE(8, 0x09), // Button
            HID_RI_USAGE_MINIMUM(8, 0x01),
            HID_RI_USAGE_MAXIMUM(8, 0x03),
            HID_RI_LOGICAL_MINIMUM(8, 0x00),
            HID_RI_LOGICAL_MAXIMUM(8, 0x01),
            HID_RI_REPORT_COUNT(8, 0x03),
            HID_RI_REPORT_SIZE(8, 0x01),
            HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_ABSOLUTE),
            HID_RI_REPORT_COUNT(8, 0x01),
            HID_RI_REPORT_SIZE(8, 0x05),
            HID_RI_INPUT(8, HID_IOF_CONSTANT),
            HID_RI_USAGE_PAGE(8, 0x01), // Generic Desktop
            HID_RI_USAGE(8, 0x30), // Usage X
            HID_RI_USAGE(8, 0x31), // Usage Y
            HID_RI_LOGICAL_MINIMUM(8, -127),
            HID_RI_LOGICAL_MAXIMUM(8, 127),
            HID_RI_PHYSICAL_MINIMUM(8, -127),
            HID_RI_PHYSICAL_MAXIMUM(8, 127),
            HID_RI_REPORT_COUNT(8, 0x02),
            HID_RI_REPORT_SIZE(8, 0x08),
            HID_RI_INPUT(8, HID_IOF_DATA | HID_IOF_VARIABLE | HID_IOF_RELATIVE),
        HID_RI_END_COLLECTION(0),
    HID_RI_END_COLLECTION(0),
};

const USB_Descriptor_Device_t PROGMEM DeviceDescriptor =
{
    .Header                 = {.Size = sizeof(USB_Descriptor_Device_t), .Type = DTYPE_Device},

    .USBSpecification       = VERSION_BCD(1,1,0),
    .Class                  = USB_CSCP_NoDeviceClass,
    .SubClass               = USB_CSCP_NoDeviceSubclass,
    .Protocol               = USB_CSCP_NoDeviceProtocol,
    .Endpoint0Size          = FIXED_CONTROL_ENDPOINT_SIZE,

    .VendorID               = 0x20A0,
    .ProductID              = 0x423D,
    .ReleaseNumber          = VERSION_BCD(0,0,1),

    .ManufacturerStrIndex   = 1,
    .ProductStrIndex        = 2,
    .SerialNumStrIndex      = NO_DESCRIPTOR,
    .NumberOfConfigurations = FIXED_NUM_CONFIGURATIONS
};

typedef struct
{
    USB_Descriptor_Configuration_Header_t config;
    USB_Descriptor_Interface_t interface;
    USB_HID_Descriptor_HID_t hid;
    USB_Descriptor_Endpoint_t endpoint;
    
} DeviceDescriptor_t;

const DeviceDescriptor_t PROGMEM ConfigurationDescriptor =
{
    .config =
    {
        .Header                 = {.Size = sizeof(USB_Descriptor_Configuration_Header_t), .Type = DTYPE_Configuration},
        .TotalConfigurationSize = sizeof(DeviceDescriptor_t),
        .TotalInterfaces        = 1,

        .ConfigurationNumber    = 1,
        .ConfigurationStrIndex  = NO_DESCRIPTOR,
        .ConfigAttributes       = (USB_CONFIG_ATTR_RESERVED | USB_CONFIG_ATTR_SELFPOWERED),
        .MaxPowerConsumption    = USB_CONFIG_POWER_MA(100)
    },

    .interface =
    {
        .Header                 = {.Size = sizeof(USB_Descriptor_Interface_t), .Type = DTYPE_Interface},
        .InterfaceNumber        = 0,
        .AlternateSetting       = 0x00,
        .TotalEndpoints         = 1,
        .Class                  = HID_CSCP_HIDClass,
        .SubClass               = HID_CSCP_NonBootSubclass,
        .Protocol               = HID_CSCP_NonBootProtocol,
        .InterfaceStrIndex      = NO_DESCRIPTOR
    },

    .hid =
    {
        .Header                 = {.Size = sizeof(USB_HID_Descriptor_HID_t), .Type = HID_DTYPE_HID},
        .HIDSpec                = VERSION_BCD(1,1,1),
        .CountryCode            = 0x00,
        .TotalReportDescriptors = 1,
        .HIDReportType          = HID_DTYPE_Report,
        .HIDReportLength        = sizeof(ColecoDescriptor)
    },

    .endpoint =
    {
        .Header                 = {.Size = sizeof(USB_Descriptor_Endpoint_t), .Type = DTYPE_Endpoint},
        .EndpointAddress        = ENDPOINT_ADDR,
        .Attributes             = (EP_TYPE_INTERRUPT | ENDPOINT_ATTR_NO_SYNC | ENDPOINT_USAGE_DATA),
        .EndpointSize           = ENDPOINT_SIZE,
        .PollingIntervalMS      = 0x01
    }
};

const USB_Descriptor_String_t PROGMEM LanguageString = USB_STRING_DESCRIPTOR_ARRAY(LANGUAGE_ID_ENG);
const USB_Descriptor_String_t PROGMEM ManufacturerString = USB_STRING_DESCRIPTOR(L"Nicholas Piegdon");
const USB_Descriptor_String_t PROGMEM ProductString = USB_STRING_DESCRIPTOR(L"ColecoHID Adapter");

#define DTYPE_HID     0x21
#define DTYPE_Report  0x22

uint16_t CALLBACK_USB_GetDescriptor(const uint16_t wValue, const uint8_t wIndex, const void** const DescriptorAddress)
{
    switch (wValue >> 8)
    {
        case DTYPE_Device: *DescriptorAddress = &DeviceDescriptor; return sizeof(USB_Descriptor_Device_t);
        case DTYPE_Configuration: *DescriptorAddress = &ConfigurationDescriptor; return sizeof(DeviceDescriptor_t);
        case DTYPE_HID: *DescriptorAddress = &ConfigurationDescriptor.hid; return sizeof(USB_HID_Descriptor_HID_t);
        case DTYPE_Report: *DescriptorAddress = &ColecoDescriptor; return sizeof(ColecoDescriptor);

        case DTYPE_String:
        switch (wValue & 0xFF)
        {
            case 0: *DescriptorAddress = &LanguageString; return pgm_read_byte(&LanguageString.Header.Size);
            case 1: *DescriptorAddress = &ManufacturerString; return pgm_read_byte(&ManufacturerString.Header.Size);
            case 2: *DescriptorAddress = &ProductString; return pgm_read_byte(&ProductString.Header.Size);
        }
        break;
    }

    *DescriptorAddress = NULL;
    return NO_DESCRIPTOR;
}
