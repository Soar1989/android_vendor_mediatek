#define IDX_DATA_OBC_DIM_NS    4
#define IDX_DATA_OBC_FACTOR_SZ    3
#define IDX_DATA_OBC_ENTRY_NS    25

static unsigned int _cam_data_entry_OBC_key0000[] = {0X000001FC, 0XA0500000, 0X00001F00, };
static unsigned int _cam_data_entry_OBC_key0001[] = {0X000001FC, 0X60500000, 0X00001F00, };
static unsigned int _cam_data_entry_OBC_key0002[] = {0X000001FC, 0XA0500000, 0X00002F00, };
static unsigned int _cam_data_entry_OBC_key0003[] = {0X000001FC, 0X60500000, 0X00002F00, };
static unsigned int _cam_data_entry_OBC_key0004[] = {0X00000001, 0X40040000, 0X00001F00, };
static unsigned int _cam_data_entry_OBC_key0005[] = {0X00000001, 0X80040000, 0X00001100, };
static unsigned int _cam_data_entry_OBC_key0006[] = {0X00000001, 0X00040000, 0X00001F01, };
static unsigned int _cam_data_entry_OBC_key0007[] = {0X00000001, 0X40040000, 0X00002F00, };
static unsigned int _cam_data_entry_OBC_key0008[] = {0X00000001, 0X80040000, 0X00002100, };
static unsigned int _cam_data_entry_OBC_key0009[] = {0X00000001, 0X00040000, 0X00002F01, };
static unsigned int _cam_data_entry_OBC_key0010[] = {0X00000002, 0X40080000, 0X00003F00, };
static unsigned int _cam_data_entry_OBC_key0011[] = {0X00000002, 0X00080000, 0X00003F01, };
static unsigned int _cam_data_entry_OBC_key0012[] = {0X00000000, 0XC0000330, 0X00003FFF, };
static unsigned int _cam_data_entry_OBC_key0013[] = {0X00000000, 0XC0000CC0, 0X00003FFF, };
static unsigned int _cam_data_entry_OBC_key0014[] = {0X00000000, 0XC003F000, 0X00003FFF, };
static unsigned int _cam_data_entry_OBC_key0015[] = {0X00CC0000, 0XC0000000, 0X00003FFF, };
static unsigned int _cam_data_entry_OBC_key0016[] = {0X03300000, 0XC0000000, 0X00003FFF, };
static unsigned int _cam_data_entry_OBC_key0017[] = {0XFC000000, 0XC000000F, 0X00003FFF, };
static unsigned int _cam_data_entry_OBC_key0018[] = {0X00000600, 0XC0000000, 0X00003FFF, };
static unsigned int _cam_data_entry_OBC_key0019[] = {0X00001800, 0XC0000000, 0X00003FFF, };
static unsigned int _cam_data_entry_OBC_key0020[] = {0X0001E000, 0XC0000000, 0X000031FF, };
static unsigned int _cam_data_entry_OBC_key0021[] = {0X0001E1FC, 0XE0500000, 0X000036FF, };
static unsigned int _cam_data_entry_OBC_key0022[] = {0XFC000000, 0XC003F00F, 0X000036FF, };
static unsigned int _cam_data_entry_OBC_key0023[] = {0X00000001, 0X80040000, 0X00001600, };
static unsigned int _cam_data_entry_OBC_key0024[] = {0X00000001, 0X80040000, 0X00002600, };

static IDX_MASK_ENTRY _cam_data_entry_OBC[IDX_DATA_OBC_ENTRY_NS] =
{
    {(unsigned int*)&_cam_data_entry_OBC_key0000, 0, 0, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0001, 0, 1, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0002, 0, 2, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0003, 0, 3, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0004, 8, 4, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0005, 8, 5, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0006, 8, 6, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0007, 8, 7, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0008, 8, 8, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0009, 8, 9, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0010, 16, 10, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0011, 16, 11, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0012, 8, 12, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0013, 16, 13, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0014, 0, 14, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0015, 8, 15, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0016, 16, 16, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0017, 0, 17, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0018, 8, 18, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0019, 16, 19, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0020, 0, 20, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0021, 0, 21, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0022, 0, 22, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0023, 8, 23, 0, 0},
    {(unsigned int*)&_cam_data_entry_OBC_key0024, 8, 24, 0, 0},
};

static unsigned short _cam_data_dims_OBC[] = 
{
    EDim_IspProfile,
    EDim_SensorMode,
    EDim_Flash,
    EDim_FaceDetection,
};

static unsigned short _cam_data_expand_OBC[] = 
{0, 0, 1};

const IDX_MASK_T cam_data_OBC =
{
    {IDX_ALGO_MASK, IDX_DATA_OBC_DIM_NS, (unsigned short*)&_cam_data_dims_OBC, (unsigned short*)&_cam_data_expand_OBC},
    {IDX_DATA_OBC_ENTRY_NS, IDX_DATA_OBC_FACTOR_SZ, (IDX_MASK_ENTRY*)&_cam_data_entry_OBC}
};