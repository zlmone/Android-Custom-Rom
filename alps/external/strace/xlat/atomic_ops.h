/* Generated by ./xlat/gen.sh from ./xlat/atomic_ops.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat atomic_ops in mpers mode

#else

static
const struct xlat atomic_ops[] = {
{ OR1K_ATOMIC_SWAP,		"SWAP"		},
{ OR1K_ATOMIC_CMPXCHG,		"CMPXCHG"	},
{ OR1K_ATOMIC_XCHG,		"XCHG"		},
{ OR1K_ATOMIC_ADD,		"ADD"		},
{ OR1K_ATOMIC_DECPOS,		"DECPOS"	},
{ OR1K_ATOMIC_AND,		"AND"		},
{ OR1K_ATOMIC_OR,		"OR"		},
{ OR1K_ATOMIC_UMAX,		"UMAX"		},
{ OR1K_ATOMIC_UMIN,		"UMIN"		},
 XLAT_END
};

#endif /* !IN_MPERS */