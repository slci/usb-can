#define N_HLCAN		29	/* line discipline for hlcan, value not used in kernel */

#define HLCAN_MAGIC 0x53DA

#define HLCAN_FRAME_PREFIX 	0xC0
#define HLCAN_FLAG_RTR	 	0x10
#define HLCAN_FLAG_ID_EXT 	0x20
#define HLCAN_TYPE_MASK		0xF0

#define HLCAN_STD_DATA_FRAME 	0xC0
#define HLCAN_EXT_DATA_FRAME 	0xE0
#define HCLAN_STD_REMOTE_FRAME 	0xD0
#define HCLAN_EXT_REMOTE_FRAME 	0xF0

#define HLCAN_PACKET_START 		0xAA
#define HLCAN_PACKET_END		0x55

#define HLCAN_CFG_PACKAGE_TYPE	0x55
#define HLCAN_CFG_PACKAGE_LEN	0x14
#define HLCAN_CFG_CRC_IDX		0x02

typedef enum {
	NONE,
	RECEIVING,
	COMPLETE,
	MISSED_HEADER
} FRAME_STATE;

typedef enum {
    HLCAN_SPEED_1000000 = 0x01,
    HLCAN_SPEED_800000 = 0x02,
    HLCAN_SPEED_500000 = 0x03,
    HLCAN_SPEED_400000 = 0x04,
    HLCAN_SPEED_250000 = 0x05,
    HLCAN_SPEED_200000 = 0x06,
    HLCAN_SPEED_125000 = 0x07,
    HLCAN_SPEED_100000 = 0x08,
    HLCAN_SPEED_50000 = 0x09,
    HLCAN_SPEED_20000 = 0x0a,
    HLCAN_SPEED_10000 = 0x0b,
    HLCAN_SPEED_5000 = 0x0c,
    HLCAN_SPEED_INVALID = 0xff,
} HLCAN_SPEED;

typedef enum {
    HLCAN_MODE_NORMAL = 0x00,
    HLCAN_MODE_LOOPBACK = 0x01,
    HLCAN_MODE_SILENT = 0x02,
    HLCAN_MODE_LOOPBACK_SILENT = 0x03,
} HLCAN_MODE;

typedef enum {
    HLCAN_FRAME_STANDARD = 0x01,
    HLCAN_FRAME_EXTENDED = 0x02,
} HLCAN_FRAME_TYPE;
