#ifndef __SPINDLEPUBLICACCESS_H
#define __SPINDLEPUBLICACCESS_H

// addresses used for public data access
#define spindle_checksum              CHECKSUM("spindle")

struct pad_spindle {
    bool is_on;
};

#endif // __SPINDLEPUBLICACCESS_H
