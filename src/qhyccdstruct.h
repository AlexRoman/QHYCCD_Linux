/*
 QHYCCD SDK
 
 Copyright (c) 2014 QHYCCD.
 All Rights Reserved.
 
 This program is free software; you can redistribute it and/or modify it
 under the terms of the GNU General Public License as published by the Free
 Software Foundation; either version 2 of the License, or (at your option)
 any later version.
 
 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 more details.
 
 You should have received a copy of the GNU General Public License along with
 this program; if not, write to the Free Software Foundation, Inc., 59
 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 
 The full GNU General Public License is included in this distribution in the
 file called LICENSE.
 */

/*!
 * @file qhyccdstruct.h
 * @brief QHYCCD SDK struct define
 */
#include <libusb-1.0/libusb.h>


#ifndef __QHYCCDSTRUCTDEF_H__
#define __QHYCCDSTRUCTDEF_H__


/**
 * typedef the libusb_deivce qhyccd_device
 */
typedef struct libusb_device           qhyccd_device;

/**
 * typedef the libusb_deivce_handle qhyccd_handle
 */
typedef struct libusb_device_handle    qhyccd_handle;


/**
 * usb vendor request command
 */
#define QHYCCD_REQUEST_READ  0xC0

/**
 * usb vendor request command
 */
#define QHYCCD_REQUEST_WRITE 0x40

/**
 * @brief CCDREG struct define
 *
 * List the ccd registers param
 */
typedef struct ccdreg
{
    unsigned char Gain;                //!< ccd gain
    unsigned char Offset;              //!< ccd offset
    unsigned long Exptime;             //!< expose time
    unsigned char HBIN;                //!< width bin
    unsigned char VBIN;                //!< height bin
    unsigned short LineSize;           //!< almost match image width
    unsigned short VerticalSize;       //!< almost match image height
    unsigned short SKIP_TOP;           //!< Reserved
    unsigned short SKIP_BOTTOM;        //!< Reserved
    unsigned short LiveVideo_BeginLine;//!< Reserved
    unsigned short AnitInterlace;      //!< Reserved
    unsigned char MultiFieldBIN;       //!< Reserved
    unsigned char AMPVOLTAGE;          //!< Reserved
    unsigned char DownloadSpeed;       //!< transfer speed
    unsigned char TgateMode;           //!< Reserved
    unsigned char ShortExposure;       //!< Reserved
    unsigned char VSUB;                //!< Reserved
    unsigned char CLAMP;               //!< Reserved
    unsigned char TransferBIT;         //!< Reserved
    unsigned char TopSkipNull;         //!< Reserved
    unsigned short TopSkipPix;         //!< Reserved
    unsigned char MechanicalShutterMode;//!< Reserved
    unsigned char DownloadCloseTEC;    //!< Reserved
    unsigned char SDRAM_MAXSIZE;       //!< Reserved
    unsigned short ClockADJ;           //!< Reserved
    unsigned char Trig;                //!< Reserved
    unsigned char MotorHeating;        //!< Reserved
    unsigned char WindowHeater;        //!< Reserved
    unsigned char ADCSEL;              //!< Reserved
}CCDREG;

/**
 * @brief CONTROL_ID enum define
 *
 * List of the function could be control
 */
enum CONTROL_ID
{
    CONTROL_BRIGHTNESS = 0, /* image brightness */
    CONTROL_CONTRAST,       /* image contrast */
    CONTROL_WBR,            /* red of white balance */
    CONTROL_WBB,            /* blue of white balance */
    CONTROL_WBG,            /* the green of white balance */
    CONTROL_GAMMA,          /* screen gamma */
    CONTROL_GAIN,           /* camera gain */
    CONTROL_OFFSET,         /* camera offset */
    CONTROL_EXPOSURE,       /* expose time */
    CONTROL_SPEED,          /* transfer speed */
    CONTROL_TRANSFERBIT,    /* image depth bits */
    CONTROL_CHANNELS,       /* image channels */
    CONTROL_USBTRAFFIC,     /* hblank */
    CONTROL_ROWNOISERE,     /* row denoise */
    CONTROL_CURTEMP,        /* current cmos or ccd temprature */
    CONTROL_CURPWM,         /* current cool pwm */
    CONTROL_MANULPWM,       /* set the cool pwm */
    CONTROL_CFWPORT,        /* control camera color filter wheel port */
    CAM_BIN1X1MODE,         /* check if camera has bin1x1 mode */
    CAM_BIN2X2MODE,         /* check if camera has bin2x2 mode */
    CAM_BIN3X3MODE,         /* check if camera has bin3x3 mode */
    CAM_BIN4X4MODE          /* check if camera has bin4x4 mode */
};

/**
 * @brief SHUTTER_MODE enum define
 *
 * List of the shutter modes
 */
enum SHUTTER_MODE
{
    SHUTTER_OPEN = 0,
    SHUTTER_CLOSED = 1,
    SHUTTER_FREE = 2
};

#endif
