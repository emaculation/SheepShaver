/*
 *  user_strings.h - Localizable strings
 *
 *  SheepShaver (C) 1997-2002 Christian Bauer and Marc Hellwig
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef USER_STRINGS_H
#define USER_STRINGS_H

// Common string numbers
enum {
	// General messages
	STR_ABOUT_TEXT1 = 0,
	STR_ABOUT_TEXT2,
	STR_READING_ROM_FILE,
	STR_SHELL_ERROR_PREFIX,
	STR_GUI_ERROR_PREFIX,
	STR_ERROR_ALERT_TITLE,
	STR_SHELL_WARNING_PREFIX,
	STR_GUI_WARNING_PREFIX,
	STR_WARNING_ALERT_TITLE,
	STR_NOTICE_ALERT_TITLE,
	STR_ABOUT_TITLE,
	STR_OK_BUTTON,
	STR_START_BUTTON,
	STR_QUIT_BUTTON,
	STR_CANCEL_BUTTON,
	STR_IGNORE_BUTTON,

	// Error messages
	STR_NOT_ENOUGH_MEMORY_ERR = 1000,
	STR_NO_KERNEL_DATA_ERR,
	STR_NO_RAM_AREA_ERR,
	STR_NO_ROM_FILE_ERR,
	STR_RAM_HIGHER_THAN_ROM_ERR,
	STR_ROM_FILE_READ_ERR,
	STR_ROM_SIZE_ERR,
	STR_UNSUPPORTED_ROM_TYPE_ERR,
	STR_POWER_INSTRUCTION_ERR,
	STR_MEM_ACCESS_ERR,
	STR_MEM_ACCESS_READ,
	STR_MEM_ACCESS_WRITE,
	STR_UNKNOWN_SEGV_ERR,
	STR_NO_NAME_REGISTRY_ERR,
	STR_FULL_SCREEN_ERR,
	STR_SCSI_BUFFER_ERR,
	STR_SCSI_SG_FULL_ERR,

	// Warning messages
	STR_SMALL_RAM_WARN = 2000,
	STR_VOLUME_IS_MOUNTED_WARN,
	STR_CANNOT_UNMOUNT_WARN,
	STR_CREATE_VOLUME_WARN,

	// Preferences window
	STR_PREFS_TITLE = 3000,
	STR_PREFS_MENU = 3020,
	STR_PREFS_ITEM_ABOUT,
	STR_PREFS_ITEM_START,
	STR_PREFS_ITEM_ZAP_PRAM,
	STR_PREFS_ITEM_QUIT,

	// Volumes pane
	STR_VOLUMES_PANE_TITLE = 3200,
	STR_ADD_VOLUME_BUTTON,
	STR_CREATE_VOLUME_BUTTON,
	STR_REMOVE_VOLUME_BUTTON,
	STR_ADD_VOLUME_PANEL_BUTTON,
	STR_CREATE_VOLUME_PANEL_BUTTON,
	STR_BOOTDRIVER_CTRL,
	STR_BOOT_ANY_LAB,
	STR_BOOT_CDROM_LAB,
	STR_NOCDROM_CTRL,
	STR_EXTFS_CTRL,
	STR_ADD_VOLUME_TITLE,
	STR_CREATE_VOLUME_TITLE,
	STR_HARDFILE_SIZE_CTRL,

	// Graphics pane
	STR_GRAPHICS_SOUND_PANE_TITLE = 3300,
	STR_FRAMESKIP_CTRL,
	STR_REF_5HZ_LAB,
	STR_REF_7_5HZ_LAB,
	STR_REF_10HZ_LAB,
	STR_REF_15HZ_LAB,
	STR_REF_30HZ_LAB,
	STR_REF_60HZ_LAB,
	STR_GFXACCEL_CTRL,
	STR_8_BIT_CTRL,
	STR_16_BIT_CTRL,
	STR_32_BIT_CTRL,
	STR_W_640x480_CTRL,
	STR_W_800x600_CTRL,
	STR_640x480_CTRL,
	STR_800x600_CTRL,
	STR_1024x768_CTRL,
	STR_1152x900_CTRL,
	STR_1280x1024_CTRL,
	STR_1600x1200_CTRL,
	STR_VIDEO_MODE_CTRL,
	STR_FULLSCREEN_CTRL,
	STR_NOSOUND_CTRL,

	// Serial/Network pane
	STR_SERIAL_NETWORK_PANE_TITLE = 3400,
	STR_SERPORTA_CTRL,
	STR_SERPORTB_CTRL,
	STR_NONET_CTRL,
	STR_ETHERNET_IF_CTRL,

	// Memory/Misc pane
	STR_MEMORY_MISC_PANE_TITLE = 3500,
	STR_RAMSIZE_SLIDER,
	STR_RAMSIZE_FMT,
	STR_IGNORESEGV_CTRL,
	STR_IDLEWAIT_CTRL,
	STR_ROM_FILE_CTRL,

	// Mac window
	STR_WINDOW_TITLE = 4000,
	STR_WINDOW_TITLE_FROZEN,
	STR_WINDOW_MENU = 4050,
	STR_WINDOW_ITEM_ABOUT,
	STR_WINDOW_ITEM_REFRESH,
	STR_WINDOW_ITEM_MOUNT,

	// Audio
	STR_SOUND_IN_NAME = 6000,

	// External file system
	STR_EXTFS_NAME = 7000,
	STR_EXTFS_VOLUME_NAME
};

// Common and platform-specific string definitions
struct user_string_def {
	int num;
	const char *str;
};

extern user_string_def common_strings[];
extern user_string_def platform_strings[];

// Fetch pointer to string, given the string number
extern const char *GetString(int num);

#endif
