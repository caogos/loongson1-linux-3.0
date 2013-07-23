#ifndef __GC0307_H__
#define __GC0307_H__

unsigned char gc0307_YCbCr8bit[][2] = {
	{0x48, 0x80},
	{0x43, 0x00},
	{0x31, 0x00},

	{0x0E, 0x00},
	{0x01, 0xC8},

	//AEC

	{0x03, 0x01},
	{0x04, 0x85},
	{0xDB, 0x3c},
	{0xDC, 0x40},

	//Contrast
	{0xA1, 0x90},
	{0x77, 0x80},
	{0x40, 0x1E},
	{0x41, 0x01},
	{0x42, 0x00},
	{0x43, 0x40},
	{0x44, 0xF1},
	{0x45, 0x25},
	{0x47, 0x04},
	{0x49, 0x00},
	{0x4A, 0x00},
	{0x4B, 0x00},
	{0x4D, 0x1B},
	{0x4E, 0x1F},
	{0x4F, 0x01},
	{0x0F, 0x22},

	//Window
	{0x05, 0x00},
	{0x06, 0x00},
	{0x07, 0x00},
	{0x08, 0x40},
	{0x09, 0x01},
	{0x0A, 0xe8},
	{0x0B, 0x02},
	{0x0C, 0x80},

	//power down off
	{0x13, 0x80},  
};

#define GC0307_INIT_REGS (sizeof(gc0307_YCbCr8bit) / sizeof(gc0307_YCbCr8bit[0]))

#endif