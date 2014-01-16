// Note: For maximum-speed code, see "Optimizing Code" on the Emscripten wiki, https://github.com/kripken/emscripten/wiki/Optimizing-Code
// Note: Some Emscripten settings may limit the speed of the generated code.
// Capture the output of this into a variable, if you want
(function(FUNCTION_TABLE_OFFSET, parentModule) {
  var Module = {};
  var args = [];
  Module.arguments = [];
  Module.print = parentModule.print;
  Module.printErr = parentModule.printErr;
  Module.cleanups = [];
  var H_BASE = 0;
  // Each module has its own stack
  var STACKTOP = parentModule['_malloc'](TOTAL_STACK);
  assert(STACKTOP % 8 == 0);
  var STACK_MAX = STACKTOP + TOTAL_STACK;
  Module.cleanups.push(function() {
    parentModule['_free'](STACKTOP); // XXX ensure exported
    parentModule['_free'](H_BASE);
  });
// === Auto-generated preamble library stuff ===
//========================================
// Runtime essentials
//========================================
function callRuntimeCallbacks(callbacks) {
  while(callbacks.length > 0) {
    var callback = callbacks.pop();
    var func = callback.func;
    if (typeof func === 'number') {
      func = FUNCTION_TABLE[func];
    }
    func(callback.arg === undefined ? null : callback.arg);
  }
}
var __ATINIT__ = []; // functions called during startup
function initRuntime() {
  callRuntimeCallbacks(__ATINIT__);
}
// === Body ===
H_BASE = parentModule["_malloc"](40 + Runtime.GLOBAL_BASE);
// STATICTOP = STATIC_BASE + 40;
/* global initializers */ __ATINIT__.push({ func: function() { runPostSets() } });
var __ZN7WebCore4FileC1ERKN3WTF6StringENS0_23ContentTypeLookupPolicyE;
var __ZN7WebCore4FileC1ERKN3WTF6StringERKNS_3URLES4_;
var __ZN7WebCore4FileC1ERKN3WTF6StringES4_NS0_23ContentTypeLookupPolicyE;
/* memory initializer */ allocate([0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0], "i8", ALLOC_NONE, Runtime.GLOBAL_BASE+H_BASE)
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
;
var Math_min = Math.min;
function invoke_vi(index,a1) {
  try {
    Module["dynCall_vi"](index,a1);
  } catch(e) {
    if (typeof e !== 'number' && e !== 'longjmp') throw e;
    asm["setThrew"](1, 0);
  }
}
function invoke_ii(index,a1) {
  try {
    return Module["dynCall_ii"](index,a1);
  } catch(e) {
    if (typeof e !== 'number' && e !== 'longjmp') throw e;
    asm["setThrew"](1, 0);
  }
}
function invoke_viii(index,a1,a2,a3) {
  try {
    Module["dynCall_viii"](index,a1,a2,a3);
  } catch(e) {
    if (typeof e !== 'number' && e !== 'longjmp') throw e;
    asm["setThrew"](1, 0);
  }
}
function invoke_v(index) {
  try {
    Module["dynCall_v"](index);
  } catch(e) {
    if (typeof e !== 'number' && e !== 'longjmp') throw e;
    asm["setThrew"](1, 0);
  }
}
function invoke_iii(index,a1,a2) {
  try {
    return Module["dynCall_iii"](index,a1,a2);
  } catch(e) {
    if (typeof e !== 'number' && e !== 'longjmp') throw e;
    asm["setThrew"](1, 0);
  }
}
function invoke_viiii(index,a1,a2,a3,a4) {
  try {
    Module["dynCall_viiii"](index,a1,a2,a3,a4);
  } catch(e) {
    if (typeof e !== 'number' && e !== 'longjmp') throw e;
    asm["setThrew"](1, 0);
  }
}
function asmPrintInt(x, y) {
  Module.print('int ' + x + ',' + y);// + ' ' + new Error().stack);
}
function asmPrintFloat(x, y) {
  Module.print('float ' + x + ',' + y);// + ' ' + new Error().stack);
}
// EMSCRIPTEN_START_ASM
var asm = (function(global, env, buffer) {
  'almost asm';
  var HEAP8 = new global.Int8Array(buffer);
  var HEAP16 = new global.Int16Array(buffer);
  var HEAP32 = new global.Int32Array(buffer);
  var HEAPU8 = new global.Uint8Array(buffer);
  var HEAPU16 = new global.Uint16Array(buffer);
  var HEAPU32 = new global.Uint32Array(buffer);
  var HEAPF32 = new global.Float32Array(buffer);
  var HEAPF64 = new global.Float64Array(buffer);
  var STACKTOP=env.STACKTOP|0;
  var STACK_MAX=env.STACK_MAX|0;
  var tempDoublePtr=env.tempDoublePtr|0;
  var ABORT=env.ABORT|0;
  var NaN=+env.NaN;
  var Infinity=+env.Infinity;
  var __ZTVN7WebCore4FileE=(H_BASE+8)|0;
  var __THREW__ = 0;
  var threwValue = 0;
  var setjmpId = 0;
  var undef = 0;
  var tempInt = 0, tempBigInt = 0, tempBigIntP = 0, tempBigIntS = 0, tempBigIntR = 0.0, tempBigIntI = 0, tempBigIntD = 0, tempValue = 0, tempDouble = 0.0;
  var tempRet0 = 0;
  var tempRet1 = 0;
  var tempRet2 = 0;
  var tempRet3 = 0;
  var tempRet4 = 0;
  var tempRet5 = 0;
  var tempRet6 = 0;
  var tempRet7 = 0;
  var tempRet8 = 0;
  var tempRet9 = 0;
  var Math_floor=global.Math.floor;
  var Math_abs=global.Math.abs;
  var Math_sqrt=global.Math.sqrt;
  var Math_pow=global.Math.pow;
  var Math_cos=global.Math.cos;
  var Math_sin=global.Math.sin;
  var Math_tan=global.Math.tan;
  var Math_acos=global.Math.acos;
  var Math_asin=global.Math.asin;
  var Math_atan=global.Math.atan;
  var Math_atan2=global.Math.atan2;
  var Math_exp=global.Math.exp;
  var Math_log=global.Math.log;
  var Math_ceil=global.Math.ceil;
  var Math_imul=global.Math.imul;
  var abort=env.abort;
  var assert=env.assert;
  var asmPrintInt=env.asmPrintInt;
  var asmPrintFloat=env.asmPrintFloat;
  var Math_min=env.min;
  var invoke_vi=env.invoke_vi;
  var invoke_ii=env.invoke_ii;
  var invoke_viii=env.invoke_viii;
  var invoke_v=env.invoke_v;
  var invoke_iii=env.invoke_iii;
  var invoke_viiii=env.invoke_viiii;
  var _llvm_lifetime_end=env._llvm_lifetime_end;
  var _malloc=env._malloc;
  var ___setErrNo=env.___setErrNo;
  var _free=env._free;
  var _llvm_lifetime_start=env._llvm_lifetime_start;
  var _fflush=env._fflush;
  var tempFloat = 0.0;
// EMSCRIPTEN_START_FUNCS
function __ZN7WebCore4FileC2ERKN3WTF6StringES4_NS0_23ContentTypeLookupPolicyE(i1, i2, i3, i4) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 i4 = i4 | 0;
 var i5 = 0, i6 = 0, i7 = 0, i8 = 0, i9 = 0, i10 = 0;
 i5 = STACKTOP;
 STACKTOP = STACKTOP + 16 | 0;
 i6 = i5 | 0;
 i7 = i5 + 8 | 0;
 i8 = i1 | 0;
 __ZN7WebCoreL26getContentTypeFromFileNameERKN3WTF6StringENS_4File23ContentTypeLookupPolicyE(i6, i3, i4);
 i4 = __ZN3WTF10fastMallocEj(20) | 0;
 i9 = i4;
 _memset(i4 | 0, 0, 20) | 0;
 i4 = i7 | 0;
 HEAP32[i4 >> 2] = i9;
 __ZN7WebCore8BlobData14setContentTypeERKN3WTF6StringE(i9, i6);
 __ZN7WebCore8BlobData10appendFileERKN3WTF6StringE(i9, i2);
 i9 = HEAP32[i6 >> 2] | 0;
 do {
  if ((i9 | 0) != 0) {
   i6 = i9 | 0;
   i10 = (HEAP32[i6 >> 2] | 0) - 2 | 0;
   if ((i10 | 0) == 0) {
    __ZN3WTF10StringImpl7destroyEPS0_(i9);
    break;
   } else {
    HEAP32[i6 >> 2] = i10;
    break;
   }
  }
 } while (0);
 __ZN7WebCore4BlobC2ENSt3__110unique_ptrINS_8BlobDataENS1_14default_deleteIS3_EEEEx(i8, i7, -1, -1);
 i7 = HEAP32[i4 >> 2] | 0;
 HEAP32[i4 >> 2] = 0;
 if ((i7 | 0) != 0) {
  i4 = i7 + 16 | 0;
  i8 = HEAP32[i4 >> 2] | 0;
  i9 = i7 + 8 | 0;
  if ((i8 | 0) != 0) {
   i10 = HEAP32[i9 >> 2] | 0;
   i6 = i10 + (i8 * 88 & -1) | 0;
   i8 = i10;
   while (1) {
    __ZN7WebCore12BlobDataItemD2Ev(i8);
    i8 = i8 + 88 | 0;
    if ((i8 | 0) == (i6 | 0)) {
     break;
    }
   }
   HEAP32[i4 >> 2] = 0;
  }
  i4 = HEAP32[i9 >> 2] | 0;
  if ((i4 | 0) != 0) {
   HEAP32[i9 >> 2] = 0;
   HEAP32[i7 + 12 >> 2] = 0;
   __ZN3WTF8fastFreeEPv(i4);
  }
  i4 = HEAP32[i7 + 4 >> 2] | 0;
  do {
   if ((i4 | 0) != 0) {
    i9 = i4 | 0;
    i6 = (HEAP32[i9 >> 2] | 0) - 2 | 0;
    if ((i6 | 0) == 0) {
     __ZN3WTF10StringImpl7destroyEPS0_(i4);
     break;
    } else {
     HEAP32[i9 >> 2] = i6;
     break;
    }
   }
  } while (0);
  i4 = HEAP32[i7 >> 2] | 0;
  do {
   if ((i4 | 0) != 0) {
    i6 = i4 | 0;
    i9 = (HEAP32[i6 >> 2] | 0) - 2 | 0;
    if ((i9 | 0) == 0) {
     __ZN3WTF10StringImpl7destroyEPS0_(i4);
     break;
    } else {
     HEAP32[i6 >> 2] = i9;
     break;
    }
   }
  } while (0);
  __ZN3WTF8fastFreeEPv(i7);
 }
 HEAP32[i1 >> 2] = H_BASE + 16;
 i7 = HEAP32[i2 >> 2] | 0;
 HEAP32[i1 + 72 >> 2] = i7;
 if ((i7 | 0) != 0) {
  i2 = i7 | 0;
  HEAP32[i2 >> 2] = (HEAP32[i2 >> 2] | 0) + 2;
 }
 i2 = HEAP32[i3 >> 2] | 0;
 HEAP32[i1 + 76 >> 2] = i2;
 if ((i2 | 0) == 0) {
  STACKTOP = i5;
  return;
 }
 i1 = i2 | 0;
 HEAP32[i1 >> 2] = (HEAP32[i1 >> 2] | 0) + 2;
 STACKTOP = i5;
 return;
}
function __ZN7WebCore4FileC1ERKN3WTF6StringES4_NS0_23ContentTypeLookupPolicyE(i1, i2, i3, i4) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 i4 = i4 | 0;
 var i5 = 0, i6 = 0, i7 = 0, i8 = 0, i9 = 0, i10 = 0;
 i5 = STACKTOP;
 STACKTOP = STACKTOP + 16 | 0;
 i6 = i5 | 0;
 i7 = i5 + 8 | 0;
 i8 = i1 | 0;
 __ZN7WebCoreL26getContentTypeFromFileNameERKN3WTF6StringENS_4File23ContentTypeLookupPolicyE(i6, i3, i4);
 i4 = __ZN3WTF10fastMallocEj(20) | 0;
 i9 = i4;
 _memset(i4 | 0, 0, 20) | 0;
 i4 = i7 | 0;
 HEAP32[i4 >> 2] = i9;
 __ZN7WebCore8BlobData14setContentTypeERKN3WTF6StringE(i9, i6);
 __ZN7WebCore8BlobData10appendFileERKN3WTF6StringE(i9, i2);
 i9 = HEAP32[i6 >> 2] | 0;
 do {
  if ((i9 | 0) != 0) {
   i6 = i9 | 0;
   i10 = (HEAP32[i6 >> 2] | 0) - 2 | 0;
   if ((i10 | 0) == 0) {
    __ZN3WTF10StringImpl7destroyEPS0_(i9);
    break;
   } else {
    HEAP32[i6 >> 2] = i10;
    break;
   }
  }
 } while (0);
 __ZN7WebCore4BlobC2ENSt3__110unique_ptrINS_8BlobDataENS1_14default_deleteIS3_EEEEx(i8, i7, -1, -1);
 i7 = HEAP32[i4 >> 2] | 0;
 HEAP32[i4 >> 2] = 0;
 if ((i7 | 0) != 0) {
  i4 = i7 + 16 | 0;
  i8 = HEAP32[i4 >> 2] | 0;
  i9 = i7 + 8 | 0;
  if ((i8 | 0) != 0) {
   i10 = HEAP32[i9 >> 2] | 0;
   i6 = i10 + (i8 * 88 & -1) | 0;
   i8 = i10;
   while (1) {
    __ZN7WebCore12BlobDataItemD2Ev(i8);
    i8 = i8 + 88 | 0;
    if ((i8 | 0) == (i6 | 0)) {
     break;
    }
   }
   HEAP32[i4 >> 2] = 0;
  }
  i4 = HEAP32[i9 >> 2] | 0;
  if ((i4 | 0) != 0) {
   HEAP32[i9 >> 2] = 0;
   HEAP32[i7 + 12 >> 2] = 0;
   __ZN3WTF8fastFreeEPv(i4);
  }
  i4 = HEAP32[i7 + 4 >> 2] | 0;
  do {
   if ((i4 | 0) != 0) {
    i9 = i4 | 0;
    i6 = (HEAP32[i9 >> 2] | 0) - 2 | 0;
    if ((i6 | 0) == 0) {
     __ZN3WTF10StringImpl7destroyEPS0_(i4);
     break;
    } else {
     HEAP32[i9 >> 2] = i6;
     break;
    }
   }
  } while (0);
  i4 = HEAP32[i7 >> 2] | 0;
  do {
   if ((i4 | 0) != 0) {
    i6 = i4 | 0;
    i9 = (HEAP32[i6 >> 2] | 0) - 2 | 0;
    if ((i9 | 0) == 0) {
     __ZN3WTF10StringImpl7destroyEPS0_(i4);
     break;
    } else {
     HEAP32[i6 >> 2] = i9;
     break;
    }
   }
  } while (0);
  __ZN3WTF8fastFreeEPv(i7);
 }
 HEAP32[i1 >> 2] = H_BASE + 16;
 i7 = HEAP32[i2 >> 2] | 0;
 HEAP32[i1 + 72 >> 2] = i7;
 if ((i7 | 0) != 0) {
  i2 = i7 | 0;
  HEAP32[i2 >> 2] = (HEAP32[i2 >> 2] | 0) + 2;
 }
 i2 = HEAP32[i3 >> 2] | 0;
 HEAP32[i1 + 76 >> 2] = i2;
 if ((i2 | 0) == 0) {
  STACKTOP = i5;
  return;
 }
 i1 = i2 | 0;
 HEAP32[i1 >> 2] = (HEAP32[i1 >> 2] | 0) + 2;
 STACKTOP = i5;
 return;
}
function __ZN7WebCore4FileC2ERKN3WTF6StringENS0_23ContentTypeLookupPolicyE(i1, i2, i3) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 var i4 = 0, i5 = 0, i6 = 0, i7 = 0, i8 = 0, i9 = 0, i10 = 0;
 i4 = STACKTOP;
 STACKTOP = STACKTOP + 16 | 0;
 i5 = i4 | 0;
 i6 = i4 + 8 | 0;
 i7 = i1 | 0;
 __ZN7WebCoreL26getContentTypeFromFileNameERKN3WTF6StringENS_4File23ContentTypeLookupPolicyE(i5, i2, i3);
 i3 = __ZN3WTF10fastMallocEj(20) | 0;
 i8 = i3;
 _memset(i3 | 0, 0, 20) | 0;
 i3 = i6 | 0;
 HEAP32[i3 >> 2] = i8;
 __ZN7WebCore8BlobData14setContentTypeERKN3WTF6StringE(i8, i5);
 __ZN7WebCore8BlobData10appendFileERKN3WTF6StringE(i8, i2);
 i8 = HEAP32[i5 >> 2] | 0;
 do {
  if ((i8 | 0) != 0) {
   i5 = i8 | 0;
   i9 = (HEAP32[i5 >> 2] | 0) - 2 | 0;
   if ((i9 | 0) == 0) {
    __ZN3WTF10StringImpl7destroyEPS0_(i8);
    break;
   } else {
    HEAP32[i5 >> 2] = i9;
    break;
   }
  }
 } while (0);
 __ZN7WebCore4BlobC2ENSt3__110unique_ptrINS_8BlobDataENS1_14default_deleteIS3_EEEEx(i7, i6, -1, -1);
 i6 = HEAP32[i3 >> 2] | 0;
 HEAP32[i3 >> 2] = 0;
 if ((i6 | 0) != 0) {
  i3 = i6 + 16 | 0;
  i7 = HEAP32[i3 >> 2] | 0;
  i8 = i6 + 8 | 0;
  if ((i7 | 0) != 0) {
   i9 = HEAP32[i8 >> 2] | 0;
   i5 = i9 + (i7 * 88 & -1) | 0;
   i7 = i9;
   while (1) {
    __ZN7WebCore12BlobDataItemD2Ev(i7);
    i7 = i7 + 88 | 0;
    if ((i7 | 0) == (i5 | 0)) {
     break;
    }
   }
   HEAP32[i3 >> 2] = 0;
  }
  i3 = HEAP32[i8 >> 2] | 0;
  if ((i3 | 0) != 0) {
   HEAP32[i8 >> 2] = 0;
   HEAP32[i6 + 12 >> 2] = 0;
   __ZN3WTF8fastFreeEPv(i3);
  }
  i3 = HEAP32[i6 + 4 >> 2] | 0;
  do {
   if ((i3 | 0) != 0) {
    i8 = i3 | 0;
    i5 = (HEAP32[i8 >> 2] | 0) - 2 | 0;
    if ((i5 | 0) == 0) {
     __ZN3WTF10StringImpl7destroyEPS0_(i3);
     break;
    } else {
     HEAP32[i8 >> 2] = i5;
     break;
    }
   }
  } while (0);
  i3 = HEAP32[i6 >> 2] | 0;
  do {
   if ((i3 | 0) != 0) {
    i5 = i3 | 0;
    i8 = (HEAP32[i5 >> 2] | 0) - 2 | 0;
    if ((i8 | 0) == 0) {
     __ZN3WTF10StringImpl7destroyEPS0_(i3);
     break;
    } else {
     HEAP32[i5 >> 2] = i8;
     break;
    }
   }
  } while (0);
  __ZN3WTF8fastFreeEPv(i6);
 }
 HEAP32[i1 >> 2] = H_BASE + 16;
 i6 = HEAP32[i2 >> 2] | 0;
 HEAP32[i1 + 72 >> 2] = i6;
 if ((i6 | 0) == 0) {
  i10 = i1 + 76 | 0;
  __ZN7WebCore15pathGetFileNameERKN3WTF6StringE(i10, i2);
  STACKTOP = i4;
  return;
 }
 i3 = i6 | 0;
 HEAP32[i3 >> 2] = (HEAP32[i3 >> 2] | 0) + 2;
 i10 = i1 + 76 | 0;
 __ZN7WebCore15pathGetFileNameERKN3WTF6StringE(i10, i2);
 STACKTOP = i4;
 return;
}
function __ZN7WebCore4FileC1ERKN3WTF6StringENS0_23ContentTypeLookupPolicyE(i1, i2, i3) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 var i4 = 0, i5 = 0, i6 = 0, i7 = 0, i8 = 0, i9 = 0, i10 = 0;
 i4 = STACKTOP;
 STACKTOP = STACKTOP + 16 | 0;
 i5 = i4 | 0;
 i6 = i4 + 8 | 0;
 i7 = i1 | 0;
 __ZN7WebCoreL26getContentTypeFromFileNameERKN3WTF6StringENS_4File23ContentTypeLookupPolicyE(i5, i2, i3);
 i3 = __ZN3WTF10fastMallocEj(20) | 0;
 i8 = i3;
 _memset(i3 | 0, 0, 20) | 0;
 i3 = i6 | 0;
 HEAP32[i3 >> 2] = i8;
 __ZN7WebCore8BlobData14setContentTypeERKN3WTF6StringE(i8, i5);
 __ZN7WebCore8BlobData10appendFileERKN3WTF6StringE(i8, i2);
 i8 = HEAP32[i5 >> 2] | 0;
 do {
  if ((i8 | 0) != 0) {
   i5 = i8 | 0;
   i9 = (HEAP32[i5 >> 2] | 0) - 2 | 0;
   if ((i9 | 0) == 0) {
    __ZN3WTF10StringImpl7destroyEPS0_(i8);
    break;
   } else {
    HEAP32[i5 >> 2] = i9;
    break;
   }
  }
 } while (0);
 __ZN7WebCore4BlobC2ENSt3__110unique_ptrINS_8BlobDataENS1_14default_deleteIS3_EEEEx(i7, i6, -1, -1);
 i6 = HEAP32[i3 >> 2] | 0;
 HEAP32[i3 >> 2] = 0;
 if ((i6 | 0) != 0) {
  i3 = i6 + 16 | 0;
  i7 = HEAP32[i3 >> 2] | 0;
  i8 = i6 + 8 | 0;
  if ((i7 | 0) != 0) {
   i9 = HEAP32[i8 >> 2] | 0;
   i5 = i9 + (i7 * 88 & -1) | 0;
   i7 = i9;
   while (1) {
    __ZN7WebCore12BlobDataItemD2Ev(i7);
    i7 = i7 + 88 | 0;
    if ((i7 | 0) == (i5 | 0)) {
     break;
    }
   }
   HEAP32[i3 >> 2] = 0;
  }
  i3 = HEAP32[i8 >> 2] | 0;
  if ((i3 | 0) != 0) {
   HEAP32[i8 >> 2] = 0;
   HEAP32[i6 + 12 >> 2] = 0;
   __ZN3WTF8fastFreeEPv(i3);
  }
  i3 = HEAP32[i6 + 4 >> 2] | 0;
  do {
   if ((i3 | 0) != 0) {
    i8 = i3 | 0;
    i5 = (HEAP32[i8 >> 2] | 0) - 2 | 0;
    if ((i5 | 0) == 0) {
     __ZN3WTF10StringImpl7destroyEPS0_(i3);
     break;
    } else {
     HEAP32[i8 >> 2] = i5;
     break;
    }
   }
  } while (0);
  i3 = HEAP32[i6 >> 2] | 0;
  do {
   if ((i3 | 0) != 0) {
    i5 = i3 | 0;
    i8 = (HEAP32[i5 >> 2] | 0) - 2 | 0;
    if ((i8 | 0) == 0) {
     __ZN3WTF10StringImpl7destroyEPS0_(i3);
     break;
    } else {
     HEAP32[i5 >> 2] = i8;
     break;
    }
   }
  } while (0);
  __ZN3WTF8fastFreeEPv(i6);
 }
 HEAP32[i1 >> 2] = H_BASE + 16;
 i6 = HEAP32[i2 >> 2] | 0;
 HEAP32[i1 + 72 >> 2] = i6;
 if ((i6 | 0) == 0) {
  i10 = i1 + 76 | 0;
  __ZN7WebCore15pathGetFileNameERKN3WTF6StringE(i10, i2);
  STACKTOP = i4;
  return;
 }
 i3 = i6 | 0;
 HEAP32[i3 >> 2] = (HEAP32[i3 >> 2] | 0) + 2;
 i10 = i1 + 76 | 0;
 __ZN7WebCore15pathGetFileNameERKN3WTF6StringE(i10, i2);
 STACKTOP = i4;
 return;
}
function __ZN7WebCoreL26getContentTypeFromFileNameERKN3WTF6StringENS_4File23ContentTypeLookupPolicyE(i1, i2, i3) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 var i4 = 0, i5 = 0, i6 = 0, i7 = 0, i8 = 0, i9 = 0, i10 = 0;
 i4 = STACKTOP;
 STACKTOP = STACKTOP + 32 | 0;
 i5 = i4 | 0;
 i6 = i4 + 8 | 0;
 i7 = i4 + 16 | 0;
 i8 = i4 + 24 | 0;
 i9 = i1 | 0;
 HEAP32[i9 >> 2] = 0;
 i1 = HEAP32[i2 >> 2] | 0;
 if ((i1 | 0) == 0) {
  STACKTOP = i4;
  return;
 }
 i10 = __ZN3WTF10StringImpl11reverseFindEtj(i1, 46, -1) | 0;
 if ((i10 | 0) == -1) {
  STACKTOP = i4;
  return;
 }
 i1 = i10 + 1 | 0;
 if ((i3 | 0) == 0) {
  __ZNK3WTF6String9substringEjj(i6, i2, i1, -1);
  __ZN7WebCore16MIMETypeRegistry32getWellKnownMIMETypeForExtensionERKN3WTF6StringE(i5, i6);
  i3 = i5 | 0;
  i5 = HEAP32[i3 >> 2] | 0;
  HEAP32[i3 >> 2] = 0;
  HEAP32[i9 >> 2] = i5;
  i5 = HEAP32[i6 >> 2] | 0;
  if ((i5 | 0) == 0) {
   STACKTOP = i4;
   return;
  }
  i6 = i5 | 0;
  i3 = (HEAP32[i6 >> 2] | 0) - 2 | 0;
  if ((i3 | 0) == 0) {
   __ZN3WTF10StringImpl7destroyEPS0_(i5);
   STACKTOP = i4;
   return;
  } else {
   HEAP32[i6 >> 2] = i3;
   STACKTOP = i4;
   return;
  }
 } else {
  __ZNK3WTF6String9substringEjj(i8, i2, i1, -1);
  __ZN7WebCore16MIMETypeRegistry23getMIMETypeForExtensionERKN3WTF6StringE(i7, i8);
  i1 = i7 | 0;
  i7 = HEAP32[i1 >> 2] | 0;
  HEAP32[i1 >> 2] = 0;
  HEAP32[i9 >> 2] = i7;
  i7 = HEAP32[i8 >> 2] | 0;
  if ((i7 | 0) == 0) {
   STACKTOP = i4;
   return;
  }
  i8 = i7 | 0;
  i9 = (HEAP32[i8 >> 2] | 0) - 2 | 0;
  if ((i9 | 0) == 0) {
   __ZN3WTF10StringImpl7destroyEPS0_(i7);
   STACKTOP = i4;
   return;
  } else {
   HEAP32[i8 >> 2] = i9;
   STACKTOP = i4;
   return;
  }
 }
}
function __ZN7WebCore4FileC2ERKN3WTF6StringERKNS_3URLES4_(i1, i2, i3, i4) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 i4 = i4 | 0;
 var i5 = 0, i6 = 0;
 i5 = STACKTOP;
 STACKTOP = STACKTOP + 8 | 0;
 i6 = i5 | 0;
 __ZN7WebCore4BlobC2ERKNS_3URLERKN3WTF6StringEx(i1 | 0, i3, i4, -1, -1);
 HEAP32[i1 >> 2] = H_BASE + 16;
 i4 = HEAP32[i2 >> 2] | 0;
 HEAP32[i1 + 72 >> 2] = i4;
 if ((i4 | 0) != 0) {
  i3 = i4 | 0;
  HEAP32[i3 >> 2] = (HEAP32[i3 >> 2] | 0) + 2;
 }
 i3 = i1 + 76 | 0;
 HEAP32[i3 >> 2] = 0;
 __ZN7WebCore15pathGetFileNameERKN3WTF6StringE(i6, i2);
 i2 = i6 | 0;
 i6 = HEAP32[i2 >> 2] | 0;
 HEAP32[i2 >> 2] = 0;
 i1 = HEAP32[i3 >> 2] | 0;
 HEAP32[i3 >> 2] = i6;
 do {
  if ((i1 | 0) != 0) {
   i6 = i1 | 0;
   i3 = (HEAP32[i6 >> 2] | 0) - 2 | 0;
   if ((i3 | 0) == 0) {
    __ZN3WTF10StringImpl7destroyEPS0_(i1);
    break;
   } else {
    HEAP32[i6 >> 2] = i3;
    break;
   }
  }
 } while (0);
 i1 = HEAP32[i2 >> 2] | 0;
 if ((i1 | 0) == 0) {
  STACKTOP = i5;
  return;
 }
 i2 = i1 | 0;
 i3 = (HEAP32[i2 >> 2] | 0) - 2 | 0;
 if ((i3 | 0) == 0) {
  __ZN3WTF10StringImpl7destroyEPS0_(i1);
  STACKTOP = i5;
  return;
 } else {
  HEAP32[i2 >> 2] = i3;
  STACKTOP = i5;
  return;
 }
}
function __ZN7WebCore4FileC1ERKN3WTF6StringERKNS_3URLES4_(i1, i2, i3, i4) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 i4 = i4 | 0;
 var i5 = 0, i6 = 0;
 i5 = STACKTOP;
 STACKTOP = STACKTOP + 8 | 0;
 i6 = i5 | 0;
 __ZN7WebCore4BlobC2ERKNS_3URLERKN3WTF6StringEx(i1 | 0, i3, i4, -1, -1);
 HEAP32[i1 >> 2] = H_BASE + 16;
 i4 = HEAP32[i2 >> 2] | 0;
 HEAP32[i1 + 72 >> 2] = i4;
 if ((i4 | 0) != 0) {
  i3 = i4 | 0;
  HEAP32[i3 >> 2] = (HEAP32[i3 >> 2] | 0) + 2;
 }
 i3 = i1 + 76 | 0;
 HEAP32[i3 >> 2] = 0;
 __ZN7WebCore15pathGetFileNameERKN3WTF6StringE(i6, i2);
 i2 = i6 | 0;
 i6 = HEAP32[i2 >> 2] | 0;
 HEAP32[i2 >> 2] = 0;
 i1 = HEAP32[i3 >> 2] | 0;
 HEAP32[i3 >> 2] = i6;
 do {
  if ((i1 | 0) != 0) {
   i6 = i1 | 0;
   i3 = (HEAP32[i6 >> 2] | 0) - 2 | 0;
   if ((i3 | 0) == 0) {
    __ZN3WTF10StringImpl7destroyEPS0_(i1);
    break;
   } else {
    HEAP32[i6 >> 2] = i3;
    break;
   }
  }
 } while (0);
 i1 = HEAP32[i2 >> 2] | 0;
 if ((i1 | 0) == 0) {
  STACKTOP = i5;
  return;
 }
 i2 = i1 | 0;
 i3 = (HEAP32[i2 >> 2] | 0) - 2 | 0;
 if ((i3 | 0) == 0) {
  __ZN3WTF10StringImpl7destroyEPS0_(i1);
  STACKTOP = i5;
  return;
 } else {
  HEAP32[i2 >> 2] = i3;
  STACKTOP = i5;
  return;
 }
}
function __ZN7WebCore12BlobDataItemD2Ev(i1) {
 i1 = i1 | 0;
 var i2 = 0, i3 = 0, i4 = 0;
 i2 = HEAP32[i1 + 12 >> 2] | 0;
 do {
  if ((i2 | 0) != 0) {
   i3 = i2 | 0;
   i4 = (HEAP32[i3 >> 2] | 0) - 2 | 0;
   if ((i4 | 0) == 0) {
    __ZN3WTF10StringImpl7destroyEPS0_(i2);
    break;
   } else {
    HEAP32[i3 >> 2] = i4;
    break;
   }
  }
 } while (0);
 i2 = HEAP32[i1 + 8 >> 2] | 0;
 do {
  if ((i2 | 0) != 0) {
   i4 = i2 | 0;
   i3 = (HEAP32[i4 >> 2] | 0) - 2 | 0;
   if ((i3 | 0) == 0) {
    __ZN3WTF10StringImpl7destroyEPS0_(i2);
    break;
   } else {
    HEAP32[i4 >> 2] = i3;
    break;
   }
  }
 } while (0);
 i2 = HEAP32[i1 + 4 >> 2] | 0;
 if ((i2 | 0) == 0) {
  return;
 }
 i1 = i2 | 0;
 i3 = i2 | 0;
 if (((tempValue = HEAP32[i3 >> 2] | 0, HEAP32[i3 >> 2] = tempValue - 1, tempValue) - 1 | 0) > 0) {
  return;
 }
 i3 = i1 + 12 | 0;
 if ((HEAP32[i3 >> 2] | 0) != 0) {
  HEAP32[i3 >> 2] = 0;
 }
 i3 = i1 + 4 | 0;
 i4 = HEAP32[i3 >> 2] | 0;
 if ((i4 | 0) != 0) {
  HEAP32[i3 >> 2] = 0;
  HEAP32[i1 + 8 >> 2] = 0;
  __ZN3WTF8fastFreeEPv(i4);
 }
 __ZN3WTF8fastFreeEPv(i2);
 return;
}
function __ZNK7WebCore4File15captureSnapshotERxRd(i1, i2, i3) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 var i4 = 0, i5 = 0, i6 = 0, i7 = 0, d8 = +0;
 i4 = STACKTOP;
 STACKTOP = STACKTOP + 24 | 0;
 i5 = i4 | 0;
 i6 = i5 | 0;
 HEAPF64[i6 >> 3] = +NaN;
 i7 = i5 + 8 | 0;
 HEAP32[i7 >> 2] = -1;
 HEAP32[i7 + 4 >> 2] = -1;
 HEAP32[i5 + 16 >> 2] = 0;
 if (__ZN7WebCore15getFileMetadataERKN3WTF6StringERNS_12FileMetadataE(i1 + 72 | 0, i5) | 0) {
  i5 = HEAP32[i7 + 4 >> 2] | 0;
  HEAP32[i2 >> 2] = HEAP32[i7 >> 2];
  HEAP32[i2 + 4 >> 2] = i5;
  d8 = +HEAPF64[i6 >> 3];
  HEAPF64[i3 >> 3] = d8;
  STACKTOP = i4;
  return;
 } else {
  HEAP32[i2 >> 2] = 0;
  HEAP32[i2 + 4 >> 2] = 0;
  d8 = +NaN;
  HEAPF64[i3 >> 3] = d8;
  STACKTOP = i4;
  return;
 }
}
function __ZNK7WebCore4File16lastModifiedDateEv(i1) {
 i1 = i1 | 0;
 var i2 = 0, i3 = 0, d4 = +0, i5 = 0, i6 = 0, d7 = +0, d8 = +0;
 i2 = STACKTOP;
 STACKTOP = STACKTOP + 8 | 0;
 i3 = i2 | 0;
 do {
  if (__ZN7WebCore23getFileModificationTimeERKN3WTF6StringERl(i1 + 72 | 0, i3) | 0) {
   d4 = +(HEAP32[i3 >> 2] | 0);
   HEAPF64[tempDoublePtr >> 3] = d4;
   i5 = HEAP32[tempDoublePtr + 4 >> 2] & 2146435072;
   i6 = 2146435072;
   if (i5 >>> 0 < i6 >>> 0 | i5 >>> 0 == i6 >>> 0 & (HEAP32[tempDoublePtr >> 2] & 0) >>> 0 < 0 >>> 0) {
    d7 = d4;
   } else {
    break;
   }
   d8 = d7 * +1e3;
   STACKTOP = i2;
   return +d8;
  }
 } while (0);
 d7 = +__ZN3WTF11currentTimeEv();
 d8 = d7 * +1e3;
 STACKTOP = i2;
 return +d8;
}
function __ZN7WebCore4FileD0Ev(i1) {
 i1 = i1 | 0;
 var i2 = 0, i3 = 0, i4 = 0;
 HEAP32[i1 >> 2] = H_BASE + 16;
 i2 = HEAP32[i1 + 76 >> 2] | 0;
 do {
  if ((i2 | 0) != 0) {
   i3 = i2 | 0;
   i4 = (HEAP32[i3 >> 2] | 0) - 2 | 0;
   if ((i4 | 0) == 0) {
    __ZN3WTF10StringImpl7destroyEPS0_(i2);
    break;
   } else {
    HEAP32[i3 >> 2] = i4;
    break;
   }
  }
 } while (0);
 i2 = HEAP32[i1 + 72 >> 2] | 0;
 do {
  if ((i2 | 0) != 0) {
   i4 = i2 | 0;
   i3 = (HEAP32[i4 >> 2] | 0) - 2 | 0;
   if ((i3 | 0) == 0) {
    __ZN3WTF10StringImpl7destroyEPS0_(i2);
    break;
   } else {
    HEAP32[i4 >> 2] = i3;
    break;
   }
  }
 } while (0);
 __ZN7WebCore4BlobD2Ev(i1 | 0);
 __ZN3WTF8fastFreeEPv(i1);
 return;
}
function __ZN7WebCore4FileD1Ev(i1) {
 i1 = i1 | 0;
 var i2 = 0, i3 = 0, i4 = 0;
 HEAP32[i1 >> 2] = H_BASE + 16;
 i2 = HEAP32[i1 + 76 >> 2] | 0;
 do {
  if ((i2 | 0) != 0) {
   i3 = i2 | 0;
   i4 = (HEAP32[i3 >> 2] | 0) - 2 | 0;
   if ((i4 | 0) == 0) {
    __ZN3WTF10StringImpl7destroyEPS0_(i2);
    break;
   } else {
    HEAP32[i3 >> 2] = i4;
    break;
   }
  }
 } while (0);
 i2 = HEAP32[i1 + 72 >> 2] | 0;
 do {
  if ((i2 | 0) != 0) {
   i4 = i2 | 0;
   i3 = (HEAP32[i4 >> 2] | 0) - 2 | 0;
   if ((i3 | 0) == 0) {
    __ZN3WTF10StringImpl7destroyEPS0_(i2);
    break;
   } else {
    HEAP32[i4 >> 2] = i3;
    break;
   }
  }
 } while (0);
 __ZN7WebCore4BlobD2Ev(i1 | 0);
 return;
}
function _memset(i1, i2, i3) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 var i4 = 0, i5 = 0, i6 = 0, i7 = 0;
 i4 = i1 + i3 | 0;
 if ((i3 | 0) >= 20) {
  i2 = i2 & 255;
  i5 = i1 & 3;
  i6 = i2 | i2 << 8 | i2 << 16 | i2 << 24;
  i7 = i4 & ~3;
  if (i5) {
   i5 = i1 + 4 - i5 | 0;
   while ((i1 | 0) < (i5 | 0)) {
    HEAP8[i1] = i2;
    i1 = i1 + 1 | 0;
   }
  }
  while ((i1 | 0) < (i7 | 0)) {
   HEAP32[i1 >> 2] = i6;
   i1 = i1 + 4 | 0;
  }
 }
 while ((i1 | 0) < (i4 | 0)) {
  HEAP8[i1] = i2;
  i1 = i1 + 1 | 0;
 }
 return i1 - i3 | 0;
}
function _memcpy(i1, i2, i3) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 var i4 = 0;
 i4 = i1 | 0;
 if ((i1 & 3) == (i2 & 3)) {
  while (i1 & 3) {
   if ((i3 | 0) == 0) return i4 | 0;
   HEAP8[i1] = HEAP8[i2] | 0;
   i1 = i1 + 1 | 0;
   i2 = i2 + 1 | 0;
   i3 = i3 - 1 | 0;
  }
  while ((i3 | 0) >= 4) {
   HEAP32[i1 >> 2] = HEAP32[i2 >> 2];
   i1 = i1 + 4 | 0;
   i2 = i2 + 4 | 0;
   i3 = i3 - 4 | 0;
  }
 }
 while ((i3 | 0) > 0) {
  HEAP8[i1] = HEAP8[i2] | 0;
  i1 = i1 + 1 | 0;
  i2 = i2 + 1 | 0;
  i3 = i3 - 1 | 0;
 }
 return i4 | 0;
}
function copyTempDouble(i1) {
 i1 = i1 | 0;
 HEAP8[tempDoublePtr] = HEAP8[i1];
 HEAP8[tempDoublePtr + 1 | 0] = HEAP8[i1 + 1 | 0];
 HEAP8[tempDoublePtr + 2 | 0] = HEAP8[i1 + 2 | 0];
 HEAP8[tempDoublePtr + 3 | 0] = HEAP8[i1 + 3 | 0];
 HEAP8[tempDoublePtr + 4 | 0] = HEAP8[i1 + 4 | 0];
 HEAP8[tempDoublePtr + 5 | 0] = HEAP8[i1 + 5 | 0];
 HEAP8[tempDoublePtr + 6 | 0] = HEAP8[i1 + 6 | 0];
 HEAP8[tempDoublePtr + 7 | 0] = HEAP8[i1 + 7 | 0];
}
function __ZNK7WebCore4File4sizeEv(i1) {
 i1 = i1 | 0;
 var i2 = 0, i3 = 0, i4 = 0;
 i2 = STACKTOP;
 STACKTOP = STACKTOP + 8 | 0;
 i3 = i2 | 0;
 i4 = __ZN7WebCore11getFileSizeERKN3WTF6StringERx(i1 + 72 | 0, i3) | 0;
 STACKTOP = i2;
 return (tempRet0 = i4 ? HEAP32[i3 + 4 >> 2] | 0 : 0, i4 ? HEAP32[i3 >> 2] | 0 : 0) | 0;
}
function runPostSets() {
 HEAP32[H_BASE + 16 >> 2] = F_BASE_vi + 2;
 HEAP32[H_BASE + 20 >> 2] = F_BASE_vi + 4;
 HEAP32[H_BASE + 24 >> 2] = F_BASE_ii + 4;
 HEAP32[H_BASE + 28 >> 2] = F_BASE_ii + 2;
 HEAP32[H_BASE + 32 >> 2] = F_BASE_ii + 6;
}
function copyTempFloat(i1) {
 i1 = i1 | 0;
 HEAP8[tempDoublePtr] = HEAP8[i1];
 HEAP8[tempDoublePtr + 1 | 0] = HEAP8[i1 + 1 | 0];
 HEAP8[tempDoublePtr + 2 | 0] = HEAP8[i1 + 2 | 0];
 HEAP8[tempDoublePtr + 3 | 0] = HEAP8[i1 + 3 | 0];
}
function dynCall_viiii(i1, i2, i3, i4, i5) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 i4 = i4 | 0;
 i5 = i5 | 0;
 FUNCTION_TABLE_viiii[i1 & 7](i2 | 0, i3 | 0, i4 | 0, i5 | 0);
}
function dynCall_viii(i1, i2, i3, i4) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 i4 = i4 | 0;
 FUNCTION_TABLE_viii[i1 & 3](i2 | 0, i3 | 0, i4 | 0);
}
function stackAlloc(i1) {
 i1 = i1 | 0;
 var i2 = 0;
 i2 = STACKTOP;
 STACKTOP = STACKTOP + i1 | 0;
 STACKTOP = STACKTOP + 7 & -8;
 return i2 | 0;
}
function dynCall_iii(i1, i2, i3) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 return FUNCTION_TABLE_iii[i1 & 1](i2 | 0, i3 | 0) | 0;
}
function _strlen(i1) {
 i1 = i1 | 0;
 var i2 = 0;
 i2 = i1;
 while (HEAP8[i2] | 0) {
  i2 = i2 + 1 | 0;
 }
 return i2 - i1 | 0;
}
function setThrew(i1, i2) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 if ((__THREW__ | 0) == 0) {
  __THREW__ = i1;
  threwValue = i2;
 }
}
function ii___ZNK7WebCore4Blob8registryEv__wrapper(i1) {
 i1 = i1 | 0;
 return __ZNK7WebCore4Blob8registryEv(i1 | 0) | 0;
}
function dynCall_ii(i1, i2) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 return FUNCTION_TABLE_ii[i1 & 7](i2 | 0) | 0;
}
function b5(i1, i2, i3, i4) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 i4 = i4 | 0;
 abort(5);
}
function dynCall_vi(i1, i2) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 FUNCTION_TABLE_vi[i1 & 7](i2 | 0);
}
function b2(i1, i2, i3) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 i3 = i3 | 0;
 abort(2);
}
function b4(i1, i2) {
 i1 = i1 | 0;
 i2 = i2 | 0;
 abort(4);
 return 0;
}
function dynCall_v(i1) {
 i1 = i1 | 0;
 FUNCTION_TABLE_v[i1 & 1]();
}
function __ZNK7WebCore4File6isFileEv(i1) {
 i1 = i1 | 0;
 return 1;
}
function stackRestore(i1) {
 i1 = i1 | 0;
 STACKTOP = i1;
}
function setTempRet9(i1) {
 i1 = i1 | 0;
 tempRet9 = i1;
}
function setTempRet8(i1) {
 i1 = i1 | 0;
 tempRet8 = i1;
}
function setTempRet7(i1) {
 i1 = i1 | 0;
 tempRet7 = i1;
}
function setTempRet6(i1) {
 i1 = i1 | 0;
 tempRet6 = i1;
}
function setTempRet5(i1) {
 i1 = i1 | 0;
 tempRet5 = i1;
}
function setTempRet4(i1) {
 i1 = i1 | 0;
 tempRet4 = i1;
}
function setTempRet3(i1) {
 i1 = i1 | 0;
 tempRet3 = i1;
}
function setTempRet2(i1) {
 i1 = i1 | 0;
 tempRet2 = i1;
}
function setTempRet1(i1) {
 i1 = i1 | 0;
 tempRet1 = i1;
}
function setTempRet0(i1) {
 i1 = i1 | 0;
 tempRet0 = i1;
}
function b1(i1) {
 i1 = i1 | 0;
 abort(1);
 return 0;
}
function stackSave() {
 return STACKTOP | 0;
}
function b0(i1) {
 i1 = i1 | 0;
 abort(0);
}
function b3() {
 abort(3);
}
// EMSCRIPTEN_END_FUNCS
  var FUNCTION_TABLE_vi = [b0,b0,__ZN7WebCore4FileD1Ev,b0,__ZN7WebCore4FileD0Ev,b0,b0,b0];
  var FUNCTION_TABLE_ii = [b1,b1,__ZNK7WebCore4File4sizeEv,b1,ii___ZNK7WebCore4Blob8registryEv__wrapper,b1,__ZNK7WebCore4File6isFileEv,b1];
  var FUNCTION_TABLE_viii = [b2,b2,__ZN7WebCore4FileC2ERKN3WTF6StringENS0_23ContentTypeLookupPolicyE,b2];
  var FUNCTION_TABLE_v = [b3,b3];
  var FUNCTION_TABLE_iii = [b4,b4];
  var FUNCTION_TABLE_viiii = [b5,b5,__ZN7WebCore4FileC2ERKN3WTF6StringERKNS_3URLES4_,b5,__ZN7WebCore4FileC2ERKN3WTF6StringES4_NS0_23ContentTypeLookupPolicyE,b5,b5,b5];
  return { _strlen: _strlen, _memcpy: _memcpy, _memset: _memset, runPostSets: runPostSets, stackAlloc: stackAlloc, stackSave: stackSave, stackRestore: stackRestore, setThrew: setThrew, setTempRet0: setTempRet0, setTempRet1: setTempRet1, setTempRet2: setTempRet2, setTempRet3: setTempRet3, setTempRet4: setTempRet4, setTempRet5: setTempRet5, setTempRet6: setTempRet6, setTempRet7: setTempRet7, setTempRet8: setTempRet8, setTempRet9: setTempRet9, dynCall_vi: dynCall_vi, dynCall_ii: dynCall_ii, dynCall_viii: dynCall_viii, dynCall_v: dynCall_v, dynCall_iii: dynCall_iii, dynCall_viiii: dynCall_viiii };
})
// EMSCRIPTEN_END_ASM
({ "Math": Math, "Int8Array": Int8Array, "Int16Array": Int16Array, "Int32Array": Int32Array, "Uint8Array": Uint8Array, "Uint16Array": Uint16Array, "Uint32Array": Uint32Array, "Float32Array": Float32Array, "Float64Array": Float64Array }, { "abort": abort, "assert": assert, "asmPrintInt": asmPrintInt, "asmPrintFloat": asmPrintFloat, "min": Math_min, "invoke_vi": invoke_vi, "invoke_ii": invoke_ii, "invoke_viii": invoke_viii, "invoke_v": invoke_v, "invoke_iii": invoke_iii, "invoke_viiii": invoke_viiii, "_llvm_lifetime_end": _llvm_lifetime_end, "_malloc": _malloc, "___setErrNo": ___setErrNo, "_free": _free, "_llvm_lifetime_start": _llvm_lifetime_start, "_fflush": _fflush, "STACKTOP": STACKTOP, "STACK_MAX": STACK_MAX, "tempDoublePtr": tempDoublePtr, "ABORT": ABORT, "NaN": NaN, "Infinity": Infinity }, buffer);
var _strlen = Module["_strlen"] = asm["_strlen"];
var _memcpy = Module["_memcpy"] = asm["_memcpy"];
var _memset = Module["_memset"] = asm["_memset"];
var runPostSets = Module["runPostSets"] = asm["runPostSets"];
var dynCall_vi = Module["dynCall_vi"] = asm["dynCall_vi"];
var dynCall_ii = Module["dynCall_ii"] = asm["dynCall_ii"];
var dynCall_viii = Module["dynCall_viii"] = asm["dynCall_viii"];
var dynCall_v = Module["dynCall_v"] = asm["dynCall_v"];
var dynCall_iii = Module["dynCall_iii"] = asm["dynCall_iii"];
var dynCall_viiii = Module["dynCall_viiii"] = asm["dynCall_viiii"];
// Warning: printing of i64 values may be slightly rounded! No deep i64 math used, so precise i64 code not included
var i64Math = null;
// === Auto-generated postamble setup entry stuff ===
function run(args) {
  initRuntime();
}
Module['run'] = run;
// {{PRE_RUN_ADDITIONS}}
run();
// {{POST_RUN_ADDITIONS}}
  // {{MODULE_ADDITIONS}}
  return Module;
});
// EMSCRIPTEN_GENERATED_FUNCTIONS: ["__ZN7WebCore4FileC2ERKN3WTF6StringERKNS_3URLES4_","_strlen","__ZN7WebCore4FileC2ERKN3WTF6StringES4_NS0_23ContentTypeLookupPolicyE","__ZNK7WebCore4File4sizeEv","__ZN7WebCore4FileC2ERKN3WTF6StringENS0_23ContentTypeLookupPolicyE","__ZN7WebCore12BlobDataItemD2Ev","__ZNK7WebCore4File16lastModifiedDateEv","_memset","__ZNK7WebCore4File6isFileEv","_memcpy","__ZN7WebCore4FileD1Ev","__ZN7WebCore4FileD0Ev","__ZN7WebCoreL26getContentTypeFromFileNameERKN3WTF6StringENS_4File23ContentTypeLookupPolicyE","__ZNK7WebCore4File15captureSnapshotERxRd"]