
#ifndef STD_TYPES_H
#define STD_TYPES_H

typedef struct
{
   uint16 vendor_id;
   uint16 module_id;
   uint8 instance_id;

   uint8 sw_major_version;
   uint8 sw_minor_version;
   uint8 sw_patch_version;

   uint8 ar_major_version;
   uint8 ar_minor_version;
   uint8 ar_patch_version;
}Std_VersionInfoType;

#endif