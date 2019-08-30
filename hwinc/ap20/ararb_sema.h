//
// DO NOT EDIT - generated by simspec!
//

#ifndef ___ARARB_SEMA_H_INC_
#define ___ARARB_SEMA_H_INC_
// Arbitration semaphores provide a mechanism by which the two processors can arbitrate
// for the use of various resources. These semaphores provide a hardware locking mechanism,
// so that when a processor is already using a resource, the second processor is not
// granted that resource. There are 32 bits of Arbitration semaphores provided in the system.
// The hardware does not enforce any resource association to these bits. It is left to the
// firmware to assign and use these bits.
// Any processor that needs to access a particular resource will request for the
// corresponding bit in the Arbitration semaphores by writing a one to that bit in the
// Arbitration Semaphore Request register (SMP_GET register). Firmware will then
// check the corresponding bit in the Semaphore Granted Status register (SMP_GNT_ST register)
// If the requesting processor has been granted the resource, then the status returned will
// be a one.
// Alternately, the processor can configure the interrupt controller to generate an
// interrupt when the resource becomes available. Refer to the arictlr_arbgnt specfile for details.
// When the processor has finished using the resource, it releases the resource by writing a one
// to the corresponding bit in the Arbitration Semaphore Put Request register
// (SMP_PUT register).  Additionally, pending request status is provided through the
// Arbitration Request Pending Status register (SMP_REQ_ST register).
// Semaphore Granted Status Register

// Register ARB_SEMA_SMP_GNT_ST_0
#define ARB_SEMA_SMP_GNT_ST_0                   _MK_ADDR_CONST(0x0)
#define ARB_SEMA_SMP_GNT_ST_0_WORD_COUNT                        0x1
#define ARB_SEMA_SMP_GNT_ST_0_RESET_VAL                         _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_GNT_ST_0_RESET_MASK                        _MK_MASK_CONST(0xffffffff)
#define ARB_SEMA_SMP_GNT_ST_0_SW_DEFAULT_VAL                    _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_GNT_ST_0_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_GNT_ST_0_READ_MASK                         _MK_MASK_CONST(0xffffffff)
#define ARB_SEMA_SMP_GNT_ST_0_WRITE_MASK                        _MK_MASK_CONST(0x0)
// A one in any bit indicates that the processor  reading this register as granted status for that bit. A zero indicates  semaphore not granted.
#define ARB_SEMA_SMP_GNT_ST_0_ARB_31_ARB_0_SHIFT                        _MK_SHIFT_CONST(0)
#define ARB_SEMA_SMP_GNT_ST_0_ARB_31_ARB_0_FIELD                        (_MK_MASK_CONST(0xffffffff) << ARB_SEMA_SMP_GNT_ST_0_ARB_31_ARB_0_SHIFT)
#define ARB_SEMA_SMP_GNT_ST_0_ARB_31_ARB_0_RANGE                        31:0
#define ARB_SEMA_SMP_GNT_ST_0_ARB_31_ARB_0_WOFFSET                      0x0
#define ARB_SEMA_SMP_GNT_ST_0_ARB_31_ARB_0_DEFAULT                      _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_GNT_ST_0_ARB_31_ARB_0_DEFAULT_MASK                 _MK_MASK_CONST(0xffffffff)
#define ARB_SEMA_SMP_GNT_ST_0_ARB_31_ARB_0_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_GNT_ST_0_ARB_31_ARB_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)

// Request Arbitration Semaphore Register

// Register ARB_SEMA_SMP_GET_0
#define ARB_SEMA_SMP_GET_0                      _MK_ADDR_CONST(0x4)
#define ARB_SEMA_SMP_GET_0_WORD_COUNT                   0x1
#define ARB_SEMA_SMP_GET_0_RESET_VAL                    _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_GET_0_RESET_MASK                   _MK_MASK_CONST(0xffffffff)
#define ARB_SEMA_SMP_GET_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_GET_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_GET_0_READ_MASK                    _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_GET_0_WRITE_MASK                   _MK_MASK_CONST(0xffffffff)
// Writing a one in any bit is a request for that  semaphore bit by the processor performing the register write.
#define ARB_SEMA_SMP_GET_0_GET_31_GET_0_SHIFT                   _MK_SHIFT_CONST(0)
#define ARB_SEMA_SMP_GET_0_GET_31_GET_0_FIELD                   (_MK_MASK_CONST(0xffffffff) << ARB_SEMA_SMP_GET_0_GET_31_GET_0_SHIFT)
#define ARB_SEMA_SMP_GET_0_GET_31_GET_0_RANGE                   31:0
#define ARB_SEMA_SMP_GET_0_GET_31_GET_0_WOFFSET                 0x0
#define ARB_SEMA_SMP_GET_0_GET_31_GET_0_DEFAULT                 _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_GET_0_GET_31_GET_0_DEFAULT_MASK                    _MK_MASK_CONST(0xffffffff)
#define ARB_SEMA_SMP_GET_0_GET_31_GET_0_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_GET_0_GET_31_GET_0_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)

// Arbitration Semaphore Put Request Register

// Register ARB_SEMA_SMP_PUT_0
#define ARB_SEMA_SMP_PUT_0                      _MK_ADDR_CONST(0x8)
#define ARB_SEMA_SMP_PUT_0_WORD_COUNT                   0x1
#define ARB_SEMA_SMP_PUT_0_RESET_VAL                    _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_PUT_0_RESET_MASK                   _MK_MASK_CONST(0xffffffff)
#define ARB_SEMA_SMP_PUT_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_PUT_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_PUT_0_READ_MASK                    _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_PUT_0_WRITE_MASK                   _MK_MASK_CONST(0x0)
// Writing a one in any bit will clear the  corresponding semaphore bit by the processor performing the register write.
#define ARB_SEMA_SMP_PUT_0_PUT_31_PUT_0_SHIFT                   _MK_SHIFT_CONST(0)
#define ARB_SEMA_SMP_PUT_0_PUT_31_PUT_0_FIELD                   (_MK_MASK_CONST(0xffffffff) << ARB_SEMA_SMP_PUT_0_PUT_31_PUT_0_SHIFT)
#define ARB_SEMA_SMP_PUT_0_PUT_31_PUT_0_RANGE                   31:0
#define ARB_SEMA_SMP_PUT_0_PUT_31_PUT_0_WOFFSET                 0x0
#define ARB_SEMA_SMP_PUT_0_PUT_31_PUT_0_DEFAULT                 _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_PUT_0_PUT_31_PUT_0_DEFAULT_MASK                    _MK_MASK_CONST(0xffffffff)
#define ARB_SEMA_SMP_PUT_0_PUT_31_PUT_0_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_PUT_0_PUT_31_PUT_0_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)

// Arbitration Request Pending Status (1=PENDING) Register

// Register ARB_SEMA_SMP_REQ_ST_0
#define ARB_SEMA_SMP_REQ_ST_0                   _MK_ADDR_CONST(0xc)
#define ARB_SEMA_SMP_REQ_ST_0_WORD_COUNT                        0x1
#define ARB_SEMA_SMP_REQ_ST_0_RESET_VAL                         _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_REQ_ST_0_RESET_MASK                        _MK_MASK_CONST(0xffffffff)
#define ARB_SEMA_SMP_REQ_ST_0_SW_DEFAULT_VAL                    _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_REQ_ST_0_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_REQ_ST_0_READ_MASK                         _MK_MASK_CONST(0xffffffff)
#define ARB_SEMA_SMP_REQ_ST_0_WRITE_MASK                        _MK_MASK_CONST(0x0)
// A one in any bit indicates a request pending status.  The corresponding bits are set when the request for the individual resource  is pending. The read by CPU of this register shows the pending status for CPU  and a read of this register by AVP (COP) shows the pending status for AVP.
#define ARB_SEMA_SMP_REQ_ST_0_REQ_31_REQ_0_SHIFT                        _MK_SHIFT_CONST(0)
#define ARB_SEMA_SMP_REQ_ST_0_REQ_31_REQ_0_FIELD                        (_MK_MASK_CONST(0xffffffff) << ARB_SEMA_SMP_REQ_ST_0_REQ_31_REQ_0_SHIFT)
#define ARB_SEMA_SMP_REQ_ST_0_REQ_31_REQ_0_RANGE                        31:0
#define ARB_SEMA_SMP_REQ_ST_0_REQ_31_REQ_0_WOFFSET                      0x0
#define ARB_SEMA_SMP_REQ_ST_0_REQ_31_REQ_0_DEFAULT                      _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_REQ_ST_0_REQ_31_REQ_0_DEFAULT_MASK                 _MK_MASK_CONST(0xffffffff)
#define ARB_SEMA_SMP_REQ_ST_0_REQ_31_REQ_0_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define ARB_SEMA_SMP_REQ_ST_0_REQ_31_REQ_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)


//
// REGISTER LIST
//
#define LIST_ARARB_SEMA_REGS(_op_) \
_op_(ARB_SEMA_SMP_GNT_ST_0) \
_op_(ARB_SEMA_SMP_GET_0) \
_op_(ARB_SEMA_SMP_PUT_0) \
_op_(ARB_SEMA_SMP_REQ_ST_0)


//
// ADDRESS SPACES
//

#define BASE_ADDRESS_ARB_SEMA   0x00000000

//
// ARARB_SEMA REGISTER BANKS
//

#define ARB_SEMA0_FIRST_REG 0x0000 // ARB_SEMA_SMP_GNT_ST_0
#define ARB_SEMA0_LAST_REG 0x000c // ARB_SEMA_SMP_REQ_ST_0

#ifndef _MK_SHIFT_CONST
  #define _MK_SHIFT_CONST(_constant_) _constant_
#endif
#ifndef _MK_MASK_CONST
  #define _MK_MASK_CONST(_constant_) _constant_
#endif
#ifndef _MK_ENUM_CONST
  #define _MK_ENUM_CONST(_constant_) (_constant_ ## UL)
#endif
#ifndef _MK_ADDR_CONST
  #define _MK_ADDR_CONST(_constant_) _constant_
#endif

#endif // ifndef ___ARARB_SEMA_H_INC_