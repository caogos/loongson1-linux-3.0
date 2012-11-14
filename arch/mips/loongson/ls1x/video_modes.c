/* 自定义fb_videomode */
static struct fb_videomode video_modes[] = {
	[0] = {	// HX8238-D控制器
		.name	= "HX8238-D",
		.pixclock	= 104837,
		.refresh	= 80,
		.xres		= 320,
		.yres		= 240,
		.hsync_len	= 32,		// 364-332
		.left_margin	= 68,	// 432-364
		.right_margin	= 12,	// 332-320
		.vsync_len	= 6,		// 254-248
		.upper_margin	= 22,	// 276-254
		.lower_margin	= 8,	// 248-240
		.sync		= FB_SYNC_VERT_HIGH_ACT | FB_SYNC_HOR_HIGH_ACT,
	},
/*	[0] = {	// NT39016D控制器
		.name	= "NT39016D",
		.pixclock	= 4000,
		.refresh	= 60,
		.xres		= 320,
		.yres		= 240,
		.hsync_len	= 1,		// 337-336
		.left_margin	= 71,	// 408-337
		.right_margin	= 16,	// 336-320
		.vsync_len	= 1,		// 251-250
		.upper_margin	= 12,	// 263-251
		.lower_margin	= 10,	// 250-240
		.sync		= FB_SYNC_VERT_HIGH_ACT | FB_SYNC_HOR_HIGH_ACT,
	},*/
	[1] = {	//AT043TN24
		.name	= "AT043TN24",
		.pixclock	= 110229,
		.refresh	= 60,
		.xres		= 480,
		.yres		= 272,
		.hsync_len	= 1,
		.left_margin	= 43,
		.right_margin	= 1,
		.vsync_len	= 1,
		.upper_margin	= 14,
		.lower_margin	= 1,
		.sync		= FB_SYNC_VERT_HIGH_ACT | FB_SYNC_HOR_HIGH_ACT,
	},
	[2] = {	// jbt6k74控制器
		.name	= "jbt6k74",
		.pixclock	= 22000,
		.refresh	= 60,
		.xres		= 480,
		.yres		= 640,
		.hsync_len	= 8,		// 496-488
		.left_margin	= 24,	// 520-496
		.right_margin	= 8,	// 488-480
		.vsync_len	= 2,		// 644-642
		.upper_margin	= 4,	// 648-644
		.lower_margin	= 2,	// 642-240
		.sync		= FB_SYNC_VERT_HIGH_ACT | FB_SYNC_HOR_HIGH_ACT,
	},
	[3] = {	//AT056TN52
		.name	= "AT056TN52",
		.pixclock	= 32552,
		.refresh	= 60,
		.xres		= 640,
		.yres		= 480,
		.hsync_len	= 10,		// thwh
		.left_margin	= 134,	// thbp
		.right_margin	= 16,	// thfp
		.vsync_len	= 2,		//
		.upper_margin	= 11,	//
		.lower_margin	= 32,	//
		.sync		= FB_SYNC_VERT_HIGH_ACT | FB_SYNC_HOR_HIGH_ACT,
	},
	[4] = {	//AT070TN93
		.name	= "AT070TN93",
		.pixclock	= 32552,
		.refresh	= 60,
		.xres		= 800,
		.yres		= 480,
		.hsync_len	= 80,		// 912-832
		.left_margin	= 112,	// 1024-912
		.right_margin	= 32,	// 832-800
		.vsync_len	= 3,		// 484-481
		.upper_margin	= 16,	// 500-484
		.lower_margin	= 1,	// 481-480
		.sync		= FB_SYNC_VERT_HIGH_ACT | FB_SYNC_HOR_HIGH_ACT,
	},
	[5] = {	//VESA 800x600@75Hz
		.name	= "VESA",
		.pixclock	= 20202,
		.refresh	= 75,
		.xres		= 800,
		.yres		= 600,
		.hsync_len	= 80,		// 896-816
		.left_margin	= 160,	// 1056-896
		.right_margin	= 16,	// 816-800
		.vsync_len	= 3,		// 484-481
		.upper_margin	= 21,	// 500-484
		.lower_margin	= 1,	// 481-480
		.sync		= FB_SYNC_VERT_HIGH_ACT | FB_SYNC_HOR_HIGH_ACT,
	},
	[6] = {	//VESA 1024x768@60Hz
		.name	= "VESA",
		.pixclock	= 15384,
		.refresh	= 60,
		.xres		= 1024,
		.yres		= 768,
		.hsync_len	= 136,
		.left_margin	= 160,
		.right_margin	= 24,
		.vsync_len	= 6,
		.upper_margin	= 29,
		.lower_margin	= 3,
		.sync		= FB_SYNC_VERT_HIGH_ACT | FB_SYNC_HOR_HIGH_ACT,
	},
	[7] = {	//VESA 1280x1024@75Hz
		.name	= "VESA",
		.pixclock	= 7400,
		.refresh	= 75,
		.xres		= 1280,
		.yres		= 1024,
		.hsync_len	= 144,
		.left_margin	= 248,
		.right_margin	= 16,
		.vsync_len	= 3,
		.upper_margin	= 38,
		.lower_margin	= 1,
		.sync		= FB_SYNC_VERT_HIGH_ACT | FB_SYNC_HOR_HIGH_ACT,
	},
	[8] = {	//VESA 1440x900@75Hz
		.name	= "VESA",
		.pixclock	= 7312,
		.refresh	= 75,
		.xres		= 1440,
		.yres		= 900,
		.hsync_len	= 152,
		.left_margin	= 248,
		.right_margin	= 96,
		.vsync_len	= 6,
		.upper_margin	= 33,
		.lower_margin	= 3,
		.sync		= FB_SYNC_VERT_HIGH_ACT | FB_SYNC_HOR_HIGH_ACT,
	},
};

#ifdef CONFIG_LS1B_MACH
struct ls1b_vga ls1b_vga_modes[] = {
	{
		.xres = 800,
		.yres = 600,
		.refresh = 75,
	#if AHB_CLK == 25000000
		.ls1b_pll_freq = 0x21813,
		.ls1b_pll_div = 0x8a28ea00,
	#else	//AHB_CLK == 33000000
		.ls1b_pll_freq = 0x0080c,
		.ls1b_pll_div = 0x8a28ea00,
	#endif
	},
	{
		.xres = 1024,
		.yres = 768,
		.refresh = 60,
	#if AHB_CLK == 25000000
		.ls1b_pll_freq = 0x2181d,
		.ls1b_pll_div = 0x8a292a00,
	#else	//AHB_CLK == 33000000
		.ls1b_pll_freq = 0x21813,
		.ls1b_pll_div = 0x8a28ea00,
	#endif
	},
	{
		.xres = 1280,
		.yres = 1024,
		.refresh = 75,
	#if AHB_CLK == 25000000
		.ls1b_pll_freq = 0x3af1e,
		.ls1b_pll_div = 0x86292a00,
	#else	//AHB_CLK == 33000000
		.ls1b_pll_freq = 0x3af14,
		.ls1b_pll_div = 0x86292a00,
	#endif
	},
	{
		.xres = 1440,
		.yres = 900,
		.refresh = 75,
	#if AHB_CLK == 25000000
		.ls1b_pll_freq = 0x3af1f,
		.ls1b_pll_div = 0x86292a00,
	#else	//AHB_CLK == 33000000
		.ls1b_pll_freq = 0x3af14,
		.ls1b_pll_div = 0x86292a00,
	#endif
	},
	{},
};
EXPORT_SYMBOL(ls1b_vga_modes);
#endif