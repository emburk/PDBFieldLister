#include <stdint.h>

typedef enum {
    A1 = 0,
    B2 = 1
} var_enum2_T;

typedef  struct SubStruct {
    double    var_double;
    float     var_float;
    int32_t   var_int32;
    uint32_t  var_uint32;
    enum {A,B,C} var_enum1;
    var_enum2_T var_enum2;
} SubStruct;

typedef struct MainStruct {
    uint8_t    var_uint8;
    int8_t     var_int8;
    uint32_t   var_uint32;
    uint16_t   var_uint16;
    int16_t    var_int16;
    uint64_t   var_uint64;
    int32_t    var_int32;
    int64_t    var_int64;
    double     var_double_arr[3][3];
    float      var_float_arr[4];
    SubStruct  var_substruct;
} MainStruct;

double myVar;