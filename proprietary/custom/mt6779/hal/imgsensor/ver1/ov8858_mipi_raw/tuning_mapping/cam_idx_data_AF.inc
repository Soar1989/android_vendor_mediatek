#define IDX_DATA_AF_DIM_NS    4
#define IDX_DATA_AF_FACTOR_SZ    3
#define IDX_DATA_AF_ENTRY_NS    25

static unsigned int _cam_data_entry_AF_key0000[] = {0X000001FC, 0XA0500000, 0X00001F00, };
static unsigned int _cam_data_entry_AF_key0001[] = {0X000001FC, 0X60500000, 0X00001F00, };
static unsigned int _cam_data_entry_AF_key0002[] = {0X000001FC, 0XA0500000, 0X00002F00, };
static unsigned int _cam_data_entry_AF_key0003[] = {0X000001FC, 0X60500000, 0X00002F00, };
static unsigned int _cam_data_entry_AF_key0004[] = {0X00000001, 0X40040000, 0X00001F00, };
static unsigned int _cam_data_entry_AF_key0005[] = {0X00000001, 0X80040000, 0X00001100, };
static unsigned int _cam_data_entry_AF_key0006[] = {0X00000001, 0X00040000, 0X00001F01, };
static unsigned int _cam_data_entry_AF_key0007[] = {0X00000001, 0X40040000, 0X00002F00, };
static unsigned int _cam_data_entry_AF_key0008[] = {0X00000001, 0X80040000, 0X00002100, };
static unsigned int _cam_data_entry_AF_key0009[] = {0X00000001, 0X00040000, 0X00002F01, };
static unsigned int _cam_data_entry_AF_key0010[] = {0X00000002, 0X40080000, 0X00003F00, };
static unsigned int _cam_data_entry_AF_key0011[] = {0X00000002, 0X00080000, 0X00003F01, };
static unsigned int _cam_data_entry_AF_key0012[] = {0X00000000, 0XC0000330, 0X00003FFF, };
static unsigned int _cam_data_entry_AF_key0013[] = {0X00000000, 0XC0000CC0, 0X00003FFF, };
static unsigned int _cam_data_entry_AF_key0014[] = {0X00000000, 0XC003F000, 0X00003FFF, };
static unsigned int _cam_data_entry_AF_key0015[] = {0X00CC0000, 0XC0000000, 0X00003FFF, };
static unsigned int _cam_data_entry_AF_key0016[] = {0X03300000, 0XC0000000, 0X00003FFF, };
static unsigned int _cam_data_entry_AF_key0017[] = {0XFC000000, 0XC000000F, 0X00003FFF, };
static unsigned int _cam_data_entry_AF_key0018[] = {0X00000600, 0XC0000000, 0X00003FFF, };
static unsigned int _cam_data_entry_AF_key0019[] = {0X00001800, 0XC0000000, 0X00003FFF, };
static unsigned int _cam_data_entry_AF_key0020[] = {0X0001E000, 0XC0000000, 0X000031FF, };
static unsigned int _cam_data_entry_AF_key0021[] = {0X0001E1FC, 0XE0500000, 0X000036FF, };
static unsigned int _cam_data_entry_AF_key0022[] = {0XFC000000, 0XC003F00F, 0X000036FF, };
static unsigned int _cam_data_entry_AF_key0023[] = {0X00000001, 0X80040000, 0X00001600, };
static unsigned int _cam_data_entry_AF_key0024[] = {0X00000001, 0X80040000, 0X00002600, };

static IDX_MASK_ENTRY _cam_data_entry_AF[IDX_DATA_AF_ENTRY_NS] =
{
    {(unsigned int*)&_cam_data_entry_AF_key0000, 0, 0, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0001, 1, 1, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0002, 0, 2, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0003, 1, 3, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0004, 1, 4, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0005, 0, 5, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0006, 2, 6, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0007, 1, 7, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0008, 0, 8, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0009, 2, 9, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0010, 3, 10, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0011, 3, 11, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0012, 1, 12, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0013, 1, 13, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0014, 1, 14, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0015, 1, 15, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0016, 1, 16, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0017, 1, 17, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0018, 1, 18, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0019, 1, 19, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0020, 1, 20, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0021, 0, 21, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0022, 0, 22, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0023, 0, 23, 0, 0},
    {(unsigned int*)&_cam_data_entry_AF_key0024, 0, 24, 0, 0},
};

static unsigned short _cam_data_dims_AF[] = 
{
    EDim_IspProfile,
    EDim_SensorMode,
    EDim_Flash,
    EDim_FaceDetection,
};

static unsigned short _cam_data_expand_AF[] = 
{0, 0, 0};

const IDX_MASK_T cam_data_AF =
{
    {IDX_ALGO_MASK, IDX_DATA_AF_DIM_NS, (unsigned short*)&_cam_data_dims_AF, (unsigned short*)&_cam_data_expand_AF},
    {IDX_DATA_AF_ENTRY_NS, IDX_DATA_AF_FACTOR_SZ, (IDX_MASK_ENTRY*)&_cam_data_entry_AF}
};