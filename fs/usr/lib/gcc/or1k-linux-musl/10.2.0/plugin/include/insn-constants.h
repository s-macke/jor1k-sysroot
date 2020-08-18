/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define SP_REGNUM 1
#define LR_REGNUM 9
#define RV_REGNUM 11
#define HFP_REGNUM 2
#define SFP_REGNUM 33
#define TLS_REGNUM 10
#define SR_F_REGNUM 34
#define PE_TMP_REGNUM 13
#define AP_REGNUM 32

enum unspec {
  UNSPEC_SET_GOT = 0,
  UNSPEC_GOT = 1,
  UNSPEC_GOTOFF = 2,
  UNSPEC_TPOFF = 3,
  UNSPEC_GOTTPOFF = 4,
  UNSPEC_TLSGD = 5,
  UNSPEC_MSYNC = 6
};
#define NUM_UNSPEC_VALUES 7
extern const char *const unspec_strings[];

enum unspecv {
  UNSPECV_SET_GOT = 0,
  UNSPECV_LL = 1,
  UNSPECV_SC = 2
};
#define NUM_UNSPECV_VALUES 3
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
