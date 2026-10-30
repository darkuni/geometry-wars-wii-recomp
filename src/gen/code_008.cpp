#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// atoi
void f_800CDE2C(Ctx* __restrict c) {
  trace_call(0x800CDE2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDE2C
  c->r[0]=c->lr; // 800CDE30
  c->r[5]=0u+0x800D0000u; // 800CDE34
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CDE38
  c->r[0]=0u+0x00000000u; // 800CDE3C
  c->r[5]=c->r[5]+0xFFFFB7E8u; // 800CDE40
  c->r[6]=c->r[1]+0x00000018u; // 800CDE44
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CDE48
  c->r[31]=0u+0x80000000u; // 800CDE4C
  c->r[4]=c->r[31]+0xFFFFFFFFu; // 800CDE50
  c->r[7]=c->r[1]+0x00000008u; // 800CDE54
  W32(c->r[1]+0x00000018u,c->r[3]); // 800CDE58
  c->r[8]=c->r[1]+0x0000000Cu; // 800CDE5C
  c->r[9]=c->r[1]+0x00000010u; // 800CDE60
  c->r[3]=0u+0x0000000Au; // 800CDE64
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CDE68
  c->lr=0x800CDE70u; f_800CD3A4(c); // 800CDE6C
  c->r[0]=R32(c->r[1]+0x00000010u); // 800CDE70
  cmps(c,0,(int32_t)c->r[0],0); // 800CDE74
  if (!crb(c,2)) { goto L_800CDEA8; } // 800CDE78
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800CDE7C
  cmps(c,0,(int32_t)c->r[4],0); // 800CDE80
  if (!crb(c,2)) { goto L_800CDE94; } // 800CDE84
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800CDE88
  cmpu(c,0,c->r[3],c->r[0]); // 800CDE8C
  if (crb(c,1)) { goto L_800CDEA8; } // 800CDE90
L_800CDE94:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CDE94
  if (crb(c,2)) { goto L_800CDED0; } // 800CDE98
  c->r[0]=0u+0x80000000u; // 800CDE9C
  cmpu(c,0,c->r[3],c->r[0]); // 800CDEA0
  if (!crb(c,1)) { goto L_800CDED0; } // 800CDEA4
L_800CDEA8:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800CDEA8
  c->r[0]=0u+0x00000022u; // 800CDEAC
  c->r[3]=0u+0x80000000u; // 800CDEB0
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 800CDEB4
  c->r[4]=0u-c->r[5]; // 800CDEB8
  c->r[4]=c->r[4]|c->r[5]; // 800CDEBC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CDEC0
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 800CDEC4
  c->r[3]=c->r[3]+c->r[0]; // 800CDEC8
  goto L_800CDEDC; // 800CDECC
L_800CDED0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CDED0
  if (crb(c,2)) { goto L_800CDEDC; } // 800CDED4
  c->r[3]=0u-c->r[3]; // 800CDED8
L_800CDEDC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CDEDC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CDEE0
  c->lr=c->r[0]; // 800CDEE4
  c->r[1]=c->r[1]+0x00000030u; // 800CDEE8
  return; // 800CDEEC
}

// wcstol
void f_800CDEF0(Ctx* __restrict c) {
  trace_call(0x800CDEF0u);
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800CDEF0
  f_80004338(c); return; // 800CDEF4
}

// wmemchr
void f_800CDEF8(Ctx* __restrict c) {
  trace_call(0x800CDEF8u);
  c->ctr=c->r[5]; // 800CDEF8
  cmps(c,0,(int32_t)c->r[5],0); // 800CDEFC
  if (crb(c,2)) { goto L_800CDF18; } // 800CDF00
L_800CDF04:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800CDF04
  cmpu(c,0,c->r[0],c->r[4]); // 800CDF08
  if (crb(c,2)) return; // 800CDF0C
  c->r[3]=c->r[3]+0x00000002u; // 800CDF10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CDF04; } // 800CDF14
L_800CDF18:;
  c->r[3]=0u+0x00000000u; // 800CDF18
  return; // 800CDF1C
}

// fn_800CDF20
void f_800CDF20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDF20
  c->r[0]=c->lr; // 800CDF24
  c->r[7]=0u+0x00000000u; // 800CDF28
  c->r[6]=R16(c->r[3]+0x00000002u); // 800CDF2C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CDF30
  c->r[8]=0u+0x00000001u; // 800CDF34
  cmpu(c,0,c->r[6],0x00000025u); // 800CDF38
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CDF3C
  c->r[31]=c->r[3]+0x00000002u; // 800CDF40
  W32(c->r[1]+0x00000028u,c->r[30]); // 800CDF44
  c->r[30]=c->r[5]|c->r[5]; // 800CDF48
  W32(c->r[1]+0x00000024u,c->r[29]); // 800CDF4C
  c->r[29]=c->r[4]|c->r[4]; // 800CDF50
  W8(c->r[1]+0x00000009u,c->r[7]); // 800CDF54
  W8(c->r[1]+0x00000008u,c->r[8]); // 800CDF58
  W8(c->r[1]+0x0000000Au,c->r[7]); // 800CDF5C
  W8(c->r[1]+0x0000000Bu,c->r[7]); // 800CDF60
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 800CDF64
  W32(c->r[1]+0x00000010u,c->r[7]); // 800CDF68
  W32(c->r[1]+0x00000014u,c->r[7]); // 800CDF6C
  if (!crb(c,2)) { goto L_800CDF98; } // 800CDF70
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 800CDF74
  c->r[3]=c->r[31]+0x00000002u; // 800CDF78
  c->r[4]=R32(c->r[1]+0x00000008u); // 800CDF7C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CDF80
  W32(c->r[5]+0x00000000u,c->r[4]); // 800CDF84
  W32(c->r[5]+0x00000004u,c->r[0]); // 800CDF88
  W32(c->r[5]+0x00000008u,c->r[7]); // 800CDF8C
  W32(c->r[5]+0x0000000Cu,c->r[7]); // 800CDF90
  goto L_800CE4C4; // 800CDF94
L_800CDF98:;
  c->r[4]=0u+0x80220000u; // 800CDF98
  c->r[0]=0u+0x00000002u; // 800CDF9C
L_800CDFA0:;
  c->r[5]=c->r[6]+0xFFFFFFE0u; // 800CDFA0
  c->r[9]=0u+0x00000001u; // 800CDFA4
  cmpu(c,0,c->r[5],0x00000010u); // 800CDFA8
  if (crb(c,1)) { goto L_800CE004; } // 800CDFAC
  c->r[3]=c->r[4]+0xFFFFC3B0u; // 800CDFB0
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800CDFB4
  c->r[3]=R32(c->r[3]+c->r[5]); // 800CDFB8
  c->ctr=c->r[3]; // 800CDFBC
  if (true) { switch (c->ctr) { case 0x800CDFC4u: goto L_800CDFC4; case 0x800CDFCCu: goto L_800CDFCC; case 0x800CDFD4u: goto L_800CDFD4; case 0x800CDFE8u: goto L_800CDFE8; case 0x800CDFF0u: goto L_800CDFF0; case 0x800CE004u: goto L_800CE004; case 0x800CE28Cu: goto L_800CE28C; case 0x800CE2D0u: goto L_800CE2D0; case 0x800CE324u: goto L_800CE324; case 0x800CE37Cu: goto L_800CE37C; case 0x800CE390u: goto L_800CE390; case 0x800CE3ECu: goto L_800CE3EC; case 0x800CE410u: goto L_800CE410; case 0x800CE44Cu: goto L_800CE44C; case 0x800CE47Cu: goto L_800CE47C; case 0x800CE494u: goto L_800CE494; default: break; } dispatch(c,c->ctr); return; } // 800CDFC0
L_800CDFC4:;
  W8(c->r[1]+0x00000008u,c->r[7]); // 800CDFC4
  goto L_800CE008; // 800CDFC8
L_800CDFCC:;
  W8(c->r[1]+0x00000009u,c->r[8]); // 800CDFCC
  goto L_800CE008; // 800CDFD0
L_800CDFD4:;
  c->r[3]=R8(c->r[1]+0x00000009u); // 800CDFD4
  cmpu(c,0,c->r[3],0x00000001u); // 800CDFD8
  if (crb(c,2)) { goto L_800CE008; } // 800CDFDC
  W8(c->r[1]+0x00000009u,c->r[0]); // 800CDFE0
  goto L_800CE008; // 800CDFE4
L_800CDFE8:;
  W8(c->r[1]+0x0000000Bu,c->r[8]); // 800CDFE8
  goto L_800CE008; // 800CDFEC
L_800CDFF0:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 800CDFF0
  cmps(c,0,(int32_t)c->r[3],0); // 800CDFF4
  if (crb(c,2)) { goto L_800CE008; } // 800CDFF8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800CDFFC
  goto L_800CE008; // 800CE000
L_800CE004:;
  c->r[9]=0u+0x00000000u; // 800CE004
L_800CE008:;
  cmps(c,0,(int32_t)c->r[9],0); // 800CE008
  if (crb(c,2)) { goto L_800CE018; } // 800CE00C
  {uint32_t ea=c->r[31]+0x00000002u; c->r[6]=R16(ea); c->r[31]=ea;} // 800CE010
  IRQCHK(c); goto L_800CDFA0; // 800CE014
L_800CE018:;
  cmpu(c,0,c->r[6],0x0000002Au); // 800CE018
  if (!crb(c,2)) { goto L_800CE054; } // 800CE01C
  c->r[3]=c->r[29]|c->r[29]; // 800CE020
  c->r[4]=0u+0x00000001u; // 800CE024
  c->lr=0x800CE02Cu; f_800C1750(c); // 800CE028
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CE02C
  cmps(c,0,(int32_t)c->r[0],0); // 800CE030
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CE034
  if (!crb(c,0)) { goto L_800CE04C; } // 800CE038
  c->r[0]=0u-c->r[0]; // 800CE03C
  c->r[3]=0u+0x00000000u; // 800CE040
  W8(c->r[1]+0x00000008u,c->r[3]); // 800CE044
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CE048
L_800CE04C:;
  {uint32_t ea=c->r[31]+0x00000002u; c->r[6]=R16(ea); c->r[31]=ea;} // 800CE04C
  goto L_800CE0A4; // 800CE050
L_800CE054:;
  c->r[3]=0u+0x80220000u; // 800CE054
  c->r[3]=c->r[3]+0xFFFFBE90u; // 800CE058
  c->r[4]=R32(c->r[3]+0x00000038u); // 800CE05C
  goto L_800CE07C; // 800CE060
L_800CE064:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 800CE064
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800CE068
  c->r[3]=c->r[6]+c->r[0]; // 800CE06C
  {uint32_t ea=c->r[31]+0x00000002u; c->r[6]=R16(ea); c->r[31]=ea;} // 800CE070
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 800CE074
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CE078
L_800CE07C:;
  cmpu(c,0,c->r[6],0x00000100u); // 800CE07C
  if (!crb(c,0)) { goto L_800CE098; } // 800CE080
  c->r[3]=R32(c->r[4]+0x00000014u); // 800CE084
  c->r[0]=rotl(c->r[6],1)&0x0001FFFEu; // 800CE088
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CE08C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CE090
  goto L_800CE09C; // 800CE094
L_800CE098:;
  c->r[0]=0u+0x00000000u; // 800CE098
L_800CE09C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CE09C
  if (!crb(c,2)) { IRQCHK(c); goto L_800CE064; } // 800CE0A0
L_800CE0A4:;
  c->r[7]=R32(c->r[1]+0x00000010u); // 800CE0A4
  cmps(c,0,(int32_t)c->r[7],509); // 800CE0A8
  if (!crb(c,1)) { goto L_800CE0E0; } // 800CE0AC
  c->r[3]=0u+0x00010000u; // 800CE0B0
  c->r[5]=R32(c->r[1]+0x00000008u); // 800CE0B4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800CE0B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE0BC
  W16(c->r[1]+0x0000000Eu,c->r[3]); // 800CE0C0
  c->r[3]=c->r[31]+0x00000002u; // 800CE0C4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800CE0C8
  W32(c->r[30]+0x00000000u,c->r[5]); // 800CE0CC
  W32(c->r[30]+0x00000004u,c->r[4]); // 800CE0D0
  W32(c->r[30]+0x00000008u,c->r[7]); // 800CE0D4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800CE0D8
  goto L_800CE4C4; // 800CE0DC
L_800CE0E0:;
  cmpu(c,0,c->r[6],0x0000002Eu); // 800CE0E0
  if (!crb(c,2)) { goto L_800CE178; } // 800CE0E4
  {uint32_t ea=c->r[31]+0x00000002u; c->r[6]=R16(ea); c->r[31]=ea;} // 800CE0E8
  c->r[0]=0u+0x00000001u; // 800CE0EC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CE0F0
  cmpu(c,0,c->r[6],0x0000002Au); // 800CE0F4
  if (!crb(c,2)) { goto L_800CE128; } // 800CE0F8
  c->r[3]=c->r[29]|c->r[29]; // 800CE0FC
  c->r[4]=0u+0x00000001u; // 800CE100
  c->lr=0x800CE108u; f_800C1750(c); // 800CE104
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CE108
  cmps(c,0,(int32_t)c->r[0],0); // 800CE10C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE110
  if (!crb(c,0)) { goto L_800CE120; } // 800CE114
  c->r[0]=0u+0x00000000u; // 800CE118
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CE11C
L_800CE120:;
  {uint32_t ea=c->r[31]+0x00000002u; c->r[6]=R16(ea); c->r[31]=ea;} // 800CE120
  goto L_800CE178; // 800CE124
L_800CE128:;
  c->r[3]=0u+0x80220000u; // 800CE128
  c->r[3]=c->r[3]+0xFFFFBE90u; // 800CE12C
  c->r[4]=R32(c->r[3]+0x00000038u); // 800CE130
  goto L_800CE150; // 800CE134
L_800CE138:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE138
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800CE13C
  c->r[3]=c->r[6]+c->r[0]; // 800CE140
  {uint32_t ea=c->r[31]+0x00000002u; c->r[6]=R16(ea); c->r[31]=ea;} // 800CE144
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 800CE148
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE14C
L_800CE150:;
  cmpu(c,0,c->r[6],0x00000100u); // 800CE150
  if (!crb(c,0)) { goto L_800CE16C; } // 800CE154
  c->r[3]=R32(c->r[4]+0x00000014u); // 800CE158
  c->r[0]=rotl(c->r[6],1)&0x0001FFFEu; // 800CE15C
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CE160
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CE164
  goto L_800CE170; // 800CE168
L_800CE16C:;
  c->r[0]=0u+0x00000000u; // 800CE16C
L_800CE170:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CE170
  if (!crb(c,2)) { IRQCHK(c); goto L_800CE138; } // 800CE174
L_800CE178:;
  cmps(c,0,(int32_t)c->r[6],107); // 800CE178
  c->r[4]=0u+0x00000001u; // 800CE17C
  if (crb(c,2)) { goto L_800CE250; } // 800CE180
  if (!crb(c,0)) { goto L_800CE1AC; } // 800CE184
  cmps(c,0,(int32_t)c->r[6],104); // 800CE188
  if (crb(c,2)) { goto L_800CE1D0; } // 800CE18C
  if (!crb(c,0)) { goto L_800CE1A0; } // 800CE190
  cmps(c,0,(int32_t)c->r[6],76); // 800CE194
  if (crb(c,2)) { goto L_800CE220; } // 800CE198
  goto L_800CE250; // 800CE19C
L_800CE1A0:;
  cmps(c,0,(int32_t)c->r[6],106); // 800CE1A0
  if (!crb(c,0)) { goto L_800CE22C; } // 800CE1A4
  goto L_800CE250; // 800CE1A8
L_800CE1AC:;
  cmps(c,0,(int32_t)c->r[6],116); // 800CE1AC
  if (crb(c,2)) { goto L_800CE238; } // 800CE1B0
  if (!crb(c,0)) { goto L_800CE1C4; } // 800CE1B4
  cmps(c,0,(int32_t)c->r[6],109); // 800CE1B8
  if (!crb(c,0)) { goto L_800CE250; } // 800CE1BC
  goto L_800CE1F8; // 800CE1C0
L_800CE1C4:;
  cmps(c,0,(int32_t)c->r[6],122); // 800CE1C4
  if (crb(c,2)) { goto L_800CE244; } // 800CE1C8
  goto L_800CE250; // 800CE1CC
L_800CE1D0:;
  c->r[3]=R16(c->r[31]+0x00000002u); // 800CE1D0
  c->r[0]=0u+0x00000002u; // 800CE1D4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800CE1D8
  cmpu(c,0,c->r[3],0x00000068u); // 800CE1DC
  if (!crb(c,2)) { goto L_800CE254; } // 800CE1E0
  c->r[0]=0u+0x00000001u; // 800CE1E4
  c->r[6]=c->r[3]|c->r[3]; // 800CE1E8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800CE1EC
  c->r[31]=c->r[31]+0x00000002u; // 800CE1F0
  goto L_800CE254; // 800CE1F4
L_800CE1F8:;
  c->r[3]=R16(c->r[31]+0x00000002u); // 800CE1F8
  c->r[0]=0u+0x00000003u; // 800CE1FC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800CE200
  cmpu(c,0,c->r[3],0x0000006Cu); // 800CE204
  if (!crb(c,2)) { goto L_800CE254; } // 800CE208
  c->r[0]=0u+0x00000004u; // 800CE20C
  c->r[6]=c->r[3]|c->r[3]; // 800CE210
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800CE214
  c->r[31]=c->r[31]+0x00000002u; // 800CE218
  goto L_800CE254; // 800CE21C
L_800CE220:;
  c->r[0]=0u+0x00000009u; // 800CE220
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800CE224
  goto L_800CE254; // 800CE228
L_800CE22C:;
  c->r[0]=0u+0x00000006u; // 800CE22C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800CE230
  goto L_800CE254; // 800CE234
L_800CE238:;
  c->r[0]=0u+0x00000008u; // 800CE238
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800CE23C
  goto L_800CE254; // 800CE240
L_800CE244:;
  c->r[0]=0u+0x00000007u; // 800CE244
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800CE248
  goto L_800CE254; // 800CE24C
L_800CE250:;
  c->r[4]=0u+0x00000000u; // 800CE250
L_800CE254:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CE254
  if (crb(c,2)) { goto L_800CE260; } // 800CE258
  {uint32_t ea=c->r[31]+0x00000002u; c->r[6]=R16(ea); c->r[31]=ea;} // 800CE25C
L_800CE260:;
  c->r[3]=rotl(c->r[6],0)&0x0000FFFFu; // 800CE260
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 800CE264
  c->r[0]=c->r[3]+0xFFFFFFBFu; // 800CE268
  cmpu(c,0,c->r[0],0x00000037u); // 800CE26C
  if (crb(c,1)) { goto L_800CE494; } // 800CE270
  c->r[3]=0u+0x80220000u; // 800CE274
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CE278
  c->r[3]=c->r[3]+0xFFFFC2D0u; // 800CE27C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800CE280
  c->ctr=c->r[3]; // 800CE284
  if (true) { switch (c->ctr) { case 0x800CDFC4u: goto L_800CDFC4; case 0x800CDFCCu: goto L_800CDFCC; case 0x800CDFD4u: goto L_800CDFD4; case 0x800CDFE8u: goto L_800CDFE8; case 0x800CDFF0u: goto L_800CDFF0; case 0x800CE004u: goto L_800CE004; case 0x800CE28Cu: goto L_800CE28C; case 0x800CE2D0u: goto L_800CE2D0; case 0x800CE324u: goto L_800CE324; case 0x800CE37Cu: goto L_800CE37C; case 0x800CE390u: goto L_800CE390; case 0x800CE3ECu: goto L_800CE3EC; case 0x800CE410u: goto L_800CE410; case 0x800CE44Cu: goto L_800CE44C; case 0x800CE47Cu: goto L_800CE47C; case 0x800CE494u: goto L_800CE494; default: break; } dispatch(c,c->ctr); return; } // 800CE288
L_800CE28C:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800CE28C
  cmpu(c,0,c->r[0],0x00000009u); // 800CE290
  if (!crb(c,2)) { goto L_800CE2A0; } // 800CE294
  c->r[0]=0u+0x00000004u; // 800CE298
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800CE29C
L_800CE2A0:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800CE2A0
  cmps(c,0,(int32_t)c->r[0],0); // 800CE2A4
  if (!crb(c,2)) { goto L_800CE2B8; } // 800CE2A8
  c->r[0]=0u+0x00000001u; // 800CE2AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE2B0
  goto L_800CE4A0; // 800CE2B4
L_800CE2B8:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800CE2B8
  cmpu(c,0,c->r[0],0x00000002u); // 800CE2BC
  if (!crb(c,2)) { goto L_800CE4A0; } // 800CE2C0
  c->r[0]=0u+0x00000001u; // 800CE2C4
  W8(c->r[1]+0x00000008u,c->r[0]); // 800CE2C8
  goto L_800CE4A0; // 800CE2CC
L_800CE2D0:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800CE2D0
  cmpu(c,0,c->r[0],0x00000002u); // 800CE2D4
  if (crb(c,2)) { goto L_800CE2FC; } // 800CE2D8
  cmpu(c,0,c->r[0],0x00000006u); // 800CE2DC
  if (crb(c,2)) { goto L_800CE2FC; } // 800CE2E0
  cmpu(c,0,c->r[0],0x00000007u); // 800CE2E4
  if (crb(c,2)) { goto L_800CE2FC; } // 800CE2E8
  cmpu(c,0,c->r[0],0x00000008u); // 800CE2EC
  if (crb(c,2)) { goto L_800CE2FC; } // 800CE2F0
  cmpu(c,0,c->r[0],0x00000004u); // 800CE2F4
  if (!crb(c,2)) { goto L_800CE30C; } // 800CE2F8
L_800CE2FC:;
  c->r[3]=0u+0x00010000u; // 800CE2FC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CE300
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800CE304
  goto L_800CE4A0; // 800CE308
L_800CE30C:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800CE30C
  cmps(c,0,(int32_t)c->r[0],0); // 800CE310
  if (!crb(c,2)) { goto L_800CE4A0; } // 800CE314
  c->r[0]=0u+0x00000006u; // 800CE318
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE31C
  goto L_800CE4A0; // 800CE320
L_800CE324:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800CE324
  cmps(c,0,(int32_t)c->r[0],0); // 800CE328
  if (!crb(c,2)) { goto L_800CE338; } // 800CE32C
  c->r[0]=0u+0x0000000Du; // 800CE330
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE334
L_800CE338:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800CE338
  cmpu(c,0,c->r[0],0x00000002u); // 800CE33C
  if (crb(c,2)) { goto L_800CE36C; } // 800CE340
  cmpu(c,0,c->r[0],0x00000006u); // 800CE344
  if (crb(c,2)) { goto L_800CE36C; } // 800CE348
  cmpu(c,0,c->r[0],0x00000007u); // 800CE34C
  if (crb(c,2)) { goto L_800CE36C; } // 800CE350
  cmpu(c,0,c->r[0],0x00000008u); // 800CE354
  if (crb(c,2)) { goto L_800CE36C; } // 800CE358
  cmpu(c,0,c->r[0],0x00000004u); // 800CE35C
  if (crb(c,2)) { goto L_800CE36C; } // 800CE360
  cmpu(c,0,c->r[0],0x00000001u); // 800CE364
  if (!crb(c,2)) { goto L_800CE4A0; } // 800CE368
L_800CE36C:;
  c->r[3]=0u+0x00010000u; // 800CE36C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CE370
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800CE374
  goto L_800CE4A0; // 800CE378
L_800CE37C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE37C
  cmps(c,0,(int32_t)c->r[0],0); // 800CE380
  if (!crb(c,2)) { goto L_800CE390; } // 800CE384
  c->r[0]=0u+0x00000001u; // 800CE388
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE38C
L_800CE390:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800CE390
  cmpu(c,0,c->r[0],0x00000002u); // 800CE394
  if (crb(c,2)) { goto L_800CE3C4; } // 800CE398
  cmpu(c,0,c->r[0],0x00000006u); // 800CE39C
  if (crb(c,2)) { goto L_800CE3C4; } // 800CE3A0
  cmpu(c,0,c->r[0],0x00000007u); // 800CE3A4
  if (crb(c,2)) { goto L_800CE3C4; } // 800CE3A8
  cmpu(c,0,c->r[0],0x00000008u); // 800CE3AC
  if (crb(c,2)) { goto L_800CE3C4; } // 800CE3B0
  cmpu(c,0,c->r[0],0x00000004u); // 800CE3B4
  if (crb(c,2)) { goto L_800CE3C4; } // 800CE3B8
  cmpu(c,0,c->r[0],0x00000001u); // 800CE3BC
  if (!crb(c,2)) { goto L_800CE3D4; } // 800CE3C0
L_800CE3C4:;
  c->r[3]=0u+0x00010000u; // 800CE3C4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CE3C8
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800CE3CC
  goto L_800CE4A0; // 800CE3D0
L_800CE3D4:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800CE3D4
  cmps(c,0,(int32_t)c->r[0],0); // 800CE3D8
  if (!crb(c,2)) { goto L_800CE4A0; } // 800CE3DC
  c->r[0]=0u+0x00000006u; // 800CE3E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE3E4
  goto L_800CE4A0; // 800CE3E8
L_800CE3EC:;
  c->r[5]=0u+0x00000003u; // 800CE3EC
  c->r[4]=0u+0x00000001u; // 800CE3F0
  c->r[3]=0u+0x00000078u; // 800CE3F4
  c->r[0]=0u+0x00000008u; // 800CE3F8
  W8(c->r[1]+0x0000000Cu,c->r[5]); // 800CE3FC
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 800CE400
  W16(c->r[1]+0x0000000Eu,c->r[3]); // 800CE404
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE408
  goto L_800CE4A0; // 800CE40C
L_800CE410:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 800CE410
  cmpu(c,0,c->r[3],0x00000003u); // 800CE414
  if (!crb(c,2)) { goto L_800CE428; } // 800CE418
  c->r[0]=0u+0x00000005u; // 800CE41C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800CE420
  goto L_800CE4A0; // 800CE424
L_800CE428:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800CE428
  cmps(c,0,(int32_t)c->r[0],0); // 800CE42C
  if (!crb(c,2)) { goto L_800CE43C; } // 800CE430
  cmps(c,0,(int32_t)c->r[3],0); // 800CE434
  if (crb(c,2)) { goto L_800CE4A0; } // 800CE438
L_800CE43C:;
  c->r[3]=0u+0x00010000u; // 800CE43C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CE440
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800CE444
  goto L_800CE4A0; // 800CE448
L_800CE44C:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800CE44C
  cmpu(c,0,c->r[0],0x00000003u); // 800CE450
  if (!crb(c,2)) { goto L_800CE464; } // 800CE454
  c->r[0]=0u+0x00000005u; // 800CE458
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800CE45C
  goto L_800CE4A0; // 800CE460
L_800CE464:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CE464
  if (crb(c,2)) { goto L_800CE4A0; } // 800CE468
  c->r[3]=0u+0x00010000u; // 800CE46C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CE470
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800CE474
  goto L_800CE4A0; // 800CE478
L_800CE47C:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800CE47C
  cmpu(c,0,c->r[0],0x00000009u); // 800CE480
  if (!crb(c,2)) { goto L_800CE4A0; } // 800CE484
  c->r[0]=0u+0x00000004u; // 800CE488
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800CE48C
  goto L_800CE4A0; // 800CE490
L_800CE494:;
  c->r[3]=0u+0x00010000u; // 800CE494
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CE498
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800CE49C
L_800CE4A0:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 800CE4A0
  c->r[3]=c->r[31]+0x00000002u; // 800CE4A4
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800CE4A8
  c->r[4]=R32(c->r[1]+0x00000010u); // 800CE4AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE4B0
  W32(c->r[30]+0x00000000u,c->r[6]); // 800CE4B4
  W32(c->r[30]+0x00000004u,c->r[5]); // 800CE4B8
  W32(c->r[30]+0x00000008u,c->r[4]); // 800CE4BC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800CE4C0
L_800CE4C4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CE4C4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CE4C8
  c->r[30]=R32(c->r[1]+0x00000028u); // 800CE4CC
  c->r[29]=R32(c->r[1]+0x00000024u); // 800CE4D0
  c->lr=c->r[0]; // 800CE4D4
  c->r[1]=c->r[1]+0x00000030u; // 800CE4D8
  return; // 800CE4DC
}

// fn_800CE4E0
void f_800CE4E0(Ctx* __restrict c) {
  c->r[8]=0u+0x00000000u; // 800CE4E0
  cmps(c,0,(int32_t)c->r[3],0); // 800CE4E4
  W16(c->r[4]+0xFFFFFFFEu,c->r[8]); // 800CE4E8
  c->r[6]=c->r[4]+0xFFFFFFFEu; // 800CE4EC
  c->r[7]=0u+0x00000000u; // 800CE4F0
  if (!crb(c,2)) { goto L_800CE524; } // 800CE4F4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800CE4F8
  cmps(c,0,(int32_t)c->r[0],0); // 800CE4FC
  if (!crb(c,2)) { goto L_800CE524; } // 800CE500
  c->r[0]=R8(c->r[5]+0x00000003u); // 800CE504
  cmps(c,0,(int32_t)c->r[0],0); // 800CE508
  if (crb(c,2)) { goto L_800CE51C; } // 800CE50C
  c->r[0]=R16(c->r[5]+0x00000006u); // 800CE510
  cmpu(c,0,c->r[0],0x0000006Fu); // 800CE514
  if (crb(c,2)) { goto L_800CE524; } // 800CE518
L_800CE51C:;
  c->r[3]=c->r[6]|c->r[6]; // 800CE51C
  return; // 800CE520
L_800CE524:;
  c->r[9]=R16(c->r[5]+0x00000006u); // 800CE524
  c->r[10]=c->r[9]+0xFFFFFFA8u; // 800CE528
  cmpu(c,0,c->r[10],0x00000020u); // 800CE52C
  if (crb(c,1)) { goto L_800CE59C; } // 800CE530
  c->r[9]=0u+0x80220000u; // 800CE534
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800CE538
  c->r[9]=c->r[9]+0xFFFFC3F4u; // 800CE53C
  c->r[9]=R32(c->r[9]+c->r[10]); // 800CE540
  c->ctr=c->r[9]; // 800CE544
  if (true) { switch (c->ctr) { case 0x800CE54Cu: goto L_800CE54C; case 0x800CE570u: goto L_800CE570; case 0x800CE580u: goto L_800CE580; case 0x800CE590u: goto L_800CE590; case 0x800CE59Cu: goto L_800CE59C; default: break; } dispatch(c,c->ctr); return; } // 800CE548
L_800CE54C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CE54C
  c->r[0]=0u+0x0000000Au; // 800CE550
  if (!crb(c,0)) { goto L_800CE59C; } // 800CE554
  c->r[8]=c->r[3]+0x80000000u; // 800CE558
  cmpu(c,0,c->r[8],0x00000000u); // 800CE55C
  if (crb(c,2)) { goto L_800CE568; } // 800CE560
  c->r[3]=0u-c->r[3]; // 800CE564
L_800CE568:;
  c->r[8]=0u+0x00000001u; // 800CE568
  goto L_800CE59C; // 800CE56C
L_800CE570:;
  c->r[9]=0u+0x00000000u; // 800CE570
  c->r[0]=0u+0x00000008u; // 800CE574
  W8(c->r[5]+0x00000001u,c->r[9]); // 800CE578
  goto L_800CE59C; // 800CE57C
L_800CE580:;
  c->r[9]=0u+0x00000000u; // 800CE580
  c->r[0]=0u+0x0000000Au; // 800CE584
  W8(c->r[5]+0x00000001u,c->r[9]); // 800CE588
  goto L_800CE59C; // 800CE58C
L_800CE590:;
  c->r[9]=0u+0x00000000u; // 800CE590
  c->r[0]=0u+0x00000010u; // 800CE594
  W8(c->r[5]+0x00000001u,c->r[9]); // 800CE598
L_800CE59C:;
  c->r[9]=divwu(c->r[3],c->r[0]); // 800CE59C
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 800CE5A0
  c->r[11]=c->r[3]-c->r[9]; // 800CE5A4
  c->r[3]=divwu(c->r[3],c->r[0]); // 800CE5A8
  cmps(c,0,(int32_t)c->r[11],10); // 800CE5AC
  if (!crb(c,0)) { goto L_800CE5BC; } // 800CE5B0
  c->r[11]=c->r[11]+0x00000030u; // 800CE5B4
  goto L_800CE5D4; // 800CE5B8
L_800CE5BC:;
  c->r[9]=R16(c->r[5]+0x00000006u); // 800CE5BC
  c->r[10]=c->r[11]+0x00000037u; // 800CE5C0
  cmpu(c,0,c->r[9],0x00000078u); // 800CE5C4
  if (!crb(c,2)) { goto L_800CE5D0; } // 800CE5C8
  c->r[10]=c->r[11]+0x00000057u; // 800CE5CC
L_800CE5D0:;
  c->r[11]=c->r[10]|c->r[10]; // 800CE5D0
L_800CE5D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CE5D4
  W16(c->r[6]+0xFFFFFFFEu,c->r[11]); // 800CE5D8
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 800CE5DC
  c->r[7]=c->r[7]+0x00000001u; // 800CE5E0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CE59C; } // 800CE5E4
  cmpu(c,0,c->r[0],0x00000008u); // 800CE5E8
  if (!crb(c,2)) { goto L_800CE614; } // 800CE5EC
  c->r[3]=R8(c->r[5]+0x00000003u); // 800CE5F0
  cmps(c,0,(int32_t)c->r[3],0); // 800CE5F4
  if (crb(c,2)) { goto L_800CE614; } // 800CE5F8
  c->r[3]=R16(c->r[6]+0x00000000u); // 800CE5FC
  cmpu(c,0,c->r[3],0x00000030u); // 800CE600
  if (crb(c,2)) { goto L_800CE614; } // 800CE604
  c->r[3]=0u+0x00000030u; // 800CE608
  c->r[7]=c->r[7]+0x00000001u; // 800CE60C
  {uint32_t ea=c->r[6]+0xFFFFFFFEu; W16(ea,c->r[3]); c->r[6]=ea;} // 800CE610
L_800CE614:;
  c->r[3]=R8(c->r[5]+0x00000000u); // 800CE614
  cmpu(c,0,c->r[3],0x00000002u); // 800CE618
  if (!crb(c,2)) { goto L_800CE668; } // 800CE61C
  c->r[3]=R32(c->r[5]+0x00000008u); // 800CE620
  cmps(c,0,(int32_t)c->r[8],0); // 800CE624
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800CE628
  if (!crb(c,2)) { goto L_800CE63C; } // 800CE62C
  c->r[3]=R8(c->r[5]+0x00000001u); // 800CE630
  cmps(c,0,(int32_t)c->r[3],0); // 800CE634
  if (crb(c,2)) { goto L_800CE648; } // 800CE638
L_800CE63C:;
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 800CE63C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800CE640
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800CE644
L_800CE648:;
  cmpu(c,0,c->r[0],0x00000010u); // 800CE648
  if (!crb(c,2)) { goto L_800CE668; } // 800CE64C
  c->r[3]=R8(c->r[5]+0x00000003u); // 800CE650
  cmps(c,0,(int32_t)c->r[3],0); // 800CE654
  if (crb(c,2)) { goto L_800CE668; } // 800CE658
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 800CE65C
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 800CE660
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800CE664
L_800CE668:;
  c->r[4]=c->r[4]-c->r[6]; // 800CE668
  c->r[9]=R32(c->r[5]+0x0000000Cu); // 800CE66C
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 800CE670
  c->r[3]=c->r[3]+c->r[4]; // 800CE674
  c->r[3]=sraw(c,c->r[3],1); // 800CE678
  c->r[3]=c->r[9]+c->r[3]; // 800CE67C
  cmps(c,0,(int32_t)c->r[3],509); // 800CE680
  if (!crb(c,1)) { goto L_800CE690; } // 800CE684
  c->r[3]=0u+0x00000000u; // 800CE688
  return; // 800CE68C
L_800CE690:;
  c->r[4]=0u+0x00000030u; // 800CE690
  goto L_800CE6A0; // 800CE694
L_800CE698:;
  {uint32_t ea=c->r[6]+0xFFFFFFFEu; W16(ea,c->r[4]); c->r[6]=ea;} // 800CE698
  c->r[7]=c->r[7]+0x00000001u; // 800CE69C
L_800CE6A0:;
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 800CE6A0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[3]); // 800CE6A4
  if (crb(c,0)) { IRQCHK(c); goto L_800CE698; } // 800CE6A8
  cmpu(c,0,c->r[0],0x00000010u); // 800CE6AC
  if (!crb(c,2)) { goto L_800CE6D0; } // 800CE6B0
  c->r[0]=R8(c->r[5]+0x00000003u); // 800CE6B4
  cmps(c,0,(int32_t)c->r[0],0); // 800CE6B8
  if (crb(c,2)) { goto L_800CE6D0; } // 800CE6BC
  c->r[3]=R16(c->r[5]+0x00000006u); // 800CE6C0
  c->r[0]=0u+0x00000030u; // 800CE6C4
  W16(c->r[6]+0xFFFFFFFEu,c->r[3]); // 800CE6C8
  {uint32_t ea=c->r[6]+0xFFFFFFFCu; W16(ea,c->r[0]); c->r[6]=ea;} // 800CE6CC
L_800CE6D0:;
  cmps(c,0,(int32_t)c->r[8],0); // 800CE6D0
  if (crb(c,2)) { goto L_800CE6E4; } // 800CE6D4
  c->r[0]=0u+0x0000002Du; // 800CE6D8
  {uint32_t ea=c->r[6]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[6]=ea;} // 800CE6DC
  goto L_800CE70C; // 800CE6E0
L_800CE6E4:;
  c->r[0]=R8(c->r[5]+0x00000001u); // 800CE6E4
  cmpu(c,0,c->r[0],0x00000001u); // 800CE6E8
  if (!crb(c,2)) { goto L_800CE6FC; } // 800CE6EC
  c->r[0]=0u+0x0000002Bu; // 800CE6F0
  {uint32_t ea=c->r[6]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[6]=ea;} // 800CE6F4
  goto L_800CE70C; // 800CE6F8
L_800CE6FC:;
  cmpu(c,0,c->r[0],0x00000002u); // 800CE6FC
  if (!crb(c,2)) { goto L_800CE70C; } // 800CE700
  c->r[0]=0u+0x00000020u; // 800CE704
  {uint32_t ea=c->r[6]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[6]=ea;} // 800CE708
L_800CE70C:;
  c->r[3]=c->r[6]|c->r[6]; // 800CE70C
  return; // 800CE710
}

// fn_800CE714
void f_800CE714(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE714
  c->r[0]=c->lr; // 800CE718
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CE71C
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 800CE720
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CE724
  c->r[25]=0u+0x00000000u; // 800CE728
  c->r[31]=c->r[3]|c->r[3]; // 800CE72C
  c->r[30]=c->r[4]|c->r[4]; // 800CE730
  c->r[23]=c->r[5]|c->r[5]; // 800CE734
  c->r[24]=c->r[6]|c->r[6]; // 800CE738
  c->r[27]=c->r[5]+0xFFFFFFFEu; // 800CE73C
  c->r[26]=0u+0x00000000u; // 800CE740
  W16(c->r[5]+0xFFFFFFFEu,c->r[25]); // 800CE744
  if (!crb(c,2)) { goto L_800CE778; } // 800CE748
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800CE74C
  cmps(c,0,(int32_t)c->r[0],0); // 800CE750
  if (!crb(c,2)) { goto L_800CE778; } // 800CE754
  c->r[0]=R8(c->r[6]+0x00000003u); // 800CE758
  cmps(c,0,(int32_t)c->r[0],0); // 800CE75C
  if (crb(c,2)) { goto L_800CE770; } // 800CE760
  c->r[0]=R16(c->r[6]+0x00000006u); // 800CE764
  cmpu(c,0,c->r[0],0x0000006Fu); // 800CE768
  if (crb(c,2)) { goto L_800CE778; } // 800CE76C
L_800CE770:;
  c->r[3]=c->r[27]|c->r[27]; // 800CE770
  goto L_800CE9AC; // 800CE774
L_800CE778:;
  c->r[5]=R16(c->r[6]+0x00000006u); // 800CE778
  c->r[0]=c->r[5]+0xFFFFFFA8u; // 800CE77C
  cmpu(c,0,c->r[0],0x00000020u); // 800CE780
  if (crb(c,1)) { goto L_800CE810; } // 800CE784
  c->r[5]=0u+0x80220000u; // 800CE788
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CE78C
  c->r[5]=c->r[5]+0xFFFFC478u; // 800CE790
  c->r[5]=R32(c->r[5]+c->r[0]); // 800CE794
  c->ctr=c->r[5]; // 800CE798
  if (true) { switch (c->ctr) { case 0x800CE7A0u: goto L_800CE7A0; case 0x800CE7E4u: goto L_800CE7E4; case 0x800CE7F4u: goto L_800CE7F4; case 0x800CE804u: goto L_800CE804; case 0x800CE810u: goto L_800CE810; default: break; } dispatch(c,c->ctr); return; } // 800CE79C
L_800CE7A0:;
  c->r[29]=0u+0x00000000u; // 800CE7A0
  c->r[0]=c->r[3]^0x80000000u; // 800CE7A4
  c->r[6]=c->r[29]^0x80000000u; // 800CE7A8
  c->r[28]=0u+0x0000000Au; // 800CE7AC
  c->r[5]=addc(c,~c->r[29],c->r[4],1); // 800CE7B0
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 800CE7B4
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800CE7B8
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800CE7BC
  if (crb(c,2)) { goto L_800CE810; } // 800CE7C0
  c->r[0]=0u+0x80000000u; // 800CE7C4
  c->r[0]=c->r[3]^c->r[0]; // 800CE7C8
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 800CE7CC
  if (crb(c,2)) { goto L_800CE7DC; } // 800CE7D0
  c->r[30]=addc(c,~c->r[4],0x00000000u,1); // 800CE7D4
  c->r[31]=addc(c,~c->r[3],0,c->xer_ca); // 800CE7D8
L_800CE7DC:;
  c->r[25]=0u+0x00000001u; // 800CE7DC
  goto L_800CE810; // 800CE7E0
L_800CE7E4:;
  c->r[29]=0u+0x00000000u; // 800CE7E4
  c->r[28]=0u+0x00000008u; // 800CE7E8
  W8(c->r[6]+0x00000001u,c->r[29]); // 800CE7EC
  goto L_800CE810; // 800CE7F0
L_800CE7F4:;
  c->r[29]=0u+0x00000000u; // 800CE7F4
  c->r[28]=0u+0x0000000Au; // 800CE7F8
  W8(c->r[6]+0x00000001u,c->r[29]); // 800CE7FC
  goto L_800CE810; // 800CE800
L_800CE804:;
  c->r[29]=0u+0x00000000u; // 800CE804
  c->r[28]=0u+0x00000010u; // 800CE808
  W8(c->r[6]+0x00000001u,c->r[29]); // 800CE80C
L_800CE810:;
  c->r[3]=c->r[31]|c->r[31]; // 800CE810
  c->r[4]=c->r[30]|c->r[30]; // 800CE814
  c->r[5]=c->r[29]|c->r[29]; // 800CE818
  c->r[6]=c->r[28]|c->r[28]; // 800CE81C
  c->lr=0x800CE824u; f_800C23E0(c); // 800CE820
  c->r[22]=c->r[4]|c->r[4]; // 800CE824
  c->r[3]=c->r[31]|c->r[31]; // 800CE828
  c->r[4]=c->r[30]|c->r[30]; // 800CE82C
  c->r[5]=c->r[29]|c->r[29]; // 800CE830
  c->r[6]=c->r[28]|c->r[28]; // 800CE834
  c->lr=0x800CE83Cu; f_800C21BC(c); // 800CE838
  cmps(c,0,(int32_t)c->r[22],10); // 800CE83C
  c->r[30]=c->r[4]|c->r[4]; // 800CE840
  c->r[31]=c->r[3]|c->r[3]; // 800CE844
  if (!crb(c,0)) { goto L_800CE854; } // 800CE848
  c->r[5]=c->r[22]+0x00000030u; // 800CE84C
  goto L_800CE868; // 800CE850
L_800CE854:;
  c->r[0]=R16(c->r[24]+0x00000006u); // 800CE854
  c->r[5]=c->r[22]+0x00000037u; // 800CE858
  cmpu(c,0,c->r[0],0x00000078u); // 800CE85C
  if (!crb(c,2)) { goto L_800CE868; } // 800CE860
  c->r[5]=c->r[22]+0x00000057u; // 800CE864
L_800CE868:;
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 800CE868
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W16(ea,c->r[5]); c->r[27]=ea;} // 800CE86C
  c->r[26]=c->r[26]+0x00000001u; // 800CE870
  if (!crb(c,2)) { IRQCHK(c); goto L_800CE810; } // 800CE874
  c->r[0]=c->r[28]^0x00000008u; // 800CE878
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 800CE87C
  if (!crb(c,2)) { goto L_800CE8A8; } // 800CE880
  c->r[0]=R8(c->r[24]+0x00000003u); // 800CE884
  cmps(c,0,(int32_t)c->r[0],0); // 800CE888
  if (crb(c,2)) { goto L_800CE8A8; } // 800CE88C
  c->r[0]=R16(c->r[27]+0x00000000u); // 800CE890
  cmpu(c,0,c->r[0],0x00000030u); // 800CE894
  if (crb(c,2)) { goto L_800CE8A8; } // 800CE898
  c->r[0]=0u+0x00000030u; // 800CE89C
  c->r[26]=c->r[26]+0x00000001u; // 800CE8A0
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[27]=ea;} // 800CE8A4
L_800CE8A8:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 800CE8A8
  cmpu(c,0,c->r[0],0x00000002u); // 800CE8AC
  if (!crb(c,2)) { goto L_800CE900; } // 800CE8B0
  c->r[0]=R32(c->r[24]+0x00000008u); // 800CE8B4
  cmps(c,0,(int32_t)c->r[25],0); // 800CE8B8
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 800CE8BC
  if (!crb(c,2)) { goto L_800CE8D0; } // 800CE8C0
  c->r[0]=R8(c->r[24]+0x00000001u); // 800CE8C4
  cmps(c,0,(int32_t)c->r[0],0); // 800CE8C8
  if (crb(c,2)) { goto L_800CE8DC; } // 800CE8CC
L_800CE8D0:;
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 800CE8D0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CE8D4
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 800CE8D8
L_800CE8DC:;
  c->r[0]=c->r[28]^0x00000010u; // 800CE8DC
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 800CE8E0
  if (!crb(c,2)) { goto L_800CE900; } // 800CE8E4
  c->r[0]=R8(c->r[24]+0x00000003u); // 800CE8E8
  cmps(c,0,(int32_t)c->r[0],0); // 800CE8EC
  if (crb(c,2)) { goto L_800CE900; } // 800CE8F0
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 800CE8F4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800CE8F8
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 800CE8FC
L_800CE900:;
  c->r[3]=c->r[23]-c->r[27]; // 800CE900
  c->r[4]=R32(c->r[24]+0x0000000Cu); // 800CE904
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800CE908
  c->r[0]=c->r[0]+c->r[3]; // 800CE90C
  c->r[0]=sraw(c,c->r[0],1); // 800CE910
  c->r[0]=c->r[4]+c->r[0]; // 800CE914
  cmps(c,0,(int32_t)c->r[0],509); // 800CE918
  if (!crb(c,1)) { goto L_800CE928; } // 800CE91C
  c->r[3]=0u+0x00000000u; // 800CE920
  goto L_800CE9AC; // 800CE924
L_800CE928:;
  c->r[3]=0u+0x00000030u; // 800CE928
  goto L_800CE938; // 800CE92C
L_800CE930:;
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W16(ea,c->r[3]); c->r[27]=ea;} // 800CE930
  c->r[26]=c->r[26]+0x00000001u; // 800CE934
L_800CE938:;
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 800CE938
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800CE93C
  if (crb(c,0)) { IRQCHK(c); goto L_800CE930; } // 800CE940
  c->r[0]=c->r[28]^0x00000010u; // 800CE944
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 800CE948
  if (!crb(c,2)) { goto L_800CE96C; } // 800CE94C
  c->r[0]=R8(c->r[24]+0x00000003u); // 800CE950
  cmps(c,0,(int32_t)c->r[0],0); // 800CE954
  if (crb(c,2)) { goto L_800CE96C; } // 800CE958
  c->r[3]=R16(c->r[24]+0x00000006u); // 800CE95C
  c->r[0]=0u+0x00000030u; // 800CE960
  W16(c->r[27]+0xFFFFFFFEu,c->r[3]); // 800CE964
  {uint32_t ea=c->r[27]+0xFFFFFFFCu; W16(ea,c->r[0]); c->r[27]=ea;} // 800CE968
L_800CE96C:;
  cmps(c,0,(int32_t)c->r[25],0); // 800CE96C
  if (crb(c,2)) { goto L_800CE980; } // 800CE970
  c->r[0]=0u+0x0000002Du; // 800CE974
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[27]=ea;} // 800CE978
  goto L_800CE9A8; // 800CE97C
L_800CE980:;
  c->r[0]=R8(c->r[24]+0x00000001u); // 800CE980
  cmpu(c,0,c->r[0],0x00000001u); // 800CE984
  if (!crb(c,2)) { goto L_800CE998; } // 800CE988
  c->r[0]=0u+0x0000002Bu; // 800CE98C
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[27]=ea;} // 800CE990
  goto L_800CE9A8; // 800CE994
L_800CE998:;
  cmpu(c,0,c->r[0],0x00000002u); // 800CE998
  if (!crb(c,2)) { goto L_800CE9A8; } // 800CE99C
  c->r[0]=0u+0x00000020u; // 800CE9A0
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[27]=ea;} // 800CE9A4
L_800CE9A8:;
  c->r[3]=c->r[27]|c->r[27]; // 800CE9A8
L_800CE9AC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CE9AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CE9B0
  c->lr=c->r[0]; // 800CE9B4
  c->r[1]=c->r[1]+0x00000030u; // 800CE9B8
  return; // 800CE9BC
}

// fn_800CE9C0
void f_800CE9C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE9C0
  c->r[0]=c->lr; // 800CE9C4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800CE9C8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800CE9CC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800CE9D0
  c->r[5]=0u+0x80220000u; // 800CE9D4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800CE9D8
  c->f[31]=c->f[1]; // 800CE9DC
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800CE9E0
  cmps(c,0,(int32_t)c->r[0],509); // 800CE9E4
  W32(c->r[1]+0x00000078u,c->r[30]); // 800CE9E8
  c->r[30]=c->r[4]|c->r[4]; // 800CE9EC
  W32(c->r[1]+0x00000074u,c->r[29]); // 800CE9F0
  W32(c->r[1]+0x00000070u,c->r[28]); // 800CE9F4
  c->r[28]=c->r[3]|c->r[3]; // 800CE9F8
  c->r[5]=R32(c->r[5]+0xFFFFBCE0u); // 800CE9FC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800CEA00
  c->r[31]=R8(c->r[5]+0x00000000u); // 800CEA04
  if (!crb(c,1)) { goto L_800CEA14; } // 800CEA08
  c->r[3]=0u+0x00000000u; // 800CEA0C
  goto L_800CED60; // 800CEA10
L_800CEA14:;
  c->r[29]=0u+0x00000000u; // 800CEA14
  c->r[0]=0u+0x00000020u; // 800CEA18
  W8(c->r[1]+0x00000010u,c->r[29]); // 800CEA1C
  c->r[3]=c->r[1]+0x00000010u; // 800CEA20
  c->r[4]=c->r[1]+0x00000038u; // 800CEA24
  W16(c->r[1]+0x00000012u,c->r[0]); // 800CEA28
  c->lr=0x800CEA30u; f_800C5F78(c); // 800CEA2C
  c->f[1]=std::fabs(c->f[31]); // 800CEA30
  {uint32_t ea=c->r[2]+0xFFFF9208u; c->f[0]=RF64(ea);} // 800CEA34
  fcmp(c,0,c->f[0],c->f[1]); // 800CEA38
  if (!crb(c,2)) { goto L_800CEA5C; } // 800CEA3C
  c->r[29]=c->r[28]+0xFFFFFFF4u; // 800CEA40
  c->r[4]=0u+0x80220000u; // 800CEA44
  c->r[3]=c->r[29]|c->r[29]; // 800CEA48
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CEA4C
  c->lr=0x800CEA54u; f_800D0180(c); // 800CEA50
  c->r[3]=c->r[29]|c->r[29]; // 800CEA54
  goto L_800CED60; // 800CEA58
L_800CEA5C:;
  c->r[0]=R8(c->r[1]+0x0000003Du); // 800CEA5C
  cmpu(c,0,c->r[0],0x00000049u); // 800CEA60
  if (!crb(c,2)) { goto L_800CEAF8; } // 800CEA64
  c->r[0]=R8(c->r[1]+0x00000038u); // 800CEA68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CEA6C
  if (crb(c,2)) { goto L_800CEAB4; } // 800CEA70
  c->r[0]=R16(c->r[30]+0x00000006u); // 800CEA74
  c->r[29]=c->r[28]+0xFFFFFFF6u; // 800CEA78
  cmpu(c,0,c->r[0],0x00000041u); // 800CEA7C
  if (!crb(c,2)) { goto L_800CEA9C; } // 800CEA80
  c->r[4]=0u+0x80220000u; // 800CEA84
  c->r[3]=c->r[29]|c->r[29]; // 800CEA88
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CEA8C
  c->r[4]=c->r[4]+0x0000000Cu; // 800CEA90
  c->lr=0x800CEA98u; f_800D0180(c); // 800CEA94
  goto L_800CEAF0; // 800CEA98
L_800CEA9C:;
  c->r[4]=0u+0x80220000u; // 800CEA9C
  c->r[3]=c->r[29]|c->r[29]; // 800CEAA0
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CEAA4
  c->r[4]=c->r[4]+0x00000016u; // 800CEAA8
  c->lr=0x800CEAB0u; f_800D0180(c); // 800CEAAC
  goto L_800CEAF0; // 800CEAB0
L_800CEAB4:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 800CEAB4
  c->r[29]=c->r[28]+0xFFFFFFF8u; // 800CEAB8
  cmpu(c,0,c->r[0],0x00000041u); // 800CEABC
  if (!crb(c,2)) { goto L_800CEADC; } // 800CEAC0
  c->r[4]=0u+0x80220000u; // 800CEAC4
  c->r[3]=c->r[29]|c->r[29]; // 800CEAC8
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CEACC
  c->r[4]=c->r[4]+0x00000020u; // 800CEAD0
  c->lr=0x800CEAD8u; f_800D0180(c); // 800CEAD4
  goto L_800CEAF0; // 800CEAD8
L_800CEADC:;
  c->r[4]=0u+0x80220000u; // 800CEADC
  c->r[3]=c->r[29]|c->r[29]; // 800CEAE0
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CEAE4
  c->r[4]=c->r[4]+0x00000028u; // 800CEAE8
  c->lr=0x800CEAF0u; f_800D0180(c); // 800CEAEC
L_800CEAF0:;
  c->r[3]=c->r[29]|c->r[29]; // 800CEAF0
  goto L_800CED60; // 800CEAF4
L_800CEAF8:;
  cmpu(c,0,c->r[0],0x0000004Eu); // 800CEAF8
  if (!crb(c,2)) { goto L_800CEB90; } // 800CEAFC
  c->r[0]=R8(c->r[1]+0x00000038u); // 800CEB00
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CEB04
  if (crb(c,2)) { goto L_800CEB4C; } // 800CEB08
  c->r[0]=R16(c->r[30]+0x00000006u); // 800CEB0C
  c->r[29]=c->r[28]+0xFFFFFFF6u; // 800CEB10
  cmpu(c,0,c->r[0],0x00000041u); // 800CEB14
  if (!crb(c,2)) { goto L_800CEB34; } // 800CEB18
  c->r[4]=0u+0x80220000u; // 800CEB1C
  c->r[3]=c->r[29]|c->r[29]; // 800CEB20
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CEB24
  c->r[4]=c->r[4]+0x00000030u; // 800CEB28
  c->lr=0x800CEB30u; f_800D0180(c); // 800CEB2C
  goto L_800CEB88; // 800CEB30
L_800CEB34:;
  c->r[4]=0u+0x80220000u; // 800CEB34
  c->r[3]=c->r[29]|c->r[29]; // 800CEB38
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CEB3C
  c->r[4]=c->r[4]+0x0000003Au; // 800CEB40
  c->lr=0x800CEB48u; f_800D0180(c); // 800CEB44
  goto L_800CEB88; // 800CEB48
L_800CEB4C:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 800CEB4C
  c->r[29]=c->r[28]+0xFFFFFFF8u; // 800CEB50
  cmpu(c,0,c->r[0],0x00000041u); // 800CEB54
  if (!crb(c,2)) { goto L_800CEB74; } // 800CEB58
  c->r[4]=0u+0x80220000u; // 800CEB5C
  c->r[3]=c->r[29]|c->r[29]; // 800CEB60
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CEB64
  c->r[4]=c->r[4]+0x00000044u; // 800CEB68
  c->lr=0x800CEB70u; f_800D0180(c); // 800CEB6C
  goto L_800CEB88; // 800CEB70
L_800CEB74:;
  c->r[4]=0u+0x80220000u; // 800CEB74
  c->r[3]=c->r[29]|c->r[29]; // 800CEB78
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CEB7C
  c->r[4]=c->r[4]+0x0000004Cu; // 800CEB80
  c->lr=0x800CEB88u; f_800D0180(c); // 800CEB84
L_800CEB88:;
  c->r[3]=c->r[29]|c->r[29]; // 800CEB88
  goto L_800CED60; // 800CEB8C
L_800CEB90:;
  c->r[8]=0u+0x00000001u; // 800CEB90
  c->r[7]=0u+0x00000064u; // 800CEB94
  c->r[0]=R8(c->r[1]+0x00000009u); // 800CEB98
  c->r[4]=c->r[28]|c->r[28]; // 800CEB9C
  c->r[3]=R8(c->r[1]+0x00000008u); // 800CEBA0
  c->r[5]=c->r[1]+0x00000018u; // 800CEBA4
  c->r[0]=rotl(c->r[0],17)&0xFFFE0000u; // 800CEBA8
  W8(c->r[1]+0x00000028u,c->r[8]); // 800CEBAC
  c->r[0]=(rotl(c->r[3],25)&0xFE000000u)|(c->r[0]&~0xFE000000u); // 800CEBB0
  c->r[3]=rotl(c->r[0],11)&0x000007FFu; // 800CEBB4
  W8(c->r[1]+0x00000029u,c->r[8]); // 800CEBB8
  c->r[3]=c->r[3]+0xFFFFFC01u; // 800CEBBC
  W8(c->r[1]+0x0000002Au,c->r[29]); // 800CEBC0
  W8(c->r[1]+0x0000002Bu,c->r[29]); // 800CEBC4
  c->r[6]=R32(c->r[1]+0x00000028u); // 800CEBC8
  W8(c->r[1]+0x0000002Cu,c->r[29]); // 800CEBCC
  W16(c->r[1]+0x0000002Eu,c->r[7]); // 800CEBD0
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800CEBD4
  W32(c->r[1]+0x00000030u,c->r[29]); // 800CEBD8
  W32(c->r[1]+0x00000034u,c->r[8]); // 800CEBDC
  W32(c->r[1]+0x00000018u,c->r[6]); // 800CEBE0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CEBE4
  W32(c->r[1]+0x00000020u,c->r[29]); // 800CEBE8
  W32(c->r[1]+0x00000024u,c->r[8]); // 800CEBEC
  c->lr=0x800CEBF4u; f_800CE4E0(c); // 800CEBF0
  c->r[0]=R16(c->r[30]+0x00000006u); // 800CEBF4
  cmpu(c,0,c->r[0],0x00000061u); // 800CEBF8
  if (!crb(c,2)) { goto L_800CEC10; } // 800CEBFC
  c->r[0]=0u+0x00000070u; // 800CEC00
  c->r[4]=c->r[3]+0xFFFFFFFEu; // 800CEC04
  W16(c->r[3]+0xFFFFFFFEu,c->r[0]); // 800CEC08
  goto L_800CEC1C; // 800CEC0C
L_800CEC10:;
  c->r[0]=0u+0x00000050u; // 800CEC10
  c->r[4]=c->r[3]+0xFFFFFFFEu; // 800CEC14
  W16(c->r[3]+0xFFFFFFFEu,c->r[0]); // 800CEC18
L_800CEC1C:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800CEC1C
  c->r[8]=c->r[1]+0x00000008u; // 800CEC20
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CEC24
  c->r[9]=c->r[3]+0x0000000Bu; // 800CEC28
  c->ctr=c->r[0]; // 800CEC2C
  cmps(c,0,(int32_t)c->r[0],1); // 800CEC30
  if (crb(c,0)) { goto L_800CECD0; } // 800CEC34
L_800CEC38:;
  cmps(c,0,(int32_t)c->r[9],64); // 800CEC38
  if (!crb(c,0)) { goto L_800CECC0; } // 800CEC3C
  c->r[3]=sraw(c,c->r[9],3); // 800CEC40
  c->r[0]=c->r[9]+0xFFFFFFFCu; // 800CEC44
  c->r[7]=c->r[8]+c->r[3]; // 800CEC48
  c->r[6]=rotl(c->r[9],0)&0x00000007u; // 800CEC4C
  c->r[3]=rotl(c->r[9],0)&0xFFFFFFF8u; // 800CEC50
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800CEC54
  c->r[5]=R8(c->r[7]+0x00000000u); // 800CEC58
  c->r[6]=addc(c,~c->r[6],0x00000007u,1); // 800CEC5C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800CEC60
  c->r[0]=sraw(c,c->r[5],(c->r[6])&63); // 800CEC64
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800CEC68
  if (crb(c,2)) { goto L_800CEC84; } // 800CEC6C
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 800CEC70
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 800CEC74
  c->r[0]=sraw(c,c->r[0],(c->r[6])&63); // 800CEC78
  c->r[0]=c->r[3]|c->r[0]; // 800CEC7C
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800CEC80
L_800CEC84:;
  c->r[3]=rotl(c->r[3],0)&0x0000000Fu; // 800CEC84
  cmpu(c,0,c->r[3],0x0000000Au); // 800CEC88
  if (!crb(c,0)) { goto L_800CEC9C; } // 800CEC8C
  c->r[0]=c->r[3]+0x00000030u; // 800CEC90
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800CEC94
  goto L_800CECC4; // 800CEC98
L_800CEC9C:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 800CEC9C
  cmpu(c,0,c->r[0],0x00000061u); // 800CECA0
  if (!crb(c,2)) { goto L_800CECB4; } // 800CECA4
  c->r[0]=c->r[3]+0x00000057u; // 800CECA8
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800CECAC
  goto L_800CECC4; // 800CECB0
L_800CECB4:;
  c->r[0]=c->r[3]+0x00000037u; // 800CECB4
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800CECB8
  goto L_800CECC4; // 800CECBC
L_800CECC0:;
  c->r[3]=0u+0x00000030u; // 800CECC0
L_800CECC4:;
  {uint32_t ea=c->r[4]+0xFFFFFFFEu; W16(ea,c->r[3]); c->r[4]=ea;} // 800CECC4
  c->r[9]=c->r[9]+0xFFFFFFFCu; // 800CECC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CEC38; } // 800CECCC
L_800CECD0:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800CECD0
  cmps(c,0,(int32_t)c->r[0],0); // 800CECD4
  if (!crb(c,2)) { goto L_800CECE8; } // 800CECD8
  c->r[0]=R8(c->r[30]+0x00000003u); // 800CECDC
  cmps(c,0,(int32_t)c->r[0],0); // 800CECE0
  if (crb(c,2)) { goto L_800CECEC; } // 800CECE4
L_800CECE8:;
  {uint32_t ea=c->r[4]+0xFFFFFFFEu; W16(ea,c->r[31]); c->r[4]=ea;} // 800CECE8
L_800CECEC:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 800CECEC
  c->r[3]=0u+0x00000031u; // 800CECF0
  W16(c->r[4]+0xFFFFFFFEu,c->r[3]); // 800CECF4
  cmpu(c,0,c->r[0],0x00000061u); // 800CECF8
  if (!crb(c,2)) { goto L_800CED0C; } // 800CECFC
  c->r[0]=0u+0x00000078u; // 800CED00
  {uint32_t ea=c->r[4]+0xFFFFFFFCu; W16(ea,c->r[0]); c->r[4]=ea;} // 800CED04
  goto L_800CED14; // 800CED08
L_800CED0C:;
  c->r[0]=0u+0x00000058u; // 800CED0C
  {uint32_t ea=c->r[4]+0xFFFFFFFCu; W16(ea,c->r[0]); c->r[4]=ea;} // 800CED10
L_800CED14:;
  c->r[0]=0u+0x00000030u; // 800CED14
  {uint32_t ea=c->r[4]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[4]=ea;} // 800CED18
  c->r[0]=R8(c->r[1]+0x00000038u); // 800CED1C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CED20
  if (crb(c,2)) { goto L_800CED34; } // 800CED24
  c->r[0]=0u+0x0000002Du; // 800CED28
  {uint32_t ea=c->r[4]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[4]=ea;} // 800CED2C
  goto L_800CED5C; // 800CED30
L_800CED34:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 800CED34
  cmpu(c,0,c->r[0],0x00000001u); // 800CED38
  if (!crb(c,2)) { goto L_800CED4C; } // 800CED3C
  c->r[0]=0u+0x0000002Bu; // 800CED40
  {uint32_t ea=c->r[4]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[4]=ea;} // 800CED44
  goto L_800CED5C; // 800CED48
L_800CED4C:;
  cmpu(c,0,c->r[0],0x00000002u); // 800CED4C
  if (!crb(c,2)) { goto L_800CED5C; } // 800CED50
  c->r[0]=0u+0x00000020u; // 800CED54
  {uint32_t ea=c->r[4]+0xFFFFFFFEu; W16(ea,c->r[0]); c->r[4]=ea;} // 800CED58
L_800CED5C:;
  c->r[3]=c->r[4]|c->r[4]; // 800CED5C
L_800CED60:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800CED60
  c->r[0]=R32(c->r[1]+0x00000094u); // 800CED64
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800CED68
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800CED6C
  c->r[30]=R32(c->r[1]+0x00000078u); // 800CED70
  c->r[29]=R32(c->r[1]+0x00000074u); // 800CED74
  c->r[28]=R32(c->r[1]+0x00000070u); // 800CED78
  c->lr=c->r[0]; // 800CED7C
  c->r[1]=c->r[1]+0x00000090u; // 800CED80
  return; // 800CED84
}

// fn_800CED88
void f_800CED88(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800CED88
  if (!crb(c,0)) { goto L_800CEDAC; } // 800CED8C
L_800CED90:;
  c->r[5]=0u+0x00000000u; // 800CED90
  c->r[4]=0u+0x00000001u; // 800CED94
  c->r[0]=0u+0x00000030u; // 800CED98
  W16(c->r[3]+0x00000002u,c->r[5]); // 800CED9C
  W8(c->r[3]+0x00000004u,c->r[4]); // 800CEDA0
  W8(c->r[3]+0x00000005u,c->r[0]); // 800CEDA4
  return; // 800CEDA8
L_800CEDAC:;
  c->r[7]=R8(c->r[3]+0x00000004u); // 800CEDAC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 800CEDB0
  if (!crb(c,0)) return; // 800CEDB4
  c->r[6]=c->r[3]+c->r[4]; // 800CEDB8
  c->r[5]=R8(c->r[6]+0x00000005u); // 800CEDBC
  c->r[8]=c->r[6]+0x00000005u; // 800CEDC0
  c->r[0]=c->r[5]+0xFFFFFFD0u; // 800CEDC4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800CEDC8
  cmps(c,0,(int32_t)c->r[6],5); // 800CEDCC
  if (!crb(c,2)) { goto L_800CEE10; } // 800CEDD0
  c->r[5]=c->r[3]+c->r[7]; // 800CEDD4
  c->r[5]=c->r[5]+0x00000005u; // 800CEDD8
L_800CEDDC:;
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800CEDDC
  cmpu(c,0,c->r[5],c->r[8]); // 800CEDE0
  if (!crb(c,1)) { goto L_800CEDF4; } // 800CEDE4
  c->r[0]=R8(c->r[5]+0x00000000u); // 800CEDE8
  cmps(c,0,(int32_t)c->r[0],48); // 800CEDEC
  if (crb(c,2)) { IRQCHK(c); goto L_800CEDDC; } // 800CEDF0
L_800CEDF4:;
  cmpu(c,0,c->r[5],c->r[8]); // 800CEDF4
  if (!crb(c,2)) { goto L_800CEE08; } // 800CEDF8
  c->r[0]=R8(c->r[8]+0xFFFFFFFFu); // 800CEDFC
  c->r[5]=rotl(c->r[0],0)&0x00000001u; // 800CEE00
  goto L_800CEE24; // 800CEE04
L_800CEE08:;
  c->r[5]=0u+0x00000001u; // 800CEE08
  goto L_800CEE24; // 800CEE0C
L_800CEE10:;
  c->r[0]=c->r[6]^0x00000005u; // 800CEE10
  c->r[5]=sraw(c,c->r[0],1); // 800CEE14
  c->r[0]=c->r[0]&c->r[6]; // 800CEE18
  c->r[0]=c->r[5]-c->r[0]; // 800CEE1C
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800CEE20
L_800CEE24:;
  c->ctr=c->r[4]; // 800CEE24
  cmps(c,0,(int32_t)c->r[4],0); // 800CEE28
  if (crb(c,2)) { goto L_800CEE78; } // 800CEE2C
L_800CEE30:;
  {uint32_t ea=c->r[8]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[8]=ea;} // 800CEE30
  c->r[5]=c->r[0]+c->r[5]; // 800CEE34
  c->r[0]=c->r[5]+0xFFFFFFD0u; // 800CEE38
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800CEE3C
  c->r[0]=c->r[6]^0x00000009u; // 800CEE40
  c->r[5]=sraw(c,c->r[0],1); // 800CEE44
  c->r[0]=c->r[0]&c->r[6]; // 800CEE48
  c->r[0]=c->r[5]-c->r[0]; // 800CEE4C
  c->r[5]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[5]); // 800CEE50
  if (!crb(c,2)) { goto L_800CEE60; } // 800CEE54
  cmps(c,0,(int32_t)c->r[6],0); // 800CEE58
  if (!crb(c,2)) { goto L_800CEE68; } // 800CEE5C
L_800CEE60:;
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800CEE60
  goto L_800CEE74; // 800CEE64
L_800CEE68:;
  c->r[0]=c->r[6]+0x00000030u; // 800CEE68
  W8(c->r[8]+0x00000000u,c->r[0]); // 800CEE6C
  goto L_800CEE78; // 800CEE70
L_800CEE74:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CEE30; } // 800CEE74
L_800CEE78:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CEE78
  if (crb(c,2)) { goto L_800CEEA0; } // 800CEE7C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800CEE80
  c->r[4]=0u+0x00000001u; // 800CEE84
  c->r[0]=0u+0x00000031u; // 800CEE88
  W8(c->r[3]+0x00000004u,c->r[4]); // 800CEE8C
  c->r[4]=c->r[5]+0x00000001u; // 800CEE90
  W16(c->r[3]+0x00000002u,c->r[4]); // 800CEE94
  W8(c->r[3]+0x00000005u,c->r[0]); // 800CEE98
  return; // 800CEE9C
L_800CEEA0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CEEA0
  if (crb(c,2)) { IRQCHK(c); goto L_800CED90; } // 800CEEA4
  W8(c->r[3]+0x00000004u,c->r[4]); // 800CEEA8
  return; // 800CEEAC
}

// fn_800CEEB0
void f_800CEEB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEEB0
  c->r[0]=c->lr; // 800CEEB4
  c->r[5]=0u+0x80220000u; // 800CEEB8
  W32(c->r[1]+0x00000254u,c->r[0]); // 800CEEBC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800CEEC0
  {uint32_t ea=c->r[1]+0x00000248u; WF64(ea,c->f[31]);} // 800CEEC4
  c->f[31]=c->f[1]; // 800CEEC8
  cmps(c,0,(int32_t)c->r[0],509); // 800CEECC
  W32(c->r[1]+0x00000244u,c->r[31]); // 800CEED0
  W32(c->r[1]+0x00000240u,c->r[30]); // 800CEED4
  W32(c->r[1]+0x0000023Cu,c->r[29]); // 800CEED8
  c->r[29]=c->r[4]|c->r[4]; // 800CEEDC
  W32(c->r[1]+0x00000238u,c->r[28]); // 800CEEE0
  c->r[28]=c->r[3]|c->r[3]; // 800CEEE4
  c->r[5]=R32(c->r[5]+0xFFFFBCE0u); // 800CEEE8
  c->r[30]=R8(c->r[5]+0x00000000u); // 800CEEEC
  if (!crb(c,1)) { goto L_800CEEFC; } // 800CEEF0
  c->r[3]=0u+0x00000000u; // 800CEEF4
  goto L_800CF62C; // 800CEEF8
L_800CEEFC:;
  c->r[3]=0u+0x00000000u; // 800CEEFC
  c->r[0]=0u+0x00000020u; // 800CEF00
  W8(c->r[1]+0x00000008u,c->r[3]); // 800CEF04
  c->r[3]=c->r[1]+0x00000008u; // 800CEF08
  c->r[4]=c->r[1]+0x0000000Cu; // 800CEF0C
  W16(c->r[1]+0x0000000Au,c->r[0]); // 800CEF10
  c->lr=0x800CEF18u; f_800C5F78(c); // 800CEF14
  c->r[0]=R8(c->r[1]+0x00000010u); // 800CEF18
  c->r[5]=c->r[1]+0x00000011u; // 800CEF1C
  c->r[5]=c->r[5]+c->r[0]; // 800CEF20
  goto L_800CEF40; // 800CEF24
L_800CEF28:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 800CEF28
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 800CEF2C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800CEF30
  c->r[0]=c->r[3]+0x00000001u; // 800CEF34
  W8(c->r[1]+0x00000010u,c->r[4]); // 800CEF38
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800CEF3C
L_800CEF40:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 800CEF40
  cmpu(c,0,c->r[0],0x00000001u); // 800CEF44
  if (!crb(c,1)) { goto L_800CEF58; } // 800CEF48
  {uint32_t ea=c->r[5]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[5]=ea;} // 800CEF4C
  cmps(c,0,(int32_t)c->r[0],48); // 800CEF50
  if (crb(c,2)) { IRQCHK(c); goto L_800CEF28; } // 800CEF54
L_800CEF58:;
  c->r[0]=R8(c->r[1]+0x00000011u); // 800CEF58
  cmps(c,0,(int32_t)c->r[0],73); // 800CEF5C
  if (crb(c,2)) { goto L_800CEF8C; } // 800CEF60
  if (!crb(c,0)) { goto L_800CEF74; } // 800CEF64
  cmps(c,0,(int32_t)c->r[0],48); // 800CEF68
  if (crb(c,2)) { goto L_800CEF80; } // 800CEF6C
  goto L_800CF15C; // 800CEF70
L_800CEF74:;
  cmps(c,0,(int32_t)c->r[0],78); // 800CEF74
  if (crb(c,2)) { goto L_800CF074; } // 800CEF78
  goto L_800CF15C; // 800CEF7C
L_800CEF80:;
  c->r[0]=0u+0x00000000u; // 800CEF80
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800CEF84
  goto L_800CF15C; // 800CEF88
L_800CEF8C:;
  {uint32_t ea=c->r[2]+0xFFFF9208u; c->f[0]=RF64(ea);} // 800CEF8C
  fcmp(c,0,c->f[31],c->f[0]); // 800CEF90
  if (!crb(c,0)) { goto L_800CF004; } // 800CEF94
  c->r[0]=R16(c->r[29]+0x00000006u); // 800CEF98
  c->r[31]=c->r[28]+0xFFFFFFF6u; // 800CEF9C
  cmpu(c,0,c->r[0],0x00000100u); // 800CEFA0
  if (crb(c,0)) { goto L_800CEFB0; } // 800CEFA4
  c->r[0]=0u+0x00000000u; // 800CEFA8
  goto L_800CEFCC; // 800CEFAC
L_800CEFB0:;
  c->r[3]=0u+0x80220000u; // 800CEFB0
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 800CEFB4
  c->r[3]=c->r[3]+0xFFFFBE90u; // 800CEFB8
  c->r[3]=R32(c->r[3]+0x00000038u); // 800CEFBC
  c->r[3]=R32(c->r[3]+0x00000014u); // 800CEFC0
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CEFC4
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 800CEFC8
L_800CEFCC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CEFCC
  if (crb(c,2)) { goto L_800CEFEC; } // 800CEFD0
  c->r[4]=0u+0x80220000u; // 800CEFD4
  c->r[3]=c->r[31]|c->r[31]; // 800CEFD8
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CEFDC
  c->r[4]=c->r[4]+0x0000000Cu; // 800CEFE0
  c->lr=0x800CEFE8u; f_800D0180(c); // 800CEFE4
  goto L_800CF06C; // 800CEFE8
L_800CEFEC:;
  c->r[4]=0u+0x80220000u; // 800CEFEC
  c->r[3]=c->r[31]|c->r[31]; // 800CEFF0
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CEFF4
  c->r[4]=c->r[4]+0x00000016u; // 800CEFF8
  c->lr=0x800CF000u; f_800D0180(c); // 800CEFFC
  goto L_800CF06C; // 800CF000
L_800CF004:;
  c->r[0]=R16(c->r[29]+0x00000006u); // 800CF004
  c->r[31]=c->r[28]+0xFFFFFFF8u; // 800CF008
  cmpu(c,0,c->r[0],0x00000100u); // 800CF00C
  if (crb(c,0)) { goto L_800CF01C; } // 800CF010
  c->r[0]=0u+0x00000000u; // 800CF014
  goto L_800CF038; // 800CF018
L_800CF01C:;
  c->r[3]=0u+0x80220000u; // 800CF01C
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 800CF020
  c->r[3]=c->r[3]+0xFFFFBE90u; // 800CF024
  c->r[3]=R32(c->r[3]+0x00000038u); // 800CF028
  c->r[3]=R32(c->r[3]+0x00000014u); // 800CF02C
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CF030
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 800CF034
L_800CF038:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CF038
  if (crb(c,2)) { goto L_800CF058; } // 800CF03C
  c->r[4]=0u+0x80220000u; // 800CF040
  c->r[3]=c->r[31]|c->r[31]; // 800CF044
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CF048
  c->r[4]=c->r[4]+0x00000020u; // 800CF04C
  c->lr=0x800CF054u; f_800D0180(c); // 800CF050
  goto L_800CF06C; // 800CF054
L_800CF058:;
  c->r[4]=0u+0x80220000u; // 800CF058
  c->r[3]=c->r[31]|c->r[31]; // 800CF05C
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CF060
  c->r[4]=c->r[4]+0x00000028u; // 800CF064
  c->lr=0x800CF06Cu; f_800D0180(c); // 800CF068
L_800CF06C:;
  c->r[3]=c->r[31]|c->r[31]; // 800CF06C
  goto L_800CF62C; // 800CF070
L_800CF074:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800CF074
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CF078
  if (crb(c,2)) { goto L_800CF0EC; } // 800CF07C
  c->r[0]=R16(c->r[29]+0x00000006u); // 800CF080
  c->r[31]=c->r[28]+0xFFFFFFF6u; // 800CF084
  cmpu(c,0,c->r[0],0x00000100u); // 800CF088
  if (crb(c,0)) { goto L_800CF098; } // 800CF08C
  c->r[0]=0u+0x00000000u; // 800CF090
  goto L_800CF0B4; // 800CF094
L_800CF098:;
  c->r[3]=0u+0x80220000u; // 800CF098
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 800CF09C
  c->r[3]=c->r[3]+0xFFFFBE90u; // 800CF0A0
  c->r[3]=R32(c->r[3]+0x00000038u); // 800CF0A4
  c->r[3]=R32(c->r[3]+0x00000014u); // 800CF0A8
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CF0AC
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 800CF0B0
L_800CF0B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CF0B4
  if (crb(c,2)) { goto L_800CF0D4; } // 800CF0B8
  c->r[4]=0u+0x80220000u; // 800CF0BC
  c->r[3]=c->r[31]|c->r[31]; // 800CF0C0
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CF0C4
  c->r[4]=c->r[4]+0x00000030u; // 800CF0C8
  c->lr=0x800CF0D0u; f_800D0180(c); // 800CF0CC
  goto L_800CF154; // 800CF0D0
L_800CF0D4:;
  c->r[4]=0u+0x80220000u; // 800CF0D4
  c->r[3]=c->r[31]|c->r[31]; // 800CF0D8
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CF0DC
  c->r[4]=c->r[4]+0x0000003Au; // 800CF0E0
  c->lr=0x800CF0E8u; f_800D0180(c); // 800CF0E4
  goto L_800CF154; // 800CF0E8
L_800CF0EC:;
  c->r[0]=R16(c->r[29]+0x00000006u); // 800CF0EC
  c->r[31]=c->r[28]+0xFFFFFFF8u; // 800CF0F0
  cmpu(c,0,c->r[0],0x00000100u); // 800CF0F4
  if (crb(c,0)) { goto L_800CF104; } // 800CF0F8
  c->r[0]=0u+0x00000000u; // 800CF0FC
  goto L_800CF120; // 800CF100
L_800CF104:;
  c->r[3]=0u+0x80220000u; // 800CF104
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 800CF108
  c->r[3]=c->r[3]+0xFFFFBE90u; // 800CF10C
  c->r[3]=R32(c->r[3]+0x00000038u); // 800CF110
  c->r[3]=R32(c->r[3]+0x00000014u); // 800CF114
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CF118
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 800CF11C
L_800CF120:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CF120
  if (crb(c,2)) { goto L_800CF140; } // 800CF124
  c->r[4]=0u+0x80220000u; // 800CF128
  c->r[3]=c->r[31]|c->r[31]; // 800CF12C
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CF130
  c->r[4]=c->r[4]+0x00000044u; // 800CF134
  c->lr=0x800CF13Cu; f_800D0180(c); // 800CF138
  goto L_800CF154; // 800CF13C
L_800CF140:;
  c->r[4]=0u+0x80220000u; // 800CF140
  c->r[3]=c->r[31]|c->r[31]; // 800CF144
  c->r[4]=c->r[4]+0xFFFFC520u; // 800CF148
  c->r[4]=c->r[4]+0x0000004Cu; // 800CF14C
  c->lr=0x800CF154u; f_800D0180(c); // 800CF150
L_800CF154:;
  c->r[3]=c->r[31]|c->r[31]; // 800CF154
  goto L_800CF62C; // 800CF158
L_800CF15C:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 800CF15C
  c->r[3]=0u+0x00000000u; // 800CF160
  c->r[4]=R8(c->r[1]+0x00000010u); // 800CF164
  c->r[31]=c->r[1]+0x00000237u; // 800CF168
  c->r[0]=R16(c->r[29]+0x00000006u); // 800CF16C
  c->r[4]=c->r[4]+c->r[5]; // 800CF170
  W8(c->r[1]+0x00000237u,c->r[3]); // 800CF174
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800CF178
  cmps(c,0,(int32_t)c->r[0],101); // 800CF17C
  W16(c->r[1]+0x0000000Eu,c->r[3]); // 800CF180
  if (crb(c,2)) { goto L_800CF278; } // 800CF184
  if (!crb(c,0)) { goto L_800CF1B0; } // 800CF188
  cmps(c,0,(int32_t)c->r[0],70); // 800CF18C
  if (crb(c,2)) { goto L_800CF3E0; } // 800CF190
  if (!crb(c,0)) { goto L_800CF1A4; } // 800CF194
  cmps(c,0,(int32_t)c->r[0],69); // 800CF198
  if (!crb(c,0)) { goto L_800CF278; } // 800CF19C
  goto L_800CF5FC; // 800CF1A0
L_800CF1A4:;
  cmps(c,0,(int32_t)c->r[0],72); // 800CF1A4
  if (!crb(c,0)) { goto L_800CF5FC; } // 800CF1A8
  goto L_800CF1C0; // 800CF1AC
L_800CF1B0:;
  cmps(c,0,(int32_t)c->r[0],103); // 800CF1B0
  if (crb(c,2)) { goto L_800CF1C0; } // 800CF1B4
  if (!crb(c,0)) { goto L_800CF5FC; } // 800CF1B8
  goto L_800CF3E0; // 800CF1BC
L_800CF1C0:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800CF1C0
  c->r[0]=R8(c->r[1]+0x00000010u); // 800CF1C4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800CF1C8
  if (!crb(c,1)) { goto L_800CF1D8; } // 800CF1CC
  c->r[3]=c->r[1]+0x0000000Cu; // 800CF1D0
  c->lr=0x800CF1D8u; f_800CED88(c); // 800CF1D4
L_800CF1D8:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 800CF1D8
  cmps(c,0,(int32_t)c->r[4],-4); // 800CF1DC
  if (crb(c,0)) { goto L_800CF1F0; } // 800CF1E0
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800CF1E4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 800CF1E8
  if (crb(c,0)) { goto L_800CF23C; } // 800CF1EC
L_800CF1F0:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 800CF1F0
  cmps(c,0,(int32_t)c->r[0],0); // 800CF1F4
  if (crb(c,2)) { goto L_800CF20C; } // 800CF1F8
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800CF1FC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CF200
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800CF204
  goto L_800CF218; // 800CF208
L_800CF20C:;
  c->r[3]=R8(c->r[1]+0x00000010u); // 800CF20C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CF210
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800CF214
L_800CF218:;
  c->r[0]=R16(c->r[29]+0x00000006u); // 800CF218
  cmpu(c,0,c->r[0],0x00000067u); // 800CF21C
  if (!crb(c,2)) { goto L_800CF230; } // 800CF220
  c->r[0]=0u+0x00000065u; // 800CF224
  W16(c->r[29]+0x00000006u,c->r[0]); // 800CF228
  goto L_800CF278; // 800CF22C
L_800CF230:;
  c->r[0]=0u+0x00000045u; // 800CF230
  W16(c->r[29]+0x00000006u,c->r[0]); // 800CF234
  goto L_800CF278; // 800CF238
L_800CF23C:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 800CF23C
  cmps(c,0,(int32_t)c->r[0],0); // 800CF240
  if (crb(c,2)) { goto L_800CF258; } // 800CF244
  c->r[0]=c->r[4]+0x00000001u; // 800CF248
  c->r[0]=c->r[3]-c->r[0]; // 800CF24C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800CF250
  goto L_800CF3E0; // 800CF254
L_800CF258:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 800CF258
  c->r[3]=c->r[4]+0x00000001u; // 800CF25C
  c->r[0]=c->r[0]-c->r[3]; cr0(c,c->r[0]); // 800CF260
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800CF264
  if (!crb(c,0)) { goto L_800CF3E0; } // 800CF268
  c->r[0]=0u+0x00000000u; // 800CF26C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800CF270
  goto L_800CF3E0; // 800CF274
L_800CF278:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800CF278
  c->r[0]=R8(c->r[1]+0x00000010u); // 800CF27C
  c->r[4]=c->r[3]+0x00000001u; // 800CF280
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800CF284
  if (!crb(c,1)) { goto L_800CF294; } // 800CF288
  c->r[3]=c->r[1]+0x0000000Cu; // 800CF28C
  c->lr=0x800CF294u; f_800CED88(c); // 800CF290
L_800CF294:;
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 800CF294
  c->r[8]=0u+0x0000002Bu; // 800CF298
  cmps(c,0,(int32_t)c->r[6],0); // 800CF29C
  if (!crb(c,0)) { goto L_800CF2AC; } // 800CF2A0
  c->r[6]=0u-c->r[6]; // 800CF2A4
  c->r[8]=0u+0x0000002Du; // 800CF2A8
L_800CF2AC:;
  c->r[3]=0u+0x66660000u; // 800CF2AC
  c->r[7]=0u+0x00000000u; // 800CF2B0
  c->r[5]=c->r[3]+0x00006667u; // 800CF2B4
  goto L_800CF2F0; // 800CF2B8
L_800CF2BC:;
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[6])>>32); // 800CF2BC
  c->r[7]=c->r[7]+0x00000001u; // 800CF2C0
  c->r[3]=sraw(c,c->r[0],2); // 800CF2C4
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 800CF2C8
  c->r[0]=sraw(c,c->r[0],2); // 800CF2CC
  c->r[3]=c->r[3]+c->r[4]; // 800CF2D0
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 800CF2D4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CF2D8
  c->r[4]=c->r[6]-c->r[4]; // 800CF2DC
  c->r[6]=c->r[0]+c->r[3]; // 800CF2E0
  c->r[0]=c->r[4]+0x00000030u; // 800CF2E4
  W8(c->r[31]+0xFFFFFFFFu,c->r[0]); // 800CF2E8
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 800CF2EC
L_800CF2F0:;
  cmps(c,0,(int32_t)c->r[6],0); // 800CF2F0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF2BC; } // 800CF2F4
  cmps(c,0,(int32_t)c->r[7],2); // 800CF2F8
  if (crb(c,0)) { IRQCHK(c); goto L_800CF2BC; } // 800CF2FC
  W8(c->r[31]+0xFFFFFFFFu,c->r[8]); // 800CF300
  c->r[0]=c->r[1]+0x00000038u; // 800CF304
  c->r[3]=R16(c->r[29]+0x00000006u); // 800CF308
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800CF30C
  {uint32_t ea=c->r[31]+0xFFFFFFFEu; W8(ea,c->r[3]); c->r[31]=ea;} // 800CF310
  c->r[0]=c->r[0]-c->r[31]; // 800CF314
  c->r[0]=c->r[0]+c->r[4]; // 800CF318
  cmps(c,0,(int32_t)c->r[0],509); // 800CF31C
  if (!crb(c,1)) { goto L_800CF32C; } // 800CF320
  c->r[3]=0u+0x00000000u; // 800CF324
  goto L_800CF62C; // 800CF328
L_800CF32C:;
  c->r[5]=R8(c->r[1]+0x00000010u); // 800CF32C
  c->r[0]=c->r[4]+0x00000001u; // 800CF330
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800CF334
  if (!crb(c,0)) { goto L_800CF358; } // 800CF338
  c->r[3]=c->r[4]+0x00000002u; // 800CF33C
  c->r[0]=0u+0x00000030u; // 800CF340
  c->r[3]=c->r[3]-c->r[5]; // 800CF344
  goto L_800CF350; // 800CF348
L_800CF34C:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800CF34C
L_800CF350:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 800CF350
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF34C; } // 800CF354
L_800CF358:;
  c->r[3]=R8(c->r[1]+0x00000010u); // 800CF358
  c->r[4]=c->r[1]+0x00000011u; // 800CF35C
  c->r[4]=c->r[4]+c->r[3]; // 800CF360
  goto L_800CF370; // 800CF364
L_800CF368:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 800CF368
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800CF36C
L_800CF370:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 800CF370
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF368; } // 800CF374
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800CF378
  cmps(c,0,(int32_t)c->r[0],0); // 800CF37C
  if (!crb(c,2)) { goto L_800CF390; } // 800CF380
  c->r[0]=R8(c->r[29]+0x00000003u); // 800CF384
  cmps(c,0,(int32_t)c->r[0],0); // 800CF388
  if (crb(c,2)) { goto L_800CF394; } // 800CF38C
L_800CF390:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[30]); c->r[31]=ea;} // 800CF390
L_800CF394:;
  c->r[0]=R8(c->r[1]+0x00000011u); // 800CF394
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800CF398
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800CF39C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CF3A0
  if (crb(c,2)) { goto L_800CF3B4; } // 800CF3A4
  c->r[0]=0u+0x0000002Du; // 800CF3A8
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800CF3AC
  goto L_800CF5FC; // 800CF3B0
L_800CF3B4:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 800CF3B4
  cmpu(c,0,c->r[0],0x00000001u); // 800CF3B8
  if (!crb(c,2)) { goto L_800CF3CC; } // 800CF3BC
  c->r[0]=0u+0x0000002Bu; // 800CF3C0
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800CF3C4
  goto L_800CF5FC; // 800CF3C8
L_800CF3CC:;
  cmpu(c,0,c->r[0],0x00000002u); // 800CF3CC
  if (!crb(c,2)) { goto L_800CF5FC; } // 800CF3D0
  c->r[0]=0u+0x00000020u; // 800CF3D4
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800CF3D8
  goto L_800CF5FC; // 800CF3DC
L_800CF3E0:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 800CF3E0
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 800CF3E4
  c->r[3]=c->r[4]-c->r[5]; // 800CF3E8
  c->r[8]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800CF3EC
  if (!crb(c,0)) { goto L_800CF3F8; } // 800CF3F0
  c->r[8]=0u+0x00000000u; // 800CF3F4
L_800CF3F8:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800CF3F8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800CF3FC
  if (!crb(c,1)) { goto L_800CF42C; } // 800CF400
  c->r[0]=c->r[8]-c->r[0]; // 800CF404
  c->r[3]=c->r[1]+0x0000000Cu; // 800CF408
  c->r[4]=c->r[4]-c->r[0]; // 800CF40C
  c->lr=0x800CF414u; f_800CED88(c); // 800CF410
  c->r[4]=R8(c->r[1]+0x00000010u); // 800CF414
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 800CF418
  c->r[3]=c->r[4]-c->r[5]; // 800CF41C
  c->r[8]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800CF420
  if (!crb(c,0)) { goto L_800CF42C; } // 800CF424
  c->r[8]=0u+0x00000000u; // 800CF428
L_800CF42C:;
  c->r[7]=addc(c,c->r[5],0x00000001u,0); cr0(c,c->r[7]); // 800CF42C
  if (!crb(c,0)) { goto L_800CF438; } // 800CF430
  c->r[7]=0u+0x00000000u; // 800CF434
L_800CF438:;
  c->r[0]=c->r[7]+c->r[8]; // 800CF438
  cmps(c,0,(int32_t)c->r[0],509); // 800CF43C
  if (!crb(c,1)) { goto L_800CF44C; } // 800CF440
  c->r[3]=0u+0x00000000u; // 800CF444
  goto L_800CF62C; // 800CF448
L_800CF44C:;
  c->r[6]=c->r[1]+0x00000011u; // 800CF44C
  c->r[5]=0u+0x00000000u; // 800CF450
  c->r[6]=c->r[6]+c->r[4]; // 800CF454
  c->r[3]=0u+0x00000030u; // 800CF458
  goto L_800CF468; // 800CF45C
L_800CF460:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[31]=ea;} // 800CF460
  c->r[5]=c->r[5]+0x00000001u; // 800CF464
L_800CF468:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800CF468
  c->r[0]=c->r[0]-c->r[8]; // 800CF46C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800CF470
  if (crb(c,0)) { IRQCHK(c); goto L_800CF460; } // 800CF474
  c->r[3]=0u+0x00000000u; // 800CF478
  goto L_800CF48C; // 800CF47C
L_800CF480:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 800CF480
  c->r[3]=c->r[3]+0x00000001u; // 800CF484
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800CF488
L_800CF48C:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 800CF48C
  if (!crb(c,0)) { goto L_800CF4A0; } // 800CF490
  c->r[0]=R8(c->r[1]+0x00000010u); // 800CF494
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800CF498
  if (crb(c,0)) { IRQCHK(c); goto L_800CF480; } // 800CF49C
L_800CF4A0:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 800CF4A0
  c->r[3]=c->r[8]-c->r[3]; // 800CF4A4
  c->r[4]=0u+0x00000030u; // 800CF4A8
  if (!crb(c,0)) { goto L_800CF4F4; } // 800CF4AC
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800CF4B0
  c->ctr=c->r[0]; // 800CF4B4
  if (crb(c,2)) { goto L_800CF4E8; } // 800CF4B8
L_800CF4BC:;
  W8(c->r[31]+0xFFFFFFFFu,c->r[4]); // 800CF4BC
  W8(c->r[31]+0xFFFFFFFEu,c->r[4]); // 800CF4C0
  W8(c->r[31]+0xFFFFFFFDu,c->r[4]); // 800CF4C4
  W8(c->r[31]+0xFFFFFFFCu,c->r[4]); // 800CF4C8
  W8(c->r[31]+0xFFFFFFFBu,c->r[4]); // 800CF4CC
  W8(c->r[31]+0xFFFFFFFAu,c->r[4]); // 800CF4D0
  W8(c->r[31]+0xFFFFFFF9u,c->r[4]); // 800CF4D4
  {uint32_t ea=c->r[31]+0xFFFFFFF8u; W8(ea,c->r[4]); c->r[31]=ea;} // 800CF4D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CF4BC; } // 800CF4DC
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 800CF4E0
  if (crb(c,2)) { goto L_800CF4F4; } // 800CF4E4
L_800CF4E8:;
  c->ctr=c->r[3]; // 800CF4E8
L_800CF4EC:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[4]); c->r[31]=ea;} // 800CF4EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CF4EC; } // 800CF4F0
L_800CF4F4:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800CF4F4
  cmps(c,0,(int32_t)c->r[0],0); // 800CF4F8
  if (!crb(c,2)) { goto L_800CF50C; } // 800CF4FC
  c->r[0]=R8(c->r[29]+0x00000003u); // 800CF500
  cmps(c,0,(int32_t)c->r[0],0); // 800CF504
  if (crb(c,2)) { goto L_800CF510; } // 800CF508
L_800CF50C:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[30]); c->r[31]=ea;} // 800CF50C
L_800CF510:;
  cmps(c,0,(int32_t)c->r[7],0); // 800CF510
  if (crb(c,2)) { goto L_800CF5B4; } // 800CF514
  c->r[4]=0u+0x00000000u; // 800CF518
  c->r[3]=0u+0x00000030u; // 800CF51C
  goto L_800CF52C; // 800CF520
L_800CF524:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[31]=ea;} // 800CF524
  c->r[4]=c->r[4]+0x00000001u; // 800CF528
L_800CF52C:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 800CF52C
  c->r[0]=c->r[7]-c->r[0]; // 800CF530
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800CF534
  if (crb(c,0)) { IRQCHK(c); goto L_800CF524; } // 800CF538
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 800CF53C
  c->r[3]=c->r[7]-c->r[4]; // 800CF540
  if (!crb(c,0)) { goto L_800CF5BC; } // 800CF544
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800CF548
  c->ctr=c->r[0]; // 800CF54C
  if (crb(c,2)) { goto L_800CF5A0; } // 800CF550
L_800CF554:;
  c->r[0]=R8(c->r[6]+0xFFFFFFFFu); // 800CF554
  W8(c->r[31]+0xFFFFFFFFu,c->r[0]); // 800CF558
  c->r[0]=R8(c->r[6]+0xFFFFFFFEu); // 800CF55C
  W8(c->r[31]+0xFFFFFFFEu,c->r[0]); // 800CF560
  c->r[0]=R8(c->r[6]+0xFFFFFFFDu); // 800CF564
  W8(c->r[31]+0xFFFFFFFDu,c->r[0]); // 800CF568
  c->r[0]=R8(c->r[6]+0xFFFFFFFCu); // 800CF56C
  W8(c->r[31]+0xFFFFFFFCu,c->r[0]); // 800CF570
  c->r[0]=R8(c->r[6]+0xFFFFFFFBu); // 800CF574
  W8(c->r[31]+0xFFFFFFFBu,c->r[0]); // 800CF578
  c->r[0]=R8(c->r[6]+0xFFFFFFFAu); // 800CF57C
  W8(c->r[31]+0xFFFFFFFAu,c->r[0]); // 800CF580
  c->r[0]=R8(c->r[6]+0xFFFFFFF9u); // 800CF584
  W8(c->r[31]+0xFFFFFFF9u,c->r[0]); // 800CF588
  {uint32_t ea=c->r[6]+0xFFFFFFF8u; c->r[0]=R8(ea); c->r[6]=ea;} // 800CF58C
  {uint32_t ea=c->r[31]+0xFFFFFFF8u; W8(ea,c->r[0]); c->r[31]=ea;} // 800CF590
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CF554; } // 800CF594
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 800CF598
  if (crb(c,2)) { goto L_800CF5BC; } // 800CF59C
L_800CF5A0:;
  c->ctr=c->r[3]; // 800CF5A0
L_800CF5A4:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 800CF5A4
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800CF5A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CF5A4; } // 800CF5AC
  goto L_800CF5BC; // 800CF5B0
L_800CF5B4:;
  c->r[0]=0u+0x00000030u; // 800CF5B4
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800CF5B8
L_800CF5BC:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800CF5BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CF5C0
  if (crb(c,2)) { goto L_800CF5D4; } // 800CF5C4
  c->r[0]=0u+0x0000002Du; // 800CF5C8
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800CF5CC
  goto L_800CF5FC; // 800CF5D0
L_800CF5D4:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 800CF5D4
  cmpu(c,0,c->r[0],0x00000001u); // 800CF5D8
  if (!crb(c,2)) { goto L_800CF5EC; } // 800CF5DC
  c->r[0]=0u+0x0000002Bu; // 800CF5E0
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800CF5E4
  goto L_800CF5FC; // 800CF5E8
L_800CF5EC:;
  cmpu(c,0,c->r[0],0x00000002u); // 800CF5EC
  if (!crb(c,2)) { goto L_800CF5FC; } // 800CF5F0
  c->r[0]=0u+0x00000020u; // 800CF5F4
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800CF5F8
L_800CF5FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800CF5FC
  c->lr=0x800CF604u; f_800C1734(c); // 800CF600
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800CF604
  c->r[3]=c->r[31]|c->r[31]; // 800CF608
  c->r[4]=c->r[28]-c->r[0]; // 800CF60C
  c->r[28]=c->r[4]+0xFFFFFFFEu; // 800CF610
  c->lr=0x800CF618u; f_800C1734(c); // 800CF614
  c->r[5]=c->r[3]|c->r[3]; // 800CF618
  c->r[3]=c->r[28]|c->r[28]; // 800CF61C
  c->r[4]=c->r[31]|c->r[31]; // 800CF620
  c->lr=0x800CF628u; f_800C78BC(c); // 800CF624
  c->r[3]=c->r[28]|c->r[28]; // 800CF628
L_800CF62C:;
  c->r[0]=R32(c->r[1]+0x00000254u); // 800CF62C
  {uint32_t ea=c->r[1]+0x00000248u; c->f[31]=RF64(ea);} // 800CF630
  c->r[31]=R32(c->r[1]+0x00000244u); // 800CF634
  c->r[30]=R32(c->r[1]+0x00000240u); // 800CF638
  c->r[29]=R32(c->r[1]+0x0000023Cu); // 800CF63C
  c->r[28]=R32(c->r[1]+0x00000238u); // 800CF640
  c->lr=c->r[0]; // 800CF644
  c->r[1]=c->r[1]+0x00000250u; // 800CF648
  return; // 800CF64C
}

// fn_800CF650
void f_800CF650(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFB30u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF650
  c->r[0]=c->lr; // 800CF654
  W32(c->r[1]+0x000004D4u,c->r[0]); // 800CF658
  {uint32_t ea=c->r[1]+0x0000048Cu; for(int i=15;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CF65C
  c->r[20]=0u+0x00000020u; // 800CF660
  c->r[16]=0u+0x80220000u; // 800CF664
  c->r[21]=c->r[3]|c->r[3]; // 800CF668
  c->r[22]=c->r[4]|c->r[4]; // 800CF66C
  c->r[30]=c->r[5]|c->r[5]; // 800CF670
  c->r[23]=c->r[6]|c->r[6]; // 800CF674
  c->r[16]=c->r[16]+0xFFFFC520u; // 800CF678
  c->r[15]=c->r[1]+0x0000047Eu; // 800CF67C
  c->r[31]=0u+0x00000000u; // 800CF680
  c->r[17]=0u+0x801F0000u; // 800CF684
  c->r[19]=0u+0x00000025u; // 800CF688
  c->r[18]=0u+0x80220000u; // 800CF68C
  W16(c->r[1]+0x0000000Cu,c->r[20]); // 800CF690
  goto L_800CFF70; // 800CF694
L_800CF698:;
  c->r[3]=c->r[30]|c->r[30]; // 800CF698
  c->r[4]=0u+0x00000025u; // 800CF69C
  c->lr=0x800CF6A4u; f_800D0260(c); // 800CF6A0
  cmps(c,0,(int32_t)c->r[3],0); // 800CF6A4
  c->r[29]=c->r[3]|c->r[3]; // 800CF6A8
  if (!crb(c,2)) { goto L_800CF6EC; } // 800CF6AC
  c->r[3]=c->r[30]|c->r[30]; // 800CF6B0
  c->lr=0x800CF6B8u; f_800D0164(c); // 800CF6B4
  cmps(c,0,(int32_t)c->r[3],0); // 800CF6B8
  c->r[5]=c->r[3]|c->r[3]; // 800CF6BC
  c->r[31]=c->r[31]+c->r[3]; // 800CF6C0
  if (crb(c,2)) { goto L_800CFF7C; } // 800CF6C4
  c->r[12]=c->r[21]|c->r[21]; // 800CF6C8
  c->r[3]=c->r[22]|c->r[22]; // 800CF6CC
  c->r[4]=c->r[30]|c->r[30]; // 800CF6D0
  c->ctr=c->r[12]; // 800CF6D4
  if (true) { c->lr=0x800CF6DCu; dispatch(c,c->ctr); } // 800CF6D8
  cmps(c,0,(int32_t)c->r[3],0); // 800CF6DC
  if (!crb(c,2)) { goto L_800CFF7C; } // 800CF6E0
  c->r[3]=0u+0xFFFFFFFFu; // 800CF6E4
  goto L_800CFF80; // 800CF6E8
L_800CF6EC:;
  c->r[3]=c->r[3]-c->r[30]; // 800CF6EC
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800CF6F0
  c->r[0]=c->r[0]+c->r[3]; // 800CF6F4
  c->r[5]=sraw(c,c->r[0],1); cr0(c,c->r[5]); // 800CF6F8
  c->r[31]=c->r[31]+c->r[5]; // 800CF6FC
  if (crb(c,2)) { goto L_800CF728; } // 800CF700
  c->r[12]=c->r[21]|c->r[21]; // 800CF704
  c->r[3]=c->r[22]|c->r[22]; // 800CF708
  c->r[4]=c->r[30]|c->r[30]; // 800CF70C
  c->ctr=c->r[12]; // 800CF710
  if (true) { c->lr=0x800CF718u; dispatch(c,c->ctr); } // 800CF714
  cmps(c,0,(int32_t)c->r[3],0); // 800CF718
  if (!crb(c,2)) { goto L_800CF728; } // 800CF71C
  c->r[3]=0u+0xFFFFFFFFu; // 800CF720
  goto L_800CFF80; // 800CF724
L_800CF728:;
  c->r[3]=c->r[29]|c->r[29]; // 800CF728
  c->r[4]=c->r[23]|c->r[23]; // 800CF72C
  c->r[5]=c->r[1]+0x00000070u; // 800CF730
  c->lr=0x800CF738u; f_800CDF20(c); // 800CF734
  c->r[4]=R16(c->r[1]+0x00000076u); // 800CF738
  c->r[30]=c->r[3]|c->r[3]; // 800CF73C
  cmps(c,0,(int32_t)c->r[4],104); // 800CF740
  if (crb(c,2)) { goto L_800CFDF8; } // 800CF744
  if (!crb(c,0)) { goto L_800CF7A8; } // 800CF748
  cmps(c,0,(int32_t)c->r[4],88); // 800CF74C
  if (crb(c,2)) { goto L_800CF968; } // 800CF750
  if (!crb(c,0)) { goto L_800CF784; } // 800CF754
  cmps(c,0,(int32_t)c->r[4],65); // 800CF758
  if (crb(c,2)) { goto L_800CFB40; } // 800CF75C
  if (!crb(c,0)) { goto L_800CF770; } // 800CF760
  cmps(c,0,(int32_t)c->r[4],37); // 800CF764
  if (crb(c,2)) { goto L_800CFDE8; } // 800CF768
  goto L_800CFDF8; // 800CF76C
L_800CF770:;
  cmps(c,0,(int32_t)c->r[4],72); // 800CF770
  if (!crb(c,0)) { goto L_800CFDF8; } // 800CF774
  cmps(c,0,(int32_t)c->r[4],69); // 800CF778
  if (!crb(c,0)) { goto L_800CFAC4; } // 800CF77C
  goto L_800CFDF8; // 800CF780
L_800CF784:;
  cmps(c,0,(int32_t)c->r[4],99); // 800CF784
  if (crb(c,2)) { goto L_800CFD90; } // 800CF788
  if (!crb(c,0)) { goto L_800CF79C; } // 800CF78C
  cmps(c,0,(int32_t)c->r[4],97); // 800CF790
  if (crb(c,2)) { goto L_800CFB40; } // 800CF794
  goto L_800CFDF8; // 800CF798
L_800CF79C:;
  cmps(c,0,(int32_t)c->r[4],101); // 800CF79C
  if (!crb(c,0)) { goto L_800CFAC4; } // 800CF7A0
  goto L_800CF80C; // 800CF7A4
L_800CF7A8:;
  cmps(c,0,(int32_t)c->r[4],116); // 800CF7A8
  if (crb(c,2)) { goto L_800CFDF8; } // 800CF7AC
  if (!crb(c,0)) { goto L_800CF7E0; } // 800CF7B0
  cmps(c,0,(int32_t)c->r[4],111); // 800CF7B4
  if (crb(c,2)) { goto L_800CF968; } // 800CF7B8
  if (!crb(c,0)) { goto L_800CF7D4; } // 800CF7BC
  cmps(c,0,(int32_t)c->r[4],110); // 800CF7C0
  if (!crb(c,0)) { goto L_800CFD18; } // 800CF7C4
  cmps(c,0,(int32_t)c->r[4],106); // 800CF7C8
  if (!crb(c,0)) { goto L_800CFDF8; } // 800CF7CC
  goto L_800CF80C; // 800CF7D0
L_800CF7D4:;
  cmps(c,0,(int32_t)c->r[4],115); // 800CF7D4
  if (!crb(c,0)) { goto L_800CFBBC; } // 800CF7D8
  goto L_800CFDF8; // 800CF7DC
L_800CF7E0:;
  cmps(c,0,(int32_t)c->r[4],120); // 800CF7E0
  if (crb(c,2)) { goto L_800CF968; } // 800CF7E4
  if (!crb(c,0)) { goto L_800CF7F8; } // 800CF7E8
  cmps(c,0,(int32_t)c->r[4],118); // 800CF7EC
  if (!crb(c,0)) { goto L_800CFDF8; } // 800CF7F0
  goto L_800CF968; // 800CF7F4
L_800CF7F8:;
  c->r[3]=0u+0x00010000u; // 800CF7F8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CF7FC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800CF800
  if (crb(c,2)) { goto L_800CFDF8; } // 800CF804
  goto L_800CFDF8; // 800CF808
L_800CF80C:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800CF80C
  cmpu(c,0,c->r[0],0x00000003u); // 800CF810
  if (!crb(c,2)) { goto L_800CF82C; } // 800CF814
  c->r[3]=c->r[23]|c->r[23]; // 800CF818
  c->r[4]=0u+0x00000001u; // 800CF81C
  c->lr=0x800CF824u; f_800C1750(c); // 800CF820
  c->r[28]=R32(c->r[3]+0x00000000u); // 800CF824
  goto L_800CF8B4; // 800CF828
L_800CF82C:;
  cmpu(c,0,c->r[0],0x00000004u); // 800CF82C
  if (!crb(c,2)) { goto L_800CF84C; } // 800CF830
  c->r[3]=c->r[23]|c->r[23]; // 800CF834
  c->r[4]=0u+0x00000002u; // 800CF838
  c->lr=0x800CF840u; f_800C1750(c); // 800CF83C
  c->r[27]=R32(c->r[3]+0x00000000u); // 800CF840
  c->r[26]=R32(c->r[3]+0x00000004u); // 800CF844
  goto L_800CF8B4; // 800CF848
L_800CF84C:;
  cmpu(c,0,c->r[0],0x00000006u); // 800CF84C
  if (!crb(c,2)) { goto L_800CF86C; } // 800CF850
  c->r[3]=c->r[23]|c->r[23]; // 800CF854
  c->r[4]=0u+0x00000002u; // 800CF858
  c->lr=0x800CF860u; f_800C1750(c); // 800CF85C
  c->r[27]=R32(c->r[3]+0x00000000u); // 800CF860
  c->r[26]=R32(c->r[3]+0x00000004u); // 800CF864
  goto L_800CF8B4; // 800CF868
L_800CF86C:;
  cmpu(c,0,c->r[0],0x00000007u); // 800CF86C
  if (!crb(c,2)) { goto L_800CF888; } // 800CF870
  c->r[3]=c->r[23]|c->r[23]; // 800CF874
  c->r[4]=0u+0x00000001u; // 800CF878
  c->lr=0x800CF880u; f_800C1750(c); // 800CF87C
  c->r[28]=R32(c->r[3]+0x00000000u); // 800CF880
  goto L_800CF8B4; // 800CF884
L_800CF888:;
  cmpu(c,0,c->r[0],0x00000008u); // 800CF888
  if (!crb(c,2)) { goto L_800CF8A4; } // 800CF88C
  c->r[3]=c->r[23]|c->r[23]; // 800CF890
  c->r[4]=0u+0x00000001u; // 800CF894
  c->lr=0x800CF89Cu; f_800C1750(c); // 800CF898
  c->r[28]=R32(c->r[3]+0x00000000u); // 800CF89C
  goto L_800CF8B4; // 800CF8A0
L_800CF8A4:;
  c->r[3]=c->r[23]|c->r[23]; // 800CF8A4
  c->r[4]=0u+0x00000001u; // 800CF8A8
  c->lr=0x800CF8B0u; f_800C1750(c); // 800CF8AC
  c->r[28]=R32(c->r[3]+0x00000000u); // 800CF8B0
L_800CF8B4:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800CF8B4
  cmpu(c,0,c->r[0],0x00000002u); // 800CF8B8
  if (!crb(c,2)) { goto L_800CF8C4; } // 800CF8BC
  c->r[28]=(uint32_t)(int32_t)(int16_t)c->r[28]; // 800CF8C0
L_800CF8C4:;
  cmpu(c,0,c->r[0],0x00000004u); // 800CF8C4
  if (crb(c,2)) { goto L_800CF8D4; } // 800CF8C8
  cmpu(c,0,c->r[0],0x00000006u); // 800CF8CC
  if (!crb(c,2)) { goto L_800CF918; } // 800CF8D0
L_800CF8D4:;
  c->r[9]=R32(c->r[1]+0x00000070u); // 800CF8D4
  c->r[4]=c->r[26]|c->r[26]; // 800CF8D8
  c->r[8]=R32(c->r[1]+0x00000074u); // 800CF8DC
  c->r[3]=c->r[27]|c->r[27]; // 800CF8E0
  c->r[7]=R32(c->r[1]+0x00000078u); // 800CF8E4
  c->r[5]=c->r[1]+0x00000480u; // 800CF8E8
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800CF8EC
  c->r[6]=c->r[1]+0x00000060u; // 800CF8F0
  W32(c->r[1]+0x00000060u,c->r[9]); // 800CF8F4
  W32(c->r[1]+0x00000064u,c->r[8]); // 800CF8F8
  W32(c->r[1]+0x00000068u,c->r[7]); // 800CF8FC
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800CF900
  c->lr=0x800CF908u; f_800CE714(c); // 800CF904
  cmps(c,0,(int32_t)c->r[3],0); // 800CF908
  c->r[25]=c->r[3]|c->r[3]; // 800CF90C
  if (crb(c,2)) { goto L_800CFDF8; } // 800CF910
  goto L_800CF954; // 800CF914
L_800CF918:;
  c->r[8]=R32(c->r[1]+0x00000070u); // 800CF918
  c->r[3]=c->r[28]|c->r[28]; // 800CF91C
  c->r[7]=R32(c->r[1]+0x00000074u); // 800CF920
  c->r[4]=c->r[1]+0x00000480u; // 800CF924
  c->r[6]=R32(c->r[1]+0x00000078u); // 800CF928
  c->r[5]=c->r[1]+0x00000050u; // 800CF92C
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800CF930
  W32(c->r[1]+0x00000050u,c->r[8]); // 800CF934
  W32(c->r[1]+0x00000054u,c->r[7]); // 800CF938
  W32(c->r[1]+0x00000058u,c->r[6]); // 800CF93C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800CF940
  c->lr=0x800CF948u; f_800CE4E0(c); // 800CF944
  cmps(c,0,(int32_t)c->r[3],0); // 800CF948
  c->r[25]=c->r[3]|c->r[3]; // 800CF94C
  if (crb(c,2)) { goto L_800CFDF8; } // 800CF950
L_800CF954:;
  c->r[3]=c->r[15]-c->r[25]; // 800CF954
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800CF958
  c->r[0]=c->r[0]+c->r[3]; // 800CF95C
  c->r[24]=sraw(c,c->r[0],1); // 800CF960
  goto L_800CFE3C; // 800CF964
L_800CF968:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800CF968
  cmpu(c,0,c->r[0],0x00000003u); // 800CF96C
  if (!crb(c,2)) { goto L_800CF988; } // 800CF970
  c->r[3]=c->r[23]|c->r[23]; // 800CF974
  c->r[4]=0u+0x00000001u; // 800CF978
  c->lr=0x800CF980u; f_800C1750(c); // 800CF97C
  c->r[28]=R32(c->r[3]+0x00000000u); // 800CF980
  goto L_800CFA10; // 800CF984
L_800CF988:;
  cmpu(c,0,c->r[0],0x00000004u); // 800CF988
  if (!crb(c,2)) { goto L_800CF9A8; } // 800CF98C
  c->r[3]=c->r[23]|c->r[23]; // 800CF990
  c->r[4]=0u+0x00000002u; // 800CF994
  c->lr=0x800CF99Cu; f_800C1750(c); // 800CF998
  c->r[27]=R32(c->r[3]+0x00000000u); // 800CF99C
  c->r[26]=R32(c->r[3]+0x00000004u); // 800CF9A0
  goto L_800CFA10; // 800CF9A4
L_800CF9A8:;
  cmpu(c,0,c->r[0],0x00000006u); // 800CF9A8
  if (!crb(c,2)) { goto L_800CF9C8; } // 800CF9AC
  c->r[3]=c->r[23]|c->r[23]; // 800CF9B0
  c->r[4]=0u+0x00000002u; // 800CF9B4
  c->lr=0x800CF9BCu; f_800C1750(c); // 800CF9B8
  c->r[27]=R32(c->r[3]+0x00000000u); // 800CF9BC
  c->r[26]=R32(c->r[3]+0x00000004u); // 800CF9C0
  goto L_800CFA10; // 800CF9C4
L_800CF9C8:;
  cmpu(c,0,c->r[0],0x00000007u); // 800CF9C8
  if (!crb(c,2)) { goto L_800CF9E4; } // 800CF9CC
  c->r[3]=c->r[23]|c->r[23]; // 800CF9D0
  c->r[4]=0u+0x00000001u; // 800CF9D4
  c->lr=0x800CF9DCu; f_800C1750(c); // 800CF9D8
  c->r[28]=R32(c->r[3]+0x00000000u); // 800CF9DC
  goto L_800CFA10; // 800CF9E0
L_800CF9E4:;
  cmpu(c,0,c->r[0],0x00000008u); // 800CF9E4
  if (!crb(c,2)) { goto L_800CFA00; } // 800CF9E8
  c->r[3]=c->r[23]|c->r[23]; // 800CF9EC
  c->r[4]=0u+0x00000001u; // 800CF9F0
  c->lr=0x800CF9F8u; f_800C1750(c); // 800CF9F4
  c->r[28]=R32(c->r[3]+0x00000000u); // 800CF9F8
  goto L_800CFA10; // 800CF9FC
L_800CFA00:;
  c->r[3]=c->r[23]|c->r[23]; // 800CFA00
  c->r[4]=0u+0x00000001u; // 800CFA04
  c->lr=0x800CFA0Cu; f_800C1750(c); // 800CFA08
  c->r[28]=R32(c->r[3]+0x00000000u); // 800CFA0C
L_800CFA10:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800CFA10
  cmpu(c,0,c->r[0],0x00000002u); // 800CFA14
  if (!crb(c,2)) { goto L_800CFA20; } // 800CFA18
  c->r[28]=rotl(c->r[28],0)&0x0000FFFFu; // 800CFA1C
L_800CFA20:;
  cmpu(c,0,c->r[0],0x00000004u); // 800CFA20
  if (crb(c,2)) { goto L_800CFA30; } // 800CFA24
  cmpu(c,0,c->r[0],0x00000006u); // 800CFA28
  if (!crb(c,2)) { goto L_800CFA74; } // 800CFA2C
L_800CFA30:;
  c->r[9]=R32(c->r[1]+0x00000070u); // 800CFA30
  c->r[4]=c->r[26]|c->r[26]; // 800CFA34
  c->r[8]=R32(c->r[1]+0x00000074u); // 800CFA38
  c->r[3]=c->r[27]|c->r[27]; // 800CFA3C
  c->r[7]=R32(c->r[1]+0x00000078u); // 800CFA40
  c->r[5]=c->r[1]+0x00000480u; // 800CFA44
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800CFA48
  c->r[6]=c->r[1]+0x00000040u; // 800CFA4C
  W32(c->r[1]+0x00000040u,c->r[9]); // 800CFA50
  W32(c->r[1]+0x00000044u,c->r[8]); // 800CFA54
  W32(c->r[1]+0x00000048u,c->r[7]); // 800CFA58
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800CFA5C
  c->lr=0x800CFA64u; f_800CE714(c); // 800CFA60
  cmps(c,0,(int32_t)c->r[3],0); // 800CFA64
  c->r[25]=c->r[3]|c->r[3]; // 800CFA68
  if (crb(c,2)) { goto L_800CFDF8; } // 800CFA6C
  goto L_800CFAB0; // 800CFA70
L_800CFA74:;
  c->r[8]=R32(c->r[1]+0x00000070u); // 800CFA74
  c->r[3]=c->r[28]|c->r[28]; // 800CFA78
  c->r[7]=R32(c->r[1]+0x00000074u); // 800CFA7C
  c->r[4]=c->r[1]+0x00000480u; // 800CFA80
  c->r[6]=R32(c->r[1]+0x00000078u); // 800CFA84
  c->r[5]=c->r[1]+0x00000030u; // 800CFA88
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800CFA8C
  W32(c->r[1]+0x00000030u,c->r[8]); // 800CFA90
  W32(c->r[1]+0x00000034u,c->r[7]); // 800CFA94
  W32(c->r[1]+0x00000038u,c->r[6]); // 800CFA98
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800CFA9C
  c->lr=0x800CFAA4u; f_800CE4E0(c); // 800CFAA0
  cmps(c,0,(int32_t)c->r[3],0); // 800CFAA4
  c->r[25]=c->r[3]|c->r[3]; // 800CFAA8
  if (crb(c,2)) { goto L_800CFDF8; } // 800CFAAC
L_800CFAB0:;
  c->r[3]=c->r[15]-c->r[25]; // 800CFAB0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800CFAB4
  c->r[0]=c->r[0]+c->r[3]; // 800CFAB8
  c->r[24]=sraw(c,c->r[0],1); // 800CFABC
  goto L_800CFE3C; // 800CFAC0
L_800CFAC4:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800CFAC4
  cmpu(c,0,c->r[0],0x00000009u); // 800CFAC8
  if (!crb(c,2)) { goto L_800CFAE4; } // 800CFACC
  c->r[3]=c->r[23]|c->r[23]; // 800CFAD0
  c->r[4]=0u+0x00000003u; // 800CFAD4
  c->lr=0x800CFADCu; f_800C1750(c); // 800CFAD8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800CFADC
  goto L_800CFAF4; // 800CFAE0
L_800CFAE4:;
  c->r[3]=c->r[23]|c->r[23]; // 800CFAE4
  c->r[4]=0u+0x00000003u; // 800CFAE8
  c->lr=0x800CFAF0u; f_800C1750(c); // 800CFAEC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800CFAF0
L_800CFAF4:;
  c->r[7]=R32(c->r[1]+0x00000070u); // 800CFAF4
  c->r[3]=c->r[1]+0x00000480u; // 800CFAF8
  c->r[6]=R32(c->r[1]+0x00000074u); // 800CFAFC
  c->r[4]=c->r[1]+0x00000020u; // 800CFB00
  c->r[5]=R32(c->r[1]+0x00000078u); // 800CFB04
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800CFB08
  W32(c->r[1]+0x00000020u,c->r[7]); // 800CFB0C
  W32(c->r[1]+0x00000024u,c->r[6]); // 800CFB10
  W32(c->r[1]+0x00000028u,c->r[5]); // 800CFB14
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800CFB18
  c->lr=0x800CFB20u; f_800CEEB0(c); // 800CFB1C
  cmps(c,0,(int32_t)c->r[3],0); // 800CFB20
  c->r[25]=c->r[3]|c->r[3]; // 800CFB24
  if (crb(c,2)) { goto L_800CFDF8; } // 800CFB28
  c->r[3]=c->r[15]-c->r[3]; // 800CFB2C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800CFB30
  c->r[0]=c->r[0]+c->r[3]; // 800CFB34
  c->r[24]=sraw(c,c->r[0],1); // 800CFB38
  goto L_800CFE3C; // 800CFB3C
L_800CFB40:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800CFB40
  cmpu(c,0,c->r[0],0x00000009u); // 800CFB44
  if (!crb(c,2)) { goto L_800CFB60; } // 800CFB48
  c->r[3]=c->r[23]|c->r[23]; // 800CFB4C
  c->r[4]=0u+0x00000003u; // 800CFB50
  c->lr=0x800CFB58u; f_800C1750(c); // 800CFB54
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800CFB58
  goto L_800CFB70; // 800CFB5C
L_800CFB60:;
  c->r[3]=c->r[23]|c->r[23]; // 800CFB60
  c->r[4]=0u+0x00000003u; // 800CFB64
  c->lr=0x800CFB6Cu; f_800C1750(c); // 800CFB68
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800CFB6C
L_800CFB70:;
  c->r[7]=R32(c->r[1]+0x00000070u); // 800CFB70
  c->r[3]=c->r[1]+0x00000480u; // 800CFB74
  c->r[6]=R32(c->r[1]+0x00000074u); // 800CFB78
  c->r[4]=c->r[1]+0x00000010u; // 800CFB7C
  c->r[5]=R32(c->r[1]+0x00000078u); // 800CFB80
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800CFB84
  W32(c->r[1]+0x00000010u,c->r[7]); // 800CFB88
  W32(c->r[1]+0x00000014u,c->r[6]); // 800CFB8C
  W32(c->r[1]+0x00000018u,c->r[5]); // 800CFB90
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CFB94
  c->lr=0x800CFB9Cu; f_800CE9C0(c); // 800CFB98
  cmps(c,0,(int32_t)c->r[3],0); // 800CFB9C
  c->r[25]=c->r[3]|c->r[3]; // 800CFBA0
  if (crb(c,2)) { goto L_800CFDF8; } // 800CFBA4
  c->r[3]=c->r[15]-c->r[3]; // 800CFBA8
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800CFBAC
  c->r[0]=c->r[0]+c->r[3]; // 800CFBB0
  c->r[24]=sraw(c,c->r[0],1); // 800CFBB4
  goto L_800CFE3C; // 800CFBB8
L_800CFBBC:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800CFBBC
  cmpu(c,0,c->r[0],0x00000005u); // 800CFBC0
  if (!crb(c,2)) { goto L_800CFC68; } // 800CFBC4
  c->r[3]=c->r[23]|c->r[23]; // 800CFBC8
  c->r[4]=0u+0x00000001u; // 800CFBCC
  c->lr=0x800CFBD4u; f_800C1750(c); // 800CFBD0
  c->r[25]=R32(c->r[3]+0x00000000u); // 800CFBD4
  cmps(c,0,(int32_t)c->r[25],0); // 800CFBD8
  if (!crb(c,2)) { goto L_800CFBE4; } // 800CFBDC
  c->r[25]=c->r[16]+0x00000054u; // 800CFBE0
L_800CFBE4:;
  c->r[0]=R8(c->r[1]+0x00000073u); // 800CFBE4
  cmps(c,0,(int32_t)c->r[0],0); // 800CFBE8
  if (crb(c,2)) { goto L_800CFC1C; } // 800CFBEC
  c->r[0]=R8(c->r[1]+0x00000072u); // 800CFBF0
  c->r[3]=R16(c->r[25]+0x00000000u); // 800CFBF4
  c->r[25]=c->r[25]+0x00000002u; // 800CFBF8
  cmps(c,0,(int32_t)c->r[0],0); // 800CFBFC
  c->r[24]=rotl(c->r[3],0)&0x000000FFu; // 800CFC00
  if (crb(c,2)) { goto L_800CFE3C; } // 800CFC04
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800CFC08
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 800CFC0C
  if (!crb(c,1)) { goto L_800CFE3C; } // 800CFC10
  c->r[24]=c->r[0]|c->r[0]; // 800CFC14
  goto L_800CFE3C; // 800CFC18
L_800CFC1C:;
  c->r[0]=R8(c->r[1]+0x00000072u); // 800CFC1C
  cmps(c,0,(int32_t)c->r[0],0); // 800CFC20
  if (crb(c,2)) { goto L_800CFC58; } // 800CFC24
  c->r[24]=R32(c->r[1]+0x0000007Cu); // 800CFC28
  c->r[3]=c->r[25]|c->r[25]; // 800CFC2C
  c->r[4]=0u+0x00000000u; // 800CFC30
  c->r[5]=c->r[24]|c->r[24]; // 800CFC34
  c->lr=0x800CFC3Cu; f_800CDEF8(c); // 800CFC38
  cmps(c,0,(int32_t)c->r[3],0); // 800CFC3C
  if (crb(c,2)) { goto L_800CFE3C; } // 800CFC40
  c->r[3]=c->r[3]-c->r[25]; // 800CFC44
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800CFC48
  c->r[0]=c->r[0]+c->r[3]; // 800CFC4C
  c->r[24]=sraw(c,c->r[0],1); // 800CFC50
  goto L_800CFE3C; // 800CFC54
L_800CFC58:;
  c->r[3]=c->r[25]|c->r[25]; // 800CFC58
  c->lr=0x800CFC60u; f_800D0164(c); // 800CFC5C
  c->r[24]=c->r[3]|c->r[3]; // 800CFC60
  goto L_800CFE3C; // 800CFC64
L_800CFC68:;
  c->r[3]=c->r[23]|c->r[23]; // 800CFC68
  c->r[4]=0u+0x00000001u; // 800CFC6C
  c->lr=0x800CFC74u; f_800C1750(c); // 800CFC70
  c->r[24]=R32(c->r[3]+0x00000000u); // 800CFC74
  cmps(c,0,(int32_t)c->r[24],0); // 800CFC78
  if (!crb(c,2)) { goto L_800CFC84; } // 800CFC7C
  c->r[24]=c->r[17]+0x00004828u; // 800CFC80
L_800CFC84:;
  c->r[0]=R8(c->r[1]+0x00000073u); // 800CFC84
  cmps(c,0,(int32_t)c->r[0],0); // 800CFC88
  if (crb(c,2)) { goto L_800CFCB8; } // 800CFC8C
  c->r[0]=R8(c->r[1]+0x00000072u); // 800CFC90
  c->r[3]=R16(c->r[25]+0x00000000u); // 800CFC94
  cmps(c,0,(int32_t)c->r[0],0); // 800CFC98
  c->r[25]=rotl(c->r[3],0)&0x000000FFu; // 800CFC9C
  if (crb(c,2)) { goto L_800CFCF4; } // 800CFCA0
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800CFCA4
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 800CFCA8
  if (!crb(c,1)) { goto L_800CFCF4; } // 800CFCAC
  c->r[25]=c->r[0]|c->r[0]; // 800CFCB0
  goto L_800CFCF4; // 800CFCB4
L_800CFCB8:;
  c->r[0]=R8(c->r[1]+0x00000072u); // 800CFCB8
  cmps(c,0,(int32_t)c->r[0],0); // 800CFCBC
  if (crb(c,2)) { goto L_800CFCE8; } // 800CFCC0
  c->r[25]=R32(c->r[1]+0x0000007Cu); // 800CFCC4
  c->r[3]=c->r[24]|c->r[24]; // 800CFCC8
  c->r[4]=0u+0x00000000u; // 800CFCCC
  c->r[5]=c->r[25]|c->r[25]; // 800CFCD0
  c->lr=0x800CFCD8u; f_800C7B00(c); // 800CFCD4
  cmps(c,0,(int32_t)c->r[3],0); // 800CFCD8
  if (crb(c,2)) { goto L_800CFCF4; } // 800CFCDC
  c->r[25]=c->r[3]-c->r[24]; // 800CFCE0
  goto L_800CFCF4; // 800CFCE4
L_800CFCE8:;
  c->r[3]=c->r[24]|c->r[24]; // 800CFCE8
  c->lr=0x800CFCF0u; f_800C1734(c); // 800CFCEC
  c->r[25]=c->r[3]|c->r[3]; // 800CFCF0
L_800CFCF4:;
  c->r[4]=c->r[24]|c->r[24]; // 800CFCF4
  c->r[5]=c->r[25]|c->r[25]; // 800CFCF8
  c->r[3]=c->r[1]+0x00000080u; // 800CFCFC
  c->lr=0x800CFD04u; f_800C78BC(c); // 800CFD00
  cmps(c,0,(int32_t)c->r[3],0); // 800CFD04
  c->r[24]=c->r[3]|c->r[3]; // 800CFD08
  if (crb(c,0)) { goto L_800CFDF8; } // 800CFD0C
  c->r[25]=c->r[1]+0x00000080u; // 800CFD10
  goto L_800CFE3C; // 800CFD14
L_800CFD18:;
  c->r[3]=c->r[23]|c->r[23]; // 800CFD18
  c->r[4]=0u+0x00000001u; // 800CFD1C
  c->lr=0x800CFD24u; f_800C1750(c); // 800CFD20
  c->r[0]=R8(c->r[1]+0x00000074u); // 800CFD24
  c->r[25]=R32(c->r[3]+0x00000000u); // 800CFD28
  cmpu(c,0,c->r[0],0x00000008u); // 800CFD2C
  if (crb(c,1)) { goto L_800CFF70; } // 800CFD30
  c->r[3]=c->r[18]+0xFFFFC4FCu; // 800CFD34
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CFD38
  c->r[3]=R32(c->r[3]+c->r[0]); // 800CFD3C
  c->ctr=c->r[3]; // 800CFD40
  if (true) { switch (c->ctr) { case 0x800CFD48u: goto L_800CFD48; case 0x800CFD50u: goto L_800CFD50; case 0x800CFD58u: goto L_800CFD58; case 0x800CFD60u: goto L_800CFD60; case 0x800CFD70u: goto L_800CFD70; case 0x800CFD78u: goto L_800CFD78; case 0x800CFD80u: goto L_800CFD80; case 0x800CFF70u: goto L_800CFF70; default: break; } dispatch(c,c->ctr); return; } // 800CFD44
L_800CFD48:;
  W32(c->r[25]+0x00000000u,c->r[31]); // 800CFD48
  goto L_800CFF70; // 800CFD4C
L_800CFD50:;
  W16(c->r[25]+0x00000000u,c->r[31]); // 800CFD50
  goto L_800CFF70; // 800CFD54
L_800CFD58:;
  W32(c->r[25]+0x00000000u,c->r[31]); // 800CFD58
  goto L_800CFF70; // 800CFD5C
L_800CFD60:;
  W32(c->r[25]+0x00000004u,c->r[31]); // 800CFD60
  c->r[0]=sraw(c,c->r[31],31); // 800CFD64
  W32(c->r[25]+0x00000000u,c->r[0]); // 800CFD68
  goto L_800CFF70; // 800CFD6C
L_800CFD70:;
  W32(c->r[25]+0x00000000u,c->r[31]); // 800CFD70
  goto L_800CFF70; // 800CFD74
L_800CFD78:;
  W32(c->r[25]+0x00000000u,c->r[31]); // 800CFD78
  goto L_800CFF70; // 800CFD7C
L_800CFD80:;
  W32(c->r[25]+0x00000004u,c->r[31]); // 800CFD80
  c->r[0]=sraw(c,c->r[31],31); // 800CFD84
  W32(c->r[25]+0x00000000u,c->r[0]); // 800CFD88
  goto L_800CFF70; // 800CFD8C
L_800CFD90:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800CFD90
  c->r[25]=c->r[1]+0x00000080u; // 800CFD94
  cmpu(c,0,c->r[0],0x00000005u); // 800CFD98
  if (!crb(c,2)) { goto L_800CFDBC; } // 800CFD9C
  c->r[3]=c->r[23]|c->r[23]; // 800CFDA0
  c->r[4]=0u+0x00000001u; // 800CFDA4
  c->lr=0x800CFDACu; f_800C1750(c); // 800CFDA8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CFDAC
  c->r[24]=0u+0x00000001u; // 800CFDB0
  W16(c->r[1]+0x00000080u,c->r[0]); // 800CFDB4
  goto L_800CFE3C; // 800CFDB8
L_800CFDBC:;
  c->r[3]=c->r[23]|c->r[23]; // 800CFDBC
  c->r[4]=0u+0x00000001u; // 800CFDC0
  c->lr=0x800CFDC8u; f_800C1750(c); // 800CFDC4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800CFDC8
  c->r[3]=c->r[25]|c->r[25]; // 800CFDCC
  c->r[4]=c->r[1]+0x00000008u; // 800CFDD0
  c->r[5]=0u+0x00000001u; // 800CFDD4
  W8(c->r[1]+0x00000008u,c->r[0]); // 800CFDD8
  c->lr=0x800CFDE0u; f_800C783C(c); // 800CFDDC
  c->r[24]=c->r[3]|c->r[3]; // 800CFDE0
  goto L_800CFE3C; // 800CFDE4
L_800CFDE8:;
  W16(c->r[1]+0x00000080u,c->r[19]); // 800CFDE8
  c->r[25]=c->r[1]+0x00000080u; // 800CFDEC
  c->r[24]=0u+0x00000001u; // 800CFDF0
  goto L_800CFE3C; // 800CFDF4
L_800CFDF8:;
  c->r[3]=c->r[29]|c->r[29]; // 800CFDF8
  c->lr=0x800CFE00u; f_800D0164(c); // 800CFDFC
  cmps(c,0,(int32_t)c->r[3],0); // 800CFE00
  c->r[5]=c->r[3]|c->r[3]; // 800CFE04
  c->r[31]=c->r[31]+c->r[3]; // 800CFE08
  if (crb(c,2)) { goto L_800CFE34; } // 800CFE0C
  c->r[12]=c->r[21]|c->r[21]; // 800CFE10
  c->r[3]=c->r[22]|c->r[22]; // 800CFE14
  c->r[4]=c->r[29]|c->r[29]; // 800CFE18
  c->ctr=c->r[12]; // 800CFE1C
  if (true) { c->lr=0x800CFE24u; dispatch(c,c->ctr); } // 800CFE20
  cmps(c,0,(int32_t)c->r[3],0); // 800CFE24
  if (!crb(c,2)) { goto L_800CFE34; } // 800CFE28
  c->r[3]=0u+0xFFFFFFFFu; // 800CFE2C
  goto L_800CFF80; // 800CFE30
L_800CFE34:;
  c->r[3]=c->r[31]|c->r[31]; // 800CFE34
  goto L_800CFF80; // 800CFE38
L_800CFE3C:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 800CFE3C
  c->r[29]=c->r[24]|c->r[24]; // 800CFE40
  cmps(c,0,(int32_t)c->r[0],0); // 800CFE44
  if (crb(c,2)) { goto L_800CFEF0; } // 800CFE48
  cmpu(c,0,c->r[0],0x00000002u); // 800CFE4C
  c->r[0]=0u+0x00000020u; // 800CFE50
  if (!crb(c,2)) { goto L_800CFE5C; } // 800CFE54
  c->r[0]=0u+0x00000030u; // 800CFE58
L_800CFE5C:;
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 800CFE5C
  c->r[3]=R16(c->r[25]+0x00000000u); // 800CFE60
  cmpu(c,0,c->r[3],0x0000002Bu); // 800CFE64
  if (crb(c,2)) { goto L_800CFE7C; } // 800CFE68
  cmpu(c,0,c->r[3],0x0000002Du); // 800CFE6C
  if (crb(c,2)) { goto L_800CFE7C; } // 800CFE70
  cmpu(c,0,c->r[3],0x00000020u); // 800CFE74
  if (!crb(c,2)) { goto L_800CFEE4; } // 800CFE78
L_800CFE7C:;
  cmpu(c,0,c->r[0],0x00000030u); // 800CFE7C
  if (!crb(c,2)) { goto L_800CFEE4; } // 800CFE80
  c->r[12]=c->r[21]|c->r[21]; // 800CFE84
  c->r[3]=c->r[22]|c->r[22]; // 800CFE88
  c->r[4]=c->r[25]|c->r[25]; // 800CFE8C
  c->r[5]=0u+0x00000001u; // 800CFE90
  c->ctr=c->r[12]; // 800CFE94
  if (true) { c->lr=0x800CFE9Cu; dispatch(c,c->ctr); } // 800CFE98
  cmps(c,0,(int32_t)c->r[3],0); // 800CFE9C
  if (!crb(c,2)) { goto L_800CFEAC; } // 800CFEA0
  c->r[3]=0u+0xFFFFFFFFu; // 800CFEA4
  goto L_800CFF80; // 800CFEA8
L_800CFEAC:;
  c->r[25]=c->r[25]+0x00000002u; // 800CFEAC
  c->r[24]=c->r[24]+0xFFFFFFFFu; // 800CFEB0
  goto L_800CFEE4; // 800CFEB4
L_800CFEB8:;
  c->r[12]=c->r[21]|c->r[21]; // 800CFEB8
  c->r[3]=c->r[22]|c->r[22]; // 800CFEBC
  c->r[4]=c->r[1]+0x0000000Cu; // 800CFEC0
  c->r[5]=0u+0x00000001u; // 800CFEC4
  c->ctr=c->r[12]; // 800CFEC8
  if (true) { c->lr=0x800CFED0u; dispatch(c,c->ctr); } // 800CFECC
  cmps(c,0,(int32_t)c->r[3],0); // 800CFED0
  if (!crb(c,2)) { goto L_800CFEE0; } // 800CFED4
  c->r[3]=0u+0xFFFFFFFFu; // 800CFED8
  goto L_800CFF80; // 800CFEDC
L_800CFEE0:;
  c->r[29]=c->r[29]+0x00000001u; // 800CFEE0
L_800CFEE4:;
  c->r[0]=R32(c->r[1]+0x00000078u); // 800CFEE4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800CFEE8
  if (crb(c,0)) { IRQCHK(c); goto L_800CFEB8; } // 800CFEEC
L_800CFEF0:;
  cmps(c,0,(int32_t)c->r[24],0); // 800CFEF0
  if (crb(c,2)) { goto L_800CFF20; } // 800CFEF4
  c->r[12]=c->r[21]|c->r[21]; // 800CFEF8
  c->r[3]=c->r[22]|c->r[22]; // 800CFEFC
  c->r[4]=c->r[25]|c->r[25]; // 800CFF00
  c->r[5]=c->r[24]|c->r[24]; // 800CFF04
  c->ctr=c->r[12]; // 800CFF08
  if (true) { c->lr=0x800CFF10u; dispatch(c,c->ctr); } // 800CFF0C
  cmps(c,0,(int32_t)c->r[3],0); // 800CFF10
  if (!crb(c,2)) { goto L_800CFF20; } // 800CFF14
  c->r[3]=0u+0xFFFFFFFFu; // 800CFF18
  goto L_800CFF80; // 800CFF1C
L_800CFF20:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 800CFF20
  cmps(c,0,(int32_t)c->r[0],0); // 800CFF24
  if (!crb(c,2)) { goto L_800CFF6C; } // 800CFF28
  goto L_800CFF60; // 800CFF2C
L_800CFF30:;
  c->r[12]=c->r[21]|c->r[21]; // 800CFF30
  c->r[3]=c->r[22]|c->r[22]; // 800CFF34
  W16(c->r[1]+0x0000000Au,c->r[20]); // 800CFF38
  c->r[4]=c->r[1]+0x0000000Au; // 800CFF3C
  c->r[5]=0u+0x00000001u; // 800CFF40
  c->ctr=c->r[12]; // 800CFF44
  if (true) { c->lr=0x800CFF4Cu; dispatch(c,c->ctr); } // 800CFF48
  cmps(c,0,(int32_t)c->r[3],0); // 800CFF4C
  if (!crb(c,2)) { goto L_800CFF5C; } // 800CFF50
  c->r[3]=0u+0xFFFFFFFFu; // 800CFF54
  goto L_800CFF80; // 800CFF58
L_800CFF5C:;
  c->r[29]=c->r[29]+0x00000001u; // 800CFF5C
L_800CFF60:;
  c->r[0]=R32(c->r[1]+0x00000078u); // 800CFF60
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800CFF64
  if (crb(c,0)) { IRQCHK(c); goto L_800CFF30; } // 800CFF68
L_800CFF6C:;
  c->r[31]=c->r[31]+c->r[29]; // 800CFF6C
L_800CFF70:;
  c->r[0]=R16(c->r[30]+0x00000000u); // 800CFF70
  cmps(c,0,(int32_t)c->r[0],0); // 800CFF74
  if (!crb(c,2)) { IRQCHK(c); goto L_800CF698; } // 800CFF78
L_800CFF7C:;
  c->r[3]=c->r[31]|c->r[31]; // 800CFF7C
L_800CFF80:;
  {uint32_t ea=c->r[1]+0x0000048Cu; for(int i=15;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CFF80
  c->r[0]=R32(c->r[1]+0x000004D4u); // 800CFF84
  c->lr=c->r[0]; // 800CFF88
  c->r[1]=c->r[1]+0x000004D0u; // 800CFF8C
  return; // 800CFF90
}

// __wStringWrite
void f_800CFF94(Ctx* __restrict c) {
  trace_call(0x800CFF94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFF94
  c->r[0]=c->lr; // 800CFF98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFF9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFFA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CFFA4
  c->r[30]=c->r[3]|c->r[3]; // 800CFFA8
  c->r[6]=R32(c->r[3]+0x00000008u); // 800CFFAC
  c->r[7]=R32(c->r[3]+0x00000004u); // 800CFFB0
  c->r[0]=c->r[6]+c->r[5]; // 800CFFB4
  cmpu(c,0,c->r[0],c->r[7]); // 800CFFB8
  c->r[31]=c->r[7]-c->r[6]; // 800CFFBC
  if (crb(c,1)) { goto L_800CFFC8; } // 800CFFC0
  c->r[31]=c->r[5]|c->r[5]; // 800CFFC4
L_800CFFC8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800CFFC8
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800CFFCC
  c->r[5]=c->r[31]|c->r[31]; // 800CFFD0
  c->r[3]=c->r[3]+c->r[0]; // 800CFFD4
  c->lr=0x800CFFDCu; f_800CDEF0(c); // 800CFFD8
  c->r[0]=R32(c->r[30]+0x00000008u); // 800CFFDC
  c->r[0]=c->r[0]+c->r[31]; // 800CFFE0
  W32(c->r[30]+0x00000008u,c->r[0]); // 800CFFE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFFE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CFFEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFFF0
  c->lr=c->r[0]; // 800CFFF4
  c->r[1]=c->r[1]+0x00000010u; // 800CFFF8
  return; // 800CFFFC
}

// fn_800D0000
void f_800D0000(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0000
  c->r[0]=c->lr; // 800D0004
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800D0008
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D000C
  c->r[27]=c->r[3]|c->r[3]; // 800D0010
  c->r[28]=c->r[4]|c->r[4]; // 800D0014
  if (!crb(c,6)) { goto L_800D003C; } // 800D0018
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800D001C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800D0020
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800D0024
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800D0028
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800D002C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800D0030
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800D0034
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800D0038
L_800D003C:;
  c->r[12]=c->r[1]+0x000000A8u; // 800D003C
  c->r[0]=c->r[1]+0x00000008u; // 800D0040
  c->r[30]=0u+0x03000000u; // 800D0044
  c->r[31]=0u+0x00000000u; // 800D0048
  W32(c->r[1]+0x00000010u,c->r[5]); // 800D004C
  c->r[29]=c->r[1]+0x00000074u; // 800D0050
  c->r[11]=0u+0x800D0000u; // 800D0054
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D0058
  c->r[6]=c->r[29]|c->r[29]; // 800D005C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D0060
  W32(c->r[1]+0x00000068u,c->r[3]); // 800D0064
  c->r[3]=c->r[11]+0xFFFFFF94u; // 800D0068
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D006C
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 800D0070
  c->r[4]=c->r[1]+0x00000068u; // 800D0074
  W32(c->r[1]+0x00000018u,c->r[7]); // 800D0078
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800D007C
  W32(c->r[1]+0x00000020u,c->r[9]); // 800D0080
  W32(c->r[1]+0x00000024u,c->r[10]); // 800D0084
  W32(c->r[1]+0x00000074u,c->r[30]); // 800D0088
  W32(c->r[1]+0x00000078u,c->r[12]); // 800D008C
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800D0090
  W32(c->r[1]+0x00000070u,c->r[31]); // 800D0094
  c->lr=0x800D009Cu; f_800CF650(c); // 800D0098
  cmps(c,0,(int32_t)c->r[3],0); // 800D009C
  if (crb(c,0)) { goto L_800D00C8; } // 800D00A0
  cmpu(c,0,c->r[3],c->r[28]); // 800D00A4
  if (!crb(c,0)) { goto L_800D00B8; } // 800D00A8
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800D00AC
  W16(c->r[27]+c->r[0],c->r[31]); // 800D00B0
  goto L_800D00C8; // 800D00B4
L_800D00B8:;
  c->r[0]=rotl(c->r[28],1)&0xFFFFFFFEu; // 800D00B8
  c->r[3]=0u+0xFFFFFFFFu; // 800D00BC
  c->r[4]=c->r[27]+c->r[0]; // 800D00C0
  W16(c->r[4]+0xFFFFFFFEu,c->r[31]); // 800D00C4
L_800D00C8:;
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D00C8
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800D00CC
  c->lr=c->r[0]; // 800D00D0
  c->r[1]=c->r[1]+0x000000A0u; // 800D00D4
  return; // 800D00D8
}

// fn_800D00DC
void f_800D00DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D00DC
  c->r[0]=c->lr; // 800D00E0
  c->r[7]=0u+0x800D0000u; // 800D00E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D00E8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D00EC
  c->r[31]=0u+0x00000000u; // 800D00F0
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D00F4
  c->r[30]=c->r[4]|c->r[4]; // 800D00F8
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D00FC
  c->r[29]=c->r[3]|c->r[3]; // 800D0100
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D0104
  c->r[3]=c->r[7]+0xFFFFFF94u; // 800D0108
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D010C
  c->r[4]=c->r[1]+0x00000008u; // 800D0110
  W32(c->r[1]+0x00000010u,c->r[31]); // 800D0114
  c->lr=0x800D011Cu; f_800CF650(c); // 800D0118
  cmps(c,0,(int32_t)c->r[3],0); // 800D011C
  if (crb(c,0)) { goto L_800D0148; } // 800D0120
  cmpu(c,0,c->r[3],c->r[30]); // 800D0124
  if (!crb(c,0)) { goto L_800D0138; } // 800D0128
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800D012C
  W16(c->r[29]+c->r[0],c->r[31]); // 800D0130
  goto L_800D0148; // 800D0134
L_800D0138:;
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 800D0138
  c->r[3]=0u+0xFFFFFFFFu; // 800D013C
  c->r[4]=c->r[29]+c->r[0]; // 800D0140
  W16(c->r[4]+0xFFFFFFFEu,c->r[31]); // 800D0144
L_800D0148:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D0148
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D014C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D0150
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D0154
  c->lr=c->r[0]; // 800D0158
  c->r[1]=c->r[1]+0x00000030u; // 800D015C
  return; // 800D0160
}

// fn_800D0164
void f_800D0164(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0xFFFFFFFEu; // 800D0164
  c->r[3]=0u+0xFFFFFFFFu; // 800D0168
L_800D016C:;
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 800D016C
  c->r[3]=c->r[3]+0x00000001u; // 800D0170
  cmps(c,0,(int32_t)c->r[0],0); // 800D0174
  if (!crb(c,2)) { IRQCHK(c); goto L_800D016C; } // 800D0178
  return; // 800D017C
}

// fn_800D0180
void f_800D0180(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 800D0180
  c->r[5]=c->r[3]+0xFFFFFFFEu; // 800D0184
L_800D0188:;
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 800D0188
  cmps(c,0,(int32_t)c->r[0],0); // 800D018C
  {uint32_t ea=c->r[5]+0x00000002u; W16(ea,c->r[0]); c->r[5]=ea;} // 800D0190
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0188; } // 800D0194
  return; // 800D0198
}

// fn_800D019C
void f_800D019C(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 800D019C
  c->r[6]=c->r[3]+0xFFFFFFFEu; // 800D01A0
  c->r[5]=c->r[5]+0x00000001u; // 800D01A4
  goto L_800D01D4; // 800D01A8
L_800D01AC:;
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 800D01AC
  cmps(c,0,(int32_t)c->r[0],0); // 800D01B0
  {uint32_t ea=c->r[6]+0x00000002u; W16(ea,c->r[0]); c->r[6]=ea;} // 800D01B4
  if (!crb(c,2)) { goto L_800D01D4; } // 800D01B8
  c->r[0]=0u+0x00000000u; // 800D01BC
  goto L_800D01C8; // 800D01C0
L_800D01C4:;
  {uint32_t ea=c->r[6]+0x00000002u; W16(ea,c->r[0]); c->r[6]=ea;} // 800D01C4
L_800D01C8:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800D01C8
  if (!crb(c,2)) { IRQCHK(c); goto L_800D01C4; } // 800D01CC
  return; // 800D01D0
L_800D01D4:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800D01D4
  if (!crb(c,2)) { IRQCHK(c); goto L_800D01AC; } // 800D01D8
  return; // 800D01DC
}

// fn_800D01E0
void f_800D01E0(Ctx* __restrict c) {
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 800D01E0
  c->r[6]=c->r[3]+0xFFFFFFFEu; // 800D01E4
L_800D01E8:;
  {uint32_t ea=c->r[6]+0x00000002u; c->r[0]=R16(ea); c->r[6]=ea;} // 800D01E8
  cmps(c,0,(int32_t)c->r[0],0); // 800D01EC
  if (!crb(c,2)) { IRQCHK(c); goto L_800D01E8; } // 800D01F0
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 800D01F4
  c->r[5]=c->r[5]+0x00000001u; // 800D01F8
  goto L_800D0218; // 800D01FC
L_800D0200:;
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 800D0200
  cmps(c,0,(int32_t)c->r[0],0); // 800D0204
  {uint32_t ea=c->r[6]+0x00000002u; W16(ea,c->r[0]); c->r[6]=ea;} // 800D0208
  if (!crb(c,2)) { goto L_800D0218; } // 800D020C
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 800D0210
  goto L_800D0220; // 800D0214
L_800D0218:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800D0218
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0200; } // 800D021C
L_800D0220:;
  c->r[0]=0u+0x00000000u; // 800D0220
  W16(c->r[6]+0x00000002u,c->r[0]); // 800D0224
  return; // 800D0228
}

// fn_800D022C
void f_800D022C(Ctx* __restrict c) {
  c->r[5]=c->r[3]+0xFFFFFFFEu; // 800D022C
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 800D0230
  goto L_800D0248; // 800D0234
L_800D0238:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D0238
  if (!crb(c,2)) { goto L_800D0248; } // 800D023C
  c->r[3]=0u+0x00000000u; // 800D0240
  return; // 800D0244
L_800D0248:;
  {uint32_t ea=c->r[5]+0x00000002u; c->r[3]=R16(ea); c->r[5]=ea;} // 800D0248
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 800D024C
  cmpu(c,0,c->r[3],c->r[0]); // 800D0250
  if (crb(c,2)) { IRQCHK(c); goto L_800D0238; } // 800D0254
  c->r[3]=c->r[3]-c->r[0]; // 800D0258
  return; // 800D025C
}

// fn_800D0260
void f_800D0260(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 800D0260
  goto L_800D0270; // 800D0264
L_800D0268:;
  cmpu(c,0,c->r[0],c->r[4]); // 800D0268
  if (crb(c,2)) return; // 800D026C
L_800D0270:;
  {uint32_t ea=c->r[3]+0x00000002u; c->r[0]=R16(ea); c->r[3]=ea;} // 800D0270
  cmps(c,0,(int32_t)c->r[0],0); // 800D0274
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0268; } // 800D0278
  cmps(c,0,(int32_t)c->r[4],0); // 800D027C
  if (crb(c,2)) return; // 800D0280
  c->r[3]=0u+0x00000000u; // 800D0284
  return; // 800D0288
}

// fn_800D028C
void f_800D028C(Ctx* __restrict c) {
  c->r[6]=R16(c->r[4]+0x00000000u); // 800D028C
  c->r[5]=c->r[3]+0xFFFFFFFEu; // 800D0290
  cmps(c,0,(int32_t)c->r[6],0); // 800D0294
  if (!crb(c,2)) { goto L_800D02DC; } // 800D0298
  return; // 800D029C
  goto L_800D02DC; // 800D02A0
L_800D02A4:;
  cmpu(c,0,c->r[0],c->r[6]); // 800D02A4
  if (!crb(c,2)) { goto L_800D02DC; } // 800D02A8
  c->r[7]=c->r[5]+0xFFFFFFFEu; // 800D02AC
  c->r[8]=c->r[4]+0xFFFFFFFEu; // 800D02B0
L_800D02B4:;
  {uint32_t ea=c->r[7]+0x00000002u; c->r[3]=R16(ea); c->r[7]=ea;} // 800D02B4
  {uint32_t ea=c->r[8]+0x00000002u; c->r[0]=R16(ea); c->r[8]=ea;} // 800D02B8
  cmpu(c,0,c->r[3],c->r[0]); // 800D02BC
  if (!crb(c,2)) { goto L_800D02CC; } // 800D02C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D02C4
  if (!crb(c,2)) { IRQCHK(c); goto L_800D02B4; } // 800D02C8
L_800D02CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D02CC
  if (!crb(c,2)) { goto L_800D02DC; } // 800D02D0
  c->r[3]=c->r[5]|c->r[5]; // 800D02D4
  return; // 800D02D8
L_800D02DC:;
  {uint32_t ea=c->r[5]+0x00000002u; c->r[0]=R16(ea); c->r[5]=ea;} // 800D02DC
  cmps(c,0,(int32_t)c->r[0],0); // 800D02E0
  if (!crb(c,2)) { IRQCHK(c); goto L_800D02A4; } // 800D02E4
  c->r[3]=0u+0x00000000u; // 800D02E8
  return; // 800D02EC
}

// fwide
void f_800D02F0(Ctx* __restrict c) {
  trace_call(0x800D02F0u);
  cmps(c,0,(int32_t)c->r[3],0); // 800D02F0
  if (crb(c,2)) { goto L_800D0304; } // 800D02F4
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D02F8
  c->r[0]=rotl(c->r[5],10)&0x00000007u; cr0(c,c->r[0]); // 800D02FC
  if (!crb(c,2)) { goto L_800D030C; } // 800D0300
L_800D0304:;
  c->r[3]=0u+0x00000000u; // 800D0304
  return; // 800D0308
L_800D030C:;
  c->r[0]=rotl(c->r[5],12)&0x00000003u; // 800D030C
  cmps(c,0,(int32_t)c->r[0],1); // 800D0310
  if (crb(c,2)) { goto L_800D0368; } // 800D0314
  if (!crb(c,0)) { goto L_800D0328; } // 800D0318
  cmps(c,0,(int32_t)c->r[0],0); // 800D031C
  if (!crb(c,0)) { goto L_800D0334; } // 800D0320
  goto L_800D036C; // 800D0324
L_800D0328:;
  cmps(c,0,(int32_t)c->r[0],3); // 800D0328
  if (!crb(c,0)) { goto L_800D036C; } // 800D032C
  goto L_800D0360; // 800D0330
L_800D0334:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D0334
  if (!crb(c,1)) { goto L_800D034C; } // 800D0338
  c->r[0]=0u+0x00000002u; // 800D033C
  c->r[5]=(rotl(c->r[0],20)&0x00300000u)|(c->r[5]&~0x00300000u); // 800D0340
  W32(c->r[3]+0x00000004u,c->r[5]); // 800D0344
  goto L_800D036C; // 800D0348
L_800D034C:;
  if (!crb(c,0)) { goto L_800D036C; } // 800D034C
  c->r[0]=0u+0x00000001u; // 800D0350
  c->r[5]=(rotl(c->r[0],20)&0x00300000u)|(c->r[5]&~0x00300000u); // 800D0354
  W32(c->r[3]+0x00000004u,c->r[5]); // 800D0358
  goto L_800D036C; // 800D035C
L_800D0360:;
  c->r[4]=0u+0x00000001u; // 800D0360
  goto L_800D036C; // 800D0364
L_800D0368:;
  c->r[4]=0u+0xFFFFFFFFu; // 800D0368
L_800D036C:;
  c->r[3]=c->r[4]|c->r[4]; // 800D036C
  return; // 800D0370
}

// fn_800D0374
void f_800D0374(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0374
  c->r[0]=c->lr; // 800D0378
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D037C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D0380
  c->r[31]=c->r[6]|c->r[6]; // 800D0384
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D0388
  c->r[30]=c->r[5]|c->r[5]; // 800D038C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D0390
  c->r[29]=c->r[4]|c->r[4]; // 800D0394
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D0398
  c->r[28]=c->r[3]|c->r[3]; // 800D039C
  c->lr=0x800D03A4u; f_80097DF8(c); // 800D03A0
  c->r[0]=rotl(c->r[3],0)&0x20000000u; cr0(c,c->r[0]); // 800D03A4
  if (!crb(c,2)) { goto L_800D040C; } // 800D03A8
  c->r[0]=R32(c->r[13]+0xFFFFA4D8u); // 800D03AC
  c->r[3]=0u+0x00000000u; // 800D03B0
  cmps(c,0,(int32_t)c->r[0],0); // 800D03B4
  if (!crb(c,2)) { goto L_800D03D8; } // 800D03B8
  c->r[3]=0u+0x00010000u; // 800D03BC
  c->r[3]=c->r[3]+0xFFFFE100u; // 800D03C0
  c->lr=0x800D03C8u; f_800DD430(c); // 800D03C4
  cmps(c,0,(int32_t)c->r[3],0); // 800D03C8
  if (!crb(c,2)) { goto L_800D03D8; } // 800D03CC
  c->r[0]=0u+0x00000001u; // 800D03D0
  W32(c->r[13]+0xFFFFA4D8u,c->r[0]); // 800D03D4
L_800D03D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D03D8
  if (crb(c,2)) { goto L_800D03E8; } // 800D03DC
  c->r[3]=0u+0x00000001u; // 800D03E0
  goto L_800D0424; // 800D03E4
L_800D03E8:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 800D03E8
  c->r[3]=c->r[29]|c->r[29]; // 800D03EC
  c->lr=0x800D03F4u; f_800DD478(c); // 800D03F0
  cmps(c,0,(int32_t)c->r[3],0); // 800D03F4
  if (crb(c,2)) { goto L_800D040C; } // 800D03F8
  c->r[0]=0u+0x00000000u; // 800D03FC
  c->r[3]=0u+0x00000001u; // 800D0400
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D0404
  goto L_800D0424; // 800D0408
L_800D040C:;
  c->r[3]=c->r[28]|c->r[28]; // 800D040C
  c->r[4]=c->r[29]|c->r[29]; // 800D0410
  c->r[5]=c->r[30]|c->r[30]; // 800D0414
  c->r[6]=c->r[31]|c->r[31]; // 800D0418
  c->lr=0x800D0420u; f_800DB050(c); // 800D041C
  c->r[3]=0u+0x00000000u; // 800D0420
L_800D0424:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0424
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D0428
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D042C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D0430
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D0434
  c->lr=c->r[0]; // 800D0438
  c->r[1]=c->r[1]+0x00000020u; // 800D043C
  return; // 800D0440
}

// fn_800D0444
void f_800D0444(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800D0444
  return; // 800D0448
}

// fn_800D044C
void f_800D044C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D044C
  c->r[0]=c->lr; // 800D0450
  c->r[3]=0u+0x00000001u; // 800D0454
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0458
  c->lr=0x800D0460u; f_800CB940(c); // 800D045C
  c->r[0]=0u+0x00000001u; // 800D0460
  c->r[3]=0u+0x00000001u; // 800D0464
  W32(c->r[13]+0xFFFFA4E0u,c->r[0]); // 800D0468
  c->lr=0x800D0470u; f_800A3A18(c); // 800D046C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0470
  c->lr=c->r[0]; // 800D0474
  c->r[1]=c->r[1]+0x00000010u; // 800D0478
  return; // 800D047C
}

// fn_800D0480
void f_800D0480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0480
  c->r[0]=c->lr; // 800D0484
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0488
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D048C
  c->r[31]=c->r[3]|c->r[3]; // 800D0490
  c->r[3]=c->r[1]+0x00000008u; // 800D0494
  c->lr=0x800D049Cu; f_800D3564(c); // 800D0498
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D049C
  c->r[3]=c->r[0]+c->r[31]; // 800D04A0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D04A4
  c->lr=0x800D04ACu; f_800D35EC(c); // 800D04A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D04AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D04B0
  c->lr=c->r[0]; // 800D04B4
  c->r[1]=c->r[1]+0x00000020u; // 800D04B8
  return; // 800D04BC
}

// fn_800D04C0
void f_800D04C0(Ctx* __restrict c) {
  c->r[5]=0u+0x80220000u; // 800D04C0
  c->r[5]=c->r[5]+0xFFFFBE90u; // 800D04C4
  c->r[6]=R32(c->r[5]+0x00000038u); // 800D04C8
L_800D04CC:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 800D04CC
  c->r[0]=0u+0x00000000u; // 800D04D0
  c->r[3]=c->r[3]+0x00000001u; // 800D04D4
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[7]); // 800D04D8
  if (crb(c,0)) { goto L_800D04E8; } // 800D04DC
  cmps(c,0,(int32_t)c->r[7],256); // 800D04E0
  if (crb(c,0)) { goto L_800D04EC; } // 800D04E4
L_800D04E8:;
  c->r[0]=0u+0x00000001u; // 800D04E8
L_800D04EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D04EC
  if (crb(c,2)) { goto L_800D04F8; } // 800D04F0
  goto L_800D0500; // 800D04F4
L_800D04F8:;
  c->r[5]=R32(c->r[6]+0x00000010u); // 800D04F8
  c->r[7]=R8(c->r[5]+c->r[7]); // 800D04FC
L_800D0500:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 800D0500
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800D0504
  c->r[0]=0u+0x00000000u; // 800D0508
  c->r[4]=c->r[4]+0x00000001u; // 800D050C
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[7]); // 800D0510
  if (crb(c,0)) { goto L_800D0520; } // 800D0514
  cmps(c,0,(int32_t)c->r[7],256); // 800D0518
  if (crb(c,0)) { goto L_800D0524; } // 800D051C
L_800D0520:;
  c->r[0]=0u+0x00000001u; // 800D0520
L_800D0524:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D0524
  if (crb(c,2)) { goto L_800D0530; } // 800D0528
  goto L_800D0538; // 800D052C
L_800D0530:;
  c->r[5]=R32(c->r[6]+0x00000010u); // 800D0530
  c->r[7]=R8(c->r[5]+c->r[7]); // 800D0534
L_800D0538:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800D0538
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800D053C
  if (!crb(c,0)) { goto L_800D054C; } // 800D0540
  c->r[3]=0u+0xFFFFFFFFu; // 800D0544
  return; // 800D0548
L_800D054C:;
  if (!crb(c,1)) { goto L_800D0558; } // 800D054C
  c->r[3]=0u+0x00000001u; // 800D0550
  return; // 800D0554
L_800D0558:;
  cmps(c,0,(int32_t)c->r[8],0); // 800D0558
  if (!crb(c,2)) { IRQCHK(c); goto L_800D04CC; } // 800D055C
  c->r[3]=0u+0x00000000u; // 800D0560
  return; // 800D0564
}

// fn_800D0568
void f_800D0568(Ctx* __restrict c) {
  f_800C73D0(c); return; // 800D0568
}

// fn_800D056C
void f_800D056C(Ctx* __restrict c) {
  c->r[5]=0u+0x80220000u; // 800D056C
  c->r[5]=c->r[5]+0xFFFFBE90u; // 800D0570
  c->r[6]=R32(c->r[5]+0x00000038u); // 800D0574
L_800D0578:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 800D0578
  c->r[0]=0u+0x00000000u; // 800D057C
  c->r[3]=c->r[3]+0x00000001u; // 800D0580
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[7]); // 800D0584
  if (crb(c,0)) { goto L_800D0594; } // 800D0588
  cmps(c,0,(int32_t)c->r[7],256); // 800D058C
  if (crb(c,0)) { goto L_800D0598; } // 800D0590
L_800D0594:;
  c->r[0]=0u+0x00000001u; // 800D0594
L_800D0598:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D0598
  if (crb(c,2)) { goto L_800D05A4; } // 800D059C
  goto L_800D05AC; // 800D05A0
L_800D05A4:;
  c->r[5]=R32(c->r[6]+0x00000010u); // 800D05A4
  c->r[7]=R8(c->r[5]+c->r[7]); // 800D05A8
L_800D05AC:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 800D05AC
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800D05B0
  c->r[0]=0u+0x00000000u; // 800D05B4
  c->r[4]=c->r[4]+0x00000001u; // 800D05B8
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[7]); // 800D05BC
  if (crb(c,0)) { goto L_800D05CC; } // 800D05C0
  cmps(c,0,(int32_t)c->r[7],256); // 800D05C4
  if (crb(c,0)) { goto L_800D05D0; } // 800D05C8
L_800D05CC:;
  c->r[0]=0u+0x00000001u; // 800D05CC
L_800D05D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D05D0
  if (crb(c,2)) { goto L_800D05DC; } // 800D05D4
  goto L_800D05E4; // 800D05D8
L_800D05DC:;
  c->r[5]=R32(c->r[6]+0x00000010u); // 800D05DC
  c->r[7]=R8(c->r[5]+c->r[7]); // 800D05E0
L_800D05E4:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800D05E4
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800D05E8
  if (!crb(c,0)) { goto L_800D05F8; } // 800D05EC
  c->r[3]=0u+0xFFFFFFFFu; // 800D05F0
  return; // 800D05F4
L_800D05F8:;
  if (!crb(c,1)) { goto L_800D0604; } // 800D05F8
  c->r[3]=0u+0x00000001u; // 800D05FC
  return; // 800D0600
L_800D0604:;
  cmps(c,0,(int32_t)c->r[8],0); // 800D0604
  if (!crb(c,2)) { IRQCHK(c); goto L_800D0578; } // 800D0608
  c->r[3]=0u+0x00000000u; // 800D060C
  return; // 800D0610
}

// fn_800D0614
void f_800D0614(Ctx* __restrict c) {
  f_800C7490(c); return; // 800D0614
}

// fn_800D0618
void f_800D0618(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0618
  c->r[0]=c->lr; // 800D061C
  c->r[3]=0u+0x7FF00000u; // 800D0620
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 800D0624
  c->r[8]=R32(c->r[1]+0x00000014u); // 800D0628
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D062C
  c->r[0]=0u-c->r[8]; // 800D0630
  c->r[4]=R32(c->r[1]+0x00000010u); // 800D0634
  c->r[0]=c->r[8]|c->r[0]; // 800D0638
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D063C
  c->r[6]=rotl(c->r[4],0)&0x7FFFFFFFu; // 800D0640
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D0644
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D0648
  c->r[0]=c->r[6]|c->r[0]; // 800D064C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D0650
  cmpu(c,0,c->r[0],c->r[3]); // 800D0654
  c->r[9]=R32(c->r[1]+0x0000000Cu); // 800D0658
  c->r[7]=rotl(c->r[5],0)&0x7FFFFFFFu; // 800D065C
  if (crb(c,1)) { goto L_800D067C; } // 800D0660
  c->r[0]=0u-c->r[9]; // 800D0664
  c->r[0]=c->r[9]|c->r[0]; // 800D0668
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D066C
  c->r[0]=c->r[7]|c->r[0]; // 800D0670
  cmpu(c,0,c->r[0],c->r[3]); // 800D0674
  if (!crb(c,1)) { goto L_800D0684; } // 800D0678
L_800D067C:;
  c->f[1]=c->f[2]+c->f[1]; // 800D067C
  goto L_800D0874; // 800D0680
L_800D0684:;
  c->r[0]=c->r[4]+0xC0100000u; // 800D0684
  c->r[0]=c->r[0]|c->r[8]; cr0(c,c->r[0]); // 800D0688
  if (!crb(c,2)) { goto L_800D0698; } // 800D068C
  c->lr=0x800D0694u; f_800D30E0(c); // 800D0690
  goto L_800D0874; // 800D0694
L_800D0698:;
  c->r[0]=c->r[7]|c->r[9]; cr0(c,c->r[0]); // 800D0698
  c->r[31]=rotl(c->r[4],2)&0x00000002u; // 800D069C
  c->r[31]=(rotl(c->r[5],1)&0x00000001u)|(c->r[31]&~0x00000001u); // 800D06A0
  if (!crb(c,2)) { goto L_800D06E0; } // 800D06A4
  cmps(c,0,(int32_t)c->r[31],2); // 800D06A8
  if (crb(c,2)) { goto L_800D06D0; } // 800D06AC
  if (!crb(c,0)) { goto L_800D06C0; } // 800D06B0
  cmps(c,0,(int32_t)c->r[31],0); // 800D06B4
  if (!crb(c,0)) { goto L_800D0874; } // 800D06B8
  goto L_800D06E0; // 800D06BC
L_800D06C0:;
  cmps(c,0,(int32_t)c->r[31],4); // 800D06C0
  if (!crb(c,0)) { goto L_800D06E0; } // 800D06C4
  goto L_800D06D8; // 800D06C8
  goto L_800D0874; // 800D06CC
L_800D06D0:;
  {uint32_t ea=c->r[2]+0xFFFF9210u; c->f[1]=RF64(ea);} // 800D06D0
  goto L_800D0874; // 800D06D4
L_800D06D8:;
  {uint32_t ea=c->r[2]+0xFFFF9218u; c->f[1]=RF64(ea);} // 800D06D8
  goto L_800D0874; // 800D06DC
L_800D06E0:;
  c->r[0]=c->r[6]|c->r[8]; cr0(c,c->r[0]); // 800D06E0
  if (!crb(c,2)) { goto L_800D0700; } // 800D06E4
  cmps(c,0,(int32_t)c->r[5],0); // 800D06E8
  if (!crb(c,0)) { goto L_800D06F8; } // 800D06EC
  {uint32_t ea=c->r[2]+0xFFFF9220u; c->f[1]=RF64(ea);} // 800D06F0
  goto L_800D0874; // 800D06F4
L_800D06F8:;
  {uint32_t ea=c->r[2]+0xFFFF9228u; c->f[1]=RF64(ea);} // 800D06F8
  goto L_800D0874; // 800D06FC
L_800D0700:;
  c->r[0]=c->r[6]+0x80100000u; // 800D0700
  cmpu(c,0,c->r[0],0x00000000u); // 800D0704
  if (!crb(c,2)) { goto L_800D07A8; } // 800D0708
  c->r[0]=c->r[7]+0x80100000u; // 800D070C
  cmpu(c,0,c->r[0],0x00000000u); // 800D0710
  if (!crb(c,2)) { goto L_800D0760; } // 800D0714
  cmps(c,0,(int32_t)c->r[31],2); // 800D0718
  if (crb(c,2)) { goto L_800D0750; } // 800D071C
  if (!crb(c,0)) { goto L_800D0734; } // 800D0720
  cmps(c,0,(int32_t)c->r[31],0); // 800D0724
  if (crb(c,2)) { goto L_800D0740; } // 800D0728
  if (!crb(c,0)) { goto L_800D0748; } // 800D072C
  goto L_800D07A8; // 800D0730
L_800D0734:;
  cmps(c,0,(int32_t)c->r[31],4); // 800D0734
  if (!crb(c,0)) { goto L_800D07A8; } // 800D0738
  goto L_800D0758; // 800D073C
L_800D0740:;
  {uint32_t ea=c->r[2]+0xFFFF9230u; c->f[1]=RF64(ea);} // 800D0740
  goto L_800D0874; // 800D0744
L_800D0748:;
  {uint32_t ea=c->r[2]+0xFFFF9238u; c->f[1]=RF64(ea);} // 800D0748
  goto L_800D0874; // 800D074C
L_800D0750:;
  {uint32_t ea=c->r[2]+0xFFFF9240u; c->f[1]=RF64(ea);} // 800D0750
  goto L_800D0874; // 800D0754
L_800D0758:;
  {uint32_t ea=c->r[2]+0xFFFF9248u; c->f[1]=RF64(ea);} // 800D0758
  goto L_800D0874; // 800D075C
L_800D0760:;
  cmps(c,0,(int32_t)c->r[31],2); // 800D0760
  if (crb(c,2)) { goto L_800D0798; } // 800D0764
  if (!crb(c,0)) { goto L_800D077C; } // 800D0768
  cmps(c,0,(int32_t)c->r[31],0); // 800D076C
  if (crb(c,2)) { goto L_800D0788; } // 800D0770
  if (!crb(c,0)) { goto L_800D0790; } // 800D0774
  goto L_800D07A8; // 800D0778
L_800D077C:;
  cmps(c,0,(int32_t)c->r[31],4); // 800D077C
  if (!crb(c,0)) { goto L_800D07A8; } // 800D0780
  goto L_800D07A0; // 800D0784
L_800D0788:;
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[1]=RF64(ea);} // 800D0788
  goto L_800D0874; // 800D078C
L_800D0790:;
  {uint32_t ea=c->r[2]+0xFFFF9258u; c->f[1]=RF64(ea);} // 800D0790
  goto L_800D0874; // 800D0794
L_800D0798:;
  {uint32_t ea=c->r[2]+0xFFFF9210u; c->f[1]=RF64(ea);} // 800D0798
  goto L_800D0874; // 800D079C
L_800D07A0:;
  {uint32_t ea=c->r[2]+0xFFFF9218u; c->f[1]=RF64(ea);} // 800D07A0
  goto L_800D0874; // 800D07A4
L_800D07A8:;
  c->r[0]=c->r[7]+0x80100000u; // 800D07A8
  cmpu(c,0,c->r[0],0x00000000u); // 800D07AC
  if (!crb(c,2)) { goto L_800D07CC; } // 800D07B0
  cmps(c,0,(int32_t)c->r[5],0); // 800D07B4
  if (!crb(c,0)) { goto L_800D07C4; } // 800D07B8
  {uint32_t ea=c->r[2]+0xFFFF9220u; c->f[1]=RF64(ea);} // 800D07BC
  goto L_800D0874; // 800D07C0
L_800D07C4:;
  {uint32_t ea=c->r[2]+0xFFFF9228u; c->f[1]=RF64(ea);} // 800D07C4
  goto L_800D0874; // 800D07C8
L_800D07CC:;
  c->r[0]=c->r[7]-c->r[6]; // 800D07CC
  c->r[0]=sraw(c,c->r[0],20); // 800D07D0
  cmps(c,0,(int32_t)c->r[0],60); // 800D07D4
  if (!crb(c,1)) { goto L_800D07E8; } // 800D07D8
  {uint32_t ea=c->r[2]+0xFFFF9228u; c->f[1]=RF64(ea);} // 800D07DC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 800D07E0
  goto L_800D0814; // 800D07E4
L_800D07E8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D07E8
  if (!crb(c,0)) { goto L_800D0804; } // 800D07EC
  cmps(c,0,(int32_t)c->r[0],-60); // 800D07F0
  if (!crb(c,0)) { goto L_800D0804; } // 800D07F4
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[1]=RF64(ea);} // 800D07F8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 800D07FC
  goto L_800D0814; // 800D0800
L_800D0804:;
  c->f[0]=c->f[1]/c->f[2]; // 800D0804
  c->f[1]=std::fabs(c->f[0]); // 800D0808
  c->lr=0x800D0810u; f_800D30E0(c); // 800D080C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 800D0810
L_800D0814:;
  cmps(c,0,(int32_t)c->r[31],1); // 800D0814
  if (crb(c,2)) { goto L_800D083C; } // 800D0818
  if (!crb(c,0)) { goto L_800D082C; } // 800D081C
  cmps(c,0,(int32_t)c->r[31],0); // 800D0820
  if (!crb(c,0)) { goto L_800D0874; } // 800D0824
  goto L_800D0864; // 800D0828
L_800D082C:;
  cmps(c,0,(int32_t)c->r[31],3); // 800D082C
  if (!crb(c,0)) { goto L_800D0864; } // 800D0830
  goto L_800D0850; // 800D0834
  goto L_800D0874; // 800D0838
L_800D083C:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 800D083C
  c->r[0]=c->r[0]^0x80000000u; // 800D0840
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D0844
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 800D0848
  goto L_800D0874; // 800D084C
L_800D0850:;
  {uint32_t ea=c->r[2]+0xFFFF9260u; c->f[2]=RF64(ea);} // 800D0850
  {uint32_t ea=c->r[2]+0xFFFF9210u; c->f[0]=RF64(ea);} // 800D0854
  c->f[1]=c->f[1]-c->f[2]; // 800D0858
  c->f[1]=c->f[0]-c->f[1]; // 800D085C
  goto L_800D0874; // 800D0860
L_800D0864:;
  {uint32_t ea=c->r[2]+0xFFFF9260u; c->f[2]=RF64(ea);} // 800D0864
  {uint32_t ea=c->r[2]+0xFFFF9210u; c->f[0]=RF64(ea);} // 800D0868
  c->f[1]=c->f[1]-c->f[2]; // 800D086C
  c->f[1]=c->f[1]-c->f[0]; // 800D0870
L_800D0874:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D0874
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D0878
  c->lr=c->r[0]; // 800D087C
  c->r[1]=c->r[1]+0x00000030u; // 800D0880
  return; // 800D0884
}

// fn_800D0888
void f_800D0888(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0888
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 800D088C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D0890
  c->r[0]=R32(c->r[1]+0x00000010u); // 800D0894
  c->r[7]=R32(c->r[1]+0x00000008u); // 800D0898
  c->r[6]=R32(c->r[1]+0x00000014u); // 800D089C
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800D08A0
  c->r[4]=rotl(c->r[7],0)&0x80000000u; // 800D08A4
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800D08A8
  c->r[3]=c->r[0]|c->r[6]; cr0(c,c->r[3]); // 800D08AC
  c->r[8]=c->r[7]^c->r[4]; // 800D08B0
  if (crb(c,2)) { goto L_800D08DC; } // 800D08B4
  c->r[7]=0u+0x7FF00000u; // 800D08B8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 800D08BC
  if (!crb(c,0)) { goto L_800D08DC; } // 800D08C0
  c->r[3]=0u-c->r[6]; // 800D08C4
  c->r[3]=c->r[6]|c->r[3]; // 800D08C8
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 800D08CC
  c->r[3]=c->r[0]|c->r[3]; // 800D08D0
  cmpu(c,0,c->r[3],c->r[7]); // 800D08D4
  if (!crb(c,1)) { goto L_800D08E8; } // 800D08D8
L_800D08DC:;
  c->f[0]=c->f[1]*c->f[2]; // 800D08DC
  c->f[1]=c->f[0]/c->f[0]; // 800D08E0
  goto L_800D0BB0; // 800D08E4
L_800D08E8:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800D08E8
  if (crb(c,1)) { goto L_800D0918; } // 800D08EC
  if (crb(c,0)) { goto L_800D0BB0; } // 800D08F0
  cmpu(c,0,c->r[5],c->r[6]); // 800D08F4
  if (!crb(c,0)) { goto L_800D0900; } // 800D08F8
  goto L_800D0BB0; // 800D08FC
L_800D0900:;
  if (!crb(c,2)) { goto L_800D0918; } // 800D0900
  c->r[3]=0u+0x801F0000u; // 800D0904
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 800D0908
  c->r[3]=c->r[3]+0x00004830u; // 800D090C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 800D0910
  goto L_800D0BB0; // 800D0914
L_800D0918:;
  c->r[3]=0u+0x00100000u; // 800D0918
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 800D091C
  if (!crb(c,0)) { goto L_800D096C; } // 800D0920
  cmps(c,0,(int32_t)c->r[8],0); // 800D0924
  if (!crb(c,2)) { goto L_800D094C; } // 800D0928
  c->r[3]=c->r[5]|c->r[5]; // 800D092C
  c->r[11]=0u+0xFFFFFBEDu; // 800D0930
  goto L_800D0940; // 800D0934
L_800D0938:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800D0938
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 800D093C
L_800D0940:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D0940
  if (crb(c,1)) { IRQCHK(c); goto L_800D0938; } // 800D0944
  goto L_800D0974; // 800D0948
L_800D094C:;
  c->r[3]=rotl(c->r[8],11)&0xFFFFF800u; // 800D094C
  c->r[11]=0u+0xFFFFFC02u; // 800D0950
  goto L_800D0960; // 800D0954
L_800D0958:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800D0958
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 800D095C
L_800D0960:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D0960
  if (crb(c,1)) { IRQCHK(c); goto L_800D0958; } // 800D0964
  goto L_800D0974; // 800D0968
L_800D096C:;
  c->r[3]=sraw(c,c->r[8],20); // 800D096C
  c->r[11]=c->r[3]+0xFFFFFC01u; // 800D0970
L_800D0974:;
  c->r[3]=0u+0x00100000u; // 800D0974
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800D0978
  if (!crb(c,0)) { goto L_800D09C8; } // 800D097C
  cmps(c,0,(int32_t)c->r[0],0); // 800D0980
  if (!crb(c,2)) { goto L_800D09A8; } // 800D0984
  c->r[7]=c->r[6]|c->r[6]; // 800D0988
  c->r[3]=0u+0xFFFFFBEDu; // 800D098C
  goto L_800D099C; // 800D0990
L_800D0994:;
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800D0994
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800D0998
L_800D099C:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D099C
  if (crb(c,1)) { IRQCHK(c); goto L_800D0994; } // 800D09A0
  goto L_800D09D0; // 800D09A4
L_800D09A8:;
  c->r[7]=rotl(c->r[0],11)&0xFFFFF800u; // 800D09A8
  c->r[3]=0u+0xFFFFFC02u; // 800D09AC
  goto L_800D09BC; // 800D09B0
L_800D09B4:;
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800D09B4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800D09B8
L_800D09BC:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D09BC
  if (crb(c,1)) { IRQCHK(c); goto L_800D09B4; } // 800D09C0
  goto L_800D09D0; // 800D09C4
L_800D09C8:;
  c->r[3]=sraw(c,c->r[0],20); // 800D09C8
  c->r[3]=c->r[3]+0xFFFFFC01u; // 800D09CC
L_800D09D0:;
  cmps(c,0,(int32_t)c->r[11],-1022); // 800D09D0
  if (crb(c,0)) { goto L_800D09E4; } // 800D09D4
  c->r[7]=rotl(c->r[8],0)&0x000FFFFFu; // 800D09D8
  c->r[9]=c->r[7]|0x00100000u; // 800D09DC
  goto L_800D0A14; // 800D09E0
L_800D09E4:;
  c->r[9]=addc(c,~c->r[11],0xFFFFFC02u,1); // 800D09E4
  cmps(c,0,(int32_t)c->r[9],31); // 800D09E8
  if (crb(c,1)) { goto L_800D0A08; } // 800D09EC
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 800D09F0
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[8]<<((c->r[9])&31)); // 800D09F4
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[5]>>((c->r[7])&31)); // 800D09F8
  c->r[5]=((c->r[9])&0x20)?0u:(c->r[5]<<((c->r[9])&31)); // 800D09FC
  c->r[9]=c->r[8]|c->r[7]; // 800D0A00
  goto L_800D0A14; // 800D0A04
L_800D0A08:;
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 800D0A08
  c->r[9]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 800D0A0C
  c->r[5]=0u+0x00000000u; // 800D0A10
L_800D0A14:;
  cmps(c,0,(int32_t)c->r[3],-1022); // 800D0A14
  if (crb(c,0)) { goto L_800D0A28; } // 800D0A18
  c->r[0]=rotl(c->r[0],0)&0x000FFFFFu; // 800D0A1C
  c->r[8]=c->r[0]|0x00100000u; // 800D0A20
  goto L_800D0A58; // 800D0A24
L_800D0A28:;
  c->r[10]=addc(c,~c->r[3],0xFFFFFC02u,1); // 800D0A28
  cmps(c,0,(int32_t)c->r[10],31); // 800D0A2C
  if (crb(c,1)) { goto L_800D0A4C; } // 800D0A30
  c->r[7]=addc(c,~c->r[10],0x00000020u,1); // 800D0A34
  c->r[8]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 800D0A38
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[6]>>((c->r[7])&31)); // 800D0A3C
  c->r[6]=((c->r[10])&0x20)?0u:(c->r[6]<<((c->r[10])&31)); // 800D0A40
  c->r[8]=c->r[8]|c->r[0]; // 800D0A44
  goto L_800D0A58; // 800D0A48
L_800D0A4C:;
  c->r[0]=c->r[10]+0xFFFFFFE0u; // 800D0A4C
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 800D0A50
  c->r[6]=0u+0x00000000u; // 800D0A54
L_800D0A58:;
  c->r[0]=c->r[11]-c->r[3]; cr0(c,c->r[0]); // 800D0A58
  c->ctr=c->r[0]; // 800D0A5C
  if (crb(c,2)) { goto L_800D0AC4; } // 800D0A60
L_800D0A64:;
  cmpu(c,0,c->r[5],c->r[6]); // 800D0A64
  c->r[7]=c->r[9]-c->r[8]; // 800D0A68
  c->r[10]=c->r[5]-c->r[6]; // 800D0A6C
  if (!crb(c,0)) { goto L_800D0A78; } // 800D0A70
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800D0A74
L_800D0A78:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D0A78
  if (!crb(c,0)) { goto L_800D0A94; } // 800D0A7C
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 800D0A80
  c->r[0]=rotl(c->r[9],1)&0xFFFFFFFEu; // 800D0A84
  c->r[9]=c->r[7]+c->r[0]; // 800D0A88
  c->r[5]=c->r[5]+c->r[5]; // 800D0A8C
  goto L_800D0AC0; // 800D0A90
L_800D0A94:;
  c->r[0]=c->r[7]|c->r[10]; cr0(c,c->r[0]); // 800D0A94
  if (!crb(c,2)) { goto L_800D0AB0; } // 800D0A98
  c->r[3]=0u+0x801F0000u; // 800D0A9C
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 800D0AA0
  c->r[3]=c->r[3]+0x00004830u; // 800D0AA4
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 800D0AA8
  goto L_800D0BB0; // 800D0AAC
L_800D0AB0:;
  c->r[5]=rotl(c->r[10],1)&0x00000001u; // 800D0AB0
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800D0AB4
  c->r[9]=c->r[5]+c->r[0]; // 800D0AB8
  c->r[5]=rotl(c->r[10],1)&0xFFFFFFFEu; // 800D0ABC
L_800D0AC0:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0A64; } // 800D0AC0
L_800D0AC4:;
  cmpu(c,0,c->r[5],c->r[6]); // 800D0AC4
  c->r[7]=c->r[9]-c->r[8]; // 800D0AC8
  c->r[0]=c->r[5]-c->r[6]; // 800D0ACC
  if (!crb(c,0)) { goto L_800D0AD8; } // 800D0AD0
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800D0AD4
L_800D0AD8:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D0AD8
  if (crb(c,0)) { goto L_800D0AE8; } // 800D0ADC
  c->r[9]=c->r[7]|c->r[7]; // 800D0AE0
  c->r[5]=c->r[0]|c->r[0]; // 800D0AE4
L_800D0AE8:;
  c->r[0]=c->r[9]|c->r[5]; cr0(c,c->r[0]); // 800D0AE8
  if (!crb(c,2)) { goto L_800D0B04; } // 800D0AEC
  c->r[3]=0u+0x801F0000u; // 800D0AF0
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 800D0AF4
  c->r[3]=c->r[3]+0x00004830u; // 800D0AF8
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 800D0AFC
  goto L_800D0BB0; // 800D0B00
L_800D0B04:;
  c->r[0]=0u+0x00100000u; // 800D0B04
  goto L_800D0B20; // 800D0B08
L_800D0B0C:;
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 800D0B0C
  c->r[6]=rotl(c->r[9],1)&0xFFFFFFFEu; // 800D0B10
  c->r[9]=c->r[7]+c->r[6]; // 800D0B14
  c->r[5]=c->r[5]+c->r[5]; // 800D0B18
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800D0B1C
L_800D0B20:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 800D0B20
  if (crb(c,0)) { IRQCHK(c); goto L_800D0B0C; } // 800D0B24
  cmps(c,0,(int32_t)c->r[3],-1022); // 800D0B28
  if (crb(c,0)) { goto L_800D0B50; } // 800D0B2C
  c->r[0]=c->r[3]+0x000003FFu; // 800D0B30
  c->r[3]=c->r[9]+0xFFF00000u; // 800D0B34
  c->r[0]=rotl(c->r[0],20)&0xFFF00000u; // 800D0B38
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D0B3C
  c->r[0]=c->r[3]|c->r[0]; // 800D0B40
  c->r[0]=c->r[0]|c->r[4]; // 800D0B44
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D0B48
  goto L_800D0BAC; // 800D0B4C
L_800D0B50:;
  c->r[6]=addc(c,~c->r[3],0xFFFFFC02u,1); // 800D0B50
  cmps(c,0,(int32_t)c->r[6],20); // 800D0B54
  if (crb(c,1)) { goto L_800D0B74; } // 800D0B58
  c->r[0]=addc(c,~c->r[6],0x00000020u,1); // 800D0B5C
  c->r[3]=((c->r[6])&0x20)?0u:(c->r[5]>>((c->r[6])&31)); // 800D0B60
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[9]<<((c->r[0])&31)); // 800D0B64
  c->r[9]=sraw(c,c->r[9],(c->r[6])&63); // 800D0B68
  c->r[3]=c->r[3]|c->r[0]; // 800D0B6C
  goto L_800D0BA0; // 800D0B70
L_800D0B74:;
  cmps(c,0,(int32_t)c->r[6],31); // 800D0B74
  if (crb(c,1)) { goto L_800D0B94; } // 800D0B78
  c->r[3]=addc(c,~c->r[6],0x00000020u,1); // 800D0B7C
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[5]>>((c->r[6])&31)); // 800D0B80
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[9]<<((c->r[3])&31)); // 800D0B84
  c->r[9]=c->r[4]|c->r[4]; // 800D0B88
  c->r[3]=c->r[3]|c->r[0]; // 800D0B8C
  goto L_800D0BA0; // 800D0B90
L_800D0B94:;
  c->r[0]=c->r[6]+0xFFFFFFE0u; // 800D0B94
  c->r[3]=sraw(c,c->r[9],(c->r[0])&63); // 800D0B98
  c->r[9]=c->r[4]|c->r[4]; // 800D0B9C
L_800D0BA0:;
  c->r[0]=c->r[9]|c->r[4]; // 800D0BA0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D0BA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D0BA8
L_800D0BAC:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D0BAC
L_800D0BB0:;
  c->r[1]=c->r[1]+0x00000020u; // 800D0BB0
  return; // 800D0BB4
}

// __ieee754_pow
void f_800D0BB8(Ctx* __restrict c) {
  trace_call(0x800D0BB8u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0BB8
  c->r[0]=c->lr; // 800D0BBC
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800D0BC0
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800D0BC4
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800D0BC8
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 800D0BCC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 800D0BD0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 800D0BD4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 800D0BD8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 800D0BDC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 800D0BE0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[27]);} // 800D0BE4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,27,ea,0,0);} // 800D0BE8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[26]);} // 800D0BEC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,26,ea,0,0);} // 800D0BF0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 800D0BF4
  c->r[3]=0u+0x801F0000u; // 800D0BF8
  c->r[3]=c->r[3]+0x00004840u; // 800D0BFC
  c->r[5]=R32(c->r[1]+0x00000010u); // 800D0C00
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D0C04
  c->r[11]=R32(c->r[1]+0x00000014u); // 800D0C08
  c->r[7]=rotl(c->r[5],0)&0x7FFFFFFFu; // 800D0C0C
  c->r[9]=R32(c->r[1]+0x00000008u); // 800D0C10
  c->r[0]=c->r[7]|c->r[11]; cr0(c,c->r[0]); // 800D0C14
  c->r[10]=R32(c->r[1]+0x0000000Cu); // 800D0C18
  c->r[6]=rotl(c->r[9],0)&0x7FFFFFFFu; // 800D0C1C
  if (!crb(c,2)) { goto L_800D0C2C; } // 800D0C20
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[1]=RF64(ea);} // 800D0C24
  goto L_800D13C0; // 800D0C28
L_800D0C2C:;
  c->r[0]=0u+0x7FF00000u; // 800D0C2C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D0C30
  if (crb(c,1)) { goto L_800D0C6C; } // 800D0C34
  c->r[0]=c->r[6]+0x80100000u; // 800D0C38
  cmpu(c,0,c->r[0],0x00000000u); // 800D0C3C
  if (!crb(c,2)) { goto L_800D0C4C; } // 800D0C40
  cmps(c,0,(int32_t)c->r[10],0); // 800D0C44
  if (!crb(c,2)) { goto L_800D0C6C; } // 800D0C48
L_800D0C4C:;
  c->r[0]=0u+0x7FF00000u; // 800D0C4C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800D0C50
  if (crb(c,1)) { goto L_800D0C6C; } // 800D0C54
  c->r[0]=c->r[7]+0x80100000u; // 800D0C58
  cmpu(c,0,c->r[0],0x00000000u); // 800D0C5C
  if (!crb(c,2)) { goto L_800D0C74; } // 800D0C60
  cmps(c,0,(int32_t)c->r[11],0); // 800D0C64
  if (crb(c,2)) { goto L_800D0C74; } // 800D0C68
L_800D0C6C:;
  c->f[1]=c->f[1]+c->f[2]; // 800D0C6C
  goto L_800D13C0; // 800D0C70
L_800D0C74:;
  cmps(c,0,(int32_t)c->r[9],0); // 800D0C74
  c->r[4]=0u+0x00000000u; // 800D0C78
  if (!crb(c,0)) { goto L_800D0CF4; } // 800D0C7C
  c->r[0]=0u+0x43400000u; // 800D0C80
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800D0C84
  if (crb(c,0)) { goto L_800D0C94; } // 800D0C88
  c->r[4]=0u+0x00000002u; // 800D0C8C
  goto L_800D0CF4; // 800D0C90
L_800D0C94:;
  c->r[0]=0u+0x3FF00000u; // 800D0C94
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800D0C98
  if (crb(c,0)) { goto L_800D0CF4; } // 800D0C9C
  c->r[8]=sraw(c,c->r[7],20); // 800D0CA0
  c->r[0]=c->r[8]+0xFFFFFC01u; // 800D0CA4
  cmps(c,0,(int32_t)c->r[0],20); // 800D0CA8
  if (!crb(c,1)) { goto L_800D0CD0; } // 800D0CAC
  c->r[0]=addc(c,~c->r[0],0x00000034u,1); // 800D0CB0
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[11]>>((c->r[0])&31)); // 800D0CB4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 800D0CB8
  cmpu(c,0,c->r[11],c->r[0]); // 800D0CBC
  if (!crb(c,2)) { goto L_800D0CF4; } // 800D0CC0
  c->r[0]=rotl(c->r[8],0)&0x00000001u; // 800D0CC4
  c->r[4]=addc(c,~c->r[0],0x00000002u,1); // 800D0CC8
  goto L_800D0CF4; // 800D0CCC
L_800D0CD0:;
  cmps(c,0,(int32_t)c->r[11],0); // 800D0CD0
  if (!crb(c,2)) { goto L_800D0CF4; } // 800D0CD4
  c->r[0]=addc(c,~c->r[0],0x00000014u,1); // 800D0CD8
  c->r[8]=sraw(c,c->r[7],(c->r[0])&63); // 800D0CDC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 800D0CE0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800D0CE4
  if (!crb(c,2)) { goto L_800D0CF4; } // 800D0CE8
  c->r[0]=rotl(c->r[8],0)&0x00000001u; // 800D0CEC
  c->r[4]=addc(c,~c->r[0],0x00000002u,1); // 800D0CF0
L_800D0CF4:;
  cmps(c,0,(int32_t)c->r[11],0); // 800D0CF4
  if (!crb(c,2)) { goto L_800D0DA8; } // 800D0CF8
  c->r[0]=c->r[7]+0x80100000u; // 800D0CFC
  cmpu(c,0,c->r[0],0x00000000u); // 800D0D00
  if (!crb(c,2)) { goto L_800D0D58; } // 800D0D04
  c->r[0]=c->r[6]+0xC0100000u; // 800D0D08
  c->r[0]=c->r[0]|c->r[10]; cr0(c,c->r[0]); // 800D0D0C
  if (!crb(c,2)) { goto L_800D0D1C; } // 800D0D10
  c->f[1]=c->f[2]-c->f[2]; // 800D0D14
  goto L_800D13C0; // 800D0D18
L_800D0D1C:;
  c->r[0]=0u+0x3FF00000u; // 800D0D1C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D0D20
  if (crb(c,0)) { goto L_800D0D40; } // 800D0D24
  cmps(c,0,(int32_t)c->r[5],0); // 800D0D28
  if (crb(c,0)) { goto L_800D0D38; } // 800D0D2C
  c->f[1]=c->f[2]; // 800D0D30
  goto L_800D13C0; // 800D0D34
L_800D0D38:;
  {uint32_t ea=c->r[2]+0xFFFF9270u; c->f[1]=RF64(ea);} // 800D0D38
  goto L_800D13C0; // 800D0D3C
L_800D0D40:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D0D40
  if (!crb(c,0)) { goto L_800D0D50; } // 800D0D44
  c->f[1]=-c->f[2]; // 800D0D48
  goto L_800D13C0; // 800D0D4C
L_800D0D50:;
  {uint32_t ea=c->r[2]+0xFFFF9270u; c->f[1]=RF64(ea);} // 800D0D50
  goto L_800D13C0; // 800D0D54
L_800D0D58:;
  c->r[0]=c->r[7]+0xC0100000u; // 800D0D58
  cmpu(c,0,c->r[0],0x00000000u); // 800D0D5C
  if (!crb(c,2)) { goto L_800D0D78; } // 800D0D60
  cmps(c,0,(int32_t)c->r[5],0); // 800D0D64
  if (!crb(c,0)) { goto L_800D13C0; } // 800D0D68
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[0]=RF64(ea);} // 800D0D6C
  c->f[1]=c->f[0]/c->f[1]; // 800D0D70
  goto L_800D13C0; // 800D0D74
L_800D0D78:;
  c->r[0]=c->r[5]+0xC0000000u; // 800D0D78
  cmpu(c,0,c->r[0],0x00000000u); // 800D0D7C
  if (!crb(c,2)) { goto L_800D0D8C; } // 800D0D80
  c->f[1]=c->f[1]*c->f[1]; // 800D0D84
  goto L_800D13C0; // 800D0D88
L_800D0D8C:;
  c->r[0]=c->r[5]+0xC0200000u; // 800D0D8C
  cmpu(c,0,c->r[0],0x00000000u); // 800D0D90
  if (!crb(c,2)) { goto L_800D0DA8; } // 800D0D94
  cmps(c,0,(int32_t)c->r[9],0); // 800D0D98
  if (crb(c,0)) { goto L_800D0DA8; } // 800D0D9C
  c->lr=0x800D0DA4u; f_800D3A88(c); // 800D0DA0
  goto L_800D13C0; // 800D0DA4
L_800D0DA8:;
  c->f[0]=std::fabs(c->f[1]); // 800D0DA8
  cmps(c,0,(int32_t)c->r[10],0); // 800D0DAC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800D0DB0
  if (!crb(c,2)) { goto L_800D0E2C; } // 800D0DB4
  c->r[0]=c->r[6]+0x80100000u; // 800D0DB8
  cmpu(c,0,c->r[0],0x00000000u); // 800D0DBC
  if (crb(c,2)) { goto L_800D0DD8; } // 800D0DC0
  cmps(c,0,(int32_t)c->r[6],0); // 800D0DC4
  if (crb(c,2)) { goto L_800D0DD8; } // 800D0DC8
  c->r[0]=c->r[6]+0xC0100000u; // 800D0DCC
  cmpu(c,0,c->r[0],0x00000000u); // 800D0DD0
  if (!crb(c,2)) { goto L_800D0E2C; } // 800D0DD4
L_800D0DD8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D0DD8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800D0DDC
  if (!crb(c,0)) { goto L_800D0DF0; } // 800D0DE0
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[1]=RF64(ea);} // 800D0DE4
  c->f[0]=c->f[1]/c->f[0]; // 800D0DE8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800D0DEC
L_800D0DF0:;
  cmps(c,0,(int32_t)c->r[9],0); // 800D0DF0
  if (!crb(c,0)) { goto L_800D0E24; } // 800D0DF4
  c->r[0]=c->r[6]+0xC0100000u; // 800D0DF8
  c->r[0]=c->r[0]|c->r[4]; cr0(c,c->r[0]); // 800D0DFC
  if (!crb(c,2)) { goto L_800D0E14; } // 800D0E00
  c->f[0]=c->f[0]-c->f[0]; // 800D0E04
  c->f[0]=c->f[0]/c->f[0]; // 800D0E08
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800D0E0C
  goto L_800D0E24; // 800D0E10
L_800D0E14:;
  cmps(c,0,(int32_t)c->r[4],1); // 800D0E14
  if (!crb(c,2)) { goto L_800D0E24; } // 800D0E18
  c->f[0]=-c->f[0]; // 800D0E1C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800D0E20
L_800D0E24:;
  c->f[1]=c->f[0]; // 800D0E24
  goto L_800D13C0; // 800D0E28
L_800D0E2C:;
  c->r[8]=sraw(c,c->r[9],31); // 800D0E2C
  c->r[0]=c->r[8]+0x00000001u; // 800D0E30
  c->r[8]=c->r[0]|c->r[4]; cr0(c,c->r[8]); // 800D0E34
  if (!crb(c,2)) { goto L_800D0E50; } // 800D0E38
  c->r[0]=0u+0x00000021u; // 800D0E3C
  c->r[3]=0u+0x803C0000u; // 800D0E40
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 800D0E44
  {uint32_t ea=c->r[3]+0x00007710u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D0E48
  goto L_800D13C0; // 800D0E4C
L_800D0E50:;
  c->r[8]=0u+0x41E00000u; // 800D0E50
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[8]); // 800D0E54
  if (!crb(c,1)) { goto L_800D0F64; } // 800D0E58
  c->r[3]=0u+0x43F00000u; // 800D0E5C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[3]); // 800D0E60
  if (!crb(c,1)) { goto L_800D0EB0; } // 800D0E64
  c->r[3]=0u+0x3FF00000u; // 800D0E68
  c->r[7]=c->r[3]+0xFFFFFFFFu; // 800D0E6C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 800D0E70
  if (crb(c,1)) { goto L_800D0E90; } // 800D0E74
  cmps(c,0,(int32_t)c->r[5],0); // 800D0E78
  if (!crb(c,0)) { goto L_800D0E88; } // 800D0E7C
  {uint32_t ea=c->r[2]+0xFFFF9278u; c->f[1]=RF64(ea);} // 800D0E80
  goto L_800D13C0; // 800D0E84
L_800D0E88:;
  {uint32_t ea=c->r[2]+0xFFFF9270u; c->f[1]=RF64(ea);} // 800D0E88
  goto L_800D13C0; // 800D0E8C
L_800D0E90:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[3]); // 800D0E90
  if (crb(c,0)) { goto L_800D0EB0; } // 800D0E94
  cmps(c,0,(int32_t)c->r[5],0); // 800D0E98
  if (!crb(c,1)) { goto L_800D0EA8; } // 800D0E9C
  {uint32_t ea=c->r[2]+0xFFFF9278u; c->f[1]=RF64(ea);} // 800D0EA0
  goto L_800D13C0; // 800D0EA4
L_800D0EA8:;
  {uint32_t ea=c->r[2]+0xFFFF9270u; c->f[1]=RF64(ea);} // 800D0EA8
  goto L_800D13C0; // 800D0EAC
L_800D0EB0:;
  c->r[3]=0u+0x3FF00000u; // 800D0EB0
  c->r[7]=c->r[3]+0xFFFFFFFFu; // 800D0EB4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 800D0EB8
  if (!crb(c,0)) { goto L_800D0ED8; } // 800D0EBC
  cmps(c,0,(int32_t)c->r[5],0); // 800D0EC0
  if (!crb(c,0)) { goto L_800D0ED0; } // 800D0EC4
  {uint32_t ea=c->r[2]+0xFFFF9278u; c->f[1]=RF64(ea);} // 800D0EC8
  goto L_800D13C0; // 800D0ECC
L_800D0ED0:;
  {uint32_t ea=c->r[2]+0xFFFF9270u; c->f[1]=RF64(ea);} // 800D0ED0
  goto L_800D13C0; // 800D0ED4
L_800D0ED8:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[3]); // 800D0ED8
  if (!crb(c,1)) { goto L_800D0EF8; } // 800D0EDC
  cmps(c,0,(int32_t)c->r[5],0); // 800D0EE0
  if (!crb(c,1)) { goto L_800D0EF0; } // 800D0EE4
  {uint32_t ea=c->r[2]+0xFFFF9278u; c->f[1]=RF64(ea);} // 800D0EE8
  goto L_800D13C0; // 800D0EEC
L_800D0EF0:;
  {uint32_t ea=c->r[2]+0xFFFF9270u; c->f[1]=RF64(ea);} // 800D0EF0
  goto L_800D13C0; // 800D0EF4
L_800D0EF8:;
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[3]=RF64(ea);} // 800D0EF8
  c->r[3]=0u+0x00000000u; // 800D0EFC
  {uint32_t ea=c->r[2]+0xFFFF9290u; c->f[0]=RF64(ea);} // 800D0F00
  c->f[8]=c->f[1]-c->f[3]; // 800D0F04
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=RF64(ea);} // 800D0F08
  {uint32_t ea=c->r[2]+0xFFFF9288u; c->f[5]=RF64(ea);} // 800D0F0C
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[3]=RF64(ea);} // 800D0F10
  c->f[6]=c->f[0]*c->f[8]; // 800D0F14
  {uint32_t ea=c->r[2]+0xFFFF9280u; c->f[4]=RF64(ea);} // 800D0F18
  {uint32_t ea=c->r[2]+0xFFFF92A8u; c->f[0]=RF64(ea);} // 800D0F1C
  c->f[7]=c->f[8]*c->f[8]; // 800D0F20
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[8]);} // 800D0F24
  c->f[5]=c->f[5]-c->f[6]; // 800D0F28
  c->f[6]=c->f[3]*c->f[8]; // 800D0F2C
  c->f[5]=c->f[8]*c->f[5]; // 800D0F30
  c->f[1]=c->f[1]*c->f[8]; // 800D0F34
  c->f[3]=c->f[4]-c->f[5]; // 800D0F38
  c->f[3]=c->f[7]*c->f[3]; // 800D0F3C
  c->f[0]=c->f[0]*c->f[3]; // 800D0F40
  c->f[1]=c->f[1]-c->f[0]; // 800D0F44
  c->f[0]=c->f[6]+c->f[1]; // 800D0F48
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800D0F4C
  W32(c->r[1]+0x00000034u,c->r[3]); // 800D0F50
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800D0F54
  c->f[0]=c->f[0]-c->f[6]; // 800D0F58
  c->f[0]=c->f[1]-c->f[0]; // 800D0F5C
  goto L_800D1170; // 800D0F60
L_800D0F64:;
  c->r[5]=0u+0x00100000u; // 800D0F64
  c->r[11]=0u+0x00000000u; // 800D0F68
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[5]); // 800D0F6C
  if (!crb(c,0)) { goto L_800D0F88; } // 800D0F70
  {uint32_t ea=c->r[2]+0xFFFF92B0u; c->f[1]=RF64(ea);} // 800D0F74
  c->r[11]=0u+0xFFFFFFCBu; // 800D0F78
  c->f[0]=c->f[0]*c->f[1]; // 800D0F7C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800D0F80
  c->r[6]=R32(c->r[1]+0x00000048u); // 800D0F84
L_800D0F88:;
  c->r[5]=0u+0x00040000u; // 800D0F88
  c->r[8]=rotl(c->r[6],0)&0x000FFFFFu; // 800D0F8C
  c->r[5]=c->r[5]+0xFFFF988Eu; // 800D0F90
  c->r[6]=sraw(c,c->r[6],20); // 800D0F94
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 800D0F98
  c->r[7]=c->r[8]|0x3FF00000u; // 800D0F9C
  c->r[5]=c->r[11]+c->r[6]; // 800D0FA0
  c->r[11]=c->r[5]+0xFFFFFC01u; // 800D0FA4
  if (crb(c,1)) { goto L_800D0FB4; } // 800D0FA8
  c->r[6]=0u+0x00000000u; // 800D0FAC
  goto L_800D0FD8; // 800D0FB0
L_800D0FB4:;
  c->r[5]=0u+0x000C0000u; // 800D0FB4
  c->r[5]=c->r[5]+0xFFFFB67Au; // 800D0FB8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 800D0FBC
  if (!crb(c,0)) { goto L_800D0FCC; } // 800D0FC0
  c->r[6]=0u+0x00000001u; // 800D0FC4
  goto L_800D0FD8; // 800D0FC8
L_800D0FCC:;
  c->r[7]=c->r[7]+0xFFF00000u; // 800D0FCC
  c->r[6]=0u+0x00000000u; // 800D0FD0
  c->r[11]=c->r[11]+0x00000001u; // 800D0FD4
L_800D0FD8:;
  W32(c->r[1]+0x00000048u,c->r[7]); // 800D0FD8
  c->r[9]=sraw(c,c->r[7],1); // 800D0FDC
  c->r[10]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D0FE0
  c->r[5]=c->r[3]+0x00000000u; // 800D0FE4
  {uint32_t ea=c->r[5]+c->r[10]; c->f[7]=RF64(ea);} // 800D0FE8
  c->r[8]=rotl(c->r[6],18)&0xFFFC0000u; // 800D0FEC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[10]=RF64(ea);} // 800D0FF0
  c->r[6]=c->r[11]^0x80000000u; // 800D0FF4
  {uint32_t ea=c->r[2]+0xFFFF9270u; c->f[4]=RF64(ea);} // 800D0FF8
  c->r[5]=0u+0x43300000u; // 800D0FFC
  c->f[3]=c->f[10]+c->f[7]; // 800D1000
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[1]=RF64(ea);} // 800D1004
  c->f[26]=c->f[10]-c->f[7]; // 800D1008
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[4]);} // 800D100C
  c->r[9]=c->r[9]|0x20000000u; // 800D1010
  c->r[8]=c->r[8]+0x00080000u; // 800D1014
  c->f[1]=c->f[1]/c->f[3]; // 800D1018
  c->r[8]=c->r[9]+c->r[8]; // 800D101C
  W32(c->r[1]+0x00000018u,c->r[8]); // 800D1020
  c->r[9]=0u+0x00000000u; // 800D1024
  {uint32_t ea=c->r[2]+0xFFFF92E0u; c->f[0]=RF64(ea);} // 800D1028
  c->r[7]=c->r[3]+0x00000020u; // 800D102C
  c->f[4]=c->f[26]*c->f[1]; // 800D1030
  {uint32_t ea=c->r[1]+0x00000018u; c->f[9]=RF64(ea);} // 800D1034
  {uint32_t ea=c->r[2]+0xFFFF92D8u; c->f[3]=RF64(ea);} // 800D1038
  c->f[8]=c->f[9]-c->f[7]; // 800D103C
  {uint32_t ea=c->r[2]+0xFFFF92D0u; c->f[6]=RF64(ea);} // 800D1040
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 800D1044
  c->f[5]=c->f[4]*c->f[4]; // 800D1048
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[4]);} // 800D104C
  {uint32_t ea=c->r[2]+0xFFFF92C8u; c->f[30]=RF64(ea);} // 800D1050
  c->f[11]=c->f[10]-c->f[8]; // 800D1054
  W32(c->r[1]+0x00000058u,c->r[5]); // 800D1058
  {uint32_t ea=c->r[2]+0xFFFF92C0u; c->f[31]=RF64(ea);} // 800D105C
  c->f[7]=c->f[0]*c->f[5]; // 800D1060
  W32(c->r[1]+0x00000024u,c->r[9]); // 800D1064
  {uint32_t ea=c->r[2]+0xFFFF92B8u; c->f[13]=RF64(ea);} // 800D1068
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800D106C
  {uint32_t ea=c->r[2]+0xFFFF92E8u; c->f[12]=RF64(ea);} // 800D1070
  c->f[7]=c->f[3]+c->f[7]; // 800D1074
  c->f[27]=c->f[0]*c->f[9]; // 800D1078
  {uint32_t ea=c->r[2]+0xFFFF92F8u; c->f[10]=RF64(ea);} // 800D107C
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[9]=RF64(ea);} // 800D1080
  c->f[8]=c->f[5]*c->f[7]; // 800D1084
  {uint32_t ea=c->r[2]+0xFFFF9370u; c->f[7]=RF64(ea);} // 800D1088
  c->f[28]=c->f[0]*c->f[11]; // 800D108C
  {uint32_t ea=c->r[2]+0xFFFF92F0u; c->f[11]=RF64(ea);} // 800D1090
  c->f[29]=c->f[6]+c->f[8]; // 800D1094
  {uint32_t ea=c->r[1]+0x00000058u; c->f[6]=RF64(ea);} // 800D1098
  c->f[27]=c->f[26]-c->f[27]; // 800D109C
  {uint32_t ea=c->r[7]+c->r[10]; c->f[8]=RF64(ea);} // 800D10A0
  c->f[6]=c->f[6]-c->f[7]; // 800D10A4
  c->f[29]=c->f[5]*c->f[29]; // 800D10A8
  c->f[28]=c->f[27]-c->f[28]; // 800D10AC
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[6]);} // 800D10B0
  c->f[3]=c->f[0]*c->f[0]; // 800D10B4
  c->f[7]=c->f[30]+c->f[29]; // 800D10B8
  c->f[26]=c->f[1]*c->f[28]; // 800D10BC
  c->f[7]=c->f[5]*c->f[7]; // 800D10C0
  c->f[29]=c->f[5]*c->f[5]; // 800D10C4
  c->f[31]=c->f[31]+c->f[7]; // 800D10C8
  c->f[1]=c->f[0]+c->f[4]; // 800D10CC
  c->f[5]=c->f[5]*c->f[31]; // 800D10D0
  c->f[7]=c->f[26]*c->f[1]; // 800D10D4
  c->f[5]=c->f[13]+c->f[5]; // 800D10D8
  c->f[1]=c->f[12]+c->f[3]; // 800D10DC
  c->f[13]=c->f[29]*c->f[5]; // 800D10E0
  c->f[13]=c->f[13]+c->f[7]; // 800D10E4
  c->f[1]=c->f[1]+c->f[13]; // 800D10E8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 800D10EC
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800D10F0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[7]=RF64(ea);} // 800D10F4
  c->f[5]=c->f[7]-c->f[12]; // 800D10F8
  c->f[1]=c->f[26]*c->f[7]; // 800D10FC
  c->f[3]=c->f[5]-c->f[3]; // 800D1100
  c->f[5]=c->f[0]*c->f[7]; // 800D1104
  c->f[0]=c->f[13]-c->f[3]; // 800D1108
  c->f[0]=c->f[0]*c->f[4]; // 800D110C
  c->f[4]=c->f[1]+c->f[0]; // 800D1110
  c->f[3]=c->f[5]+c->f[4]; // 800D1114
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 800D1118
  W32(c->r[1]+0x00000044u,c->r[9]); // 800D111C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=RF64(ea);} // 800D1120
  c->f[0]=c->f[3]-c->f[5]; // 800D1124
  c->f[1]=c->f[10]*c->f[3]; // 800D1128
  c->f[0]=c->f[4]-c->f[0]; // 800D112C
  c->f[3]=c->f[11]*c->f[3]; // 800D1130
  c->f[0]=c->f[9]*c->f[0]; // 800D1134
  c->f[0]=c->f[1]+c->f[0]; // 800D1138
  c->f[4]=c->f[8]+c->f[0]; // 800D113C
  c->r[3]=c->r[3]+0x00000010u; // 800D1140
  c->f[0]=c->f[3]+c->f[4]; // 800D1144
  {uint32_t ea=c->r[3]+c->r[10]; c->f[1]=RF64(ea);} // 800D1148
  c->f[0]=c->f[0]+c->f[1]; // 800D114C
  c->f[0]=c->f[6]+c->f[0]; // 800D1150
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800D1154
  W32(c->r[1]+0x00000034u,c->r[9]); // 800D1158
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800D115C
  c->f[0]=c->f[0]-c->f[6]; // 800D1160
  c->f[0]=c->f[0]-c->f[1]; // 800D1164
  c->f[0]=c->f[0]-c->f[3]; // 800D1168
  c->f[0]=c->f[4]-c->f[0]; // 800D116C
L_800D1170:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800D1170
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[31]=RF64(ea);} // 800D1174
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 800D1178
  if (!crb(c,2)) { goto L_800D1184; } // 800D117C
  {uint32_t ea=c->r[2]+0xFFFF9308u; c->f[31]=RF64(ea);} // 800D1180
L_800D1184:;
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 800D1184
  c->r[0]=0u+0x00000000u; // 800D1188
  c->f[0]=c->f[2]*c->f[0]; // 800D118C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 800D1190
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800D1194
  c->r[0]=0u+0x40900000u; // 800D1198
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 800D119C
  c->f[2]=c->f[2]-c->f[3]; // 800D11A0
  c->f[3]=c->f[3]*c->f[1]; // 800D11A4
  c->f[1]=c->f[1]*c->f[2]; // 800D11A8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 800D11AC
  c->f[11]=c->f[1]+c->f[0]; // 800D11B0
  c->f[0]=c->f[11]+c->f[3]; // 800D11B4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800D11B8
  c->r[6]=R32(c->r[1]+0x00000050u); // 800D11BC
  c->r[5]=R32(c->r[1]+0x00000054u); // 800D11C0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D11C4
  if (crb(c,0)) { goto L_800D120C; } // 800D11C8
  c->r[0]=c->r[6]+0xBF700000u; // 800D11CC
  c->r[0]=c->r[0]|c->r[5]; cr0(c,c->r[0]); // 800D11D0
  if (crb(c,2)) { goto L_800D11E8; } // 800D11D4
  {uint32_t ea=c->r[2]+0xFFFF9310u; c->f[1]=RF64(ea);} // 800D11D8
  c->f[0]=c->f[1]*c->f[31]; // 800D11DC
  c->f[1]=c->f[1]*c->f[0]; // 800D11E0
  goto L_800D13C0; // 800D11E4
L_800D11E8:;
  {uint32_t ea=c->r[2]+0xFFFF9318u; c->f[1]=RF64(ea);} // 800D11E8
  c->f[0]=c->f[0]-c->f[3]; // 800D11EC
  c->f[1]=c->f[1]+c->f[11]; // 800D11F0
  fcmp(c,0,c->f[1],c->f[0]); // 800D11F4
  if (!crb(c,1)) { goto L_800D1260; } // 800D11F8
  {uint32_t ea=c->r[2]+0xFFFF9310u; c->f[1]=RF64(ea);} // 800D11FC
  c->f[0]=c->f[1]*c->f[31]; // 800D1200
  c->f[1]=c->f[1]*c->f[0]; // 800D1204
  goto L_800D13C0; // 800D1208
L_800D120C:;
  c->r[3]=0u+0x40910000u; // 800D120C
  c->r[4]=rotl(c->r[6],0)&0x7FFFFFFFu; // 800D1210
  c->r[0]=c->r[3]+0xFFFFCC00u; // 800D1214
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D1218
  if (crb(c,0)) { goto L_800D1260; } // 800D121C
  c->r[3]=c->r[6]+0x3F6F0000u; // 800D1220
  c->r[0]=c->r[3]+0x00003400u; // 800D1224
  c->r[0]=c->r[0]|c->r[5]; cr0(c,c->r[0]); // 800D1228
  if (crb(c,2)) { goto L_800D1240; } // 800D122C
  {uint32_t ea=c->r[2]+0xFFFF9320u; c->f[1]=RF64(ea);} // 800D1230
  c->f[0]=c->f[1]*c->f[31]; // 800D1234
  c->f[1]=c->f[1]*c->f[0]; // 800D1238
  goto L_800D13C0; // 800D123C
L_800D1240:;
  c->f[0]=c->f[0]-c->f[3]; // 800D1240
  fcmp(c,0,c->f[11],c->f[0]); // 800D1244
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800D1248
  if (!crb(c,2)) { goto L_800D1260; } // 800D124C
  {uint32_t ea=c->r[2]+0xFFFF9320u; c->f[1]=RF64(ea);} // 800D1250
  c->f[0]=c->f[1]*c->f[31]; // 800D1254
  c->f[1]=c->f[1]*c->f[0]; // 800D1258
  goto L_800D13C0; // 800D125C
L_800D1260:;
  c->r[3]=rotl(c->r[6],0)&0x7FFFFFFFu; // 800D1260
  c->r[0]=0u+0x3FE00000u; // 800D1264
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D1268
  c->r[4]=rotl(c->r[6],12)&0x000007FFu; // 800D126C
  c->r[3]=0u+0x00000000u; // 800D1270
  if (!crb(c,1)) { goto L_800D12D4; } // 800D1274
  c->r[3]=0u+0x00100000u; // 800D1278
  c->r[0]=c->r[4]+0xFFFFFC02u; // 800D127C
  c->r[0]=sraw(c,c->r[3],(c->r[0])&63); // 800D1280
  {uint32_t ea=c->r[2]+0xFFFF9270u; c->f[0]=RF64(ea);} // 800D1284
  c->r[7]=c->r[6]+c->r[0]; // 800D1288
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800D128C
  c->r[0]=rotl(c->r[7],0)&0x7FFFFFFFu; // 800D1290
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800D1294
  c->r[4]=sraw(c,c->r[0],20); // 800D1298
  cmps(c,0,(int32_t)c->r[6],0); // 800D129C
  c->r[5]=c->r[4]+0xFFFFFC01u; // 800D12A0
  c->r[0]=rotl(c->r[7],0)&0x000FFFFFu; // 800D12A4
  c->r[4]=sraw(c,c->r[3],(c->r[5])&63); // 800D12A8
  c->r[4]=c->r[7]&~c->r[4]; // 800D12AC
  c->r[3]=c->r[0]|0x00100000u; // 800D12B0
  c->r[0]=addc(c,~c->r[5],0x00000014u,1); // 800D12B4
  W32(c->r[1]+0x00000028u,c->r[4]); // 800D12B8
  c->r[3]=sraw(c,c->r[3],(c->r[0])&63); // 800D12BC
  if (!crb(c,0)) { goto L_800D12C8; } // 800D12C0
  c->r[3]=0u-c->r[3]; // 800D12C4
L_800D12C8:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 800D12C8
  c->f[3]=c->f[3]-c->f[0]; // 800D12CC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 800D12D0
L_800D12D4:;
  c->f[1]=c->f[11]+c->f[3]; // 800D12D4
  c->r[0]=0u+0x00000000u; // 800D12D8
  {uint32_t ea=c->r[2]+0xFFFF9338u; c->f[0]=RF64(ea);} // 800D12DC
  c->r[4]=rotl(c->r[3],20)&0xFFF00000u; // 800D12E0
  {uint32_t ea=c->r[2]+0xFFFF9330u; c->f[8]=RF64(ea);} // 800D12E4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800D12E8
  {uint32_t ea=c->r[2]+0xFFFF9328u; c->f[10]=RF64(ea);} // 800D12EC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800D12F0
  {uint32_t ea=c->r[2]+0xFFFF9360u; c->f[6]=RF64(ea);} // 800D12F4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[9]=RF64(ea);} // 800D12F8
  {uint32_t ea=c->r[2]+0xFFFF9358u; c->f[1]=RF64(ea);} // 800D12FC
  c->f[2]=c->f[9]-c->f[3]; // 800D1300
  {uint32_t ea=c->r[2]+0xFFFF9350u; c->f[5]=RF64(ea);} // 800D1304
  c->f[7]=c->f[0]*c->f[9]; // 800D1308
  {uint32_t ea=c->r[2]+0xFFFF9348u; c->f[4]=RF64(ea);} // 800D130C
  {uint32_t ea=c->r[2]+0xFFFF9340u; c->f[3]=RF64(ea);} // 800D1310
  c->f[0]=c->f[11]-c->f[2]; // 800D1314
  c->f[10]=c->f[10]*c->f[9]; // 800D1318
  {uint32_t ea=c->r[2]+0xFFFF9368u; c->f[2]=RF64(ea);} // 800D131C
  c->f[8]=c->f[8]*c->f[0]; // 800D1320
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[0]=RF64(ea);} // 800D1324
  c->f[11]=c->f[8]+c->f[7]; // 800D1328
  c->f[9]=c->f[10]+c->f[11]; // 800D132C
  c->f[7]=c->f[9]*c->f[9]; // 800D1330
  c->f[8]=c->f[9]-c->f[10]; // 800D1334
  c->f[6]=c->f[6]*c->f[7]; // 800D1338
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[7]);} // 800D133C
  c->f[8]=c->f[11]-c->f[8]; // 800D1340
  c->f[6]=c->f[1]+c->f[6]; // 800D1344
  c->f[1]=c->f[9]*c->f[8]; // 800D1348
  c->f[6]=c->f[7]*c->f[6]; // 800D134C
  c->f[1]=c->f[8]+c->f[1]; // 800D1350
  c->f[5]=c->f[5]+c->f[6]; // 800D1354
  c->f[5]=c->f[7]*c->f[5]; // 800D1358
  c->f[4]=c->f[4]+c->f[5]; // 800D135C
  c->f[4]=c->f[7]*c->f[4]; // 800D1360
  c->f[3]=c->f[3]+c->f[4]; // 800D1364
  c->f[3]=c->f[7]*c->f[3]; // 800D1368
  c->f[4]=c->f[9]-c->f[3]; // 800D136C
  c->f[3]=c->f[9]*c->f[4]; // 800D1370
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[4]);} // 800D1374
  c->f[2]=c->f[4]-c->f[2]; // 800D1378
  c->f[2]=c->f[3]/c->f[2]; // 800D137C
  c->f[1]=c->f[2]-c->f[1]; // 800D1380
  c->f[1]=c->f[1]-c->f[9]; // 800D1384
  c->f[1]=c->f[0]-c->f[1]; // 800D1388
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 800D138C
  c->r[0]=R32(c->r[1]+0x00000050u); // 800D1390
  c->r[0]=c->r[0]+c->r[4]; // 800D1394
  c->r[0]=sraw(c,c->r[0],20); cr0(c,c->r[0]); // 800D1398
  if (crb(c,1)) { goto L_800D13AC; } // 800D139C
  c->lr=0x800D13A4u; f_800D0480(c); // 800D13A0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 800D13A4
  goto L_800D13B8; // 800D13A8
L_800D13AC:;
  c->r[0]=R32(c->r[1]+0x00000050u); // 800D13AC
  c->r[0]=c->r[0]+c->r[4]; // 800D13B0
  W32(c->r[1]+0x00000050u,c->r[0]); // 800D13B4
L_800D13B8:;
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 800D13B8
  c->f[1]=c->f[31]*c->f[0]; // 800D13BC
L_800D13C0:;
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800D13C0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800D13C4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 800D13C8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 800D13CC
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 800D13D0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 800D13D4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 800D13D8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 800D13DC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,27,ea,0,0);} // 800D13E0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[27]=RF64(ea);} // 800D13E4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,26,ea,0,0);} // 800D13E8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800D13EC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[26]=RF64(ea);} // 800D13F0
  c->lr=c->r[0]; // 800D13F4
  c->r[1]=c->r[1]+0x000000C0u; // 800D13F8
  return; // 800D13FC
}

// __ieee754_rem_pio2
void f_800D1400(Ctx* __restrict c) {
  trace_call(0x800D1400u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1400
  c->r[0]=c->lr; // 800D1404
  c->r[4]=0u+0x3FE90000u; // 800D1408
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D140C
  c->r[0]=c->r[4]+0x000021FBu; // 800D1410
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800D1414
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D1418
  c->r[31]=R32(c->r[1]+0x00000008u); // 800D141C
  W32(c->r[1]+0x00000058u,c->r[30]); // 800D1420
  c->r[30]=c->r[3]|c->r[3]; // 800D1424
  c->r[6]=rotl(c->r[31],0)&0x7FFFFFFFu; // 800D1428
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D142C
  if (crb(c,1)) { goto L_800D1448; } // 800D1430
  {uint32_t ea=c->r[2]+0xFFFF9378u; c->f[0]=RF64(ea);} // 800D1434
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 800D1438
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D143C
  c->r[3]=0u+0x00000000u; // 800D1440
  goto L_800D1780; // 800D1444
L_800D1448:;
  c->r[4]=0u+0x40030000u; // 800D1448
  c->r[0]=c->r[4]+0xFFFFD97Cu; // 800D144C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D1450
  if (!crb(c,0)) { goto L_800D1520; } // 800D1454
  cmps(c,0,(int32_t)c->r[31],0); // 800D1458
  if (!crb(c,1)) { goto L_800D14C0; } // 800D145C
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[0]=RF64(ea);} // 800D1460
  c->r[0]=c->r[6]+0xC0070000u; // 800D1464
  cmpu(c,0,c->r[0],0x000021FBu); // 800D1468
  c->f[3]=c->f[1]-c->f[0]; // 800D146C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[3]);} // 800D1470
  if (crb(c,2)) { goto L_800D1494; } // 800D1474
  {uint32_t ea=c->r[2]+0xFFFF9388u; c->f[2]=RF64(ea);} // 800D1478
  c->f[1]=c->f[3]-c->f[2]; // 800D147C
  c->f[0]=c->f[3]-c->f[1]; // 800D1480
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 800D1484
  c->f[0]=c->f[0]-c->f[2]; // 800D1488
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D148C
  goto L_800D14B8; // 800D1490
L_800D1494:;
  {uint32_t ea=c->r[2]+0xFFFF9390u; c->f[0]=RF64(ea);} // 800D1494
  {uint32_t ea=c->r[2]+0xFFFF9398u; c->f[2]=RF64(ea);} // 800D1498
  c->f[0]=c->f[3]-c->f[0]; // 800D149C
  c->f[1]=c->f[0]-c->f[2]; // 800D14A0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D14A4
  c->f[0]=c->f[0]-c->f[1]; // 800D14A8
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 800D14AC
  c->f[0]=c->f[0]-c->f[2]; // 800D14B0
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D14B4
L_800D14B8:;
  c->r[3]=0u+0x00000001u; // 800D14B8
  goto L_800D1780; // 800D14BC
L_800D14C0:;
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[0]=RF64(ea);} // 800D14C0
  c->r[0]=c->r[6]+0xC0070000u; // 800D14C4
  cmpu(c,0,c->r[0],0x000021FBu); // 800D14C8
  c->f[3]=c->f[0]+c->f[1]; // 800D14CC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[3]);} // 800D14D0
  if (crb(c,2)) { goto L_800D14F4; } // 800D14D4
  {uint32_t ea=c->r[2]+0xFFFF9388u; c->f[2]=RF64(ea);} // 800D14D8
  c->f[1]=c->f[2]+c->f[3]; // 800D14DC
  c->f[0]=c->f[3]-c->f[1]; // 800D14E0
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 800D14E4
  c->f[0]=c->f[2]+c->f[0]; // 800D14E8
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D14EC
  goto L_800D1518; // 800D14F0
L_800D14F4:;
  {uint32_t ea=c->r[2]+0xFFFF9390u; c->f[0]=RF64(ea);} // 800D14F4
  {uint32_t ea=c->r[2]+0xFFFF9398u; c->f[2]=RF64(ea);} // 800D14F8
  c->f[0]=c->f[3]+c->f[0]; // 800D14FC
  c->f[1]=c->f[2]+c->f[0]; // 800D1500
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D1504
  c->f[0]=c->f[0]-c->f[1]; // 800D1508
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 800D150C
  c->f[0]=c->f[2]+c->f[0]; // 800D1510
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D1514
L_800D1518:;
  c->r[3]=0u+0xFFFFFFFFu; // 800D1518
  goto L_800D1780; // 800D151C
L_800D1520:;
  c->r[4]=0u+0x41390000u; // 800D1520
  c->r[0]=c->r[4]+0x000021FBu; // 800D1524
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D1528
  if (crb(c,1)) { goto L_800D1674; } // 800D152C
  c->f[5]=std::fabs(c->f[1]); // 800D1530
  {uint32_t ea=c->r[2]+0xFFFF93A8u; c->f[0]=RF64(ea);} // 800D1534
  c->r[0]=0u+0x43300000u; // 800D1538
  {uint32_t ea=c->r[2]+0xFFFF93A0u; c->f[2]=RF64(ea);} // 800D153C
  W32(c->r[1]+0x00000038u,c->r[0]); // 800D1540
  c->f[4]=c->f[0]*c->f[5]; // 800D1544
  {uint32_t ea=c->r[2]+0xFFFF93C8u; c->f[3]=RF64(ea);} // 800D1548
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[1]=RF64(ea);} // 800D154C
  {uint32_t ea=c->r[2]+0xFFFF9388u; c->f[0]=RF64(ea);} // 800D1550
  c->f[2]=c->f[2]+c->f[4]; // 800D1554
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D1558
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800D155C
  c->r[5]=R32(c->r[1]+0x00000034u); // 800D1560
  c->r[0]=c->r[5]^0x80000000u; // 800D1564
  cmps(c,0,(int32_t)c->r[5],32); // 800D1568
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800D156C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 800D1570
  c->f[6]=c->f[2]-c->f[3]; // 800D1574
  c->f[1]=c->f[1]*c->f[6]; // 800D1578
  c->f[2]=c->f[0]*c->f[6]; // 800D157C
  c->f[4]=c->f[5]-c->f[1]; // 800D1580
  if (!crb(c,0)) { goto L_800D15B0; } // 800D1584
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800D1588
  c->r[4]=0u+0x801F0000u; // 800D158C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1590
  c->r[4]=c->r[4]+0x00004978u; // 800D1594
  c->r[0]=R32(c->r[4]+c->r[0]); // 800D1598
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D159C
  if (crb(c,2)) { goto L_800D15B0; } // 800D15A0
  c->f[0]=c->f[4]-c->f[2]; // 800D15A4
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D15A8
  goto L_800D163C; // 800D15AC
L_800D15B0:;
  c->f[0]=c->f[4]-c->f[2]; // 800D15B0
  c->r[4]=sraw(c,c->r[6],20); // 800D15B4
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D15B8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D15BC
  c->r[0]=rotl(c->r[0],12)&0x000007FFu; // 800D15C0
  c->r[0]=c->r[4]-c->r[0]; // 800D15C4
  cmps(c,0,(int32_t)c->r[0],16); // 800D15C8
  if (!crb(c,1)) { goto L_800D163C; } // 800D15CC
  {uint32_t ea=c->r[2]+0xFFFF9390u; c->f[1]=RF64(ea);} // 800D15D0
  c->f[2]=c->f[4]; // 800D15D4
  {uint32_t ea=c->r[2]+0xFFFF9398u; c->f[0]=RF64(ea);} // 800D15D8
  c->f[3]=c->f[1]*c->f[6]; // 800D15DC
  c->f[1]=c->f[0]*c->f[6]; // 800D15E0
  c->f[4]=c->f[4]-c->f[3]; // 800D15E4
  c->f[0]=c->f[2]-c->f[4]; // 800D15E8
  c->f[0]=c->f[0]-c->f[3]; // 800D15EC
  c->f[2]=c->f[1]-c->f[0]; // 800D15F0
  c->f[0]=c->f[4]-c->f[2]; // 800D15F4
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D15F8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D15FC
  c->r[0]=rotl(c->r[0],12)&0x000007FFu; // 800D1600
  c->r[0]=c->r[4]-c->r[0]; // 800D1604
  cmps(c,0,(int32_t)c->r[0],49); // 800D1608
  if (!crb(c,1)) { goto L_800D163C; } // 800D160C
  {uint32_t ea=c->r[2]+0xFFFF93B0u; c->f[1]=RF64(ea);} // 800D1610
  c->f[2]=c->f[4]; // 800D1614
  {uint32_t ea=c->r[2]+0xFFFF93B8u; c->f[0]=RF64(ea);} // 800D1618
  c->f[3]=c->f[1]*c->f[6]; // 800D161C
  c->f[1]=c->f[0]*c->f[6]; // 800D1620
  c->f[4]=c->f[4]-c->f[3]; // 800D1624
  c->f[0]=c->f[2]-c->f[4]; // 800D1628
  c->f[0]=c->f[0]-c->f[3]; // 800D162C
  c->f[2]=c->f[1]-c->f[0]; // 800D1630
  c->f[0]=c->f[4]-c->f[2]; // 800D1634
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D1638
L_800D163C:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800D163C
  cmps(c,0,(int32_t)c->r[31],0); // 800D1640
  c->f[0]=c->f[4]-c->f[1]; // 800D1644
  c->f[0]=c->f[0]-c->f[2]; // 800D1648
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D164C
  if (!crb(c,0)) { goto L_800D166C; } // 800D1650
  c->f[1]=-c->f[1]; // 800D1654
  c->f[0]=-c->f[0]; // 800D1658
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 800D165C
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D1660
  c->r[3]=0u-c->r[5]; // 800D1664
  goto L_800D1780; // 800D1668
L_800D166C:;
  c->r[3]=c->r[5]|c->r[5]; // 800D166C
  goto L_800D1780; // 800D1670
L_800D1674:;
  c->r[0]=0u+0x7FF00000u; // 800D1674
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D1678
  if (crb(c,0)) { goto L_800D1694; } // 800D167C
  c->f[0]=c->f[1]-c->f[1]; // 800D1680
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D1684
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D1688
  c->r[3]=0u+0x00000000u; // 800D168C
  goto L_800D1780; // 800D1690
L_800D1694:;
  c->r[3]=sraw(c,c->r[6],20); // 800D1694
  c->r[0]=0u+0x43300000u; // 800D1698
  c->r[5]=c->r[3]+0xFFFFFBEAu; // 800D169C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800D16A0
  c->r[3]=rotl(c->r[5],20)&0xFFF00000u; // 800D16A4
  W32(c->r[1]+0x00000030u,c->r[0]); // 800D16A8
  c->r[3]=c->r[6]-c->r[3]; // 800D16AC
  {uint32_t ea=c->r[2]+0xFFFF93C8u; c->f[5]=RF64(ea);} // 800D16B0
  W32(c->r[1]+0x00000014u,c->r[4]); // 800D16B4
  c->r[4]=c->r[1]+0x00000030u; // 800D16B8
  {uint32_t ea=c->r[2]+0xFFFF93C0u; c->f[4]=RF64(ea);} // 800D16BC
  c->r[6]=0u+0x00000003u; // 800D16C0
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D16C4
  {uint32_t ea=c->r[2]+0xFFFF9378u; c->f[1]=RF64(ea);} // 800D16C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800D16CC
  W32(c->r[1]+0x00000048u,c->r[0]); // 800D16D0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800D16D4
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 800D16D8
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800D16DC
  c->r[0]=c->r[0]^0x80000000u; // 800D16E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D16E4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800D16E8
  c->f[2]=c->f[0]-c->f[5]; // 800D16EC
  c->f[0]=c->f[3]-c->f[2]; // 800D16F0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[2]);} // 800D16F4
  c->f[3]=c->f[4]*c->f[0]; // 800D16F8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800D16FC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[0]);} // 800D1700
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D1704
  c->r[0]=c->r[0]^0x80000000u; // 800D1708
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800D170C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800D1710
  c->f[2]=c->f[0]-c->f[5]; // 800D1714
  c->f[0]=c->f[3]-c->f[2]; // 800D1718
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 800D171C
  c->f[0]=c->f[4]*c->f[0]; // 800D1720
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D1724
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800D1728
  goto L_800D1738; // 800D172C
L_800D1730:;
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 800D1730
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800D1734
L_800D1738:;
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D1738
  fcmp(c,0,c->f[1],c->f[0]); // 800D173C
  if (crb(c,2)) { IRQCHK(c); goto L_800D1730; } // 800D1740
  c->r[8]=0u+0x801F0000u; // 800D1744
  c->r[4]=c->r[30]|c->r[30]; // 800D1748
  c->r[3]=c->r[1]+0x00000018u; // 800D174C
  c->r[7]=0u+0x00000002u; // 800D1750
  c->r[8]=c->r[8]+0x00004870u; // 800D1754
  c->lr=0x800D175Cu; f_800D1914(c); // 800D1758
  cmps(c,0,(int32_t)c->r[31],0); // 800D175C
  if (!crb(c,0)) { goto L_800D1780; } // 800D1760
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=RF64(ea);} // 800D1764
  c->r[3]=0u-c->r[3]; // 800D1768
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=RF64(ea);} // 800D176C
  c->f[1]=-c->f[1]; // 800D1770
  c->f[0]=-c->f[0]; // 800D1774
  {uint32_t ea=c->r[30]+0x00000000u; WF64(ea,c->f[1]);} // 800D1778
  {uint32_t ea=c->r[30]+0x00000008u; WF64(ea,c->f[0]);} // 800D177C
L_800D1780:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D1780
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800D1784
  c->r[30]=R32(c->r[1]+0x00000058u); // 800D1788
  c->lr=c->r[0]; // 800D178C
  c->r[1]=c->r[1]+0x00000060u; // 800D1790
  return; // 800D1794
}

// fn_800D1798
void f_800D1798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1798
  c->r[0]=c->lr; // 800D179C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D17A0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800D17A4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800D17A8
  fcmp(c,0,c->f[1],c->f[2]); // 800D17AC
  c->f[30]=c->f[1]; // 800D17B0
  c->f[31]=c->f[2]; // 800D17B4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D17B8
  if (!crb(c,2)) { goto L_800D17C4; } // 800D17BC
  goto L_800D17EC; // 800D17C0
L_800D17C4:;
  fcmp(c,0,c->f[1],c->f[2]); // 800D17C4
  if (!crb(c,0)) { goto L_800D17D4; } // 800D17C8
  c->f[1]=c->f[31]; // 800D17CC
  goto L_800D17EC; // 800D17D0
L_800D17D4:;
  c->lr=0x800D17D8u; f_800C7E8C(c); // 800D17D4
  cmps(c,0,(int32_t)c->r[3],1); // 800D17D8
  if (!crb(c,2)) { goto L_800D17E8; } // 800D17DC
  c->f[1]=c->f[31]; // 800D17E0
  goto L_800D17EC; // 800D17E4
L_800D17E8:;
  c->f[1]=c->f[30]; // 800D17E8
L_800D17EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D17EC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800D17F0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800D17F4
  c->lr=c->r[0]; // 800D17F8
  c->r[1]=c->r[1]+0x00000020u; // 800D17FC
  return; // 800D1800
}

// __kernel_cos
void f_800D1804(Ctx* __restrict c) {
  trace_call(0x800D1804u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1804
  c->r[0]=0u+0x3E400000u; // 800D1808
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D180C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D1810
  c->r[4]=rotl(c->r[3],0)&0x7FFFFFFFu; // 800D1814
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D1818
  if (!crb(c,0)) { goto L_800D183C; } // 800D181C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D1820
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 800D1824
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800D1828
  cmps(c,0,(int32_t)c->r[0],0); // 800D182C
  if (!crb(c,2)) { goto L_800D183C; } // 800D1830
  {uint32_t ea=c->r[2]+0xFFFF93D0u; c->f[1]=RF64(ea);} // 800D1834
  goto L_800D190C; // 800D1838
L_800D183C:;
  c->f[8]=c->f[1]*c->f[1]; // 800D183C
  {uint32_t ea=c->r[2]+0xFFFF9400u; c->f[0]=RF64(ea);} // 800D1840
  c->r[3]=0u+0x3FD30000u; // 800D1844
  {uint32_t ea=c->r[2]+0xFFFF93F8u; c->f[6]=RF64(ea);} // 800D1848
  c->r[0]=c->r[3]+0x00003333u; // 800D184C
  {uint32_t ea=c->r[2]+0xFFFF93F0u; c->f[5]=RF64(ea);} // 800D1850
  c->f[7]=c->f[0]*c->f[8]; // 800D1854
  {uint32_t ea=c->r[2]+0xFFFF93E8u; c->f[4]=RF64(ea);} // 800D1858
  {uint32_t ea=c->r[2]+0xFFFF93E0u; c->f[3]=RF64(ea);} // 800D185C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D1860
  {uint32_t ea=c->r[2]+0xFFFF93D8u; c->f[0]=RF64(ea);} // 800D1864
  c->f[6]=c->f[6]+c->f[7]; // 800D1868
  c->f[6]=c->f[8]*c->f[6]; // 800D186C
  c->f[5]=c->f[5]+c->f[6]; // 800D1870
  c->f[5]=c->f[8]*c->f[5]; // 800D1874
  c->f[4]=c->f[4]+c->f[5]; // 800D1878
  c->f[4]=c->f[8]*c->f[4]; // 800D187C
  c->f[3]=c->f[3]+c->f[4]; // 800D1880
  c->f[3]=c->f[8]*c->f[3]; // 800D1884
  c->f[0]=c->f[0]+c->f[3]; // 800D1888
  c->f[3]=c->f[8]*c->f[0]; // 800D188C
  if (!crb(c,0)) { goto L_800D18B8; } // 800D1890
  c->f[3]=c->f[8]*c->f[3]; // 800D1894
  {uint32_t ea=c->r[2]+0xFFFF9408u; c->f[4]=RF64(ea);} // 800D1898
  {uint32_t ea=c->r[2]+0xFFFF93D0u; c->f[0]=RF64(ea);} // 800D189C
  c->f[1]=c->f[1]*c->f[2]; // 800D18A0
  c->f[2]=c->f[4]*c->f[8]; // 800D18A4
  c->f[1]=c->f[3]-c->f[1]; // 800D18A8
  c->f[1]=c->f[2]-c->f[1]; // 800D18AC
  c->f[1]=c->f[0]-c->f[1]; // 800D18B0
  goto L_800D190C; // 800D18B4
L_800D18B8:;
  c->r[0]=0u+0x3FE90000u; // 800D18B8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D18BC
  if (!crb(c,1)) { goto L_800D18D0; } // 800D18C0
  {uint32_t ea=c->r[2]+0xFFFF9410u; c->f[0]=RF64(ea);} // 800D18C4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D18C8
  goto L_800D18E0; // 800D18CC
L_800D18D0:;
  c->r[3]=c->r[4]+0xFFE00000u; // 800D18D0
  c->r[0]=0u+0x00000000u; // 800D18D4
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D18D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D18DC
L_800D18E0:;
  {uint32_t ea=c->r[2]+0xFFFF9408u; c->f[0]=RF64(ea);} // 800D18E0
  c->f[3]=c->f[8]*c->f[3]; // 800D18E4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[5]=RF64(ea);} // 800D18E8
  c->f[6]=c->f[0]*c->f[8]; // 800D18EC
  {uint32_t ea=c->r[2]+0xFFFF93D0u; c->f[4]=RF64(ea);} // 800D18F0
  c->f[0]=c->f[1]*c->f[2]; // 800D18F4
  c->f[2]=c->f[6]-c->f[5]; // 800D18F8
  c->f[1]=c->f[4]-c->f[5]; // 800D18FC
  c->f[0]=c->f[3]-c->f[0]; // 800D1900
  c->f[0]=c->f[2]-c->f[0]; // 800D1904
  c->f[1]=c->f[1]-c->f[0]; // 800D1908
L_800D190C:;
  c->r[1]=c->r[1]+0x00000020u; // 800D190C
  return; // 800D1910
}

// __kernel_rem_pio2
void f_800D1914(Ctx* __restrict c) {
  trace_call(0x800D1914u);
  {uint32_t ea=c->r[1]+0xFFFFFC90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1914
  c->r[0]=c->lr; // 800D1918
  W32(c->r[1]+0x00000374u,c->r[0]); // 800D191C
  c->r[11]=c->r[1]+0x00000370u; // 800D1920
  c->lr=0x800D1928u; { {uint32_t ea=c->r[11]+0xFFFFFFB8u; WF64(ea,c->f[23]);} {uint32_t ea=c->r[11]+0xFFFFFFC0u; WF64(ea,c->f[24]);} {uint32_t ea=c->r[11]+0xFFFFFFC8u; WF64(ea,c->f[25]);} {uint32_t ea=c->r[11]+0xFFFFFFD0u; WF64(ea,c->f[26]);} {uint32_t ea=c->r[11]+0xFFFFFFD8u; WF64(ea,c->f[27]);} {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} } // 800D1924
  {uint32_t ea=c->r[1]+0x000002E0u; for(int i=14;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D1928
  c->r[9]=0u+0x2AAB0000u; // 800D192C
  c->r[12]=0u+0x43300000u; // 800D1930
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 800D1934
  c->r[10]=0u+0x801F0000u; // 800D1938
  c->r[9]=c->r[9]+0xFFFFAAABu; // 800D193C
  c->r[11]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D1940
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[9]*(int64_t)(int32_t)c->r[0])>>32); // 800D1944
  c->r[10]=c->r[10]+0x000049F8u; // 800D1948
  c->r[17]=c->r[4]|c->r[4]; // 800D194C
  c->r[21]=R32(c->r[10]+c->r[11]); // 800D1950
  W32(c->r[1]+0x00000240u,c->r[12]); // 800D1954
  c->r[16]=c->r[3]|c->r[3]; // 800D1958
  c->r[0]=sraw(c,c->r[0],2); // 800D195C
  W32(c->r[1]+0x00000248u,c->r[12]); // 800D1960
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800D1964
  c->r[22]=c->r[6]+0xFFFFFFFFu; // 800D1968
  c->r[10]=c->r[0]+c->r[4]; cr0(c,c->r[10]); // 800D196C
  W32(c->r[1]+0x00000008u,c->r[7]); // 800D1970
  if (!crb(c,0)) { goto L_800D197C; } // 800D1974
  c->r[10]=0u+0x00000000u; // 800D1978
L_800D197C:;
  c->r[0]=c->r[10]+0x00000001u; // 800D197C
  c->r[9]=c->r[22]+c->r[21]; cr0(c,c->r[9]); // 800D1980
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800D1984
  c->r[7]=c->r[10]-c->r[22]; // 800D1988
  {uint32_t ea=c->r[2]+0xFFFF9450u; c->f[1]=RF64(ea);} // 800D198C
  c->r[4]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D1990
  c->r[19]=c->r[5]-c->r[6]; // 800D1994
  c->r[0]=c->r[9]+0x00000001u; // 800D1998
  c->r[4]=c->r[8]+c->r[4]; // 800D199C
  c->r[5]=c->r[1]+0x000001A0u; // 800D19A0
  c->ctr=c->r[0]; // 800D19A4
  if (crb(c,0)) { goto L_800D19E4; } // 800D19A8
L_800D19AC:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D19AC
  if (!crb(c,0)) { goto L_800D19BC; } // 800D19B0
  {uint32_t ea=c->r[2]+0xFFFF9418u; c->f[0]=RF64(ea);} // 800D19B4
  goto L_800D19D0; // 800D19B8
L_800D19BC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D19BC
  c->r[0]=c->r[0]^0x80000000u; // 800D19C0
  W32(c->r[1]+0x00000244u,c->r[0]); // 800D19C4
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 800D19C8
  c->f[0]=c->f[0]-c->f[1]; // 800D19CC
L_800D19D0:;
  {uint32_t ea=c->r[5]+0x00000000u; WF64(ea,c->f[0]);} // 800D19D0
  c->r[5]=c->r[5]+0x00000008u; // 800D19D4
  c->r[4]=c->r[4]+0x00000004u; // 800D19D8
  c->r[7]=c->r[7]+0x00000001u; // 800D19DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D19AC; } // 800D19E0
L_800D19E4:;
  c->r[0]=c->r[22]+0x00000001u; // 800D19E4
  c->r[5]=c->r[1]+0x00000060u; // 800D19E8
  c->r[25]=rotl(c->r[22],0)&0x80000000u; // 800D19EC
  c->r[12]=c->r[1]+0x000001A0u; // 800D19F0
  c->r[24]=rotl(c->r[0],0)&0x80000000u; // 800D19F4
  c->r[9]=0u+0x00000000u; // 800D19F8
  c->r[4]=0u+0x80000000u; // 800D19FC
  goto L_800D1BC8; // 800D1A00
L_800D1A04:;
  cmps(c,1,(int32_t)c->r[22],0); // 800D1A04
  {uint32_t ea=c->r[2]+0xFFFF9418u; c->f[6]=RF64(ea);} // 800D1A08
  c->r[7]=0u+0x00000000u; // 800D1A0C
  if (crb(c,4)) { goto L_800D1BBC; } // 800D1A10
  c->r[0]=c->r[22]+0x00000001u; // 800D1A14
  c->r[14]=c->r[22]+0xFFFFFFF8u; // 800D1A18
  cmps(c,0,(int32_t)c->r[0],8); // 800D1A1C
  if (!crb(c,1)) { goto L_800D1B78; } // 800D1A20
  c->r[6]=0u+0x00000000u; // 800D1A24
  c->r[11]=0u+0x00000000u; // 800D1A28
  if (crb(c,4)) { goto L_800D1A40; } // 800D1A2C
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 800D1A30
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 800D1A34
  if (crb(c,1)) { goto L_800D1A40; } // 800D1A38
  c->r[11]=0u+0x00000001u; // 800D1A3C
L_800D1A40:;
  cmps(c,0,(int32_t)c->r[11],0); // 800D1A40
  if (crb(c,2)) { goto L_800D1A6C; } // 800D1A44
  cmps(c,0,(int32_t)c->r[25],0); // 800D1A48
  c->r[0]=0u+0x00000001u; // 800D1A4C
  if (!crb(c,2)) { goto L_800D1A60; } // 800D1A50
  cmps(c,0,(int32_t)c->r[24],0); // 800D1A54
  if (crb(c,2)) { goto L_800D1A60; } // 800D1A58
  c->r[0]=0u+0x00000000u; // 800D1A5C
L_800D1A60:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D1A60
  if (crb(c,2)) { goto L_800D1A6C; } // 800D1A64
  c->r[6]=0u+0x00000001u; // 800D1A68
L_800D1A6C:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D1A6C
  if (crb(c,2)) { goto L_800D1B78; } // 800D1A70
  c->r[11]=c->r[14]+0x00000008u; // 800D1A74
  c->r[6]=c->r[16]|c->r[16]; // 800D1A78
  c->r[11]=rotl(c->r[11],29)&0x1FFFFFFFu; // 800D1A7C
  c->r[0]=c->r[22]+c->r[9]; // 800D1A80
  c->ctr=c->r[11]; // 800D1A84
  cmps(c,0,(int32_t)c->r[14],0); // 800D1A88
  if (crb(c,0)) { goto L_800D1B78; } // 800D1A8C
L_800D1A90:;
  c->r[11]=c->r[0]-c->r[7]; // 800D1A90
  c->r[14]=c->r[7]+0x00000001u; // 800D1A94
  c->r[15]=rotl(c->r[11],3)&0xFFFFFFF8u; // 800D1A98
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=RF64(ea);} // 800D1A9C
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 800D1AA0
  c->r[14]=c->r[0]-c->r[14]; // 800D1AA4
  c->r[15]=rotl(c->r[14],3)&0xFFFFFFF8u; // 800D1AA8
  c->r[11]=c->r[7]+0x00000002u; // 800D1AAC
  c->f[2]=c->f[1]*c->f[0]; // 800D1AB0
  c->r[14]=c->r[0]-c->r[11]; // 800D1AB4
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 800D1AB8
  c->r[15]=rotl(c->r[14],3)&0xFFFFFFF8u; // 800D1ABC
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=RF64(ea);} // 800D1AC0
  c->r[11]=c->r[7]+0x00000003u; // 800D1AC4
  c->f[3]=c->f[1]*c->f[0]; // 800D1AC8
  c->r[14]=c->r[0]-c->r[11]; // 800D1ACC
  {uint32_t ea=c->r[6]+0x00000010u; c->f[1]=RF64(ea);} // 800D1AD0
  c->r[14]=rotl(c->r[14],3)&0xFFFFFFF8u; // 800D1AD4
  c->f[6]=c->f[6]+c->f[2]; // 800D1AD8
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 800D1ADC
  c->f[2]=c->f[1]*c->f[0]; // 800D1AE0
  c->r[11]=c->r[7]+0x00000004u; // 800D1AE4
  {uint32_t ea=c->r[12]+c->r[14]; c->f[0]=RF64(ea);} // 800D1AE8
  c->r[11]=c->r[0]-c->r[11]; // 800D1AEC
  c->f[6]=c->f[6]+c->f[3]; // 800D1AF0
  {uint32_t ea=c->r[6]+0x00000018u; c->f[1]=RF64(ea);} // 800D1AF4
  c->r[18]=rotl(c->r[11],3)&0xFFFFFFF8u; // 800D1AF8
  c->f[1]=c->f[1]*c->f[0]; // 800D1AFC
  c->r[11]=c->r[7]+0x00000005u; // 800D1B00
  c->r[14]=c->r[7]+0x00000006u; // 800D1B04
  c->f[6]=c->f[6]+c->f[2]; // 800D1B08
  c->r[11]=c->r[0]-c->r[11]; // 800D1B0C
  c->r[15]=rotl(c->r[11],3)&0xFFFFFFF8u; // 800D1B10
  c->r[11]=c->r[7]+0x00000007u; // 800D1B14
  c->f[6]=c->f[6]+c->f[1]; // 800D1B18
  c->r[14]=c->r[0]-c->r[14]; // 800D1B1C
  {uint32_t ea=c->r[6]+0x00000020u; c->f[2]=RF64(ea);} // 800D1B20
  {uint32_t ea=c->r[12]+c->r[18]; c->f[0]=RF64(ea);} // 800D1B24
  c->r[11]=c->r[0]-c->r[11]; // 800D1B28
  {uint32_t ea=c->r[6]+0x00000028u; c->f[1]=RF64(ea);} // 800D1B2C
  c->f[5]=c->f[2]*c->f[0]; // 800D1B30
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 800D1B34
  c->r[14]=rotl(c->r[14],3)&0xFFFFFFF8u; // 800D1B38
  {uint32_t ea=c->r[6]+0x00000030u; c->f[3]=RF64(ea);} // 800D1B3C
  c->f[4]=c->f[1]*c->f[0]; // 800D1B40
  {uint32_t ea=c->r[12]+c->r[14]; c->f[2]=RF64(ea);} // 800D1B44
  c->f[6]=c->f[6]+c->f[5]; // 800D1B48
  c->r[11]=rotl(c->r[11],3)&0xFFFFFFF8u; // 800D1B4C
  {uint32_t ea=c->r[6]+0x00000038u; c->f[1]=RF64(ea);} // 800D1B50
  c->f[2]=c->f[3]*c->f[2]; // 800D1B54
  {uint32_t ea=c->r[12]+c->r[11]; c->f[0]=RF64(ea);} // 800D1B58
  c->r[7]=c->r[7]+0x00000008u; // 800D1B5C
  c->f[6]=c->f[6]+c->f[4]; // 800D1B60
  c->r[6]=c->r[6]+0x00000040u; // 800D1B64
  c->f[0]=c->f[1]*c->f[0]; // 800D1B68
  c->f[6]=c->f[6]+c->f[2]; // 800D1B6C
  c->f[6]=c->f[6]+c->f[0]; // 800D1B70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1A90; } // 800D1B74
L_800D1B78:;
  c->r[0]=c->r[22]+0x00000001u; // 800D1B78
  c->r[6]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D1B7C
  c->r[0]=c->r[0]-c->r[7]; // 800D1B80
  c->r[11]=c->r[22]+c->r[9]; // 800D1B84
  c->r[6]=c->r[3]+c->r[6]; // 800D1B88
  c->ctr=c->r[0]; // 800D1B8C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[22]); // 800D1B90
  if (crb(c,1)) { goto L_800D1BBC; } // 800D1B94
L_800D1B98:;
  c->r[0]=c->r[11]-c->r[7]; // 800D1B98
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=RF64(ea);} // 800D1B9C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D1BA0
  c->r[6]=c->r[6]+0x00000008u; // 800D1BA4
  {uint32_t ea=c->r[12]+c->r[0]; c->f[0]=RF64(ea);} // 800D1BA8
  c->r[7]=c->r[7]+0x00000001u; // 800D1BAC
  c->f[0]=c->f[1]*c->f[0]; // 800D1BB0
  c->f[6]=c->f[6]+c->f[0]; // 800D1BB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1B98; } // 800D1BB8
L_800D1BBC:;
  {uint32_t ea=c->r[5]+0x00000000u; WF64(ea,c->f[6]);} // 800D1BBC
  c->r[5]=c->r[5]+0x00000008u; // 800D1BC0
  c->r[9]=c->r[9]+0x00000001u; // 800D1BC4
L_800D1BC8:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[21]); // 800D1BC8
  if (!crb(c,1)) { IRQCHK(c); goto L_800D1A04; } // 800D1BCC
  c->r[28]=addc(c,~c->r[19],0x00000018u,1); // 800D1BD0
  c->r[5]=0u-c->r[21]; // 800D1BD4
  c->r[0]=addc(c,~c->r[19],0x00000017u,1); // 800D1BD8
  c->r[4]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800D1BDC
  c->r[3]=rotl(c->r[22],3)&0xFFFFFFF8u; // 800D1BE0
  c->r[26]=c->r[1]+0x000001A0u; // 800D1BE4
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[24]=RF64(ea);} // 800D1BE8
  c->r[23]=c->r[21]|c->r[21]; // 800D1BEC
  {uint32_t ea=c->r[2]+0xFFFF9450u; c->f[25]=RF64(ea);} // 800D1BF0
  c->r[14]=rotl(c->r[5],0)&0x80000000u; // 800D1BF4
  {uint32_t ea=c->r[2]+0xFFFF9428u; c->f[26]=RF64(ea);} // 800D1BF8
  c->r[27]=c->r[8]+c->r[4]; // 800D1BFC
  W32(c->r[1]+0x000002D0u,c->r[0]); // 800D1C00
  c->r[26]=c->r[26]+c->r[3]; // 800D1C04
  {uint32_t ea=c->r[2]+0xFFFF9438u; c->f[27]=RF64(ea);} // 800D1C08
  c->r[29]=c->r[1]+0x00000010u; // 800D1C0C
  {uint32_t ea=c->r[2]+0xFFFF9430u; c->f[28]=RF64(ea);} // 800D1C10
  c->r[15]=c->r[1]+0x000001A0u; // 800D1C14
  {uint32_t ea=c->r[2]+0xFFFF9440u; c->f[29]=RF64(ea);} // 800D1C18
  c->r[30]=0u+0x01000000u; // 800D1C1C
  {uint32_t ea=c->r[2]+0xFFFF9448u; c->f[30]=RF64(ea);} // 800D1C20
  c->r[31]=0u+0x80000000u; // 800D1C24
  {uint32_t ea=c->r[2]+0xFFFF9418u; c->f[31]=RF64(ea);} // 800D1C28
L_800D1C2C:;
  c->r[0]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D1C2C
  cmps(c,1,(int32_t)c->r[23],0); // 800D1C30
  c->r[3]=c->r[1]+0x00000060u; // 800D1C34
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea); c->r[3]=ea;} // 800D1C38
  c->r[4]=c->r[23]|c->r[23]; // 800D1C3C
  c->r[5]=0u+0x00000000u; // 800D1C40
  c->r[6]=0u+0x00000000u; // 800D1C44
  if (!crb(c,5)) { goto L_800D1F40; } // 800D1C48
  cmps(c,0,(int32_t)c->r[23],8); // 800D1C4C
  if (!crb(c,1)) { goto L_800D1ED0; } // 800D1C50
  c->r[7]=0u+0x00000000u; // 800D1C54
  if (crb(c,4)) { goto L_800D1C6C; } // 800D1C58
  c->r[0]=c->r[31]+0x00000001u; // 800D1C5C
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 800D1C60
  if (crb(c,0)) { goto L_800D1C6C; } // 800D1C64
  c->r[7]=0u+0x00000001u; // 800D1C68
L_800D1C6C:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D1C6C
  if (crb(c,2)) { goto L_800D1ED0; } // 800D1C70
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D1C74
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D1C78
  c->ctr=c->r[0]; // 800D1C7C
  cmps(c,0,(int32_t)c->r[23],8); // 800D1C80
  if (!crb(c,1)) { goto L_800D1ED0; } // 800D1C84
L_800D1C88:;
  c->f[0]=c->f[24]*c->f[1]; // 800D1C88
  c->r[0]=c->r[5]+0x00000001u; // 800D1C8C
  c->r[9]=c->r[5]+0x00000002u; // 800D1C90
  c->r[8]=c->r[5]+0x00000003u; // 800D1C94
  c->r[7]=c->r[5]+0x00000004u; // 800D1C98
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[4]=RF64(ea);} // 800D1C9C
  c->f[5]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D1CA0
  {uint32_t ea=c->r[3]+0xFFFFFFF0u; c->f[3]=RF64(ea);} // 800D1CA4
  {uint32_t ea=c->r[3]+0xFFFFFFE8u; c->f[2]=RF64(ea);} // 800D1CA8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1CAC
  {uint32_t ea=c->r[3]+0xFFFFFFE0u; c->f[0]=RF64(ea);} // 800D1CB0
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800D1CB4
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[5]);} // 800D1CB8
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D1CBC
  c->r[7]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D1CC0
  c->r[10]=R32(c->r[1]+0x00000254u); // 800D1CC4
  c->r[10]=c->r[10]^0x80000000u; // 800D1CC8
  W32(c->r[1]+0x0000024Cu,c->r[10]); // 800D1CCC
  {uint32_t ea=c->r[1]+0x00000248u; c->f[5]=RF64(ea);} // 800D1CD0
  c->f[5]=c->f[5]-c->f[25]; // 800D1CD4
  c->f[6]=c->f[5]+c->f[4]; // 800D1CD8
  c->f[5]=c->f[26]*c->f[5]; // 800D1CDC
  c->f[4]=c->f[24]*c->f[6]; // 800D1CE0
  c->f[5]=c->f[1]-c->f[5]; // 800D1CE4
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800D1CE8
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[5],true)); // 800D1CEC
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[1]);} // 800D1CF0
  c->r[10]=R32(c->r[1]+0x00000264u); // 800D1CF4
  {uint32_t ea=c->r[1]+0x00000258u; WF64(ea,c->f[4]);} // 800D1CF8
  c->r[10]=c->r[10]^0x80000000u; // 800D1CFC
  W32(c->r[1]+0x00000244u,c->r[10]); // 800D1D00
  c->r[10]=R32(c->r[1]+0x0000025Cu); // 800D1D04
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=RF64(ea);} // 800D1D08
  W32(c->r[29]+c->r[6],c->r[10]); // 800D1D0C
  c->f[1]=c->f[1]-c->f[25]; // 800D1D10
  c->f[4]=c->f[1]+c->f[3]; // 800D1D14
  c->f[3]=c->f[26]*c->f[1]; // 800D1D18
  c->f[1]=c->f[24]*c->f[4]; // 800D1D1C
  c->f[3]=c->f[6]-c->f[3]; // 800D1D20
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D1D24
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800D1D28
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[1]);} // 800D1D2C
  c->r[10]=R32(c->r[1]+0x00000274u); // 800D1D30
  {uint32_t ea=c->r[1]+0x00000268u; WF64(ea,c->f[3]);} // 800D1D34
  c->r[10]=c->r[10]^0x80000000u; // 800D1D38
  W32(c->r[1]+0x0000024Cu,c->r[10]); // 800D1D3C
  c->r[10]=R32(c->r[1]+0x0000026Cu); // 800D1D40
  {uint32_t ea=c->r[1]+0x00000248u; c->f[1]=RF64(ea);} // 800D1D44
  W32(c->r[29]+c->r[0],c->r[10]); // 800D1D48
  c->f[1]=c->f[1]-c->f[25]; // 800D1D4C
  c->f[3]=c->f[1]+c->f[2]; // 800D1D50
  c->f[2]=c->f[26]*c->f[1]; // 800D1D54
  c->f[1]=c->f[24]*c->f[3]; // 800D1D58
  c->f[2]=c->f[4]-c->f[2]; // 800D1D5C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D1D60
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D1D64
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[1]);} // 800D1D68
  c->r[0]=R32(c->r[1]+0x00000284u); // 800D1D6C
  {uint32_t ea=c->r[1]+0x00000278u; WF64(ea,c->f[2]);} // 800D1D70
  c->r[0]=c->r[0]^0x80000000u; // 800D1D74
  W32(c->r[1]+0x00000244u,c->r[0]); // 800D1D78
  c->r[0]=R32(c->r[1]+0x0000027Cu); // 800D1D7C
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=RF64(ea);} // 800D1D80
  W32(c->r[29]+c->r[9],c->r[0]); // 800D1D84
  c->f[1]=c->f[1]-c->f[25]; // 800D1D88
  c->f[2]=c->f[1]+c->f[0]; // 800D1D8C
  c->f[1]=c->f[26]*c->f[1]; // 800D1D90
  c->f[0]=c->f[24]*c->f[2]; // 800D1D94
  c->f[1]=c->f[3]-c->f[1]; // 800D1D98
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D1D9C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D1DA0
  {uint32_t ea=c->r[1]+0x00000290u; WF64(ea,c->f[0]);} // 800D1DA4
  c->r[0]=R32(c->r[1]+0x00000294u); // 800D1DA8
  {uint32_t ea=c->r[1]+0x00000288u; WF64(ea,c->f[1]);} // 800D1DAC
  c->r[0]=c->r[0]^0x80000000u; // 800D1DB0
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 800D1DB4
  c->r[0]=R32(c->r[1]+0x0000028Cu); // 800D1DB8
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 800D1DBC
  W32(c->r[29]+c->r[8],c->r[0]); // 800D1DC0
  c->f[1]=c->f[0]-c->f[25]; // 800D1DC4
  c->f[0]=c->f[26]*c->f[1]; // 800D1DC8
  c->f[0]=c->f[2]-c->f[0]; // 800D1DCC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D1DD0
  {uint32_t ea=c->r[1]+0x00000298u; WF64(ea,c->f[0]);} // 800D1DD4
  c->r[0]=R32(c->r[1]+0x0000029Cu); // 800D1DD8
  W32(c->r[29]+c->r[7],c->r[0]); // 800D1DDC
  {uint32_t ea=c->r[3]+0xFFFFFFD8u; c->f[0]=RF64(ea);} // 800D1DE0
  c->r[8]=c->r[5]+0x00000005u; // 800D1DE4
  c->r[0]=c->r[5]+0x00000007u; // 800D1DE8
  c->r[7]=c->r[5]+0x00000006u; // 800D1DEC
  c->f[5]=c->f[1]+c->f[0]; // 800D1DF0
  c->r[9]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D1DF4
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D1DF8
  {uint32_t ea=c->r[3]+0xFFFFFFD0u; c->f[2]=RF64(ea);} // 800D1DFC
  {uint32_t ea=c->r[3]+0xFFFFFFC8u; c->f[1]=RF64(ea);} // 800D1E00
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D1E04
  c->f[3]=c->f[24]*c->f[5]; // 800D1E08
  {uint32_t ea=c->r[3]+0xFFFFFFC0u; c->f[0]=RF64(ea); c->r[3]=ea;} // 800D1E0C
  c->r[5]=c->r[5]+0x00000008u; // 800D1E10
  c->r[6]=c->r[6]+0x00000020u; // 800D1E14
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 800D1E18
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800D1E1C
  {uint32_t ea=c->r[1]+0x000002A0u; WF64(ea,c->f[3]);} // 800D1E20
  c->r[7]=R32(c->r[1]+0x000002A4u); // 800D1E24
  c->r[7]=c->r[7]^0x80000000u; // 800D1E28
  W32(c->r[1]+0x00000244u,c->r[7]); // 800D1E2C
  {uint32_t ea=c->r[1]+0x00000240u; c->f[3]=RF64(ea);} // 800D1E30
  c->f[3]=c->f[3]-c->f[25]; // 800D1E34
  c->f[4]=c->f[3]+c->f[2]; // 800D1E38
  c->f[3]=c->f[26]*c->f[3]; // 800D1E3C
  c->f[2]=c->f[24]*c->f[4]; // 800D1E40
  c->f[3]=c->f[5]-c->f[3]; // 800D1E44
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D1E48
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800D1E4C
  {uint32_t ea=c->r[1]+0x000002B0u; WF64(ea,c->f[2]);} // 800D1E50
  c->r[7]=R32(c->r[1]+0x000002B4u); // 800D1E54
  {uint32_t ea=c->r[1]+0x000002A8u; WF64(ea,c->f[3]);} // 800D1E58
  c->r[7]=c->r[7]^0x80000000u; // 800D1E5C
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 800D1E60
  c->r[7]=R32(c->r[1]+0x000002ACu); // 800D1E64
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=RF64(ea);} // 800D1E68
  W32(c->r[29]+c->r[9],c->r[7]); // 800D1E6C
  c->f[2]=c->f[2]-c->f[25]; // 800D1E70
  c->f[3]=c->f[2]+c->f[1]; // 800D1E74
  c->f[2]=c->f[26]*c->f[2]; // 800D1E78
  c->f[1]=c->f[24]*c->f[3]; // 800D1E7C
  c->f[2]=c->f[4]-c->f[2]; // 800D1E80
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D1E84
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D1E88
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[1]);} // 800D1E8C
  c->r[7]=R32(c->r[1]+0x000002C4u); // 800D1E90
  {uint32_t ea=c->r[1]+0x000002B8u; WF64(ea,c->f[2]);} // 800D1E94
  c->r[7]=c->r[7]^0x80000000u; // 800D1E98
  W32(c->r[1]+0x00000244u,c->r[7]); // 800D1E9C
  c->r[7]=R32(c->r[1]+0x000002BCu); // 800D1EA0
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=RF64(ea);} // 800D1EA4
  W32(c->r[29]+c->r[8],c->r[7]); // 800D1EA8
  c->f[1]=c->f[1]-c->f[25]; // 800D1EAC
  c->f[2]=c->f[26]*c->f[1]; // 800D1EB0
  c->f[1]=c->f[1]+c->f[0]; // 800D1EB4
  c->f[0]=c->f[3]-c->f[2]; // 800D1EB8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D1EBC
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 800D1EC0
  c->r[7]=R32(c->r[1]+0x000002CCu); // 800D1EC4
  W32(c->r[29]+c->r[0],c->r[7]); // 800D1EC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1C88; } // 800D1ECC
L_800D1ED0:;
  c->r[3]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800D1ED0
  c->r[5]=c->r[1]+0x00000010u; // 800D1ED4
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D1ED8
  c->r[6]=c->r[1]+0x00000060u; // 800D1EDC
  c->r[5]=c->r[5]+c->r[3]; // 800D1EE0
  c->r[6]=c->r[6]+c->r[0]; // 800D1EE4
  c->ctr=c->r[4]; // 800D1EE8
  cmps(c,0,(int32_t)c->r[4],0); // 800D1EEC
  if (!crb(c,1)) { goto L_800D1F40; } // 800D1EF0
L_800D1EF4:;
  c->f[2]=c->f[24]*c->f[1]; // 800D1EF4
  {uint32_t ea=c->r[6]+0xFFFFFFF8u; c->f[0]=RF64(ea); c->r[6]=ea;} // 800D1EF8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800D1EFC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D1F00
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[2]);} // 800D1F04
  c->r[0]=R32(c->r[1]+0x000002CCu); // 800D1F08
  c->r[0]=c->r[0]^0x80000000u; // 800D1F0C
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 800D1F10
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=RF64(ea);} // 800D1F14
  c->f[3]=c->f[2]-c->f[25]; // 800D1F18
  c->f[2]=c->f[26]*c->f[3]; // 800D1F1C
  c->f[2]=c->f[1]-c->f[2]; // 800D1F20
  c->f[1]=c->f[3]+c->f[0]; // 800D1F24
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D1F28
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[0]);} // 800D1F2C
  c->r[0]=R32(c->r[1]+0x000002C4u); // 800D1F30
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D1F34
  c->r[5]=c->r[5]+0x00000004u; // 800D1F38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1EF4; } // 800D1F3C
L_800D1F40:;
  c->r[3]=c->r[19]|c->r[19]; // 800D1F40
  c->lr=0x800D1F48u; f_800D0480(c); // 800D1F44
  c->f[23]=c->f[1]; // 800D1F48
  c->f[1]=c->f[27]*c->f[1]; // 800D1F4C
  c->lr=0x800D1F54u; f_800D3420(c); // 800D1F50
  c->f[0]=c->f[28]*c->f[1]; // 800D1F54
  cmps(c,0,(int32_t)c->r[19],0); // 800D1F58
  c->r[18]=0u+0x00000000u; // 800D1F5C
  c->f[23]=c->f[23]-c->f[0]; // 800D1F60
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[23],true)); // 800D1F64
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 800D1F68
  c->r[20]=R32(c->r[1]+0x000002CCu); // 800D1F6C
  c->r[0]=c->r[20]^0x80000000u; // 800D1F70
  W32(c->r[1]+0x00000244u,c->r[0]); // 800D1F74
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 800D1F78
  c->f[0]=c->f[0]-c->f[25]; // 800D1F7C
  c->f[23]=c->f[23]-c->f[0]; // 800D1F80
  if (!crb(c,1)) { goto L_800D1FB4; } // 800D1F84
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D1F88
  c->r[4]=c->r[29]+c->r[0]; // 800D1F8C
  c->r[3]=R32(c->r[4]+0xFFFFFFFCu); // 800D1F90
  c->r[5]=sraw(c,c->r[3],(c->r[28])&63); // 800D1F94
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[5]<<((c->r[28])&31)); // 800D1F98
  c->r[3]=c->r[3]-c->r[0]; // 800D1F9C
  c->r[0]=R32(c->r[1]+0x000002D0u); // 800D1FA0
  W32(c->r[4]+0xFFFFFFFCu,c->r[3]); // 800D1FA4
  c->r[20]=c->r[20]+c->r[5]; // 800D1FA8
  c->r[18]=sraw(c,c->r[3],(c->r[0])&63); // 800D1FAC
  goto L_800D1FDC; // 800D1FB0
L_800D1FB4:;
  if (!crb(c,2)) { goto L_800D1FCC; } // 800D1FB4
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D1FB8
  c->r[3]=c->r[29]+c->r[0]; // 800D1FBC
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 800D1FC0
  c->r[18]=sraw(c,c->r[0],23); // 800D1FC4
  goto L_800D1FDC; // 800D1FC8
L_800D1FCC:;
  fcmp(c,0,c->f[23],c->f[29]); // 800D1FCC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D1FD0
  if (!crb(c,2)) { goto L_800D1FDC; } // 800D1FD4
  c->r[18]=0u+0x00000002u; // 800D1FD8
L_800D1FDC:;
  cmps(c,0,(int32_t)c->r[18],0); // 800D1FDC
  if (!crb(c,1)) { goto L_800D20A4; } // 800D1FE0
  c->r[5]=c->r[1]+0x00000010u; // 800D1FE4
  c->r[4]=c->r[30]+0xFFFFFFFFu; // 800D1FE8
  c->r[0]=0u+0x00000000u; // 800D1FEC
  c->ctr=c->r[23]; // 800D1FF0
  cmps(c,0,(int32_t)c->r[23],0); // 800D1FF4
  c->r[20]=c->r[20]+0x00000001u; // 800D1FF8
  if (!crb(c,1)) { goto L_800D2034; } // 800D1FFC
L_800D2000:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D2000
  c->r[3]=R32(c->r[5]+0x00000000u); // 800D2004
  if (!crb(c,2)) { goto L_800D2024; } // 800D2008
  cmps(c,0,(int32_t)c->r[3],0); // 800D200C
  if (crb(c,2)) { goto L_800D202C; } // 800D2010
  c->r[3]=c->r[30]-c->r[3]; // 800D2014
  c->r[0]=0u+0x00000001u; // 800D2018
  W32(c->r[5]+0x00000000u,c->r[3]); // 800D201C
  goto L_800D202C; // 800D2020
L_800D2024:;
  c->r[3]=c->r[4]-c->r[3]; // 800D2024
  W32(c->r[5]+0x00000000u,c->r[3]); // 800D2028
L_800D202C:;
  c->r[5]=c->r[5]+0x00000004u; // 800D202C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2000; } // 800D2030
L_800D2034:;
  cmps(c,0,(int32_t)c->r[19],0); // 800D2034
  if (!crb(c,1)) { goto L_800D2080; } // 800D2038
  cmps(c,0,(int32_t)c->r[19],2); // 800D203C
  if (crb(c,2)) { goto L_800D206C; } // 800D2040
  if (!crb(c,0)) { goto L_800D2080; } // 800D2044
  cmps(c,0,(int32_t)c->r[19],1); // 800D2048
  if (!crb(c,0)) { goto L_800D2054; } // 800D204C
  goto L_800D2080; // 800D2050
L_800D2054:;
  c->r[3]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D2054
  c->r[4]=c->r[29]+c->r[3]; // 800D2058
  c->r[3]=R32(c->r[4]+0xFFFFFFFCu); // 800D205C
  c->r[3]=rotl(c->r[3],0)&0x007FFFFFu; // 800D2060
  W32(c->r[4]+0xFFFFFFFCu,c->r[3]); // 800D2064
  goto L_800D2080; // 800D2068
L_800D206C:;
  c->r[3]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D206C
  c->r[4]=c->r[29]+c->r[3]; // 800D2070
  c->r[3]=R32(c->r[4]+0xFFFFFFFCu); // 800D2074
  c->r[3]=rotl(c->r[3],0)&0x003FFFFFu; // 800D2078
  W32(c->r[4]+0xFFFFFFFCu,c->r[3]); // 800D207C
L_800D2080:;
  cmps(c,0,(int32_t)c->r[18],2); // 800D2080
  if (!crb(c,2)) { goto L_800D20A4; } // 800D2084
  cmps(c,0,(int32_t)c->r[0],0); // 800D2088
  c->f[23]=c->f[30]-c->f[23]; // 800D208C
  if (crb(c,2)) { goto L_800D20A4; } // 800D2090
  c->f[1]=c->f[30]; // 800D2094
  c->r[3]=c->r[19]|c->r[19]; // 800D2098
  c->lr=0x800D20A0u; f_800D0480(c); // 800D209C
  c->f[23]=c->f[23]-c->f[1]; // 800D20A0
L_800D20A4:;
  fcmp(c,0,c->f[31],c->f[23]); // 800D20A4
  if (!crb(c,2)) { goto L_800D247C; } // 800D20A8
  c->r[10]=c->r[23]+0xFFFFFFFFu; // 800D20AC
  c->r[9]=0u+0x00000000u; // 800D20B0
  cmps(c,1,(int32_t)c->r[10],(int32_t)c->r[21]); // 800D20B4
  if (crb(c,4)) { goto L_800D223C; } // 800D20B8
  c->r[7]=c->r[10]-c->r[21]; // 800D20BC
  c->r[0]=c->r[21]+0x00000008u; // 800D20C0
  c->r[8]=c->r[7]+0x00000001u; // 800D20C4
  cmps(c,0,(int32_t)c->r[8],8); // 800D20C8
  if (!crb(c,1)) { goto L_800D2208; } // 800D20CC
  c->r[3]=0u+0x00000000u; // 800D20D0
  c->r[4]=0u+0x00000000u; // 800D20D4
  c->r[5]=0u+0x00000000u; // 800D20D8
  c->r[6]=0u+0x00000000u; // 800D20DC
  c->r[12]=0u+0x00000000u; // 800D20E0
  if (crb(c,4)) { goto L_800D20F8; } // 800D20E4
  c->r[11]=c->r[31]+0x00000001u; // 800D20E8
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[11]); // 800D20EC
  if (crb(c,0)) { goto L_800D20F8; } // 800D20F0
  c->r[12]=0u+0x00000001u; // 800D20F4
L_800D20F8:;
  cmps(c,0,(int32_t)c->r[12],0); // 800D20F8
  if (crb(c,2)) { goto L_800D2114; } // 800D20FC
  c->r[12]=c->r[23]+0xFFFFFFFFu; // 800D2100
  c->r[11]=c->r[31]+0x00000001u; // 800D2104
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[11]); // 800D2108
  if (crb(c,0)) { goto L_800D2114; } // 800D210C
  c->r[6]=0u+0x00000001u; // 800D2110
L_800D2114:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D2114
  if (crb(c,2)) { goto L_800D212C; } // 800D2118
  c->r[6]=c->r[21]+0x80000000u; // 800D211C
  cmpu(c,0,c->r[6],0x00000000u); // 800D2120
  if (crb(c,2)) { goto L_800D212C; } // 800D2124
  c->r[5]=0u+0x00000001u; // 800D2128
L_800D212C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D212C
  if (crb(c,2)) { goto L_800D2164; } // 800D2130
  c->r[5]=c->r[23]+0xFFFFFFFFu; // 800D2134
  c->r[6]=0u+0x00000001u; // 800D2138
  c->r[11]=rotl(c->r[5],0)&0x80000000u; // 800D213C
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[14]); // 800D2140
  if (!crb(c,2)) { goto L_800D2158; } // 800D2144
  c->r[5]=rotl(c->r[7],0)&0x80000000u; // 800D2148
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[5]); // 800D214C
  if (crb(c,2)) { goto L_800D2158; } // 800D2150
  c->r[6]=0u+0x00000000u; // 800D2154
L_800D2158:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D2158
  if (crb(c,2)) { goto L_800D2164; } // 800D215C
  c->r[4]=0u+0x00000001u; // 800D2160
L_800D2164:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D2164
  if (crb(c,2)) { goto L_800D2190; } // 800D2168
  c->r[4]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[4]); // 800D216C
  c->r[5]=0u+0x00000001u; // 800D2170
  if (!crb(c,2)) { goto L_800D2184; } // 800D2174
  c->r[4]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[4]); // 800D2178
  if (crb(c,2)) { goto L_800D2184; } // 800D217C
  c->r[5]=0u+0x00000000u; // 800D2180
L_800D2184:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D2184
  if (crb(c,2)) { goto L_800D2190; } // 800D2188
  c->r[3]=0u+0x00000001u; // 800D218C
L_800D2190:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D2190
  if (crb(c,2)) { goto L_800D2208; } // 800D2194
  c->r[4]=c->r[10]+0x00000008u; // 800D2198
  c->r[5]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800D219C
  c->r[4]=c->r[4]-c->r[0]; // 800D21A0
  c->r[3]=c->r[1]+0x00000010u; // 800D21A4
  c->r[4]=rotl(c->r[4],29)&0x1FFFFFFFu; // 800D21A8
  c->r[3]=c->r[3]+c->r[5]; // 800D21AC
  c->ctr=c->r[4]; // 800D21B0
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[0]); // 800D21B4
  if (crb(c,0)) { goto L_800D2208; } // 800D21B8
L_800D21BC:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800D21BC
  c->r[10]=c->r[10]+0xFFFFFFF8u; // 800D21C0
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 800D21C4
  c->r[9]=c->r[9]|c->r[4]; // 800D21C8
  c->r[4]=R32(c->r[3]+0xFFFFFFF8u); // 800D21CC
  c->r[9]=c->r[9]|c->r[0]; // 800D21D0
  c->r[0]=R32(c->r[3]+0xFFFFFFF4u); // 800D21D4
  c->r[9]=c->r[9]|c->r[4]; // 800D21D8
  c->r[4]=R32(c->r[3]+0xFFFFFFF0u); // 800D21DC
  c->r[9]=c->r[9]|c->r[0]; // 800D21E0
  c->r[0]=R32(c->r[3]+0xFFFFFFECu); // 800D21E4
  c->r[9]=c->r[9]|c->r[4]; // 800D21E8
  c->r[4]=R32(c->r[3]+0xFFFFFFE8u); // 800D21EC
  c->r[9]=c->r[9]|c->r[0]; // 800D21F0
  c->r[0]=R32(c->r[3]+0xFFFFFFE4u); // 800D21F4
  c->r[9]=c->r[9]|c->r[4]; // 800D21F8
  c->r[3]=c->r[3]+0xFFFFFFE0u; // 800D21FC
  c->r[9]=c->r[9]|c->r[0]; // 800D2200
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D21BC; } // 800D2204
L_800D2208:;
  c->r[0]=c->r[10]+0x00000001u; // 800D2208
  c->r[3]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800D220C
  c->r[4]=c->r[1]+0x00000010u; // 800D2210
  c->r[0]=c->r[0]-c->r[21]; // 800D2214
  c->r[4]=c->r[4]+c->r[3]; // 800D2218
  c->ctr=c->r[0]; // 800D221C
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[21]); // 800D2220
  if (crb(c,0)) { goto L_800D223C; } // 800D2224
L_800D2228:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D2228
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 800D222C
  c->r[10]=c->r[10]+0xFFFFFFFFu; // 800D2230
  c->r[9]=c->r[9]|c->r[0]; // 800D2234
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2228; } // 800D2238
L_800D223C:;
  cmps(c,0,(int32_t)c->r[9],0); // 800D223C
  if (!crb(c,2)) { goto L_800D247C; } // 800D2240
  c->r[18]=0u+0x00000001u; // 800D2244
  goto L_800D2250; // 800D2248
L_800D224C:;
  c->r[18]=c->r[18]+0x00000001u; // 800D224C
L_800D2250:;
  c->r[0]=c->r[21]-c->r[18]; // 800D2250
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D2254
  c->r[0]=R32(c->r[29]+c->r[0]); // 800D2258
  cmps(c,0,(int32_t)c->r[0],0); // 800D225C
  if (crb(c,2)) { IRQCHK(c); goto L_800D224C; } // 800D2260
  c->r[12]=c->r[23]+0x00000001u; // 800D2264
  c->r[7]=c->r[1]+0x00000060u; // 800D2268
  c->r[3]=rotl(c->r[12],3)&0xFFFFFFF8u; // 800D226C
  c->r[8]=c->r[23]+c->r[18]; // 800D2270
  c->r[0]=rotl(c->r[12],2)&0xFFFFFFFCu; // 800D2274
  c->r[5]=c->r[27]+c->r[0]; // 800D2278
  c->r[6]=c->r[26]+c->r[3]; // 800D227C
  c->r[7]=c->r[7]+c->r[3]; // 800D2280
  goto L_800D246C; // 800D2284
L_800D2288:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 800D2288
  cmps(c,1,(int32_t)c->r[22],0); // 800D228C
  {uint32_t ea=c->r[2]+0xFFFF9418u; c->f[0]=RF64(ea);} // 800D2290
  c->r[11]=0u+0x00000000u; // 800D2294
  c->r[0]=c->r[0]^0x80000000u; // 800D2298
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 800D229C
  {uint32_t ea=c->r[1]+0x00000248u; c->f[1]=RF64(ea);} // 800D22A0
  c->f[1]=c->f[1]-c->f[25]; // 800D22A4
  {uint32_t ea=c->r[6]+0x00000000u; WF64(ea,c->f[1]);} // 800D22A8
  if (crb(c,4)) { goto L_800D2458; } // 800D22AC
  c->r[0]=c->r[22]+0x00000001u; // 800D22B0
  c->r[3]=c->r[22]+0xFFFFFFF8u; // 800D22B4
  cmps(c,0,(int32_t)c->r[0],8); // 800D22B8
  if (!crb(c,1)) { goto L_800D2414; } // 800D22BC
  c->r[4]=0u+0x00000000u; // 800D22C0
  c->r[9]=0u+0x00000000u; // 800D22C4
  if (crb(c,4)) { goto L_800D22DC; } // 800D22C8
  c->r[0]=c->r[31]+0xFFFFFFFEu; // 800D22CC
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 800D22D0
  if (crb(c,1)) { goto L_800D22DC; } // 800D22D4
  c->r[9]=0u+0x00000001u; // 800D22D8
L_800D22DC:;
  cmps(c,0,(int32_t)c->r[9],0); // 800D22DC
  if (crb(c,2)) { goto L_800D2308; } // 800D22E0
  cmps(c,0,(int32_t)c->r[25],0); // 800D22E4
  c->r[0]=0u+0x00000001u; // 800D22E8
  if (!crb(c,2)) { goto L_800D22FC; } // 800D22EC
  cmps(c,0,(int32_t)c->r[24],0); // 800D22F0
  if (crb(c,2)) { goto L_800D22FC; } // 800D22F4
  c->r[0]=0u+0x00000000u; // 800D22F8
L_800D22FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D22FC
  if (crb(c,2)) { goto L_800D2308; } // 800D2300
  c->r[4]=0u+0x00000001u; // 800D2304
L_800D2308:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D2308
  if (crb(c,2)) { goto L_800D2414; } // 800D230C
  c->r[0]=c->r[3]+0x00000008u; // 800D2310
  c->r[9]=c->r[16]|c->r[16]; // 800D2314
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D2318
  c->r[10]=c->r[22]+c->r[12]; // 800D231C
  c->ctr=c->r[0]; // 800D2320
  cmps(c,0,(int32_t)c->r[3],0); // 800D2324
  if (crb(c,0)) { goto L_800D2414; } // 800D2328
L_800D232C:;
  c->r[0]=c->r[10]-c->r[11]; // 800D232C
  c->r[4]=c->r[11]+0x00000001u; // 800D2330
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D2334
  c->r[3]=c->r[11]+0x00000002u; // 800D2338
  {uint32_t ea=c->r[9]+0x00000000u; c->f[2]=RF64(ea);} // 800D233C
  c->r[3]=c->r[10]-c->r[3]; // 800D2340
  {uint32_t ea=c->r[15]+c->r[0]; c->f[1]=RF64(ea);} // 800D2344
  c->r[4]=c->r[10]-c->r[4]; // 800D2348
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D234C
  c->r[20]=c->r[11]+0x00000007u; // 800D2350
  c->f[3]=c->f[2]*c->f[1]; // 800D2354
  {uint32_t ea=c->r[9]+0x00000008u; c->f[2]=RF64(ea);} // 800D2358
  {uint32_t ea=c->r[15]+c->r[0]; c->f[1]=RF64(ea);} // 800D235C
  c->r[4]=c->r[11]+0x00000003u; // 800D2360
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D2364
  c->r[20]=c->r[10]-c->r[20]; // 800D2368
  c->f[4]=c->f[2]*c->f[1]; // 800D236C
  c->r[0]=c->r[10]-c->r[4]; // 800D2370
  {uint32_t ea=c->r[15]+c->r[3]; c->f[1]=RF64(ea);} // 800D2374
  c->r[4]=c->r[11]+0x00000004u; // 800D2378
  c->f[0]=c->f[0]+c->f[3]; // 800D237C
  {uint32_t ea=c->r[9]+0x00000010u; c->f[2]=RF64(ea);} // 800D2380
  c->f[3]=c->f[2]*c->f[1]; // 800D2384
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D2388
  {uint32_t ea=c->r[15]+c->r[0]; c->f[1]=RF64(ea);} // 800D238C
  c->r[4]=c->r[10]-c->r[4]; // 800D2390
  c->f[0]=c->f[0]+c->f[4]; // 800D2394
  {uint32_t ea=c->r[9]+0x00000018u; c->f[2]=RF64(ea);} // 800D2398
  c->r[3]=c->r[11]+0x00000005u; // 800D239C
  c->r[0]=c->r[11]+0x00000006u; // 800D23A0
  c->f[0]=c->f[0]+c->f[3]; // 800D23A4
  c->r[3]=c->r[10]-c->r[3]; // 800D23A8
  c->f[2]=c->f[2]*c->f[1]; // 800D23AC
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D23B0
  c->r[0]=c->r[10]-c->r[0]; // 800D23B4
  {uint32_t ea=c->r[9]+0x00000020u; c->f[3]=RF64(ea);} // 800D23B8
  {uint32_t ea=c->r[15]+c->r[4]; c->f[1]=RF64(ea);} // 800D23BC
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D23C0
  c->f[6]=c->f[3]*c->f[1]; // 800D23C4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D23C8
  {uint32_t ea=c->r[15]+c->r[3]; c->f[1]=RF64(ea);} // 800D23CC
  c->r[20]=rotl(c->r[20],3)&0xFFFFFFF8u; // 800D23D0
  c->f[0]=c->f[0]+c->f[2]; // 800D23D4
  {uint32_t ea=c->r[9]+0x00000028u; c->f[2]=RF64(ea);} // 800D23D8
  c->f[5]=c->f[2]*c->f[1]; // 800D23DC
  {uint32_t ea=c->r[9]+0x00000030u; c->f[4]=RF64(ea);} // 800D23E0
  {uint32_t ea=c->r[15]+c->r[0]; c->f[3]=RF64(ea);} // 800D23E4
  c->r[11]=c->r[11]+0x00000008u; // 800D23E8
  c->f[0]=c->f[0]+c->f[6]; // 800D23EC
  {uint32_t ea=c->r[9]+0x00000038u; c->f[2]=RF64(ea);} // 800D23F0
  {uint32_t ea=c->r[15]+c->r[20]; c->f[1]=RF64(ea);} // 800D23F4
  c->f[3]=c->f[4]*c->f[3]; // 800D23F8
  c->r[9]=c->r[9]+0x00000040u; // 800D23FC
  c->f[0]=c->f[0]+c->f[5]; // 800D2400
  c->f[1]=c->f[2]*c->f[1]; // 800D2404
  c->f[0]=c->f[0]+c->f[3]; // 800D2408
  c->f[0]=c->f[0]+c->f[1]; // 800D240C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D232C; } // 800D2410
L_800D2414:;
  c->r[4]=c->r[22]+0x00000001u; // 800D2414
  c->r[3]=rotl(c->r[11],3)&0xFFFFFFF8u; // 800D2418
  c->r[4]=c->r[4]-c->r[11]; // 800D241C
  c->r[0]=c->r[22]+c->r[12]; // 800D2420
  c->r[3]=c->r[16]+c->r[3]; // 800D2424
  c->ctr=c->r[4]; // 800D2428
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[22]); // 800D242C
  if (crb(c,1)) { goto L_800D2458; } // 800D2430
L_800D2434:;
  c->r[4]=c->r[0]-c->r[11]; // 800D2434
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=RF64(ea);} // 800D2438
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D243C
  c->r[3]=c->r[3]+0x00000008u; // 800D2440
  {uint32_t ea=c->r[15]+c->r[4]; c->f[1]=RF64(ea);} // 800D2444
  c->r[11]=c->r[11]+0x00000001u; // 800D2448
  c->f[1]=c->f[2]*c->f[1]; // 800D244C
  c->f[0]=c->f[0]+c->f[1]; // 800D2450
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2434; } // 800D2454
L_800D2458:;
  {uint32_t ea=c->r[7]+0x00000000u; WF64(ea,c->f[0]);} // 800D2458
  c->r[5]=c->r[5]+0x00000004u; // 800D245C
  c->r[6]=c->r[6]+0x00000008u; // 800D2460
  c->r[7]=c->r[7]+0x00000008u; // 800D2464
  c->r[12]=c->r[12]+0x00000001u; // 800D2468
L_800D246C:;
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[8]); // 800D246C
  if (!crb(c,1)) { IRQCHK(c); goto L_800D2288; } // 800D2470
  c->r[23]=c->r[23]+c->r[18]; // 800D2474
  IRQCHK(c); goto L_800D1C2C; // 800D2478
L_800D247C:;
  {uint32_t ea=c->r[2]+0xFFFF9418u; c->f[0]=RF64(ea);} // 800D247C
  fcmp(c,0,c->f[0],c->f[23]); // 800D2480
  if (!crb(c,2)) { goto L_800D24BC; } // 800D2484
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 800D2488
  c->r[3]=c->r[1]+0x00000010u; // 800D248C
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D2490
  c->r[19]=c->r[19]+0xFFFFFFE8u; // 800D2494
  c->r[3]=c->r[3]+c->r[0]; // 800D2498
  goto L_800D24AC; // 800D249C
L_800D24A0:;
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800D24A0
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 800D24A4
  c->r[19]=c->r[19]+0xFFFFFFE8u; // 800D24A8
L_800D24AC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D24AC
  cmps(c,0,(int32_t)c->r[0],0); // 800D24B0
  if (crb(c,2)) { IRQCHK(c); goto L_800D24A0; } // 800D24B4
  goto L_800D2558; // 800D24B8
L_800D24BC:;
  c->f[1]=c->f[23]; // 800D24BC
  c->r[3]=0u-c->r[19]; // 800D24C0
  c->lr=0x800D24C8u; f_800D0480(c); // 800D24C4
  {uint32_t ea=c->r[2]+0xFFFF9428u; c->f[3]=RF64(ea);} // 800D24C8
  fcmp(c,0,c->f[1],c->f[3]); // 800D24CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D24D0
  if (!crb(c,2)) { goto L_800D2540; } // 800D24D4
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[0]=RF64(ea);} // 800D24D8
  c->r[5]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D24DC
  c->r[23]=c->r[23]+0x00000001u; // 800D24E0
  {uint32_t ea=c->r[2]+0xFFFF9450u; c->f[2]=RF64(ea);} // 800D24E4
  c->f[0]=c->f[0]*c->f[1]; // 800D24E8
  c->r[4]=c->r[1]+0x00000010u; // 800D24EC
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D24F0
  c->r[19]=c->r[19]+0x00000018u; // 800D24F4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D24F8
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 800D24FC
  c->r[3]=R32(c->r[1]+0x000002CCu); // 800D2500
  c->r[3]=c->r[3]^0x80000000u; // 800D2504
  W32(c->r[1]+0x00000244u,c->r[3]); // 800D2508
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 800D250C
  c->f[0]=c->f[0]-c->f[2]; // 800D2510
  c->f[2]=c->f[3]*c->f[0]; // 800D2514
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D2518
  c->f[1]=c->f[1]-c->f[2]; // 800D251C
  {uint32_t ea=c->r[1]+0x000002B8u; WF64(ea,c->f[0]);} // 800D2520
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D2524
  c->r[3]=R32(c->r[1]+0x000002BCu); // 800D2528
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[0]);} // 800D252C
  c->r[6]=R32(c->r[1]+0x000002C4u); // 800D2530
  W32(c->r[4]+c->r[5],c->r[6]); // 800D2534
  W32(c->r[4]+c->r[0],c->r[3]); // 800D2538
  goto L_800D2558; // 800D253C
L_800D2540:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D2540
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D2544
  c->r[3]=c->r[1]+0x00000010u; // 800D2548
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 800D254C
  c->r[4]=R32(c->r[1]+0x000002CCu); // 800D2550
  W32(c->r[3]+c->r[0],c->r[4]); // 800D2554
L_800D2558:;
  {uint32_t ea=c->r[2]+0xFFFF9448u; c->f[1]=RF64(ea);} // 800D2558
  c->r[3]=c->r[19]|c->r[19]; // 800D255C
  c->lr=0x800D2564u; f_800D0480(c); // 800D2560
  cmps(c,1,(int32_t)c->r[23],0); // 800D2564
  c->r[3]=c->r[23]|c->r[23]; // 800D2568
  if (crb(c,4)) { goto L_800D2770; } // 800D256C
  c->r[0]=c->r[23]+0x00000001u; // 800D2570
  cmps(c,0,(int32_t)c->r[0],8); // 800D2574
  if (!crb(c,1)) { goto L_800D2714; } // 800D2578
  c->r[5]=0u+0x00000000u; // 800D257C
  c->r[6]=0u+0x00000000u; // 800D2580
  if (crb(c,4)) { goto L_800D259C; } // 800D2584
  c->r[4]=0u+0x80000000u; // 800D2588
  c->r[0]=c->r[4]+0x00000001u; // 800D258C
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 800D2590
  if (crb(c,0)) { goto L_800D259C; } // 800D2594
  c->r[6]=0u+0x00000001u; // 800D2598
L_800D259C:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D259C
  if (crb(c,2)) { goto L_800D25CC; } // 800D25A0
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 800D25A4
  c->r[4]=0u+0x00000001u; // 800D25A8
  if (!crb(c,2)) { goto L_800D25C0; } // 800D25AC
  c->r[0]=c->r[23]+0x00000001u; // 800D25B0
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800D25B4
  if (crb(c,2)) { goto L_800D25C0; } // 800D25B8
  c->r[4]=0u+0x00000000u; // 800D25BC
L_800D25C0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D25C0
  if (crb(c,2)) { goto L_800D25CC; } // 800D25C4
  c->r[5]=0u+0x00000001u; // 800D25C8
L_800D25CC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D25CC
  if (crb(c,2)) { goto L_800D2714; } // 800D25D0
  c->r[5]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D25D4
  c->r[6]=c->r[1]+0x00000010u; // 800D25D8
  c->r[4]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D25DC
  c->r[7]=c->r[1]+0x00000060u; // 800D25E0
  c->r[0]=rotl(c->r[23],29)&0x1FFFFFFFu; // 800D25E4
  c->r[6]=c->r[6]+c->r[5]; // 800D25E8
  c->r[7]=c->r[7]+c->r[4]; // 800D25EC
  {uint32_t ea=c->r[2]+0xFFFF9450u; c->f[10]=RF64(ea);} // 800D25F0
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[8]=RF64(ea);} // 800D25F4
  c->ctr=c->r[0]; // 800D25F8
  cmps(c,0,(int32_t)c->r[23],8); // 800D25FC
  if (crb(c,0)) { goto L_800D2714; } // 800D2600
L_800D2604:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 800D2604
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800D2608
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 800D260C
  c->r[5]=c->r[4]^0x80000000u; // 800D2610
  c->r[4]=R32(c->r[6]+0xFFFFFFF8u); // 800D2614
  W32(c->r[1]+0x0000024Cu,c->r[5]); // 800D2618
  c->r[5]=c->r[0]^0x80000000u; // 800D261C
  c->r[4]=c->r[4]^0x80000000u; // 800D2620
  c->r[0]=R32(c->r[6]+0xFFFFFFF4u); // 800D2624
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 800D2628
  W32(c->r[1]+0x00000244u,c->r[5]); // 800D262C
  c->r[5]=c->r[0]^0x80000000u; // 800D2630
  c->f[0]=c->f[0]-c->f[10]; // 800D2634
  c->r[0]=R32(c->r[6]+0xFFFFFFF0u); // 800D2638
  {uint32_t ea=c->r[1]+0x00000240u; c->f[2]=RF64(ea);} // 800D263C
  W32(c->r[1]+0x0000024Cu,c->r[4]); // 800D2640
  c->r[4]=c->r[0]^0x80000000u; // 800D2644
  c->f[9]=c->f[1]*c->f[0]; // 800D2648
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 800D264C
  c->f[1]=c->f[1]*c->f[8]; // 800D2650
  W32(c->r[1]+0x00000244u,c->r[5]); // 800D2654
  c->r[0]=R32(c->r[6]+0xFFFFFFECu); // 800D2658
  c->f[2]=c->f[2]-c->f[10]; // 800D265C
  c->f[3]=c->f[0]-c->f[10]; // 800D2660
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 800D2664
  c->f[7]=c->f[1]*c->f[2]; // 800D2668
  W32(c->r[1]+0x0000024Cu,c->r[4]); // 800D266C
  c->r[5]=c->r[0]^0x80000000u; // 800D2670
  c->r[4]=R32(c->r[6]+0xFFFFFFE8u); // 800D2674
  c->f[1]=c->f[1]*c->f[8]; // 800D2678
  c->r[0]=R32(c->r[6]+0xFFFFFFE4u); // 800D267C
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=RF64(ea);} // 800D2680
  c->f[5]=c->f[0]-c->f[10]; // 800D2684
  c->f[6]=c->f[1]*c->f[3]; // 800D2688
  W32(c->r[1]+0x00000244u,c->r[5]); // 800D268C
  c->r[4]=c->r[4]^0x80000000u; // 800D2690
  c->r[0]=c->r[0]^0x80000000u; // 800D2694
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 800D2698
  c->f[1]=c->f[1]*c->f[8]; // 800D269C
  {uint32_t ea=c->r[7]+0x00000000u; WF64(ea,c->f[9]);} // 800D26A0
  c->f[4]=c->f[2]-c->f[10]; // 800D26A4
  c->f[3]=c->f[0]-c->f[10]; // 800D26A8
  c->r[6]=c->r[6]+0xFFFFFFE0u; // 800D26AC
  c->f[5]=c->f[1]*c->f[5]; // 800D26B0
  W32(c->r[1]+0x0000024Cu,c->r[4]); // 800D26B4
  c->f[1]=c->f[1]*c->f[8]; // 800D26B8
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 800D26BC
  {uint32_t ea=c->r[7]+0xFFFFFFF8u; WF64(ea,c->f[7]);} // 800D26C0
  c->f[2]=c->f[0]-c->f[10]; // 800D26C4
  c->f[4]=c->f[1]*c->f[4]; // 800D26C8
  W32(c->r[1]+0x00000244u,c->r[0]); // 800D26CC
  c->f[1]=c->f[1]*c->f[8]; // 800D26D0
  {uint32_t ea=c->r[7]+0xFFFFFFF0u; WF64(ea,c->f[6]);} // 800D26D4
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 800D26D8
  {uint32_t ea=c->r[7]+0xFFFFFFE8u; WF64(ea,c->f[5]);} // 800D26DC
  c->f[0]=c->f[0]-c->f[10]; // 800D26E0
  c->f[3]=c->f[1]*c->f[3]; // 800D26E4
  {uint32_t ea=c->r[7]+0xFFFFFFE0u; WF64(ea,c->f[4]);} // 800D26E8
  c->f[1]=c->f[1]*c->f[8]; // 800D26EC
  {uint32_t ea=c->r[7]+0xFFFFFFD8u; WF64(ea,c->f[3]);} // 800D26F0
  c->f[2]=c->f[1]*c->f[2]; // 800D26F4
  c->f[1]=c->f[1]*c->f[8]; // 800D26F8
  {uint32_t ea=c->r[7]+0xFFFFFFD0u; WF64(ea,c->f[2]);} // 800D26FC
  c->f[0]=c->f[1]*c->f[0]; // 800D2700
  c->f[1]=c->f[1]*c->f[8]; // 800D2704
  {uint32_t ea=c->r[7]+0xFFFFFFC8u; WF64(ea,c->f[0]);} // 800D2708
  c->r[7]=c->r[7]+0xFFFFFFC0u; // 800D270C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2604; } // 800D2710
L_800D2714:;
  c->r[5]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D2714
  c->r[6]=c->r[1]+0x00000010u; // 800D2718
  c->r[4]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D271C
  c->r[7]=c->r[1]+0x00000060u; // 800D2720
  c->r[0]=c->r[3]+0x00000001u; // 800D2724
  c->r[6]=c->r[6]+c->r[5]; // 800D2728
  c->r[7]=c->r[7]+c->r[4]; // 800D272C
  {uint32_t ea=c->r[2]+0xFFFF9450u; c->f[3]=RF64(ea);} // 800D2730
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[0]=RF64(ea);} // 800D2734
  c->ctr=c->r[0]; // 800D2738
  cmps(c,0,(int32_t)c->r[3],0); // 800D273C
  if (crb(c,0)) { goto L_800D2770; } // 800D2740
L_800D2744:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D2744
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 800D2748
  c->r[0]=c->r[0]^0x80000000u; // 800D274C
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 800D2750
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=RF64(ea);} // 800D2754
  c->f[2]=c->f[2]-c->f[3]; // 800D2758
  c->f[2]=c->f[1]*c->f[2]; // 800D275C
  c->f[1]=c->f[1]*c->f[0]; // 800D2760
  {uint32_t ea=c->r[7]+0x00000000u; WF64(ea,c->f[2]);} // 800D2764
  c->r[7]=c->r[7]+0xFFFFFFF8u; // 800D2768
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2744; } // 800D276C
L_800D2770:;
  c->r[0]=c->r[23]+0x00000001u; // 800D2770
  c->r[8]=c->r[23]|c->r[23]; // 800D2774
  c->r[4]=c->r[1]+0x00000100u; // 800D2778
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D277C
  c->r[5]=0u+0x801F0000u; // 800D2780
  c->ctr=c->r[0]; // 800D2784
  cmps(c,0,(int32_t)c->r[23],0); // 800D2788
  if (crb(c,0)) { goto L_800D27EC; } // 800D278C
L_800D2790:;
  c->r[6]=c->r[1]+0x00000060u; // 800D2790
  {uint32_t ea=c->r[2]+0xFFFF9418u; c->f[2]=RF64(ea);} // 800D2794
  c->r[6]=c->r[6]+c->r[3]; // 800D2798
  c->r[7]=c->r[5]+0x00004A08u; // 800D279C
  c->r[0]=c->r[23]-c->r[8]; // 800D27A0
  c->r[9]=0u+0x00000000u; // 800D27A4
  goto L_800D27C8; // 800D27A8
L_800D27AC:;
  {uint32_t ea=c->r[7]+0x00000000u; c->f[1]=RF64(ea);} // 800D27AC
  c->r[7]=c->r[7]+0x00000008u; // 800D27B0
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=RF64(ea);} // 800D27B4
  c->r[6]=c->r[6]+0x00000008u; // 800D27B8
  c->r[9]=c->r[9]+0x00000001u; // 800D27BC
  c->f[0]=c->f[1]*c->f[0]; // 800D27C0
  c->f[2]=c->f[2]+c->f[0]; // 800D27C4
L_800D27C8:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[21]); // 800D27C8
  if (crb(c,1)) { goto L_800D27D8; } // 800D27CC
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 800D27D0
  if (!crb(c,1)) { IRQCHK(c); goto L_800D27AC; } // 800D27D4
L_800D27D8:;
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D27D8
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800D27DC
  {uint32_t ea=c->r[4]+c->r[0]; WF64(ea,c->f[2]);} // 800D27E0
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 800D27E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2790; } // 800D27E8
L_800D27EC:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D27EC
  cmps(c,0,(int32_t)c->r[0],3); // 800D27F0
  if (crb(c,2)) { goto L_800D2BAC; } // 800D27F4
  if (!crb(c,0)) { goto L_800D3000; } // 800D27F8
  cmps(c,0,(int32_t)c->r[0],0); // 800D27FC
  if (crb(c,2)) { goto L_800D280C; } // 800D2800
  if (!crb(c,0)) { goto L_800D2928; } // 800D2804
  goto L_800D3000; // 800D2808
L_800D280C:;
  cmps(c,1,(int32_t)c->r[23],0); // 800D280C
  {uint32_t ea=c->r[2]+0xFFFF9418u; c->f[6]=RF64(ea);} // 800D2810
  if (crb(c,4)) { goto L_800D2910; } // 800D2814
  c->r[0]=c->r[23]+0x00000001u; // 800D2818
  cmps(c,0,(int32_t)c->r[0],8); // 800D281C
  if (!crb(c,1)) { goto L_800D28E4; } // 800D2820
  c->r[4]=0u+0x00000000u; // 800D2824
  c->r[5]=0u+0x00000000u; // 800D2828
  if (crb(c,4)) { goto L_800D2844; } // 800D282C
  c->r[3]=0u+0x80000000u; // 800D2830
  c->r[0]=c->r[3]+0x00000001u; // 800D2834
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 800D2838
  if (crb(c,0)) { goto L_800D2844; } // 800D283C
  c->r[5]=0u+0x00000001u; // 800D2840
L_800D2844:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D2844
  if (crb(c,2)) { goto L_800D2874; } // 800D2848
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 800D284C
  c->r[3]=0u+0x00000001u; // 800D2850
  if (!crb(c,2)) { goto L_800D2868; } // 800D2854
  c->r[0]=c->r[23]+0x00000001u; // 800D2858
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800D285C
  if (crb(c,2)) { goto L_800D2868; } // 800D2860
  c->r[3]=0u+0x00000000u; // 800D2864
L_800D2868:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D2868
  if (crb(c,2)) { goto L_800D2874; } // 800D286C
  c->r[4]=0u+0x00000001u; // 800D2870
L_800D2874:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D2874
  if (crb(c,2)) { goto L_800D28E4; } // 800D2878
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D287C
  c->r[4]=c->r[1]+0x00000100u; // 800D2880
  c->r[0]=rotl(c->r[23],29)&0x1FFFFFFFu; // 800D2884
  c->r[4]=c->r[4]+c->r[3]; // 800D2888
  c->ctr=c->r[0]; // 800D288C
  cmps(c,0,(int32_t)c->r[23],8); // 800D2890
  if (crb(c,0)) { goto L_800D28E4; } // 800D2894
L_800D2898:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 800D2898
  c->r[23]=c->r[23]+0xFFFFFFF8u; // 800D289C
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D28A0
  c->f[6]=c->f[6]+c->f[1]; // 800D28A4
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[5]=RF64(ea);} // 800D28A8
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[4]=RF64(ea);} // 800D28AC
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[3]=RF64(ea);} // 800D28B0
  c->f[6]=c->f[6]+c->f[0]; // 800D28B4
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[2]=RF64(ea);} // 800D28B8
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[1]=RF64(ea);} // 800D28BC
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 800D28C0
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 800D28C4
  c->f[6]=c->f[6]+c->f[5]; // 800D28C8
  c->f[6]=c->f[6]+c->f[4]; // 800D28CC
  c->f[6]=c->f[6]+c->f[3]; // 800D28D0
  c->f[6]=c->f[6]+c->f[2]; // 800D28D4
  c->f[6]=c->f[6]+c->f[1]; // 800D28D8
  c->f[6]=c->f[6]+c->f[0]; // 800D28DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2898; } // 800D28E0
L_800D28E4:;
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D28E4
  c->r[4]=c->r[1]+0x00000100u; // 800D28E8
  c->r[0]=c->r[23]+0x00000001u; // 800D28EC
  c->r[4]=c->r[4]+c->r[3]; // 800D28F0
  c->ctr=c->r[0]; // 800D28F4
  cmps(c,0,(int32_t)c->r[23],0); // 800D28F8
  if (crb(c,0)) { goto L_800D2910; } // 800D28FC
L_800D2900:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 800D2900
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 800D2904
  c->f[6]=c->f[6]+c->f[0]; // 800D2908
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2900; } // 800D290C
L_800D2910:;
  cmps(c,0,(int32_t)c->r[18],0); // 800D2910
  if (!crb(c,2)) { goto L_800D291C; } // 800D2914
  goto L_800D2920; // 800D2918
L_800D291C:;
  c->f[6]=-c->f[6]; // 800D291C
L_800D2920:;
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[6]);} // 800D2920
  goto L_800D3000; // 800D2924
L_800D2928:;
  cmps(c,1,(int32_t)c->r[23],0); // 800D2928
  {uint32_t ea=c->r[2]+0xFFFF9418u; c->f[6]=RF64(ea);} // 800D292C
  c->r[6]=c->r[23]|c->r[23]; // 800D2930
  if (crb(c,4)) { goto L_800D2A30; } // 800D2934
  c->r[0]=c->r[23]+0x00000001u; // 800D2938
  cmps(c,0,(int32_t)c->r[0],8); // 800D293C
  if (!crb(c,1)) { goto L_800D2A04; } // 800D2940
  c->r[4]=0u+0x00000000u; // 800D2944
  c->r[5]=0u+0x00000000u; // 800D2948
  if (crb(c,4)) { goto L_800D2964; } // 800D294C
  c->r[3]=0u+0x80000000u; // 800D2950
  c->r[0]=c->r[3]+0x00000001u; // 800D2954
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 800D2958
  if (crb(c,0)) { goto L_800D2964; } // 800D295C
  c->r[5]=0u+0x00000001u; // 800D2960
L_800D2964:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D2964
  if (crb(c,2)) { goto L_800D2994; } // 800D2968
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 800D296C
  c->r[3]=0u+0x00000001u; // 800D2970
  if (!crb(c,2)) { goto L_800D2988; } // 800D2974
  c->r[0]=c->r[23]+0x00000001u; // 800D2978
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800D297C
  if (crb(c,2)) { goto L_800D2988; } // 800D2980
  c->r[3]=0u+0x00000000u; // 800D2984
L_800D2988:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D2988
  if (crb(c,2)) { goto L_800D2994; } // 800D298C
  c->r[4]=0u+0x00000001u; // 800D2990
L_800D2994:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D2994
  if (crb(c,2)) { goto L_800D2A04; } // 800D2998
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D299C
  c->r[4]=c->r[1]+0x00000100u; // 800D29A0
  c->r[0]=rotl(c->r[23],29)&0x1FFFFFFFu; // 800D29A4
  c->r[4]=c->r[4]+c->r[3]; // 800D29A8
  c->ctr=c->r[0]; // 800D29AC
  cmps(c,0,(int32_t)c->r[23],8); // 800D29B0
  if (crb(c,0)) { goto L_800D2A04; } // 800D29B4
L_800D29B8:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 800D29B8
  c->r[6]=c->r[6]+0xFFFFFFF8u; // 800D29BC
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D29C0
  c->f[6]=c->f[6]+c->f[1]; // 800D29C4
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[5]=RF64(ea);} // 800D29C8
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[4]=RF64(ea);} // 800D29CC
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[3]=RF64(ea);} // 800D29D0
  c->f[6]=c->f[6]+c->f[0]; // 800D29D4
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[2]=RF64(ea);} // 800D29D8
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[1]=RF64(ea);} // 800D29DC
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 800D29E0
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 800D29E4
  c->f[6]=c->f[6]+c->f[5]; // 800D29E8
  c->f[6]=c->f[6]+c->f[4]; // 800D29EC
  c->f[6]=c->f[6]+c->f[3]; // 800D29F0
  c->f[6]=c->f[6]+c->f[2]; // 800D29F4
  c->f[6]=c->f[6]+c->f[1]; // 800D29F8
  c->f[6]=c->f[6]+c->f[0]; // 800D29FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D29B8; } // 800D2A00
L_800D2A04:;
  c->r[3]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D2A04
  c->r[4]=c->r[1]+0x00000100u; // 800D2A08
  c->r[0]=c->r[6]+0x00000001u; // 800D2A0C
  c->r[4]=c->r[4]+c->r[3]; // 800D2A10
  c->ctr=c->r[0]; // 800D2A14
  cmps(c,0,(int32_t)c->r[6],0); // 800D2A18
  if (crb(c,0)) { goto L_800D2A30; } // 800D2A1C
L_800D2A20:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 800D2A20
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 800D2A24
  c->f[6]=c->f[6]+c->f[0]; // 800D2A28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2A20; } // 800D2A2C
L_800D2A30:;
  cmps(c,0,(int32_t)c->r[18],0); // 800D2A30
  if (!crb(c,2)) { goto L_800D2A40; } // 800D2A34
  c->f[1]=c->f[6]; // 800D2A38
  goto L_800D2A44; // 800D2A3C
L_800D2A40:;
  c->f[1]=-c->f[6]; // 800D2A40
L_800D2A44:;
  {uint32_t ea=c->r[1]+0x00000100u; c->f[0]=RF64(ea);} // 800D2A44
  cmps(c,1,(int32_t)c->r[23],1); // 800D2A48
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[1]);} // 800D2A4C
  c->r[8]=0u+0x00000001u; // 800D2A50
  c->f[6]=c->f[0]-c->f[6]; // 800D2A54
  if (crb(c,4)) { goto L_800D2B94; } // 800D2A58
  cmps(c,0,(int32_t)c->r[23],8); // 800D2A5C
  c->r[4]=c->r[23]+0xFFFFFFF8u; // 800D2A60
  if (!crb(c,1)) { goto L_800D2B64; } // 800D2A64
  c->r[5]=0u+0x00000000u; // 800D2A68
  c->r[6]=0u+0x00000000u; // 800D2A6C
  c->r[7]=0u+0x00000000u; // 800D2A70
  if (crb(c,4)) { goto L_800D2A8C; } // 800D2A74
  c->r[3]=0u+0x80000000u; // 800D2A78
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800D2A7C
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 800D2A80
  if (crb(c,1)) { goto L_800D2A8C; } // 800D2A84
  c->r[7]=0u+0x00000001u; // 800D2A88
L_800D2A8C:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D2A8C
  if (crb(c,2)) { goto L_800D2AC8; } // 800D2A90
  c->r[7]=rotl(c->r[23],0)&0x80000000u; // 800D2A94
  c->r[3]=0u+0x00000001u; // 800D2A98
  c->r[0]=c->r[7]+0x80000000u; // 800D2A9C
  cmpu(c,0,c->r[0],0x00000000u); // 800D2AA0
  if (!crb(c,2)) { goto L_800D2ABC; } // 800D2AA4
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D2AA8
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 800D2AAC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800D2AB0
  if (crb(c,2)) { goto L_800D2ABC; } // 800D2AB4
  c->r[3]=0u+0x00000000u; // 800D2AB8
L_800D2ABC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D2ABC
  if (crb(c,2)) { goto L_800D2AC8; } // 800D2AC0
  c->r[6]=0u+0x00000001u; // 800D2AC4
L_800D2AC8:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D2AC8
  if (crb(c,2)) { goto L_800D2AF8; } // 800D2ACC
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D2AD0
  c->r[3]=0u+0x00000001u; // 800D2AD4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800D2AD8
  if (!crb(c,2)) { goto L_800D2AEC; } // 800D2ADC
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 800D2AE0
  if (crb(c,2)) { goto L_800D2AEC; } // 800D2AE4
  c->r[3]=0u+0x00000000u; // 800D2AE8
L_800D2AEC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D2AEC
  if (crb(c,2)) { goto L_800D2AF8; } // 800D2AF0
  c->r[5]=0u+0x00000001u; // 800D2AF4
L_800D2AF8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D2AF8
  if (crb(c,2)) { goto L_800D2B64; } // 800D2AFC
  c->r[0]=c->r[4]+0x00000007u; // 800D2B00
  c->r[3]=c->r[1]+0x00000108u; // 800D2B04
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D2B08
  c->ctr=c->r[0]; // 800D2B0C
  cmps(c,0,(int32_t)c->r[4],1); // 800D2B10
  if (crb(c,0)) { goto L_800D2B64; } // 800D2B14
L_800D2B18:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800D2B18
  c->r[8]=c->r[8]+0x00000008u; // 800D2B1C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=RF64(ea);} // 800D2B20
  c->f[6]=c->f[6]+c->f[1]; // 800D2B24
  {uint32_t ea=c->r[3]+0x00000010u; c->f[5]=RF64(ea);} // 800D2B28
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=RF64(ea);} // 800D2B2C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=RF64(ea);} // 800D2B30
  c->f[6]=c->f[6]+c->f[0]; // 800D2B34
  {uint32_t ea=c->r[3]+0x00000028u; c->f[2]=RF64(ea);} // 800D2B38
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=RF64(ea);} // 800D2B3C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=RF64(ea);} // 800D2B40
  c->r[3]=c->r[3]+0x00000040u; // 800D2B44
  c->f[6]=c->f[6]+c->f[5]; // 800D2B48
  c->f[6]=c->f[6]+c->f[4]; // 800D2B4C
  c->f[6]=c->f[6]+c->f[3]; // 800D2B50
  c->f[6]=c->f[6]+c->f[2]; // 800D2B54
  c->f[6]=c->f[6]+c->f[1]; // 800D2B58
  c->f[6]=c->f[6]+c->f[0]; // 800D2B5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2B18; } // 800D2B60
L_800D2B64:;
  c->r[0]=c->r[23]+0x00000001u; // 800D2B64
  c->r[3]=rotl(c->r[8],3)&0xFFFFFFF8u; // 800D2B68
  c->r[4]=c->r[1]+0x00000100u; // 800D2B6C
  c->r[0]=c->r[0]-c->r[8]; // 800D2B70
  c->r[4]=c->r[4]+c->r[3]; // 800D2B74
  c->ctr=c->r[0]; // 800D2B78
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[23]); // 800D2B7C
  if (crb(c,1)) { goto L_800D2B94; } // 800D2B80
L_800D2B84:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 800D2B84
  c->r[4]=c->r[4]+0x00000008u; // 800D2B88
  c->f[6]=c->f[6]+c->f[0]; // 800D2B8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2B84; } // 800D2B90
L_800D2B94:;
  cmps(c,0,(int32_t)c->r[18],0); // 800D2B94
  if (!crb(c,2)) { goto L_800D2BA0; } // 800D2B98
  goto L_800D2BA4; // 800D2B9C
L_800D2BA0:;
  c->f[6]=-c->f[6]; // 800D2BA0
L_800D2BA4:;
  {uint32_t ea=c->r[17]+0x00000008u; WF64(ea,c->f[6]);} // 800D2BA4
  goto L_800D3000; // 800D2BA8
L_800D2BAC:;
  cmps(c,1,(int32_t)c->r[23],0); // 800D2BAC
  c->r[5]=c->r[23]|c->r[23]; // 800D2BB0
  if (!crb(c,5)) { goto L_800D2CEC; } // 800D2BB4
  cmps(c,0,(int32_t)c->r[23],8); // 800D2BB8
  if (!crb(c,1)) { goto L_800D2CB4; } // 800D2BBC
  c->r[4]=0u+0x00000000u; // 800D2BC0
  if (crb(c,4)) { goto L_800D2BDC; } // 800D2BC4
  c->r[3]=0u+0x80000000u; // 800D2BC8
  c->r[0]=c->r[3]+0x00000001u; // 800D2BCC
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 800D2BD0
  if (crb(c,0)) { goto L_800D2BDC; } // 800D2BD4
  c->r[4]=0u+0x00000001u; // 800D2BD8
L_800D2BDC:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D2BDC
  if (crb(c,2)) { goto L_800D2CB4; } // 800D2BE0
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D2BE4
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D2BE8
  c->r[4]=c->r[1]+0x00000100u; // 800D2BEC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D2BF0
  c->r[4]=c->r[4]+c->r[3]; // 800D2BF4
  c->ctr=c->r[0]; // 800D2BF8
  cmps(c,0,(int32_t)c->r[23],8); // 800D2BFC
  if (!crb(c,1)) { goto L_800D2CB4; } // 800D2C00
L_800D2C04:;
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D2C04
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 800D2C08
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 800D2C0C
  c->f[2]=c->f[0]+c->f[1]; // 800D2C10
  c->f[0]=c->f[0]-c->f[2]; // 800D2C14
  c->f[0]=c->f[1]+c->f[0]; // 800D2C18
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 800D2C1C
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[0]=RF64(ea);} // 800D2C20
  c->f[1]=c->f[0]+c->f[2]; // 800D2C24
  c->f[0]=c->f[0]-c->f[1]; // 800D2C28
  c->f[0]=c->f[2]+c->f[0]; // 800D2C2C
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; WF64(ea,c->f[0]);} // 800D2C30
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[0]=RF64(ea);} // 800D2C34
  c->f[2]=c->f[0]+c->f[1]; // 800D2C38
  c->f[0]=c->f[0]-c->f[2]; // 800D2C3C
  c->f[0]=c->f[1]+c->f[0]; // 800D2C40
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; WF64(ea,c->f[0]);} // 800D2C44
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[0]=RF64(ea);} // 800D2C48
  c->f[1]=c->f[0]+c->f[2]; // 800D2C4C
  c->f[0]=c->f[0]-c->f[1]; // 800D2C50
  c->f[0]=c->f[2]+c->f[0]; // 800D2C54
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; WF64(ea,c->f[0]);} // 800D2C58
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[0]=RF64(ea);} // 800D2C5C
  c->f[2]=c->f[0]+c->f[1]; // 800D2C60
  c->f[0]=c->f[0]-c->f[2]; // 800D2C64
  c->f[0]=c->f[1]+c->f[0]; // 800D2C68
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; WF64(ea,c->f[0]);} // 800D2C6C
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[0]=RF64(ea);} // 800D2C70
  c->f[1]=c->f[0]+c->f[2]; // 800D2C74
  c->f[0]=c->f[0]-c->f[1]; // 800D2C78
  c->f[0]=c->f[2]+c->f[0]; // 800D2C7C
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; WF64(ea,c->f[0]);} // 800D2C80
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 800D2C84
  c->f[2]=c->f[0]+c->f[1]; // 800D2C88
  c->f[0]=c->f[0]-c->f[2]; // 800D2C8C
  c->f[0]=c->f[1]+c->f[0]; // 800D2C90
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; WF64(ea,c->f[0]);} // 800D2C94
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; c->f[0]=RF64(ea);} // 800D2C98
  c->f[1]=c->f[0]+c->f[2]; // 800D2C9C
  c->f[0]=c->f[0]-c->f[1]; // 800D2CA0
  c->f[0]=c->f[2]+c->f[0]; // 800D2CA4
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; WF64(ea,c->f[0]);} // 800D2CA8
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; WF64(ea,c->f[1]); c->r[4]=ea;} // 800D2CAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2C04; } // 800D2CB0
L_800D2CB4:;
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D2CB4
  c->r[3]=c->r[1]+0x00000100u; // 800D2CB8
  c->r[3]=c->r[3]+c->r[0]; // 800D2CBC
  c->ctr=c->r[5]; // 800D2CC0
  cmps(c,0,(int32_t)c->r[5],0); // 800D2CC4
  if (!crb(c,1)) { goto L_800D2CEC; } // 800D2CC8
L_800D2CCC:;
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D2CCC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800D2CD0
  c->f[2]=c->f[0]+c->f[1]; // 800D2CD4
  c->f[0]=c->f[0]-c->f[2]; // 800D2CD8
  c->f[0]=c->f[1]+c->f[0]; // 800D2CDC
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D2CE0
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; WF64(ea,c->f[2]); c->r[3]=ea;} // 800D2CE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2CCC; } // 800D2CE8
L_800D2CEC:;
  cmps(c,1,(int32_t)c->r[23],1); // 800D2CEC
  c->r[6]=c->r[23]|c->r[23]; // 800D2CF0
  if (!crb(c,5)) { goto L_800D2E74; } // 800D2CF4
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D2CF8
  cmps(c,0,(int32_t)c->r[0],8); // 800D2CFC
  if (!crb(c,1)) { goto L_800D2E38; } // 800D2D00
  c->r[4]=0u+0x00000000u; // 800D2D04
  c->r[5]=0u+0x00000000u; // 800D2D08
  if (crb(c,4)) { goto L_800D2D24; } // 800D2D0C
  c->r[3]=0u+0x80000000u; // 800D2D10
  c->r[0]=c->r[3]+0x00000001u; // 800D2D14
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 800D2D18
  if (crb(c,0)) { goto L_800D2D24; } // 800D2D1C
  c->r[5]=0u+0x00000001u; // 800D2D20
L_800D2D24:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D2D24
  if (crb(c,2)) { goto L_800D2D60; } // 800D2D28
  c->r[5]=rotl(c->r[23],0)&0x80000000u; // 800D2D2C
  c->r[3]=0u+0x00000001u; // 800D2D30
  c->r[0]=c->r[5]+0x80000000u; // 800D2D34
  cmpu(c,0,c->r[0],0x00000000u); // 800D2D38
  if (!crb(c,2)) { goto L_800D2D54; } // 800D2D3C
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D2D40
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 800D2D44
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800D2D48
  if (crb(c,2)) { goto L_800D2D54; } // 800D2D4C
  c->r[3]=0u+0x00000000u; // 800D2D50
L_800D2D54:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D2D54
  if (crb(c,2)) { goto L_800D2D60; } // 800D2D58
  c->r[4]=0u+0x00000001u; // 800D2D5C
L_800D2D60:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D2D60
  if (crb(c,2)) { goto L_800D2E38; } // 800D2D64
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 800D2D68
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D2D6C
  c->r[4]=c->r[1]+0x00000100u; // 800D2D70
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D2D74
  c->r[4]=c->r[4]+c->r[3]; // 800D2D78
  c->ctr=c->r[0]; // 800D2D7C
  cmps(c,0,(int32_t)c->r[23],9); // 800D2D80
  if (!crb(c,1)) { goto L_800D2E38; } // 800D2D84
L_800D2D88:;
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D2D88
  c->r[6]=c->r[6]+0xFFFFFFF8u; // 800D2D8C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 800D2D90
  c->f[2]=c->f[0]+c->f[1]; // 800D2D94
  c->f[0]=c->f[0]-c->f[2]; // 800D2D98
  c->f[0]=c->f[1]+c->f[0]; // 800D2D9C
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 800D2DA0
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[0]=RF64(ea);} // 800D2DA4
  c->f[1]=c->f[0]+c->f[2]; // 800D2DA8
  c->f[0]=c->f[0]-c->f[1]; // 800D2DAC
  c->f[0]=c->f[2]+c->f[0]; // 800D2DB0
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; WF64(ea,c->f[0]);} // 800D2DB4
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[0]=RF64(ea);} // 800D2DB8
  c->f[2]=c->f[0]+c->f[1]; // 800D2DBC
  c->f[0]=c->f[0]-c->f[2]; // 800D2DC0
  c->f[0]=c->f[1]+c->f[0]; // 800D2DC4
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; WF64(ea,c->f[0]);} // 800D2DC8
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[0]=RF64(ea);} // 800D2DCC
  c->f[1]=c->f[0]+c->f[2]; // 800D2DD0
  c->f[0]=c->f[0]-c->f[1]; // 800D2DD4
  c->f[0]=c->f[2]+c->f[0]; // 800D2DD8
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; WF64(ea,c->f[0]);} // 800D2DDC
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[0]=RF64(ea);} // 800D2DE0
  c->f[2]=c->f[0]+c->f[1]; // 800D2DE4
  c->f[0]=c->f[0]-c->f[2]; // 800D2DE8
  c->f[0]=c->f[1]+c->f[0]; // 800D2DEC
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; WF64(ea,c->f[0]);} // 800D2DF0
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[0]=RF64(ea);} // 800D2DF4
  c->f[1]=c->f[0]+c->f[2]; // 800D2DF8
  c->f[0]=c->f[0]-c->f[1]; // 800D2DFC
  c->f[0]=c->f[2]+c->f[0]; // 800D2E00
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; WF64(ea,c->f[0]);} // 800D2E04
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 800D2E08
  c->f[2]=c->f[0]+c->f[1]; // 800D2E0C
  c->f[0]=c->f[0]-c->f[2]; // 800D2E10
  c->f[0]=c->f[1]+c->f[0]; // 800D2E14
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; WF64(ea,c->f[0]);} // 800D2E18
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; c->f[0]=RF64(ea);} // 800D2E1C
  c->f[1]=c->f[0]+c->f[2]; // 800D2E20
  c->f[0]=c->f[0]-c->f[1]; // 800D2E24
  c->f[0]=c->f[2]+c->f[0]; // 800D2E28
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; WF64(ea,c->f[0]);} // 800D2E2C
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; WF64(ea,c->f[1]); c->r[4]=ea;} // 800D2E30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2D88; } // 800D2E34
L_800D2E38:;
  c->r[3]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D2E38
  c->r[4]=c->r[1]+0x00000100u; // 800D2E3C
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800D2E40
  c->r[4]=c->r[4]+c->r[3]; // 800D2E44
  c->ctr=c->r[0]; // 800D2E48
  cmps(c,0,(int32_t)c->r[6],1); // 800D2E4C
  if (!crb(c,1)) { goto L_800D2E74; } // 800D2E50
L_800D2E54:;
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D2E54
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 800D2E58
  c->f[2]=c->f[0]+c->f[1]; // 800D2E5C
  c->f[0]=c->f[0]-c->f[2]; // 800D2E60
  c->f[0]=c->f[1]+c->f[0]; // 800D2E64
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 800D2E68
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; WF64(ea,c->f[2]); c->r[4]=ea;} // 800D2E6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2E54; } // 800D2E70
L_800D2E74:;
  cmps(c,1,(int32_t)c->r[23],2); // 800D2E74
  {uint32_t ea=c->r[2]+0xFFFF9418u; c->f[6]=RF64(ea);} // 800D2E78
  if (crb(c,4)) { goto L_800D2FC0; } // 800D2E7C
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D2E80
  cmps(c,0,(int32_t)c->r[0],8); // 800D2E84
  if (!crb(c,1)) { goto L_800D2F94; } // 800D2E88
  c->r[4]=0u+0x00000000u; // 800D2E8C
  c->r[5]=0u+0x00000000u; // 800D2E90
  c->r[6]=0u+0x00000000u; // 800D2E94
  if (crb(c,4)) { goto L_800D2EB0; } // 800D2E98
  c->r[3]=0u+0x80000000u; // 800D2E9C
  c->r[0]=c->r[3]+0x00000001u; // 800D2EA0
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 800D2EA4
  if (crb(c,0)) { goto L_800D2EB0; } // 800D2EA8
  c->r[6]=0u+0x00000001u; // 800D2EAC
L_800D2EB0:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D2EB0
  if (crb(c,2)) { goto L_800D2EEC; } // 800D2EB4
  c->r[6]=rotl(c->r[23],0)&0x80000000u; // 800D2EB8
  c->r[3]=0u+0x00000001u; // 800D2EBC
  c->r[0]=c->r[6]+0x80000000u; // 800D2EC0
  cmpu(c,0,c->r[0],0x00000000u); // 800D2EC4
  if (!crb(c,2)) { goto L_800D2EE0; } // 800D2EC8
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 800D2ECC
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 800D2ED0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D2ED4
  if (crb(c,2)) { goto L_800D2EE0; } // 800D2ED8
  c->r[3]=0u+0x00000000u; // 800D2EDC
L_800D2EE0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D2EE0
  if (crb(c,2)) { goto L_800D2EEC; } // 800D2EE4
  c->r[5]=0u+0x00000001u; // 800D2EE8
L_800D2EEC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D2EEC
  if (crb(c,2)) { goto L_800D2F20; } // 800D2EF0
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 800D2EF4
  c->r[3]=0u+0x00000001u; // 800D2EF8
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800D2EFC
  if (!crb(c,2)) { goto L_800D2F14; } // 800D2F00
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D2F04
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800D2F08
  if (crb(c,2)) { goto L_800D2F14; } // 800D2F0C
  c->r[3]=0u+0x00000000u; // 800D2F10
L_800D2F14:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D2F14
  if (crb(c,2)) { goto L_800D2F20; } // 800D2F18
  c->r[4]=0u+0x00000001u; // 800D2F1C
L_800D2F20:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D2F20
  if (crb(c,2)) { goto L_800D2F94; } // 800D2F24
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 800D2F28
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D2F2C
  c->r[4]=c->r[1]+0x00000100u; // 800D2F30
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D2F34
  c->r[4]=c->r[4]+c->r[3]; // 800D2F38
  c->ctr=c->r[0]; // 800D2F3C
  cmps(c,0,(int32_t)c->r[23],10); // 800D2F40
  if (crb(c,0)) { goto L_800D2F94; } // 800D2F44
L_800D2F48:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 800D2F48
  c->r[23]=c->r[23]+0xFFFFFFF8u; // 800D2F4C
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D2F50
  c->f[6]=c->f[6]+c->f[1]; // 800D2F54
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[5]=RF64(ea);} // 800D2F58
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[4]=RF64(ea);} // 800D2F5C
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[3]=RF64(ea);} // 800D2F60
  c->f[6]=c->f[6]+c->f[0]; // 800D2F64
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[2]=RF64(ea);} // 800D2F68
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[1]=RF64(ea);} // 800D2F6C
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 800D2F70
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 800D2F74
  c->f[6]=c->f[6]+c->f[5]; // 800D2F78
  c->f[6]=c->f[6]+c->f[4]; // 800D2F7C
  c->f[6]=c->f[6]+c->f[3]; // 800D2F80
  c->f[6]=c->f[6]+c->f[2]; // 800D2F84
  c->f[6]=c->f[6]+c->f[1]; // 800D2F88
  c->f[6]=c->f[6]+c->f[0]; // 800D2F8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2F48; } // 800D2F90
L_800D2F94:;
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D2F94
  c->r[4]=c->r[1]+0x00000100u; // 800D2F98
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D2F9C
  c->r[4]=c->r[4]+c->r[3]; // 800D2FA0
  c->ctr=c->r[0]; // 800D2FA4
  cmps(c,0,(int32_t)c->r[23],2); // 800D2FA8
  if (crb(c,0)) { goto L_800D2FC0; } // 800D2FAC
L_800D2FB0:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 800D2FB0
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 800D2FB4
  c->f[6]=c->f[6]+c->f[0]; // 800D2FB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D2FB0; } // 800D2FBC
L_800D2FC0:;
  cmps(c,0,(int32_t)c->r[18],0); // 800D2FC0
  if (!crb(c,2)) { goto L_800D2FE0; } // 800D2FC4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[1]=RF64(ea);} // 800D2FC8
  {uint32_t ea=c->r[1]+0x00000108u; c->f[0]=RF64(ea);} // 800D2FCC
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[1]);} // 800D2FD0
  {uint32_t ea=c->r[17]+0x00000008u; WF64(ea,c->f[0]);} // 800D2FD4
  {uint32_t ea=c->r[17]+0x00000010u; WF64(ea,c->f[6]);} // 800D2FD8
  goto L_800D3000; // 800D2FDC
L_800D2FE0:;
  {uint32_t ea=c->r[1]+0x00000100u; c->f[2]=RF64(ea);} // 800D2FE0
  c->f[0]=-c->f[6]; // 800D2FE4
  {uint32_t ea=c->r[1]+0x00000108u; c->f[1]=RF64(ea);} // 800D2FE8
  c->f[2]=-c->f[2]; // 800D2FEC
  c->f[1]=-c->f[1]; // 800D2FF0
  {uint32_t ea=c->r[17]+0x00000010u; WF64(ea,c->f[0]);} // 800D2FF4
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[2]);} // 800D2FF8
  {uint32_t ea=c->r[17]+0x00000008u; WF64(ea,c->f[1]);} // 800D2FFC
L_800D3000:;
  c->r[11]=c->r[1]+0x00000370u; // 800D3000
  c->r[3]=rotl(c->r[20],0)&0x00000007u; // 800D3004
  c->lr=0x800D300Cu; { {uint32_t ea=c->r[11]+0xFFFFFFB8u; c->f[23]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFC0u; c->f[24]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFC8u; c->f[25]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFD0u; c->f[26]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFD8u; c->f[27]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} } // 800D3008
  {uint32_t ea=c->r[1]+0x000002E0u; for(int i=14;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D300C
  c->r[0]=R32(c->r[1]+0x00000374u); // 800D3010
  c->lr=c->r[0]; // 800D3014
  c->r[1]=c->r[1]+0x00000370u; // 800D3018
  return; // 800D301C
}

// __kernel_sin
void f_800D3020(Ctx* __restrict c) {
  trace_call(0x800D3020u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3020
  c->r[0]=0u+0x3E400000u; // 800D3024
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D3028
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D302C
  c->r[4]=rotl(c->r[4],0)&0x7FFFFFFFu; // 800D3030
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D3034
  if (!crb(c,0)) { goto L_800D3054; } // 800D3038
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D303C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D3040
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3044
  cmps(c,0,(int32_t)c->r[0],0); // 800D3048
  if (!crb(c,2)) { goto L_800D3054; } // 800D304C
  goto L_800D30D8; // 800D3050
L_800D3054:;
  c->f[7]=c->f[1]*c->f[1]; // 800D3054
  {uint32_t ea=c->r[2]+0xFFFF9478u; c->f[0]=RF64(ea);} // 800D3058
  {uint32_t ea=c->r[2]+0xFFFF9470u; c->f[5]=RF64(ea);} // 800D305C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3060
  {uint32_t ea=c->r[2]+0xFFFF9468u; c->f[4]=RF64(ea);} // 800D3064
  {uint32_t ea=c->r[2]+0xFFFF9460u; c->f[3]=RF64(ea);} // 800D3068
  c->f[6]=c->f[0]*c->f[7]; // 800D306C
  {uint32_t ea=c->r[2]+0xFFFF9458u; c->f[0]=RF64(ea);} // 800D3070
  c->f[8]=c->f[7]*c->f[1]; // 800D3074
  c->f[5]=c->f[5]+c->f[6]; // 800D3078
  c->f[5]=c->f[7]*c->f[5]; // 800D307C
  c->f[4]=c->f[4]+c->f[5]; // 800D3080
  c->f[4]=c->f[7]*c->f[4]; // 800D3084
  c->f[3]=c->f[3]+c->f[4]; // 800D3088
  c->f[3]=c->f[7]*c->f[3]; // 800D308C
  c->f[0]=c->f[0]+c->f[3]; // 800D3090
  if (!crb(c,2)) { goto L_800D30B0; } // 800D3094
  c->f[2]=c->f[7]*c->f[0]; // 800D3098
  {uint32_t ea=c->r[2]+0xFFFF9480u; c->f[0]=RF64(ea);} // 800D309C
  c->f[0]=c->f[0]+c->f[2]; // 800D30A0
  c->f[0]=c->f[8]*c->f[0]; // 800D30A4
  c->f[1]=c->f[1]+c->f[0]; // 800D30A8
  goto L_800D30D8; // 800D30AC
L_800D30B0:;
  {uint32_t ea=c->r[2]+0xFFFF9488u; c->f[4]=RF64(ea);} // 800D30B0
  c->f[3]=c->f[8]*c->f[0]; // 800D30B4
  {uint32_t ea=c->r[2]+0xFFFF9480u; c->f[0]=RF64(ea);} // 800D30B8
  c->f[4]=c->f[4]*c->f[2]; // 800D30BC
  c->f[0]=c->f[0]*c->f[8]; // 800D30C0
  c->f[3]=c->f[4]-c->f[3]; // 800D30C4
  c->f[3]=c->f[7]*c->f[3]; // 800D30C8
  c->f[2]=c->f[3]-c->f[2]; // 800D30CC
  c->f[0]=c->f[2]-c->f[0]; // 800D30D0
  c->f[1]=c->f[1]-c->f[0]; // 800D30D4
L_800D30D8:;
  c->r[1]=c->r[1]+0x00000020u; // 800D30D8
  return; // 800D30DC
}

// atan
void f_800D30E0(Ctx* __restrict c) {
  trace_call(0x800D30E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D30E0
  c->r[5]=0u+0x801F0000u; // 800D30E4
  c->r[0]=0u+0x44100000u; // 800D30E8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D30EC
  c->r[5]=c->r[5]+0x00004A48u; // 800D30F0
  c->r[6]=R32(c->r[1]+0x00000008u); // 800D30F4
  c->r[4]=rotl(c->r[6],0)&0x7FFFFFFFu; // 800D30F8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D30FC
  if (crb(c,0)) { goto L_800D316C; } // 800D3100
  c->r[0]=0u+0x7FF00000u; // 800D3104
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D3108
  if (crb(c,1)) { goto L_800D3128; } // 800D310C
  c->r[0]=c->r[4]+0x80100000u; // 800D3110
  cmpu(c,0,c->r[0],0x00000000u); // 800D3114
  if (!crb(c,2)) { goto L_800D3130; } // 800D3118
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D311C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3120
  if (crb(c,2)) { goto L_800D3130; } // 800D3124
L_800D3128:;
  c->f[1]=c->f[1]+c->f[1]; // 800D3128
  goto L_800D3318; // 800D312C
L_800D3130:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D3130
  if (!crb(c,1)) { goto L_800D3150; } // 800D3134
  c->r[4]=c->r[5]+0x00000000u; // 800D3138
  c->r[3]=c->r[5]+0x00000020u; // 800D313C
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 800D3140
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=RF64(ea);} // 800D3144
  c->f[1]=c->f[1]+c->f[0]; // 800D3148
  goto L_800D3318; // 800D314C
L_800D3150:;
  c->r[4]=c->r[5]+0x00000000u; // 800D3150
  c->r[3]=c->r[5]+0x00000020u; // 800D3154
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 800D3158
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=RF64(ea);} // 800D315C
  c->f[1]=-c->f[1]; // 800D3160
  c->f[1]=c->f[1]-c->f[0]; // 800D3164
  goto L_800D3318; // 800D3168
L_800D316C:;
  c->r[0]=0u+0x3FDC0000u; // 800D316C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D3170
  if (!crb(c,0)) { goto L_800D31A4; } // 800D3174
  c->r[0]=0u+0x3E200000u; // 800D3178
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D317C
  if (!crb(c,0)) { goto L_800D319C; } // 800D3180
  {uint32_t ea=c->r[2]+0xFFFF9490u; c->f[2]=RF64(ea);} // 800D3184
  {uint32_t ea=c->r[2]+0xFFFF9498u; c->f[0]=RF64(ea);} // 800D3188
  c->f[2]=c->f[2]+c->f[1]; // 800D318C
  fcmp(c,0,c->f[2],c->f[0]); // 800D3190
  if (!crb(c,1)) { goto L_800D319C; } // 800D3194
  goto L_800D3318; // 800D3198
L_800D319C:;
  c->r[0]=0u+0xFFFFFFFFu; // 800D319C
  goto L_800D3244; // 800D31A0
L_800D31A4:;
  c->r[0]=0u+0x3FF30000u; // 800D31A4
  c->f[3]=std::fabs(c->f[1]); // 800D31A8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D31AC
  if (!crb(c,0)) { goto L_800D3200; } // 800D31B0
  c->r[0]=0u+0x3FE60000u; // 800D31B4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D31B8
  if (!crb(c,0)) { goto L_800D31E4; } // 800D31BC
  {uint32_t ea=c->r[2]+0xFFFF94A0u; c->f[0]=RF64(ea);} // 800D31C0
  c->r[0]=0u+0x00000000u; // 800D31C4
  {uint32_t ea=c->r[2]+0xFFFF9498u; c->f[1]=RF64(ea);} // 800D31C8
  c->f[2]=c->f[0]*c->f[3]; // 800D31CC
  c->f[0]=c->f[0]+c->f[3]; // 800D31D0
  c->f[1]=c->f[2]-c->f[1]; // 800D31D4
  c->f[1]=c->f[1]/c->f[0]; // 800D31D8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D31DC
  goto L_800D3244; // 800D31E0
L_800D31E4:;
  {uint32_t ea=c->r[2]+0xFFFF9498u; c->f[0]=RF64(ea);} // 800D31E4
  c->r[0]=0u+0x00000001u; // 800D31E8
  c->f[1]=c->f[3]-c->f[0]; // 800D31EC
  c->f[0]=c->f[0]+c->f[3]; // 800D31F0
  c->f[1]=c->f[1]/c->f[0]; // 800D31F4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D31F8
  goto L_800D3244; // 800D31FC
L_800D3200:;
  c->r[3]=0u+0x40040000u; // 800D3200
  c->r[0]=c->r[3]+0xFFFF8000u; // 800D3204
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D3208
  if (!crb(c,0)) { goto L_800D3234; } // 800D320C
  {uint32_t ea=c->r[2]+0xFFFF94A8u; c->f[2]=RF64(ea);} // 800D3210
  c->r[0]=0u+0x00000002u; // 800D3214
  {uint32_t ea=c->r[2]+0xFFFF9498u; c->f[0]=RF64(ea);} // 800D3218
  c->f[1]=c->f[2]*c->f[3]; // 800D321C
  c->f[2]=c->f[3]-c->f[2]; // 800D3220
  c->f[0]=c->f[0]+c->f[1]; // 800D3224
  c->f[1]=c->f[2]/c->f[0]; // 800D3228
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D322C
  goto L_800D3244; // 800D3230
L_800D3234:;
  {uint32_t ea=c->r[2]+0xFFFF94B0u; c->f[0]=RF64(ea);} // 800D3234
  c->r[0]=0u+0x00000003u; // 800D3238
  c->f[1]=c->f[0]/c->f[3]; // 800D323C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D3240
L_800D3244:;
  c->f[0]=c->f[1]*c->f[1]; // 800D3244
  c->r[3]=c->r[5]+0x00000040u; // 800D3248
  {uint32_t ea=c->r[3]+0x00000050u; c->f[3]=RF64(ea);} // 800D324C
  cmps(c,0,(int32_t)c->r[0],0); // 800D3250
  {uint32_t ea=c->r[3]+0x00000048u; c->f[2]=RF64(ea);} // 800D3254
  {uint32_t ea=c->r[3]+0x00000040u; c->f[11]=RF64(ea);} // 800D3258
  c->f[13]=c->f[0]*c->f[0]; // 800D325C
  {uint32_t ea=c->r[3]+0x00000038u; c->f[5]=RF64(ea);} // 800D3260
  {uint32_t ea=c->r[3]+0x00000030u; c->f[10]=RF64(ea);} // 800D3264
  {uint32_t ea=c->r[3]+0x00000028u; c->f[4]=RF64(ea);} // 800D3268
  {uint32_t ea=c->r[3]+0x00000020u; c->f[9]=RF64(ea);} // 800D326C
  c->f[12]=c->f[13]*c->f[3]; // 800D3270
  {uint32_t ea=c->r[3]+0x00000018u; c->f[3]=RF64(ea);} // 800D3274
  c->f[6]=c->f[13]*c->f[2]; // 800D3278
  {uint32_t ea=c->r[3]+0x00000010u; c->f[8]=RF64(ea);} // 800D327C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=RF64(ea);} // 800D3280
  c->f[11]=c->f[11]+c->f[12]; // 800D3284
  {uint32_t ea=c->r[5]+0x00000040u; c->f[7]=RF64(ea);} // 800D3288
  c->f[5]=c->f[5]+c->f[6]; // 800D328C
  c->f[6]=c->f[13]*c->f[11]; // 800D3290
  c->f[5]=c->f[13]*c->f[5]; // 800D3294
  c->f[6]=c->f[10]+c->f[6]; // 800D3298
  c->f[4]=c->f[4]+c->f[5]; // 800D329C
  c->f[5]=c->f[13]*c->f[6]; // 800D32A0
  c->f[4]=c->f[13]*c->f[4]; // 800D32A4
  c->f[5]=c->f[9]+c->f[5]; // 800D32A8
  c->f[3]=c->f[3]+c->f[4]; // 800D32AC
  c->f[4]=c->f[13]*c->f[5]; // 800D32B0
  c->f[3]=c->f[13]*c->f[3]; // 800D32B4
  c->f[4]=c->f[8]+c->f[4]; // 800D32B8
  c->f[2]=c->f[2]+c->f[3]; // 800D32BC
  c->f[3]=c->f[13]*c->f[4]; // 800D32C0
  c->f[4]=c->f[13]*c->f[2]; // 800D32C4
  c->f[2]=c->f[7]+c->f[3]; // 800D32C8
  c->f[0]=c->f[0]*c->f[2]; // 800D32CC
  if (!crb(c,0)) { goto L_800D32E4; } // 800D32D0
  c->f[0]=c->f[0]+c->f[4]; // 800D32D4
  c->f[0]=c->f[1]*c->f[0]; // 800D32D8
  c->f[1]=c->f[1]-c->f[0]; // 800D32DC
  goto L_800D3318; // 800D32E0
L_800D32E4:;
  c->f[0]=c->f[0]+c->f[4]; // 800D32E4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D32E8
  c->r[3]=c->r[5]+0x00000020u; // 800D32EC
  c->r[4]=c->r[5]+0x00000000u; // 800D32F0
  {uint32_t ea=c->r[3]+c->r[0]; c->f[2]=RF64(ea);} // 800D32F4
  cmps(c,0,(int32_t)c->r[6],0); // 800D32F8
  c->f[3]=c->f[1]*c->f[0]; // 800D32FC
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=RF64(ea);} // 800D3300
  c->f[2]=c->f[3]-c->f[2]; // 800D3304
  c->f[1]=c->f[2]-c->f[1]; // 800D3308
  c->f[1]=c->f[0]-c->f[1]; // 800D330C
  if (!crb(c,0)) { goto L_800D3318; } // 800D3310
  c->f[1]=-c->f[1]; // 800D3314
L_800D3318:;
  c->r[1]=c->r[1]+0x00000010u; // 800D3318
  return; // 800D331C
}

// copysign
void f_800D3320(Ctx* __restrict c) {
  trace_call(0x800D3320u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3320
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D3324
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 800D3328
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D332C
  c->r[0]=R32(c->r[1]+0x00000010u); // 800D3330
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 800D3334
  c->r[0]=(rotl(c->r[3],0)&0x7FFFFFFFu)|(c->r[0]&~0x7FFFFFFFu); // 800D3338
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D333C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D3340
  c->r[1]=c->r[1]+0x00000020u; // 800D3344
  return; // 800D3348
}

// cos
void f_800D334C(Ctx* __restrict c) {
  trace_call(0x800D334Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D334C
  c->r[0]=c->lr; // 800D3350
  c->r[3]=0u+0x3FE90000u; // 800D3354
  {uint32_t ea=c->r[2]+0xFFFF94B8u; c->f[2]=RF64(ea);} // 800D3358
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D335C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3360
  c->r[0]=c->r[3]+0x000021FBu; // 800D3364
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D3368
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 800D336C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D3370
  if (crb(c,1)) { goto L_800D3380; } // 800D3374
  c->lr=0x800D337Cu; f_800D1804(c); // 800D3378
  goto L_800D3410; // 800D337C
L_800D3380:;
  c->r[0]=0u+0x7FF00000u; // 800D3380
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D3384
  if (crb(c,0)) { goto L_800D3394; } // 800D3388
  c->f[1]=c->f[1]-c->f[1]; // 800D338C
  goto L_800D3410; // 800D3390
L_800D3394:;
  c->r[3]=c->r[1]+0x00000010u; // 800D3394
  c->lr=0x800D339Cu; f_800D1400(c); // 800D3398
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 800D339C
  cmps(c,0,(int32_t)c->r[0],1); // 800D33A0
  if (crb(c,2)) { goto L_800D33D4; } // 800D33A4
  if (!crb(c,0)) { goto L_800D33B8; } // 800D33A8
  cmps(c,0,(int32_t)c->r[0],0); // 800D33AC
  if (!crb(c,0)) { goto L_800D33C4; } // 800D33B0
  goto L_800D3400; // 800D33B4
L_800D33B8:;
  cmps(c,0,(int32_t)c->r[0],3); // 800D33B8
  if (!crb(c,0)) { goto L_800D3400; } // 800D33BC
  goto L_800D33EC; // 800D33C0
L_800D33C4:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D33C4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D33C8
  c->lr=0x800D33D0u; f_800D1804(c); // 800D33CC
  goto L_800D3410; // 800D33D0
L_800D33D4:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D33D4
  c->r[3]=0u+0x00000001u; // 800D33D8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D33DC
  c->lr=0x800D33E4u; f_800D3020(c); // 800D33E0
  c->f[1]=-c->f[1]; // 800D33E4
  goto L_800D3410; // 800D33E8
L_800D33EC:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D33EC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D33F0
  c->lr=0x800D33F8u; f_800D1804(c); // 800D33F4
  c->f[1]=-c->f[1]; // 800D33F8
  goto L_800D3410; // 800D33FC
L_800D3400:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D3400
  c->r[3]=0u+0x00000001u; // 800D3404
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D3408
  c->lr=0x800D3410u; f_800D3020(c); // 800D340C
L_800D3410:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3410
  c->lr=c->r[0]; // 800D3414
  c->r[1]=c->r[1]+0x00000020u; // 800D3418
  return; // 800D341C
}

// floor
void f_800D3420(Ctx* __restrict c) {
  trace_call(0x800D3420u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3420
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D3424
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D3428
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800D342C
  c->r[3]=rotl(c->r[5],12)&0x000007FFu; // 800D3430
  c->r[7]=c->r[3]+0xFFFFFC01u; // 800D3434
  cmps(c,1,(int32_t)c->r[7],20); // 800D3438
  if (!crb(c,4)) { goto L_800D34D4; } // 800D343C
  cmps(c,0,(int32_t)c->r[7],0); // 800D3440
  if (!crb(c,0)) { goto L_800D3488; } // 800D3444
  {uint32_t ea=c->r[2]+0xFFFF94C0u; c->f[2]=RF64(ea);} // 800D3448
  {uint32_t ea=c->r[2]+0xFFFF94C8u; c->f[0]=RF64(ea);} // 800D344C
  c->f[1]=c->f[2]+c->f[1]; // 800D3450
  fcmp(c,0,c->f[1],c->f[0]); // 800D3454
  if (!crb(c,1)) { goto L_800D3550; } // 800D3458
  cmps(c,0,(int32_t)c->r[5],0); // 800D345C
  if (crb(c,0)) { goto L_800D3470; } // 800D3460
  c->r[6]=0u+0x00000000u; // 800D3464
  c->r[5]=0u+0x00000000u; // 800D3468
  goto L_800D3550; // 800D346C
L_800D3470:;
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFFu; // 800D3470
  c->r[0]=c->r[0]|c->r[6]; cr0(c,c->r[0]); // 800D3474
  if (crb(c,2)) { goto L_800D3550; } // 800D3478
  c->r[5]=0u+0xBFF00000u; // 800D347C
  c->r[6]=0u+0x00000000u; // 800D3480
  goto L_800D3550; // 800D3484
L_800D3488:;
  c->r[3]=0u+0x00100000u; // 800D3488
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D348C
  c->r[4]=sraw(c,c->r[0],(c->r[7])&63); // 800D3490
  c->r[0]=c->r[5]&c->r[4]; // 800D3494
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 800D3498
  if (!crb(c,2)) { goto L_800D34A4; } // 800D349C
  goto L_800D355C; // 800D34A0
L_800D34A4:;
  {uint32_t ea=c->r[2]+0xFFFF94C0u; c->f[2]=RF64(ea);} // 800D34A4
  {uint32_t ea=c->r[2]+0xFFFF94C8u; c->f[0]=RF64(ea);} // 800D34A8
  c->f[1]=c->f[2]+c->f[1]; // 800D34AC
  fcmp(c,0,c->f[1],c->f[0]); // 800D34B0
  if (!crb(c,1)) { goto L_800D3550; } // 800D34B4
  cmps(c,0,(int32_t)c->r[5],0); // 800D34B8
  if (!crb(c,0)) { goto L_800D34C8; } // 800D34BC
  c->r[0]=sraw(c,c->r[3],(c->r[7])&63); // 800D34C0
  c->r[5]=c->r[5]+c->r[0]; // 800D34C4
L_800D34C8:;
  c->r[5]=c->r[5]&~c->r[4]; // 800D34C8
  c->r[6]=0u+0x00000000u; // 800D34CC
  goto L_800D3550; // 800D34D0
L_800D34D4:;
  cmps(c,0,(int32_t)c->r[7],51); // 800D34D4
  if (!crb(c,1)) { goto L_800D34EC; } // 800D34D8
  cmps(c,0,(int32_t)c->r[7],1024); // 800D34DC
  if (!crb(c,2)) { goto L_800D355C; } // 800D34E0
  c->f[1]=c->f[1]+c->f[1]; // 800D34E4
  goto L_800D355C; // 800D34E8
L_800D34EC:;
  c->r[0]=c->r[7]+0xFFFFFFECu; // 800D34EC
  c->r[3]=0u+0xFFFFFFFFu; // 800D34F0
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D34F4
  c->r[0]=c->r[6]&c->r[4]; cr0(c,c->r[0]); // 800D34F8
  if (!crb(c,2)) { goto L_800D3504; } // 800D34FC
  goto L_800D355C; // 800D3500
L_800D3504:;
  {uint32_t ea=c->r[2]+0xFFFF94C0u; c->f[2]=RF64(ea);} // 800D3504
  {uint32_t ea=c->r[2]+0xFFFF94C8u; c->f[0]=RF64(ea);} // 800D3508
  c->f[1]=c->f[2]+c->f[1]; // 800D350C
  fcmp(c,0,c->f[1],c->f[0]); // 800D3510
  if (!crb(c,1)) { goto L_800D3550; } // 800D3514
  cmps(c,0,(int32_t)c->r[5],0); // 800D3518
  if (!crb(c,0)) { goto L_800D354C; } // 800D351C
  if (!crb(c,6)) { goto L_800D352C; } // 800D3520
  c->r[5]=c->r[5]+0x00000001u; // 800D3524
  goto L_800D354C; // 800D3528
L_800D352C:;
  c->r[0]=addc(c,~c->r[7],0x00000034u,1); // 800D352C
  c->r[3]=0u+0x00000001u; // 800D3530
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800D3534
  c->r[0]=c->r[6]+c->r[0]; // 800D3538
  cmpu(c,0,c->r[0],c->r[6]); // 800D353C
  if (!crb(c,0)) { goto L_800D3548; } // 800D3540
  c->r[5]=c->r[5]+0x00000001u; // 800D3544
L_800D3548:;
  c->r[6]=c->r[0]|c->r[0]; // 800D3548
L_800D354C:;
  c->r[6]=c->r[6]&~c->r[4]; // 800D354C
L_800D3550:;
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D3550
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D3554
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D3558
L_800D355C:;
  c->r[1]=c->r[1]+0x00000010u; // 800D355C
  return; // 800D3560
}

// frexp
void f_800D3564(Ctx* __restrict c) {
  trace_call(0x800D3564u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3564
  c->r[4]=0u+0x00000000u; // 800D3568
  c->r[0]=0u+0x7FF00000u; // 800D356C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D3570
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D3574
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D3578
  c->r[4]=rotl(c->r[5],0)&0x7FFFFFFFu; // 800D357C
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800D3580
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D3584
  if (!crb(c,0)) { goto L_800D35E4; } // 800D3588
  c->r[0]=c->r[4]|c->r[6]; cr0(c,c->r[0]); // 800D358C
  if (!crb(c,2)) { goto L_800D3598; } // 800D3590
  goto L_800D35E4; // 800D3594
L_800D3598:;
  c->r[0]=0u+0x00100000u; // 800D3598
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D359C
  if (!crb(c,0)) { goto L_800D35C0; } // 800D35A0
  {uint32_t ea=c->r[2]+0xFFFF94D0u; c->f[0]=RF64(ea);} // 800D35A4
  c->r[0]=0u+0xFFFFFFCAu; // 800D35A8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D35AC
  c->f[1]=c->f[1]*c->f[0]; // 800D35B0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D35B4
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D35B8
  c->r[4]=rotl(c->r[5],0)&0x7FFFFFFFu; // 800D35BC
L_800D35C0:;
  c->r[0]=rotl(c->r[5],0)&0x800FFFFFu; // 800D35C0
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D35C4
  c->r[4]=sraw(c,c->r[4],20); // 800D35C8
  c->r[0]=c->r[0]|0x3FE00000u; // 800D35CC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D35D0
  c->r[4]=c->r[4]+c->r[5]; // 800D35D4
  c->r[0]=c->r[4]+0xFFFFFC02u; // 800D35D8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D35DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D35E0
L_800D35E4:;
  c->r[1]=c->r[1]+0x00000010u; // 800D35E4
  return; // 800D35E8
}

// ldexp
void f_800D35EC(Ctx* __restrict c) {
  trace_call(0x800D35ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D35EC
  c->r[0]=c->lr; // 800D35F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D35F4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800D35F8
  c->f[31]=c->f[1]; // 800D35FC
  W32(c->r[1]+0x00000014u,c->r[31]); // 800D3600
  c->r[31]=c->r[3]|c->r[3]; // 800D3604
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D3608
  c->lr=0x800D3610u; f_800C7E8C(c); // 800D360C
  cmps(c,0,(int32_t)c->r[3],2); // 800D3610
  if (!crb(c,1)) { goto L_800D3624; } // 800D3614
  {uint32_t ea=c->r[2]+0xFFFF94D8u; c->f[0]=RF64(ea);} // 800D3618
  fcmp(c,0,c->f[0],c->f[31]); // 800D361C
  if (!crb(c,2)) { goto L_800D362C; } // 800D3620
L_800D3624:;
  c->f[1]=c->f[31]; // 800D3624
  goto L_800D3740; // 800D3628
L_800D362C:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D362C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D3630
  c->r[4]=rotl(c->r[5],12)&0x000007FFu; cr0(c,c->r[4]); // 800D3634
  if (!crb(c,2)) { goto L_800D3684; } // 800D3638
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFFu; // 800D363C
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 800D3640
  if (!crb(c,2)) { goto L_800D3650; } // 800D3644
  c->f[1]=c->f[31]; // 800D3648
  goto L_800D3740; // 800D364C
L_800D3650:;
  {uint32_t ea=c->r[2]+0xFFFF94E0u; c->f[0]=RF64(ea);} // 800D3650
  c->r[3]=0u+0xFFFF0000u; // 800D3654
  c->r[0]=c->r[3]+0x00003CB0u; // 800D3658
  c->f[31]=c->f[31]*c->f[0]; // 800D365C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800D3660
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 800D3664
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D3668
  c->r[3]=rotl(c->r[5],12)&0x000007FFu; // 800D366C
  c->r[4]=c->r[3]+0xFFFFFFCAu; // 800D3670
  if (!crb(c,0)) { goto L_800D3684; } // 800D3674
  {uint32_t ea=c->r[2]+0xFFFF94E8u; c->f[0]=RF64(ea);} // 800D3678
  c->f[1]=c->f[0]*c->f[31]; // 800D367C
  goto L_800D3740; // 800D3680
L_800D3684:;
  cmps(c,0,(int32_t)c->r[4],2047); // 800D3684
  if (!crb(c,2)) { goto L_800D3694; } // 800D3688
  c->f[1]=c->f[31]+c->f[31]; // 800D368C
  goto L_800D3740; // 800D3690
L_800D3694:;
  c->r[4]=c->r[4]+c->r[31]; // 800D3694
  cmps(c,0,(int32_t)c->r[4],2046); // 800D3698
  if (!crb(c,1)) { goto L_800D36B8; } // 800D369C
  c->f[2]=c->f[31]; // 800D36A0
  {uint32_t ea=c->r[2]+0xFFFF94F0u; c->f[1]=RF64(ea);} // 800D36A4
  c->lr=0x800D36ACu; f_800D3320(c); // 800D36A8
  {uint32_t ea=c->r[2]+0xFFFF94F0u; c->f[0]=RF64(ea);} // 800D36AC
  c->f[1]=c->f[0]*c->f[1]; // 800D36B0
  goto L_800D3740; // 800D36B4
L_800D36B8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D36B8
  if (!crb(c,1)) { goto L_800D36D8; } // 800D36BC
  c->r[3]=rotl(c->r[5],0)&0x800FFFFFu; // 800D36C0
  c->r[0]=rotl(c->r[4],20)&0xFFF00000u; // 800D36C4
  c->r[0]=c->r[3]|c->r[0]; // 800D36C8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D36CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D36D0
  goto L_800D3740; // 800D36D4
L_800D36D8:;
  cmps(c,0,(int32_t)c->r[4],-54); // 800D36D8
  if (crb(c,1)) { goto L_800D3720; } // 800D36DC
  c->r[3]=0u+0x00010000u; // 800D36E0
  c->r[0]=c->r[3]+0xFFFFC350u; // 800D36E4
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800D36E8
  if (!crb(c,1)) { goto L_800D3708; } // 800D36EC
  c->f[2]=c->f[31]; // 800D36F0
  {uint32_t ea=c->r[2]+0xFFFF94F0u; c->f[1]=RF64(ea);} // 800D36F4
  c->lr=0x800D36FCu; f_800D3320(c); // 800D36F8
  {uint32_t ea=c->r[2]+0xFFFF94F0u; c->f[0]=RF64(ea);} // 800D36FC
  c->f[1]=c->f[0]*c->f[1]; // 800D3700
  goto L_800D3740; // 800D3704
L_800D3708:;
  c->f[2]=c->f[31]; // 800D3708
  {uint32_t ea=c->r[2]+0xFFFF94E8u; c->f[1]=RF64(ea);} // 800D370C
  c->lr=0x800D3714u; f_800D3320(c); // 800D3710
  {uint32_t ea=c->r[2]+0xFFFF94E8u; c->f[0]=RF64(ea);} // 800D3714
  c->f[1]=c->f[0]*c->f[1]; // 800D3718
  goto L_800D3740; // 800D371C
L_800D3720:;
  c->r[0]=c->r[4]+0x00000036u; // 800D3720
  c->r[3]=rotl(c->r[5],0)&0x800FFFFFu; // 800D3724
  c->r[0]=rotl(c->r[0],20)&0xFFF00000u; // 800D3728
  {uint32_t ea=c->r[2]+0xFFFF94F8u; c->f[1]=RF64(ea);} // 800D372C
  c->r[0]=c->r[3]|c->r[0]; // 800D3730
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D3734
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800D3738
  c->f[1]=c->f[1]*c->f[0]; // 800D373C
L_800D3740:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3740
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800D3744
  c->r[31]=R32(c->r[1]+0x00000014u); // 800D3748
  c->lr=c->r[0]; // 800D374C
  c->r[1]=c->r[1]+0x00000020u; // 800D3750
  return; // 800D3754
}

// sin
void f_800D3758(Ctx* __restrict c) {
  trace_call(0x800D3758u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3758
  c->r[0]=c->lr; // 800D375C
  c->r[3]=0u+0x3FE90000u; // 800D3760
  {uint32_t ea=c->r[2]+0xFFFF9500u; c->f[2]=RF64(ea);} // 800D3764
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D3768
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D376C
  c->r[0]=c->r[3]+0x000021FBu; // 800D3770
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D3774
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 800D3778
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D377C
  if (crb(c,1)) { goto L_800D3790; } // 800D3780
  c->r[3]=0u+0x00000000u; // 800D3784
  c->lr=0x800D378Cu; f_800D3020(c); // 800D3788
  goto L_800D3820; // 800D378C
L_800D3790:;
  c->r[0]=0u+0x7FF00000u; // 800D3790
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D3794
  if (crb(c,0)) { goto L_800D37A4; } // 800D3798
  c->f[1]=c->f[1]-c->f[1]; // 800D379C
  goto L_800D3820; // 800D37A0
L_800D37A4:;
  c->r[3]=c->r[1]+0x00000010u; // 800D37A4
  c->lr=0x800D37ACu; f_800D1400(c); // 800D37A8
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 800D37AC
  cmps(c,0,(int32_t)c->r[0],1); // 800D37B0
  if (crb(c,2)) { goto L_800D37E8; } // 800D37B4
  if (!crb(c,0)) { goto L_800D37C8; } // 800D37B8
  cmps(c,0,(int32_t)c->r[0],0); // 800D37BC
  if (!crb(c,0)) { goto L_800D37D4; } // 800D37C0
  goto L_800D3810; // 800D37C4
L_800D37C8:;
  cmps(c,0,(int32_t)c->r[0],3); // 800D37C8
  if (!crb(c,0)) { goto L_800D3810; } // 800D37CC
  goto L_800D37F8; // 800D37D0
L_800D37D4:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D37D4
  c->r[3]=0u+0x00000001u; // 800D37D8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D37DC
  c->lr=0x800D37E4u; f_800D3020(c); // 800D37E0
  goto L_800D3820; // 800D37E4
L_800D37E8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D37E8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D37EC
  c->lr=0x800D37F4u; f_800D1804(c); // 800D37F0
  goto L_800D3820; // 800D37F4
L_800D37F8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D37F8
  c->r[3]=0u+0x00000001u; // 800D37FC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D3800
  c->lr=0x800D3808u; f_800D3020(c); // 800D3804
  c->f[1]=-c->f[1]; // 800D3808
  goto L_800D3820; // 800D380C
L_800D3810:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D3810
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D3814
  c->lr=0x800D381Cu; f_800D1804(c); // 800D3818
  c->f[1]=-c->f[1]; // 800D381C
L_800D3820:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3820
  c->lr=c->r[0]; // 800D3824
  c->r[1]=c->r[1]+0x00000020u; // 800D3828
  return; // 800D382C
}

// fn_800D3830
void f_800D3830(Ctx* __restrict c) {
  f_800D0618(c); return; // 800D3830
}

// fn_800D3834
void f_800D3834(Ctx* __restrict c) {
  f_800D0888(c); return; // 800D3834
}

// fn_800D3838
void f_800D3838(Ctx* __restrict c) {
  f_800D0BB8(c); return; // 800D3838
}

// fn_800D383C
void f_800D383C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D383C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D3840
  c->r[6]=R32(c->r[1]+0x00000008u); // 800D3844
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D3848
  c->r[3]=rotl(c->r[6],0)&0x7FF00000u; // 800D384C
  c->r[3]=c->r[3]+0x80100000u; // 800D3850
  cmpu(c,0,c->r[3],0x00000000u); // 800D3854
  if (!crb(c,2)) { goto L_800D3870; } // 800D3858
  c->f[0]=c->f[1]*c->f[1]; // 800D385C
  c->r[0]=0u+0x00000021u; // 800D3860
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 800D3864
  c->f[1]=c->f[1]+c->f[0]; // 800D3868
  goto L_800D3A7C; // 800D386C
L_800D3870:;
  cmps(c,1,(int32_t)c->r[6],0); // 800D3870
  if (crb(c,5)) { goto L_800D38A0; } // 800D3874
  c->r[3]=rotl(c->r[6],0)&0x7FFFFFFFu; // 800D3878
  c->r[3]=c->r[0]|c->r[3]; cr0(c,c->r[3]); // 800D387C
  if (!crb(c,2)) { goto L_800D3888; } // 800D3880
  goto L_800D3A7C; // 800D3884
L_800D3888:;
  if (!crb(c,4)) { goto L_800D38A0; } // 800D3888
  c->r[0]=0u+0x00000021u; // 800D388C
  c->r[3]=0u+0x803C0000u; // 800D3890
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 800D3894
  {uint32_t ea=c->r[3]+0x00007710u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D3898
  goto L_800D3A7C; // 800D389C
L_800D38A0:;
  c->r[3]=sraw(c,c->r[6],20); cr0(c,c->r[3]); // 800D38A0
  if (!crb(c,2)) { goto L_800D38F4; } // 800D38A4
  goto L_800D38BC; // 800D38A8
L_800D38AC:;
  c->r[4]=rotl(c->r[0],21)&0x001FFFFFu; // 800D38AC
  c->r[0]=rotl(c->r[0],21)&0xFFE00000u; // 800D38B0
  c->r[6]=c->r[6]|c->r[4]; // 800D38B4
  c->r[3]=c->r[3]+0xFFFFFFEBu; // 800D38B8
L_800D38BC:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D38BC
  if (crb(c,2)) { IRQCHK(c); goto L_800D38AC; } // 800D38C0
  c->r[7]=0u+0x00000000u; // 800D38C4
  goto L_800D38D4; // 800D38C8
L_800D38CC:;
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800D38CC
  c->r[7]=c->r[7]+0x00000001u; // 800D38D0
L_800D38D4:;
  c->r[4]=rotl(c->r[6],0)&0x00100000u; cr0(c,c->r[4]); // 800D38D4
  if (crb(c,2)) { IRQCHK(c); goto L_800D38CC; } // 800D38D8
  c->r[4]=addc(c,~c->r[7],0x00000020u,1); // 800D38DC
  c->r[5]=c->r[7]+0xFFFFFFFFu; // 800D38E0
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 800D38E4
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 800D38E8
  c->r[3]=c->r[3]-c->r[5]; // 800D38EC
  c->r[6]=c->r[6]|c->r[4]; // 800D38F0
L_800D38F4:;
  c->r[4]=c->r[3]+0xFFFFFC01u; // 800D38F4
  c->r[5]=rotl(c->r[6],0)&0x000FFFFFu; // 800D38F8
  c->r[4]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[4]); // 800D38FC
  c->r[6]=c->r[5]|0x00100000u; // 800D3900
  if (crb(c,2)) { goto L_800D3918; } // 800D3904
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800D3908
  c->r[4]=c->r[6]+c->r[6]; // 800D390C
  c->r[6]=c->r[5]+c->r[4]; // 800D3910
  c->r[0]=c->r[0]+c->r[0]; // 800D3914
L_800D3918:;
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800D3918
  c->r[4]=c->r[6]+c->r[6]; // 800D391C
  c->r[6]=c->r[5]+c->r[4]; // 800D3920
  c->r[0]=c->r[0]+c->r[0]; // 800D3924
  c->r[9]=0u+0x00000000u; // 800D3928
  c->r[11]=0u+0x00000000u; // 800D392C
  c->r[10]=0u+0x00000000u; // 800D3930
  c->r[12]=0u+0x00000000u; // 800D3934
  c->r[7]=0u+0x00200000u; // 800D3938
  goto L_800D396C; // 800D393C
L_800D3940:;
  c->r[4]=c->r[11]+c->r[7]; // 800D3940
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 800D3944
  if (crb(c,1)) { goto L_800D3958; } // 800D3948
  c->r[11]=c->r[4]+c->r[7]; // 800D394C
  c->r[6]=c->r[6]-c->r[4]; // 800D3950
  c->r[12]=c->r[12]+c->r[7]; // 800D3954
L_800D3958:;
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800D3958
  c->r[4]=c->r[6]+c->r[6]; // 800D395C
  c->r[6]=c->r[5]+c->r[4]; // 800D3960
  c->r[0]=c->r[0]+c->r[0]; // 800D3964
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800D3968
L_800D396C:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D396C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D3940; } // 800D3970
  c->r[7]=0u+0x80000000u; // 800D3974
  goto L_800D39E4; // 800D3978
L_800D397C:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[6]); // 800D397C
  c->r[5]=c->r[11]|c->r[11]; // 800D3980
  c->r[8]=c->r[9]+c->r[7]; // 800D3984
  if (crb(c,0)) { goto L_800D3998; } // 800D3988
  if (!crb(c,2)) { goto L_800D39D0; } // 800D398C
  cmpu(c,0,c->r[8],c->r[0]); // 800D3990
  if (crb(c,1)) { goto L_800D39D0; } // 800D3994
L_800D3998:;
  c->r[4]=rotl(c->r[8],0)&0x80000000u; // 800D3998
  c->r[9]=c->r[8]+c->r[7]; // 800D399C
  c->r[4]=c->r[4]+0x80000000u; // 800D39A0
  cmpu(c,0,c->r[4],0x00000000u); // 800D39A4
  if (!crb(c,2)) { goto L_800D39B8; } // 800D39A8
  c->r[4]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[4]); // 800D39AC
  if (!crb(c,2)) { goto L_800D39B8; } // 800D39B0
  c->r[11]=c->r[11]+0x00000001u; // 800D39B4
L_800D39B8:;
  cmpu(c,0,c->r[0],c->r[8]); // 800D39B8
  c->r[6]=c->r[6]-c->r[5]; // 800D39BC
  if (!crb(c,0)) { goto L_800D39C8; } // 800D39C0
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800D39C4
L_800D39C8:;
  c->r[0]=c->r[0]-c->r[8]; // 800D39C8
  c->r[10]=c->r[10]+c->r[7]; // 800D39CC
L_800D39D0:;
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800D39D0
  c->r[4]=c->r[6]+c->r[6]; // 800D39D4
  c->r[6]=c->r[5]+c->r[4]; // 800D39D8
  c->r[0]=c->r[0]+c->r[0]; // 800D39DC
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800D39E0
L_800D39E4:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D39E4
  if (!crb(c,2)) { IRQCHK(c); goto L_800D397C; } // 800D39E8
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 800D39EC
  if (crb(c,2)) { goto L_800D3A48; } // 800D39F0
  {uint32_t ea=c->r[2]+0xFFFF9508u; c->f[0]=RF64(ea);} // 800D39F4
  fcmp(c,0,c->f[0],c->f[0]); // 800D39F8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D39FC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D3A00
  if (!crb(c,2)) { goto L_800D3A48; } // 800D3A04
  c->r[0]=c->r[10]+0x00010000u; // 800D3A08
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D3A0C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800D3A10
  if (!crb(c,2)) { goto L_800D3A24; } // 800D3A14
  c->r[10]=0u+0x00000000u; // 800D3A18
  c->r[12]=c->r[12]+0x00000001u; // 800D3A1C
  goto L_800D3A48; // 800D3A20
L_800D3A24:;
  fcmp(c,0,c->f[0],c->f[0]); // 800D3A24
  if (!crb(c,1)) { goto L_800D3A40; } // 800D3A28
  cmpu(c,0,c->r[0],0x0000FFFEu); // 800D3A2C
  if (!crb(c,2)) { goto L_800D3A38; } // 800D3A30
  c->r[12]=c->r[12]+0x00000001u; // 800D3A34
L_800D3A38:;
  c->r[10]=c->r[10]+0x00000002u; // 800D3A38
  goto L_800D3A48; // 800D3A3C
L_800D3A40:;
  c->r[0]=rotl(c->r[10],0)&0x00000001u; // 800D3A40
  c->r[10]=c->r[10]+c->r[0]; // 800D3A44
L_800D3A48:;
  c->r[0]=rotl(c->r[12],0)&0x00000001u; // 800D3A48
  c->r[4]=sraw(c,c->r[12],1); // 800D3A4C
  cmps(c,0,(int32_t)c->r[0],1); // 800D3A50
  c->r[5]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800D3A54
  c->r[4]=c->r[4]+0x3FE00000u; // 800D3A58
  if (!crb(c,2)) { goto L_800D3A64; } // 800D3A5C
  c->r[5]=c->r[5]|0x80000000u; // 800D3A60
L_800D3A64:;
  c->r[0]=c->r[3]+0xFFFFFC01u; // 800D3A64
  W32(c->r[1]+0x00000014u,c->r[5]); // 800D3A68
  c->r[0]=rotl(c->r[0],19)&0xFFF00000u; // 800D3A6C
  c->r[4]=c->r[4]+c->r[0]; // 800D3A70
  W32(c->r[1]+0x00000010u,c->r[4]); // 800D3A74
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D3A78
L_800D3A7C:;
  c->r[1]=c->r[1]+0x00000020u; // 800D3A7C
  return; // 800D3A80
}

// fn_800D3A84
void f_800D3A84(Ctx* __restrict c) {
  return; // 800D3A84
}

// fn_800D3A88
void f_800D3A88(Ctx* __restrict c) {
  f_800D383C(c); return; // 800D3A88
}

// SetExiInterruptMask
void f_800D3A8C(Ctx* __restrict c) {
  trace_call(0x800D3A8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3A8C
  c->r[0]=c->lr; // 800D3A90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3A94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3A98
  c->r[31]=c->r[4]|c->r[4]; // 800D3A9C
  c->r[5]=0u+0x802C0000u; // 800D3AA0
  c->r[5]=c->r[5]+0xFFFFD210u; // 800D3AA4
  cmps(c,0,(int32_t)c->r[3],1); // 800D3AA8
  if (crb(c,2)) { goto L_800D3B08; } // 800D3AAC
  if (!crb(c,0)) { goto L_800D3AC0; } // 800D3AB0
  cmps(c,0,(int32_t)c->r[3],0); // 800D3AB4
  if (!crb(c,0)) { goto L_800D3ACC; } // 800D3AB8
  goto L_800D3B68; // 800D3ABC
L_800D3AC0:;
  cmps(c,0,(int32_t)c->r[3],3); // 800D3AC0
  if (!crb(c,0)) { goto L_800D3B68; } // 800D3AC4
  goto L_800D3B38; // 800D3AC8
L_800D3ACC:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D3ACC
  cmps(c,0,(int32_t)c->r[0],0); // 800D3AD0
  if (!crb(c,2)) { goto L_800D3AE4; } // 800D3AD4
  c->r[0]=R32(c->r[5]+0x00000080u); // 800D3AD8
  cmps(c,0,(int32_t)c->r[0],0); // 800D3ADC
  if (crb(c,2)) { goto L_800D3AF0; } // 800D3AE0
L_800D3AE4:;
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D3AE4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D3AE8
  if (crb(c,2)) { goto L_800D3AFC; } // 800D3AEC
L_800D3AF0:;
  c->r[3]=0u+0x00410000u; // 800D3AF0
  c->lr=0x800D3AF8u; f_8009E32C(c); // 800D3AF4
  goto L_800D3B68; // 800D3AF8
L_800D3AFC:;
  c->r[3]=0u+0x00410000u; // 800D3AFC
  c->lr=0x800D3B04u; f_8009E3AC(c); // 800D3B00
  goto L_800D3B68; // 800D3B04
L_800D3B08:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D3B08
  cmps(c,0,(int32_t)c->r[0],0); // 800D3B0C
  if (crb(c,2)) { goto L_800D3B20; } // 800D3B10
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D3B14
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D3B18
  if (crb(c,2)) { goto L_800D3B2C; } // 800D3B1C
L_800D3B20:;
  c->r[3]=0u+0x00080000u; // 800D3B20
  c->lr=0x800D3B28u; f_8009E32C(c); // 800D3B24
  goto L_800D3B68; // 800D3B28
L_800D3B2C:;
  c->r[3]=0u+0x00080000u; // 800D3B2C
  c->lr=0x800D3B34u; f_8009E3AC(c); // 800D3B30
  goto L_800D3B68; // 800D3B34
L_800D3B38:;
  c->r[3]=0u+0x00000019u; // 800D3B38
  c->lr=0x800D3B40u; f_8009DFFC(c); // 800D3B3C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3B40
  if (crb(c,2)) { goto L_800D3B54; } // 800D3B44
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3B48
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D3B4C
  if (crb(c,2)) { goto L_800D3B60; } // 800D3B50
L_800D3B54:;
  c->r[3]=0u+0x00000040u; // 800D3B54
  c->lr=0x800D3B5Cu; f_8009E32C(c); // 800D3B58
  goto L_800D3B68; // 800D3B5C
L_800D3B60:;
  c->r[3]=0u+0x00000040u; // 800D3B60
  c->lr=0x800D3B68u; f_8009E3AC(c); // 800D3B64
L_800D3B68:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3B68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3B6C
  c->lr=c->r[0]; // 800D3B70
  c->r[1]=c->r[1]+0x00000010u; // 800D3B74
  return; // 800D3B78
}

// EXIImm
void f_800D3B7C(Ctx* __restrict c) {
  trace_call(0x800D3B7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3B7C
  c->r[0]=c->lr; // 800D3B80
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D3B84
  c->r[11]=c->r[1]+0x00000030u; // 800D3B88
  c->lr=0x800D3B90u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D3B8C
  c->r[26]=c->r[3]|c->r[3]; // 800D3B90
  c->r[27]=c->r[4]|c->r[4]; // 800D3B94
  c->r[28]=c->r[5]|c->r[5]; // 800D3B98
  c->r[29]=c->r[6]|c->r[6]; // 800D3B9C
  c->r[25]=c->r[7]|c->r[7]; // 800D3BA0
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D3BA4
  c->r[3]=0u+0x802C0000u; // 800D3BA8
  c->r[3]=c->r[3]+0xFFFFD210u; // 800D3BAC
  c->r[31]=c->r[3]+c->r[0]; // 800D3BB0
  c->lr=0x800D3BB8u; f_8009DF9C(c); // 800D3BB4
  c->r[30]=c->r[3]|c->r[3]; // 800D3BB8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3BBC
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800D3BC0
  if (!crb(c,2)) { goto L_800D3BD4; } // 800D3BC4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3BC8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D3BCC
  if (!crb(c,2)) { goto L_800D3BE4; } // 800D3BD0
L_800D3BD4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3BD4
  c->lr=0x800D3BDCu; f_8009DFC4(c); // 800D3BD8
  c->r[3]=0u+0x00000000u; // 800D3BDC
  goto L_800D3DE0; // 800D3BE0
L_800D3BE4:;
  W32(c->r[31]+0x00000004u,c->r[25]); // 800D3BE4
  cmps(c,0,(int32_t)c->r[25],0); // 800D3BE8
  if (crb(c,2)) { goto L_800D3C20; } // 800D3BEC
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 800D3BF0
  c->r[0]=0u+0xCD000000u; // 800D3BF4
  c->r[3]=c->r[0]+c->r[3]; // 800D3BF8
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D3BFC
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D3C00
  c->r[0]=c->r[0]|0x00000008u; // 800D3C04
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D3C08
  c->r[3]=0u+0x00200000u; // 800D3C0C
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800D3C10
  c->r[0]=c->r[0]-c->r[26]; // 800D3C14
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D3C18
  c->lr=0x800D3C20u; f_8009E3AC(c); // 800D3C1C
L_800D3C20:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3C20
  c->r[0]=c->r[0]|0x00000002u; // 800D3C24
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D3C28
  cmps(c,0,(int32_t)c->r[29],0); // 800D3C2C
  if (crb(c,2)) { goto L_800D3D94; } // 800D3C30
  c->r[0]=0u+0x00000000u; // 800D3C34
  c->r[4]=0u+0x00000000u; // 800D3C38
  cmps(c,1,(int32_t)c->r[28],0); // 800D3C3C
  if (!crb(c,5)) { goto L_800D3D84; } // 800D3C40
  c->r[6]=c->r[28]+0xFFFFFFF8u; // 800D3C44
  cmps(c,0,(int32_t)c->r[28],8); // 800D3C48
  if (!crb(c,1)) { goto L_800D3D50; } // 800D3C4C
  c->r[5]=0u+0x00000000u; // 800D3C50
  if (crb(c,4)) { goto L_800D3C6C; } // 800D3C54
  c->r[3]=0u+0x80000000u; // 800D3C58
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 800D3C5C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 800D3C60
  if (crb(c,1)) { goto L_800D3C6C; } // 800D3C64
  c->r[5]=0u+0x00000001u; // 800D3C68
L_800D3C6C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D3C6C
  if (crb(c,2)) { goto L_800D3D50; } // 800D3C70
  c->r[3]=c->r[27]|c->r[27]; // 800D3C74
  c->r[5]=c->r[6]+0x00000007u; // 800D3C78
  c->r[5]=rotl(c->r[5],29)&0x1FFFFFFFu; // 800D3C7C
  c->ctr=c->r[5]; // 800D3C80
  cmps(c,0,(int32_t)c->r[6],0); // 800D3C84
  if (!crb(c,1)) { goto L_800D3D50; } // 800D3C88
L_800D3C8C:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 800D3C8C
  c->r[5]=addc(c,~c->r[4],0x00000003u,1); // 800D3C90
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3C94
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3C98
  c->r[0]=c->r[0]|c->r[5]; // 800D3C9C
  c->r[6]=R8(c->r[3]+0x00000001u); // 800D3CA0
  c->r[5]=c->r[4]+0x00000001u; // 800D3CA4
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 800D3CA8
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3CAC
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3CB0
  c->r[0]=c->r[0]|c->r[5]; // 800D3CB4
  c->r[6]=R8(c->r[3]+0x00000002u); // 800D3CB8
  c->r[5]=c->r[4]+0x00000002u; // 800D3CBC
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 800D3CC0
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3CC4
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3CC8
  c->r[0]=c->r[0]|c->r[5]; // 800D3CCC
  c->r[6]=R8(c->r[3]+0x00000003u); // 800D3CD0
  c->r[5]=0u-c->r[4]; // 800D3CD4
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3CD8
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3CDC
  c->r[0]=c->r[0]|c->r[5]; // 800D3CE0
  c->r[6]=R8(c->r[3]+0x00000004u); // 800D3CE4
  c->r[5]=c->r[4]+0x00000004u; // 800D3CE8
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 800D3CEC
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3CF0
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3CF4
  c->r[0]=c->r[0]|c->r[5]; // 800D3CF8
  c->r[6]=R8(c->r[3]+0x00000005u); // 800D3CFC
  c->r[5]=c->r[4]+0x00000005u; // 800D3D00
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 800D3D04
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3D08
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3D0C
  c->r[0]=c->r[0]|c->r[5]; // 800D3D10
  c->r[6]=R8(c->r[3]+0x00000006u); // 800D3D14
  c->r[5]=c->r[4]+0x00000006u; // 800D3D18
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 800D3D1C
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3D20
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3D24
  c->r[0]=c->r[0]|c->r[5]; // 800D3D28
  c->r[6]=R8(c->r[3]+0x00000007u); // 800D3D2C
  c->r[5]=c->r[4]+0x00000007u; // 800D3D30
  c->r[5]=addc(c,~c->r[5],0x00000003u,1); // 800D3D34
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D3D38
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]<<((c->r[5])&31)); // 800D3D3C
  c->r[0]=c->r[0]|c->r[5]; // 800D3D40
  c->r[3]=c->r[3]+0x00000008u; // 800D3D44
  c->r[4]=c->r[4]+0x00000008u; // 800D3D48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3C8C; } // 800D3D4C
L_800D3D50:;
  c->r[6]=c->r[27]+c->r[4]; // 800D3D50
  c->r[3]=c->r[28]-c->r[4]; // 800D3D54
  c->ctr=c->r[3]; // 800D3D58
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[28]); // 800D3D5C
  if (!crb(c,0)) { goto L_800D3D84; } // 800D3D60
L_800D3D64:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 800D3D64
  c->r[3]=addc(c,~c->r[4],0x00000003u,1); // 800D3D68
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D3D6C
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 800D3D70
  c->r[0]=c->r[0]|c->r[3]; // 800D3D74
  c->r[6]=c->r[6]+0x00000001u; // 800D3D78
  c->r[4]=c->r[4]+0x00000001u; // 800D3D7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3D64; } // 800D3D80
L_800D3D84:;
  c->r[4]=0u+0xCD000000u; // 800D3D84
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 800D3D88
  c->r[3]=c->r[4]+c->r[3]; // 800D3D8C
  W32(c->r[3]+0x00006810u,c->r[0]); // 800D3D90
L_800D3D94:;
  W32(c->r[31]+0x00000014u,c->r[27]); // 800D3D94
  c->r[3]=c->r[29]+0xFFFFFFFFu; // 800D3D98
  c->r[0]=addc(c,~c->r[29],0x00000001u,1); // 800D3D9C
  c->r[0]=c->r[3]|c->r[0]; // 800D3DA0
  c->r[0]=sraw(c,c->r[0],31); // 800D3DA4
  c->r[0]=c->r[28]&c->r[0]; // 800D3DA8
  W32(c->r[31]+0x00000010u,c->r[0]); // 800D3DAC
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D3DB0
  c->r[3]=c->r[0]|0x00000001u; // 800D3DB4
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 800D3DB8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800D3DBC
  c->r[4]=c->r[3]|c->r[0]; // 800D3DC0
  c->r[3]=0u+0xCD000000u; // 800D3DC4
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 800D3DC8
  c->r[3]=c->r[3]+c->r[0]; // 800D3DCC
  W32(c->r[3]+0x0000680Cu,c->r[4]); // 800D3DD0
  c->r[3]=c->r[30]|c->r[30]; // 800D3DD4
  c->lr=0x800D3DDCu; f_8009DFC4(c); // 800D3DD8
  c->r[3]=0u+0x00000001u; // 800D3DDC
L_800D3DE0:;
  c->r[11]=c->r[1]+0x00000030u; // 800D3DE0
  c->lr=0x800D3DE8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D3DE4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D3DE8
  c->lr=c->r[0]; // 800D3DEC
  c->r[1]=c->r[1]+0x00000030u; // 800D3DF0
  return; // 800D3DF4
}

// EXIImmEx
void f_800D3DF8(Ctx* __restrict c) {
  trace_call(0x800D3DF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3DF8
  c->r[0]=c->lr; // 800D3DFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3E00
  c->r[11]=c->r[1]+0x00000020u; // 800D3E04
  c->lr=0x800D3E0Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D3E08
  c->r[27]=c->r[3]|c->r[3]; // 800D3E0C
  c->r[28]=c->r[4]|c->r[4]; // 800D3E10
  c->r[29]=c->r[5]|c->r[5]; // 800D3E14
  c->r[30]=c->r[6]|c->r[6]; // 800D3E18
  goto L_800D3E78; // 800D3E1C
L_800D3E20:;
  cmps(c,0,(int32_t)c->r[29],4); // 800D3E20
  c->r[31]=0u+0x00000004u; // 800D3E24
  if (!crb(c,0)) { goto L_800D3E30; } // 800D3E28
  c->r[31]=c->r[29]|c->r[29]; // 800D3E2C
L_800D3E30:;
  c->r[3]=c->r[27]|c->r[27]; // 800D3E30
  c->r[4]=c->r[28]|c->r[28]; // 800D3E34
  c->r[5]=c->r[31]|c->r[31]; // 800D3E38
  c->r[6]=c->r[30]|c->r[30]; // 800D3E3C
  c->r[7]=0u+0x00000000u; // 800D3E40
  c->lr=0x800D3E48u; f_800D3B7C(c); // 800D3E44
  cmps(c,0,(int32_t)c->r[3],0); // 800D3E48
  if (!crb(c,2)) { goto L_800D3E58; } // 800D3E4C
  c->r[3]=0u+0x00000000u; // 800D3E50
  goto L_800D3E84; // 800D3E54
L_800D3E58:;
  c->r[3]=c->r[27]|c->r[27]; // 800D3E58
  c->lr=0x800D3E60u; f_800D3F94(c); // 800D3E5C
  cmps(c,0,(int32_t)c->r[3],0); // 800D3E60
  if (!crb(c,2)) { goto L_800D3E70; } // 800D3E64
  c->r[3]=0u+0x00000000u; // 800D3E68
  goto L_800D3E84; // 800D3E6C
L_800D3E70:;
  c->r[28]=c->r[28]+c->r[31]; // 800D3E70
  c->r[29]=c->r[29]-c->r[31]; // 800D3E74
L_800D3E78:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D3E78
  if (!crb(c,2)) { IRQCHK(c); goto L_800D3E20; } // 800D3E7C
  c->r[3]=0u+0x00000001u; // 800D3E80
L_800D3E84:;
  c->r[11]=c->r[1]+0x00000020u; // 800D3E84
  c->lr=0x800D3E8Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D3E88
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3E8C
  c->lr=c->r[0]; // 800D3E90
  c->r[1]=c->r[1]+0x00000020u; // 800D3E94
  return; // 800D3E98
}

// EXIDma
void f_800D3E9C(Ctx* __restrict c) {
  trace_call(0x800D3E9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3E9C
  c->r[0]=c->lr; // 800D3EA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D3EA4
  c->r[11]=c->r[1]+0x00000030u; // 800D3EA8
  c->lr=0x800D3EB0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D3EAC
  c->r[26]=c->r[3]|c->r[3]; // 800D3EB0
  c->r[27]=c->r[4]|c->r[4]; // 800D3EB4
  c->r[28]=c->r[5]|c->r[5]; // 800D3EB8
  c->r[29]=c->r[6]|c->r[6]; // 800D3EBC
  c->r[25]=c->r[7]|c->r[7]; // 800D3EC0
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D3EC4
  c->r[3]=0u+0x802C0000u; // 800D3EC8
  c->r[3]=c->r[3]+0xFFFFD210u; // 800D3ECC
  c->r[31]=c->r[3]+c->r[0]; // 800D3ED0
  c->lr=0x800D3ED8u; f_8009DF9C(c); // 800D3ED4
  c->r[30]=c->r[3]|c->r[3]; // 800D3ED8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3EDC
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800D3EE0
  if (!crb(c,2)) { goto L_800D3EF4; } // 800D3EE4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3EE8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D3EEC
  if (!crb(c,2)) { goto L_800D3F04; } // 800D3EF0
L_800D3EF4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3EF4
  c->lr=0x800D3EFCu; f_8009DFC4(c); // 800D3EF8
  c->r[3]=0u+0x00000000u; // 800D3EFC
  goto L_800D3F7C; // 800D3F00
L_800D3F04:;
  W32(c->r[31]+0x00000004u,c->r[25]); // 800D3F04
  cmps(c,0,(int32_t)c->r[25],0); // 800D3F08
  if (crb(c,2)) { goto L_800D3F40; } // 800D3F0C
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 800D3F10
  c->r[0]=0u+0xCD000000u; // 800D3F14
  c->r[3]=c->r[0]+c->r[3]; // 800D3F18
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D3F1C
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D3F20
  c->r[0]=c->r[0]|0x00000008u; // 800D3F24
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D3F28
  c->r[3]=0u+0x00200000u; // 800D3F2C
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800D3F30
  c->r[0]=c->r[0]-c->r[26]; // 800D3F34
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D3F38
  c->lr=0x800D3F40u; f_8009E3AC(c); // 800D3F3C
L_800D3F40:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3F40
  c->r[0]=c->r[0]|0x00000001u; // 800D3F44
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D3F48
  c->r[3]=(uint32_t)((int32_t)c->r[26]*(int32_t)20); // 800D3F4C
  c->r[4]=rotl(c->r[27],0)&0xFFFFFFE0u; // 800D3F50
  c->r[0]=0u+0xCD000000u; // 800D3F54
  c->r[3]=c->r[0]+c->r[3]; // 800D3F58
  W32(c->r[3]+0x00006804u,c->r[4]); // 800D3F5C
  W32(c->r[3]+0x00006808u,c->r[28]); // 800D3F60
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D3F64
  c->r[0]=c->r[0]|0x00000003u; // 800D3F68
  W32(c->r[3]+0x0000680Cu,c->r[0]); // 800D3F6C
  c->r[3]=c->r[30]|c->r[30]; // 800D3F70
  c->lr=0x800D3F78u; f_8009DFC4(c); // 800D3F74
  c->r[3]=0u+0x00000001u; // 800D3F78
L_800D3F7C:;
  c->r[11]=c->r[1]+0x00000030u; // 800D3F7C
  c->lr=0x800D3F84u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D3F80
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D3F84
  c->lr=c->r[0]; // 800D3F88
  c->r[1]=c->r[1]+0x00000030u; // 800D3F8C
  return; // 800D3F90
}

// EXISync
void f_800D3F94(Ctx* __restrict c) {
  trace_call(0x800D3F94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3F94
  c->r[0]=c->lr; // 800D3F98
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3F9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D3FA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D3FA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D3FA8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D3FAC
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D3FB0
  c->r[4]=0u+0x802C0000u; // 800D3FB4
  c->r[4]=c->r[4]+0xFFFFD210u; // 800D3FB8
  c->r[31]=c->r[4]+c->r[0]; // 800D3FBC
  c->r[29]=0u+0x00000000u; // 800D3FC0
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 800D3FC4
  c->r[0]=0u+0xCD000000u; // 800D3FC8
  c->r[3]=c->r[0]+c->r[30]; // 800D3FCC
  goto L_800D41E0; // 800D3FD0
L_800D3FD4:;
  c->r[0]=R32(c->r[3]+0x0000680Cu); // 800D3FD4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800D3FD8
  if (!crb(c,2)) { goto L_800D41E0; } // 800D3FDC
  c->lr=0x800D3FE4u; f_8009DF9C(c); // 800D3FE0
  c->r[28]=c->r[3]|c->r[3]; // 800D3FE4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3FE8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D3FEC
  if (crb(c,2)) { goto L_800D41D4; } // 800D3FF0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D3FF4
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800D3FF8
  if (crb(c,2)) { goto L_800D4150; } // 800D3FFC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4000
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800D4004
  if (crb(c,2)) { goto L_800D4144; } // 800D4008
  c->r[5]=R32(c->r[31]+0x00000010u); // 800D400C
  cmps(c,1,(int32_t)c->r[5],0); // 800D4010
  if (crb(c,6)) { goto L_800D4144; } // 800D4014
  c->r[4]=R32(c->r[31]+0x00000014u); // 800D4018
  c->r[0]=0u+0xCD000000u; // 800D401C
  c->r[3]=c->r[0]+c->r[30]; // 800D4020
  c->r[0]=R32(c->r[3]+0x00006810u); // 800D4024
  c->r[3]=0u+0x00000000u; // 800D4028
  if (!crb(c,5)) { goto L_800D4144; } // 800D402C
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 800D4030
  cmps(c,0,(int32_t)c->r[5],8); // 800D4034
  if (!crb(c,1)) { goto L_800D4118; } // 800D4038
  c->r[8]=0u+0x00000000u; // 800D403C
  if (crb(c,4)) { goto L_800D4058; } // 800D4040
  c->r[6]=0u+0x80000000u; // 800D4044
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 800D4048
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 800D404C
  if (crb(c,1)) { goto L_800D4058; } // 800D4050
  c->r[8]=0u+0x00000001u; // 800D4054
L_800D4058:;
  cmps(c,0,(int32_t)c->r[8],0); // 800D4058
  if (crb(c,2)) { goto L_800D4118; } // 800D405C
  c->r[6]=c->r[7]+0x00000007u; // 800D4060
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 800D4064
  c->ctr=c->r[6]; // 800D4068
  cmps(c,0,(int32_t)c->r[7],0); // 800D406C
  if (!crb(c,1)) { goto L_800D4118; } // 800D4070
L_800D4074:;
  c->r[6]=addc(c,~c->r[3],0x00000003u,1); // 800D4074
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D4078
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D407C
  W8(c->r[4]+0x00000000u,c->r[6]); // 800D4080
  c->r[6]=c->r[3]+0x00000001u; // 800D4084
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D4088
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D408C
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D4090
  W8(c->r[4]+0x00000001u,c->r[6]); // 800D4094
  c->r[6]=c->r[3]+0x00000002u; // 800D4098
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D409C
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D40A0
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D40A4
  W8(c->r[4]+0x00000002u,c->r[6]); // 800D40A8
  c->r[6]=0u-c->r[3]; // 800D40AC
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D40B0
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D40B4
  W8(c->r[4]+0x00000003u,c->r[6]); // 800D40B8
  c->r[6]=c->r[3]+0x00000004u; // 800D40BC
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D40C0
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D40C4
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D40C8
  W8(c->r[4]+0x00000004u,c->r[6]); // 800D40CC
  c->r[6]=c->r[3]+0x00000005u; // 800D40D0
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D40D4
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D40D8
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D40DC
  W8(c->r[4]+0x00000005u,c->r[6]); // 800D40E0
  c->r[6]=c->r[3]+0x00000006u; // 800D40E4
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D40E8
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D40EC
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D40F0
  W8(c->r[4]+0x00000006u,c->r[6]); // 800D40F4
  c->r[6]=c->r[3]+0x00000007u; // 800D40F8
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D40FC
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D4100
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D4104
  W8(c->r[4]+0x00000007u,c->r[6]); // 800D4108
  c->r[4]=c->r[4]+0x00000008u; // 800D410C
  c->r[3]=c->r[3]+0x00000008u; // 800D4110
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D4074; } // 800D4114
L_800D4118:;
  c->r[6]=c->r[5]-c->r[3]; // 800D4118
  c->ctr=c->r[6]; // 800D411C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 800D4120
  if (!crb(c,0)) { goto L_800D4144; } // 800D4124
L_800D4128:;
  c->r[5]=addc(c,~c->r[3],0x00000003u,1); // 800D4128
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D412C
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 800D4130
  W8(c->r[4]+0x00000000u,c->r[5]); // 800D4134
  c->r[4]=c->r[4]+0x00000001u; // 800D4138
  c->r[3]=c->r[3]+0x00000001u; // 800D413C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D4128; } // 800D4140
L_800D4144:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4144
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D4148
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D414C
L_800D4150:;
  c->lr=0x800D4154u; f_80098F0C(c); // 800D4150
  cmpu(c,0,c->r[3],0x000000FFu); // 800D4154
  if (!crb(c,2)) { goto L_800D41D0; } // 800D4158
  c->lr=0x800D4160u; f_80097DF8(c); // 800D415C
  c->r[3]=rotl(c->r[3],0)&0xF0000000u; // 800D4160
  c->r[0]=c->r[3]+0xE0000000u; // 800D4164
  cmpu(c,0,c->r[0],0x00000000u); // 800D4168
  if (crb(c,2)) { goto L_800D41D0; } // 800D416C
  c->r[0]=R32(c->r[31]+0x00000010u); // 800D4170
  cmps(c,0,(int32_t)c->r[0],4); // 800D4174
  if (!crb(c,2)) { goto L_800D41D0; } // 800D4178
  c->r[0]=0u+0xCD000000u; // 800D417C
  c->r[4]=c->r[0]+c->r[30]; // 800D4180
  c->r[0]=R32(c->r[4]+0x00006800u); // 800D4184
  c->r[0]=rotl(c->r[0],0)&0x00000070u; cr0(c,c->r[0]); // 800D4188
  if (!crb(c,2)) { goto L_800D41D0; } // 800D418C
  c->r[3]=R32(c->r[4]+0x00006810u); // 800D4190
  c->r[0]=c->r[3]+0xFEFF0000u; // 800D4194
  cmpu(c,0,c->r[0],0x00000000u); // 800D4198
  if (crb(c,2)) { goto L_800D41C0; } // 800D419C
  c->r[3]=R32(c->r[4]+0x00006810u); // 800D41A0
  c->r[0]=c->r[3]+0xFAF90000u; // 800D41A4
  cmpu(c,0,c->r[0],0x00000000u); // 800D41A8
  if (crb(c,2)) { goto L_800D41C0; } // 800D41AC
  c->r[3]=R32(c->r[4]+0x00006810u); // 800D41B0
  c->r[0]=c->r[3]+0xFBDE0000u; // 800D41B4
  cmpu(c,0,c->r[0],0x00000001u); // 800D41B8
  if (!crb(c,2)) { goto L_800D41D0; } // 800D41BC
L_800D41C0:;
  c->r[3]=0u+0x80000000u; // 800D41C0
  c->r[0]=R16(c->r[3]+0x000030E6u); // 800D41C4
  cmpu(c,0,c->r[0],0x00008200u); // 800D41C8
  if (!crb(c,2)) { goto L_800D41D4; } // 800D41CC
L_800D41D0:;
  c->r[29]=0u+0x00000001u; // 800D41D0
L_800D41D4:;
  c->r[3]=c->r[28]|c->r[28]; // 800D41D4
  c->lr=0x800D41DCu; f_8009DFC4(c); // 800D41D8
  goto L_800D41EC; // 800D41DC
L_800D41E0:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D41E0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D41E4
  if (!crb(c,2)) { IRQCHK(c); goto L_800D3FD4; } // 800D41E8
L_800D41EC:;
  c->r[3]=c->r[29]|c->r[29]; // 800D41EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D41F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D41F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D41F8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D41FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4200
  c->lr=c->r[0]; // 800D4204
  c->r[1]=c->r[1]+0x00000020u; // 800D4208
  return; // 800D420C
}

// EXISetExiCallback
void f_800D4210(Ctx* __restrict c) {
  trace_call(0x800D4210u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4210
  c->r[0]=c->lr; // 800D4214
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4218
  c->r[11]=c->r[1]+0x00000020u; // 800D421C
  c->lr=0x800D4224u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D4220
  c->r[26]=c->r[3]|c->r[3]; // 800D4224
  c->r[27]=c->r[4]|c->r[4]; // 800D4228
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D422C
  c->r[31]=0u+0x802C0000u; // 800D4230
  c->r[31]=c->r[31]+0xFFFFD210u; // 800D4234
  c->r[30]=c->r[31]+c->r[0]; // 800D4238
  c->lr=0x800D4240u; f_8009DF9C(c); // 800D423C
  c->r[28]=c->r[3]|c->r[3]; // 800D4240
  c->r[29]=R32(c->r[30]+0x00000000u); // 800D4244
  W32(c->r[30]+0x00000000u,c->r[27]); // 800D4248
  cmps(c,0,(int32_t)c->r[26],2); // 800D424C
  if (crb(c,2)) { goto L_800D4264; } // 800D4250
  c->r[3]=c->r[26]|c->r[26]; // 800D4254
  c->r[4]=c->r[30]|c->r[30]; // 800D4258
  c->lr=0x800D4260u; f_800D3A8C(c); // 800D425C
  goto L_800D4270; // 800D4260
L_800D4264:;
  c->r[3]=0u+0x00000000u; // 800D4264
  c->r[4]=c->r[31]|c->r[31]; // 800D4268
  c->lr=0x800D4270u; f_800D3A8C(c); // 800D426C
L_800D4270:;
  c->r[3]=c->r[28]|c->r[28]; // 800D4270
  c->lr=0x800D4278u; f_8009DFC4(c); // 800D4274
  c->r[3]=c->r[29]|c->r[29]; // 800D4278
  c->r[11]=c->r[1]+0x00000020u; // 800D427C
  c->lr=0x800D4284u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D4280
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4284
  c->lr=c->r[0]; // 800D4288
  c->r[1]=c->r[1]+0x00000020u; // 800D428C
  return; // 800D4290
}

// __EXIProbe
void f_800D4294(Ctx* __restrict c) {
  trace_call(0x800D4294u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4294
  c->r[0]=c->lr; // 800D4298
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D429C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D42A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D42A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D42A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D42AC
  c->r[28]=c->r[3]|c->r[3]; // 800D42B0
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D42B4
  c->r[4]=0u+0x802C0000u; // 800D42B8
  c->r[4]=c->r[4]+0xFFFFD210u; // 800D42BC
  c->r[31]=c->r[4]+c->r[0]; // 800D42C0
  cmps(c,0,(int32_t)c->r[3],2); // 800D42C4
  if (!crb(c,2)) { goto L_800D42D4; } // 800D42C8
  c->r[3]=0u+0x00000001u; // 800D42CC
  goto L_800D43F4; // 800D42D0
L_800D42D4:;
  c->r[29]=0u+0x00000001u; // 800D42D4
  c->lr=0x800D42DCu; f_8009DF9C(c); // 800D42D8
  c->r[30]=c->r[3]|c->r[3]; // 800D42DC
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)20); // 800D42E0
  c->r[0]=0u+0xCD000000u; // 800D42E4
  c->r[3]=c->r[0]+c->r[3]; // 800D42E8
  c->r[5]=R32(c->r[3]+0x00006800u); // 800D42EC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D42F0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D42F4
  if (!crb(c,2)) { goto L_800D43BC; } // 800D42F8
  c->r[0]=rotl(c->r[5],0)&0x00000800u; cr0(c,c->r[0]); // 800D42FC
  if (crb(c,2)) { goto L_800D432C; } // 800D4300
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D4304
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D4308
  c->r[0]=c->r[0]|0x00000800u; // 800D430C
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D4310
  c->r[4]=0u+0x00000000u; // 800D4314
  W32(c->r[31]+0x00000020u,c->r[4]); // 800D4318
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800D431C
  c->r[0]=0u+0x80000000u; // 800D4320
  c->r[3]=c->r[0]+c->r[3]; // 800D4324
  W32(c->r[3]+0x000030C0u,c->r[4]); // 800D4328
L_800D432C:;
  c->r[0]=rotl(c->r[5],0)&0x00001000u; cr0(c,c->r[0]); // 800D432C
  if (crb(c,2)) { goto L_800D439C; } // 800D4330
  c->lr=0x800D4338u; f_800A1D74(c); // 800D4334
  c->r[31]=0u+0x80000000u; // 800D4338
  c->r[0]=R32(c->r[31]+0x000000F8u); // 800D433C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D4340
  c->r[5]=0u+0x10620000u; // 800D4344
  c->r[5]=c->r[5]+0x00004DD3u; // 800D4348
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 800D434C
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 800D4350
  c->r[5]=0u+0x00000000u; // 800D4354
  c->lr=0x800D435Cu; f_800C22A8(c); // 800D4358
  c->r[6]=0u+0x00000064u; // 800D435C
  c->r[5]=0u+0x00000000u; // 800D4360
  c->lr=0x800D4368u; f_800C22A8(c); // 800D4364
  c->r[4]=c->r[4]+0x00000001u; // 800D4368
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800D436C
  c->r[3]=c->r[31]+c->r[0]; // 800D4370
  c->r[0]=R32(c->r[3]+0x000030C0u); // 800D4374
  cmps(c,0,(int32_t)c->r[0],0); // 800D4378
  if (!crb(c,2)) { goto L_800D4384; } // 800D437C
  W32(c->r[3]+0x000030C0u,c->r[4]); // 800D4380
L_800D4384:;
  c->r[0]=R32(c->r[3]+0x000030C0u); // 800D4384
  c->r[0]=c->r[4]-c->r[0]; // 800D4388
  cmps(c,0,(int32_t)c->r[0],3); // 800D438C
  if (!crb(c,0)) { goto L_800D43E8; } // 800D4390
  c->r[29]=0u+0x00000000u; // 800D4394
  goto L_800D43E8; // 800D4398
L_800D439C:;
  c->r[4]=0u+0x00000000u; // 800D439C
  W32(c->r[31]+0x00000020u,c->r[4]); // 800D43A0
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800D43A4
  c->r[0]=0u+0x80000000u; // 800D43A8
  c->r[3]=c->r[0]+c->r[3]; // 800D43AC
  W32(c->r[3]+0x000030C0u,c->r[4]); // 800D43B0
  c->r[29]=0u+0x00000000u; // 800D43B4
  goto L_800D43E8; // 800D43B8
L_800D43BC:;
  c->r[0]=rotl(c->r[5],0)&0x00001000u; cr0(c,c->r[0]); // 800D43BC
  if (crb(c,2)) { goto L_800D43CC; } // 800D43C0
  c->r[0]=rotl(c->r[5],0)&0x00000800u; cr0(c,c->r[0]); // 800D43C4
  if (crb(c,2)) { goto L_800D43E8; } // 800D43C8
L_800D43CC:;
  c->r[4]=0u+0x00000000u; // 800D43CC
  W32(c->r[31]+0x00000020u,c->r[4]); // 800D43D0
  c->r[3]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800D43D4
  c->r[0]=0u+0x80000000u; // 800D43D8
  c->r[3]=c->r[0]+c->r[3]; // 800D43DC
  W32(c->r[3]+0x000030C0u,c->r[4]); // 800D43E0
  c->r[29]=0u+0x00000000u; // 800D43E4
L_800D43E8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D43E8
  c->lr=0x800D43F0u; f_8009DFC4(c); // 800D43EC
  c->r[3]=c->r[29]|c->r[29]; // 800D43F0
L_800D43F4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D43F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D43F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D43FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D4400
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4404
  c->lr=c->r[0]; // 800D4408
  c->r[1]=c->r[1]+0x00000020u; // 800D440C
  return; // 800D4410
}

// EXIAttach
void f_800D4414(Ctx* __restrict c) {
  trace_call(0x800D4414u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4414
  c->r[0]=c->lr; // 800D4418
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D441C
  c->r[11]=c->r[1]+0x00000030u; // 800D4420
  c->lr=0x800D4428u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D4424
  c->r[29]=c->r[3]|c->r[3]; // 800D4428
  c->r[27]=c->r[4]|c->r[4]; // 800D442C
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D4430
  c->r[4]=0u+0x802C0000u; // 800D4434
  c->r[4]=c->r[4]+0xFFFFD210u; // 800D4438
  c->r[31]=c->r[4]+c->r[0]; // 800D443C
  c->lr=0x800D4444u; f_800D4294(c); // 800D4440
  cmps(c,0,(int32_t)c->r[3],0); // 800D4444
  if (crb(c,2)) { goto L_800D4468; } // 800D4448
  c->r[0]=R32(c->r[31]+0x00000020u); // 800D444C
  cmps(c,0,(int32_t)c->r[0],0); // 800D4450
  if (!crb(c,2)) { goto L_800D4468; } // 800D4454
  c->r[3]=c->r[29]|c->r[29]; // 800D4458
  c->r[4]=0u+0x00000000u; // 800D445C
  c->r[5]=c->r[1]+0x00000008u; // 800D4460
  c->lr=0x800D4468u; f_800D4F74(c); // 800D4464
L_800D4468:;
  c->lr=0x800D446Cu; f_8009DF9C(c); // 800D4468
  c->r[30]=c->r[3]|c->r[3]; // 800D446C
  c->r[0]=R32(c->r[31]+0x00000020u); // 800D4470
  cmps(c,0,(int32_t)c->r[0],0); // 800D4474
  if (!crb(c,2)) { goto L_800D4488; } // 800D4478
  c->lr=0x800D4480u; f_8009DFC4(c); // 800D447C
  c->r[3]=0u+0x00000000u; // 800D4480
  goto L_800D4514; // 800D4484
L_800D4488:;
  c->lr=0x800D448Cu; f_8009DF9C(c); // 800D4488
  c->r[28]=c->r[3]|c->r[3]; // 800D448C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4490
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D4494
  if (!crb(c,2)) { goto L_800D44AC; } // 800D4498
  c->r[3]=c->r[29]|c->r[29]; // 800D449C
  c->lr=0x800D44A4u; f_800D4294(c); // 800D44A0
  cmps(c,0,(int32_t)c->r[3],0); // 800D44A4
  if (!crb(c,2)) { goto L_800D44BC; } // 800D44A8
L_800D44AC:;
  c->r[3]=c->r[28]|c->r[28]; // 800D44AC
  c->lr=0x800D44B4u; f_8009DFC4(c); // 800D44B0
  c->r[29]=0u+0x00000000u; // 800D44B4
  goto L_800D4508; // 800D44B8
L_800D44BC:;
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)20); // 800D44BC
  c->r[0]=0u+0xCD000000u; // 800D44C0
  c->r[3]=c->r[0]+c->r[3]; // 800D44C4
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D44C8
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D44CC
  c->r[0]=c->r[0]|0x00000002u; // 800D44D0
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D44D4
  W32(c->r[31]+0x00000008u,c->r[27]); // 800D44D8
  c->r[3]=0u+0x00100000u; // 800D44DC
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D44E0
  c->r[0]=c->r[0]-c->r[29]; // 800D44E4
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D44E8
  c->lr=0x800D44F0u; f_8009E3AC(c); // 800D44EC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D44F0
  c->r[0]=c->r[0]|0x00000008u; // 800D44F4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D44F8
  c->r[3]=c->r[28]|c->r[28]; // 800D44FC
  c->lr=0x800D4504u; f_8009DFC4(c); // 800D4500
  c->r[29]=0u+0x00000001u; // 800D4504
L_800D4508:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4508
  c->lr=0x800D4510u; f_8009DFC4(c); // 800D450C
  c->r[3]=c->r[29]|c->r[29]; // 800D4510
L_800D4514:;
  c->r[11]=c->r[1]+0x00000030u; // 800D4514
  c->lr=0x800D451Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D4518
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D451C
  c->lr=c->r[0]; // 800D4520
  c->r[1]=c->r[1]+0x00000030u; // 800D4524
  return; // 800D4528
}

// EXIDetach
void f_800D452C(Ctx* __restrict c) {
  trace_call(0x800D452Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D452C
  c->r[0]=c->lr; // 800D4530
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4534
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4538
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D453C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D4540
  c->r[29]=c->r[3]|c->r[3]; // 800D4544
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D4548
  c->r[3]=0u+0x802C0000u; // 800D454C
  c->r[3]=c->r[3]+0xFFFFD210u; // 800D4550
  c->r[31]=c->r[3]+c->r[0]; // 800D4554
  c->lr=0x800D455Cu; f_8009DF9C(c); // 800D4558
  c->r[30]=c->r[3]|c->r[3]; // 800D455C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4560
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D4564
  if (!crb(c,2)) { goto L_800D4578; } // 800D4568
  c->lr=0x800D4570u; f_8009DFC4(c); // 800D456C
  c->r[3]=0u+0x00000001u; // 800D4570
  goto L_800D45C8; // 800D4574
L_800D4578:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4578
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D457C
  if (crb(c,2)) { goto L_800D459C; } // 800D4580
  c->r[0]=R32(c->r[31]+0x00000018u); // 800D4584
  cmps(c,0,(int32_t)c->r[0],0); // 800D4588
  if (!crb(c,2)) { goto L_800D459C; } // 800D458C
  c->lr=0x800D4594u; f_8009DFC4(c); // 800D4590
  c->r[3]=0u+0x00000000u; // 800D4594
  goto L_800D45C8; // 800D4598
L_800D459C:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D459C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800D45A0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D45A4
  c->r[3]=0u+0x00500000u; // 800D45A8
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D45AC
  c->r[0]=c->r[0]-c->r[29]; // 800D45B0
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D45B4
  c->lr=0x800D45BCu; f_8009E32C(c); // 800D45B8
  c->r[3]=c->r[30]|c->r[30]; // 800D45BC
  c->lr=0x800D45C4u; f_8009DFC4(c); // 800D45C0
  c->r[3]=0u+0x00000001u; // 800D45C4
L_800D45C8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D45C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D45CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D45D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D45D4
  c->lr=c->r[0]; // 800D45D8
  c->r[1]=c->r[1]+0x00000020u; // 800D45DC
  return; // 800D45E0
}

// EXISelect
void f_800D45E4(Ctx* __restrict c) {
  trace_call(0x800D45E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D45E4
  c->r[0]=c->lr; // 800D45E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D45EC
  c->r[11]=c->r[1]+0x00000020u; // 800D45F0
  c->lr=0x800D45F8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D45F4
  c->r[27]=c->r[3]|c->r[3]; // 800D45F8
  c->r[28]=c->r[4]|c->r[4]; // 800D45FC
  c->r[29]=c->r[5]|c->r[5]; // 800D4600
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D4604
  c->r[3]=0u+0x802C0000u; // 800D4608
  c->r[3]=c->r[3]+0xFFFFD210u; // 800D460C
  c->r[31]=c->r[3]+c->r[0]; // 800D4610
  c->lr=0x800D4618u; f_8009DF9C(c); // 800D4614
  c->r[30]=c->r[3]|c->r[3]; // 800D4618
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D461C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D4620
  if (!crb(c,2)) { goto L_800D466C; } // 800D4624
  cmps(c,0,(int32_t)c->r[27],2); // 800D4628
  if (crb(c,2)) { goto L_800D467C; } // 800D462C
  cmps(c,0,(int32_t)c->r[28],0); // 800D4630
  if (!crb(c,2)) { goto L_800D4654; } // 800D4634
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4638
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D463C
  if (!crb(c,2)) { goto L_800D4654; } // 800D4640
  c->r[3]=c->r[27]|c->r[27]; // 800D4644
  c->lr=0x800D464Cu; f_800D4294(c); // 800D4648
  cmps(c,0,(int32_t)c->r[3],0); // 800D464C
  if (crb(c,2)) { goto L_800D466C; } // 800D4650
L_800D4654:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4654
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D4658
  if (crb(c,2)) { goto L_800D466C; } // 800D465C
  c->r[0]=R32(c->r[31]+0x00000018u); // 800D4660
  cmpu(c,0,c->r[0],c->r[28]); // 800D4664
  if (crb(c,2)) { goto L_800D467C; } // 800D4668
L_800D466C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D466C
  c->lr=0x800D4674u; f_8009DFC4(c); // 800D4670
  c->r[3]=0u+0x00000000u; // 800D4674
  goto L_800D46FC; // 800D4678
L_800D467C:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D467C
  c->r[0]=c->r[0]|0x00000004u; // 800D4680
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D4684
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)20); // 800D4688
  c->r[0]=0u+0xCD000000u; // 800D468C
  c->r[4]=c->r[0]+c->r[3]; // 800D4690
  c->r[3]=R32(c->r[4]+0x00006800u); // 800D4694
  c->r[3]=c->r[3]&0x00000405u; cr0(c,c->r[3]); // 800D4698
  c->r[0]=rotl(c->r[29],4)&0xFFFFFFF0u; // 800D469C
  c->r[3]=c->r[3]|c->r[0]; // 800D46A0
  c->r[0]=0u+0x00000001u; // 800D46A4
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]<<((c->r[28])&31)); // 800D46A8
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 800D46AC
  c->r[3]=c->r[3]|c->r[0]; // 800D46B0
  W32(c->r[4]+0x00006800u,c->r[3]); // 800D46B4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D46B8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D46BC
  if (crb(c,2)) { goto L_800D46F0; } // 800D46C0
  cmps(c,0,(int32_t)c->r[27],1); // 800D46C4
  if (crb(c,2)) { goto L_800D46E8; } // 800D46C8
  if (!crb(c,0)) { goto L_800D46F0; } // 800D46CC
  cmps(c,0,(int32_t)c->r[27],0); // 800D46D0
  if (!crb(c,0)) { goto L_800D46DC; } // 800D46D4
  goto L_800D46F0; // 800D46D8
L_800D46DC:;
  c->r[3]=0u+0x00100000u; // 800D46DC
  c->lr=0x800D46E4u; f_8009E32C(c); // 800D46E0
  goto L_800D46F0; // 800D46E4
L_800D46E8:;
  c->r[3]=0u+0x00020000u; // 800D46E8
  c->lr=0x800D46F0u; f_8009E32C(c); // 800D46EC
L_800D46F0:;
  c->r[3]=c->r[30]|c->r[30]; // 800D46F0
  c->lr=0x800D46F8u; f_8009DFC4(c); // 800D46F4
  c->r[3]=0u+0x00000001u; // 800D46F8
L_800D46FC:;
  c->r[11]=c->r[1]+0x00000020u; // 800D46FC
  c->lr=0x800D4704u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D4700
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4704
  c->lr=c->r[0]; // 800D4708
  c->r[1]=c->r[1]+0x00000020u; // 800D470C
  return; // 800D4710
}

// EXIDeselect
void f_800D4714(Ctx* __restrict c) {
  trace_call(0x800D4714u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4714
  c->r[0]=c->lr; // 800D4718
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D471C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4720
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4724
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D4728
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D472C
  c->r[28]=c->r[3]|c->r[3]; // 800D4730
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D4734
  c->r[3]=0u+0x802C0000u; // 800D4738
  c->r[3]=c->r[3]+0xFFFFD210u; // 800D473C
  c->r[31]=c->r[3]+c->r[0]; // 800D4740
  c->lr=0x800D4748u; f_8009DF9C(c); // 800D4744
  c->r[29]=c->r[3]|c->r[3]; // 800D4748
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D474C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800D4750
  if (!crb(c,2)) { goto L_800D4764; } // 800D4754
  c->lr=0x800D475Cu; f_8009DFC4(c); // 800D4758
  c->r[3]=0u+0x00000000u; // 800D475C
  goto L_800D47F4; // 800D4760
L_800D4764:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4764
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800D4768
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D476C
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)20); // 800D4770
  c->r[0]=0u+0xCD000000u; // 800D4774
  c->r[3]=c->r[0]+c->r[3]; // 800D4778
  c->r[30]=R32(c->r[3]+0x00006800u); // 800D477C
  c->r[0]=c->r[30]&0x00000405u; cr0(c,c->r[0]); // 800D4780
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D4784
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4788
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D478C
  if (crb(c,2)) { goto L_800D47C0; } // 800D4790
  cmps(c,0,(int32_t)c->r[28],1); // 800D4794
  if (crb(c,2)) { goto L_800D47B8; } // 800D4798
  if (!crb(c,0)) { goto L_800D47C0; } // 800D479C
  cmps(c,0,(int32_t)c->r[28],0); // 800D47A0
  if (!crb(c,0)) { goto L_800D47AC; } // 800D47A4
  goto L_800D47C0; // 800D47A8
L_800D47AC:;
  c->r[3]=0u+0x00100000u; // 800D47AC
  c->lr=0x800D47B4u; f_8009E3AC(c); // 800D47B0
  goto L_800D47C0; // 800D47B4
L_800D47B8:;
  c->r[3]=0u+0x00020000u; // 800D47B8
  c->lr=0x800D47C0u; f_8009E3AC(c); // 800D47BC
L_800D47C0:;
  c->r[3]=c->r[29]|c->r[29]; // 800D47C0
  c->lr=0x800D47C8u; f_8009DFC4(c); // 800D47C4
  cmps(c,0,(int32_t)c->r[28],2); // 800D47C8
  if (crb(c,2)) { goto L_800D47F0; } // 800D47CC
  c->r[0]=rotl(c->r[30],0)&0x00000080u; cr0(c,c->r[0]); // 800D47D0
  if (crb(c,2)) { goto L_800D47F0; } // 800D47D4
  c->r[3]=c->r[28]|c->r[28]; // 800D47D8
  c->lr=0x800D47E0u; f_800D4294(c); // 800D47DC
  c->r[0]=0u-c->r[3]; // 800D47E0
  c->r[0]=c->r[0]|c->r[3]; // 800D47E4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D47E8
  goto L_800D47F4; // 800D47EC
L_800D47F0:;
  c->r[3]=0u+0x00000001u; // 800D47F0
L_800D47F4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D47F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D47F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D47FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D4800
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4804
  c->lr=c->r[0]; // 800D4808
  c->r[1]=c->r[1]+0x00000020u; // 800D480C
  return; // 800D4810
}

// EXIIntrruptHandler
void f_800D4814(Ctx* __restrict c) {
  trace_call(0x800D4814u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4814
  c->r[0]=c->lr; // 800D4818
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800D481C
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800D4820
  W32(c->r[1]+0x000002D8u,c->r[30]); // 800D4824
  W32(c->r[1]+0x000002D4u,c->r[29]); // 800D4828
  c->r[29]=c->r[4]|c->r[4]; // 800D482C
  c->r[0]=c->r[3]+0xFFFFFFF7u; // 800D4830
  c->r[3]=0u+0x55550000u; // 800D4834
  c->r[3]=c->r[3]+0x00005556u; // 800D4838
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 800D483C
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800D4840
  c->r[31]=c->r[3]+c->r[0]; // 800D4844
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)20); // 800D4848
  c->r[0]=0u+0xCD000000u; // 800D484C
  c->r[3]=c->r[0]+c->r[3]; // 800D4850
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D4854
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D4858
  c->r[0]=c->r[0]|0x00000002u; // 800D485C
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D4860
  c->r[0]=rotl(c->r[31],6)&0xFFFFFFC0u; // 800D4864
  c->r[3]=0u+0x802C0000u; // 800D4868
  c->r[3]=c->r[3]+0xFFFFD210u; // 800D486C
  c->r[30]=R32(c->r[3]+c->r[0]); // 800D4870
  cmps(c,0,(int32_t)c->r[30],0); // 800D4874
  if (crb(c,2)) { goto L_800D48B0; } // 800D4878
  c->r[3]=c->r[1]+0x00000008u; // 800D487C
  c->lr=0x800D4884u; f_8009A840(c); // 800D4880
  c->r[3]=c->r[1]+0x00000008u; // 800D4884
  c->lr=0x800D488Cu; f_8009A618(c); // 800D4888
  c->r[3]=c->r[31]|c->r[31]; // 800D488C
  c->r[4]=c->r[29]|c->r[29]; // 800D4890
  c->r[12]=c->r[30]|c->r[30]; // 800D4894
  c->ctr=c->r[12]; // 800D4898
  if (true) { c->lr=0x800D48A0u; dispatch(c,c->ctr); } // 800D489C
  c->r[3]=c->r[1]+0x00000008u; // 800D48A0
  c->lr=0x800D48A8u; f_8009A840(c); // 800D48A4
  c->r[3]=c->r[29]|c->r[29]; // 800D48A8
  c->lr=0x800D48B0u; f_8009A618(c); // 800D48AC
L_800D48B0:;
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800D48B0
  c->r[30]=R32(c->r[1]+0x000002D8u); // 800D48B4
  c->r[29]=R32(c->r[1]+0x000002D4u); // 800D48B8
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800D48BC
  c->lr=c->r[0]; // 800D48C0
  c->r[1]=c->r[1]+0x000002E0u; // 800D48C4
  return; // 800D48C8
}

// TCIntrruptHandler
void f_800D48CC(Ctx* __restrict c) {
  trace_call(0x800D48CCu);
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D48CC
  c->r[0]=c->lr; // 800D48D0
  W32(c->r[1]+0x000002F4u,c->r[0]); // 800D48D4
  c->r[11]=c->r[1]+0x000002F0u; // 800D48D8
  c->lr=0x800D48E0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D48DC
  c->r[27]=c->r[4]|c->r[4]; // 800D48E0
  c->r[0]=c->r[3]+0xFFFFFFF6u; // 800D48E4
  c->r[4]=0u+0x55550000u; // 800D48E8
  c->r[4]=c->r[4]+0x00005556u; // 800D48EC
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 800D48F0
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 800D48F4
  c->r[29]=c->r[4]+c->r[0]; // 800D48F8
  c->r[0]=rotl(c->r[29],6)&0xFFFFFFC0u; // 800D48FC
  c->r[4]=0u+0x802C0000u; // 800D4900
  c->r[4]=c->r[4]+0xFFFFD210u; // 800D4904
  c->r[30]=c->r[4]+c->r[0]; // 800D4908
  c->r[31]=0u+0x80000000u; // 800D490C
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[31]>>((c->r[3])&31)); // 800D4910
  c->lr=0x800D4918u; f_8009E32C(c); // 800D4914
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)20); // 800D4918
  c->r[0]=0u+0xCD000000u; // 800D491C
  c->r[3]=c->r[0]+c->r[3]; // 800D4920
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D4924
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D4928
  c->r[0]=c->r[0]|0x00000008u; // 800D492C
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D4930
  c->r[28]=R32(c->r[30]+0x00000004u); // 800D4934
  cmps(c,0,(int32_t)c->r[28],0); // 800D4938
  if (crb(c,2)) { goto L_800D4ACC; } // 800D493C
  c->r[0]=0u+0x00000000u; // 800D4940
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D4944
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D4948
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800D494C
  if (crb(c,2)) { goto L_800D4A98; } // 800D4950
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D4954
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800D4958
  if (crb(c,2)) { goto L_800D4A8C; } // 800D495C
  c->r[5]=R32(c->r[30]+0x00000010u); // 800D4960
  cmps(c,1,(int32_t)c->r[5],0); // 800D4964
  if (crb(c,6)) { goto L_800D4A8C; } // 800D4968
  c->r[4]=R32(c->r[30]+0x00000014u); // 800D496C
  c->r[0]=R32(c->r[3]+0x00006810u); // 800D4970
  c->r[3]=0u+0x00000000u; // 800D4974
  if (!crb(c,5)) { goto L_800D4A8C; } // 800D4978
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 800D497C
  cmps(c,0,(int32_t)c->r[5],8); // 800D4980
  if (!crb(c,1)) { goto L_800D4A60; } // 800D4984
  c->r[8]=0u+0x00000000u; // 800D4988
  if (crb(c,4)) { goto L_800D49A0; } // 800D498C
  c->r[6]=c->r[31]+0xFFFFFFFEu; // 800D4990
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 800D4994
  if (crb(c,1)) { goto L_800D49A0; } // 800D4998
  c->r[8]=0u+0x00000001u; // 800D499C
L_800D49A0:;
  cmps(c,0,(int32_t)c->r[8],0); // 800D49A0
  if (crb(c,2)) { goto L_800D4A60; } // 800D49A4
  c->r[6]=c->r[7]+0x00000007u; // 800D49A8
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 800D49AC
  c->ctr=c->r[6]; // 800D49B0
  cmps(c,0,(int32_t)c->r[7],0); // 800D49B4
  if (!crb(c,1)) { goto L_800D4A60; } // 800D49B8
L_800D49BC:;
  c->r[6]=addc(c,~c->r[3],0x00000003u,1); // 800D49BC
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D49C0
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D49C4
  W8(c->r[4]+0x00000000u,c->r[6]); // 800D49C8
  c->r[6]=c->r[3]+0x00000001u; // 800D49CC
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D49D0
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D49D4
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D49D8
  W8(c->r[4]+0x00000001u,c->r[6]); // 800D49DC
  c->r[6]=c->r[3]+0x00000002u; // 800D49E0
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D49E4
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D49E8
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D49EC
  W8(c->r[4]+0x00000002u,c->r[6]); // 800D49F0
  c->r[6]=0u-c->r[3]; // 800D49F4
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D49F8
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D49FC
  W8(c->r[4]+0x00000003u,c->r[6]); // 800D4A00
  c->r[6]=c->r[3]+0x00000004u; // 800D4A04
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D4A08
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D4A0C
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D4A10
  W8(c->r[4]+0x00000004u,c->r[6]); // 800D4A14
  c->r[6]=c->r[3]+0x00000005u; // 800D4A18
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D4A1C
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D4A20
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D4A24
  W8(c->r[4]+0x00000005u,c->r[6]); // 800D4A28
  c->r[6]=c->r[3]+0x00000006u; // 800D4A2C
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D4A30
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D4A34
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D4A38
  W8(c->r[4]+0x00000006u,c->r[6]); // 800D4A3C
  c->r[6]=c->r[3]+0x00000007u; // 800D4A40
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D4A44
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D4A48
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D4A4C
  W8(c->r[4]+0x00000007u,c->r[6]); // 800D4A50
  c->r[4]=c->r[4]+0x00000008u; // 800D4A54
  c->r[3]=c->r[3]+0x00000008u; // 800D4A58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D49BC; } // 800D4A5C
L_800D4A60:;
  c->r[6]=c->r[5]-c->r[3]; // 800D4A60
  c->ctr=c->r[6]; // 800D4A64
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 800D4A68
  if (!crb(c,0)) { goto L_800D4A8C; } // 800D4A6C
L_800D4A70:;
  c->r[5]=addc(c,~c->r[3],0x00000003u,1); // 800D4A70
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D4A74
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]>>((c->r[5])&31)); // 800D4A78
  W8(c->r[4]+0x00000000u,c->r[5]); // 800D4A7C
  c->r[4]=c->r[4]+0x00000001u; // 800D4A80
  c->r[3]=c->r[3]+0x00000001u; // 800D4A84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D4A70; } // 800D4A88
L_800D4A8C:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D4A8C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800D4A90
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D4A94
L_800D4A98:;
  c->r[3]=c->r[1]+0x00000008u; // 800D4A98
  c->lr=0x800D4AA0u; f_8009A840(c); // 800D4A9C
  c->r[3]=c->r[1]+0x00000008u; // 800D4AA0
  c->lr=0x800D4AA8u; f_8009A618(c); // 800D4AA4
  c->r[3]=c->r[29]|c->r[29]; // 800D4AA8
  c->r[4]=c->r[27]|c->r[27]; // 800D4AAC
  c->r[12]=c->r[28]|c->r[28]; // 800D4AB0
  c->ctr=c->r[12]; // 800D4AB4
  if (true) { c->lr=0x800D4ABCu; dispatch(c,c->ctr); } // 800D4AB8
  c->r[3]=c->r[1]+0x00000008u; // 800D4ABC
  c->lr=0x800D4AC4u; f_8009A840(c); // 800D4AC0
  c->r[3]=c->r[27]|c->r[27]; // 800D4AC4
  c->lr=0x800D4ACCu; f_8009A618(c); // 800D4AC8
L_800D4ACC:;
  c->r[11]=c->r[1]+0x000002F0u; // 800D4ACC
  c->lr=0x800D4AD4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D4AD0
  c->r[0]=R32(c->r[1]+0x000002F4u); // 800D4AD4
  c->lr=c->r[0]; // 800D4AD8
  c->r[1]=c->r[1]+0x000002F0u; // 800D4ADC
  return; // 800D4AE0
}

// EXTIntrruptHandler
void f_800D4AE4(Ctx* __restrict c) {
  trace_call(0x800D4AE4u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4AE4
  c->r[0]=c->lr; // 800D4AE8
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800D4AEC
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800D4AF0
  W32(c->r[1]+0x000002D8u,c->r[30]); // 800D4AF4
  W32(c->r[1]+0x000002D4u,c->r[29]); // 800D4AF8
  W32(c->r[1]+0x000002D0u,c->r[28]); // 800D4AFC
  c->r[28]=c->r[4]|c->r[4]; // 800D4B00
  c->r[0]=c->r[3]+0xFFFFFFF5u; // 800D4B04
  c->r[3]=0u+0x55550000u; // 800D4B08
  c->r[3]=c->r[3]+0x00005556u; // 800D4B0C
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 800D4B10
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 800D4B14
  c->r[31]=c->r[3]+c->r[0]; // 800D4B18
  c->r[3]=0u+0x00500000u; // 800D4B1C
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D4B20
  c->r[0]=c->r[0]-c->r[31]; // 800D4B24
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D4B28
  c->lr=0x800D4B30u; f_8009E32C(c); // 800D4B2C
  c->r[0]=rotl(c->r[31],6)&0xFFFFFFC0u; // 800D4B30
  c->r[3]=0u+0x802C0000u; // 800D4B34
  c->r[3]=c->r[3]+0xFFFFD210u; // 800D4B38
  c->r[30]=c->r[3]+c->r[0]; // 800D4B3C
  c->r[29]=R32(c->r[30]+0x00000008u); // 800D4B40
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D4B44
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800D4B48
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D4B4C
  cmps(c,0,(int32_t)c->r[29],0); // 800D4B50
  if (crb(c,2)) { goto L_800D4B94; } // 800D4B54
  c->r[3]=c->r[1]+0x00000008u; // 800D4B58
  c->lr=0x800D4B60u; f_8009A840(c); // 800D4B5C
  c->r[3]=c->r[1]+0x00000008u; // 800D4B60
  c->lr=0x800D4B68u; f_8009A618(c); // 800D4B64
  c->r[0]=0u+0x00000000u; // 800D4B68
  W32(c->r[30]+0x00000008u,c->r[0]); // 800D4B6C
  c->r[3]=c->r[31]|c->r[31]; // 800D4B70
  c->r[4]=c->r[28]|c->r[28]; // 800D4B74
  c->r[12]=c->r[29]|c->r[29]; // 800D4B78
  c->ctr=c->r[12]; // 800D4B7C
  if (true) { c->lr=0x800D4B84u; dispatch(c,c->ctr); } // 800D4B80
  c->r[3]=c->r[1]+0x00000008u; // 800D4B84
  c->lr=0x800D4B8Cu; f_8009A840(c); // 800D4B88
  c->r[3]=c->r[28]|c->r[28]; // 800D4B8C
  c->lr=0x800D4B94u; f_8009A618(c); // 800D4B90
L_800D4B94:;
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800D4B94
  c->r[30]=R32(c->r[1]+0x000002D8u); // 800D4B98
  c->r[29]=R32(c->r[1]+0x000002D4u); // 800D4B9C
  c->r[28]=R32(c->r[1]+0x000002D0u); // 800D4BA0
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800D4BA4
  c->lr=c->r[0]; // 800D4BA8
  c->r[1]=c->r[1]+0x000002E0u; // 800D4BAC
  return; // 800D4BB0
}

// EXIInit
void f_800D4BB4(Ctx* __restrict c) {
  trace_call(0x800D4BB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4BB4
  c->r[0]=c->lr; // 800D4BB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4BBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4BC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4BC4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D4BC8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D4BCC
  c->r[3]=0u+0xCD000000u; // 800D4BD0
L_800D4BD4:;
  c->r[0]=R32(c->r[3]+0x0000680Cu); // 800D4BD4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D4BD8
  cmpu(c,0,c->r[0],0x00000001u); // 800D4BDC
  if (crb(c,2)) { IRQCHK(c); goto L_800D4BD4; } // 800D4BE0
  c->r[0]=R32(c->r[3]+0x00006820u); // 800D4BE4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D4BE8
  cmpu(c,0,c->r[0],0x00000001u); // 800D4BEC
  if (crb(c,2)) { IRQCHK(c); goto L_800D4BD4; } // 800D4BF0
  c->r[0]=R32(c->r[3]+0x00006834u); // 800D4BF4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D4BF8
  cmpu(c,0,c->r[0],0x00000001u); // 800D4BFC
  if (crb(c,2)) { IRQCHK(c); goto L_800D4BD4; } // 800D4C00
  c->r[3]=0u+0x00800000u; // 800D4C04
  c->r[3]=c->r[3]+0xFFFF8000u; // 800D4C08
  c->lr=0x800D4C10u; f_8009E32C(c); // 800D4C0C
  c->r[28]=0u+0x00000000u; // 800D4C10
  c->r[3]=0u+0xCD000000u; // 800D4C14
  W32(c->r[3]+0x00006800u,c->r[28]); // 800D4C18
  W32(c->r[3]+0x00006814u,c->r[28]); // 800D4C1C
  W32(c->r[3]+0x00006828u,c->r[28]); // 800D4C20
  c->r[0]=0u+0x00002000u; // 800D4C24
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D4C28
  c->r[3]=0u+0x00000009u; // 800D4C2C
  c->r[29]=0u+0x800D0000u; // 800D4C30
  c->r[4]=c->r[29]+0x00004814u; // 800D4C34
  c->lr=0x800D4C3Cu; f_8009DFE8(c); // 800D4C38
  c->r[3]=0u+0x0000000Au; // 800D4C3C
  c->r[30]=0u+0x800D0000u; // 800D4C40
  c->r[4]=c->r[30]+0x000048CCu; // 800D4C44
  c->lr=0x800D4C4Cu; f_8009DFE8(c); // 800D4C48
  c->r[3]=0u+0x0000000Bu; // 800D4C4C
  c->r[31]=0u+0x800D0000u; // 800D4C50
  c->r[4]=c->r[31]+0x00004AE4u; // 800D4C54
  c->lr=0x800D4C5Cu; f_8009DFE8(c); // 800D4C58
  c->r[3]=0u+0x0000000Cu; // 800D4C5C
  c->r[4]=c->r[29]+0x00004814u; // 800D4C60
  c->lr=0x800D4C68u; f_8009DFE8(c); // 800D4C64
  c->r[3]=0u+0x0000000Du; // 800D4C68
  c->r[4]=c->r[30]+0x000048CCu; // 800D4C6C
  c->lr=0x800D4C74u; f_8009DFE8(c); // 800D4C70
  c->r[3]=0u+0x0000000Eu; // 800D4C74
  c->r[4]=c->r[31]+0x00004AE4u; // 800D4C78
  c->lr=0x800D4C80u; f_8009DFE8(c); // 800D4C7C
  c->r[3]=0u+0x0000000Fu; // 800D4C80
  c->r[4]=c->r[29]+0x00004814u; // 800D4C84
  c->lr=0x800D4C8Cu; f_8009DFE8(c); // 800D4C88
  c->r[3]=0u+0x00000010u; // 800D4C8C
  c->r[4]=c->r[30]+0x000048CCu; // 800D4C90
  c->lr=0x800D4C98u; f_8009DFE8(c); // 800D4C94
  c->r[3]=0u+0x00000000u; // 800D4C98
  c->r[4]=0u+0x00000002u; // 800D4C9C
  c->r[5]=c->r[13]+0xFFFFA4E8u; // 800D4CA0
  c->lr=0x800D4CA8u; f_800D4F74(c); // 800D4CA4
  c->r[0]=R32(c->r[13]+0xFFFF9FB8u); // 800D4CA8
  cmps(c,0,(int32_t)c->r[0],0); // 800D4CAC
  if (crb(c,2)) { goto L_800D4CE4; } // 800D4CB0
  c->r[3]=0u+0x80000000u; // 800D4CB4
  W32(c->r[3]+0x000030C4u,c->r[28]); // 800D4CB8
  W32(c->r[3]+0x000030C0u,c->r[28]); // 800D4CBC
  c->r[3]=0u+0x802C0000u; // 800D4CC0
  c->r[3]=c->r[3]+0xFFFFD210u; // 800D4CC4
  W32(c->r[3]+0x00000060u,c->r[28]); // 800D4CC8
  W32(c->r[3]+0x00000020u,c->r[28]); // 800D4CCC
  c->r[3]=0u+0x00000000u; // 800D4CD0
  c->lr=0x800D4CD8u; f_800D4294(c); // 800D4CD4
  c->r[3]=0u+0x00000001u; // 800D4CD8
  c->lr=0x800D4CE0u; f_800D4294(c); // 800D4CDC
  goto L_800D4D50; // 800D4CE0
L_800D4CE4:;
  c->r[3]=0u+0x00000000u; // 800D4CE4
  c->r[4]=0u+0x00000000u; // 800D4CE8
  c->r[5]=c->r[1]+0x00000008u; // 800D4CEC
  c->lr=0x800D4CF4u; f_800D4F74(c); // 800D4CF0
  cmps(c,0,(int32_t)c->r[3],0); // 800D4CF4
  if (crb(c,2)) { goto L_800D4D1C; } // 800D4CF8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4CFC
  c->r[0]=c->r[3]+0xF8FF0000u; // 800D4D00
  cmpu(c,0,c->r[0],0x00000000u); // 800D4D04
  if (!crb(c,2)) { goto L_800D4D1C; } // 800D4D08
  c->r[3]=0u+0x00000001u; // 800D4D0C
  c->r[4]=0u+0x00000000u; // 800D4D10
  c->lr=0x800D4D18u; f_800D5498(c); // 800D4D14
  goto L_800D4D50; // 800D4D18
L_800D4D1C:;
  c->r[3]=0u+0x00000001u; // 800D4D1C
  c->r[4]=0u+0x00000000u; // 800D4D20
  c->r[5]=c->r[1]+0x00000008u; // 800D4D24
  c->lr=0x800D4D2Cu; f_800D4F74(c); // 800D4D28
  cmps(c,0,(int32_t)c->r[3],0); // 800D4D2C
  if (crb(c,2)) { goto L_800D4D50; } // 800D4D30
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4D34
  c->r[0]=c->r[3]+0xF8FF0000u; // 800D4D38
  cmpu(c,0,c->r[0],0x00000000u); // 800D4D3C
  if (!crb(c,2)) { goto L_800D4D50; } // 800D4D40
  c->r[3]=0u+0x00000000u; // 800D4D44
  c->r[4]=0u+0x00000002u; // 800D4D48
  c->lr=0x800D4D50u; f_800D5498(c); // 800D4D4C
L_800D4D50:;
  c->r[3]=R32(c->r[13]+0xFFFF8A20u); // 800D4D50
  c->lr=0x800D4D58u; f_80098F1C(c); // 800D4D54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4D58
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D4D5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D4D60
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D4D64
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4D68
  c->lr=c->r[0]; // 800D4D6C
  c->r[1]=c->r[1]+0x00000020u; // 800D4D70
  return; // 800D4D74
}

// EXILock
void f_800D4D78(Ctx* __restrict c) {
  trace_call(0x800D4D78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4D78
  c->r[0]=c->lr; // 800D4D7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4D80
  c->r[11]=c->r[1]+0x00000020u; // 800D4D84
  c->lr=0x800D4D8Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D4D88
  c->r[27]=c->r[3]|c->r[3]; // 800D4D8C
  c->r[31]=c->r[4]|c->r[4]; // 800D4D90
  c->r[28]=c->r[5]|c->r[5]; // 800D4D94
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D4D98
  c->r[3]=0u+0x802C0000u; // 800D4D9C
  c->r[3]=c->r[3]+0xFFFFD210u; // 800D4DA0
  c->r[30]=c->r[3]+c->r[0]; // 800D4DA4
  c->lr=0x800D4DACu; f_8009DF9C(c); // 800D4DA8
  c->r[29]=c->r[3]|c->r[3]; // 800D4DAC
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D4DB0
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D4DB4
  if (crb(c,2)) { goto L_800D4E34; } // 800D4DB8
  cmps(c,0,(int32_t)c->r[28],0); // 800D4DBC
  if (crb(c,2)) { goto L_800D4E24; } // 800D4DC0
  c->r[3]=c->r[30]|c->r[30]; // 800D4DC4
  c->r[4]=R32(c->r[30]+0x00000024u); // 800D4DC8
  c->ctr=c->r[4]; // 800D4DCC
  cmps(c,0,(int32_t)c->r[4],0); // 800D4DD0
  if (!crb(c,1)) { goto L_800D4DFC; } // 800D4DD4
L_800D4DD8:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 800D4DD8
  cmpu(c,0,c->r[31],c->r[0]); // 800D4DDC
  if (!crb(c,2)) { goto L_800D4DF4; } // 800D4DE0
  c->r[3]=c->r[29]|c->r[29]; // 800D4DE4
  c->lr=0x800D4DECu; f_8009DFC4(c); // 800D4DE8
  c->r[3]=0u+0x00000000u; // 800D4DEC
  goto L_800D4E5C; // 800D4DF0
L_800D4DF4:;
  c->r[3]=c->r[3]+0x00000008u; // 800D4DF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D4DD8; } // 800D4DF8
L_800D4DFC:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D4DFC
  c->r[3]=c->r[30]+c->r[0]; // 800D4E00
  W32(c->r[3]+0x0000002Cu,c->r[28]); // 800D4E04
  c->r[0]=R32(c->r[30]+0x00000024u); // 800D4E08
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D4E0C
  c->r[3]=c->r[30]+c->r[0]; // 800D4E10
  W32(c->r[3]+0x00000028u,c->r[31]); // 800D4E14
  c->r[3]=R32(c->r[30]+0x00000024u); // 800D4E18
  c->r[0]=c->r[3]+0x00000001u; // 800D4E1C
  W32(c->r[30]+0x00000024u,c->r[0]); // 800D4E20
L_800D4E24:;
  c->r[3]=c->r[29]|c->r[29]; // 800D4E24
  c->lr=0x800D4E2Cu; f_8009DFC4(c); // 800D4E28
  c->r[3]=0u+0x00000000u; // 800D4E2C
  goto L_800D4E5C; // 800D4E30
L_800D4E34:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D4E34
  c->r[0]=c->r[0]|0x00000010u; // 800D4E38
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800D4E3C
  W32(c->r[30]+0x00000018u,c->r[31]); // 800D4E40
  c->r[3]=c->r[27]|c->r[27]; // 800D4E44
  c->r[4]=c->r[30]|c->r[30]; // 800D4E48
  c->lr=0x800D4E50u; f_800D3A8C(c); // 800D4E4C
  c->r[3]=c->r[29]|c->r[29]; // 800D4E50
  c->lr=0x800D4E58u; f_8009DFC4(c); // 800D4E54
  c->r[3]=0u+0x00000001u; // 800D4E58
L_800D4E5C:;
  c->r[11]=c->r[1]+0x00000020u; // 800D4E5C
  c->lr=0x800D4E64u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D4E60
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4E64
  c->lr=c->r[0]; // 800D4E68
  c->r[1]=c->r[1]+0x00000020u; // 800D4E6C
  return; // 800D4E70
}

// EXIUnlock
void f_800D4E74(Ctx* __restrict c) {
  trace_call(0x800D4E74u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4E74
  c->r[0]=c->lr; // 800D4E78
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4E7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4E80
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4E84
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D4E88
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D4E8C
  c->r[28]=c->r[3]|c->r[3]; // 800D4E90
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D4E94
  c->r[3]=0u+0x802C0000u; // 800D4E98
  c->r[3]=c->r[3]+0xFFFFD210u; // 800D4E9C
  c->r[31]=c->r[3]+c->r[0]; // 800D4EA0
  c->lr=0x800D4EA8u; f_8009DF9C(c); // 800D4EA4
  c->r[30]=c->r[3]|c->r[3]; // 800D4EA8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4EAC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D4EB0
  if (!crb(c,2)) { goto L_800D4EC4; } // 800D4EB4
  c->lr=0x800D4EBCu; f_8009DFC4(c); // 800D4EB8
  c->r[3]=0u+0x00000000u; // 800D4EBC
  goto L_800D4F2C; // 800D4EC0
L_800D4EC4:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D4EC4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800D4EC8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D4ECC
  c->r[3]=c->r[28]|c->r[28]; // 800D4ED0
  c->r[4]=c->r[31]|c->r[31]; // 800D4ED4
  c->lr=0x800D4EDCu; f_800D3A8C(c); // 800D4ED8
  c->r[3]=R32(c->r[31]+0x00000024u); // 800D4EDC
  cmps(c,0,(int32_t)c->r[3],0); // 800D4EE0
  if (!crb(c,1)) { goto L_800D4F20; } // 800D4EE4
  c->r[29]=R32(c->r[31]+0x0000002Cu); // 800D4EE8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800D4EEC
  W32(c->r[31]+0x00000024u,c->r[0]); // 800D4EF0
  if (!crb(c,1)) { goto L_800D4F0C; } // 800D4EF4
  c->r[3]=c->r[31]+0x00000028u; // 800D4EF8
  c->r[4]=c->r[31]+0x00000030u; // 800D4EFC
  c->r[0]=R32(c->r[31]+0x00000024u); // 800D4F00
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D4F04
  c->lr=0x800D4F0Cu; f_800C7A34(c); // 800D4F08
L_800D4F0C:;
  c->r[3]=c->r[28]|c->r[28]; // 800D4F0C
  c->r[4]=0u+0x00000000u; // 800D4F10
  c->r[12]=c->r[29]|c->r[29]; // 800D4F14
  c->ctr=c->r[12]; // 800D4F18
  if (true) { c->lr=0x800D4F20u; dispatch(c,c->ctr); } // 800D4F1C
L_800D4F20:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4F20
  c->lr=0x800D4F28u; f_8009DFC4(c); // 800D4F24
  c->r[3]=0u+0x00000001u; // 800D4F28
L_800D4F2C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4F2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D4F30
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D4F34
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D4F38
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4F3C
  c->lr=c->r[0]; // 800D4F40
  c->r[1]=c->r[1]+0x00000020u; // 800D4F44
  return; // 800D4F48
}

// UnlockedHandler
void f_800D4F4C(Ctx* __restrict c) {
  trace_call(0x800D4F4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4F4C
  c->r[0]=c->lr; // 800D4F50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4F54
  c->r[4]=0u+0x00000000u; // 800D4F58
  c->r[5]=c->r[1]+0x00000008u; // 800D4F5C
  c->lr=0x800D4F64u; f_800D4F74(c); // 800D4F60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4F64
  c->lr=c->r[0]; // 800D4F68
  c->r[1]=c->r[1]+0x00000010u; // 800D4F6C
  return; // 800D4F70
}

// EXIGetID
void f_800D4F74(Ctx* __restrict c) {
  trace_call(0x800D4F74u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4F74
  c->r[0]=c->lr; // 800D4F78
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D4F7C
  c->r[11]=c->r[1]+0x00000040u; // 800D4F80
  c->lr=0x800D4F88u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D4F84
  c->r[25]=c->r[3]|c->r[3]; // 800D4F88
  c->r[26]=c->r[4]|c->r[4]; // 800D4F8C
  c->r[27]=c->r[5]|c->r[5]; // 800D4F90
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800D4F94
  c->r[6]=0u+0x802C0000u; // 800D4F98
  c->r[6]=c->r[6]+0xFFFFD210u; // 800D4F9C
  c->r[29]=c->r[6]+c->r[0]; // 800D4FA0
  cmps(c,0,(int32_t)c->r[3],0); // 800D4FA4
  if (!crb(c,2)) { goto L_800D4FCC; } // 800D4FA8
  cmpu(c,0,c->r[4],0x00000002u); // 800D4FAC
  if (!crb(c,2)) { goto L_800D4FCC; } // 800D4FB0
  c->r[0]=R32(c->r[13]+0xFFFFA4E8u); // 800D4FB4
  cmps(c,0,(int32_t)c->r[0],0); // 800D4FB8
  if (crb(c,2)) { goto L_800D4FCC; } // 800D4FBC
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D4FC0
  c->r[3]=0u+0x00000001u; // 800D4FC4
  goto L_800D5308; // 800D4FC8
L_800D4FCC:;
  cmps(c,0,(int32_t)c->r[3],2); // 800D4FCC
  if (!crb(c,0)) { goto L_800D50B8; } // 800D4FD0
  cmps(c,0,(int32_t)c->r[4],0); // 800D4FD4
  if (!crb(c,2)) { goto L_800D50B8; } // 800D4FD8
  c->r[3]=c->r[25]|c->r[25]; // 800D4FDC
  c->lr=0x800D4FE4u; f_800D4294(c); // 800D4FE0
  cmps(c,0,(int32_t)c->r[3],0); // 800D4FE4
  if (!crb(c,2)) { goto L_800D4FF4; } // 800D4FE8
  c->r[3]=0u+0x00000000u; // 800D4FEC
  goto L_800D5308; // 800D4FF0
L_800D4FF4:;
  c->r[3]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800D4FF4
  c->r[0]=0u+0x80000000u; // 800D4FF8
  c->r[31]=c->r[0]+c->r[3]; // 800D4FFC
  c->r[3]=R32(c->r[29]+0x00000020u); // 800D5000
  c->r[0]=R32(c->r[31]+0x000030C0u); // 800D5004
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D5008
  if (!crb(c,2)) { goto L_800D5020; } // 800D500C
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 800D5010
  W32(c->r[27]+0x00000000u,c->r[0]); // 800D5014
  c->r[3]=R32(c->r[29]+0x00000020u); // 800D5018
  goto L_800D5308; // 800D501C
L_800D5020:;
  c->lr=0x800D5024u; f_8009DF9C(c); // 800D5020
  c->r[30]=c->r[3]|c->r[3]; // 800D5024
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D5028
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D502C
  if (!crb(c,2)) { goto L_800D5044; } // 800D5030
  c->r[3]=c->r[25]|c->r[25]; // 800D5034
  c->lr=0x800D503Cu; f_800D4294(c); // 800D5038
  cmps(c,0,(int32_t)c->r[3],0); // 800D503C
  if (!crb(c,2)) { goto L_800D5054; } // 800D5040
L_800D5044:;
  c->r[3]=c->r[30]|c->r[30]; // 800D5044
  c->lr=0x800D504Cu; f_8009DFC4(c); // 800D5048
  c->r[0]=0u+0x00000000u; // 800D504C
  goto L_800D50A4; // 800D5050
L_800D5054:;
  c->r[3]=(uint32_t)((int32_t)c->r[25]*(int32_t)20); // 800D5054
  c->r[0]=0u+0xCD000000u; // 800D5058
  c->r[3]=c->r[0]+c->r[3]; // 800D505C
  c->r[0]=R32(c->r[3]+0x00006800u); // 800D5060
  c->r[0]=c->r[0]&0x000007F5u; cr0(c,c->r[0]); // 800D5064
  c->r[0]=c->r[0]|0x00000002u; // 800D5068
  W32(c->r[3]+0x00006800u,c->r[0]); // 800D506C
  c->r[0]=0u+0x00000000u; // 800D5070
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D5074
  c->r[3]=0u+0x00100000u; // 800D5078
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800D507C
  c->r[0]=c->r[0]-c->r[25]; // 800D5080
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D5084
  c->lr=0x800D508Cu; f_8009E3AC(c); // 800D5088
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D508C
  c->r[0]=c->r[0]|0x00000008u; // 800D5090
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800D5094
  c->r[3]=c->r[30]|c->r[30]; // 800D5098
  c->lr=0x800D50A0u; f_8009DFC4(c); // 800D509C
  c->r[0]=0u+0x00000001u; // 800D50A0
L_800D50A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D50A4
  if (!crb(c,2)) { goto L_800D50B4; } // 800D50A8
  c->r[3]=0u+0x00000000u; // 800D50AC
  goto L_800D5308; // 800D50B0
L_800D50B4:;
  c->r[31]=R32(c->r[31]+0x000030C0u); // 800D50B4
L_800D50B8:;
  c->lr=0x800D50BCu; f_8009DF9C(c); // 800D50B8
  c->r[28]=c->r[3]|c->r[3]; // 800D50BC
  c->r[3]=c->r[25]|c->r[25]; // 800D50C0
  c->r[4]=c->r[26]|c->r[26]; // 800D50C4
  c->r[5]=0u+0x00000000u; // 800D50C8
  cmps(c,0,(int32_t)c->r[25],2); // 800D50CC
  if (!crb(c,0)) { goto L_800D50E0; } // 800D50D0
  cmps(c,0,(int32_t)c->r[26],0); // 800D50D4
  if (!crb(c,2)) { goto L_800D50E0; } // 800D50D8
  c->r[5]=0u+0x00000001u; // 800D50DC
L_800D50E0:;
  c->r[0]=0u-c->r[5]; // 800D50E0
  c->r[0]=c->r[0]|c->r[5]; // 800D50E4
  c->r[0]=sraw(c,c->r[0],31); // 800D50E8
  c->r[5]=0u+0x800D0000u; // 800D50EC
  c->r[5]=c->r[5]+0x00004F4Cu; // 800D50F0
  c->r[5]=c->r[5]&c->r[0]; // 800D50F4
  c->lr=0x800D50FCu; f_800D4D78(c); // 800D50F8
  c->r[0]=cntlz(c->r[3]); // 800D50FC
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[30]); // 800D5100
  if (!crb(c,2)) { goto L_800D5230; } // 800D5104
  c->r[3]=c->r[25]|c->r[25]; // 800D5108
  c->r[4]=c->r[26]|c->r[26]; // 800D510C
  c->r[5]=0u+0x00000000u; // 800D5110
  c->lr=0x800D5118u; f_800D45E4(c); // 800D5114
  c->r[0]=cntlz(c->r[3]); // 800D5118
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[30]); // 800D511C
  if (!crb(c,2)) { goto L_800D51B0; } // 800D5120
  c->r[0]=0u+0x00000000u; // 800D5124
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D5128
  c->r[3]=c->r[25]|c->r[25]; // 800D512C
  c->r[4]=c->r[1]+0x00000008u; // 800D5130
  c->r[5]=0u+0x00000002u; // 800D5134
  c->r[6]=0u+0x00000001u; // 800D5138
  c->r[7]=0u+0x00000000u; // 800D513C
  c->lr=0x800D5144u; f_800D3B7C(c); // 800D5140
  c->r[0]=cntlz(c->r[3]); // 800D5144
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5148
  c->r[30]=c->r[30]|c->r[0]; // 800D514C
  c->r[3]=c->r[25]|c->r[25]; // 800D5150
  c->lr=0x800D5158u; f_800D3F94(c); // 800D5154
  c->r[0]=cntlz(c->r[3]); // 800D5158
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D515C
  c->r[30]=c->r[30]|c->r[0]; // 800D5160
  c->r[3]=c->r[25]|c->r[25]; // 800D5164
  c->r[4]=c->r[27]|c->r[27]; // 800D5168
  c->r[5]=0u+0x00000004u; // 800D516C
  c->r[6]=0u+0x00000000u; // 800D5170
  c->r[7]=0u+0x00000000u; // 800D5174
  c->lr=0x800D517Cu; f_800D3B7C(c); // 800D5178
  c->r[0]=cntlz(c->r[3]); // 800D517C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5180
  c->r[30]=c->r[30]|c->r[0]; // 800D5184
  c->r[3]=c->r[25]|c->r[25]; // 800D5188
  c->lr=0x800D5190u; f_800D3F94(c); // 800D518C
  c->r[0]=cntlz(c->r[3]); // 800D5190
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5194
  c->r[30]=c->r[30]|c->r[0]; // 800D5198
  c->r[3]=c->r[25]|c->r[25]; // 800D519C
  c->lr=0x800D51A4u; f_800D4714(c); // 800D51A0
  c->r[0]=cntlz(c->r[3]); // 800D51A4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D51A8
  c->r[30]=c->r[30]|c->r[0]; // 800D51AC
L_800D51B0:;
  c->lr=0x800D51B4u; f_8009DF9C(c); // 800D51B0
  c->r[23]=c->r[3]|c->r[3]; // 800D51B4
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D51B8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D51BC
  if (!crb(c,2)) { goto L_800D51CC; } // 800D51C0
  c->lr=0x800D51C8u; f_8009DFC4(c); // 800D51C4
  goto L_800D5230; // 800D51C8
L_800D51CC:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D51CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800D51D0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800D51D4
  c->r[3]=c->r[25]|c->r[25]; // 800D51D8
  c->r[4]=c->r[29]|c->r[29]; // 800D51DC
  c->lr=0x800D51E4u; f_800D3A8C(c); // 800D51E0
  c->r[3]=R32(c->r[29]+0x00000024u); // 800D51E4
  cmps(c,0,(int32_t)c->r[3],0); // 800D51E8
  if (!crb(c,1)) { goto L_800D5228; } // 800D51EC
  c->r[24]=R32(c->r[29]+0x0000002Cu); // 800D51F0
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800D51F4
  W32(c->r[29]+0x00000024u,c->r[0]); // 800D51F8
  if (!crb(c,1)) { goto L_800D5214; } // 800D51FC
  c->r[3]=c->r[29]+0x00000028u; // 800D5200
  c->r[4]=c->r[29]+0x00000030u; // 800D5204
  c->r[0]=R32(c->r[29]+0x00000024u); // 800D5208
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D520C
  c->lr=0x800D5214u; f_800C7A34(c); // 800D5210
L_800D5214:;
  c->r[3]=c->r[25]|c->r[25]; // 800D5214
  c->r[4]=0u+0x00000000u; // 800D5218
  c->r[12]=c->r[24]|c->r[24]; // 800D521C
  c->ctr=c->r[12]; // 800D5220
  if (true) { c->lr=0x800D5228u; dispatch(c,c->ctr); } // 800D5224
L_800D5228:;
  c->r[3]=c->r[23]|c->r[23]; // 800D5228
  c->lr=0x800D5230u; f_8009DFC4(c); // 800D522C
L_800D5230:;
  c->r[3]=c->r[28]|c->r[28]; // 800D5230
  c->lr=0x800D5238u; f_8009DFC4(c); // 800D5234
  cmps(c,0,(int32_t)c->r[25],2); // 800D5238
  if (!crb(c,0)) { goto L_800D5300; } // 800D523C
  cmps(c,0,(int32_t)c->r[26],0); // 800D5240
  if (!crb(c,2)) { goto L_800D5300; } // 800D5244
  c->lr=0x800D524Cu; f_8009DF9C(c); // 800D5248
  c->r[23]=c->r[3]|c->r[3]; // 800D524C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D5250
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800D5254
  if (!crb(c,2)) { goto L_800D5264; } // 800D5258
  c->lr=0x800D5260u; f_8009DFC4(c); // 800D525C
  goto L_800D52AC; // 800D5260
L_800D5264:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D5264
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D5268
  if (crb(c,2)) { goto L_800D5284; } // 800D526C
  c->r[0]=R32(c->r[29]+0x00000018u); // 800D5270
  cmps(c,0,(int32_t)c->r[0],0); // 800D5274
  if (!crb(c,2)) { goto L_800D5284; } // 800D5278
  c->lr=0x800D5280u; f_8009DFC4(c); // 800D527C
  goto L_800D52AC; // 800D5280
L_800D5284:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D5284
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800D5288
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800D528C
  c->r[3]=0u+0x00500000u; // 800D5290
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800D5294
  c->r[0]=c->r[0]-c->r[25]; // 800D5298
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D529C
  c->lr=0x800D52A4u; f_8009E32C(c); // 800D52A0
  c->r[3]=c->r[23]|c->r[23]; // 800D52A4
  c->lr=0x800D52ACu; f_8009DFC4(c); // 800D52A8
L_800D52AC:;
  c->lr=0x800D52B0u; f_8009DF9C(c); // 800D52AC
  c->r[4]=rotl(c->r[25],2)&0xFFFFFFFCu; // 800D52B0
  c->r[0]=0u+0x80000000u; // 800D52B4
  c->r[4]=c->r[0]+c->r[4]; // 800D52B8
  c->r[0]=R32(c->r[4]+0x000030C0u); // 800D52BC
  c->r[4]=c->r[0]-c->r[31]; // 800D52C0
  c->r[0]=c->r[31]-c->r[0]; // 800D52C4
  c->r[0]=c->r[4]|c->r[0]; // 800D52C8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800D52CC
  c->r[30]=c->r[30]|c->r[0]; cr0(c,c->r[30]); // 800D52D0
  if (!crb(c,2)) { goto L_800D52E4; } // 800D52D4
  c->r[0]=R32(c->r[27]+0x00000000u); // 800D52D8
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800D52DC
  W32(c->r[29]+0x00000020u,c->r[31]); // 800D52E0
L_800D52E4:;
  c->lr=0x800D52E8u; f_8009DFC4(c); // 800D52E4
  cmps(c,0,(int32_t)c->r[30],0); // 800D52E8
  if (crb(c,2)) { goto L_800D52F8; } // 800D52EC
  c->r[3]=0u+0x00000000u; // 800D52F0
  goto L_800D5308; // 800D52F4
L_800D52F8:;
  c->r[3]=R32(c->r[29]+0x00000020u); // 800D52F8
  goto L_800D5308; // 800D52FC
L_800D5300:;
  c->r[0]=cntlz(c->r[30]); // 800D5300
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5304
L_800D5308:;
  c->r[11]=c->r[1]+0x00000040u; // 800D5308
  c->lr=0x800D5310u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D530C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D5310
  c->lr=c->r[0]; // 800D5314
  c->r[1]=c->r[1]+0x00000040u; // 800D5318
  return; // 800D531C
}

// ProbeBarnacle
void f_800D5320(Ctx* __restrict c) {
  trace_call(0x800D5320u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5320
  c->r[0]=c->lr; // 800D5324
  cmps(c,0,(int32_t)c->r[3],2); // 800D5328
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D532C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D5330
  c->r[31]=c->r[5]|c->r[5]; // 800D5334
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D5338
  c->r[30]=c->r[4]|c->r[4]; // 800D533C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D5340
  c->r[29]=c->r[3]|c->r[3]; // 800D5344
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D5348
  if (crb(c,2)) { goto L_800D5370; } // 800D534C
  cmps(c,0,(int32_t)c->r[4],0); // 800D5350
  if (!crb(c,2)) { goto L_800D5370; } // 800D5354
  c->r[4]=0u+0x00000000u; // 800D5358
  c->lr=0x800D5360u; f_800D4414(c); // 800D535C
  cmps(c,0,(int32_t)c->r[3],0); // 800D5360
  if (!crb(c,2)) { goto L_800D5370; } // 800D5364
  c->r[3]=0u+0x00000000u; // 800D5368
  goto L_800D5478; // 800D536C
L_800D5370:;
  c->r[3]=c->r[29]|c->r[29]; // 800D5370
  c->r[4]=c->r[30]|c->r[30]; // 800D5374
  c->r[5]=0u+0x00000000u; // 800D5378
  c->lr=0x800D5380u; f_800D4D78(c); // 800D537C
  c->r[0]=cntlz(c->r[3]); // 800D5380
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[28]); // 800D5384
  if (!crb(c,2)) { goto L_800D543C; } // 800D5388
  c->r[3]=c->r[29]|c->r[29]; // 800D538C
  c->r[4]=c->r[30]|c->r[30]; // 800D5390
  c->r[5]=0u+0x00000000u; // 800D5394
  c->lr=0x800D539Cu; f_800D45E4(c); // 800D5398
  c->r[0]=cntlz(c->r[3]); // 800D539C
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[28]); // 800D53A0
  if (!crb(c,2)) { goto L_800D5434; } // 800D53A4
  c->r[4]=0u+0x20010000u; // 800D53A8
  c->r[3]=c->r[29]|c->r[29]; // 800D53AC
  c->r[0]=c->r[4]+0x00001300u; // 800D53B0
  c->r[5]=0u+0x00000004u; // 800D53B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D53B8
  c->r[4]=c->r[1]+0x00000008u; // 800D53BC
  c->r[6]=0u+0x00000001u; // 800D53C0
  c->r[7]=0u+0x00000000u; // 800D53C4
  c->lr=0x800D53CCu; f_800D3B7C(c); // 800D53C8
  c->r[0]=cntlz(c->r[3]); // 800D53CC
  c->r[3]=c->r[29]|c->r[29]; // 800D53D0
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D53D4
  c->lr=0x800D53DCu; f_800D3F94(c); // 800D53D8
  c->r[0]=cntlz(c->r[3]); // 800D53DC
  c->r[3]=c->r[29]|c->r[29]; // 800D53E0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D53E4
  c->r[4]=c->r[31]|c->r[31]; // 800D53E8
  c->r[28]=c->r[28]|c->r[0]; // 800D53EC
  c->r[5]=0u+0x00000004u; // 800D53F0
  c->r[6]=0u+0x00000000u; // 800D53F4
  c->r[7]=0u+0x00000000u; // 800D53F8
  c->lr=0x800D5400u; f_800D3B7C(c); // 800D53FC
  c->r[0]=cntlz(c->r[3]); // 800D5400
  c->r[3]=c->r[29]|c->r[29]; // 800D5404
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5408
  c->r[28]=c->r[28]|c->r[0]; // 800D540C
  c->lr=0x800D5414u; f_800D3F94(c); // 800D5410
  c->r[0]=cntlz(c->r[3]); // 800D5414
  c->r[3]=c->r[29]|c->r[29]; // 800D5418
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D541C
  c->r[28]=c->r[28]|c->r[0]; // 800D5420
  c->lr=0x800D5428u; f_800D4714(c); // 800D5424
  c->r[0]=cntlz(c->r[3]); // 800D5428
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D542C
  c->r[28]=c->r[28]|c->r[0]; // 800D5430
L_800D5434:;
  c->r[3]=c->r[29]|c->r[29]; // 800D5434
  c->lr=0x800D543Cu; f_800D4E74(c); // 800D5438
L_800D543C:;
  cmps(c,0,(int32_t)c->r[29],2); // 800D543C
  if (crb(c,2)) { goto L_800D5454; } // 800D5440
  cmps(c,0,(int32_t)c->r[30],0); // 800D5444
  if (!crb(c,2)) { goto L_800D5454; } // 800D5448
  c->r[3]=c->r[29]|c->r[29]; // 800D544C
  c->lr=0x800D5454u; f_800D452C(c); // 800D5450
L_800D5454:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D5454
  if (crb(c,2)) { goto L_800D5464; } // 800D5458
  c->r[3]=0u+0x00000000u; // 800D545C
  goto L_800D5478; // 800D5460
L_800D5464:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 800D5464
  c->r[3]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 800D5468
  c->r[0]=c->r[4]+0x00000001u; // 800D546C
  c->r[0]=c->r[3]|c->r[0]; // 800D5470
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D5474
L_800D5478:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5478
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D547C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D5480
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D5484
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D5488
  c->lr=c->r[0]; // 800D548C
  c->r[1]=c->r[1]+0x00000020u; // 800D5490
  return; // 800D5494
}

// __OSEnableBarnacle
void f_800D5498(Ctx* __restrict c) {
  trace_call(0x800D5498u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5498
  c->r[0]=c->lr; // 800D549C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D54A0
  c->r[5]=c->r[1]+0x00000008u; // 800D54A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D54A8
  c->r[31]=c->r[4]|c->r[4]; // 800D54AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D54B0
  c->r[30]=c->r[3]|c->r[3]; // 800D54B4
  c->lr=0x800D54BCu; f_800D4F74(c); // 800D54B8
  cmps(c,0,(int32_t)c->r[3],0); // 800D54BC
  if (crb(c,2)) { goto L_800D563C; } // 800D54C0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D54C4
  c->r[0]=0u+0x01020000u; // 800D54C8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D54CC
  if (crb(c,2)) { goto L_800D563C; } // 800D54D0
  if (!crb(c,0)) { goto L_800D5568; } // 800D54D4
  cmps(c,0,(int32_t)c->r[4],4); // 800D54D8
  if (crb(c,2)) { goto L_800D563C; } // 800D54DC
  if (!crb(c,0)) { goto L_800D5534; } // 800D54E0
  c->r[3]=0u+0x80000000u; // 800D54E4
  c->r[0]=c->r[3]+0x00000010u; // 800D54E8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D54EC
  if (crb(c,2)) { goto L_800D563C; } // 800D54F0
  if (!crb(c,0)) { goto L_800D5518; } // 800D54F4
  c->r[0]=c->r[3]+0x00000008u; // 800D54F8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D54FC
  if (crb(c,2)) { goto L_800D563C; } // 800D5500
  if (!crb(c,0)) { goto L_800D560C; } // 800D5504
  c->r[0]=c->r[3]+0x00000004u; // 800D5508
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D550C
  if (crb(c,2)) { goto L_800D563C; } // 800D5510
  goto L_800D560C; // 800D5514
L_800D5518:;
  cmps(c,0,(int32_t)c->r[4],-1); // 800D5518
  if (crb(c,2)) { goto L_800D563C; } // 800D551C
  if (!crb(c,0)) { goto L_800D560C; } // 800D5520
  c->r[0]=c->r[3]+0x00000020u; // 800D5524
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D5528
  if (crb(c,2)) { goto L_800D563C; } // 800D552C
  goto L_800D560C; // 800D5530
L_800D5534:;
  cmps(c,0,(int32_t)c->r[4],32); // 800D5534
  if (crb(c,2)) { goto L_800D563C; } // 800D5538
  if (!crb(c,0)) { goto L_800D5558; } // 800D553C
  cmps(c,0,(int32_t)c->r[4],16); // 800D5540
  if (crb(c,2)) { goto L_800D563C; } // 800D5544
  if (!crb(c,0)) { goto L_800D560C; } // 800D5548
  cmps(c,0,(int32_t)c->r[4],8); // 800D554C
  if (crb(c,2)) { goto L_800D563C; } // 800D5550
  goto L_800D560C; // 800D5554
L_800D5558:;
  c->r[0]=0u+0x01010000u; // 800D5558
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D555C
  if (crb(c,2)) { goto L_800D563C; } // 800D5560
  goto L_800D560C; // 800D5564
L_800D5568:;
  c->r[3]=0u+0x04040000u; // 800D5568
  c->r[0]=c->r[3]+0x00000404u; // 800D556C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D5570
  if (crb(c,2)) { goto L_800D563C; } // 800D5574
  if (!crb(c,0)) { goto L_800D55D0; } // 800D5578
  c->r[3]=0u+0x04020000u; // 800D557C
  c->r[0]=c->r[3]+0x00000100u; // 800D5580
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D5584
  if (crb(c,2)) { goto L_800D563C; } // 800D5588
  if (!crb(c,0)) { goto L_800D55B0; } // 800D558C
  c->r[0]=0u+0x03010000u; // 800D5590
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D5594
  if (crb(c,2)) { goto L_800D563C; } // 800D5598
  if (!crb(c,0)) { goto L_800D560C; } // 800D559C
  c->r[0]=0u+0x02020000u; // 800D55A0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D55A4
  if (crb(c,2)) { goto L_800D563C; } // 800D55A8
  goto L_800D560C; // 800D55AC
L_800D55B0:;
  c->r[0]=c->r[3]+0x00000300u; // 800D55B0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D55B4
  if (crb(c,2)) { goto L_800D563C; } // 800D55B8
  if (!crb(c,0)) { goto L_800D560C; } // 800D55BC
  c->r[0]=c->r[3]+0x00000200u; // 800D55C0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D55C4
  if (crb(c,2)) { goto L_800D563C; } // 800D55C8
  goto L_800D560C; // 800D55CC
L_800D55D0:;
  c->r[0]=0u+0x04130000u; // 800D55D0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D55D4
  if (crb(c,2)) { goto L_800D563C; } // 800D55D8
  if (!crb(c,0)) { goto L_800D5600; } // 800D55DC
  c->r[0]=0u+0x04120000u; // 800D55E0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D55E4
  if (crb(c,2)) { goto L_800D563C; } // 800D55E8
  if (!crb(c,0)) { goto L_800D560C; } // 800D55EC
  c->r[0]=0u+0x04060000u; // 800D55F0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D55F4
  if (crb(c,2)) { goto L_800D563C; } // 800D55F8
  goto L_800D560C; // 800D55FC
L_800D5600:;
  c->r[0]=0u+0x04220000u; // 800D5600
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D5604
  if (crb(c,2)) { goto L_800D563C; } // 800D5608
L_800D560C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D560C
  c->r[4]=c->r[31]|c->r[31]; // 800D5610
  c->r[5]=c->r[1]+0x00000008u; // 800D5614
  c->lr=0x800D561Cu; f_800D5320(c); // 800D5618
  cmps(c,0,(int32_t)c->r[3],0); // 800D561C
  if (crb(c,2)) { goto L_800D563C; } // 800D5620
  c->r[3]=0u+0xA5FF0000u; // 800D5624
  W32(c->r[13]+0xFFFFA4FCu,c->r[30]); // 800D5628
  c->r[0]=c->r[3]+0x0000005Au; // 800D562C
  W32(c->r[13]+0xFFFFA4F8u,c->r[31]); // 800D5630
  W32(c->r[13]+0xFFFFA4F4u,c->r[0]); // 800D5634
  W32(c->r[13]+0xFFFFA4F0u,c->r[0]); // 800D5638
L_800D563C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D563C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D5640
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D5644
  c->lr=c->r[0]; // 800D5648
  c->r[1]=c->r[1]+0x00000020u; // 800D564C
  return; // 800D5650
}

// EXIWriteReg
void f_800D5654(Ctx* __restrict c) {
  trace_call(0x800D5654u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5654
  c->r[0]=c->lr; // 800D5658
  cmps(c,0,(int32_t)c->r[7],2); // 800D565C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5660
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D5664
  c->r[31]=c->r[3]|c->r[3]; // 800D5668
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D566C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D5670
  c->r[29]=c->r[4]|c->r[4]; // 800D5674
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D5678
  if (crb(c,2)) { goto L_800D56A0; } // 800D567C
  if (!crb(c,0)) { goto L_800D56B4; } // 800D5680
  cmps(c,0,(int32_t)c->r[7],1); // 800D5684
  if (!crb(c,0)) { goto L_800D5690; } // 800D5688
  goto L_800D56B4; // 800D568C
L_800D5690:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 800D5690
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 800D5694
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D5698
  goto L_800D56D0; // 800D569C
L_800D56A0:;
  c->r[3]=R16(c->r[6]+0x00000000u); // 800D56A0
  c->r[0]=rotl(c->r[3],8)&0x00FF0000u; // 800D56A4
  c->r[0]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 800D56A8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D56AC
  goto L_800D56D0; // 800D56B0
L_800D56B4:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 800D56B4
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 800D56B8
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 800D56BC
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800D56C0
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 800D56C4
  c->r[0]=c->r[3]|c->r[0]; // 800D56C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D56CC
L_800D56D0:;
  c->r[3]=c->r[31]|c->r[31]; // 800D56D0
  c->r[4]=c->r[29]|c->r[29]; // 800D56D4
  c->r[5]=0u+0x00000000u; // 800D56D8
  c->lr=0x800D56E0u; f_800D4D78(c); // 800D56DC
  c->r[0]=cntlz(c->r[3]); // 800D56E0
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[30]); // 800D56E4
  if (crb(c,2)) { goto L_800D56F4; } // 800D56E8
  c->r[3]=0u+0x00000000u; // 800D56EC
  goto L_800D57C4; // 800D56F0
L_800D56F4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D56F4
  c->r[4]=c->r[29]|c->r[29]; // 800D56F8
  c->r[5]=0u+0x00000004u; // 800D56FC
  c->lr=0x800D5704u; f_800D45E4(c); // 800D5700
  c->r[0]=cntlz(c->r[3]); // 800D5704
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5708
  c->r[30]=c->r[30]|c->r[0]; cr0(c,c->r[30]); // 800D570C
  if (crb(c,2)) { goto L_800D5724; } // 800D5710
  c->r[3]=c->r[31]|c->r[31]; // 800D5714
  c->lr=0x800D571Cu; f_800D4E74(c); // 800D5718
  c->r[3]=0u+0x00000000u; // 800D571C
  goto L_800D57C4; // 800D5720
L_800D5724:;
  c->r[3]=c->r[31]|c->r[31]; // 800D5724
  c->r[4]=c->r[1]+0x00000008u; // 800D5728
  c->r[5]=0u+0x00000004u; // 800D572C
  c->r[6]=0u+0x00000001u; // 800D5730
  c->r[7]=0u+0x00000000u; // 800D5734
  c->lr=0x800D573Cu; f_800D3B7C(c); // 800D5738
  c->r[0]=cntlz(c->r[3]); // 800D573C
  c->r[3]=c->r[31]|c->r[31]; // 800D5740
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5744
  c->r[30]=c->r[30]|c->r[0]; // 800D5748
  c->lr=0x800D5750u; f_800D3F94(c); // 800D574C
  c->r[0]=cntlz(c->r[3]); // 800D5750
  c->r[3]=c->r[31]|c->r[31]; // 800D5754
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5758
  c->r[4]=c->r[1]+0x0000000Cu; // 800D575C
  c->r[30]=c->r[30]|c->r[0]; // 800D5760
  c->r[5]=0u+0x00000004u; // 800D5764
  c->r[6]=0u+0x00000001u; // 800D5768
  c->r[7]=0u+0x00000000u; // 800D576C
  c->lr=0x800D5774u; f_800D3B7C(c); // 800D5770
  c->r[0]=cntlz(c->r[3]); // 800D5774
  c->r[3]=c->r[31]|c->r[31]; // 800D5778
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D577C
  c->r[30]=c->r[30]|c->r[0]; // 800D5780
  c->lr=0x800D5788u; f_800D3F94(c); // 800D5784
  c->r[0]=cntlz(c->r[3]); // 800D5788
  c->r[3]=c->r[31]|c->r[31]; // 800D578C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D5790
  c->r[30]=c->r[30]|c->r[0]; // 800D5794
  c->lr=0x800D579Cu; f_800D4714(c); // 800D5798
  c->r[0]=cntlz(c->r[3]); // 800D579C
  c->r[3]=c->r[31]|c->r[31]; // 800D57A0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D57A4
  c->r[30]=c->r[30]|c->r[0]; // 800D57A8
  c->lr=0x800D57B0u; f_800D4E74(c); // 800D57AC
  c->r[0]=cntlz(c->r[3]); // 800D57B0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D57B4
  c->r[30]=c->r[30]|c->r[0]; // 800D57B8
  c->r[0]=cntlz(c->r[30]); // 800D57BC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D57C0
L_800D57C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D57C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D57C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D57CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D57D0
  c->lr=c->r[0]; // 800D57D4
  c->r[1]=c->r[1]+0x00000020u; // 800D57D8
  return; // 800D57DC
}

// CompleteTransfer
void f_800D57E0(Ctx* __restrict c) {
  trace_call(0x800D57E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D57E0
  c->r[0]=c->lr; // 800D57E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D57E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D57EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D57F0
  c->r[30]=0u+0x80220000u; // 800D57F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D57F8
  c->r[29]=0u+0xCD000000u; // 800D57FC
  c->r[31]=R32(c->r[29]+0x00006438u); // 800D5800
  c->r[0]=R32(c->r[29]+0x00006434u); // 800D5804
  c->r[0]=c->r[0]|0x80000000u; // 800D5808
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800D580C
  W32(c->r[29]+0x00006434u,c->r[0]); // 800D5810
  c->r[0]=R32(c->r[30]+0xFFFFC608u); // 800D5814
  cmps(c,0,(int32_t)c->r[0],-1); // 800D5818
  if (crb(c,2)) { goto L_800D5AB4; } // 800D581C
  c->lr=0x800D5824u; f_800A1D94(c); // 800D5820
  c->r[7]=R32(c->r[30]+0xFFFFC608u); // 800D5824
  c->r[6]=0u+0x802C0000u; // 800D5828
  c->r[5]=c->r[30]+0xFFFFC608u; // 800D582C
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D5830
  c->r[6]=c->r[6]+0xFFFFD350u; // 800D5834
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D5838
  c->r[6]=c->r[6]+c->r[7]; // 800D583C
  W32(c->r[6]+0x00000004u,c->r[4]); // 800D5840
  c->r[7]=0u+0x00000000u; // 800D5844
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; cr0(c,c->r[8]); // 800D5848
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 800D584C
  W32(c->r[6]+0x00000000u,c->r[3]); // 800D5850
  if (crb(c,2)) { goto L_800D5904; } // 800D5854
  cmpu(c,0,c->r[8],0x00000008u); // 800D5858
  c->r[3]=c->r[8]+0xFFFFFFF8u; // 800D585C
  if (!crb(c,1)) { goto L_800D58CC; } // 800D5860
  c->r[0]=c->r[3]+0x00000007u; // 800D5864
  c->r[4]=c->r[29]+0x00006400u; // 800D5868
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D586C
  c->ctr=c->r[0]; // 800D5870
  cmpu(c,0,c->r[3],0x00000000u); // 800D5874
  if (!crb(c,1)) { goto L_800D58CC; } // 800D5878
L_800D587C:;
  c->r[0]=R32(c->r[4]+0x00000080u); // 800D587C
  c->r[7]=c->r[7]+0x00000008u; // 800D5880
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D5884
  c->r[0]=R32(c->r[4]+0x00000084u); // 800D5888
  W32(c->r[5]+0x00000004u,c->r[0]); // 800D588C
  c->r[0]=R32(c->r[4]+0x00000088u); // 800D5890
  W32(c->r[5]+0x00000008u,c->r[0]); // 800D5894
  c->r[0]=R32(c->r[4]+0x0000008Cu); // 800D5898
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800D589C
  c->r[0]=R32(c->r[4]+0x00000090u); // 800D58A0
  W32(c->r[5]+0x00000010u,c->r[0]); // 800D58A4
  c->r[0]=R32(c->r[4]+0x00000094u); // 800D58A8
  W32(c->r[5]+0x00000014u,c->r[0]); // 800D58AC
  c->r[0]=R32(c->r[4]+0x00000098u); // 800D58B0
  W32(c->r[5]+0x00000018u,c->r[0]); // 800D58B4
  c->r[0]=R32(c->r[4]+0x0000009Cu); // 800D58B8
  c->r[4]=c->r[4]+0x00000020u; // 800D58BC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 800D58C0
  c->r[5]=c->r[5]+0x00000020u; // 800D58C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D587C; } // 800D58C8
L_800D58CC:;
  c->r[3]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D58CC
  c->r[0]=0u+0xCD000000u; // 800D58D0
  c->r[3]=c->r[0]+c->r[3]; // 800D58D4
  c->r[0]=c->r[8]-c->r[7]; // 800D58D8
  c->r[3]=c->r[3]+0x00006400u; // 800D58DC
  c->ctr=c->r[0]; // 800D58E0
  cmpu(c,0,c->r[7],c->r[8]); // 800D58E4
  if (!crb(c,0)) { goto L_800D5904; } // 800D58E8
L_800D58EC:;
  c->r[0]=R32(c->r[3]+0x00000080u); // 800D58EC
  c->r[3]=c->r[3]+0x00000004u; // 800D58F0
  c->r[7]=c->r[7]+0x00000001u; // 800D58F4
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D58F8
  c->r[5]=c->r[5]+0x00000004u; // 800D58FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D58EC; } // 800D5900
L_800D5904:;
  c->r[3]=0u+0x80220000u; // 800D5904
  c->r[3]=c->r[3]+0xFFFFC608u; // 800D5908
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D590C
  c->r[3]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[3]); // 800D5910
  if (crb(c,2)) { goto L_800D5A20; } // 800D5914
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D5918
  c->r[4]=0u+0xCD000000u; // 800D591C
  c->r[6]=c->r[4]+c->r[0]; // 800D5920
  c->r[0]=R32(c->r[6]+0x00006480u); // 800D5924
  c->r[4]=0u+0x00000000u; // 800D5928
  if (crb(c,2)) { goto L_800D5A20; } // 800D592C
  cmpu(c,0,c->r[3],0x00000008u); // 800D5930
  c->r[7]=c->r[3]+0xFFFFFFF8u; // 800D5934
  if (!crb(c,1)) { goto L_800D59F4; } // 800D5938
  c->r[6]=c->r[7]+0x00000007u; // 800D593C
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 800D5940
  c->ctr=c->r[6]; // 800D5944
  cmpu(c,0,c->r[7],0x00000000u); // 800D5948
  if (!crb(c,1)) { goto L_800D59F4; } // 800D594C
L_800D5950:;
  c->r[6]=addc(c,~c->r[4],0x00000003u,1); // 800D5950
  c->r[7]=c->r[4]+0x00000001u; // 800D5954
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D5958
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 800D595C
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 800D5960
  c->r[8]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D5964
  W8(c->r[5]+0x00000000u,c->r[9]); // 800D5968
  c->r[7]=c->r[4]+0x00000002u; // 800D596C
  c->r[6]=0u-c->r[4]; // 800D5970
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 800D5974
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D5978
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 800D597C
  c->r[6]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D5980
  W8(c->r[5]+0x00000001u,c->r[9]); // 800D5984
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D5988
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 800D598C
  c->r[6]=c->r[4]+0x00000004u; // 800D5990
  W8(c->r[5]+0x00000002u,c->r[9]); // 800D5994
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 800D5998
  c->r[6]=c->r[4]+0x00000005u; // 800D599C
  W8(c->r[5]+0x00000003u,c->r[8]); // 800D59A0
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D59A4
  c->r[9]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 800D59A8
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D59AC
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D59B0
  W8(c->r[5]+0x00000004u,c->r[9]); // 800D59B4
  c->r[6]=c->r[4]+0x00000006u; // 800D59B8
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 800D59BC
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 800D59C0
  c->r[6]=c->r[4]+0x00000007u; // 800D59C4
  W8(c->r[5]+0x00000005u,c->r[8]); // 800D59C8
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D59CC
  c->r[4]=c->r[4]+0x00000008u; // 800D59D0
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 800D59D4
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 800D59D8
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D59DC
  W8(c->r[5]+0x00000006u,c->r[7]); // 800D59E0
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 800D59E4
  W8(c->r[5]+0x00000007u,c->r[6]); // 800D59E8
  c->r[5]=c->r[5]+0x00000008u; // 800D59EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D5950; } // 800D59F0
L_800D59F4:;
  c->r[6]=c->r[3]-c->r[4]; // 800D59F4
  c->ctr=c->r[6]; // 800D59F8
  cmpu(c,0,c->r[4],c->r[3]); // 800D59FC
  if (!crb(c,0)) { goto L_800D5A20; } // 800D5A00
L_800D5A04:;
  c->r[3]=addc(c,~c->r[4],0x00000003u,1); // 800D5A04
  c->r[4]=c->r[4]+0x00000001u; // 800D5A08
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D5A0C
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[0]>>((c->r[3])&31)); // 800D5A10
  W8(c->r[5]+0x00000000u,c->r[3]); // 800D5A14
  c->r[5]=c->r[5]+0x00000001u; // 800D5A18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D5A04; } // 800D5A1C
L_800D5A20:;
  c->r[3]=0u+0xCD000000u; // 800D5A20
  c->r[0]=R32(c->r[3]+0x00006434u); // 800D5A24
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 800D5A28
  if (crb(c,2)) { goto L_800D5A80; } // 800D5A2C
  c->r[3]=0u+0x80220000u; // 800D5A30
  c->r[4]=R32(c->r[3]+0xFFFFC608u); // 800D5A34
  c->r[0]=addc(c,~c->r[4],0x00000003u,1); // 800D5A38
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D5A3C
  c->r[31]=((c->r[0])&0x20)?0u:(c->r[31]>>((c->r[0])&31)); // 800D5A40
  c->r[31]=rotl(c->r[31],0)&0x0000000Fu; // 800D5A44
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 800D5A48
  if (crb(c,2)) { goto L_800D5A70; } // 800D5A4C
  c->r[3]=0u+0x80220000u; // 800D5A50
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800D5A54
  c->r[3]=c->r[3]+0xFFFFC620u; // 800D5A58
  c->r[0]=R32(c->r[3]+c->r[4]); // 800D5A5C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800D5A60
  if (!crb(c,2)) { goto L_800D5A70; } // 800D5A64
  c->r[0]=0u+0x00000008u; // 800D5A68
  W32(c->r[3]+c->r[4],c->r[0]); // 800D5A6C
L_800D5A70:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D5A70
  if (!crb(c,2)) { goto L_800D5AA8; } // 800D5A74
  c->r[31]=0u+0x00000004u; // 800D5A78
  goto L_800D5AA8; // 800D5A7C
L_800D5A80:;
  c->lr=0x800D5A84u; f_800A1D94(c); // 800D5A80
  c->r[6]=0u+0x80220000u; // 800D5A84
  c->r[5]=0u+0x802C0000u; // 800D5A88
  c->r[0]=R32(c->r[6]+0xFFFFC608u); // 800D5A8C
  c->r[5]=c->r[5]+0xFFFFD370u; // 800D5A90
  c->r[31]=0u+0x00000000u; // 800D5A94
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D5A98
  c->r[5]=c->r[5]+c->r[0]; // 800D5A9C
  W32(c->r[5]+0x00000004u,c->r[4]); // 800D5AA0
  W32(c->r[5]+0x00000000u,c->r[3]); // 800D5AA4
L_800D5AA8:;
  c->r[0]=0u+0xFFFFFFFFu; // 800D5AA8
  c->r[3]=0u+0x80220000u; // 800D5AAC
  W32(c->r[3]+0xFFFFC608u,c->r[0]); // 800D5AB0
L_800D5AB4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D5AB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D5AB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D5ABC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D5AC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5AC4
  c->lr=c->r[0]; // 800D5AC8
  c->r[1]=c->r[1]+0x00000020u; // 800D5ACC
  return; // 800D5AD0
}

// SIInterruptHandler
void f_800D5AD4(Ctx* __restrict c) {
  trace_call(0x800D5AD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5AD4
  c->r[0]=c->lr; // 800D5AD8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D5ADC
  c->r[11]=c->r[1]+0x00000050u; // 800D5AE0
  c->lr=0x800D5AE8u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D5AE4
  c->r[5]=0u+0xCD000000u; // 800D5AE8
  c->r[27]=0u+0x802C0000u; // 800D5AEC
  c->r[21]=R32(c->r[5]+0x00006434u); // 800D5AF0
  c->r[30]=c->r[3]|c->r[3]; // 800D5AF4
  c->r[31]=c->r[4]|c->r[4]; // 800D5AF8
  c->r[27]=c->r[27]+0xFFFFD2D0u; // 800D5AFC
  c->r[3]=rotl(c->r[21],0)&0xC0000000u; // 800D5B00
  c->r[0]=c->r[3]+0x40000000u; // 800D5B04
  cmpu(c,0,c->r[0],0x00000000u); // 800D5B08
  if (!crb(c,2)) { goto L_800D5CB0; } // 800D5B0C
  c->r[17]=0u+0x80220000u; // 800D5B10
  c->r[22]=R32(c->r[17]+0xFFFFC608u); // 800D5B14
  c->lr=0x800D5B1Cu; f_800D57E0(c); // 800D5B18
  c->r[4]=c->r[17]+0xFFFFC608u; // 800D5B1C
  c->r[0]=0u+0x00000000u; // 800D5B20
  c->r[24]=R32(c->r[4]+0x00000010u); // 800D5B24
  c->r[23]=c->r[3]|c->r[3]; // 800D5B28
  c->r[28]=c->r[22]|c->r[22]; // 800D5B2C
  c->r[17]=c->r[27]+0x00000000u; // 800D5B30
  W32(c->r[4]+0x00000010u,c->r[0]); // 800D5B34
  c->r[26]=0u+0x00000000u; // 800D5B38
L_800D5B3C:;
  c->r[28]=c->r[28]+0x00000001u; // 800D5B3C
  c->r[0]=rotl(c->r[28],30)&0xC0000000u; // 800D5B40
  c->r[3]=rotl(c->r[28],1)&0x00000001u; // 800D5B44
  c->r[0]=c->r[0]-c->r[3]; // 800D5B48
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFFu; // 800D5B4C
  c->r[28]=c->r[0]+c->r[3]; // 800D5B50
  c->r[0]=rotl(c->r[28],5)&0xFFFFFFE0u; // 800D5B54
  c->r[29]=c->r[17]+c->r[0]; // 800D5B58
  c->r[0]=R32(c->r[17]+c->r[0]); // 800D5B5C
  cmps(c,0,(int32_t)c->r[0],-1); // 800D5B60
  if (crb(c,2)) { goto L_800D5BD0; } // 800D5B64
  c->lr=0x800D5B6Cu; f_800A1D94(c); // 800D5B68
  c->r[5]=R32(c->r[29]+0x00000018u); // 800D5B6C
  c->r[0]=c->r[3]^0x80000000u; // 800D5B70
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 800D5B74
  c->r[5]=c->r[5]^0x80000000u; // 800D5B78
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 800D5B7C
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D5B80
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D5B84
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D5B88
  if (!crb(c,2)) { goto L_800D5BD0; } // 800D5B8C
  c->r[3]=R32(c->r[29]+0x00000000u); // 800D5B90
  c->r[4]=R32(c->r[29]+0x00000004u); // 800D5B94
  c->r[5]=R32(c->r[29]+0x00000008u); // 800D5B98
  c->r[6]=R32(c->r[29]+0x0000000Cu); // 800D5B9C
  c->r[7]=R32(c->r[29]+0x00000010u); // 800D5BA0
  c->r[8]=R32(c->r[29]+0x00000014u); // 800D5BA4
  c->lr=0x800D5BACu; f_800D5F80(c); // 800D5BA8
  cmps(c,0,(int32_t)c->r[3],0); // 800D5BAC
  if (crb(c,2)) { goto L_800D5BDC; } // 800D5BB0
  c->r[3]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 800D5BB4
  c->r[0]=c->r[27]+0x000000C0u; // 800D5BB8
  c->r[3]=c->r[0]+c->r[3]; // 800D5BBC
  c->lr=0x800D5BC4u; f_80099344(c); // 800D5BC0
  c->r[0]=0u+0xFFFFFFFFu; // 800D5BC4
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D5BC8
  goto L_800D5BDC; // 800D5BCC
L_800D5BD0:;
  c->r[26]=c->r[26]+0x00000001u; // 800D5BD0
  cmps(c,0,(int32_t)c->r[26],4); // 800D5BD4
  if (crb(c,0)) { IRQCHK(c); goto L_800D5B3C; } // 800D5BD8
L_800D5BDC:;
  cmps(c,0,(int32_t)c->r[24],0); // 800D5BDC
  if (crb(c,2)) { goto L_800D5BFC; } // 800D5BE0
  c->r[12]=c->r[24]|c->r[24]; // 800D5BE4
  c->r[3]=c->r[22]|c->r[22]; // 800D5BE8
  c->r[4]=c->r[23]|c->r[23]; // 800D5BEC
  c->r[5]=c->r[31]|c->r[31]; // 800D5BF0
  c->ctr=c->r[12]; // 800D5BF4
  if (true) { c->lr=0x800D5BFCu; dispatch(c,c->ctr); } // 800D5BF8
L_800D5BFC:;
  c->r[5]=0u+0xCD000000u; // 800D5BFC
  c->r[3]=0u+0x80220000u; // 800D5C00
  c->r[0]=rotl(c->r[22],3)&0xFFFFFFF8u; // 800D5C04
  c->r[4]=0u+0x0F000000u; // 800D5C08
  c->r[4]=sraw(c,c->r[4],(c->r[0])&63); // 800D5C0C
  c->r[6]=R32(c->r[5]+0x00006438u); // 800D5C10
  c->r[0]=rotl(c->r[22],2)&0xFFFFFFFCu; // 800D5C14
  c->r[3]=c->r[3]+0xFFFFC620u; // 800D5C18
  c->r[6]=c->r[6]&c->r[4]; // 800D5C1C
  W32(c->r[5]+0x00006438u,c->r[6]); // 800D5C20
  c->r[6]=c->r[3]+c->r[0]; // 800D5C24
  c->r[0]=R32(c->r[3]+c->r[0]); // 800D5C28
  cmpu(c,0,c->r[0],0x00000080u); // 800D5C2C
  if (!crb(c,2)) { goto L_800D5CB0; } // 800D5C30
  c->r[0]=rotl(c->r[22],5)&0xFFFFFFE0u; // 800D5C34
  c->r[3]=c->r[27]+0x00000000u; // 800D5C38
  c->r[0]=R32(c->r[3]+c->r[0]); // 800D5C3C
  c->r[4]=0u+0x00000000u; // 800D5C40
  cmps(c,0,(int32_t)c->r[0],-1); // 800D5C44
  if (!crb(c,2)) { goto L_800D5C5C; } // 800D5C48
  c->r[3]=0u+0x80220000u; // 800D5C4C
  c->r[0]=R32(c->r[3]+0xFFFFC608u); // 800D5C50
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[22]); // 800D5C54
  if (!crb(c,2)) { goto L_800D5C60; } // 800D5C58
L_800D5C5C:;
  c->r[4]=0u+0x00000001u; // 800D5C5C
L_800D5C60:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D5C60
  if (!crb(c,2)) { goto L_800D5CB0; } // 800D5C64
  c->r[4]=0u+0x80000000u; // 800D5C68
  c->r[8]=0u+0x800D0000u; // 800D5C6C
  c->r[0]=R32(c->r[4]+0x000000F8u); // 800D5C70
  c->r[3]=0u+0x431C0000u; // 800D5C74
  c->r[4]=c->r[3]+0xFFFFDE83u; // 800D5C78
  c->r[8]=c->r[8]+0x00006384u; // 800D5C7C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D5C80
  c->r[3]=c->r[22]|c->r[22]; // 800D5C84
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 800D5C88
  c->r[4]=c->r[13]+0xFFFFA500u; // 800D5C8C
  c->r[5]=0u+0x00000001u; // 800D5C90
  c->r[7]=0u+0x00000003u; // 800D5C94
  c->r[9]=0u+0x00000000u; // 800D5C98
  c->r[10]=rotl(c->r[0],17)&0x0001FFFFu; // 800D5C9C
  c->r[0]=rotl(c->r[0],23)&0x007FFFC0u; // 800D5CA0
  c->r[0]=c->r[0]+c->r[10]; // 800D5CA4
  c->r[10]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D5CA8
  c->lr=0x800D5CB0u; f_800D6218(c); // 800D5CAC
L_800D5CB0:;
  c->r[3]=rotl(c->r[21],0)&0x18000000u; // 800D5CB0
  c->r[0]=c->r[3]+0xE8000000u; // 800D5CB4
  cmpu(c,0,c->r[0],0x00000000u); // 800D5CB8
  if (!crb(c,2)) { goto L_800D5EA8; } // 800D5CBC
  c->lr=0x800D5CC4u; f_800AECC0(c); // 800D5CC0
  c->r[4]=0u+0x80220000u; // 800D5CC4
  c->r[25]=0u+0x80220000u; // 800D5CC8
  c->r[4]=c->r[4]+0xFFFFC608u; // 800D5CCC
  c->r[28]=0u+0xCD000000u; // 800D5CD0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D5CD4
  c->r[19]=c->r[3]+0x00000001u; // 800D5CD8
  c->r[25]=c->r[25]+0xFFFFC620u; // 800D5CDC
  c->r[24]=c->r[28]+0x00006400u; // 800D5CE0
  c->r[18]=rotl(c->r[0],16)&0x000003FFu; // 800D5CE4
  c->r[23]=c->r[27]+0x00000180u; // 800D5CE8
  c->r[22]=c->r[27]+0x000001A0u; // 800D5CEC
  c->r[21]=c->r[27]+0x000001B0u; // 800D5CF0
  c->r[20]=0u+0x00000000u; // 800D5CF4
  c->r[29]=0u+0x00000008u; // 800D5CF8
  c->r[17]=0u+0x00000001u; // 800D5CFC
L_800D5D00:;
  c->lr=0x800D5D04u; f_8009DF9C(c); // 800D5D00
  c->r[0]=addc(c,~c->r[20],0x00000003u,1); // 800D5D04
  c->r[26]=R32(c->r[28]+0x00006438u); // 800D5D08
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D5D0C
  c->r[26]=((c->r[0])&0x20)?0u:(c->r[26]>>((c->r[0])&31)); // 800D5D10
  c->r[0]=rotl(c->r[26],0)&0x00000008u; cr0(c,c->r[0]); // 800D5D14
  if (crb(c,2)) { goto L_800D5D2C; } // 800D5D18
  c->r[0]=R32(c->r[25]+0x00000000u); // 800D5D1C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800D5D20
  if (!crb(c,2)) { goto L_800D5D2C; } // 800D5D24
  W32(c->r[25]+0x00000000u,c->r[29]); // 800D5D28
L_800D5D2C:;
  c->lr=0x800D5D30u; f_8009DFC4(c); // 800D5D2C
  c->r[0]=rotl(c->r[26],0)&0x00000020u; cr0(c,c->r[0]); // 800D5D30
  if (crb(c,2)) { goto L_800D5D54; } // 800D5D34
  c->r[0]=R32(c->r[24]+0x00000004u); // 800D5D38
  c->r[3]=0u+0x00000001u; // 800D5D3C
  W32(c->r[23]+0x00000000u,c->r[0]); // 800D5D40
  c->r[0]=R32(c->r[24]+0x00000008u); // 800D5D44
  W32(c->r[23]+0x00000004u,c->r[0]); // 800D5D48
  W32(c->r[22]+0x00000000u,c->r[17]); // 800D5D4C
  goto L_800D5D58; // 800D5D50
L_800D5D54:;
  c->r[3]=0u+0x00000000u; // 800D5D54
L_800D5D58:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D5D58
  if (crb(c,2)) { goto L_800D5D64; } // 800D5D5C
  W32(c->r[21]+0x00000000u,c->r[19]); // 800D5D60
L_800D5D64:;
  c->r[20]=c->r[20]+0x00000001u; // 800D5D64
  c->r[24]=c->r[24]+0x0000000Cu; // 800D5D68
  cmps(c,0,(int32_t)c->r[20],4); // 800D5D6C
  c->r[23]=c->r[23]+0x00000008u; // 800D5D70
  c->r[22]=c->r[22]+0x00000004u; // 800D5D74
  c->r[21]=c->r[21]+0x00000004u; // 800D5D78
  c->r[25]=c->r[25]+0x00000004u; // 800D5D7C
  if (crb(c,0)) { IRQCHK(c); goto L_800D5D00; } // 800D5D80
  c->r[4]=0u+0x80220000u; // 800D5D84
  c->r[3]=0u+0x80000000u; // 800D5D88
  c->r[4]=c->r[4]+0xFFFFC608u; // 800D5D8C
  c->r[0]=0u+0x00000018u; // 800D5D90
  c->r[5]=R32(c->r[4]+0x00000004u); // 800D5D94
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D5D98
  c->r[4]=c->r[27]+0x000001B0u; // 800D5D9C
  c->r[6]=rotl(c->r[18],31)&0x7FFFFFFFu; // 800D5DA0
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 800D5DA4
  if (crb(c,2)) { goto L_800D5DCC; } // 800D5DA8
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D5DAC
  cmps(c,0,(int32_t)c->r[0],0); // 800D5DB0
  if (crb(c,2)) { goto L_800D5EA8; } // 800D5DB4
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D5DB8
  c->r[0]=c->r[6]+c->r[0]; // 800D5DBC
  cmpu(c,0,c->r[0],c->r[19]); // 800D5DC0
  if (!crb(c,0)) { goto L_800D5DCC; } // 800D5DC4
  goto L_800D5EA8; // 800D5DC8
L_800D5DCC:;
  c->r[0]=0u+0x00000019u; // 800D5DCC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D5DD0
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 800D5DD4
  if (crb(c,2)) { goto L_800D5DFC; } // 800D5DD8
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D5DDC
  cmps(c,0,(int32_t)c->r[0],0); // 800D5DE0
  if (crb(c,2)) { goto L_800D5EA8; } // 800D5DE4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D5DE8
  c->r[0]=c->r[6]+c->r[0]; // 800D5DEC
  cmpu(c,0,c->r[0],c->r[19]); // 800D5DF0
  if (!crb(c,0)) { goto L_800D5DFC; } // 800D5DF4
  goto L_800D5EA8; // 800D5DF8
L_800D5DFC:;
  c->r[0]=0u+0x0000001Au; // 800D5DFC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D5E00
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 800D5E04
  if (crb(c,2)) { goto L_800D5E2C; } // 800D5E08
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D5E0C
  cmps(c,0,(int32_t)c->r[0],0); // 800D5E10
  if (crb(c,2)) { goto L_800D5EA8; } // 800D5E14
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D5E18
  c->r[0]=c->r[6]+c->r[0]; // 800D5E1C
  cmpu(c,0,c->r[0],c->r[19]); // 800D5E20
  if (!crb(c,0)) { goto L_800D5E2C; } // 800D5E24
  goto L_800D5EA8; // 800D5E28
L_800D5E2C:;
  c->r[0]=0u+0x0000001Bu; // 800D5E2C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D5E30
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 800D5E34
  if (crb(c,2)) { goto L_800D5E5C; } // 800D5E38
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D5E3C
  cmps(c,0,(int32_t)c->r[0],0); // 800D5E40
  if (crb(c,2)) { goto L_800D5EA8; } // 800D5E44
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D5E48
  c->r[0]=c->r[6]+c->r[0]; // 800D5E4C
  cmpu(c,0,c->r[0],c->r[19]); // 800D5E50
  if (!crb(c,0)) { goto L_800D5E5C; } // 800D5E54
  goto L_800D5EA8; // 800D5E58
L_800D5E5C:;
  c->r[0]=0u+0x00000000u; // 800D5E5C
  c->r[3]=c->r[27]+0x000001B0u; // 800D5E60
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D5E64
  c->r[17]=c->r[27]+0x000001C0u; // 800D5E68
  c->r[18]=0u+0x00000000u; // 800D5E6C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D5E70
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D5E74
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D5E78
L_800D5E7C:;
  c->r[12]=R32(c->r[17]+0x00000000u); // 800D5E7C
  cmps(c,0,(int32_t)c->r[12],0); // 800D5E80
  if (crb(c,2)) { goto L_800D5E98; } // 800D5E84
  c->r[3]=c->r[30]|c->r[30]; // 800D5E88
  c->r[4]=c->r[31]|c->r[31]; // 800D5E8C
  c->ctr=c->r[12]; // 800D5E90
  if (true) { c->lr=0x800D5E98u; dispatch(c,c->ctr); } // 800D5E94
L_800D5E98:;
  c->r[18]=c->r[18]+0x00000001u; // 800D5E98
  c->r[17]=c->r[17]+0x00000004u; // 800D5E9C
  cmps(c,0,(int32_t)c->r[18],4); // 800D5EA0
  if (crb(c,0)) { IRQCHK(c); goto L_800D5E7C; } // 800D5EA4
L_800D5EA8:;
  c->r[11]=c->r[1]+0x00000050u; // 800D5EA8
  c->lr=0x800D5EB0u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D5EAC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D5EB0
  c->lr=c->r[0]; // 800D5EB4
  c->r[1]=c->r[1]+0x00000050u; // 800D5EB8
  return; // 800D5EBC
}

// SIInit
void f_800D5EC0(Ctx* __restrict c) {
  trace_call(0x800D5EC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5EC0
  c->r[0]=c->lr; // 800D5EC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D5EC8
  c->r[0]=R32(c->r[13]+0xFFFFA504u); // 800D5ECC
  cmps(c,0,(int32_t)c->r[0],0); // 800D5ED0
  if (!crb(c,2)) { goto L_800D5F70; } // 800D5ED4
  c->r[3]=R32(c->r[13]+0xFFFF8A28u); // 800D5ED8
  c->lr=0x800D5EE0u; f_80098F1C(c); // 800D5EDC
  c->r[6]=0u+0x802C0000u; // 800D5EE0
  c->r[4]=0u+0x80220000u; // 800D5EE4
  c->r[7]=0u+0xFFFFFFFFu; // 800D5EE8
  c->r[0]=0u+0x00000000u; // 800D5EEC
  c->r[5]=c->r[6]+0xFFFFD2D0u; // 800D5EF0
  c->r[4]=c->r[4]+0xFFFFC608u; // 800D5EF4
  W32(c->r[5]+0x00000060u,c->r[7]); // 800D5EF8
  c->r[3]=0u+0x00000000u; // 800D5EFC
  W32(c->r[5]+0x00000040u,c->r[7]); // 800D5F00
  W32(c->r[5]+0x00000020u,c->r[7]); // 800D5F04
  W32(c->r[6]+0xFFFFD2D0u,c->r[7]); // 800D5F08
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D5F0C
  c->lr=0x800D5F14u; f_800D67E8(c); // 800D5F10
  c->r[3]=0u+0xCD000000u; // 800D5F14
L_800D5F18:;
  c->r[0]=R32(c->r[3]+0x00006434u); // 800D5F18
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800D5F1C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D5F18; } // 800D5F20
  c->r[0]=0u+0x80000000u; // 800D5F24
  c->r[3]=0u+0xCD000000u; // 800D5F28
  c->r[4]=0u+0x800D0000u; // 800D5F2C
  W32(c->r[3]+0x00006434u,c->r[0]); // 800D5F30
  c->r[4]=c->r[4]+0x00005AD4u; // 800D5F34
  c->r[3]=0u+0x00000014u; // 800D5F38
  c->lr=0x800D5F40u; f_8009DFE8(c); // 800D5F3C
  c->r[3]=0u+0x00000800u; // 800D5F40
  c->lr=0x800D5F48u; f_8009E3AC(c); // 800D5F44
  c->r[3]=0u+0x00000000u; // 800D5F48
  c->lr=0x800D5F50u; f_800D6634(c); // 800D5F4C
  c->r[3]=0u+0x00000001u; // 800D5F50
  c->lr=0x800D5F58u; f_800D6634(c); // 800D5F54
  c->r[3]=0u+0x00000002u; // 800D5F58
  c->lr=0x800D5F60u; f_800D6634(c); // 800D5F5C
  c->r[3]=0u+0x00000003u; // 800D5F60
  c->lr=0x800D5F68u; f_800D6634(c); // 800D5F64
  c->r[0]=0u+0x00000001u; // 800D5F68
  W32(c->r[13]+0xFFFFA504u,c->r[0]); // 800D5F6C
L_800D5F70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D5F70
  c->lr=c->r[0]; // 800D5F74
  c->r[1]=c->r[1]+0x00000010u; // 800D5F78
  return; // 800D5F7C
}

// __SITransfer
void f_800D5F80(Ctx* __restrict c) {
  trace_call(0x800D5F80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5F80
  c->r[0]=c->lr; // 800D5F84
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D5F88
  c->r[11]=c->r[1]+0x00000020u; // 800D5F8C
  c->lr=0x800D5F94u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D5F90
  c->r[27]=c->r[3]|c->r[3]; // 800D5F94
  c->r[28]=c->r[4]|c->r[4]; // 800D5F98
  c->r[29]=c->r[5]|c->r[5]; // 800D5F9C
  c->r[26]=c->r[6]|c->r[6]; // 800D5FA0
  c->r[30]=c->r[7]|c->r[7]; // 800D5FA4
  c->r[31]=c->r[8]|c->r[8]; // 800D5FA8
  c->lr=0x800D5FB0u; f_8009DF9C(c); // 800D5FAC
  c->r[8]=0u+0x80220000u; // 800D5FB0
  c->r[0]=R32(c->r[8]+0xFFFFC608u); // 800D5FB4
  cmps(c,0,(int32_t)c->r[0],-1); // 800D5FB8
  if (crb(c,2)) { goto L_800D5FCC; } // 800D5FBC
  c->lr=0x800D5FC4u; f_8009DFC4(c); // 800D5FC0
  c->r[3]=0u+0x00000000u; // 800D5FC4
  goto L_800D6118; // 800D5FC8
L_800D5FCC:;
  c->r[7]=0u+0xCD000000u; // 800D5FCC
  c->r[4]=rotl(c->r[27],3)&0xFFFFFFF8u; // 800D5FD0
  c->r[5]=0u+0x0F000000u; // 800D5FD4
  c->r[9]=R32(c->r[7]+0x00006438u); // 800D5FD8
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 800D5FDC
  c->r[0]=c->r[29]+0x00000003u; // 800D5FE0
  c->r[9]=c->r[9]&c->r[5]; // 800D5FE4
  c->r[6]=c->r[8]+0xFFFFC608u; // 800D5FE8
  W32(c->r[7]+0x00006438u,c->r[9]); // 800D5FEC
  c->r[4]=rotl(c->r[0],30)&0x3FFFFFFFu; cr0(c,c->r[4]); // 800D5FF0
  c->r[5]=0u+0x00000000u; // 800D5FF4
  W32(c->r[8]+0xFFFFC608u,c->r[27]); // 800D5FF8
  W32(c->r[6]+0x00000010u,c->r[31]); // 800D5FFC
  W32(c->r[6]+0x00000008u,c->r[30]); // 800D6000
  W32(c->r[6]+0x0000000Cu,c->r[26]); // 800D6004
  if (crb(c,2)) { goto L_800D60BC; } // 800D6008
  cmpu(c,0,c->r[4],0x00000008u); // 800D600C
  c->r[6]=c->r[4]+0xFFFFFFF8u; // 800D6010
  if (!crb(c,1)) { goto L_800D6084; } // 800D6014
  c->r[0]=c->r[6]+0x00000007u; // 800D6018
  c->r[8]=c->r[28]|c->r[28]; // 800D601C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D6020
  c->r[7]=c->r[7]+0x00006400u; // 800D6024
  c->ctr=c->r[0]; // 800D6028
  cmpu(c,0,c->r[6],0x00000000u); // 800D602C
  if (!crb(c,1)) { goto L_800D6084; } // 800D6030
L_800D6034:;
  c->r[0]=R32(c->r[8]+0x00000000u); // 800D6034
  c->r[5]=c->r[5]+0x00000008u; // 800D6038
  W32(c->r[7]+0x00000080u,c->r[0]); // 800D603C
  c->r[0]=R32(c->r[8]+0x00000004u); // 800D6040
  W32(c->r[7]+0x00000084u,c->r[0]); // 800D6044
  c->r[0]=R32(c->r[8]+0x00000008u); // 800D6048
  W32(c->r[7]+0x00000088u,c->r[0]); // 800D604C
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 800D6050
  W32(c->r[7]+0x0000008Cu,c->r[0]); // 800D6054
  c->r[0]=R32(c->r[8]+0x00000010u); // 800D6058
  W32(c->r[7]+0x00000090u,c->r[0]); // 800D605C
  c->r[0]=R32(c->r[8]+0x00000014u); // 800D6060
  W32(c->r[7]+0x00000094u,c->r[0]); // 800D6064
  c->r[0]=R32(c->r[8]+0x00000018u); // 800D6068
  W32(c->r[7]+0x00000098u,c->r[0]); // 800D606C
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800D6070
  c->r[8]=c->r[8]+0x00000020u; // 800D6074
  W32(c->r[7]+0x0000009Cu,c->r[0]); // 800D6078
  c->r[7]=c->r[7]+0x00000020u; // 800D607C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D6034; } // 800D6080
L_800D6084:;
  c->r[7]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800D6084
  c->r[0]=0u+0xCD000000u; // 800D6088
  c->r[6]=c->r[0]+c->r[7]; // 800D608C
  c->r[0]=c->r[4]-c->r[5]; // 800D6090
  c->r[7]=c->r[28]+c->r[7]; // 800D6094
  c->r[6]=c->r[6]+0x00006400u; // 800D6098
  c->ctr=c->r[0]; // 800D609C
  cmpu(c,0,c->r[5],c->r[4]); // 800D60A0
  if (!crb(c,0)) { goto L_800D60BC; } // 800D60A4
L_800D60A8:;
  c->r[0]=R32(c->r[7]+0x00000000u); // 800D60A8
  c->r[7]=c->r[7]+0x00000004u; // 800D60AC
  W32(c->r[6]+0x00000080u,c->r[0]); // 800D60B0
  c->r[6]=c->r[6]+0x00000004u; // 800D60B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D60A8; } // 800D60B8
L_800D60BC:;
  c->r[4]=c->r[29]+0xFFFFFF80u; // 800D60BC
  c->r[0]=addc(c,~c->r[29],0x00000080u,1); // 800D60C0
  c->r[0]=~(c->r[4]|c->r[0]); // 800D60C4
  c->r[9]=0u+0xCD000000u; // 800D60C8
  c->r[5]=sraw(c,c->r[0],31); // 800D60CC
  c->r[6]=0u-c->r[31]; // 800D60D0
  c->r[4]=c->r[30]+0xFFFFFF80u; // 800D60D4
  c->r[0]=addc(c,~c->r[30],0x00000080u,1); // 800D60D8
  c->r[0]=~(c->r[4]|c->r[0]); // 800D60DC
  c->r[8]=R32(c->r[9]+0x00006434u); // 800D60E0
  c->r[0]=sraw(c,c->r[0],31); // 800D60E4
  c->r[7]=c->r[6]|c->r[31]; // 800D60E8
  c->r[4]=c->r[29]&~c->r[5]; // 800D60EC
  c->r[6]=c->r[8]|0x80000000u; // 800D60F0
  c->r[6]=(rotl(c->r[7],31)&0x40000000u)|(c->r[6]&~0x40000000u); // 800D60F4
  c->r[0]=c->r[30]&~c->r[0]; // 800D60F8
  c->r[6]=(rotl(c->r[4],16)&0x007F0000u)|(c->r[6]&~0x007F0000u); // 800D60FC
  c->r[6]=(rotl(c->r[0],8)&0x00007F00u)|(c->r[6]&~0x00007F00u); // 800D6100
  c->r[6]=(rotl(c->r[27],1)&0x00000006u)|(c->r[6]&~0x00000006u); // 800D6104
  c->r[0]=c->r[6]|0x00000001u; // 800D6108
  W32(c->r[9]+0x00006434u,c->r[0]); // 800D610C
  c->lr=0x800D6114u; f_8009DFC4(c); // 800D6110
  c->r[3]=0u+0x00000001u; // 800D6114
L_800D6118:;
  c->r[11]=c->r[1]+0x00000020u; // 800D6118
  c->lr=0x800D6120u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D611C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6120
  c->lr=c->r[0]; // 800D6124
  c->r[1]=c->r[1]+0x00000020u; // 800D6128
  return; // 800D612C
}

// SISetXY
void f_800D6130(Ctx* __restrict c) {
  trace_call(0x800D6130u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6130
  c->r[0]=c->lr; // 800D6134
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6138
  c->r[0]=rotl(c->r[4],8)&0xFFFFFF00u; // 800D613C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6140
  c->r[31]=rotl(c->r[3],16)&0xFFFF0000u; // 800D6144
  c->r[31]=c->r[31]|c->r[0]; // 800D6148
  c->lr=0x800D6150u; f_8009DF9C(c); // 800D614C
  c->r[5]=0u+0x80220000u; // 800D6150
  c->r[4]=0u+0xCD000000u; // 800D6154
  c->r[5]=c->r[5]+0xFFFFC608u; // 800D6158
  c->r[0]=R32(c->r[5]+0x00000004u); // 800D615C
  c->r[0]=rotl(c->r[0],0)&0xFC0000FFu; // 800D6160
  c->r[31]=c->r[0]|c->r[31]; // 800D6164
  W32(c->r[5]+0x00000004u,c->r[31]); // 800D6168
  W32(c->r[4]+0x00006430u,c->r[31]); // 800D616C
  c->lr=0x800D6174u; f_8009DFC4(c); // 800D6170
  c->r[3]=c->r[31]|c->r[31]; // 800D6174
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6178
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D617C
  c->lr=c->r[0]; // 800D6180
  c->r[1]=c->r[1]+0x00000010u; // 800D6184
  return; // 800D6188
}

// AlarmHandler
void f_800D618C(Ctx* __restrict c) {
  trace_call(0x800D618Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D618C
  c->r[0]=c->lr; // 800D6190
  c->r[6]=0u+0x802C0000u; // 800D6194
  c->r[5]=0u+0x2AAB0000u; // 800D6198
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D619C
  c->r[6]=c->r[6]+0xFFFFD390u; // 800D61A0
  c->r[0]=c->r[3]-c->r[6]; // 800D61A4
  c->r[3]=c->r[5]+0xFFFFAAABu; // 800D61A8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 800D61AC
  c->r[4]=0u+0x802C0000u; // 800D61B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D61B4
  c->r[4]=c->r[4]+0xFFFFD2D0u; // 800D61B8
  c->r[0]=sraw(c,c->r[0],3); // 800D61BC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D61C0
  c->r[0]=c->r[0]+c->r[3]; // 800D61C4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800D61C8
  c->r[3]=R32(c->r[4]+c->r[0]); // 800D61CC
  c->r[31]=c->r[4]+c->r[0]; // 800D61D0
  cmps(c,0,(int32_t)c->r[3],-1); // 800D61D4
  if (crb(c,2)) { goto L_800D6204; } // 800D61D8
  c->r[4]=R32(c->r[31]+0x00000004u); // 800D61DC
  c->r[5]=R32(c->r[31]+0x00000008u); // 800D61E0
  c->r[6]=R32(c->r[31]+0x0000000Cu); // 800D61E4
  c->r[7]=R32(c->r[31]+0x00000010u); // 800D61E8
  c->r[8]=R32(c->r[31]+0x00000014u); // 800D61EC
  c->lr=0x800D61F4u; f_800D5F80(c); // 800D61F0
  cmps(c,0,(int32_t)c->r[3],0); // 800D61F4
  if (crb(c,2)) { goto L_800D6204; } // 800D61F8
  c->r[0]=0u+0xFFFFFFFFu; // 800D61FC
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D6200
L_800D6204:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6204
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6208
  c->lr=c->r[0]; // 800D620C
  c->r[1]=c->r[1]+0x00000010u; // 800D6210
  return; // 800D6214
}

// SITransfer
void f_800D6218(Ctx* __restrict c) {
  trace_call(0x800D6218u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6218
  c->r[0]=c->lr; // 800D621C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D6220
  c->r[11]=c->r[1]+0x00000040u; // 800D6224
  c->lr=0x800D622Cu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6228
  c->r[31]=0u+0x802C0000u; // 800D622C
  c->r[11]=rotl(c->r[3],5)&0xFFFFFFE0u; // 800D6230
  c->r[31]=c->r[31]+0xFFFFD2D0u; // 800D6234
  c->r[21]=c->r[3]|c->r[3]; // 800D6238
  c->r[0]=c->r[31]+0x00000000u; // 800D623C
  c->r[22]=c->r[4]|c->r[4]; // 800D6240
  c->r[23]=c->r[5]|c->r[5]; // 800D6244
  c->r[24]=c->r[6]|c->r[6]; // 800D6248
  c->r[25]=c->r[7]|c->r[7]; // 800D624C
  c->r[26]=c->r[8]|c->r[8]; // 800D6250
  c->r[27]=c->r[9]|c->r[9]; // 800D6254
  c->r[28]=c->r[10]|c->r[10]; // 800D6258
  c->r[29]=c->r[0]+c->r[11]; // 800D625C
  c->lr=0x800D6264u; f_8009DF9C(c); // 800D6260
  c->r[0]=R32(c->r[29]+0x00000000u); // 800D6264
  c->r[30]=c->r[3]|c->r[3]; // 800D6268
  cmps(c,0,(int32_t)c->r[0],-1); // 800D626C
  if (!crb(c,2)) { goto L_800D6284; } // 800D6270
  c->r[3]=0u+0x80220000u; // 800D6274
  c->r[0]=R32(c->r[3]+0xFFFFC608u); // 800D6278
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[21]); // 800D627C
  if (!crb(c,2)) { goto L_800D6294; } // 800D6280
L_800D6284:;
  c->r[3]=c->r[30]|c->r[30]; // 800D6284
  c->lr=0x800D628Cu; f_8009DFC4(c); // 800D6288
  c->r[3]=0u+0x00000000u; // 800D628C
  goto L_800D636C; // 800D6290
L_800D6294:;
  c->lr=0x800D6298u; f_800A1D94(c); // 800D6294
  c->r[0]=c->r[28]|c->r[27]; cr0(c,c->r[0]); // 800D6298
  c->r[8]=c->r[3]|c->r[3]; // 800D629C
  if (!crb(c,2)) { goto L_800D62B0; } // 800D62A0
  c->r[28]=c->r[4]|c->r[4]; // 800D62A4
  c->r[27]=c->r[8]|c->r[8]; // 800D62A8
  goto L_800D62CC; // 800D62AC
L_800D62B0:;
  c->r[5]=rotl(c->r[21],3)&0xFFFFFFF8u; // 800D62B0
  c->r[0]=c->r[31]+0x00000080u; // 800D62B4
  c->r[6]=c->r[0]+c->r[5]; // 800D62B8
  c->r[5]=R32(c->r[6]+0x00000004u); // 800D62BC
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D62C0
  c->r[28]=addc(c,c->r[28],c->r[5],0); // 800D62C4
  c->r[27]=addc(c,c->r[27],c->r[0],c->xer_ca); // 800D62C8
L_800D62CC:;
  c->r[0]=c->r[3]^0x80000000u; // 800D62CC
  c->r[5]=c->r[27]^0x80000000u; // 800D62D0
  c->r[3]=addc(c,~c->r[28],c->r[4],1); // 800D62D4
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 800D62D8
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D62DC
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 800D62E0
  if (crb(c,2)) { goto L_800D630C; } // 800D62E4
  c->r[3]=(uint32_t)((int32_t)c->r[21]*(int32_t)48); // 800D62E8
  c->r[0]=c->r[31]+0x000000C0u; // 800D62EC
  c->r[6]=addc(c,~c->r[4],c->r[28],1); // 800D62F0
  c->r[7]=0u+0x800D0000u; // 800D62F4
  c->r[3]=c->r[0]+c->r[3]; // 800D62F8
  c->r[5]=addc(c,~c->r[8],c->r[27],c->xer_ca); // 800D62FC
  c->r[7]=c->r[7]+0x0000618Cu; // 800D6300
  c->lr=0x800D6308u; f_80099250(c); // 800D6304
  goto L_800D6340; // 800D6308
L_800D630C:;
  c->r[3]=c->r[21]|c->r[21]; // 800D630C
  c->r[4]=c->r[22]|c->r[22]; // 800D6310
  c->r[5]=c->r[23]|c->r[23]; // 800D6314
  c->r[6]=c->r[24]|c->r[24]; // 800D6318
  c->r[7]=c->r[25]|c->r[25]; // 800D631C
  c->r[8]=c->r[26]|c->r[26]; // 800D6320
  c->lr=0x800D6328u; f_800D5F80(c); // 800D6324
  cmps(c,0,(int32_t)c->r[3],0); // 800D6328
  if (crb(c,2)) { goto L_800D6340; } // 800D632C
  c->r[3]=c->r[30]|c->r[30]; // 800D6330
  c->lr=0x800D6338u; f_8009DFC4(c); // 800D6334
  c->r[3]=0u+0x00000001u; // 800D6338
  goto L_800D636C; // 800D633C
L_800D6340:;
  W32(c->r[29]+0x00000000u,c->r[21]); // 800D6340
  c->r[3]=c->r[30]|c->r[30]; // 800D6344
  W32(c->r[29]+0x00000004u,c->r[22]); // 800D6348
  W32(c->r[29]+0x00000008u,c->r[23]); // 800D634C
  W32(c->r[29]+0x0000000Cu,c->r[24]); // 800D6350
  W32(c->r[29]+0x00000010u,c->r[25]); // 800D6354
  W32(c->r[29]+0x00000014u,c->r[26]); // 800D6358
  W32(c->r[29]+0x0000001Cu,c->r[28]); // 800D635C
  W32(c->r[29]+0x00000018u,c->r[27]); // 800D6360
  c->lr=0x800D6368u; f_8009DFC4(c); // 800D6364
  c->r[3]=0u+0x00000001u; // 800D6368
L_800D636C:;
  c->r[11]=c->r[1]+0x00000040u; // 800D636C
  c->lr=0x800D6374u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D6370
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D6374
  c->lr=c->r[0]; // 800D6378
  c->r[1]=c->r[1]+0x00000040u; // 800D637C
  return; // 800D6380
}

// GetTypeCallback
void f_800D6384(Ctx* __restrict c) {
  trace_call(0x800D6384u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6384
  c->r[0]=c->lr; // 800D6388
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D638C
  c->r[11]=c->r[1]+0x00000020u; // 800D6390
  c->lr=0x800D6398u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6394
  c->r[31]=0u+0x80220000u; // 800D6398
  c->r[30]=0u+0x802C0000u; // 800D639C
  c->r[29]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D63A0
  c->r[26]=c->r[3]|c->r[3]; // 800D63A4
  c->r[31]=c->r[31]+0xFFFFC620u; // 800D63A8
  c->r[27]=c->r[4]|c->r[4]; // 800D63AC
  c->r[0]=R32(c->r[31]+c->r[29]); // 800D63B0
  c->r[30]=c->r[30]+0xFFFFD2D0u; // 800D63B4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800D63B8
  c->r[0]=c->r[0]|c->r[4]; // 800D63BC
  W32(c->r[31]+c->r[29],c->r[0]); // 800D63C0
  c->lr=0x800D63C8u; f_800A1D94(c); // 800D63C4
  c->r[5]=rotl(c->r[26],3)&0xFFFFFFF8u; // 800D63C8
  c->r[0]=c->r[30]+0x000000A0u; // 800D63CC
  c->r[6]=c->r[0]+c->r[5]; // 800D63D0
  c->r[28]=R32(c->r[31]+c->r[29]); // 800D63D4
  W32(c->r[6]+0x00000004u,c->r[4]); // 800D63D8
  c->r[5]=0u+0x80000000u; // 800D63DC
  c->r[0]=rotl(c->r[27],0)&0x0000000Fu; cr0(c,c->r[0]); // 800D63E0
  c->r[4]=R32(c->r[13]+0xFFFFA50Cu); // 800D63E4
  c->r[5]=((c->r[26])&0x20)?0u:(c->r[5]>>((c->r[26])&31)); // 800D63E8
  W32(c->r[6]+0x00000000u,c->r[3]); // 800D63EC
  c->r[0]=c->r[4]&~c->r[5]; // 800D63F0
  W32(c->r[13]+0xFFFFA50Cu,c->r[0]); // 800D63F4
  c->r[27]=c->r[4]&c->r[5]; // 800D63F8
  if (!crb(c,2)) { goto L_800D6420; } // 800D63FC
  c->r[3]=rotl(c->r[28],0)&0x18000000u; // 800D6400
  c->r[0]=c->r[3]+0xF8000000u; // 800D6404
  cmpu(c,0,c->r[0],0x00000000u); // 800D6408
  if (!crb(c,2)) { goto L_800D6420; } // 800D640C
  c->r[0]=rotl(c->r[28],0)&0x80000000u; cr0(c,c->r[0]); // 800D6410
  if (crb(c,2)) { goto L_800D6420; } // 800D6414
  c->r[0]=rotl(c->r[28],0)&0x04000000u; cr0(c,c->r[0]); // 800D6418
  if (crb(c,2)) { goto L_800D6478; } // 800D641C
L_800D6420:;
  c->r[3]=c->r[26]|c->r[26]; // 800D6420
  c->r[4]=0u+0x00000000u; // 800D6424
  c->lr=0x800D642Cu; f_800A0338(c); // 800D6428
  c->r[28]=R32(c->r[31]+c->r[29]); // 800D642C
  c->r[3]=rotl(c->r[26],4)&0xFFFFFFF0u; // 800D6430
  c->r[0]=c->r[30]+0x000001E0u; // 800D6434
  c->r[29]=0u+0x00000000u; // 800D6438
  c->r[30]=c->r[0]+c->r[3]; // 800D643C
  c->r[27]=0u+0x00000000u; // 800D6440
L_800D6444:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 800D6444
  cmps(c,0,(int32_t)c->r[12],0); // 800D6448
  if (crb(c,2)) { goto L_800D6464; } // 800D644C
  c->r[3]=c->r[26]|c->r[26]; // 800D6450
  c->r[4]=c->r[28]|c->r[28]; // 800D6454
  W32(c->r[30]+0x00000000u,c->r[27]); // 800D6458
  c->ctr=c->r[12]; // 800D645C
  if (true) { c->lr=0x800D6464u; dispatch(c,c->ctr); } // 800D6460
L_800D6464:;
  c->r[29]=c->r[29]+0x00000001u; // 800D6464
  c->r[30]=c->r[30]+0x00000004u; // 800D6468
  cmps(c,0,(int32_t)c->r[29],4); // 800D646C
  if (crb(c,0)) { IRQCHK(c); goto L_800D6444; } // 800D6470
  goto L_800D661C; // 800D6474
L_800D6478:;
  c->r[3]=c->r[26]|c->r[26]; // 800D6478
  c->lr=0x800D6480u; f_800A02C0(c); // 800D647C
  cmps(c,0,(int32_t)c->r[27],0); // 800D6480
  c->r[27]=rotl(c->r[3],8)&0x00FFFF00u; // 800D6484
  if (crb(c,2)) { goto L_800D64DC; } // 800D6488
  c->r[0]=rotl(c->r[27],0)&0x00100000u; cr0(c,c->r[0]); // 800D648C
  if (crb(c,2)) { goto L_800D64DC; } // 800D6490
  c->r[3]=0u+0x00D00000u; // 800D6494
  c->r[8]=0u+0x800D0000u; // 800D6498
  c->r[0]=c->r[3]+0xFFFFFF00u; // 800D649C
  c->r[4]=c->r[30]+0x000001D0u; // 800D64A0
  c->r[0]=c->r[27]&c->r[0]; // 800D64A4
  c->r[6]=c->r[31]+c->r[29]; // 800D64A8
  c->r[3]=c->r[0]|0x4E100000u; // 800D64AC
  c->r[8]=c->r[8]+0x00006384u; // 800D64B0
  c->r[0]=0u+0x00000080u; // 800D64B4
  {uint32_t ea=c->r[4]+c->r[29]; W32(ea,c->r[3]); c->r[4]=ea;} // 800D64B8
  c->r[3]=c->r[26]|c->r[26]; // 800D64BC
  c->r[5]=0u+0x00000003u; // 800D64C0
  W32(c->r[31]+c->r[29],c->r[0]); // 800D64C4
  c->r[7]=0u+0x00000003u; // 800D64C8
  c->r[10]=0u+0x00000000u; // 800D64CC
  c->r[9]=0u+0x00000000u; // 800D64D0
  c->lr=0x800D64D8u; f_800D6218(c); // 800D64D4
  goto L_800D661C; // 800D64D8
L_800D64DC:;
  c->r[0]=rotl(c->r[28],0)&0x00100000u; cr0(c,c->r[0]); // 800D64DC
  if (crb(c,2)) { goto L_800D655C; } // 800D64E0
  c->r[3]=0u+0x00D00000u; // 800D64E4
  c->r[0]=c->r[3]+0xFFFFFF00u; // 800D64E8
  c->r[3]=c->r[28]&c->r[0]; // 800D64EC
  c->r[0]=c->r[27]&c->r[0]; // 800D64F0
  cmpu(c,0,c->r[0],c->r[3]); // 800D64F4
  if (crb(c,2)) { goto L_800D65D4; } // 800D64F8
  c->r[0]=rotl(c->r[27],0)&0x00100000u; cr0(c,c->r[0]); // 800D64FC
  if (!crb(c,2)) { goto L_800D6514; } // 800D6500
  c->r[27]=c->r[3]|0x00100000u; // 800D6504
  c->r[3]=c->r[26]|c->r[26]; // 800D6508
  c->r[4]=rotl(c->r[27],24)&0x0000FFFFu; // 800D650C
  c->lr=0x800D6514u; f_800A0338(c); // 800D6510
L_800D6514:;
  c->r[3]=0u+0x80220000u; // 800D6514
  c->r[0]=c->r[30]+0x000001D0u; // 800D6518
  c->r[3]=c->r[3]+0xFFFFC620u; // 800D651C
  c->r[8]=0u+0x800D0000u; // 800D6520
  c->r[4]=c->r[0]+c->r[29]; // 800D6524
  c->r[5]=c->r[27]|0x4E000000u; // 800D6528
  c->r[6]=c->r[3]+c->r[29]; // 800D652C
  c->r[0]=0u+0x00000080u; // 800D6530
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D6534
  c->r[3]=c->r[26]|c->r[26]; // 800D6538
  c->r[8]=c->r[8]+0x00006384u; // 800D653C
  c->r[5]=0u+0x00000003u; // 800D6540
  W32(c->r[6]+0x00000000u,c->r[0]); // 800D6544
  c->r[7]=0u+0x00000003u; // 800D6548
  c->r[10]=0u+0x00000000u; // 800D654C
  c->r[9]=0u+0x00000000u; // 800D6550
  c->lr=0x800D6558u; f_800D6218(c); // 800D6554
  goto L_800D661C; // 800D6558
L_800D655C:;
  c->r[0]=rotl(c->r[28],0)&0x40000000u; cr0(c,c->r[0]); // 800D655C
  if (crb(c,2)) { goto L_800D65C8; } // 800D6560
  c->r[4]=0u+0x00D00000u; // 800D6564
  c->r[3]=c->r[26]|c->r[26]; // 800D6568
  c->r[0]=c->r[4]+0xFFFFFF00u; // 800D656C
  c->r[27]=c->r[28]&c->r[0]; // 800D6570
  c->r[27]=c->r[27]|0x00100000u; // 800D6574
  c->r[4]=rotl(c->r[27],24)&0x0000FFFFu; // 800D6578
  c->lr=0x800D6580u; f_800A0338(c); // 800D657C
  c->r[3]=0u+0x80220000u; // 800D6580
  c->r[0]=c->r[30]+0x000001D0u; // 800D6584
  c->r[3]=c->r[3]+0xFFFFC620u; // 800D6588
  c->r[8]=0u+0x800D0000u; // 800D658C
  c->r[4]=c->r[0]+c->r[29]; // 800D6590
  c->r[5]=c->r[27]|0x4E000000u; // 800D6594
  c->r[6]=c->r[3]+c->r[29]; // 800D6598
  c->r[0]=0u+0x00000080u; // 800D659C
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D65A0
  c->r[3]=c->r[26]|c->r[26]; // 800D65A4
  c->r[8]=c->r[8]+0x00006384u; // 800D65A8
  c->r[5]=0u+0x00000003u; // 800D65AC
  W32(c->r[6]+0x00000000u,c->r[0]); // 800D65B0
  c->r[7]=0u+0x00000003u; // 800D65B4
  c->r[10]=0u+0x00000000u; // 800D65B8
  c->r[9]=0u+0x00000000u; // 800D65BC
  c->lr=0x800D65C4u; f_800D6218(c); // 800D65C0
  goto L_800D661C; // 800D65C4
L_800D65C8:;
  c->r[3]=c->r[26]|c->r[26]; // 800D65C8
  c->r[4]=0u+0x00000000u; // 800D65CC
  c->lr=0x800D65D4u; f_800A0338(c); // 800D65D0
L_800D65D4:;
  c->r[28]=R32(c->r[31]+c->r[29]); // 800D65D4
  c->r[3]=rotl(c->r[26],4)&0xFFFFFFF0u; // 800D65D8
  c->r[0]=c->r[30]+0x000001E0u; // 800D65DC
  c->r[29]=0u+0x00000000u; // 800D65E0
  c->r[30]=c->r[0]+c->r[3]; // 800D65E4
  c->r[27]=0u+0x00000000u; // 800D65E8
L_800D65EC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 800D65EC
  cmps(c,0,(int32_t)c->r[12],0); // 800D65F0
  if (crb(c,2)) { goto L_800D660C; } // 800D65F4
  c->r[3]=c->r[26]|c->r[26]; // 800D65F8
  c->r[4]=c->r[28]|c->r[28]; // 800D65FC
  W32(c->r[30]+0x00000000u,c->r[27]); // 800D6600
  c->ctr=c->r[12]; // 800D6604
  if (true) { c->lr=0x800D660Cu; dispatch(c,c->ctr); } // 800D6608
L_800D660C:;
  c->r[29]=c->r[29]+0x00000001u; // 800D660C
  c->r[30]=c->r[30]+0x00000004u; // 800D6610
  cmps(c,0,(int32_t)c->r[29],4); // 800D6614
  if (crb(c,0)) { IRQCHK(c); goto L_800D65EC; } // 800D6618
L_800D661C:;
  c->r[11]=c->r[1]+0x00000020u; // 800D661C
  c->lr=0x800D6624u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D6620
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6624
  c->lr=c->r[0]; // 800D6628
  c->r[1]=c->r[1]+0x00000020u; // 800D662C
  return; // 800D6630
}

// SIGetType
void f_800D6634(Ctx* __restrict c) {
  trace_call(0x800D6634u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6634
  c->r[0]=c->lr; // 800D6638
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D663C
  c->r[11]=c->r[1]+0x00000020u; // 800D6640
  c->lr=0x800D6648u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D6644
  c->r[27]=c->r[3]|c->r[3]; // 800D6648
  c->lr=0x800D6650u; f_8009DF9C(c); // 800D664C
  c->r[5]=0u+0x80220000u; // 800D6650
  c->r[4]=0u+0x802C0000u; // 800D6654
  c->r[6]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800D6658
  c->r[0]=rotl(c->r[27],3)&0xFFFFFFF8u; // 800D665C
  c->r[5]=c->r[5]+0xFFFFC620u; // 800D6660
  c->r[4]=c->r[4]+0xFFFFD370u; // 800D6664
  c->r[28]=R32(c->r[5]+c->r[6]); // 800D6668
  c->r[30]=c->r[5]+c->r[6]; // 800D666C
  c->r[29]=c->r[3]|c->r[3]; // 800D6670
  c->r[31]=c->r[4]+c->r[0]; // 800D6674
  c->lr=0x800D667Cu; f_800A1D94(c); // 800D6678
  c->r[6]=R32(c->r[31]+0x00000004u); // 800D667C
  c->r[5]=0u+0x80220000u; // 800D6680
  c->r[0]=R32(c->r[31]+0x00000000u); // 800D6684
  c->r[5]=c->r[5]+0xFFFFC608u; // 800D6688
  c->r[8]=addc(c,~c->r[6],c->r[4],1); // 800D668C
  c->r[4]=R32(c->r[5]+0x00000004u); // 800D6690
  c->r[7]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D6694
  c->r[3]=0u+0x00000080u; // 800D6698
  c->r[0]=sraw(c,c->r[3],(c->r[27])&63); // 800D669C
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800D66A0
  if (crb(c,2)) { goto L_800D66D8; } // 800D66A4
  cmpu(c,0,c->r[28],0x00000008u); // 800D66A8
  if (crb(c,2)) { goto L_800D66CC; } // 800D66AC
  c->lr=0x800D66B4u; f_800A1D94(c); // 800D66B0
  W32(c->r[31]+0x00000004u,c->r[4]); // 800D66B4
  W32(c->r[31]+0x00000000u,c->r[3]); // 800D66B8
  c->r[3]=c->r[29]|c->r[29]; // 800D66BC
  c->lr=0x800D66C4u; f_8009DFC4(c); // 800D66C0
  c->r[3]=c->r[28]|c->r[28]; // 800D66C4
  goto L_800D67D0; // 800D66C8
L_800D66CC:;
  W32(c->r[30]+0x00000000u,c->r[3]); // 800D66CC
  c->r[28]=0u+0x00000080u; // 800D66D0
  goto L_800D676C; // 800D66D4
L_800D66D8:;
  c->r[4]=0u+0x80000000u; // 800D66D8
  c->r[3]=0u+0x10620000u; // 800D66DC
  c->r[5]=R32(c->r[4]+0x000000F8u); // 800D66E0
  c->r[6]=c->r[3]+0x00004DD3u; // 800D66E4
  c->r[0]=0u+0x00000000u; // 800D66E8
  c->r[4]=c->r[7]^0x80000000u; // 800D66EC
  c->r[3]=rotl(c->r[5],30)&0x3FFFFFFFu; // 800D66F0
  c->r[3]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[3])>>32); // 800D66F4
  c->r[0]=c->r[0]^0x80000000u; // 800D66F8
  c->r[5]=rotl(c->r[3],26)&0x03FFFFFFu; // 800D66FC
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)50); // 800D6700
  c->r[3]=addc(c,~c->r[8],c->r[3],1); // 800D6704
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800D6708
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D670C
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800D6710
  if (!crb(c,2)) { goto L_800D6730; } // 800D6714
  cmpu(c,0,c->r[28],0x00000008u); // 800D6718
  if (crb(c,2)) { goto L_800D6730; } // 800D671C
  c->r[3]=c->r[29]|c->r[29]; // 800D6720
  c->lr=0x800D6728u; f_8009DFC4(c); // 800D6724
  c->r[3]=c->r[28]|c->r[28]; // 800D6728
  goto L_800D67D0; // 800D672C
L_800D6730:;
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)75); // 800D6730
  c->r[0]=0u+0x00000000u; // 800D6734
  c->r[4]=c->r[7]^0x80000000u; // 800D6738
  c->r[0]=c->r[0]^0x80000000u; // 800D673C
  c->r[3]=addc(c,~c->r[8],c->r[3],1); // 800D6740
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 800D6744
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800D6748
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 800D674C
  if (!crb(c,2)) { goto L_800D6760; } // 800D6750
  c->r[0]=0u+0x00000080u; // 800D6754
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D6758
  goto L_800D676C; // 800D675C
L_800D6760:;
  c->r[0]=0u+0x00000080u; // 800D6760
  c->r[28]=0u+0x00000080u; // 800D6764
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D6768
L_800D676C:;
  c->lr=0x800D6770u; f_800A1D94(c); // 800D676C
  W32(c->r[31]+0x00000004u,c->r[4]); // 800D6770
  c->r[4]=0u+0x431C0000u; // 800D6774
  c->r[9]=c->r[4]+0xFFFFDE83u; // 800D6778
  c->r[8]=0u+0x800D0000u; // 800D677C
  W32(c->r[31]+0x00000000u,c->r[3]); // 800D6780
  c->r[5]=0u+0x80000000u; // 800D6784
  c->r[3]=c->r[27]|c->r[27]; // 800D6788
  c->r[6]=c->r[30]|c->r[30]; // 800D678C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800D6790
  c->r[8]=c->r[8]+0x00006384u; // 800D6794
  c->r[4]=c->r[13]+0xFFFFA508u; // 800D6798
  c->r[5]=0u+0x00000001u; // 800D679C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800D67A0
  c->r[7]=0u+0x00000003u; // 800D67A4
  c->r[0]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[0])>>32); // 800D67A8
  c->r[9]=0u+0x00000000u; // 800D67AC
  c->r[10]=rotl(c->r[0],17)&0x0001FFFFu; // 800D67B0
  c->r[0]=rotl(c->r[0],23)&0x007FFFC0u; // 800D67B4
  c->r[0]=c->r[0]+c->r[10]; // 800D67B8
  c->r[10]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D67BC
  c->lr=0x800D67C4u; f_800D6218(c); // 800D67C0
  c->r[3]=c->r[29]|c->r[29]; // 800D67C4
  c->lr=0x800D67CCu; f_8009DFC4(c); // 800D67C8
  c->r[3]=c->r[28]|c->r[28]; // 800D67CC
L_800D67D0:;
  c->r[11]=c->r[1]+0x00000020u; // 800D67D0
  c->lr=0x800D67D8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D67D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D67D8
  c->lr=c->r[0]; // 800D67DC
  c->r[1]=c->r[1]+0x00000020u; // 800D67E0
  return; // 800D67E4
}

// SISetSamplingRate
void f_800D67E8(Ctx* __restrict c) {
  trace_call(0x800D67E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D67E8
  c->r[0]=c->lr; // 800D67EC
  cmpu(c,0,c->r[3],0x0000000Bu); // 800D67F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D67F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D67F8
  c->r[31]=0u+0x80220000u; // 800D67FC
  c->r[31]=c->r[31]+0xFFFFC630u; // 800D6800
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6804
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6808
  c->r[29]=c->r[3]|c->r[3]; // 800D680C
  if (!crb(c,1)) { goto L_800D6818; } // 800D6810
  c->r[29]=0u+0x0000000Bu; // 800D6814
L_800D6818:;
  c->lr=0x800D681Cu; f_8009DF9C(c); // 800D6818
  W32(c->r[13]+0xFFFFA510u,c->r[29]); // 800D681C
  c->r[30]=c->r[3]|c->r[3]; // 800D6820
  c->lr=0x800D6828u; f_800AED50(c); // 800D6824
  cmps(c,0,(int32_t)c->r[3],2); // 800D6828
  if (crb(c,2)) { goto L_800D6850; } // 800D682C
  if (!crb(c,0)) { goto L_800D6844; } // 800D6830
  cmps(c,0,(int32_t)c->r[3],0); // 800D6834
  if (crb(c,2)) { goto L_800D6850; } // 800D6838
  if (!crb(c,0)) { goto L_800D6858; } // 800D683C
  goto L_800D6860; // 800D6840
L_800D6844:;
  cmps(c,0,(int32_t)c->r[3],5); // 800D6844
  if (crb(c,2)) { goto L_800D6850; } // 800D6848
  goto L_800D6860; // 800D684C
L_800D6850:;
  c->r[5]=c->r[31]+0x00000000u; // 800D6850
  goto L_800D6874; // 800D6854
L_800D6858:;
  c->r[5]=c->r[31]+0x00000030u; // 800D6858
  goto L_800D6874; // 800D685C
L_800D6860:;
  c->r[3]=c->r[31]+0x00000060u; // 800D6860
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6864
  c->lr=0x800D686Cu; f_8009AC4C(c); // 800D6868
  c->r[29]=0u+0x00000000u; // 800D686C
  c->r[5]=c->r[31]+0x00000000u; // 800D6870
L_800D6874:;
  c->r[3]=0u+0xCC000000u; // 800D6874
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800D6878
  c->r[4]=R16(c->r[3]+0x0000206Cu); // 800D687C
  c->r[3]=c->r[5]+c->r[0]; // 800D6880
  c->r[0]=R16(c->r[5]+c->r[0]); // 800D6884
  c->r[5]=rotl(c->r[4],0)&0x00000001u; // 800D6888
  c->r[4]=R8(c->r[3]+0x00000002u); // 800D688C
  c->r[3]=c->r[5]+0x00000001u; // 800D6890
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 800D6894
  c->lr=0x800D689Cu; f_800D6130(c); // 800D6898
  c->r[3]=c->r[30]|c->r[30]; // 800D689C
  c->lr=0x800D68A4u; f_8009DFC4(c); // 800D68A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D68A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D68A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D68AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D68B0
  c->lr=c->r[0]; // 800D68B4
  c->r[1]=c->r[1]+0x00000020u; // 800D68B8
  return; // 800D68BC
}

// SIRefreshSamplingRate
void f_800D68C0(Ctx* __restrict c) {
  trace_call(0x800D68C0u);
  c->r[3]=R32(c->r[13]+0xFFFFA510u); // 800D68C0
  f_800D67E8(c); return; // 800D68C4
}

// TRKNubMainLoop
void f_800D68C8(Ctx* __restrict c) {
  trace_call(0x800D68C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D68C8
  c->r[0]=c->lr; // 800D68CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D68D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D68D4
  c->r[31]=0u+0x00000000u; // 800D68D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D68DC
  c->r[30]=0u+0x00000000u; // 800D68E0
  goto L_800D69A0; // 800D68E4
L_800D68E8:;
  c->r[3]=c->r[1]+0x00000008u; // 800D68E8
  c->lr=0x800D68F0u; f_800D6ADC(c); // 800D68EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D68F0
  if (crb(c,2)) { goto L_800D6960; } // 800D68F4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D68F8
  c->r[30]=0u+0x00000000u; // 800D68FC
  cmps(c,0,(int32_t)c->r[0],2); // 800D6900
  if (crb(c,2)) { goto L_800D692C; } // 800D6904
  if (!crb(c,0)) { goto L_800D691C; } // 800D6908
  cmps(c,0,(int32_t)c->r[0],0); // 800D690C
  if (crb(c,2)) { goto L_800D6954; } // 800D6910
  if (!crb(c,0)) { goto L_800D693C; } // 800D6914
  goto L_800D6954; // 800D6918
L_800D691C:;
  cmps(c,0,(int32_t)c->r[0],5); // 800D691C
  if (crb(c,2)) { goto L_800D6950; } // 800D6920
  if (!crb(c,0)) { goto L_800D6954; } // 800D6924
  goto L_800D6944; // 800D6928
L_800D692C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D692C
  c->lr=0x800D6934u; f_800D746C(c); // 800D6930
  c->lr=0x800D6938u; f_800D780C(c); // 800D6934
  goto L_800D6954; // 800D6938
L_800D693C:;
  c->r[31]=0u+0x00000001u; // 800D693C
  goto L_800D6954; // 800D6940
L_800D6944:;
  c->r[3]=c->r[1]+0x00000008u; // 800D6944
  c->lr=0x800D694Cu; f_800D9ACC(c); // 800D6948
  goto L_800D6954; // 800D694C
L_800D6950:;
  c->lr=0x800D6954u; f_800D96C4(c); // 800D6950
L_800D6954:;
  c->r[3]=c->r[1]+0x00000008u; // 800D6954
  c->lr=0x800D695Cu; f_800D69C0(c); // 800D6958
  goto L_800D69A0; // 800D695C
L_800D6960:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D6960
  if (crb(c,2)) { goto L_800D6980; } // 800D6964
  c->r[3]=0u+0x803D0000u; // 800D6968
  c->r[3]=c->r[3]+0xFFFF9218u; // 800D696C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D6970
  c->r[0]=R8(c->r[3]+0x00000000u); // 800D6974
  cmpu(c,0,c->r[0],0x00000000u); // 800D6978
  if (crb(c,2)) { goto L_800D698C; } // 800D697C
L_800D6980:;
  c->r[30]=0u+0x00000001u; // 800D6980
  c->lr=0x800D6988u; f_800D7650(c); // 800D6984
  goto L_800D69A0; // 800D6988
L_800D698C:;
  c->lr=0x800D6990u; f_800D96B4(c); // 800D698C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6990
  if (!crb(c,2)) { goto L_800D699C; } // 800D6994
  c->lr=0x800D699Cu; f_800DB9E8(c); // 800D6998
L_800D699C:;
  c->r[30]=0u+0x00000000u; // 800D699C
L_800D69A0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D69A0
  if (crb(c,2)) { IRQCHK(c); goto L_800D68E8; } // 800D69A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D69A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D69AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D69B0
  c->lr=c->r[0]; // 800D69B4
  c->r[1]=c->r[1]+0x00000020u; // 800D69B8
  return; // 800D69BC
}

// TRKDestructEvent
void f_800D69C0(Ctx* __restrict c) {
  trace_call(0x800D69C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D69C0
  c->r[0]=c->lr; // 800D69C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D69C8
  c->r[3]=R32(c->r[3]+0x00000008u); // 800D69CC
  c->lr=0x800D69D4u; f_800D7408(c); // 800D69D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D69D4
  c->lr=c->r[0]; // 800D69D8
  c->r[1]=c->r[1]+0x00000010u; // 800D69DC
  return; // 800D69E0
}

// TRKConstructEvent
void f_800D69E4(Ctx* __restrict c) {
  trace_call(0x800D69E4u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D69E4
  c->r[4]=0u+0x00000000u; // 800D69E8
  c->r[0]=0u+0xFFFFFFFFu; // 800D69EC
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D69F0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D69F4
  return; // 800D69F8
}

// TRKPostEvent
void f_800D69FC(Ctx* __restrict c) {
  trace_call(0x800D69FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D69FC
  c->r[0]=c->lr; // 800D6A00
  c->r[4]=0u+0x802C0000u; // 800D6A04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6A08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6A0C
  c->r[31]=0u+0x00000000u; // 800D6A10
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6A14
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6A18
  c->r[29]=c->r[3]|c->r[3]; // 800D6A1C
  c->r[3]=c->r[4]+0xFFFFD4F0u; // 800D6A20
  c->lr=0x800D6A28u; f_800D90EC(c); // 800D6A24
  c->r[3]=0u+0x802C0000u; // 800D6A28
  c->r[30]=c->r[3]+0xFFFFD4F0u; // 800D6A2C
  c->r[3]=R32(c->r[30]+0x00000004u); // 800D6A30
  cmps(c,0,(int32_t)c->r[3],2); // 800D6A34
  if (!crb(c,2)) { goto L_800D6A44; } // 800D6A38
  c->r[31]=0u+0x00000100u; // 800D6A3C
  goto L_800D6AB0; // 800D6A40
L_800D6A44:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 800D6A44
  c->r[4]=c->r[29]|c->r[29]; // 800D6A48
  c->r[5]=0u+0x0000000Cu; // 800D6A4C
  c->r[0]=c->r[0]+c->r[3]; // 800D6A50
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D6A54
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D6A58
  c->r[0]=c->r[0]^c->r[3]; // 800D6A5C
  c->r[0]=c->r[0]-c->r[3]; // 800D6A60
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800D6A64
  c->r[3]=c->r[30]+c->r[29]; // 800D6A68
  c->r[3]=c->r[3]+0x0000000Cu; // 800D6A6C
  c->lr=0x800D6A74u; f_8000449C(c); // 800D6A70
  c->r[3]=0u+0x802C0000u; // 800D6A74
  c->r[4]=c->r[3]+0xFFFFD4F0u; // 800D6A78
  c->r[0]=R32(c->r[4]+0x00000024u); // 800D6A7C
  c->r[3]=c->r[4]+c->r[29]; // 800D6A80
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D6A84
  c->r[3]=R32(c->r[4]+0x00000024u); // 800D6A88
  c->r[0]=c->r[3]+0x00000001u; // 800D6A8C
  cmpu(c,0,c->r[0],0x00000100u); // 800D6A90
  W32(c->r[4]+0x00000024u,c->r[0]); // 800D6A94
  if (!crb(c,0)) { goto L_800D6AA4; } // 800D6A98
  c->r[0]=0u+0x00000100u; // 800D6A9C
  W32(c->r[4]+0x00000024u,c->r[0]); // 800D6AA0
L_800D6AA4:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 800D6AA4
  c->r[0]=c->r[3]+0x00000001u; // 800D6AA8
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D6AAC
L_800D6AB0:;
  c->r[3]=0u+0x802C0000u; // 800D6AB0
  c->r[3]=c->r[3]+0xFFFFD4F0u; // 800D6AB4
  c->lr=0x800D6ABCu; f_800D90E4(c); // 800D6AB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6ABC
  c->r[3]=c->r[31]|c->r[31]; // 800D6AC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6AC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6AC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D6ACC
  c->lr=c->r[0]; // 800D6AD0
  c->r[1]=c->r[1]+0x00000020u; // 800D6AD4
  return; // 800D6AD8
}

// TRKGetNextEvent
void f_800D6ADC(Ctx* __restrict c) {
  trace_call(0x800D6ADCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6ADC
  c->r[0]=c->lr; // 800D6AE0
  c->r[4]=0u+0x802C0000u; // 800D6AE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6AE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6AEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6AF0
  c->r[30]=0u+0x00000000u; // 800D6AF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6AF8
  c->r[29]=c->r[3]|c->r[3]; // 800D6AFC
  c->r[3]=c->r[4]+0xFFFFD4F0u; // 800D6B00
  c->lr=0x800D6B08u; f_800D90EC(c); // 800D6B04
  c->r[3]=0u+0x802C0000u; // 800D6B08
  c->r[31]=c->r[3]+0xFFFFD4F0u; // 800D6B0C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D6B10
  cmps(c,0,(int32_t)c->r[0],0); // 800D6B14
  if (!crb(c,1)) { goto L_800D6B64; } // 800D6B18
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D6B1C
  c->r[3]=c->r[29]|c->r[29]; // 800D6B20
  c->r[5]=0u+0x0000000Cu; // 800D6B24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800D6B28
  c->r[4]=c->r[31]+c->r[0]; // 800D6B2C
  c->r[4]=c->r[4]+0x0000000Cu; // 800D6B30
  c->lr=0x800D6B38u; f_8000449C(c); // 800D6B34
  c->r[3]=R32(c->r[31]+0x00000008u); // 800D6B38
  c->r[4]=R32(c->r[31]+0x00000004u); // 800D6B3C
  c->r[0]=c->r[3]+0x00000001u; // 800D6B40
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800D6B44
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D6B48
  cmps(c,0,(int32_t)c->r[0],2); // 800D6B4C
  W32(c->r[31]+0x00000004u,c->r[3]); // 800D6B50
  if (!crb(c,2)) { goto L_800D6B60; } // 800D6B54
  c->r[0]=0u+0x00000000u; // 800D6B58
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D6B5C
L_800D6B60:;
  c->r[30]=0u+0x00000001u; // 800D6B60
L_800D6B64:;
  c->r[3]=0u+0x802C0000u; // 800D6B64
  c->r[3]=c->r[3]+0xFFFFD4F0u; // 800D6B68
  c->lr=0x800D6B70u; f_800D90E4(c); // 800D6B6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6B70
  c->r[3]=c->r[30]|c->r[30]; // 800D6B74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6B78
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6B7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D6B80
  c->lr=c->r[0]; // 800D6B84
  c->r[1]=c->r[1]+0x00000020u; // 800D6B88
  return; // 800D6B8C
}

// TRKInitializeEventQueue
void f_800D6B90(Ctx* __restrict c) {
  trace_call(0x800D6B90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6B90
  c->r[0]=c->lr; // 800D6B94
  c->r[3]=0u+0x802C0000u; // 800D6B98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6B9C
  c->r[3]=c->r[3]+0xFFFFD4F0u; // 800D6BA0
  c->lr=0x800D6BA8u; f_800D90F4(c); // 800D6BA4
  c->r[3]=0u+0x802C0000u; // 800D6BA8
  c->r[3]=c->r[3]+0xFFFFD4F0u; // 800D6BAC
  c->lr=0x800D6BB4u; f_800D90EC(c); // 800D6BB0
  c->r[3]=0u+0x802C0000u; // 800D6BB4
  c->r[4]=0u+0x00000000u; // 800D6BB8
  c->r[3]=c->r[3]+0xFFFFD4F0u; // 800D6BBC
  c->r[0]=0u+0x00000100u; // 800D6BC0
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D6BC4
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D6BC8
  W32(c->r[3]+0x00000024u,c->r[0]); // 800D6BCC
  c->lr=0x800D6BD4u; f_800D90E4(c); // 800D6BD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6BD4
  c->r[3]=0u+0x00000000u; // 800D6BD8
  c->lr=c->r[0]; // 800D6BDC
  c->r[1]=c->r[1]+0x00000010u; // 800D6BE0
  return; // 800D6BE4
}

// TRKNubWelcome
void f_800D6BE8(Ctx* __restrict c) {
  trace_call(0x800D6BE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6BE8
  c->r[0]=c->lr; // 800D6BEC
  c->r[3]=0u+0x801F0000u; // 800D6BF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6BF4
  c->r[3]=c->r[3]+0x00004AE0u; // 800D6BF8
  c->lr=0x800D6C00u; f_800DB60C(c); // 800D6BFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6C00
  c->lr=c->r[0]; // 800D6C04
  c->r[1]=c->r[1]+0x00000010u; // 800D6C08
  return; // 800D6C0C
}

// TRKTerminateNub
void f_800D6C10(Ctx* __restrict c) {
  trace_call(0x800D6C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6C10
  c->r[0]=c->lr; // 800D6C14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6C18
  c->lr=0x800D6C20u; f_800D75D4(c); // 800D6C1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6C20
  c->r[3]=0u+0x00000000u; // 800D6C24
  c->lr=c->r[0]; // 800D6C28
  c->r[1]=c->r[1]+0x00000010u; // 800D6C2C
  return; // 800D6C30
}

// TRKInitializeNub
void f_800D6C34(Ctx* __restrict c) {
  trace_call(0x800D6C34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6C34
  c->r[0]=c->lr; // 800D6C38
  c->r[5]=0u+0x00000012u; // 800D6C3C
  c->r[4]=0u+0x00000034u; // 800D6C40
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6C44
  c->r[3]=0u+0x00000056u; // 800D6C48
  c->r[0]=0u+0x00000078u; // 800D6C4C
  c->r[6]=0u+0x00000001u; // 800D6C50
  W8(c->r[1]+0x00000008u,c->r[5]); // 800D6C54
  c->r[5]=0u+0x802C0000u; // 800D6C58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6C5C
  c->r[31]=0u+0x00000000u; // 800D6C60
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6C64
  W8(c->r[1]+0x00000009u,c->r[4]); // 800D6C68
  W8(c->r[1]+0x0000000Au,c->r[3]); // 800D6C6C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800D6C70
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D6C74
  {uint32_t ea=c->r[5]+0xFFFFD518u; W32(ea,c->r[6]); c->r[5]=ea;} // 800D6C78
  c->r[0]=c->r[3]+0xEDCC0000u; // 800D6C7C
  cmpu(c,0,c->r[0],0x00005678u); // 800D6C80
  if (!crb(c,2)) { goto L_800D6C90; } // 800D6C84
  W32(c->r[5]+0x00000000u,c->r[6]); // 800D6C88
  goto L_800D6CA8; // 800D6C8C
L_800D6C90:;
  c->r[0]=c->r[3]+0x87AA0000u; // 800D6C90
  cmpu(c,0,c->r[0],0x00003412u); // 800D6C94
  if (!crb(c,2)) { goto L_800D6CA4; } // 800D6C98
  W32(c->r[5]+0x00000000u,c->r[31]); // 800D6C9C
  goto L_800D6CA8; // 800D6CA0
L_800D6CA4:;
  c->r[31]=c->r[6]|c->r[6]; // 800D6CA4
L_800D6CA8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D6CA8
  if (!crb(c,2)) { goto L_800D6CB4; } // 800D6CAC
  c->lr=0x800D6CB4u; f_800D7780(c); // 800D6CB0
L_800D6CB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D6CB4
  if (!crb(c,2)) { goto L_800D6CC4; } // 800D6CB8
  c->lr=0x800D6CC0u; f_800D6B90(c); // 800D6CBC
  c->r[31]=c->r[3]|c->r[3]; // 800D6CC0
L_800D6CC4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D6CC4
  if (!crb(c,2)) { goto L_800D6CD4; } // 800D6CC8
  c->lr=0x800D6CD0u; f_800D7560(c); // 800D6CCC
  c->r[31]=c->r[3]|c->r[3]; // 800D6CD0
L_800D6CD4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D6CD4
  if (!crb(c,2)) { goto L_800D6CE4; } // 800D6CD8
  c->lr=0x800D6CE0u; f_800D794C(c); // 800D6CDC
  c->r[31]=c->r[3]|c->r[3]; // 800D6CE0
L_800D6CE4:;
  c->lr=0x800D6CE8u; f_800DB5B4(c); // 800D6CE4
  cmps(c,0,(int32_t)c->r[31],0); // 800D6CE8
  if (!crb(c,2)) { goto L_800D6CF8; } // 800D6CEC
  c->lr=0x800D6CF4u; f_800D75DC(c); // 800D6CF0
  c->r[31]=c->r[3]|c->r[3]; // 800D6CF4
L_800D6CF8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D6CF8
  if (!crb(c,2)) { goto L_800D6D08; } // 800D6CFC
  c->lr=0x800D6D04u; f_800DB2F4(c); // 800D6D00
  c->r[31]=c->r[3]|c->r[3]; // 800D6D04
L_800D6D08:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D6D08
  if (!crb(c,2)) { goto L_800D6D50; } // 800D6D0C
  c->r[3]=0u+0x803D0000u; // 800D6D10
  c->r[5]=0u+0x00010000u; // 800D6D14
  c->r[6]=c->r[3]+0xFFFF9218u; // 800D6D18
  c->r[4]=0u+0x00000001u; // 800D6D1C
  c->r[3]=c->r[5]+0xFFFFE100u; // 800D6D20
  c->r[5]=0u+0x00000000u; // 800D6D24
  c->lr=0x800D6D2Cu; f_800DB78C(c); // 800D6D28
  c->r[4]=0u+0x803D0000u; // 800D6D2C
  c->r[0]=c->r[3]|c->r[3]; // 800D6D30
  c->r[3]=c->r[4]+0xFFFF9218u; // 800D6D34
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D6D38
  c->r[30]=c->r[0]|c->r[0]; // 800D6D3C
  c->lr=0x800D6D44u; f_800D967C(c); // 800D6D40
  cmps(c,0,(int32_t)c->r[30],0); // 800D6D44
  if (crb(c,2)) { goto L_800D6D50; } // 800D6D48
  c->r[31]=c->r[30]|c->r[30]; // 800D6D4C
L_800D6D50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6D50
  c->r[3]=c->r[31]|c->r[31]; // 800D6D54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6D58
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6D5C
  c->lr=c->r[0]; // 800D6D60
  c->r[1]=c->r[1]+0x00000020u; // 800D6D64
  return; // 800D6D68
}

// TRKMessageSend
void f_800D6D6C(Ctx* __restrict c) {
  trace_call(0x800D6D6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6D6C
  c->r[0]=c->lr; // 800D6D70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6D74
  c->r[4]=R32(c->r[3]+0x00000008u); // 800D6D78
  c->r[3]=c->r[3]+0x00000010u; // 800D6D7C
  c->lr=0x800D6D84u; f_800DB69C(c); // 800D6D80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6D84
  c->r[3]=0u+0x00000000u; // 800D6D88
  c->lr=c->r[0]; // 800D6D8C
  c->r[1]=c->r[1]+0x00000010u; // 800D6D90
  return; // 800D6D94
}

// TRKReadBuffer_ui32
void f_800D6D98(Ctx* __restrict c) {
  trace_call(0x800D6D98u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6D98
  c->r[0]=c->lr; // 800D6D9C
  c->r[6]=0u+0x802C0000u; // 800D6DA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D6DA4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6DA8
  c->r[28]=c->r[3]|c->r[3]; // 800D6DAC
  c->r[29]=c->r[5]|c->r[5]; // 800D6DB0
  c->r[31]=c->r[4]|c->r[4]; // 800D6DB4
  c->r[27]=c->r[6]+0xFFFFD518u; // 800D6DB8
  c->r[30]=0u+0x00000000u; // 800D6DBC
  c->r[3]=0u+0x00000000u; // 800D6DC0
  goto L_800D6E64; // 800D6DC4
L_800D6DC8:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 800D6DC8
  cmps(c,0,(int32_t)c->r[0],0); // 800D6DCC
  if (crb(c,2)) { goto L_800D6DDC; } // 800D6DD0
  c->r[25]=c->r[31]|c->r[31]; // 800D6DD4
  goto L_800D6DE0; // 800D6DD8
L_800D6DDC:;
  c->r[25]=c->r[1]+0x00000008u; // 800D6DDC
L_800D6DE0:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 800D6DE0
  c->r[24]=0u+0x00000004u; // 800D6DE4
  c->r[0]=R32(c->r[28]+0x00000008u); // 800D6DE8
  c->r[26]=0u+0x00000000u; // 800D6DEC
  c->r[0]=c->r[0]-c->r[3]; // 800D6DF0
  cmpu(c,0,c->r[24],c->r[0]); // 800D6DF4
  if (!crb(c,1)) { goto L_800D6E04; } // 800D6DF8
  c->r[26]=0u+0x00000302u; // 800D6DFC
  c->r[24]=c->r[0]|c->r[0]; // 800D6E00
L_800D6E04:;
  c->r[4]=c->r[3]+0x00000010u; // 800D6E04
  c->r[3]=c->r[25]|c->r[25]; // 800D6E08
  c->r[5]=c->r[24]|c->r[24]; // 800D6E0C
  c->r[4]=c->r[28]+c->r[4]; // 800D6E10
  c->lr=0x800D6E18u; f_8000449C(c); // 800D6E14
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 800D6E18
  c->r[0]=c->r[0]+c->r[24]; // 800D6E1C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800D6E20
  c->r[0]=R32(c->r[27]+0x00000000u); // 800D6E24
  cmps(c,0,(int32_t)c->r[0],0); // 800D6E28
  if (!crb(c,2)) { goto L_800D6E58; } // 800D6E2C
  cmps(c,0,(int32_t)c->r[26],0); // 800D6E30
  if (!crb(c,2)) { goto L_800D6E58; } // 800D6E34
  c->r[0]=R8(c->r[25]+0x00000003u); // 800D6E38
  W8(c->r[31]+0x00000000u,c->r[0]); // 800D6E3C
  c->r[0]=R8(c->r[25]+0x00000002u); // 800D6E40
  W8(c->r[31]+0x00000001u,c->r[0]); // 800D6E44
  c->r[0]=R8(c->r[25]+0x00000001u); // 800D6E48
  W8(c->r[31]+0x00000002u,c->r[0]); // 800D6E4C
  c->r[0]=R8(c->r[25]+0x00000000u); // 800D6E50
  W8(c->r[31]+0x00000003u,c->r[0]); // 800D6E54
L_800D6E58:;
  c->r[3]=c->r[26]|c->r[26]; // 800D6E58
  c->r[31]=c->r[31]+0x00000004u; // 800D6E5C
  c->r[30]=c->r[30]+0x00000001u; // 800D6E60
L_800D6E64:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D6E64
  if (!crb(c,2)) { goto L_800D6E74; } // 800D6E68
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[29]); // 800D6E6C
  if (crb(c,0)) { IRQCHK(c); goto L_800D6DC8; } // 800D6E70
L_800D6E74:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6E74
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D6E78
  c->lr=c->r[0]; // 800D6E7C
  c->r[1]=c->r[1]+0x00000030u; // 800D6E80
  return; // 800D6E84
}

// TRKReadBuffer_ui8
void f_800D6E88(Ctx* __restrict c) {
  trace_call(0x800D6E88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6E88
  c->r[0]=c->lr; // 800D6E8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6E90
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6E94
  c->r[26]=c->r[3]|c->r[3]; // 800D6E98
  c->r[27]=c->r[4]|c->r[4]; // 800D6E9C
  c->r[28]=c->r[5]|c->r[5]; // 800D6EA0
  c->r[29]=0u+0x00000000u; // 800D6EA4
  c->r[3]=0u+0x00000000u; // 800D6EA8
  goto L_800D6EFC; // 800D6EAC
L_800D6EB0:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800D6EB0
  c->r[30]=0u+0x00000001u; // 800D6EB4
  c->r[0]=R32(c->r[26]+0x00000008u); // 800D6EB8
  c->r[31]=0u+0x00000000u; // 800D6EBC
  c->r[0]=c->r[0]-c->r[3]; // 800D6EC0
  cmpu(c,0,c->r[30],c->r[0]); // 800D6EC4
  if (!crb(c,1)) { goto L_800D6ED4; } // 800D6EC8
  c->r[31]=0u+0x00000302u; // 800D6ECC
  c->r[30]=c->r[0]|c->r[0]; // 800D6ED0
L_800D6ED4:;
  c->r[4]=c->r[3]+0x00000010u; // 800D6ED4
  c->r[5]=c->r[30]|c->r[30]; // 800D6ED8
  c->r[3]=c->r[27]+c->r[29]; // 800D6EDC
  c->r[4]=c->r[26]+c->r[4]; // 800D6EE0
  c->lr=0x800D6EE8u; f_8000449C(c); // 800D6EE4
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 800D6EE8
  c->r[3]=c->r[31]|c->r[31]; // 800D6EEC
  c->r[29]=c->r[29]+0x00000001u; // 800D6EF0
  c->r[0]=c->r[0]+c->r[30]; // 800D6EF4
  W32(c->r[26]+0x0000000Cu,c->r[0]); // 800D6EF8
L_800D6EFC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D6EFC
  if (!crb(c,2)) { goto L_800D6F0C; } // 800D6F00
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 800D6F04
  if (crb(c,0)) { IRQCHK(c); goto L_800D6EB0; } // 800D6F08
L_800D6F0C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6F0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6F10
  c->lr=c->r[0]; // 800D6F14
  c->r[1]=c->r[1]+0x00000020u; // 800D6F18
  return; // 800D6F1C
}

// TRKReadBuffer1_ui64
void f_800D6F20(Ctx* __restrict c) {
  trace_call(0x800D6F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6F20
  c->r[0]=c->lr; // 800D6F24
  c->r[5]=0u+0x802C0000u; // 800D6F28
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D6F2C
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6F30
  c->r[27]=c->r[3]|c->r[3]; // 800D6F34
  c->r[30]=c->r[4]|c->r[4]; // 800D6F38
  c->r[0]=R32(c->r[5]+0xFFFFD518u); // 800D6F3C
  cmps(c,0,(int32_t)c->r[0],0); // 800D6F40
  if (crb(c,2)) { goto L_800D6F50; } // 800D6F44
  c->r[31]=c->r[30]|c->r[30]; // 800D6F48
  goto L_800D6F54; // 800D6F4C
L_800D6F50:;
  c->r[31]=c->r[1]+0x00000008u; // 800D6F50
L_800D6F54:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800D6F54
  c->r[28]=0u+0x00000008u; // 800D6F58
  c->r[0]=R32(c->r[27]+0x00000008u); // 800D6F5C
  c->r[29]=0u+0x00000000u; // 800D6F60
  c->r[0]=c->r[0]-c->r[3]; // 800D6F64
  cmpu(c,0,c->r[28],c->r[0]); // 800D6F68
  if (!crb(c,1)) { goto L_800D6F78; } // 800D6F6C
  c->r[29]=0u+0x00000302u; // 800D6F70
  c->r[28]=c->r[0]|c->r[0]; // 800D6F74
L_800D6F78:;
  c->r[4]=c->r[3]+0x00000010u; // 800D6F78
  c->r[3]=c->r[31]|c->r[31]; // 800D6F7C
  c->r[5]=c->r[28]|c->r[28]; // 800D6F80
  c->r[4]=c->r[27]+c->r[4]; // 800D6F84
  c->lr=0x800D6F8Cu; f_8000449C(c); // 800D6F88
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 800D6F8C
  c->r[3]=0u+0x802C0000u; // 800D6F90
  c->r[0]=c->r[0]+c->r[28]; // 800D6F94
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800D6F98
  c->r[0]=R32(c->r[3]+0xFFFFD518u); // 800D6F9C
  cmps(c,0,(int32_t)c->r[0],0); // 800D6FA0
  if (!crb(c,2)) { goto L_800D6FF0; } // 800D6FA4
  cmps(c,0,(int32_t)c->r[29],0); // 800D6FA8
  if (!crb(c,2)) { goto L_800D6FF0; } // 800D6FAC
  c->r[0]=R8(c->r[31]+0x00000007u); // 800D6FB0
  W8(c->r[30]+0x00000000u,c->r[0]); // 800D6FB4
  c->r[0]=R8(c->r[31]+0x00000006u); // 800D6FB8
  W8(c->r[30]+0x00000001u,c->r[0]); // 800D6FBC
  c->r[0]=R8(c->r[31]+0x00000005u); // 800D6FC0
  W8(c->r[30]+0x00000002u,c->r[0]); // 800D6FC4
  c->r[0]=R8(c->r[31]+0x00000004u); // 800D6FC8
  W8(c->r[30]+0x00000003u,c->r[0]); // 800D6FCC
  c->r[0]=R8(c->r[31]+0x00000003u); // 800D6FD0
  W8(c->r[30]+0x00000004u,c->r[0]); // 800D6FD4
  c->r[0]=R8(c->r[31]+0x00000002u); // 800D6FD8
  W8(c->r[30]+0x00000005u,c->r[0]); // 800D6FDC
  c->r[0]=R8(c->r[31]+0x00000001u); // 800D6FE0
  W8(c->r[30]+0x00000006u,c->r[0]); // 800D6FE4
  c->r[0]=R8(c->r[31]+0x00000000u); // 800D6FE8
  W8(c->r[30]+0x00000007u,c->r[0]); // 800D6FEC
L_800D6FF0:;
  c->r[3]=c->r[29]|c->r[29]; // 800D6FF0
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6FF4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D6FF8
  c->lr=c->r[0]; // 800D6FFC
  c->r[1]=c->r[1]+0x00000030u; // 800D7000
  return; // 800D7004
}

// TRKAppendBuffer_ui32
void f_800D7008(Ctx* __restrict c) {
  trace_call(0x800D7008u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7008
  c->r[0]=c->lr; // 800D700C
  c->r[6]=0u+0x802C0000u; // 800D7010
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D7014
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7018
  c->r[27]=c->r[3]|c->r[3]; // 800D701C
  c->r[28]=c->r[5]|c->r[5]; // 800D7020
  c->r[30]=c->r[4]|c->r[4]; // 800D7024
  c->r[31]=c->r[6]+0xFFFFD518u; // 800D7028
  c->r[29]=0u+0x00000000u; // 800D702C
  c->r[3]=0u+0x00000000u; // 800D7030
  goto L_800D70E0; // 800D7034
L_800D7038:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800D7038
  c->r[3]=R32(c->r[30]+0x00000000u); // 800D703C
  cmps(c,0,(int32_t)c->r[0],0); // 800D7040
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D7044
  if (crb(c,2)) { goto L_800D7054; } // 800D7048
  c->r[4]=c->r[1]+0x00000008u; // 800D704C
  goto L_800D7078; // 800D7050
L_800D7054:;
  c->r[6]=R8(c->r[1]+0x0000000Bu); // 800D7054
  c->r[4]=c->r[1]+0x0000000Cu; // 800D7058
  c->r[5]=R8(c->r[1]+0x0000000Au); // 800D705C
  c->r[3]=R8(c->r[1]+0x00000009u); // 800D7060
  c->r[0]=R8(c->r[1]+0x00000008u); // 800D7064
  W8(c->r[1]+0x0000000Cu,c->r[6]); // 800D7068
  W8(c->r[1]+0x0000000Du,c->r[5]); // 800D706C
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 800D7070
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 800D7074
L_800D7078:;
  c->r[5]=R32(c->r[27]+0x0000000Cu); // 800D7078
  c->r[25]=0u+0x00000004u; // 800D707C
  c->r[26]=0u+0x00000000u; // 800D7080
  c->r[0]=addc(c,~c->r[5],0x00000880u,1); // 800D7084
  cmpu(c,0,c->r[0],0x00000004u); // 800D7088
  if (!crb(c,0)) { goto L_800D7098; } // 800D708C
  c->r[26]=0u+0x00000301u; // 800D7090
  c->r[25]=c->r[0]|c->r[0]; // 800D7094
L_800D7098:;
  cmpu(c,0,c->r[25],0x00000001u); // 800D7098
  if (!crb(c,2)) { goto L_800D70B0; } // 800D709C
  c->r[3]=R8(c->r[4]+0x00000000u); // 800D70A0
  c->r[0]=c->r[5]+0x00000010u; // 800D70A4
  W8(c->r[27]+c->r[0],c->r[3]); // 800D70A8
  goto L_800D70C0; // 800D70AC
L_800D70B0:;
  c->r[3]=c->r[5]+0x00000010u; // 800D70B0
  c->r[5]=c->r[25]|c->r[25]; // 800D70B4
  c->r[3]=c->r[27]+c->r[3]; // 800D70B8
  c->lr=0x800D70C0u; f_8000449C(c); // 800D70BC
L_800D70C0:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 800D70C0
  c->r[3]=c->r[26]|c->r[26]; // 800D70C4
  c->r[30]=c->r[30]+0x00000004u; // 800D70C8
  c->r[29]=c->r[29]+0x00000001u; // 800D70CC
  c->r[0]=c->r[0]+c->r[25]; // 800D70D0
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 800D70D4
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 800D70D8
  W32(c->r[27]+0x00000008u,c->r[0]); // 800D70DC
L_800D70E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D70E0
  if (!crb(c,2)) { goto L_800D70F0; } // 800D70E4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 800D70E8
  if (crb(c,0)) { IRQCHK(c); goto L_800D7038; } // 800D70EC
L_800D70F0:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D70F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D70F4
  c->lr=c->r[0]; // 800D70F8
  c->r[1]=c->r[1]+0x00000030u; // 800D70FC
  return; // 800D7100
}

// TRKAppendBuffer_ui8
void f_800D7104(Ctx* __restrict c) {
  trace_call(0x800D7104u);
  c->r[9]=0u+0x00000000u; // 800D7104
  c->r[0]=0u+0x00000000u; // 800D7108
  goto L_800D7154; // 800D710C
L_800D7110:;
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 800D7110
  c->r[8]=R8(c->r[4]+0x00000000u); // 800D7114
  cmpu(c,0,c->r[7],0x00000880u); // 800D7118
  if (crb(c,0)) { goto L_800D7128; } // 800D711C
  c->r[7]=0u+0x00000301u; // 800D7120
  goto L_800D7148; // 800D7124
L_800D7128:;
  c->r[6]=c->r[7]+0x00000001u; // 800D7128
  c->r[0]=c->r[7]+0x00000010u; // 800D712C
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 800D7130
  c->r[7]=0u+0x00000000u; // 800D7134
  W8(c->r[3]+c->r[0],c->r[8]); // 800D7138
  c->r[6]=R32(c->r[3]+0x00000008u); // 800D713C
  c->r[0]=c->r[6]+0x00000001u; // 800D7140
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D7144
L_800D7148:;
  c->r[0]=c->r[7]|c->r[7]; // 800D7148
  c->r[9]=c->r[9]+0x00000001u; // 800D714C
  c->r[4]=c->r[4]+0x00000001u; // 800D7150
L_800D7154:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D7154
  if (!crb(c,2)) { goto L_800D7164; } // 800D7158
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[5]); // 800D715C
  if (crb(c,0)) { IRQCHK(c); goto L_800D7110; } // 800D7160
L_800D7164:;
  c->r[3]=c->r[0]|c->r[0]; // 800D7164
  return; // 800D7168
}

// TRKAppendBuffer1_ui64
void f_800D716C(Ctx* __restrict c) {
  trace_call(0x800D716Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D716C
  c->r[0]=c->lr; // 800D7170
  c->r[4]=0u+0x802C0000u; // 800D7174
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D7178
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D717C
  c->r[31]=c->r[3]|c->r[3]; // 800D7180
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D7184
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D7188
  c->r[0]=R32(c->r[4]+0xFFFFD518u); // 800D718C
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D7190
  cmps(c,0,(int32_t)c->r[0],0); // 800D7194
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D7198
  if (crb(c,2)) { goto L_800D71A8; } // 800D719C
  c->r[4]=c->r[1]+0x00000008u; // 800D71A0
  goto L_800D71EC; // 800D71A4
L_800D71A8:;
  c->r[10]=R8(c->r[1]+0x0000000Fu); // 800D71A8
  c->r[4]=c->r[1]+0x00000010u; // 800D71AC
  c->r[9]=R8(c->r[1]+0x0000000Eu); // 800D71B0
  c->r[8]=R8(c->r[1]+0x0000000Du); // 800D71B4
  c->r[7]=R8(c->r[1]+0x0000000Cu); // 800D71B8
  c->r[6]=R8(c->r[1]+0x0000000Bu); // 800D71BC
  c->r[5]=R8(c->r[1]+0x0000000Au); // 800D71C0
  c->r[3]=R8(c->r[1]+0x00000009u); // 800D71C4
  c->r[0]=R8(c->r[1]+0x00000008u); // 800D71C8
  W8(c->r[1]+0x00000010u,c->r[10]); // 800D71CC
  W8(c->r[1]+0x00000011u,c->r[9]); // 800D71D0
  W8(c->r[1]+0x00000012u,c->r[8]); // 800D71D4
  W8(c->r[1]+0x00000013u,c->r[7]); // 800D71D8
  W8(c->r[1]+0x00000014u,c->r[6]); // 800D71DC
  W8(c->r[1]+0x00000015u,c->r[5]); // 800D71E0
  W8(c->r[1]+0x00000016u,c->r[3]); // 800D71E4
  W8(c->r[1]+0x00000017u,c->r[0]); // 800D71E8
L_800D71EC:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800D71EC
  c->r[29]=0u+0x00000008u; // 800D71F0
  c->r[30]=0u+0x00000000u; // 800D71F4
  c->r[0]=addc(c,~c->r[3],0x00000880u,1); // 800D71F8
  cmpu(c,0,c->r[0],0x00000008u); // 800D71FC
  if (!crb(c,0)) { goto L_800D720C; } // 800D7200
  c->r[30]=0u+0x00000301u; // 800D7204
  c->r[29]=c->r[0]|c->r[0]; // 800D7208
L_800D720C:;
  cmpu(c,0,c->r[29],0x00000001u); // 800D720C
  if (!crb(c,2)) { goto L_800D7224; } // 800D7210
  c->r[0]=R8(c->r[4]+0x00000000u); // 800D7214
  c->r[3]=c->r[31]+c->r[3]; // 800D7218
  W8(c->r[3]+0x00000010u,c->r[0]); // 800D721C
  goto L_800D7234; // 800D7220
L_800D7224:;
  c->r[3]=c->r[3]+0x00000010u; // 800D7224
  c->r[5]=c->r[29]|c->r[29]; // 800D7228
  c->r[3]=c->r[31]+c->r[3]; // 800D722C
  c->lr=0x800D7234u; f_8000449C(c); // 800D7230
L_800D7234:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D7234
  c->r[3]=c->r[30]|c->r[30]; // 800D7238
  c->r[0]=c->r[0]+c->r[29]; // 800D723C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D7240
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800D7244
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D7248
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D724C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D7250
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D7254
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D7258
  c->lr=c->r[0]; // 800D725C
  c->r[1]=c->r[1]+0x00000030u; // 800D7260
  return; // 800D7264
}

// TRKReadBuffer
void f_800D7268(Ctx* __restrict c) {
  trace_call(0x800D7268u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7268
  c->r[0]=c->lr; // 800D726C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7270
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D7274
  c->r[31]=0u+0x00000000u; // 800D7278
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D727C
  c->r[30]=c->r[5]|c->r[5]; cr0(c,c->r[30]); // 800D7280
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D7284
  c->r[29]=c->r[3]|c->r[3]; // 800D7288
  c->r[3]=c->r[4]|c->r[4]; // 800D728C
  if (!crb(c,2)) { goto L_800D729C; } // 800D7290
  c->r[3]=0u+0x00000000u; // 800D7294
  goto L_800D72D8; // 800D7298
L_800D729C:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800D729C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800D72A0
  c->r[0]=c->r[0]-c->r[4]; // 800D72A4
  cmpu(c,0,c->r[30],c->r[0]); // 800D72A8
  if (!crb(c,1)) { goto L_800D72B8; } // 800D72AC
  c->r[31]=0u+0x00000302u; // 800D72B0
  c->r[30]=c->r[0]|c->r[0]; // 800D72B4
L_800D72B8:;
  c->r[4]=c->r[4]+0x00000010u; // 800D72B8
  c->r[5]=c->r[30]|c->r[30]; // 800D72BC
  c->r[4]=c->r[29]+c->r[4]; // 800D72C0
  c->lr=0x800D72C8u; f_8000449C(c); // 800D72C4
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D72C8
  c->r[3]=c->r[31]|c->r[31]; // 800D72CC
  c->r[0]=c->r[0]+c->r[30]; // 800D72D0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800D72D4
L_800D72D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D72D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D72DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D72E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D72E4
  c->lr=c->r[0]; // 800D72E8
  c->r[1]=c->r[1]+0x00000020u; // 800D72EC
  return; // 800D72F0
}

// TRKAppendBuffer
void f_800D72F4(Ctx* __restrict c) {
  trace_call(0x800D72F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D72F4
  c->r[0]=c->lr; // 800D72F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D72FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D7300
  c->r[31]=0u+0x00000000u; // 800D7304
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D7308
  c->r[30]=c->r[5]|c->r[5]; cr0(c,c->r[30]); // 800D730C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D7310
  c->r[29]=c->r[3]|c->r[3]; // 800D7314
  if (!crb(c,2)) { goto L_800D7324; } // 800D7318
  c->r[3]=0u+0x00000000u; // 800D731C
  goto L_800D737C; // 800D7320
L_800D7324:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800D7324
  c->r[0]=addc(c,~c->r[3],0x00000880u,1); // 800D7328
  cmpu(c,0,c->r[0],c->r[30]); // 800D732C
  if (!crb(c,0)) { goto L_800D733C; } // 800D7330
  c->r[31]=0u+0x00000301u; // 800D7334
  c->r[30]=c->r[0]|c->r[0]; // 800D7338
L_800D733C:;
  cmpu(c,0,c->r[30],0x00000001u); // 800D733C
  if (!crb(c,2)) { goto L_800D7354; } // 800D7340
  c->r[0]=R8(c->r[4]+0x00000000u); // 800D7344
  c->r[3]=c->r[29]+c->r[3]; // 800D7348
  W8(c->r[3]+0x00000010u,c->r[0]); // 800D734C
  goto L_800D7364; // 800D7350
L_800D7354:;
  c->r[3]=c->r[3]+0x00000010u; // 800D7354
  c->r[5]=c->r[30]|c->r[30]; // 800D7358
  c->r[3]=c->r[29]+c->r[3]; // 800D735C
  c->lr=0x800D7364u; f_8000449C(c); // 800D7360
L_800D7364:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D7364
  c->r[3]=c->r[31]|c->r[31]; // 800D7368
  c->r[0]=c->r[0]+c->r[30]; // 800D736C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800D7370
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800D7374
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D7378
L_800D737C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D737C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D7380
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D7384
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D7388
  c->lr=c->r[0]; // 800D738C
  c->r[1]=c->r[1]+0x00000020u; // 800D7390
  return; // 800D7394
}

// TRKSetBufferPosition
void f_800D7398(Ctx* __restrict c) {
  trace_call(0x800D7398u);
  cmpu(c,0,c->r[4],0x00000880u); // 800D7398
  c->r[5]=0u+0x00000000u; // 800D739C
  if (!crb(c,1)) { goto L_800D73AC; } // 800D73A0
  c->r[5]=0u+0x00000301u; // 800D73A4
  goto L_800D73C0; // 800D73A8
L_800D73AC:;
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800D73AC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D73B0
  cmpu(c,0,c->r[4],c->r[0]); // 800D73B4
  if (!crb(c,1)) { goto L_800D73C0; } // 800D73B8
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D73BC
L_800D73C0:;
  c->r[3]=c->r[5]|c->r[5]; // 800D73C0
  return; // 800D73C4
}

// TRKResetBuffer
void f_800D73C8(Ctx* __restrict c) {
  trace_call(0x800D73C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D73C8
  c->r[0]=c->lr; // 800D73CC
  cmps(c,0,(int32_t)c->r[4],0); // 800D73D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D73D4
  c->r[0]=0u+0x00000000u; // 800D73D8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D73DC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D73E0
  if (!crb(c,2)) { goto L_800D73F8; } // 800D73E4
  c->r[3]=c->r[3]+0x00000010u; // 800D73E8
  c->r[4]=0u+0x00000000u; // 800D73EC
  c->r[5]=0u+0x00000880u; // 800D73F0
  c->lr=0x800D73F8u; f_8000446C(c); // 800D73F4
L_800D73F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D73F8
  c->lr=c->r[0]; // 800D73FC
  c->r[1]=c->r[1]+0x00000010u; // 800D7400
  return; // 800D7404
}

// TRKReleaseBuffer
void f_800D7408(Ctx* __restrict c) {
  trace_call(0x800D7408u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7408
  c->r[0]=c->lr; // 800D740C
  cmps(c,0,(int32_t)c->r[3],-1); // 800D7410
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7414
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7418
  if (crb(c,2)) { goto L_800D7458; } // 800D741C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7420
  if (crb(c,0)) { goto L_800D7458; } // 800D7424
  cmps(c,0,(int32_t)c->r[3],3); // 800D7428
  if (!crb(c,0)) { goto L_800D7458; } // 800D742C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2192); // 800D7430
  c->r[3]=0u+0x802C0000u; // 800D7434
  c->r[0]=c->r[3]+0xFFFFD520u; // 800D7438
  c->r[31]=c->r[0]+c->r[4]; // 800D743C
  c->r[3]=c->r[31]|c->r[31]; // 800D7440
  c->lr=0x800D7448u; f_800D90EC(c); // 800D7444
  c->r[0]=0u+0x00000000u; // 800D7448
  c->r[3]=c->r[31]|c->r[31]; // 800D744C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7450
  c->lr=0x800D7458u; f_800D90E4(c); // 800D7454
L_800D7458:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7458
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D745C
  c->lr=c->r[0]; // 800D7460
  c->r[1]=c->r[1]+0x00000010u; // 800D7464
  return; // 800D7468
}

// TRKGetBuffer
void f_800D746C(Ctx* __restrict c) {
  trace_call(0x800D746Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 800D746C
  c->r[0]=0u+0x00000000u; // 800D7470
  if (crb(c,0)) { goto L_800D7490; } // 800D7474
  cmps(c,0,(int32_t)c->r[3],3); // 800D7478
  if (!crb(c,0)) { goto L_800D7490; } // 800D747C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)2192); // 800D7480
  c->r[3]=0u+0x802C0000u; // 800D7484
  c->r[0]=c->r[3]+0xFFFFD520u; // 800D7488
  c->r[0]=c->r[0]+c->r[4]; // 800D748C
L_800D7490:;
  c->r[3]=c->r[0]|c->r[0]; // 800D7490
  return; // 800D7494
}

// TRKGetFreeBuffer
void f_800D7498(Ctx* __restrict c) {
  trace_call(0x800D7498u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7498
  c->r[0]=c->lr; // 800D749C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D74A0
  c->r[0]=0u+0x00000000u; // 800D74A4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D74A8
  c->r[28]=c->r[4]|c->r[4]; // 800D74AC
  c->r[27]=c->r[3]|c->r[3]; // 800D74B0
  c->r[30]=0u+0x00000300u; // 800D74B4
  c->r[29]=0u+0x00000000u; // 800D74B8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D74BC
  goto L_800D752C; // 800D74C0
L_800D74C4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D74C4
  c->r[31]=0u+0x00000000u; // 800D74C8
  if (crb(c,0)) { goto L_800D74E8; } // 800D74CC
  cmps(c,0,(int32_t)c->r[29],3); // 800D74D0
  if (!crb(c,0)) { goto L_800D74E8; } // 800D74D4
  c->r[4]=(uint32_t)((int32_t)c->r[29]*(int32_t)2192); // 800D74D8
  c->r[3]=0u+0x802C0000u; // 800D74DC
  c->r[0]=c->r[3]+0xFFFFD520u; // 800D74E0
  c->r[31]=c->r[0]+c->r[4]; // 800D74E4
L_800D74E8:;
  c->r[3]=c->r[31]|c->r[31]; // 800D74E8
  c->lr=0x800D74F0u; f_800D90EC(c); // 800D74EC
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D74F0
  cmps(c,0,(int32_t)c->r[0],0); // 800D74F4
  if (!crb(c,2)) { goto L_800D7520; } // 800D74F8
  c->r[3]=0u+0x00000000u; // 800D74FC
  c->r[0]=0u+0x00000001u; // 800D7500
  W32(c->r[31]+0x00000008u,c->r[3]); // 800D7504
  c->r[30]=0u+0x00000000u; // 800D7508
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800D750C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D7510
  W32(c->r[28]+0x00000000u,c->r[31]); // 800D7514
  W32(c->r[27]+0x00000000u,c->r[29]); // 800D7518
  c->r[29]=0u+0x00000003u; // 800D751C
L_800D7520:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7520
  c->lr=0x800D7528u; f_800D90E4(c); // 800D7524
  c->r[29]=c->r[29]+0x00000001u; // 800D7528
L_800D752C:;
  cmps(c,0,(int32_t)c->r[29],3); // 800D752C
  if (crb(c,0)) { IRQCHK(c); goto L_800D74C4; } // 800D7530
  cmps(c,0,(int32_t)c->r[30],768); // 800D7534
  if (!crb(c,2)) { goto L_800D7548; } // 800D7538
  c->r[3]=0u+0x801F0000u; // 800D753C
  c->r[3]=c->r[3]+0x00004B00u; // 800D7540
  c->lr=0x800D7548u; f_800D7784(c); // 800D7544
L_800D7548:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7548
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D754C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7550
  c->lr=c->r[0]; // 800D7554
  c->r[1]=c->r[1]+0x00000020u; // 800D7558
  return; // 800D755C
}

// TRKInitializeMessageBuffers
void f_800D7560(Ctx* __restrict c) {
  trace_call(0x800D7560u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7560
  c->r[0]=c->lr; // 800D7564
  c->r[3]=0u+0x802C0000u; // 800D7568
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D756C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D7570
  c->r[31]=0u+0x00000000u; // 800D7574
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D7578
  c->r[30]=c->r[3]+0xFFFFD520u; // 800D757C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D7580
  c->r[29]=0u+0x00000000u; // 800D7584
L_800D7588:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7588
  c->lr=0x800D7590u; f_800D90F4(c); // 800D758C
  c->r[3]=c->r[30]|c->r[30]; // 800D7590
  c->lr=0x800D7598u; f_800D90EC(c); // 800D7594
  W32(c->r[30]+0x00000004u,c->r[31]); // 800D7598
  c->r[3]=c->r[30]|c->r[30]; // 800D759C
  c->lr=0x800D75A4u; f_800D90E4(c); // 800D75A0
  c->r[29]=c->r[29]+0x00000001u; // 800D75A4
  c->r[30]=c->r[30]+0x00000890u; // 800D75A8
  cmps(c,0,(int32_t)c->r[29],3); // 800D75AC
  if (crb(c,0)) { IRQCHK(c); goto L_800D7588; } // 800D75B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D75B4
  c->r[3]=0u+0x00000000u; // 800D75B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D75BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D75C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D75C4
  c->lr=c->r[0]; // 800D75C8
  c->r[1]=c->r[1]+0x00000020u; // 800D75CC
  return; // 800D75D0
}

// TRKTerminateSerialHandler
void f_800D75D4(Ctx* __restrict c) {
  trace_call(0x800D75D4u);
  c->r[3]=0u+0x00000000u; // 800D75D4
  return; // 800D75D8
}

// TRKInitializeSerialHandler
void f_800D75DC(Ctx* __restrict c) {
  trace_call(0x800D75DCu);
  c->r[3]=0u+0x802C0000u; // 800D75DC
  c->r[5]=0u+0xFFFFFFFFu; // 800D75E0
  c->r[4]=c->r[3]+0xFFFFEED0u; // 800D75E4
  c->r[0]=0u+0x00000000u; // 800D75E8
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D75EC
  c->r[3]=0u+0x00000000u; // 800D75F0
  W32(c->r[4]+0x00000008u,c->r[0]); // 800D75F4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D75F8
  return; // 800D75FC
}

// TRKProcessInput
void f_800D7600(Ctx* __restrict c) {
  trace_call(0x800D7600u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7600
  c->r[0]=c->lr; // 800D7604
  c->r[4]=0u+0x00000002u; // 800D7608
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D760C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D7610
  c->r[31]=c->r[3]|c->r[3]; // 800D7614
  c->r[3]=c->r[1]+0x00000008u; // 800D7618
  c->lr=0x800D7620u; f_800D69E4(c); // 800D761C
  c->r[3]=0u+0x802C0000u; // 800D7620
  c->r[0]=0u+0xFFFFFFFFu; // 800D7624
  c->r[4]=c->r[3]+0xFFFFEED0u; // 800D7628
  W32(c->r[1]+0x00000010u,c->r[31]); // 800D762C
  c->r[3]=c->r[1]+0x00000008u; // 800D7630
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D7634
  c->lr=0x800D763Cu; f_800D69FC(c); // 800D7638
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D763C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D7640
  c->lr=c->r[0]; // 800D7644
  c->r[1]=c->r[1]+0x00000020u; // 800D7648
  return; // 800D764C
}

// TRKGetInput
void f_800D7650(Ctx* __restrict c) {
  trace_call(0x800D7650u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7650
  c->r[0]=c->lr; // 800D7654
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D7658
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D765C
  c->lr=0x800D7664u; f_800D76B0(c); // 800D7660
  c->r[31]=c->r[3]|c->r[3]; // 800D7664
  cmps(c,0,(int32_t)c->r[31],-1); // 800D7668
  if (crb(c,2)) { goto L_800D769C; } // 800D766C
  c->lr=0x800D7674u; f_800D746C(c); // 800D7670
  c->r[3]=c->r[1]+0x00000008u; // 800D7674
  c->r[4]=0u+0x00000002u; // 800D7678
  c->lr=0x800D7680u; f_800D69E4(c); // 800D767C
  c->r[3]=0u+0x802C0000u; // 800D7680
  c->r[0]=0u+0xFFFFFFFFu; // 800D7684
  c->r[4]=c->r[3]+0xFFFFEED0u; // 800D7688
  W32(c->r[1]+0x00000010u,c->r[31]); // 800D768C
  c->r[3]=c->r[1]+0x00000008u; // 800D7690
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D7694
  c->lr=0x800D769Cu; f_800D69FC(c); // 800D7698
L_800D769C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D769C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D76A0
  c->lr=c->r[0]; // 800D76A4
  c->r[1]=c->r[1]+0x00000020u; // 800D76A8
  return; // 800D76AC
}

// TRKTestForPacket
void f_800D76B0(Ctx* __restrict c) {
  trace_call(0x800D76B0u);
  {uint32_t ea=c->r[1]+0xFFFFF720u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D76B0
  c->r[0]=c->lr; // 800D76B4
  W32(c->r[1]+0x000008E4u,c->r[0]); // 800D76B8
  W32(c->r[1]+0x000008DCu,c->r[31]); // 800D76BC
  c->lr=0x800D76C4u; f_800DB714(c); // 800D76C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D76C4
  if (crb(c,1)) { goto L_800D76D4; } // 800D76C8
  c->r[3]=0u+0xFFFFFFFFu; // 800D76CC
  goto L_800D776C; // 800D76D0
L_800D76D4:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800D76D4
  c->r[4]=c->r[1]+0x00000008u; // 800D76D8
  c->lr=0x800D76E0u; f_800D7498(c); // 800D76DC
  c->r[0]=c->r[3]|c->r[3]; // 800D76E0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D76E4
  c->r[31]=c->r[0]|c->r[0]; // 800D76E8
  c->r[4]=0u+0x00000000u; // 800D76EC
  c->lr=0x800D76F4u; f_800D7398(c); // 800D76F0
  c->r[3]=c->r[1]+0x00000010u; // 800D76F4
  c->r[4]=0u+0x00000040u; // 800D76F8
  c->lr=0x800D7700u; f_800DB6D8(c); // 800D76FC
  cmps(c,0,(int32_t)c->r[3],0); // 800D7700
  if (!crb(c,2)) { goto L_800D775C; } // 800D7704
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D7708
  c->r[4]=c->r[1]+0x00000010u; // 800D770C
  c->r[5]=0u+0x00000040u; // 800D7710
  c->lr=0x800D7718u; f_800D7104(c); // 800D7714
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D7718
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D771C
  c->r[4]=addc(c,c->r[3],0xFFFFFFC0u,0); cr0(c,c->r[4]); // 800D7720
  if (!crb(c,1)) { goto L_800D7768; } // 800D7724
  c->r[3]=c->r[1]+0x00000050u; // 800D7728
  c->lr=0x800D7730u; f_800DB6D8(c); // 800D772C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7730
  if (!crb(c,2)) { goto L_800D774C; } // 800D7734
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D7738
  c->r[4]=c->r[1]+0x00000050u; // 800D773C
  c->r[5]=R32(c->r[1]+0x00000010u); // 800D7740
  c->lr=0x800D7748u; f_800D7104(c); // 800D7744
  goto L_800D7768; // 800D7748
L_800D774C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D774C
  c->lr=0x800D7754u; f_800D7408(c); // 800D7750
  c->r[31]=0u+0xFFFFFFFFu; // 800D7754
  goto L_800D7768; // 800D7758
L_800D775C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D775C
  c->lr=0x800D7764u; f_800D7408(c); // 800D7760
  c->r[31]=0u+0xFFFFFFFFu; // 800D7764
L_800D7768:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7768
L_800D776C:;
  c->r[0]=R32(c->r[1]+0x000008E4u); // 800D776C
  c->r[31]=R32(c->r[1]+0x000008DCu); // 800D7770
  c->lr=c->r[0]; // 800D7774
  c->r[1]=c->r[1]+0x000008E0u; // 800D7778
  return; // 800D777C
}

// usr_put_initialize
void f_800D7780(Ctx* __restrict c) {
  trace_call(0x800D7780u);
  return; // 800D7780
}

// usr_puts_serial
void f_800D7784(Ctx* __restrict c) {
  trace_call(0x800D7784u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7784
  c->r[0]=c->lr; // 800D7788
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D778C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D7790
  c->r[31]=0u+0x00000000u; // 800D7794
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D7798
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D779C
  c->r[29]=c->r[3]|c->r[3]; // 800D77A0
  c->r[3]=0u+0x00000000u; // 800D77A4
  goto L_800D77D8; // 800D77A8
L_800D77AC:;
  c->lr=0x800D77B0u; f_800D8A20(c); // 800D77AC
  W8(c->r[1]+0x00000008u,c->r[30]); // 800D77B0
  c->r[30]=c->r[3]|c->r[3]; // 800D77B4
  c->r[3]=0u+0x00000000u; // 800D77B8
  W8(c->r[1]+0x00000009u,c->r[31]); // 800D77BC
  c->lr=0x800D77C4u; f_800D8A14(c); // 800D77C0
  c->r[3]=c->r[1]+0x00000008u; // 800D77C4
  c->lr=0x800D77CCu; f_8009AC4C(c); // 800D77C8
  c->r[3]=c->r[30]|c->r[30]; // 800D77CC
  c->lr=0x800D77D4u; f_800D8A14(c); // 800D77D0
  c->r[3]=0u+0x00000000u; // 800D77D4
L_800D77D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D77D8
  if (!crb(c,2)) { goto L_800D77F0; } // 800D77DC
  c->r[0]=R8(c->r[29]+0x00000000u); // 800D77E0
  c->r[29]=c->r[29]+0x00000001u; // 800D77E4
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[30]); // 800D77E8
  if (!crb(c,2)) { IRQCHK(c); goto L_800D77AC; } // 800D77EC
L_800D77F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D77F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D77F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D77F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D77FC
  c->lr=c->r[0]; // 800D7800
  c->r[1]=c->r[1]+0x00000020u; // 800D7804
  return; // 800D7808
}

// TRKDispatchMessage
void f_800D780C(Ctx* __restrict c) {
  trace_call(0x800D780Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D780C
  c->r[0]=c->lr; // 800D7810
  c->r[4]=0u+0x00000000u; // 800D7814
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D781C
  c->r[31]=0u+0x00000500u; // 800D7820
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D7824
  c->r[30]=c->r[3]|c->r[3]; // 800D7828
  c->lr=0x800D7830u; f_800D7398(c); // 800D782C
  c->r[0]=R8(c->r[30]+0x00000014u); // 800D7830
  cmpu(c,0,c->r[0],0x0000001Au); // 800D7834
  if (crb(c,1)) { goto L_800D7930; } // 800D7838
  c->r[3]=0u+0x80220000u; // 800D783C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D7840
  c->r[3]=c->r[3]+0xFFFFC6C8u; // 800D7844
  c->r[0]=R32(c->r[3]+c->r[0]); // 800D7848
  c->ctr=c->r[0]; // 800D784C
  if (true) { switch (c->ctr) { case 0x800D7854u: goto L_800D7854; case 0x800D7864u: goto L_800D7864; case 0x800D7874u: goto L_800D7874; case 0x800D7884u: goto L_800D7884; case 0x800D7894u: goto L_800D7894; case 0x800D78A4u: goto L_800D78A4; case 0x800D78B4u: goto L_800D78B4; case 0x800D78C4u: goto L_800D78C4; case 0x800D78D4u: goto L_800D78D4; case 0x800D78E4u: goto L_800D78E4; case 0x800D78F4u: goto L_800D78F4; case 0x800D7904u: goto L_800D7904; case 0x800D7914u: goto L_800D7914; case 0x800D7924u: goto L_800D7924; case 0x800D7930u: goto L_800D7930; default: break; } dispatch(c,c->ctr); return; } // 800D7850
L_800D7854:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7854
  c->lr=0x800D785Cu; f_800D898C(c); // 800D7858
  c->r[31]=c->r[3]|c->r[3]; // 800D785C
  goto L_800D7930; // 800D7860
L_800D7864:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7864
  c->lr=0x800D786Cu; f_800D88F0(c); // 800D7868
  c->r[31]=c->r[3]|c->r[3]; // 800D786C
  goto L_800D7930; // 800D7870
L_800D7874:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7874
  c->lr=0x800D787Cu; f_800D8874(c); // 800D7878
  c->r[31]=c->r[3]|c->r[3]; // 800D787C
  goto L_800D7930; // 800D7880
L_800D7884:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7884
  c->lr=0x800D788Cu; f_800D87F8(c); // 800D7888
  c->r[31]=c->r[3]|c->r[3]; // 800D788C
  goto L_800D7930; // 800D7890
L_800D7894:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7894
  c->lr=0x800D789Cu; f_800D87F0(c); // 800D7898
  c->r[31]=c->r[3]|c->r[3]; // 800D789C
  goto L_800D7930; // 800D78A0
L_800D78A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D78A4
  c->lr=0x800D78ACu; f_800D87E8(c); // 800D78A8
  c->r[31]=c->r[3]|c->r[3]; // 800D78AC
  goto L_800D7930; // 800D78B0
L_800D78B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D78B4
  c->lr=0x800D78BCu; f_800D85A0(c); // 800D78B8
  c->r[31]=c->r[3]|c->r[3]; // 800D78BC
  goto L_800D7930; // 800D78C0
L_800D78C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D78C4
  c->lr=0x800D78CCu; f_800D8384(c); // 800D78C8
  c->r[31]=c->r[3]|c->r[3]; // 800D78CC
  goto L_800D7930; // 800D78D0
L_800D78D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D78D4
  c->lr=0x800D78DCu; f_800D8160(c); // 800D78D8
  c->r[31]=c->r[3]|c->r[3]; // 800D78DC
  goto L_800D7930; // 800D78E0
L_800D78E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D78E4
  c->lr=0x800D78ECu; f_800D7EA4(c); // 800D78E8
  c->r[31]=c->r[3]|c->r[3]; // 800D78EC
  goto L_800D7930; // 800D78F0
L_800D78F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D78F4
  c->lr=0x800D78FCu; f_800D7DC0(c); // 800D78F8
  c->r[31]=c->r[3]|c->r[3]; // 800D78FC
  goto L_800D7930; // 800D7900
L_800D7904:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7904
  c->lr=0x800D790Cu; f_800D7AEC(c); // 800D7908
  c->r[31]=c->r[3]|c->r[3]; // 800D790C
  goto L_800D7930; // 800D7910
L_800D7914:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7914
  c->lr=0x800D791Cu; f_800D7A20(c); // 800D7918
  c->r[31]=c->r[3]|c->r[3]; // 800D791C
  goto L_800D7930; // 800D7920
L_800D7924:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7924
  c->lr=0x800D792Cu; f_800D7954(c); // 800D7928
  c->r[31]=c->r[3]|c->r[3]; // 800D792C
L_800D7930:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7930
  c->r[3]=c->r[31]|c->r[31]; // 800D7934
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7938
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D793C
  c->lr=c->r[0]; // 800D7940
  c->r[1]=c->r[1]+0x00000010u; // 800D7944
  return; // 800D7948
}

// TRKInitializeDispatcher
void f_800D794C(Ctx* __restrict c) {
  trace_call(0x800D794Cu);
  c->r[3]=0u+0x00000000u; // 800D794C
  return; // 800D7950
}

// TRKDoSetOption
void f_800D7954(Ctx* __restrict c) {
  trace_call(0x800D7954u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7954
  c->r[0]=c->lr; // 800D7958
  c->r[4]=0u+0x801F0000u; // 800D795C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D7960
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800D7964
  c->r[31]=c->r[4]+0x00004B20u; // 800D7968
  W32(c->r[1]+0x00000048u,c->r[30]); // 800D796C
  c->r[0]=R8(c->r[3]+0x00000018u); // 800D7970
  c->r[30]=R8(c->r[3]+0x0000001Cu); // 800D7974
  cmpu(c,0,c->r[0],0x00000001u); // 800D7978
  if (!crb(c,2)) { goto L_800D79AC; } // 800D797C
  c->r[3]=c->r[31]+0x00000000u; // 800D7980
  c->lr=0x800D7988u; f_800D7784(c); // 800D7984
  cmpu(c,0,c->r[30],0x00000000u); // 800D7988
  if (crb(c,2)) { goto L_800D799C; } // 800D798C
  c->r[3]=c->r[31]+0x00000020u; // 800D7990
  c->lr=0x800D7998u; f_800D7784(c); // 800D7994
  goto L_800D79A4; // 800D7998
L_800D799C:;
  c->r[3]=c->r[31]+0x00000028u; // 800D799C
  c->lr=0x800D79A4u; f_800D7784(c); // 800D79A0
L_800D79A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D79A4
  c->lr=0x800D79ACu; f_800DBA2C(c); // 800D79A8
L_800D79AC:;
  c->r[3]=c->r[1]+0x00000008u; // 800D79AC
  c->r[4]=0u+0x00000000u; // 800D79B0
  c->r[5]=0u+0x00000040u; // 800D79B4
  c->lr=0x800D79BCu; f_8000446C(c); // 800D79B8
  c->r[3]=0u+0x802C0000u; // 800D79BC
  c->r[0]=0u+0x00000080u; // 800D79C0
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D79C4
  c->r[6]=0u+0x00000040u; // 800D79C8
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D79CC
  c->r[5]=0u+0x00000000u; // 800D79D0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D79D4
  c->r[3]=c->r[1]+0x00000008u; // 800D79D8
  c->r[7]=c->r[8]+0x00000001u; // 800D79DC
  c->r[4]=0u+0x00000040u; // 800D79E0
  W32(c->r[1]+0x00000014u,c->r[8]); // 800D79E4
  c->r[0]=c->r[7]+0x00000001u; // 800D79E8
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D79EC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D79F0
  W8(c->r[1]+0x00000010u,c->r[5]); // 800D79F4
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D79F8
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D79FC
  c->lr=0x800D7A04u; f_800DB69C(c); // 800D7A00
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D7A04
  c->r[3]=0u+0x00000000u; // 800D7A08
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800D7A0C
  c->r[30]=R32(c->r[1]+0x00000048u); // 800D7A10
  c->lr=c->r[0]; // 800D7A14
  c->r[1]=c->r[1]+0x00000050u; // 800D7A18
  return; // 800D7A1C
}

// TRKDoStop
void f_800D7A20(Ctx* __restrict c) {
  trace_call(0x800D7A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7A20
  c->r[0]=c->lr; // 800D7A24
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D7A28
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800D7A2C
  c->lr=0x800D7A34u; f_800D968C(c); // 800D7A30
  cmps(c,0,(int32_t)c->r[3],1796); // 800D7A34
  if (crb(c,2)) { goto L_800D7A64; } // 800D7A38
  if (!crb(c,0)) { goto L_800D7A4C; } // 800D7A3C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7A40
  if (crb(c,2)) { goto L_800D7A5C; } // 800D7A44
  goto L_800D7A7C; // 800D7A48
L_800D7A4C:;
  cmps(c,0,(int32_t)c->r[3],1798); // 800D7A4C
  if (crb(c,2)) { goto L_800D7A74; } // 800D7A50
  if (!crb(c,0)) { goto L_800D7A7C; } // 800D7A54
  goto L_800D7A6C; // 800D7A58
L_800D7A5C:;
  c->r[31]=0u+0x00000000u; // 800D7A5C
  goto L_800D7A80; // 800D7A60
L_800D7A64:;
  c->r[31]=0u+0x00000021u; // 800D7A64
  goto L_800D7A80; // 800D7A68
L_800D7A6C:;
  c->r[31]=0u+0x00000022u; // 800D7A6C
  goto L_800D7A80; // 800D7A70
L_800D7A74:;
  c->r[31]=0u+0x00000020u; // 800D7A74
  goto L_800D7A80; // 800D7A78
L_800D7A7C:;
  c->r[31]=0u+0x00000001u; // 800D7A7C
L_800D7A80:;
  c->r[3]=c->r[1]+0x00000008u; // 800D7A80
  c->r[4]=0u+0x00000000u; // 800D7A84
  c->r[5]=0u+0x00000040u; // 800D7A88
  c->lr=0x800D7A90u; f_8000446C(c); // 800D7A8C
  c->r[3]=0u+0x802C0000u; // 800D7A90
  c->r[0]=0u+0x00000080u; // 800D7A94
  c->r[8]=c->r[3]+0xFFFFEEE8u; // 800D7A98
  c->r[5]=0u+0x00000040u; // 800D7A9C
  c->r[7]=R32(c->r[8]+0x00000000u); // 800D7AA0
  c->r[3]=c->r[1]+0x00000008u; // 800D7AA4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D7AA8
  c->r[4]=0u+0x00000040u; // 800D7AAC
  c->r[6]=c->r[7]+0x00000001u; // 800D7AB0
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D7AB4
  c->r[0]=c->r[6]+0x00000001u; // 800D7AB8
  W32(c->r[8]+0x00000000u,c->r[6]); // 800D7ABC
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D7AC0
  W8(c->r[1]+0x00000010u,c->r[31]); // 800D7AC4
  W32(c->r[8]+0x00000000u,c->r[0]); // 800D7AC8
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D7ACC
  c->lr=0x800D7AD4u; f_800DB69C(c); // 800D7AD0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D7AD4
  c->r[3]=0u+0x00000000u; // 800D7AD8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800D7ADC
  c->lr=c->r[0]; // 800D7AE0
  c->r[1]=c->r[1]+0x00000050u; // 800D7AE4
  return; // 800D7AE8
}

// TRKDoStep
void f_800D7AEC(Ctx* __restrict c) {
  trace_call(0x800D7AECu);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7AEC
  c->r[0]=c->lr; // 800D7AF0
  c->r[4]=0u+0x00000000u; // 800D7AF4
  W32(c->r[1]+0x00000164u,c->r[0]); // 800D7AF8
  {uint32_t ea=c->r[1]+0x0000014Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7AFC
  c->r[27]=c->r[3]|c->r[3]; // 800D7B00
  c->lr=0x800D7B08u; f_800D7398(c); // 800D7B04
  c->r[31]=R8(c->r[27]+0x00000018u); // 800D7B08
  c->r[29]=R32(c->r[27]+0x00000020u); // 800D7B0C
  cmps(c,0,(int32_t)c->r[31],16); // 800D7B10
  c->r[28]=R32(c->r[27]+0x00000024u); // 800D7B14
  if (crb(c,2)) { goto L_800D7B44; } // 800D7B18
  if (!crb(c,0)) { goto L_800D7B38; } // 800D7B1C
  cmps(c,0,(int32_t)c->r[31],1); // 800D7B20
  if (crb(c,2)) { goto L_800D7BB0; } // 800D7B24
  if (!crb(c,0)) { goto L_800D7C24; } // 800D7B28
  cmps(c,0,(int32_t)c->r[31],0); // 800D7B2C
  if (!crb(c,0)) { goto L_800D7B44; } // 800D7B30
  goto L_800D7C24; // 800D7B34
L_800D7B38:;
  cmps(c,0,(int32_t)c->r[31],18); // 800D7B38
  if (!crb(c,0)) { goto L_800D7C24; } // 800D7B3C
  goto L_800D7BB0; // 800D7B40
L_800D7B44:;
  c->r[30]=R8(c->r[27]+0x0000001Cu); // 800D7B44
  cmpu(c,0,c->r[30],0x00000001u); // 800D7B48
  if (!crb(c,0)) { goto L_800D7C84; } // 800D7B4C
  c->r[3]=c->r[1]+0x00000108u; // 800D7B50
  c->r[4]=0u+0x00000000u; // 800D7B54
  c->r[5]=0u+0x00000040u; // 800D7B58
  c->lr=0x800D7B60u; f_8000446C(c); // 800D7B5C
  c->r[3]=0u+0x802C0000u; // 800D7B60
  c->r[0]=0u+0x00000080u; // 800D7B64
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D7B68
  c->r[6]=0u+0x00000040u; // 800D7B6C
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D7B70
  c->r[5]=0u+0x00000011u; // 800D7B74
  W8(c->r[1]+0x0000010Cu,c->r[0]); // 800D7B78
  c->r[3]=c->r[1]+0x00000108u; // 800D7B7C
  c->r[7]=c->r[8]+0x00000001u; // 800D7B80
  c->r[4]=0u+0x00000040u; // 800D7B84
  W32(c->r[1]+0x00000114u,c->r[8]); // 800D7B88
  c->r[0]=c->r[7]+0x00000001u; // 800D7B8C
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D7B90
  W32(c->r[1]+0x00000108u,c->r[6]); // 800D7B94
  W8(c->r[1]+0x00000110u,c->r[5]); // 800D7B98
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D7B9C
  W32(c->r[1]+0x00000114u,c->r[7]); // 800D7BA0
  c->lr=0x800D7BA8u; f_800DB69C(c); // 800D7BA4
  c->r[3]=0u+0x00000000u; // 800D7BA8
  goto L_800D7DAC; // 800D7BAC
L_800D7BB0:;
  c->lr=0x800D7BB4u; f_800D98C4(c); // 800D7BB0
  cmpu(c,0,c->r[3],c->r[29]); // 800D7BB4
  if (crb(c,0)) { goto L_800D7BC4; } // 800D7BB8
  cmpu(c,0,c->r[3],c->r[28]); // 800D7BBC
  if (!crb(c,1)) { goto L_800D7C84; } // 800D7BC0
L_800D7BC4:;
  c->r[3]=c->r[1]+0x000000C8u; // 800D7BC4
  c->r[4]=0u+0x00000000u; // 800D7BC8
  c->r[5]=0u+0x00000040u; // 800D7BCC
  c->lr=0x800D7BD4u; f_8000446C(c); // 800D7BD0
  c->r[3]=0u+0x802C0000u; // 800D7BD4
  c->r[0]=0u+0x00000080u; // 800D7BD8
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D7BDC
  c->r[6]=0u+0x00000040u; // 800D7BE0
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D7BE4
  c->r[5]=0u+0x00000011u; // 800D7BE8
  W8(c->r[1]+0x000000CCu,c->r[0]); // 800D7BEC
  c->r[3]=c->r[1]+0x000000C8u; // 800D7BF0
  c->r[7]=c->r[8]+0x00000001u; // 800D7BF4
  c->r[4]=0u+0x00000040u; // 800D7BF8
  W32(c->r[1]+0x000000D4u,c->r[8]); // 800D7BFC
  c->r[0]=c->r[7]+0x00000001u; // 800D7C00
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D7C04
  W32(c->r[1]+0x000000C8u,c->r[6]); // 800D7C08
  W8(c->r[1]+0x000000D0u,c->r[5]); // 800D7C0C
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D7C10
  W32(c->r[1]+0x000000D4u,c->r[7]); // 800D7C14
  c->lr=0x800D7C1Cu; f_800DB69C(c); // 800D7C18
  c->r[3]=0u+0x00000000u; // 800D7C1C
  goto L_800D7DAC; // 800D7C20
L_800D7C24:;
  c->r[3]=c->r[1]+0x00000088u; // 800D7C24
  c->r[4]=0u+0x00000000u; // 800D7C28
  c->r[5]=0u+0x00000040u; // 800D7C2C
  c->lr=0x800D7C34u; f_8000446C(c); // 800D7C30
  c->r[3]=0u+0x802C0000u; // 800D7C34
  c->r[0]=0u+0x00000080u; // 800D7C38
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D7C3C
  c->r[6]=0u+0x00000040u; // 800D7C40
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D7C44
  c->r[5]=0u+0x00000012u; // 800D7C48
  W8(c->r[1]+0x0000008Cu,c->r[0]); // 800D7C4C
  c->r[3]=c->r[1]+0x00000088u; // 800D7C50
  c->r[7]=c->r[8]+0x00000001u; // 800D7C54
  c->r[4]=0u+0x00000040u; // 800D7C58
  W32(c->r[1]+0x00000094u,c->r[8]); // 800D7C5C
  c->r[0]=c->r[7]+0x00000001u; // 800D7C60
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D7C64
  W32(c->r[1]+0x00000088u,c->r[6]); // 800D7C68
  W8(c->r[1]+0x00000090u,c->r[5]); // 800D7C6C
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D7C70
  W32(c->r[1]+0x00000094u,c->r[7]); // 800D7C74
  c->lr=0x800D7C7Cu; f_800DB69C(c); // 800D7C78
  c->r[3]=0u+0x00000000u; // 800D7C7C
  goto L_800D7DAC; // 800D7C80
L_800D7C84:;
  c->lr=0x800D7C88u; f_800D96B4(c); // 800D7C84
  cmps(c,0,(int32_t)c->r[3],0); // 800D7C88
  if (!crb(c,2)) { goto L_800D7CF0; } // 800D7C8C
  c->r[3]=c->r[1]+0x00000048u; // 800D7C90
  c->r[4]=0u+0x00000000u; // 800D7C94
  c->r[5]=0u+0x00000040u; // 800D7C98
  c->lr=0x800D7CA0u; f_8000446C(c); // 800D7C9C
  c->r[3]=0u+0x802C0000u; // 800D7CA0
  c->r[0]=0u+0x00000080u; // 800D7CA4
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D7CA8
  c->r[6]=0u+0x00000040u; // 800D7CAC
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D7CB0
  c->r[5]=0u+0x00000016u; // 800D7CB4
  W8(c->r[1]+0x0000004Cu,c->r[0]); // 800D7CB8
  c->r[3]=c->r[1]+0x00000048u; // 800D7CBC
  c->r[7]=c->r[8]+0x00000001u; // 800D7CC0
  c->r[4]=0u+0x00000040u; // 800D7CC4
  W32(c->r[1]+0x00000054u,c->r[8]); // 800D7CC8
  c->r[0]=c->r[7]+0x00000001u; // 800D7CCC
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D7CD0
  W32(c->r[1]+0x00000048u,c->r[6]); // 800D7CD4
  W8(c->r[1]+0x00000050u,c->r[5]); // 800D7CD8
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D7CDC
  W32(c->r[1]+0x00000054u,c->r[7]); // 800D7CE0
  c->lr=0x800D7CE8u; f_800DB69C(c); // 800D7CE4
  c->r[3]=0u+0x00000000u; // 800D7CE8
  goto L_800D7DAC; // 800D7CEC
L_800D7CF0:;
  c->r[3]=c->r[1]+0x00000008u; // 800D7CF0
  c->r[4]=0u+0x00000000u; // 800D7CF4
  c->r[5]=0u+0x00000040u; // 800D7CF8
  c->lr=0x800D7D00u; f_8000446C(c); // 800D7CFC
  c->r[3]=0u+0x802C0000u; // 800D7D00
  c->r[0]=0u+0x00000080u; // 800D7D04
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D7D08
  c->r[6]=0u+0x00000040u; // 800D7D0C
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D7D10
  c->r[5]=0u+0x00000000u; // 800D7D14
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D7D18
  c->r[3]=c->r[1]+0x00000008u; // 800D7D1C
  c->r[7]=c->r[8]+0x00000001u; // 800D7D20
  c->r[4]=0u+0x00000040u; // 800D7D24
  W32(c->r[1]+0x00000014u,c->r[8]); // 800D7D28
  c->r[0]=c->r[7]+0x00000001u; // 800D7D2C
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D7D30
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D7D34
  W8(c->r[1]+0x00000010u,c->r[5]); // 800D7D38
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D7D3C
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D7D40
  c->lr=0x800D7D48u; f_800DB69C(c); // 800D7D44
  cmps(c,0,(int32_t)c->r[31],16); // 800D7D48
  c->r[3]=0u+0x00000000u; // 800D7D4C
  if (crb(c,2)) { goto L_800D7D7C; } // 800D7D50
  if (!crb(c,0)) { goto L_800D7D70; } // 800D7D54
  cmps(c,0,(int32_t)c->r[31],1); // 800D7D58
  if (crb(c,2)) { goto L_800D7D94; } // 800D7D5C
  if (!crb(c,0)) { goto L_800D7DAC; } // 800D7D60
  cmps(c,0,(int32_t)c->r[31],0); // 800D7D64
  if (!crb(c,0)) { goto L_800D7D7C; } // 800D7D68
  goto L_800D7DAC; // 800D7D6C
L_800D7D70:;
  cmps(c,0,(int32_t)c->r[31],18); // 800D7D70
  if (!crb(c,0)) { goto L_800D7DAC; } // 800D7D74
  goto L_800D7D94; // 800D7D78
L_800D7D7C:;
  c->r[0]=addc(c,~c->r[31],0x00000010u,1); // 800D7D7C
  c->r[3]=c->r[30]|c->r[30]; // 800D7D80
  c->r[0]=cntlz(c->r[0]); // 800D7D84
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D7D88
  c->lr=0x800D7D90u; f_800D9950(c); // 800D7D8C
  goto L_800D7DAC; // 800D7D90
L_800D7D94:;
  c->r[0]=addc(c,~c->r[31],0x00000011u,1); // 800D7D94
  c->r[3]=c->r[29]|c->r[29]; // 800D7D98
  c->r[0]=cntlz(c->r[0]); // 800D7D9C
  c->r[4]=c->r[28]|c->r[28]; // 800D7DA0
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D7DA4
  c->lr=0x800D7DACu; f_800D98D4(c); // 800D7DA8
L_800D7DAC:;
  {uint32_t ea=c->r[1]+0x0000014Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7DAC
  c->r[0]=R32(c->r[1]+0x00000164u); // 800D7DB0
  c->lr=c->r[0]; // 800D7DB4
  c->r[1]=c->r[1]+0x00000160u; // 800D7DB8
  return; // 800D7DBC
}

// TRKDoContinue
void f_800D7DC0(Ctx* __restrict c) {
  trace_call(0x800D7DC0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7DC0
  c->r[0]=c->lr; // 800D7DC4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D7DC8
  c->lr=0x800D7DD0u; f_800D96B4(c); // 800D7DCC
  cmps(c,0,(int32_t)c->r[3],0); // 800D7DD0
  if (!crb(c,2)) { goto L_800D7E38; } // 800D7DD4
  c->r[3]=c->r[1]+0x00000048u; // 800D7DD8
  c->r[4]=0u+0x00000000u; // 800D7DDC
  c->r[5]=0u+0x00000040u; // 800D7DE0
  c->lr=0x800D7DE8u; f_8000446C(c); // 800D7DE4
  c->r[3]=0u+0x802C0000u; // 800D7DE8
  c->r[0]=0u+0x00000080u; // 800D7DEC
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D7DF0
  c->r[6]=0u+0x00000040u; // 800D7DF4
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D7DF8
  c->r[5]=0u+0x00000016u; // 800D7DFC
  W8(c->r[1]+0x0000004Cu,c->r[0]); // 800D7E00
  c->r[3]=c->r[1]+0x00000048u; // 800D7E04
  c->r[7]=c->r[8]+0x00000001u; // 800D7E08
  c->r[4]=0u+0x00000040u; // 800D7E0C
  W32(c->r[1]+0x00000054u,c->r[8]); // 800D7E10
  c->r[0]=c->r[7]+0x00000001u; // 800D7E14
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D7E18
  W32(c->r[1]+0x00000048u,c->r[6]); // 800D7E1C
  W8(c->r[1]+0x00000050u,c->r[5]); // 800D7E20
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D7E24
  W32(c->r[1]+0x00000054u,c->r[7]); // 800D7E28
  c->lr=0x800D7E30u; f_800DB69C(c); // 800D7E2C
  c->r[3]=0u+0x00000000u; // 800D7E30
  goto L_800D7E94; // 800D7E34
L_800D7E38:;
  c->r[3]=c->r[1]+0x00000008u; // 800D7E38
  c->r[4]=0u+0x00000000u; // 800D7E3C
  c->r[5]=0u+0x00000040u; // 800D7E40
  c->lr=0x800D7E48u; f_8000446C(c); // 800D7E44
  c->r[3]=0u+0x802C0000u; // 800D7E48
  c->r[0]=0u+0x00000080u; // 800D7E4C
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D7E50
  c->r[6]=0u+0x00000040u; // 800D7E54
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D7E58
  c->r[5]=0u+0x00000000u; // 800D7E5C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D7E60
  c->r[3]=c->r[1]+0x00000008u; // 800D7E64
  c->r[7]=c->r[8]+0x00000001u; // 800D7E68
  c->r[4]=0u+0x00000040u; // 800D7E6C
  W32(c->r[1]+0x00000014u,c->r[8]); // 800D7E70
  c->r[0]=c->r[7]+0x00000001u; // 800D7E74
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D7E78
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D7E7C
  W8(c->r[1]+0x00000010u,c->r[5]); // 800D7E80
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D7E84
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D7E88
  c->lr=0x800D7E90u; f_800DB69C(c); // 800D7E8C
  c->lr=0x800D7E94u; f_800DB9E8(c); // 800D7E90
L_800D7E94:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D7E94
  c->lr=c->r[0]; // 800D7E98
  c->r[1]=c->r[1]+0x00000090u; // 800D7E9C
  return; // 800D7EA0
}

// TRKDoWriteRegisters
void f_800D7EA4(Ctx* __restrict c) {
  trace_call(0x800D7EA4u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7EA4
  c->r[0]=c->lr; // 800D7EA8
  c->r[4]=0u+0x00000000u; // 800D7EAC
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800D7EB0
  W32(c->r[1]+0x000000DCu,c->r[31]); // 800D7EB4
  W32(c->r[1]+0x000000D8u,c->r[30]); // 800D7EB8
  W32(c->r[1]+0x000000D4u,c->r[29]); // 800D7EBC
  W32(c->r[1]+0x000000D0u,c->r[28]); // 800D7EC0
  c->r[28]=c->r[3]|c->r[3]; // 800D7EC4
  c->r[31]=R8(c->r[3]+0x00000018u); // 800D7EC8
  c->r[30]=R16(c->r[3]+0x0000001Cu); // 800D7ECC
  c->r[29]=R16(c->r[3]+0x00000020u); // 800D7ED0
  c->lr=0x800D7ED8u; f_800D7398(c); // 800D7ED4
  cmpu(c,0,c->r[30],c->r[29]); // 800D7ED8
  if (!crb(c,1)) { goto L_800D7F40; } // 800D7EDC
  c->r[3]=c->r[1]+0x0000004Cu; // 800D7EE0
  c->r[4]=0u+0x00000000u; // 800D7EE4
  c->r[5]=0u+0x00000040u; // 800D7EE8
  c->lr=0x800D7EF0u; f_8000446C(c); // 800D7EEC
  c->r[3]=0u+0x802C0000u; // 800D7EF0
  c->r[0]=0u+0x00000080u; // 800D7EF4
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D7EF8
  c->r[6]=0u+0x00000040u; // 800D7EFC
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D7F00
  c->r[5]=0u+0x00000014u; // 800D7F04
  W8(c->r[1]+0x00000050u,c->r[0]); // 800D7F08
  c->r[3]=c->r[1]+0x0000004Cu; // 800D7F0C
  c->r[7]=c->r[8]+0x00000001u; // 800D7F10
  c->r[4]=0u+0x00000040u; // 800D7F14
  W32(c->r[1]+0x00000058u,c->r[8]); // 800D7F18
  c->r[0]=c->r[7]+0x00000001u; // 800D7F1C
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D7F20
  W32(c->r[1]+0x0000004Cu,c->r[6]); // 800D7F24
  W8(c->r[1]+0x00000054u,c->r[5]); // 800D7F28
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D7F2C
  W32(c->r[1]+0x00000058u,c->r[7]); // 800D7F30
  c->lr=0x800D7F38u; f_800DB69C(c); // 800D7F34
  c->r[3]=0u+0x00000000u; // 800D7F38
  goto L_800D8140; // 800D7F3C
L_800D7F40:;
  c->r[3]=c->r[28]|c->r[28]; // 800D7F40
  c->r[4]=0u+0x00000040u; // 800D7F44
  c->lr=0x800D7F4Cu; f_800D7398(c); // 800D7F48
  cmps(c,0,(int32_t)c->r[31],2); // 800D7F4C
  if (crb(c,2)) { goto L_800D7FB4; } // 800D7F50
  if (!crb(c,0)) { goto L_800D7F68; } // 800D7F54
  cmps(c,0,(int32_t)c->r[31],0); // 800D7F58
  if (crb(c,2)) { goto L_800D7F74; } // 800D7F5C
  if (!crb(c,0)) { goto L_800D7F94; } // 800D7F60
  goto L_800D7FF4; // 800D7F64
L_800D7F68:;
  cmps(c,0,(int32_t)c->r[31],4); // 800D7F68
  if (!crb(c,0)) { goto L_800D7FF4; } // 800D7F6C
  goto L_800D7FD4; // 800D7F70
L_800D7F74:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7F74
  c->r[4]=c->r[29]|c->r[29]; // 800D7F78
  c->r[5]=c->r[28]|c->r[28]; // 800D7F7C
  c->r[6]=c->r[1]+0x00000008u; // 800D7F80
  c->r[7]=0u+0x00000000u; // 800D7F84
  c->lr=0x800D7F8Cu; f_800DA788(c); // 800D7F88
  c->r[31]=c->r[3]|c->r[3]; // 800D7F8C
  goto L_800D7FF8; // 800D7F90
L_800D7F94:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7F94
  c->r[4]=c->r[29]|c->r[29]; // 800D7F98
  c->r[5]=c->r[28]|c->r[28]; // 800D7F9C
  c->r[6]=c->r[1]+0x00000008u; // 800D7FA0
  c->r[7]=0u+0x00000000u; // 800D7FA4
  c->lr=0x800D7FACu; f_800DA27C(c); // 800D7FA8
  c->r[31]=c->r[3]|c->r[3]; // 800D7FAC
  goto L_800D7FF8; // 800D7FB0
L_800D7FB4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7FB4
  c->r[4]=c->r[29]|c->r[29]; // 800D7FB8
  c->r[5]=c->r[28]|c->r[28]; // 800D7FBC
  c->r[6]=c->r[1]+0x00000008u; // 800D7FC0
  c->r[7]=0u+0x00000000u; // 800D7FC4
  c->lr=0x800D7FCCu; f_800DA10C(c); // 800D7FC8
  c->r[31]=c->r[3]|c->r[3]; // 800D7FCC
  goto L_800D7FF8; // 800D7FD0
L_800D7FD4:;
  c->r[3]=c->r[30]|c->r[30]; // 800D7FD4
  c->r[4]=c->r[29]|c->r[29]; // 800D7FD8
  c->r[5]=c->r[28]|c->r[28]; // 800D7FDC
  c->r[6]=c->r[1]+0x00000008u; // 800D7FE0
  c->r[7]=0u+0x00000000u; // 800D7FE4
  c->lr=0x800D7FECu; f_800D9CD4(c); // 800D7FE8
  c->r[31]=c->r[3]|c->r[3]; // 800D7FEC
  goto L_800D7FF8; // 800D7FF0
L_800D7FF4:;
  c->r[31]=0u+0x00000703u; // 800D7FF4
L_800D7FF8:;
  c->r[3]=c->r[28]|c->r[28]; // 800D7FF8
  c->r[4]=0u+0x00000000u; // 800D7FFC
  c->lr=0x800D8004u; f_800D73C8(c); // 800D8000
  cmps(c,0,(int32_t)c->r[31],0); // 800D8004
  if (!crb(c,2)) { goto L_800D805C; } // 800D8008
  c->r[3]=c->r[1]+0x0000008Cu; // 800D800C
  c->r[4]=0u+0x00000000u; // 800D8010
  c->r[5]=0u+0x00000040u; // 800D8014
  c->lr=0x800D801Cu; f_8000446C(c); // 800D8018
  c->r[3]=0u+0x802C0000u; // 800D801C
  c->r[0]=0u+0x00000040u; // 800D8020
  c->r[7]=c->r[3]+0xFFFFEEE8u; // 800D8024
  c->r[5]=0u+0x00000080u; // 800D8028
  c->r[6]=R32(c->r[7]+0x00000000u); // 800D802C
  c->r[3]=c->r[28]|c->r[28]; // 800D8030
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 800D8034
  c->r[4]=c->r[1]+0x0000008Cu; // 800D8038
  c->r[0]=c->r[6]+0x00000001u; // 800D803C
  W8(c->r[1]+0x00000090u,c->r[5]); // 800D8040
  c->r[5]=0u+0x00000040u; // 800D8044
  W8(c->r[1]+0x00000094u,c->r[31]); // 800D8048
  W32(c->r[7]+0x00000000u,c->r[0]); // 800D804C
  W32(c->r[1]+0x00000098u,c->r[6]); // 800D8050
  c->lr=0x800D8058u; f_800D72F4(c); // 800D8054
  c->r[31]=c->r[3]|c->r[3]; // 800D8058
L_800D805C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D805C
  if (crb(c,2)) { goto L_800D8138; } // 800D8060
  cmps(c,0,(int32_t)c->r[31],1795); // 800D8064
  if (crb(c,2)) { goto L_800D80A0; } // 800D8068
  if (!crb(c,0)) { goto L_800D8088; } // 800D806C
  cmps(c,0,(int32_t)c->r[31],1793); // 800D8070
  if (crb(c,2)) { goto L_800D80A8; } // 800D8074
  if (!crb(c,0)) { goto L_800D80B8; } // 800D8078
  cmps(c,0,(int32_t)c->r[31],770); // 800D807C
  if (crb(c,2)) { goto L_800D80B0; } // 800D8080
  goto L_800D80D8; // 800D8084
L_800D8088:;
  cmps(c,0,(int32_t)c->r[31],1798); // 800D8088
  if (crb(c,2)) { goto L_800D80D0; } // 800D808C
  if (!crb(c,0)) { goto L_800D80D8; } // 800D8090
  cmps(c,0,(int32_t)c->r[31],1797); // 800D8094
  if (!crb(c,0)) { goto L_800D80C8; } // 800D8098
  goto L_800D80C0; // 800D809C
L_800D80A0:;
  c->r[31]=0u+0x00000012u; // 800D80A0
  goto L_800D80DC; // 800D80A4
L_800D80A8:;
  c->r[31]=0u+0x00000014u; // 800D80A8
  goto L_800D80DC; // 800D80AC
L_800D80B0:;
  c->r[31]=0u+0x00000002u; // 800D80B0
  goto L_800D80DC; // 800D80B4
L_800D80B8:;
  c->r[31]=0u+0x00000015u; // 800D80B8
  goto L_800D80DC; // 800D80BC
L_800D80C0:;
  c->r[31]=0u+0x00000021u; // 800D80C0
  goto L_800D80DC; // 800D80C4
L_800D80C8:;
  c->r[31]=0u+0x00000022u; // 800D80C8
  goto L_800D80DC; // 800D80CC
L_800D80D0:;
  c->r[31]=0u+0x00000020u; // 800D80D0
  goto L_800D80DC; // 800D80D4
L_800D80D8:;
  c->r[31]=0u+0x00000003u; // 800D80D8
L_800D80DC:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800D80DC
  c->r[4]=0u+0x00000000u; // 800D80E0
  c->r[5]=0u+0x00000040u; // 800D80E4
  c->lr=0x800D80ECu; f_8000446C(c); // 800D80E8
  c->r[3]=0u+0x802C0000u; // 800D80EC
  c->r[0]=0u+0x00000080u; // 800D80F0
  c->r[8]=c->r[3]+0xFFFFEEE8u; // 800D80F4
  c->r[5]=0u+0x00000040u; // 800D80F8
  c->r[7]=R32(c->r[8]+0x00000000u); // 800D80FC
  c->r[3]=c->r[1]+0x0000000Cu; // 800D8100
  W8(c->r[1]+0x00000010u,c->r[0]); // 800D8104
  c->r[4]=0u+0x00000040u; // 800D8108
  c->r[6]=c->r[7]+0x00000001u; // 800D810C
  W32(c->r[1]+0x00000018u,c->r[7]); // 800D8110
  c->r[0]=c->r[6]+0x00000001u; // 800D8114
  W32(c->r[8]+0x00000000u,c->r[6]); // 800D8118
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D811C
  W8(c->r[1]+0x00000014u,c->r[31]); // 800D8120
  W32(c->r[8]+0x00000000u,c->r[0]); // 800D8124
  W32(c->r[1]+0x00000018u,c->r[6]); // 800D8128
  c->lr=0x800D8130u; f_800DB69C(c); // 800D812C
  c->r[3]=0u+0x00000000u; // 800D8130
  goto L_800D8140; // 800D8134
L_800D8138:;
  c->r[3]=c->r[28]|c->r[28]; // 800D8138
  c->lr=0x800D8140u; f_800D6D6C(c); // 800D813C
L_800D8140:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800D8140
  c->r[31]=R32(c->r[1]+0x000000DCu); // 800D8144
  c->r[30]=R32(c->r[1]+0x000000D8u); // 800D8148
  c->r[29]=R32(c->r[1]+0x000000D4u); // 800D814C
  c->r[28]=R32(c->r[1]+0x000000D0u); // 800D8150
  c->lr=c->r[0]; // 800D8154
  c->r[1]=c->r[1]+0x000000E0u; // 800D8158
  return; // 800D815C
}

// TRKDoReadRegisters
void f_800D8160(Ctx* __restrict c) {
  trace_call(0x800D8160u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8160
  c->r[0]=c->lr; // 800D8164
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800D8168
  W32(c->r[1]+0x000000DCu,c->r[31]); // 800D816C
  c->r[31]=c->r[3]|c->r[3]; // 800D8170
  c->r[4]=R16(c->r[3]+0x0000001Cu); // 800D8174
  c->r[0]=R16(c->r[3]+0x00000020u); // 800D8178
  cmpu(c,0,c->r[4],c->r[0]); // 800D817C
  if (!crb(c,1)) { goto L_800D81E4; } // 800D8180
  c->r[3]=c->r[1]+0x0000004Cu; // 800D8184
  c->r[4]=0u+0x00000000u; // 800D8188
  c->r[5]=0u+0x00000040u; // 800D818C
  c->lr=0x800D8194u; f_8000446C(c); // 800D8190
  c->r[3]=0u+0x802C0000u; // 800D8194
  c->r[0]=0u+0x00000080u; // 800D8198
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D819C
  c->r[6]=0u+0x00000040u; // 800D81A0
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D81A4
  c->r[5]=0u+0x00000014u; // 800D81A8
  W8(c->r[1]+0x00000050u,c->r[0]); // 800D81AC
  c->r[3]=c->r[1]+0x0000004Cu; // 800D81B0
  c->r[7]=c->r[8]+0x00000001u; // 800D81B4
  c->r[4]=0u+0x00000040u; // 800D81B8
  W32(c->r[1]+0x00000058u,c->r[8]); // 800D81BC
  c->r[0]=c->r[7]+0x00000001u; // 800D81C0
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D81C4
  W32(c->r[1]+0x0000004Cu,c->r[6]); // 800D81C8
  W8(c->r[1]+0x00000054u,c->r[5]); // 800D81CC
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D81D0
  W32(c->r[1]+0x00000058u,c->r[7]); // 800D81D4
  c->lr=0x800D81DCu; f_800DB69C(c); // 800D81D8
  c->r[3]=0u+0x00000000u; // 800D81DC
  goto L_800D8370; // 800D81E0
L_800D81E4:;
  c->r[4]=0u+0x802C0000u; // 800D81E4
  c->r[0]=0u+0x00000080u; // 800D81E8
  c->r[6]=c->r[4]+0xFFFFEEE8u; // 800D81EC
  c->r[7]=0u+0x00000468u; // 800D81F0
  c->r[5]=R32(c->r[6]+0x00000000u); // 800D81F4
  c->r[4]=0u+0x00000000u; // 800D81F8
  W8(c->r[1]+0x00000090u,c->r[0]); // 800D81FC
  c->r[0]=c->r[5]+0x00000001u; // 800D8200
  W32(c->r[1]+0x0000008Cu,c->r[7]); // 800D8204
  W32(c->r[6]+0x00000000u,c->r[0]); // 800D8208
  W32(c->r[1]+0x00000098u,c->r[5]); // 800D820C
  c->lr=0x800D8214u; f_800D73C8(c); // 800D8210
  c->r[3]=c->r[31]|c->r[31]; // 800D8214
  c->r[4]=c->r[1]+0x0000008Cu; // 800D8218
  c->r[5]=0u+0x00000040u; // 800D821C
  c->lr=0x800D8224u; f_800D7104(c); // 800D8220
  c->r[5]=c->r[31]|c->r[31]; // 800D8224
  c->r[6]=c->r[1]+0x00000008u; // 800D8228
  c->r[3]=0u+0x00000000u; // 800D822C
  c->r[4]=0u+0x00000024u; // 800D8230
  c->r[7]=0u+0x00000001u; // 800D8234
  c->lr=0x800D823Cu; f_800DA788(c); // 800D8238
  cmps(c,0,(int32_t)c->r[3],0); // 800D823C
  if (!crb(c,2)) { goto L_800D825C; } // 800D8240
  c->r[5]=c->r[31]|c->r[31]; // 800D8244
  c->r[6]=c->r[1]+0x00000008u; // 800D8248
  c->r[3]=0u+0x00000000u; // 800D824C
  c->r[4]=0u+0x00000021u; // 800D8250
  c->r[7]=0u+0x00000001u; // 800D8254
  c->lr=0x800D825Cu; f_800DA27C(c); // 800D8258
L_800D825C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D825C
  if (!crb(c,2)) { goto L_800D827C; } // 800D8260
  c->r[5]=c->r[31]|c->r[31]; // 800D8264
  c->r[6]=c->r[1]+0x00000008u; // 800D8268
  c->r[3]=0u+0x00000000u; // 800D826C
  c->r[4]=0u+0x00000060u; // 800D8270
  c->r[7]=0u+0x00000001u; // 800D8274
  c->lr=0x800D827Cu; f_800DA10C(c); // 800D8278
L_800D827C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D827C
  if (!crb(c,2)) { goto L_800D829C; } // 800D8280
  c->r[5]=c->r[31]|c->r[31]; // 800D8284
  c->r[6]=c->r[1]+0x00000008u; // 800D8288
  c->r[3]=0u+0x00000000u; // 800D828C
  c->r[4]=0u+0x0000001Fu; // 800D8290
  c->r[7]=0u+0x00000001u; // 800D8294
  c->lr=0x800D829Cu; f_800D9CD4(c); // 800D8298
L_800D829C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D829C
  if (crb(c,2)) { goto L_800D8368; } // 800D82A0
  cmps(c,0,(int32_t)c->r[3],1796); // 800D82A4
  if (crb(c,2)) { goto L_800D82F0; } // 800D82A8
  if (!crb(c,0)) { goto L_800D82C8; } // 800D82AC
  cmps(c,0,(int32_t)c->r[3],1794); // 800D82B0
  if (crb(c,2)) { goto L_800D82E8; } // 800D82B4
  if (!crb(c,0)) { goto L_800D82D8; } // 800D82B8
  cmps(c,0,(int32_t)c->r[3],1793); // 800D82BC
  if (!crb(c,0)) { goto L_800D82E0; } // 800D82C0
  goto L_800D8308; // 800D82C4
L_800D82C8:;
  cmps(c,0,(int32_t)c->r[3],1798); // 800D82C8
  if (crb(c,2)) { goto L_800D8300; } // 800D82CC
  if (!crb(c,0)) { goto L_800D8308; } // 800D82D0
  goto L_800D82F8; // 800D82D4
L_800D82D8:;
  c->r[31]=0u+0x00000012u; // 800D82D8
  goto L_800D830C; // 800D82DC
L_800D82E0:;
  c->r[31]=0u+0x00000014u; // 800D82E0
  goto L_800D830C; // 800D82E4
L_800D82E8:;
  c->r[31]=0u+0x00000015u; // 800D82E8
  goto L_800D830C; // 800D82EC
L_800D82F0:;
  c->r[31]=0u+0x00000021u; // 800D82F0
  goto L_800D830C; // 800D82F4
L_800D82F8:;
  c->r[31]=0u+0x00000022u; // 800D82F8
  goto L_800D830C; // 800D82FC
L_800D8300:;
  c->r[31]=0u+0x00000020u; // 800D8300
  goto L_800D830C; // 800D8304
L_800D8308:;
  c->r[31]=0u+0x00000003u; // 800D8308
L_800D830C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800D830C
  c->r[4]=0u+0x00000000u; // 800D8310
  c->r[5]=0u+0x00000040u; // 800D8314
  c->lr=0x800D831Cu; f_8000446C(c); // 800D8318
  c->r[3]=0u+0x802C0000u; // 800D831C
  c->r[0]=0u+0x00000080u; // 800D8320
  c->r[8]=c->r[3]+0xFFFFEEE8u; // 800D8324
  c->r[5]=0u+0x00000040u; // 800D8328
  c->r[7]=R32(c->r[8]+0x00000000u); // 800D832C
  c->r[3]=c->r[1]+0x0000000Cu; // 800D8330
  W8(c->r[1]+0x00000010u,c->r[0]); // 800D8334
  c->r[4]=0u+0x00000040u; // 800D8338
  c->r[6]=c->r[7]+0x00000001u; // 800D833C
  W32(c->r[1]+0x00000018u,c->r[7]); // 800D8340
  c->r[0]=c->r[6]+0x00000001u; // 800D8344
  W32(c->r[8]+0x00000000u,c->r[6]); // 800D8348
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D834C
  W8(c->r[1]+0x00000014u,c->r[31]); // 800D8350
  W32(c->r[8]+0x00000000u,c->r[0]); // 800D8354
  W32(c->r[1]+0x00000018u,c->r[6]); // 800D8358
  c->lr=0x800D8360u; f_800DB69C(c); // 800D835C
  c->r[3]=0u+0x00000000u; // 800D8360
  goto L_800D8370; // 800D8364
L_800D8368:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8368
  c->lr=0x800D8370u; f_800D6D6C(c); // 800D836C
L_800D8370:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800D8370
  c->r[31]=R32(c->r[1]+0x000000DCu); // 800D8374
  c->lr=c->r[0]; // 800D8378
  c->r[1]=c->r[1]+0x000000E0u; // 800D837C
  return; // 800D8380
}

// TRKDoWriteMemory
void f_800D8384(Ctx* __restrict c) {
  trace_call(0x800D8384u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800D8384
  c->r[12]=c->r[1]|c->r[1]; // 800D8388
  c->r[11]=addc(c,~c->r[11],0xFFFFF6C0u,1); // 800D838C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8390
  c->r[0]=c->lr; // 800D8394
  W32(c->r[12]+0x00000004u,c->r[0]); // 800D8398
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800D839C
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800D83A0
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 800D83A4
  c->r[29]=c->r[3]|c->r[3]; // 800D83A8
  c->r[31]=R8(c->r[3]+0x00000018u); // 800D83AC
  c->r[30]=R32(c->r[3]+0x00000020u); // 800D83B0
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 800D83B4
  c->r[4]=R16(c->r[3]+0x0000001Cu); // 800D83B8
  if (crb(c,2)) { goto L_800D8420; } // 800D83BC
  c->r[3]=c->r[1]+0x00000064u; // 800D83C0
  c->r[4]=0u+0x00000000u; // 800D83C4
  c->r[5]=0u+0x00000040u; // 800D83C8
  c->lr=0x800D83D0u; f_8000446C(c); // 800D83CC
  c->r[3]=0u+0x802C0000u; // 800D83D0
  c->r[0]=0u+0x00000080u; // 800D83D4
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D83D8
  c->r[6]=0u+0x00000040u; // 800D83DC
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D83E0
  c->r[5]=0u+0x00000012u; // 800D83E4
  W8(c->r[1]+0x00000068u,c->r[0]); // 800D83E8
  c->r[3]=c->r[1]+0x00000064u; // 800D83EC
  c->r[7]=c->r[8]+0x00000001u; // 800D83F0
  c->r[4]=0u+0x00000040u; // 800D83F4
  W32(c->r[1]+0x00000070u,c->r[8]); // 800D83F8
  c->r[0]=c->r[7]+0x00000001u; // 800D83FC
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D8400
  W32(c->r[1]+0x00000064u,c->r[6]); // 800D8404
  W8(c->r[1]+0x0000006Cu,c->r[5]); // 800D8408
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D840C
  W32(c->r[1]+0x00000070u,c->r[7]); // 800D8410
  c->lr=0x800D8418u; f_800DB69C(c); // 800D8414
  c->r[3]=0u+0x00000000u; // 800D8418
  goto L_800D8580; // 800D841C
L_800D8420:;
  W32(c->r[1]+0x00000020u,c->r[4]); // 800D8420
  c->r[4]=0u+0x00000040u; // 800D8424
  c->lr=0x800D842Cu; f_800D7398(c); // 800D8428
  c->r[5]=R32(c->r[1]+0x00000020u); // 800D842C
  c->r[3]=c->r[29]|c->r[29]; // 800D8430
  c->r[4]=c->r[1]+0x00000100u; // 800D8434
  c->lr=0x800D843Cu; f_800D7268(c); // 800D8438
  c->r[0]=rotl(c->r[31],29)&0x00000001u; // 800D843C
  c->r[4]=c->r[30]|c->r[30]; // 800D8440
  c->r[3]=c->r[1]+0x00000100u; // 800D8444
  c->r[5]=c->r[1]+0x00000020u; // 800D8448
  c->r[6]=c->r[0]^0x00000001u; // 800D844C
  c->r[7]=0u+0x00000000u; // 800D8450
  c->lr=0x800D8458u; f_800DA8C8(c); // 800D8454
  c->r[0]=c->r[3]|c->r[3]; // 800D8458
  c->r[3]=c->r[29]|c->r[29]; // 800D845C
  c->r[31]=c->r[0]|c->r[0]; // 800D8460
  c->r[4]=0u+0x00000000u; // 800D8464
  c->lr=0x800D846Cu; f_800D73C8(c); // 800D8468
  cmps(c,0,(int32_t)c->r[31],0); // 800D846C
  if (!crb(c,2)) { goto L_800D84C4; } // 800D8470
  c->r[3]=c->r[1]+0x000000A4u; // 800D8474
  c->r[4]=0u+0x00000000u; // 800D8478
  c->r[5]=0u+0x00000040u; // 800D847C
  c->lr=0x800D8484u; f_8000446C(c); // 800D8480
  c->r[3]=0u+0x802C0000u; // 800D8484
  c->r[0]=0u+0x00000040u; // 800D8488
  c->r[7]=c->r[3]+0xFFFFEEE8u; // 800D848C
  c->r[5]=0u+0x00000080u; // 800D8490
  c->r[6]=R32(c->r[7]+0x00000000u); // 800D8494
  c->r[3]=c->r[29]|c->r[29]; // 800D8498
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800D849C
  c->r[4]=c->r[1]+0x000000A4u; // 800D84A0
  c->r[0]=c->r[6]+0x00000001u; // 800D84A4
  W8(c->r[1]+0x000000A8u,c->r[5]); // 800D84A8
  c->r[5]=0u+0x00000040u; // 800D84AC
  W8(c->r[1]+0x000000ACu,c->r[31]); // 800D84B0
  W32(c->r[7]+0x00000000u,c->r[0]); // 800D84B4
  W32(c->r[1]+0x000000B0u,c->r[6]); // 800D84B8
  c->lr=0x800D84C0u; f_800D72F4(c); // 800D84BC
  c->r[31]=c->r[3]|c->r[3]; // 800D84C0
L_800D84C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D84C4
  if (crb(c,2)) { goto L_800D8578; } // 800D84C8
  c->r[0]=c->r[31]+0xFFFFF900u; // 800D84CC
  cmpu(c,0,c->r[0],0x00000006u); // 800D84D0
  if (crb(c,1)) { goto L_800D8518; } // 800D84D4
  c->r[3]=0u+0x80220000u; // 800D84D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D84DC
  c->r[3]=c->r[3]+0xFFFFC738u; // 800D84E0
  c->r[0]=R32(c->r[3]+c->r[0]); // 800D84E4
  c->ctr=c->r[0]; // 800D84E8
  if (true) { switch (c->ctr) { case 0x800D84F0u: goto L_800D84F0; case 0x800D84F8u: goto L_800D84F8; case 0x800D8500u: goto L_800D8500; case 0x800D8508u: goto L_800D8508; case 0x800D8510u: goto L_800D8510; case 0x800D8518u: goto L_800D8518; default: break; } dispatch(c,c->ctr); return; } // 800D84EC
L_800D84F0:;
  c->r[31]=0u+0x00000015u; // 800D84F0
  goto L_800D851C; // 800D84F4
L_800D84F8:;
  c->r[31]=0u+0x00000013u; // 800D84F8
  goto L_800D851C; // 800D84FC
L_800D8500:;
  c->r[31]=0u+0x00000021u; // 800D8500
  goto L_800D851C; // 800D8504
L_800D8508:;
  c->r[31]=0u+0x00000022u; // 800D8508
  goto L_800D851C; // 800D850C
L_800D8510:;
  c->r[31]=0u+0x00000020u; // 800D8510
  goto L_800D851C; // 800D8514
L_800D8518:;
  c->r[31]=0u+0x00000003u; // 800D8518
L_800D851C:;
  c->r[3]=c->r[1]+0x00000024u; // 800D851C
  c->r[4]=0u+0x00000000u; // 800D8520
  c->r[5]=0u+0x00000040u; // 800D8524
  c->lr=0x800D852Cu; f_8000446C(c); // 800D8528
  c->r[3]=0u+0x802C0000u; // 800D852C
  c->r[0]=0u+0x00000080u; // 800D8530
  c->r[8]=c->r[3]+0xFFFFEEE8u; // 800D8534
  c->r[5]=0u+0x00000040u; // 800D8538
  c->r[7]=R32(c->r[8]+0x00000000u); // 800D853C
  c->r[3]=c->r[1]+0x00000024u; // 800D8540
  W8(c->r[1]+0x00000028u,c->r[0]); // 800D8544
  c->r[4]=0u+0x00000040u; // 800D8548
  c->r[6]=c->r[7]+0x00000001u; // 800D854C
  W32(c->r[1]+0x00000030u,c->r[7]); // 800D8550
  c->r[0]=c->r[6]+0x00000001u; // 800D8554
  W32(c->r[8]+0x00000000u,c->r[6]); // 800D8558
  W32(c->r[1]+0x00000024u,c->r[5]); // 800D855C
  W8(c->r[1]+0x0000002Cu,c->r[31]); // 800D8560
  W32(c->r[8]+0x00000000u,c->r[0]); // 800D8564
  W32(c->r[1]+0x00000030u,c->r[6]); // 800D8568
  c->lr=0x800D8570u; f_800DB69C(c); // 800D856C
  c->r[3]=0u+0x00000000u; // 800D8570
  goto L_800D8580; // 800D8574
L_800D8578:;
  c->r[3]=c->r[29]|c->r[29]; // 800D8578
  c->lr=0x800D8580u; f_800D6D6C(c); // 800D857C
L_800D8580:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D8580
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D8584
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800D8588
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800D858C
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 800D8590
  c->lr=c->r[0]; // 800D8594
  c->r[1]=c->r[10]|c->r[10]; // 800D8598
  return; // 800D859C
}

// TRKDoReadMemory
void f_800D85A0(Ctx* __restrict c) {
  trace_call(0x800D85A0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800D85A0
  c->r[12]=c->r[1]|c->r[1]; // 800D85A4
  c->r[11]=addc(c,~c->r[11],0xFFFFF6C0u,1); // 800D85A8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800D85AC
  c->r[0]=c->lr; // 800D85B0
  W32(c->r[12]+0x00000004u,c->r[0]); // 800D85B4
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800D85B8
  c->r[31]=c->r[3]|c->r[3]; // 800D85BC
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800D85C0
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 800D85C4
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 800D85C8
  c->r[30]=R8(c->r[3]+0x00000018u); // 800D85CC
  c->r[28]=R32(c->r[3]+0x00000020u); // 800D85D0
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 800D85D4
  c->r[3]=R16(c->r[3]+0x0000001Cu); // 800D85D8
  if (crb(c,2)) { goto L_800D8640; } // 800D85DC
  c->r[3]=c->r[1]+0x00000064u; // 800D85E0
  c->r[4]=0u+0x00000000u; // 800D85E4
  c->r[5]=0u+0x00000040u; // 800D85E8
  c->lr=0x800D85F0u; f_8000446C(c); // 800D85EC
  c->r[3]=0u+0x802C0000u; // 800D85F0
  c->r[0]=0u+0x00000080u; // 800D85F4
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D85F8
  c->r[6]=0u+0x00000040u; // 800D85FC
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D8600
  c->r[5]=0u+0x00000012u; // 800D8604
  W8(c->r[1]+0x00000068u,c->r[0]); // 800D8608
  c->r[3]=c->r[1]+0x00000064u; // 800D860C
  c->r[7]=c->r[8]+0x00000001u; // 800D8610
  c->r[4]=0u+0x00000040u; // 800D8614
  W32(c->r[1]+0x00000070u,c->r[8]); // 800D8618
  c->r[0]=c->r[7]+0x00000001u; // 800D861C
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D8620
  W32(c->r[1]+0x00000064u,c->r[6]); // 800D8624
  W8(c->r[1]+0x0000006Cu,c->r[5]); // 800D8628
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D862C
  W32(c->r[1]+0x00000070u,c->r[7]); // 800D8630
  c->lr=0x800D8638u; f_800DB69C(c); // 800D8634
  c->r[3]=0u+0x00000000u; // 800D8638
  goto L_800D87C4; // 800D863C
L_800D8640:;
  c->r[0]=rotl(c->r[30],29)&0x00000001u; // 800D8640
  W32(c->r[1]+0x00000020u,c->r[3]); // 800D8644
  c->r[4]=c->r[28]|c->r[28]; // 800D8648
  c->r[3]=c->r[1]+0x00000100u; // 800D864C
  c->r[5]=c->r[1]+0x00000020u; // 800D8650
  c->r[6]=c->r[0]^0x00000001u; // 800D8654
  c->r[7]=0u+0x00000001u; // 800D8658
  c->lr=0x800D8660u; f_800DA8C8(c); // 800D865C
  c->r[0]=c->r[3]|c->r[3]; // 800D8660
  c->r[3]=c->r[31]|c->r[31]; // 800D8664
  c->r[29]=c->r[0]|c->r[0]; // 800D8668
  c->r[4]=0u+0x00000000u; // 800D866C
  c->lr=0x800D8674u; f_800D73C8(c); // 800D8670
  cmps(c,0,(int32_t)c->r[29],0); // 800D8674
  if (!crb(c,2)) { goto L_800D8708; } // 800D8678
  c->r[3]=c->r[1]+0x000000A4u; // 800D867C
  c->r[4]=0u+0x00000000u; // 800D8680
  c->r[5]=0u+0x00000040u; // 800D8684
  c->lr=0x800D868Cu; f_8000446C(c); // 800D8688
  c->r[3]=0u+0x802C0000u; // 800D868C
  c->r[4]=R32(c->r[1]+0x00000020u); // 800D8690
  c->r[7]=c->r[3]+0xFFFFEEE8u; // 800D8694
  c->r[8]=0u+0x00000080u; // 800D8698
  c->r[6]=R32(c->r[7]+0x00000000u); // 800D869C
  c->r[0]=c->r[4]+0x00000040u; // 800D86A0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800D86A4
  c->r[3]=c->r[31]|c->r[31]; // 800D86A8
  c->r[0]=c->r[6]+0x00000001u; // 800D86AC
  c->r[4]=c->r[1]+0x000000A4u; // 800D86B0
  W8(c->r[1]+0x000000ACu,c->r[29]); // 800D86B4
  c->r[5]=0u+0x00000040u; // 800D86B8
  W8(c->r[1]+0x000000A8u,c->r[8]); // 800D86BC
  W32(c->r[7]+0x00000000u,c->r[0]); // 800D86C0
  W32(c->r[1]+0x000000B0u,c->r[6]); // 800D86C4
  c->lr=0x800D86CCu; f_800D72F4(c); // 800D86C8
  c->r[0]=rotl(c->r[30],0)&0x00000040u; cr0(c,c->r[0]); // 800D86CC
  if (crb(c,2)) { goto L_800D86F4; } // 800D86D0
  c->r[0]=rotl(c->r[28],0)&0x0000001Fu; // 800D86D4
  c->r[4]=c->r[1]+0x00000100u; // 800D86D8
  c->r[5]=R32(c->r[1]+0x00000020u); // 800D86DC
  c->r[3]=c->r[31]|c->r[31]; // 800D86E0
  c->r[4]=c->r[4]+c->r[0]; // 800D86E4
  c->lr=0x800D86ECu; f_800D72F4(c); // 800D86E8
  c->r[29]=c->r[3]|c->r[3]; // 800D86EC
  goto L_800D8708; // 800D86F0
L_800D86F4:;
  c->r[5]=R32(c->r[1]+0x00000020u); // 800D86F4
  c->r[3]=c->r[31]|c->r[31]; // 800D86F8
  c->r[4]=c->r[1]+0x00000100u; // 800D86FC
  c->lr=0x800D8704u; f_800D72F4(c); // 800D8700
  c->r[29]=c->r[3]|c->r[3]; // 800D8704
L_800D8708:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D8708
  if (crb(c,2)) { goto L_800D87BC; } // 800D870C
  c->r[0]=c->r[29]+0xFFFFF900u; // 800D8710
  cmpu(c,0,c->r[0],0x00000006u); // 800D8714
  if (crb(c,1)) { goto L_800D875C; } // 800D8718
  c->r[3]=0u+0x80220000u; // 800D871C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D8720
  c->r[3]=c->r[3]+0xFFFFC754u; // 800D8724
  c->r[0]=R32(c->r[3]+c->r[0]); // 800D8728
  c->ctr=c->r[0]; // 800D872C
  if (true) { switch (c->ctr) { case 0x800D8734u: goto L_800D8734; case 0x800D873Cu: goto L_800D873C; case 0x800D8744u: goto L_800D8744; case 0x800D874Cu: goto L_800D874C; case 0x800D8754u: goto L_800D8754; case 0x800D875Cu: goto L_800D875C; default: break; } dispatch(c,c->ctr); return; } // 800D8730
L_800D8734:;
  c->r[29]=0u+0x00000015u; // 800D8734
  goto L_800D8760; // 800D8738
L_800D873C:;
  c->r[29]=0u+0x00000013u; // 800D873C
  goto L_800D8760; // 800D8740
L_800D8744:;
  c->r[29]=0u+0x00000021u; // 800D8744
  goto L_800D8760; // 800D8748
L_800D874C:;
  c->r[29]=0u+0x00000022u; // 800D874C
  goto L_800D8760; // 800D8750
L_800D8754:;
  c->r[29]=0u+0x00000020u; // 800D8754
  goto L_800D8760; // 800D8758
L_800D875C:;
  c->r[29]=0u+0x00000003u; // 800D875C
L_800D8760:;
  c->r[3]=c->r[1]+0x00000024u; // 800D8760
  c->r[4]=0u+0x00000000u; // 800D8764
  c->r[5]=0u+0x00000040u; // 800D8768
  c->lr=0x800D8770u; f_8000446C(c); // 800D876C
  c->r[3]=0u+0x802C0000u; // 800D8770
  c->r[0]=0u+0x00000080u; // 800D8774
  c->r[8]=c->r[3]+0xFFFFEEE8u; // 800D8778
  c->r[5]=0u+0x00000040u; // 800D877C
  c->r[7]=R32(c->r[8]+0x00000000u); // 800D8780
  c->r[3]=c->r[1]+0x00000024u; // 800D8784
  W8(c->r[1]+0x00000028u,c->r[0]); // 800D8788
  c->r[4]=0u+0x00000040u; // 800D878C
  c->r[6]=c->r[7]+0x00000001u; // 800D8790
  W32(c->r[1]+0x00000030u,c->r[7]); // 800D8794
  c->r[0]=c->r[6]+0x00000001u; // 800D8798
  W32(c->r[8]+0x00000000u,c->r[6]); // 800D879C
  W32(c->r[1]+0x00000024u,c->r[5]); // 800D87A0
  W8(c->r[1]+0x0000002Cu,c->r[29]); // 800D87A4
  W32(c->r[8]+0x00000000u,c->r[0]); // 800D87A8
  W32(c->r[1]+0x00000030u,c->r[6]); // 800D87AC
  c->lr=0x800D87B4u; f_800DB69C(c); // 800D87B0
  c->r[3]=0u+0x00000000u; // 800D87B4
  goto L_800D87C4; // 800D87B8
L_800D87BC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D87BC
  c->lr=0x800D87C4u; f_800D6D6C(c); // 800D87C0
L_800D87C4:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D87C4
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D87C8
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800D87CC
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800D87D0
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 800D87D4
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 800D87D8
  c->lr=c->r[0]; // 800D87DC
  c->r[1]=c->r[10]|c->r[10]; // 800D87E0
  return; // 800D87E4
}

// TRKDoSupportMask
void f_800D87E8(Ctx* __restrict c) {
  trace_call(0x800D87E8u);
  c->r[3]=0u+0x00000000u; // 800D87E8
  return; // 800D87EC
}

// TRKDoVersions
void f_800D87F0(Ctx* __restrict c) {
  trace_call(0x800D87F0u);
  c->r[3]=0u+0x00000000u; // 800D87F0
  return; // 800D87F4
}

// TRKDoOverride
void f_800D87F8(Ctx* __restrict c) {
  trace_call(0x800D87F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D87F8
  c->r[0]=c->lr; // 800D87FC
  c->r[4]=0u+0x00000000u; // 800D8800
  c->r[5]=0u+0x00000040u; // 800D8804
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D8808
  c->r[3]=c->r[1]+0x00000008u; // 800D880C
  c->lr=0x800D8814u; f_8000446C(c); // 800D8810
  c->r[3]=0u+0x802C0000u; // 800D8814
  c->r[0]=0u+0x00000080u; // 800D8818
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D881C
  c->r[6]=0u+0x00000040u; // 800D8820
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D8824
  c->r[5]=0u+0x00000000u; // 800D8828
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D882C
  c->r[3]=c->r[1]+0x00000008u; // 800D8830
  c->r[7]=c->r[8]+0x00000001u; // 800D8834
  c->r[4]=0u+0x00000040u; // 800D8838
  W32(c->r[1]+0x00000014u,c->r[8]); // 800D883C
  c->r[0]=c->r[7]+0x00000001u; // 800D8840
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D8844
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D8848
  W8(c->r[1]+0x00000010u,c->r[5]); // 800D884C
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D8850
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D8854
  c->lr=0x800D885Cu; f_800DB69C(c); // 800D8858
  c->lr=0x800D8860u; f_800DB340(c); // 800D885C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D8860
  c->r[3]=0u+0x00000000u; // 800D8864
  c->lr=c->r[0]; // 800D8868
  c->r[1]=c->r[1]+0x00000050u; // 800D886C
  return; // 800D8870
}

// TRKDoReset
void f_800D8874(Ctx* __restrict c) {
  trace_call(0x800D8874u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8874
  c->r[0]=c->lr; // 800D8878
  c->r[4]=0u+0x00000000u; // 800D887C
  c->r[5]=0u+0x00000040u; // 800D8880
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D8884
  c->r[3]=c->r[1]+0x00000008u; // 800D8888
  c->lr=0x800D8890u; f_8000446C(c); // 800D888C
  c->r[3]=0u+0x802C0000u; // 800D8890
  c->r[0]=0u+0x00000080u; // 800D8894
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D8898
  c->r[6]=0u+0x00000040u; // 800D889C
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D88A0
  c->r[5]=0u+0x00000000u; // 800D88A4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D88A8
  c->r[3]=c->r[1]+0x00000008u; // 800D88AC
  c->r[7]=c->r[8]+0x00000001u; // 800D88B0
  c->r[4]=0u+0x00000040u; // 800D88B4
  W32(c->r[1]+0x00000014u,c->r[8]); // 800D88B8
  c->r[0]=c->r[7]+0x00000001u; // 800D88BC
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D88C0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D88C4
  W8(c->r[1]+0x00000010u,c->r[5]); // 800D88C8
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D88CC
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D88D0
  c->lr=0x800D88D8u; f_800DB69C(c); // 800D88D4
  c->lr=0x800D88DCu; f_800063F4(c); // 800D88D8
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D88DC
  c->r[3]=0u+0x00000000u; // 800D88E0
  c->lr=c->r[0]; // 800D88E4
  c->r[1]=c->r[1]+0x00000050u; // 800D88E8
  return; // 800D88EC
}

// TRKDoDisconnect
void f_800D88F0(Ctx* __restrict c) {
  trace_call(0x800D88F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D88F0
  c->r[0]=c->lr; // 800D88F4
  c->r[3]=0u+0x802C0000u; // 800D88F8
  c->r[5]=0u+0x00000040u; // 800D88FC
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D8900
  c->r[4]=c->r[3]+0xFFFFEEECu; // 800D8904
  c->r[0]=0u+0x00000000u; // 800D8908
  c->r[3]=c->r[1]+0x00000014u; // 800D890C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D8910
  c->r[4]=0u+0x00000000u; // 800D8914
  c->lr=0x800D891Cu; f_8000446C(c); // 800D8918
  c->r[3]=0u+0x802C0000u; // 800D891C
  c->r[0]=0u+0x00000080u; // 800D8920
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D8924
  c->r[6]=0u+0x00000040u; // 800D8928
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D892C
  c->r[5]=0u+0x00000000u; // 800D8930
  W8(c->r[1]+0x00000018u,c->r[0]); // 800D8934
  c->r[3]=c->r[1]+0x00000014u; // 800D8938
  c->r[7]=c->r[8]+0x00000001u; // 800D893C
  c->r[4]=0u+0x00000040u; // 800D8940
  W32(c->r[1]+0x00000020u,c->r[8]); // 800D8944
  c->r[0]=c->r[7]+0x00000001u; // 800D8948
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D894C
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D8950
  W8(c->r[1]+0x0000001Cu,c->r[5]); // 800D8954
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D8958
  W32(c->r[1]+0x00000020u,c->r[7]); // 800D895C
  c->lr=0x800D8964u; f_800DB69C(c); // 800D8960
  c->r[3]=c->r[1]+0x00000008u; // 800D8964
  c->r[4]=0u+0x00000001u; // 800D8968
  c->lr=0x800D8970u; f_800D69E4(c); // 800D896C
  c->r[3]=c->r[1]+0x00000008u; // 800D8970
  c->lr=0x800D8978u; f_800D69FC(c); // 800D8974
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D8978
  c->r[3]=0u+0x00000000u; // 800D897C
  c->lr=c->r[0]; // 800D8980
  c->r[1]=c->r[1]+0x00000060u; // 800D8984
  return; // 800D8988
}

// TRKDoConnect
void f_800D898C(Ctx* __restrict c) {
  trace_call(0x800D898Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D898C
  c->r[0]=c->lr; // 800D8990
  c->r[3]=0u+0x802C0000u; // 800D8994
  c->r[5]=0u+0x00000040u; // 800D8998
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D899C
  c->r[4]=c->r[3]+0xFFFFEEECu; // 800D89A0
  c->r[0]=0u+0x00000001u; // 800D89A4
  c->r[3]=c->r[1]+0x00000008u; // 800D89A8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D89AC
  c->r[4]=0u+0x00000000u; // 800D89B0
  c->lr=0x800D89B8u; f_8000446C(c); // 800D89B4
  c->r[3]=0u+0x802C0000u; // 800D89B8
  c->r[0]=0u+0x00000080u; // 800D89BC
  c->r[9]=c->r[3]+0xFFFFEEE8u; // 800D89C0
  c->r[6]=0u+0x00000040u; // 800D89C4
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D89C8
  c->r[5]=0u+0x00000000u; // 800D89CC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D89D0
  c->r[3]=c->r[1]+0x00000008u; // 800D89D4
  c->r[7]=c->r[8]+0x00000001u; // 800D89D8
  c->r[4]=0u+0x00000040u; // 800D89DC
  W32(c->r[1]+0x00000014u,c->r[8]); // 800D89E0
  c->r[0]=c->r[7]+0x00000001u; // 800D89E4
  W32(c->r[9]+0x00000000u,c->r[7]); // 800D89E8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D89EC
  W8(c->r[1]+0x00000010u,c->r[5]); // 800D89F0
  W32(c->r[9]+0x00000000u,c->r[0]); // 800D89F4
  W32(c->r[1]+0x00000014u,c->r[7]); // 800D89F8
  c->lr=0x800D8A00u; f_800DB69C(c); // 800D89FC
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D8A00
  c->r[3]=0u+0x00000000u; // 800D8A04
  c->lr=c->r[0]; // 800D8A08
  c->r[1]=c->r[1]+0x00000050u; // 800D8A0C
  return; // 800D8A10
}

// SetTRKConnected
void f_800D8A14(Ctx* __restrict c) {
  trace_call(0x800D8A14u);
  c->r[4]=0u+0x802C0000u; // 800D8A14
  W32(c->r[4]+0xFFFFEEECu,c->r[3]); // 800D8A18
  return; // 800D8A1C
}

// GetTRKConnected
void f_800D8A20(Ctx* __restrict c) {
  trace_call(0x800D8A20u);
  c->r[3]=0u+0x802C0000u; // 800D8A20
  c->r[3]=c->r[3]+0xFFFFEEECu; // 800D8A24
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D8A28
  return; // 800D8A2C
}

// HandlePositionFileSupportRequest
void f_800D8A30(Ctx* __restrict c) {
  trace_call(0x800D8A30u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8A30
  c->r[0]=c->lr; // 800D8A34
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D8A38
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D8A3C
  c->r[31]=c->r[5]|c->r[5]; // 800D8A40
  c->r[5]=0u+0x00000040u; // 800D8A44
  W32(c->r[1]+0x00000068u,c->r[30]); // 800D8A48
  c->r[30]=c->r[6]|c->r[6]; // 800D8A4C
  W32(c->r[1]+0x00000064u,c->r[29]); // 800D8A50
  c->r[29]=c->r[4]|c->r[4]; // 800D8A54
  c->r[4]=0u+0x00000000u; // 800D8A58
  W32(c->r[1]+0x00000060u,c->r[28]); // 800D8A5C
  c->r[28]=c->r[3]|c->r[3]; // 800D8A60
  c->r[3]=c->r[1]+0x00000014u; // 800D8A64
  c->lr=0x800D8A6Cu; f_8000446C(c); // 800D8A68
  c->r[3]=0u+0x000000D4u; // 800D8A6C
  c->r[0]=0u+0x00000040u; // 800D8A70
  W8(c->r[1]+0x00000018u,c->r[3]); // 800D8A74
  c->r[3]=c->r[1]+0x0000000Cu; // 800D8A78
  c->r[4]=c->r[1]+0x00000008u; // 800D8A7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8A80
  W32(c->r[1]+0x0000001Cu,c->r[28]); // 800D8A84
  c->r[0]=R32(c->r[29]+0x00000000u); // 800D8A88
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D8A8C
  W8(c->r[1]+0x00000024u,c->r[31]); // 800D8A90
  c->lr=0x800D8A98u; f_800D7498(c); // 800D8A94
  c->r[31]=c->r[3]|c->r[3]; cr0(c,c->r[31]); // 800D8A98
  if (!crb(c,2)) { goto L_800D8AB4; } // 800D8A9C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D8AA0
  c->r[4]=c->r[1]+0x00000014u; // 800D8AA4
  c->r[5]=0u+0x00000040u; // 800D8AA8
  c->lr=0x800D8AB0u; f_800D7104(c); // 800D8AAC
  c->r[31]=c->r[3]|c->r[3]; // 800D8AB0
L_800D8AB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D8AB4
  if (!crb(c,2)) { goto L_800D8B14; } // 800D8AB8
  c->r[3]=0u+0x00000000u; // 800D8ABC
  c->r[0]=0u+0xFFFFFFFFu; // 800D8AC0
  W32(c->r[30]+0x00000000u,c->r[3]); // 800D8AC4
  c->r[4]=c->r[1]+0x00000010u; // 800D8AC8
  c->r[5]=0u+0x00000003u; // 800D8ACC
  c->r[6]=0u+0x00000003u; // 800D8AD0
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D8AD4
  c->r[7]=0u+0x00000000u; // 800D8AD8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D8ADC
  c->lr=0x800D8AE4u; f_800D8D44(c); // 800D8AE0
  c->r[31]=c->r[3]|c->r[3]; cr0(c,c->r[31]); // 800D8AE4
  if (!crb(c,2)) { goto L_800D8B0C; } // 800D8AE8
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D8AEC
  c->lr=0x800D8AF4u; f_800D746C(c); // 800D8AF0
  cmpu(c,0,c->r[3],0x00000000u); // 800D8AF4
  if (crb(c,2)) { goto L_800D8B0C; } // 800D8AF8
  c->r[0]=R32(c->r[3]+0x00000020u); // 800D8AFC
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D8B00
  c->r[0]=R32(c->r[3]+0x00000028u); // 800D8B04
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D8B08
L_800D8B0C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D8B0C
  c->lr=0x800D8B14u; f_800D7408(c); // 800D8B10
L_800D8B14:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D8B14
  c->lr=0x800D8B1Cu; f_800D7408(c); // 800D8B18
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D8B1C
  c->r[3]=c->r[31]|c->r[31]; // 800D8B20
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D8B24
  c->r[30]=R32(c->r[1]+0x00000068u); // 800D8B28
  c->r[29]=R32(c->r[1]+0x00000064u); // 800D8B2C
  c->r[28]=R32(c->r[1]+0x00000060u); // 800D8B30
  c->lr=c->r[0]; // 800D8B34
  c->r[1]=c->r[1]+0x00000070u; // 800D8B38
  return; // 800D8B3C
}

// HandleCloseFileSupportRequest
void f_800D8B40(Ctx* __restrict c) {
  trace_call(0x800D8B40u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8B40
  c->r[0]=c->lr; // 800D8B44
  c->r[5]=0u+0x00000040u; // 800D8B48
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D8B4C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D8B50
  c->r[31]=c->r[3]|c->r[3]; // 800D8B54
  c->r[3]=c->r[1]+0x00000014u; // 800D8B58
  W32(c->r[1]+0x00000068u,c->r[30]); // 800D8B5C
  W32(c->r[1]+0x00000064u,c->r[29]); // 800D8B60
  c->r[29]=c->r[4]|c->r[4]; // 800D8B64
  c->r[4]=0u+0x00000000u; // 800D8B68
  c->lr=0x800D8B70u; f_8000446C(c); // 800D8B6C
  c->r[3]=0u+0x000000D3u; // 800D8B70
  c->r[0]=0u+0x00000040u; // 800D8B74
  W8(c->r[1]+0x00000018u,c->r[3]); // 800D8B78
  c->r[3]=c->r[1]+0x0000000Cu; // 800D8B7C
  c->r[4]=c->r[1]+0x00000008u; // 800D8B80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8B84
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D8B88
  c->lr=0x800D8B90u; f_800D7498(c); // 800D8B8C
  c->r[31]=c->r[3]|c->r[3]; cr0(c,c->r[31]); // 800D8B90
  if (!crb(c,2)) { goto L_800D8BAC; } // 800D8B94
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D8B98
  c->r[4]=c->r[1]+0x00000014u; // 800D8B9C
  c->r[5]=0u+0x00000040u; // 800D8BA0
  c->lr=0x800D8BA8u; f_800D7104(c); // 800D8BA4
  c->r[31]=c->r[3]|c->r[3]; // 800D8BA8
L_800D8BAC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D8BAC
  if (!crb(c,2)) { goto L_800D8C00; } // 800D8BB0
  c->r[0]=0u+0x00000000u; // 800D8BB4
  c->r[4]=c->r[1]+0x00000010u; // 800D8BB8
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D8BBC
  c->r[5]=0u+0x00000003u; // 800D8BC0
  c->r[6]=0u+0x00000003u; // 800D8BC4
  c->r[7]=0u+0x00000000u; // 800D8BC8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D8BCC
  c->lr=0x800D8BD4u; f_800D8D44(c); // 800D8BD0
  c->r[31]=c->r[3]|c->r[3]; cr0(c,c->r[31]); // 800D8BD4
  if (!crb(c,2)) { goto L_800D8BE8; } // 800D8BD8
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D8BDC
  c->lr=0x800D8BE4u; f_800D746C(c); // 800D8BE0
  c->r[30]=c->r[3]|c->r[3]; // 800D8BE4
L_800D8BE8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D8BE8
  if (!crb(c,2)) { goto L_800D8BF8; } // 800D8BEC
  c->r[0]=R32(c->r[30]+0x00000020u); // 800D8BF0
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D8BF4
L_800D8BF8:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D8BF8
  c->lr=0x800D8C00u; f_800D7408(c); // 800D8BFC
L_800D8C00:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D8C00
  c->lr=0x800D8C08u; f_800D7408(c); // 800D8C04
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D8C08
  c->r[3]=c->r[31]|c->r[31]; // 800D8C0C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D8C10
  c->r[30]=R32(c->r[1]+0x00000068u); // 800D8C14
  c->r[29]=R32(c->r[1]+0x00000064u); // 800D8C18
  c->lr=c->r[0]; // 800D8C1C
  c->r[1]=c->r[1]+0x00000070u; // 800D8C20
  return; // 800D8C24
}

// HandleOpenFileSupportRequest
void f_800D8C28(Ctx* __restrict c) {
  trace_call(0x800D8C28u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8C28
  c->r[0]=c->lr; // 800D8C2C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D8C30
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8C34
  c->r[27]=c->r[3]|c->r[3]; // 800D8C38
  c->r[31]=c->r[4]|c->r[4]; // 800D8C3C
  c->r[28]=c->r[5]|c->r[5]; // 800D8C40
  c->r[29]=c->r[6]|c->r[6]; // 800D8C44
  c->r[3]=c->r[1]+0x00000014u; // 800D8C48
  c->r[4]=0u+0x00000000u; // 800D8C4C
  c->r[5]=0u+0x00000040u; // 800D8C50
  c->lr=0x800D8C58u; f_8000446C(c); // 800D8C54
  c->r[3]=0u+0x00000000u; // 800D8C58
  c->r[0]=0u+0x000000D2u; // 800D8C5C
  W32(c->r[28]+0x00000000u,c->r[3]); // 800D8C60
  c->r[3]=c->r[27]|c->r[27]; // 800D8C64
  W8(c->r[1]+0x00000018u,c->r[0]); // 800D8C68
  c->lr=0x800D8C70u; f_800D9284(c); // 800D8C6C
  c->r[0]=c->r[3]+0x00000041u; // 800D8C70
  W8(c->r[1]+0x0000001Cu,c->r[31]); // 800D8C74
  c->r[3]=c->r[27]|c->r[27]; // 800D8C78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8C7C
  c->lr=0x800D8C84u; f_800D9284(c); // 800D8C80
  c->r[0]=c->r[3]+0x00000001u; // 800D8C84
  c->r[3]=c->r[1]+0x0000000Cu; // 800D8C88
  W16(c->r[1]+0x00000020u,c->r[0]); // 800D8C8C
  c->r[4]=c->r[1]+0x00000008u; // 800D8C90
  c->lr=0x800D8C98u; f_800D7498(c); // 800D8C94
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D8C98
  c->r[4]=c->r[1]+0x00000014u; // 800D8C9C
  c->r[5]=0u+0x00000040u; // 800D8CA0
  c->lr=0x800D8CA8u; f_800D7104(c); // 800D8CA4
  c->r[31]=c->r[3]|c->r[3]; cr0(c,c->r[31]); // 800D8CA8
  if (!crb(c,2)) { goto L_800D8CD0; } // 800D8CAC
  c->r[3]=c->r[27]|c->r[27]; // 800D8CB0
  c->lr=0x800D8CB8u; f_800D9284(c); // 800D8CB4
  c->r[5]=c->r[3]|c->r[3]; // 800D8CB8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D8CBC
  c->r[4]=c->r[27]|c->r[27]; // 800D8CC0
  c->r[5]=c->r[5]+0x00000001u; // 800D8CC4
  c->lr=0x800D8CCCu; f_800D7104(c); // 800D8CC8
  c->r[31]=c->r[3]|c->r[3]; // 800D8CCC
L_800D8CD0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D8CD0
  if (!crb(c,2)) { goto L_800D8D24; } // 800D8CD4
  c->r[0]=0u+0x00000000u; // 800D8CD8
  c->r[4]=c->r[1]+0x00000010u; // 800D8CDC
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D8CE0
  c->r[5]=0u+0x00000007u; // 800D8CE4
  c->r[6]=0u+0x00000003u; // 800D8CE8
  c->r[7]=0u+0x00000000u; // 800D8CEC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D8CF0
  c->lr=0x800D8CF8u; f_800D8D44(c); // 800D8CF4
  c->r[31]=c->r[3]|c->r[3]; cr0(c,c->r[31]); // 800D8CF8
  if (!crb(c,2)) { goto L_800D8D0C; } // 800D8CFC
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D8D00
  c->lr=0x800D8D08u; f_800D746C(c); // 800D8D04
  c->r[30]=c->r[3]|c->r[3]; // 800D8D08
L_800D8D0C:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 800D8D0C
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D8D10
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D8D14
  W32(c->r[28]+0x00000000u,c->r[0]); // 800D8D18
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D8D1C
  c->lr=0x800D8D24u; f_800D7408(c); // 800D8D20
L_800D8D24:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D8D24
  c->lr=0x800D8D2Cu; f_800D7408(c); // 800D8D28
  c->r[3]=c->r[31]|c->r[31]; // 800D8D2C
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8D30
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D8D34
  c->lr=c->r[0]; // 800D8D38
  c->r[1]=c->r[1]+0x00000070u; // 800D8D3C
  return; // 800D8D40
}

// TRKRequestSend
void f_800D8D44(Ctx* __restrict c) {
  trace_call(0x800D8D44u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8D44
  c->r[0]=c->lr; // 800D8D48
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D8D4C
  c->r[0]=0u+0xFFFFFFFFu; // 800D8D50
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8D54
  c->r[23]=c->r[4]|c->r[4]; // 800D8D58
  c->r[22]=c->r[3]|c->r[3]; // 800D8D5C
  c->r[24]=c->r[7]|c->r[7]; // 800D8D60
  c->r[28]=c->r[6]+0x00000001u; // 800D8D64
  c->r[31]=0u+0x00000000u; // 800D8D68
  c->r[25]=0u+0x00000001u; // 800D8D6C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D8D70
  goto L_800D8E80; // 800D8D74
L_800D8D78:;
  c->r[3]=c->r[22]|c->r[22]; // 800D8D78
  c->lr=0x800D8D80u; f_800D6D6C(c); // 800D8D7C
  c->r[31]=c->r[3]|c->r[3]; cr0(c,c->r[31]); // 800D8D80
  if (!crb(c,2)) { goto L_800D8E7C; } // 800D8D84
  cmps(c,0,(int32_t)c->r[24],0); // 800D8D88
  if (crb(c,2)) { goto L_800D8D94; } // 800D8D8C
  c->r[29]=0u+0x00000000u; // 800D8D90
L_800D8D94:;
  c->lr=0x800D8D98u; f_800D76B0(c); // 800D8D94
  W32(c->r[23]+0x00000000u,c->r[3]); // 800D8D98
  c->r[3]=R32(c->r[23]+0x00000000u); // 800D8D9C
  cmps(c,0,(int32_t)c->r[3],-1); // 800D8DA0
  if (!crb(c,2)) { goto L_800D8DC4; } // 800D8DA4
  cmps(c,0,(int32_t)c->r[24],0); // 800D8DA8
  if (crb(c,2)) { IRQCHK(c); goto L_800D8D94; } // 800D8DAC
  c->r[4]=0u+0x04C50000u; // 800D8DB0
  c->r[29]=c->r[29]+0x00000001u; // 800D8DB4
  c->r[0]=c->r[4]+0xFFFFB3ECu; // 800D8DB8
  cmpu(c,0,c->r[29],c->r[0]); // 800D8DBC
  if (crb(c,0)) { IRQCHK(c); goto L_800D8D94; } // 800D8DC0
L_800D8DC4:;
  cmps(c,0,(int32_t)c->r[3],-1); // 800D8DC4
  if (crb(c,2)) { goto L_800D8E0C; } // 800D8DC8
  c->r[25]=0u+0x00000000u; // 800D8DCC
  c->lr=0x800D8DD4u; f_800D746C(c); // 800D8DD0
  c->r[4]=0u+0x00000000u; // 800D8DD4
  c->r[30]=c->r[3]|c->r[3]; // 800D8DD8
  c->lr=0x800D8DE0u; f_800D7398(c); // 800D8DDC
  c->r[4]=R32(c->r[30]+0x00000008u); // 800D8DE0
  c->r[3]=c->r[30]+0x00000010u; // 800D8DE4
  c->lr=0x800D8DECu; f_800DBCF4(c); // 800D8DE8
  c->r[27]=R8(c->r[30]+0x00000014u); // 800D8DEC
  cmpu(c,0,c->r[27],0x00000080u); // 800D8DF0
  if (!crb(c,0)) { goto L_800D8E0C; } // 800D8DF4
  c->r[3]=R32(c->r[23]+0x00000000u); // 800D8DF8
  c->lr=0x800D8E00u; f_800D7600(c); // 800D8DFC
  c->r[0]=0u+0xFFFFFFFFu; // 800D8E00
  W32(c->r[23]+0x00000000u,c->r[0]); // 800D8E04
  IRQCHK(c); goto L_800D8D94; // 800D8E08
L_800D8E0C:;
  c->r[3]=R32(c->r[23]+0x00000000u); // 800D8E0C
  cmps(c,0,(int32_t)c->r[3],-1); // 800D8E10
  if (crb(c,2)) { goto L_800D8E7C; } // 800D8E14
  c->r[0]=R32(c->r[30]+0x00000008u); // 800D8E18
  cmpu(c,0,c->r[0],0x00000040u); // 800D8E1C
  if (!crb(c,0)) { goto L_800D8E28; } // 800D8E20
  c->r[25]=0u+0x00000001u; // 800D8E24
L_800D8E28:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D8E28
  if (!crb(c,2)) { goto L_800D8E3C; } // 800D8E2C
  cmps(c,0,(int32_t)c->r[25],0); // 800D8E30
  if (!crb(c,2)) { goto L_800D8E3C; } // 800D8E34
  c->r[26]=R8(c->r[30]+0x00000018u); // 800D8E38
L_800D8E3C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D8E3C
  if (!crb(c,2)) { goto L_800D8E60; } // 800D8E40
  cmps(c,0,(int32_t)c->r[25],0); // 800D8E44
  if (!crb(c,2)) { goto L_800D8E60; } // 800D8E48
  cmps(c,0,(int32_t)c->r[27],128); // 800D8E4C
  if (!crb(c,2)) { goto L_800D8E5C; } // 800D8E50
  cmps(c,0,(int32_t)c->r[26],0); // 800D8E54
  if (crb(c,2)) { goto L_800D8E60; } // 800D8E58
L_800D8E5C:;
  c->r[25]=0u+0x00000001u; // 800D8E5C
L_800D8E60:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D8E60
  if (!crb(c,2)) { goto L_800D8E70; } // 800D8E64
  cmps(c,0,(int32_t)c->r[25],0); // 800D8E68
  if (crb(c,2)) { goto L_800D8E7C; } // 800D8E6C
L_800D8E70:;
  c->lr=0x800D8E74u; f_800D7408(c); // 800D8E70
  c->r[0]=0u+0xFFFFFFFFu; // 800D8E74
  W32(c->r[23]+0x00000000u,c->r[0]); // 800D8E78
L_800D8E7C:;
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 800D8E7C
L_800D8E80:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D8E80
  if (crb(c,2)) { goto L_800D8E9C; } // 800D8E84
  c->r[0]=R32(c->r[23]+0x00000000u); // 800D8E88
  cmps(c,0,(int32_t)c->r[0],-1); // 800D8E8C
  if (!crb(c,2)) { goto L_800D8E9C; } // 800D8E90
  cmps(c,0,(int32_t)c->r[31],0); // 800D8E94
  if (crb(c,2)) { IRQCHK(c); goto L_800D8D78; } // 800D8E98
L_800D8E9C:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 800D8E9C
  cmps(c,0,(int32_t)c->r[0],-1); // 800D8EA0
  if (!crb(c,2)) { goto L_800D8EAC; } // 800D8EA4
  c->r[31]=0u+0x00000800u; // 800D8EA8
L_800D8EAC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D8EAC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D8EB0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D8EB4
  c->lr=c->r[0]; // 800D8EB8
  c->r[1]=c->r[1]+0x00000030u; // 800D8EBC
  return; // 800D8EC0
}

// TRKSuppAccessFile
void f_800D8EC4(Ctx* __restrict c) {
  trace_call(0x800D8EC4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8EC4
  c->r[0]=c->lr; // 800D8EC8
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D8ECC
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=19;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D8ED0
  c->r[24]=c->r[4]|c->r[4]; cr0(c,c->r[24]); // 800D8ED4
  c->r[23]=c->r[3]|c->r[3]; // 800D8ED8
  c->r[25]=c->r[5]|c->r[5]; // 800D8EDC
  c->r[26]=c->r[6]|c->r[6]; // 800D8EE0
  c->r[27]=c->r[7]|c->r[7]; // 800D8EE4
  c->r[28]=c->r[8]|c->r[8]; // 800D8EE8
  if (crb(c,2)) { goto L_800D8EFC; } // 800D8EEC
  c->r[0]=R32(c->r[25]+0x00000000u); // 800D8EF0
  cmpu(c,0,c->r[0],0x00000000u); // 800D8EF4
  if (!crb(c,2)) { goto L_800D8F04; } // 800D8EF8
L_800D8EFC:;
  c->r[3]=0u+0x00000002u; // 800D8EFC
  goto L_800D90D0; // 800D8F00
L_800D8F04:;
  c->r[0]=0u+0x00000000u; // 800D8F04
  c->r[29]=0u+0x00000000u; // 800D8F08
  W32(c->r[26]+0x00000000u,c->r[0]); // 800D8F0C
  c->r[30]=0u+0x00000000u; // 800D8F10
  c->r[21]=0u+0x00000000u; // 800D8F14
  goto L_800D90A0; // 800D8F18
L_800D8F1C:;
  c->r[3]=c->r[1]+0x00000014u; // 800D8F1C
  c->r[4]=0u+0x00000000u; // 800D8F20
  c->r[5]=0u+0x00000040u; // 800D8F24
  c->lr=0x800D8F2Cu; f_8000446C(c); // 800D8F28
  c->r[0]=R32(c->r[25]+0x00000000u); // 800D8F2C
  c->r[3]=0u+0x00000800u; // 800D8F30
  c->r[0]=c->r[0]-c->r[30]; // 800D8F34
  cmpu(c,0,c->r[0],0x00000800u); // 800D8F38
  if (crb(c,1)) { goto L_800D8F44; } // 800D8F3C
  c->r[3]=c->r[0]|c->r[0]; // 800D8F40
L_800D8F44:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D8F44
  c->r[31]=c->r[3]|c->r[3]; // 800D8F48
  c->r[0]=0u+0x000000D0u; // 800D8F4C
  if (crb(c,2)) { goto L_800D8F58; } // 800D8F50
  c->r[0]=0u+0x000000D1u; // 800D8F54
L_800D8F58:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D8F58
  W8(c->r[1]+0x00000018u,c->r[0]); // 800D8F5C
  c->r[0]=0u+0x00000040u; // 800D8F60
  if (!crb(c,2)) { goto L_800D8F6C; } // 800D8F64
  c->r[0]=c->r[31]+0x00000040u; // 800D8F68
L_800D8F6C:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8F6C
  c->r[3]=c->r[1]+0x0000000Cu; // 800D8F70
  c->r[4]=c->r[1]+0x00000008u; // 800D8F74
  W32(c->r[1]+0x0000001Cu,c->r[23]); // 800D8F78
  W16(c->r[1]+0x00000020u,c->r[31]); // 800D8F7C
  c->lr=0x800D8F84u; f_800D7498(c); // 800D8F80
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D8F84
  c->r[4]=c->r[1]+0x00000014u; // 800D8F88
  c->r[5]=0u+0x00000040u; // 800D8F8C
  c->lr=0x800D8F94u; f_800D7104(c); // 800D8F90
  cmps(c,0,(int32_t)c->r[28],0); // 800D8F94
  c->r[21]=c->r[3]|c->r[3]; // 800D8F98
  if (!crb(c,2)) { goto L_800D8FBC; } // 800D8F9C
  cmps(c,0,(int32_t)c->r[21],0); // 800D8FA0
  if (!crb(c,2)) { goto L_800D8FBC; } // 800D8FA4
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D8FA8
  c->r[5]=c->r[31]|c->r[31]; // 800D8FAC
  c->r[4]=c->r[24]+c->r[30]; // 800D8FB0
  c->lr=0x800D8FB8u; f_800D7104(c); // 800D8FB4
  c->r[21]=c->r[3]|c->r[3]; // 800D8FB8
L_800D8FBC:;
  cmps(c,0,(int32_t)c->r[21],0); // 800D8FBC
  if (!crb(c,2)) { goto L_800D9094; } // 800D8FC0
  cmps(c,0,(int32_t)c->r[27],0); // 800D8FC4
  if (crb(c,2)) { goto L_800D9088; } // 800D8FC8
  cmps(c,0,(int32_t)c->r[28],0); // 800D8FCC
  c->r[0]=0u+0x00000000u; // 800D8FD0
  if (crb(c,2)) { goto L_800D8FE4; } // 800D8FD4
  cmpu(c,0,c->r[23],0x00000000u); // 800D8FD8
  if (!crb(c,2)) { goto L_800D8FE4; } // 800D8FDC
  c->r[0]=0u+0x00000001u; // 800D8FE0
L_800D8FE4:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D8FE4
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D8FE8
  c->r[4]=c->r[1]+0x00000010u; // 800D8FEC
  c->r[5]=0u+0x00000005u; // 800D8FF0
  c->r[0]=cntlz(c->r[0]); // 800D8FF4
  c->r[6]=0u+0x00000003u; // 800D8FF8
  c->r[7]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D8FFC
  c->lr=0x800D9004u; f_800D8D44(c); // 800D9000
  c->r[21]=c->r[3]|c->r[3]; cr0(c,c->r[21]); // 800D9004
  if (!crb(c,2)) { goto L_800D9018; } // 800D9008
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D900C
  c->lr=0x800D9014u; f_800D746C(c); // 800D9010
  c->r[22]=c->r[3]|c->r[3]; // 800D9014
L_800D9018:;
  c->r[0]=R32(c->r[22]+0x00000020u); // 800D9018
  cmps(c,0,(int32_t)c->r[28],0); // 800D901C
  c->r[19]=R16(c->r[22]+0x00000024u); // 800D9020
  c->r[20]=rotl(c->r[0],0)&0x000000FFu; // 800D9024
  if (crb(c,2)) { goto L_800D9068; } // 800D9028
  cmps(c,0,(int32_t)c->r[21],0); // 800D902C
  if (!crb(c,2)) { goto L_800D9068; } // 800D9030
  cmpu(c,0,c->r[19],c->r[31]); // 800D9034
  if (crb(c,1)) { goto L_800D9068; } // 800D9038
  c->r[3]=c->r[22]|c->r[22]; // 800D903C
  c->r[4]=0u+0x00000040u; // 800D9040
  c->lr=0x800D9048u; f_800D7398(c); // 800D9044
  c->r[3]=c->r[22]|c->r[22]; // 800D9048
  c->r[5]=c->r[19]|c->r[19]; // 800D904C
  c->r[4]=c->r[24]+c->r[30]; // 800D9050
  c->lr=0x800D9058u; f_800D6E88(c); // 800D9054
  c->r[21]=c->r[3]|c->r[3]; // 800D9058
  cmps(c,0,(int32_t)c->r[21],770); // 800D905C
  if (!crb(c,2)) { goto L_800D9068; } // 800D9060
  c->r[21]=0u+0x00000000u; // 800D9064
L_800D9068:;
  cmpu(c,0,c->r[19],c->r[31]); // 800D9068
  if (crb(c,2)) { goto L_800D9078; } // 800D906C
  c->r[31]=c->r[19]|c->r[19]; // 800D9070
  c->r[29]=0u+0x00000001u; // 800D9074
L_800D9078:;
  W32(c->r[26]+0x00000000u,c->r[20]); // 800D9078
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D907C
  c->lr=0x800D9084u; f_800D7408(c); // 800D9080
  goto L_800D9094; // 800D9084
L_800D9088:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D9088
  c->lr=0x800D9090u; f_800D6D6C(c); // 800D908C
  c->r[21]=c->r[3]|c->r[3]; // 800D9090
L_800D9094:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D9094
  c->lr=0x800D909Cu; f_800D7408(c); // 800D9098
  c->r[30]=c->r[30]+c->r[31]; // 800D909C
L_800D90A0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D90A0
  if (!crb(c,2)) { goto L_800D90C8; } // 800D90A4
  c->r[0]=R32(c->r[25]+0x00000000u); // 800D90A8
  cmpu(c,0,c->r[30],c->r[0]); // 800D90AC
  if (!crb(c,0)) { goto L_800D90C8; } // 800D90B0
  cmps(c,0,(int32_t)c->r[21],0); // 800D90B4
  if (!crb(c,2)) { goto L_800D90C8; } // 800D90B8
  c->r[0]=R32(c->r[26]+0x00000000u); // 800D90BC
  cmps(c,0,(int32_t)c->r[0],0); // 800D90C0
  if (crb(c,2)) { IRQCHK(c); goto L_800D8F1C; } // 800D90C4
L_800D90C8:;
  W32(c->r[25]+0x00000000u,c->r[30]); // 800D90C8
  c->r[3]=c->r[21]|c->r[21]; // 800D90CC
L_800D90D0:;
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D90D0
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D90D4
  c->lr=c->r[0]; // 800D90D8
  c->r[1]=c->r[1]+0x00000090u; // 800D90DC
  return; // 800D90E0
}

// TRKReleaseMutex
void f_800D90E4(Ctx* __restrict c) {
  trace_call(0x800D90E4u);
  c->r[3]=0u+0x00000000u; // 800D90E4
  return; // 800D90E8
}

// TRKAcquireMutex
void f_800D90EC(Ctx* __restrict c) {
  trace_call(0x800D90ECu);
  c->r[3]=0u+0x00000000u; // 800D90EC
  return; // 800D90F0
}

// TRKInitializeMutex
void f_800D90F4(Ctx* __restrict c) {
  trace_call(0x800D90F4u);
  c->r[3]=0u+0x00000000u; // 800D90F4
  return; // 800D90F8
}

// TRKDoNotifyStopped
void f_800D90FC(Ctx* __restrict c) {
  trace_call(0x800D90FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D90FC
  c->r[0]=c->lr; // 800D9100
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9104
  c->r[4]=c->r[1]+0x00000008u; // 800D9108
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D910C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D9110
  c->r[30]=c->r[3]|c->r[3]; // 800D9114
  c->r[3]=c->r[1]+0x0000000Cu; // 800D9118
  c->lr=0x800D9120u; f_800D7498(c); // 800D911C
  c->r[31]=c->r[3]|c->r[3]; cr0(c,c->r[31]); // 800D9120
  if (!crb(c,2)) { goto L_800D9178; } // 800D9124
  if (!crb(c,2)) { goto L_800D9148; } // 800D9128
  cmps(c,0,(int32_t)c->r[30],144); // 800D912C
  if (!crb(c,2)) { goto L_800D9140; } // 800D9130
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D9134
  c->lr=0x800D913Cu; f_800D9A40(c); // 800D9138
  goto L_800D9148; // 800D913C
L_800D9140:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D9140
  c->lr=0x800D9148u; f_800D99BC(c); // 800D9144
L_800D9148:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D9148
  c->r[4]=c->r[1]+0x00000010u; // 800D914C
  c->r[5]=0u+0x00000002u; // 800D9150
  c->r[6]=0u+0x00000003u; // 800D9154
  c->r[7]=0u+0x00000001u; // 800D9158
  c->lr=0x800D9160u; f_800D8D44(c); // 800D915C
  c->r[31]=c->r[3]|c->r[3]; cr0(c,c->r[31]); // 800D9160
  if (!crb(c,2)) { goto L_800D9170; } // 800D9164
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D9168
  c->lr=0x800D9170u; f_800D7408(c); // 800D916C
L_800D9170:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D9170
  c->lr=0x800D9178u; f_800D7408(c); // 800D9174
L_800D9178:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D9178
  c->r[3]=c->r[31]|c->r[31]; // 800D917C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D9180
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D9184
  c->lr=c->r[0]; // 800D9188
  c->r[1]=c->r[1]+0x00000020u; // 800D918C
  return; // 800D9190
}

// TRK_flush_cache
void f_800D9194(Ctx* __restrict c) {
  trace_call(0x800D9194u);
  c->r[5]=0u+0xFFFF0000u; // 800D9194
  c->r[5]=c->r[5]|0x0000FFF1u; // 800D9198
  c->r[5]=c->r[5]&c->r[3]; // 800D919C
  c->r[3]=c->r[3]-c->r[5]; // 800D91A0
  c->r[4]=c->r[4]+c->r[3]; // 800D91A4
L_800D91A8:;
  /* dcbst */ // 800D91A8
  /* dcbf */ // 800D91AC
  /* sync */ // 800D91B0
  /* icbi */ // 800D91B4
  c->r[5]=addc(c,c->r[5],0x00000008u,0); // 800D91B8
  c->r[4]=addc(c,c->r[4],0xFFFFFFF8u,0); cr0(c,c->r[4]); // 800D91BC
  if (!crb(c,0)) { IRQCHK(c); goto L_800D91A8; } // 800D91C0
  /* isync */ // 800D91C4
  return; // 800D91C8
}

// TRK_fill_mem
void f_800D91CC(Ctx* __restrict c) {
  trace_call(0x800D91CCu);
  cmpu(c,0,c->r[5],0x00000020u); // 800D91CC
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800D91D0
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 800D91D4
  c->r[7]=c->r[4]|c->r[4]; // 800D91D8
  if (crb(c,0)) { goto L_800D926C; } // 800D91DC
  c->r[0]=~(c->r[6]|c->r[6]); // 800D91E0
  c->r[3]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[3]); // 800D91E4
  if (crb(c,2)) { goto L_800D91FC; } // 800D91E8
  c->r[5]=c->r[5]-c->r[3]; // 800D91EC
L_800D91F0:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 800D91F0
  {uint32_t ea=c->r[6]+0x00000001u; W8(ea,c->r[7]); c->r[6]=ea;} // 800D91F4
  if (!crb(c,2)) { IRQCHK(c); goto L_800D91F0; } // 800D91F8
L_800D91FC:;
  cmpu(c,0,c->r[7],0x00000000u); // 800D91FC
  if (crb(c,2)) { goto L_800D921C; } // 800D9200
  c->r[3]=rotl(c->r[7],24)&0xFF000000u; // 800D9204
  c->r[0]=rotl(c->r[7],16)&0xFFFF0000u; // 800D9208
  c->r[4]=rotl(c->r[7],8)&0xFFFFFF00u; // 800D920C
  c->r[0]=c->r[3]|c->r[0]; // 800D9210
  c->r[0]=c->r[4]|c->r[0]; // 800D9214
  c->r[7]=c->r[7]|c->r[0]; // 800D9218
L_800D921C:;
  c->r[4]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[4]); // 800D921C
  c->r[3]=c->r[6]+0xFFFFFFFDu; // 800D9220
  if (crb(c,2)) { goto L_800D9250; } // 800D9224
L_800D9228:;
  W32(c->r[3]+0x00000004u,c->r[7]); // 800D9228
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 800D922C
  W32(c->r[3]+0x00000008u,c->r[7]); // 800D9230
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 800D9234
  W32(c->r[3]+0x00000010u,c->r[7]); // 800D9238
  W32(c->r[3]+0x00000014u,c->r[7]); // 800D923C
  W32(c->r[3]+0x00000018u,c->r[7]); // 800D9240
  W32(c->r[3]+0x0000001Cu,c->r[7]); // 800D9244
  {uint32_t ea=c->r[3]+0x00000020u; W32(ea,c->r[7]); c->r[3]=ea;} // 800D9248
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9228; } // 800D924C
L_800D9250:;
  c->r[4]=rotl(c->r[5],30)&0x00000007u; cr0(c,c->r[4]); // 800D9250
  if (crb(c,2)) { goto L_800D9264; } // 800D9254
L_800D9258:;
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 800D9258
  {uint32_t ea=c->r[3]+0x00000004u; W32(ea,c->r[7]); c->r[3]=ea;} // 800D925C
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9258; } // 800D9260
L_800D9264:;
  c->r[6]=c->r[3]+0x00000003u; // 800D9264
  c->r[5]=rotl(c->r[5],0)&0x00000003u; // 800D9268
L_800D926C:;
  cmpu(c,0,c->r[5],0x00000000u); // 800D926C
  if (crb(c,2)) return; // 800D9270
L_800D9274:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800D9274
  {uint32_t ea=c->r[6]+0x00000001u; W8(ea,c->r[7]); c->r[6]=ea;} // 800D9278
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9274; } // 800D927C
  return; // 800D9280
}

// TRK_strlen
void f_800D9284(Ctx* __restrict c) {
  trace_call(0x800D9284u);
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 800D9284
  c->r[3]=0u+0xFFFFFFFFu; // 800D9288
L_800D928C:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800D928C
  c->r[3]=c->r[3]+0x00000001u; // 800D9290
  cmpu(c,0,c->r[0],0x00000000u); // 800D9294
  if (!crb(c,2)) { IRQCHK(c); goto L_800D928C; } // 800D9298
  return; // 800D929C
}

// __TRK_get_MSR
void f_800D92A0(Ctx* __restrict c) {
  trace_call(0x800D92A0u);
  c->r[3]=c->msr; // 800D92A0
  return; // 800D92A4
}

// __TRK_set_MSR
void f_800D92A8(Ctx* __restrict c) {
  trace_call(0x800D92A8u);
  c->msr=c->r[3]; // 800D92A8
  return; // 800D92AC
}

// TRK_ppc_memcpy
void f_800D92B0(Ctx* __restrict c) {
  trace_call(0x800D92B0u);
  c->r[8]=c->msr; // 800D92B0
  c->r[10]=0u+0x00000000u; // 800D92B4
L_800D92B8:;
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[5]); // 800D92B8
  if (crb(c,2)) { goto L_800D92E0; } // 800D92BC
  c->msr=c->r[7]; // 800D92C0
  /* sync */ // 800D92C4
  c->r[9]=R8(c->r[10]+c->r[4]); // 800D92C8
  c->msr=c->r[6]; // 800D92CC
  /* sync */ // 800D92D0
  W8(c->r[10]+c->r[3],c->r[9]); // 800D92D4
  c->r[10]=c->r[10]+0x00000001u; // 800D92D8
  IRQCHK(c); goto L_800D92B8; // 800D92DC
L_800D92E0:;
  c->msr=c->r[8]; // 800D92E0
  /* sync */ // 800D92E4
  return; // 800D92E8
}

// TRKInterruptHandler
void f_800D92EC(Ctx* __restrict c) {
  trace_call(0x800D92ECu);
  mtspr(c,26,c->r[2]); // 800D92EC
  mtspr(c,27,c->r[4]); // 800D92F0
  c->r[4]=mfspr(c,275); // 800D92F4
  c->r[2]=c->cr; // 800D92F8
  mtspr(c,275,c->r[2]); // 800D92FC
  c->r[2]=0u+0x802B0000u; // 800D9300
  c->r[2]=c->r[2]|0x0000EEF4u; // 800D9304
  c->r[2]=R32(c->r[2]+0x0000008Cu); // 800D9308
  c->r[2]=c->r[2]|0x00008002u; // 800D930C
  c->r[2]=c->r[2]^0x00008002u; // 800D9310
  /* sync */ // 800D9314
  c->msr=c->r[2]; // 800D9318
  /* sync */ // 800D931C
  c->r[2]=0u+0x802B0000u; // 800D9320
  c->r[2]=c->r[2]|0x0000EEF0u; // 800D9324
  W16(c->r[2]+0x00000000u,c->r[3]); // 800D9328
  cmps(c,0,(int32_t)c->r[3],1280); // 800D932C
  if (!crb(c,2)) { goto L_800D93B4; } // 800D9330
  c->r[2]=0u+0x802B0000u; // 800D9334
  c->r[2]=c->r[2]|0x0000EF98u; // 800D9338
  c->r[3]=c->lr; // 800D933C
  W32(c->r[2]+0x0000042Cu,c->r[3]); // 800D9340
  c->lr=0x800D9348u; f_800DB5B0(c); // 800D9344
  c->r[2]=0u+0x802B0000u; // 800D9348
  c->r[2]=c->r[2]|0x0000EF98u; // 800D934C
  c->r[3]=R32(c->r[2]+0x0000042Cu); // 800D9350
  c->lr=c->r[3]; // 800D9354
  c->r[2]=0u+0x802B0000u; // 800D9358
  c->r[2]=c->r[2]|0x0000EEF4u; // 800D935C
  c->r[2]=R32(c->r[2]+0x000000A0u); // 800D9360
  c->r[2]=R8(c->r[2]+0x00000000u); // 800D9364
  cmps(c,0,(int32_t)c->r[2],0); // 800D9368
  if (crb(c,2)) { goto L_800D9398; } // 800D936C
  c->r[2]=0u+0x80210000u; // 800D9370
  c->r[2]=c->r[2]|0x0000C77Cu; // 800D9374
  c->r[2]=R8(c->r[2]+0x0000000Cu); // 800D9378
  cmps(c,0,(int32_t)c->r[2],1); // 800D937C
  if (crb(c,2)) { goto L_800D9398; } // 800D9380
  c->r[2]=0u+0x802B0000u; // 800D9384
  c->r[2]=c->r[2]|0x0000EEF4u; // 800D9388
  c->r[3]=0u+0x00000001u; // 800D938C
  W8(c->r[2]+0x0000009Cu,c->r[3]); // 800D9390
  goto L_800D93B4; // 800D9394
L_800D9398:;
  c->r[2]=0u+0x802B0000u; // 800D9398
  c->r[2]=c->r[2]|0x0000F3C8u; // 800D939C
  c->r[3]=R32(c->r[2]+0x00000088u); // 800D93A0
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 800D93A4
  c->r[3]=R32(c->r[2]+0x0000000Cu); // 800D93A8
  c->r[2]=R32(c->r[2]+0x00000008u); // 800D93AC
  return; /* rfi */ // 800D93B0
L_800D93B4:;
  c->r[2]=0u+0x802B0000u; // 800D93B4
  c->r[2]=c->r[2]|0x0000EEF0u; // 800D93B8
  c->r[3]=R16(c->r[2]+0x00000000u); // 800D93BC
  c->r[2]=0u+0x80210000u; // 800D93C0
  c->r[2]=c->r[2]|0x0000C77Cu; // 800D93C4
  c->r[2]=R8(c->r[2]+0x0000000Cu); // 800D93C8
  cmps(c,0,(int32_t)c->r[2],0); // 800D93CC
  if (!crb(c,2)) { f_800D9480(c); return; } // 800D93D0
  c->r[2]=0u+0x802B0000u; // 800D93D4
  c->r[2]=c->r[2]|0x0000EF98u; // 800D93D8
  W32(c->r[2]+0x00000000u,c->r[0]); // 800D93DC
  W32(c->r[2]+0x00000004u,c->r[1]); // 800D93E0
  c->r[0]=mfspr(c,273); // 800D93E4
  W32(c->r[2]+0x00000008u,c->r[0]); // 800D93E8
  W16(c->r[2]+0x000002F8u,c->r[3]); // 800D93EC
  W16(c->r[2]+0x000002FAu,c->r[3]); // 800D93F0
  c->r[0]=mfspr(c,274); // 800D93F4
  W32(c->r[2]+0x0000000Cu,c->r[0]); // 800D93F8
  {uint32_t ea=c->r[2]+0x00000010u; for(int i=4;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D93FC
  c->r[27]=mfspr(c,26); // 800D9400
  c->r[28]=c->lr; // 800D9404
  c->r[29]=mfspr(c,275); // 800D9408
  c->r[30]=c->ctr; // 800D940C
  c->r[31]=mfspr(c,1); // 800D9410
  {uint32_t ea=c->r[2]+0x00000080u; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9414
  c->lr=0x800D941Cu; f_800DACE0(c); // 800D9418
  c->r[2]=0u+0x80210000u; // 800D941C
  c->r[2]=c->r[2]|0x0000C77Cu; // 800D9420
  c->r[3]=0u+0x00000001u; // 800D9424
  W8(c->r[2]+0x0000000Cu,c->r[3]); // 800D9428
  c->r[2]=0u+0x802B0000u; // 800D942C
  c->r[2]=c->r[2]|0x0000EEF4u; // 800D9430
  c->r[0]=R32(c->r[2]+0x0000008Cu); // 800D9434
  /* sync */ // 800D9438
  c->msr=c->r[0]; // 800D943C
  /* sync */ // 800D9440
  c->r[0]=R32(c->r[2]+0x00000080u); // 800D9444
  c->lr=c->r[0]; // 800D9448
  c->r[0]=R32(c->r[2]+0x00000084u); // 800D944C
  c->ctr=c->r[0]; // 800D9450
  c->r[0]=R32(c->r[2]+0x00000088u); // 800D9454
  mtspr(c,1,c->r[0]); // 800D9458
  c->r[0]=R32(c->r[2]+0x00000094u); // 800D945C
  mtspr(c,18,c->r[0]); // 800D9460
  c->r[0]=R32(c->r[2]+0x00000090u); // 800D9464
  mtspr(c,19,c->r[0]); // 800D9468
  {uint32_t ea=c->r[2]+0x0000000Cu; for(int i=3;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D946C
  c->r[0]=R32(c->r[2]+0x00000000u); // 800D9470
  c->r[1]=R32(c->r[2]+0x00000004u); // 800D9474
  c->r[2]=R32(c->r[2]+0x00000008u); // 800D9478
  f_800D9C28(c); return; // 800D947C
}

// TRKExceptionHandler
void f_800D9480(Ctx* __restrict c) {
  trace_call(0x800D9480u);
  c->r[2]=0u+0x80210000u; // 800D9480
  c->r[2]=c->r[2]|0x0000C77Cu; // 800D9484
  W16(c->r[2]+0x00000008u,c->r[3]); // 800D9488
  c->r[3]=mfspr(c,26); // 800D948C
  W32(c->r[2]+0x00000000u,c->r[3]); // 800D9490
  c->r[3]=R16(c->r[2]+0x00000008u); // 800D9494
  cmps(c,0,(int32_t)c->r[3],512); // 800D9498
  if (crb(c,2)) { goto L_800D94EC; } // 800D949C
  cmps(c,0,(int32_t)c->r[3],768); // 800D94A0
  if (crb(c,2)) { goto L_800D94EC; } // 800D94A4
  cmps(c,0,(int32_t)c->r[3],1024); // 800D94A8
  if (crb(c,2)) { goto L_800D94EC; } // 800D94AC
  cmps(c,0,(int32_t)c->r[3],1536); // 800D94B0
  if (crb(c,2)) { goto L_800D94EC; } // 800D94B4
  cmps(c,0,(int32_t)c->r[3],1792); // 800D94B8
  if (crb(c,2)) { goto L_800D94EC; } // 800D94BC
  cmps(c,0,(int32_t)c->r[3],2048); // 800D94C0
  if (crb(c,2)) { goto L_800D94EC; } // 800D94C4
  cmps(c,0,(int32_t)c->r[3],4096); // 800D94C8
  if (crb(c,2)) { goto L_800D94EC; } // 800D94CC
  cmps(c,0,(int32_t)c->r[3],4352); // 800D94D0
  if (crb(c,2)) { goto L_800D94EC; } // 800D94D4
  cmps(c,0,(int32_t)c->r[3],4608); // 800D94D8
  if (crb(c,2)) { goto L_800D94EC; } // 800D94DC
  cmps(c,0,(int32_t)c->r[3],4864); // 800D94E0
  if (crb(c,2)) { goto L_800D94EC; } // 800D94E4
  goto L_800D94F8; // 800D94E8
L_800D94EC:;
  c->r[3]=mfspr(c,26); // 800D94EC
  c->r[3]=c->r[3]+0x00000004u; // 800D94F0
  mtspr(c,26,c->r[3]); // 800D94F4
L_800D94F8:;
  c->r[2]=0u+0x80210000u; // 800D94F8
  c->r[2]=c->r[2]|0x0000C77Cu; // 800D94FC
  c->r[3]=0u+0x00000001u; // 800D9500
  W8(c->r[2]+0x0000000Du,c->r[3]); // 800D9504
  c->r[3]=mfspr(c,275); // 800D9508
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 800D950C
  c->r[2]=mfspr(c,273); // 800D9510
  c->r[3]=mfspr(c,274); // 800D9514
  return; /* rfi */ // 800D9518
}

// TRKSwapAndGo
void f_800D951C(Ctx* __restrict c) {
  trace_call(0x800D951Cu);
  c->r[3]=0u+0x802B0000u; // 800D951C
  c->r[3]=c->r[3]|0x0000EEF4u; // 800D9520
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9524
  c->r[0]=c->msr; // 800D9528
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 800D952C
  c->r[0]=c->lr; // 800D9530
  W32(c->r[3]+0x00000080u,c->r[0]); // 800D9534
  c->r[0]=c->ctr; // 800D9538
  W32(c->r[3]+0x00000084u,c->r[0]); // 800D953C
  c->r[0]=mfspr(c,1); // 800D9540
  W32(c->r[3]+0x00000088u,c->r[0]); // 800D9544
  c->r[0]=mfspr(c,18); // 800D9548
  W32(c->r[3]+0x00000094u,c->r[0]); // 800D954C
  c->r[0]=mfspr(c,19); // 800D9550
  W32(c->r[3]+0x00000090u,c->r[0]); // 800D9554
  c->r[1]=0u+0xFFFF8002u; // 800D9558
  c->r[1]=~(c->r[1]|c->r[1]); // 800D955C
  c->r[3]=c->msr; // 800D9560
  c->r[3]=c->r[3]&c->r[1]; // 800D9564
  c->msr=c->r[3]; // 800D9568
  c->r[2]=0u+0x802B0000u; // 800D956C
  c->r[2]=c->r[2]|0x0000EEF4u; // 800D9570
  c->r[2]=R32(c->r[2]+0x000000A0u); // 800D9574
  c->r[2]=R8(c->r[2]+0x00000000u); // 800D9578
  cmps(c,0,(int32_t)c->r[2],0); // 800D957C
  if (crb(c,2)) { goto L_800D9598; } // 800D9580
  c->r[2]=0u+0x802B0000u; // 800D9584
  c->r[2]=c->r[2]|0x0000EEF4u; // 800D9588
  c->r[3]=0u+0x00000001u; // 800D958C
  W8(c->r[2]+0x0000009Cu,c->r[3]); // 800D9590
  f_800D95E0(c); return; // 800D9594
L_800D9598:;
  c->r[2]=0u+0x80210000u; // 800D9598
  c->r[2]=c->r[2]|0x0000C77Cu; // 800D959C
  c->r[3]=0u+0x00000000u; // 800D95A0
  W8(c->r[2]+0x0000000Cu,c->r[3]); // 800D95A4
  c->lr=0x800D95ACu; f_800DAE98(c); // 800D95A8
  c->r[2]=0u+0x802B0000u; // 800D95AC
  c->r[2]=c->r[2]|0x0000EF98u; // 800D95B0
  {uint32_t ea=c->r[2]+0x00000080u; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D95B4
  mtspr(c,26,c->r[27]); // 800D95B8
  c->lr=c->r[28]; // 800D95BC
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[29]&0xFFFFFFFFu); // 800D95C0
  c->ctr=c->r[30]; // 800D95C4
  mtspr(c,1,c->r[31]); // 800D95C8
  {uint32_t ea=c->r[2]+0x0000000Cu; for(int i=3;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D95CC
  c->r[0]=R32(c->r[2]+0x00000000u); // 800D95D0
  c->r[1]=R32(c->r[2]+0x00000004u); // 800D95D4
  c->r[2]=R32(c->r[2]+0x00000008u); // 800D95D8
  return; /* rfi */ // 800D95DC
}

// TRKInterruptHandlerEnableInterrupts
void f_800D95E0(Ctx* __restrict c) {
  trace_call(0x800D95E0u);
  c->r[2]=0u+0x802B0000u; // 800D95E0
  c->r[2]=c->r[2]|0x0000EEF4u; // 800D95E4
  c->r[0]=R32(c->r[2]+0x0000008Cu); // 800D95E8
  /* sync */ // 800D95EC
  c->msr=c->r[0]; // 800D95F0
  /* sync */ // 800D95F4
  c->r[0]=R32(c->r[2]+0x00000080u); // 800D95F8
  c->lr=c->r[0]; // 800D95FC
  c->r[0]=R32(c->r[2]+0x00000084u); // 800D9600
  c->ctr=c->r[0]; // 800D9604
  c->r[0]=R32(c->r[2]+0x00000088u); // 800D9608
  mtspr(c,1,c->r[0]); // 800D960C
  c->r[0]=R32(c->r[2]+0x00000094u); // 800D9610
  mtspr(c,18,c->r[0]); // 800D9614
  c->r[0]=R32(c->r[2]+0x00000090u); // 800D9618
  mtspr(c,19,c->r[0]); // 800D961C
  {uint32_t ea=c->r[2]+0x0000000Cu; for(int i=3;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D9620
  c->r[0]=R32(c->r[2]+0x00000000u); // 800D9624
  c->r[1]=R32(c->r[2]+0x00000004u); // 800D9628
  c->r[2]=R32(c->r[2]+0x00000008u); // 800D962C
  f_800D9C28(c); return; // 800D9630
}

// ReadFPSCR
void f_800D9634(Ctx* __restrict c) {
  trace_call(0x800D9634u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9634
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800D9638
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,31,ea,0,0);} // 800D963C
  c->f[31]=u2d((uint64_t)c->fpscr); // 800D9640
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[31]);} // 800D9644
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,31,ea,0,0);} // 800D9648
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800D964C
  c->r[1]=c->r[1]+0x00000040u; // 800D9650
  return; // 800D9654
}

// WriteFPSCR
void f_800D9658(Ctx* __restrict c) {
  trace_call(0x800D9658u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9658
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800D965C
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,31,ea,0,0);} // 800D9660
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=RF64(ea);} // 800D9664
  c->fpscr=(uint32_t)d2u(c->f[31]); // 800D9668
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,31,ea,0,0);} // 800D966C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800D9670
  c->r[1]=c->r[1]+0x00000040u; // 800D9674
  return; // 800D9678
}

// TRKTargetSetInputPendingPtr
void f_800D967C(Ctx* __restrict c) {
  trace_call(0x800D967Cu);
  c->r[4]=0u+0x802C0000u; // 800D967C
  c->r[4]=c->r[4]+0xFFFFEEF4u; // 800D9680
  W32(c->r[4]+0x000000A0u,c->r[3]); // 800D9684
  return; // 800D9688
}

// TRKTargetStop
void f_800D968C(Ctx* __restrict c) {
  trace_call(0x800D968Cu);
  c->r[3]=0u+0x802C0000u; // 800D968C
  c->r[0]=0u+0x00000001u; // 800D9690
  c->r[4]=c->r[3]+0xFFFFEEF4u; // 800D9694
  c->r[3]=0u+0x00000000u; // 800D9698
  W32(c->r[4]+0x00000098u,c->r[0]); // 800D969C
  return; // 800D96A0
}

// TRKTargetSetStopped
void f_800D96A4(Ctx* __restrict c) {
  trace_call(0x800D96A4u);
  c->r[4]=0u+0x802C0000u; // 800D96A4
  c->r[4]=c->r[4]+0xFFFFEEF4u; // 800D96A8
  W32(c->r[4]+0x00000098u,c->r[3]); // 800D96AC
  return; // 800D96B0
}

// TRKTargetStopped
void f_800D96B4(Ctx* __restrict c) {
  trace_call(0x800D96B4u);
  c->r[3]=0u+0x802C0000u; // 800D96B4
  c->r[3]=c->r[3]+0xFFFFEEF4u; // 800D96B8
  c->r[3]=R32(c->r[3]+0x00000098u); // 800D96BC
  return; // 800D96C0
}

// TRKTargetSupportRequest
void f_800D96C4(Ctx* __restrict c) {
  trace_call(0x800D96C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D96C4
  c->r[0]=c->lr; // 800D96C8
  c->r[3]=0u+0x802C0000u; // 800D96CC
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D96D0
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D96D4
  c->r[31]=c->r[3]+0xFFFFEF98u; // 800D96D8
  c->r[27]=R32(c->r[31]+0x0000000Cu); // 800D96DC
  cmps(c,0,(int32_t)c->r[27],209); // 800D96E0
  if (crb(c,2)) { goto L_800D9724; } // 800D96E4
  cmps(c,0,(int32_t)c->r[27],208); // 800D96E8
  if (crb(c,2)) { goto L_800D9724; } // 800D96EC
  cmps(c,0,(int32_t)c->r[27],210); // 800D96F0
  if (crb(c,2)) { goto L_800D9724; } // 800D96F4
  cmps(c,0,(int32_t)c->r[27],211); // 800D96F8
  if (crb(c,2)) { goto L_800D9724; } // 800D96FC
  cmps(c,0,(int32_t)c->r[27],212); // 800D9700
  if (crb(c,2)) { goto L_800D9724; } // 800D9704
  c->r[3]=c->r[1]+0x00000010u; // 800D9708
  c->r[4]=0u+0x00000004u; // 800D970C
  c->lr=0x800D9714u; f_800D69E4(c); // 800D9710
  c->r[3]=c->r[1]+0x00000010u; // 800D9714
  c->lr=0x800D971Cu; f_800D69FC(c); // 800D9718
  c->r[3]=0u+0x00000000u; // 800D971C
  goto L_800D98B0; // 800D9720
L_800D9724:;
  cmps(c,0,(int32_t)c->r[27],210); // 800D9724
  if (!crb(c,2)) { goto L_800D9778; } // 800D9728
  c->r[3]=0u+0x802C0000u; // 800D972C
  c->r[6]=c->r[1]+0x0000000Cu; // 800D9730
  c->r[4]=c->r[3]+0xFFFFEF98u; // 800D9734
  c->r[0]=R32(c->r[4]+0x00000014u); // 800D9738
  c->r[3]=R32(c->r[4]+0x00000010u); // 800D973C
  c->r[5]=R32(c->r[4]+0x00000018u); // 800D9740
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800D9744
  c->lr=0x800D974Cu; f_800D8C28(c); // 800D9748
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D974C
  c->r[30]=c->r[3]|c->r[3]; // 800D9750
  cmps(c,0,(int32_t)c->r[0],0); // 800D9754
  if (!crb(c,2)) { goto L_800D976C; } // 800D9758
  cmps(c,0,(int32_t)c->r[30],0); // 800D975C
  if (crb(c,2)) { goto L_800D976C; } // 800D9760
  c->r[0]=0u+0x00000001u; // 800D9764
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D9768
L_800D976C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D976C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D9770
  goto L_800D9898; // 800D9774
L_800D9778:;
  cmps(c,0,(int32_t)c->r[27],211); // 800D9778
  if (!crb(c,2)) { goto L_800D97C0; } // 800D977C
  c->r[3]=0u+0x802C0000u; // 800D9780
  c->r[4]=c->r[1]+0x0000000Cu; // 800D9784
  c->r[3]=c->r[3]+0xFFFFEF98u; // 800D9788
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D978C
  c->lr=0x800D9794u; f_800D8B40(c); // 800D9790
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D9794
  c->r[30]=c->r[3]|c->r[3]; // 800D9798
  cmps(c,0,(int32_t)c->r[0],0); // 800D979C
  if (!crb(c,2)) { goto L_800D97B4; } // 800D97A0
  cmps(c,0,(int32_t)c->r[30],0); // 800D97A4
  if (crb(c,2)) { goto L_800D97B4; } // 800D97A8
  c->r[0]=0u+0x00000001u; // 800D97AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D97B0
L_800D97B4:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D97B4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D97B8
  goto L_800D9898; // 800D97BC
L_800D97C0:;
  cmps(c,0,(int32_t)c->r[27],212); // 800D97C0
  if (!crb(c,2)) { goto L_800D982C; } // 800D97C4
  c->r[3]=0u+0x802C0000u; // 800D97C8
  c->r[4]=c->r[1]+0x00000008u; // 800D97CC
  c->r[29]=c->r[3]+0xFFFFEF98u; // 800D97D0
  c->r[6]=c->r[1]+0x0000000Cu; // 800D97D4
  c->r[3]=R32(c->r[29]+0x00000014u); // 800D97D8
  c->r[0]=R32(c->r[29]+0x00000018u); // 800D97DC
  c->r[7]=R32(c->r[3]+0x00000000u); // 800D97E0
  c->r[3]=R32(c->r[29]+0x00000010u); // 800D97E4
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800D97E8
  W32(c->r[1]+0x00000008u,c->r[7]); // 800D97EC
  c->lr=0x800D97F4u; f_800D8A30(c); // 800D97F0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D97F4
  c->r[30]=c->r[3]|c->r[3]; // 800D97F8
  cmps(c,0,(int32_t)c->r[0],0); // 800D97FC
  if (!crb(c,2)) { goto L_800D9814; } // 800D9800
  cmps(c,0,(int32_t)c->r[30],0); // 800D9804
  if (crb(c,2)) { goto L_800D9814; } // 800D9808
  c->r[0]=0u+0x00000001u; // 800D980C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D9810
L_800D9814:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D9814
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D9818
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800D981C
  c->r[3]=R32(c->r[29]+0x00000014u); // 800D9820
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D9824
  goto L_800D9898; // 800D9828
L_800D982C:;
  c->r[3]=0u+0x802C0000u; // 800D982C
  c->r[0]=addc(c,~c->r[27],0x000000D1u,1); // 800D9830
  c->r[29]=c->r[3]+0xFFFFEF98u; // 800D9834
  c->r[6]=c->r[1]+0x0000000Cu; // 800D9838
  c->r[28]=R32(c->r[29]+0x00000014u); // 800D983C
  c->r[0]=cntlz(c->r[0]); // 800D9840
  c->r[3]=R32(c->r[29]+0x00000010u); // 800D9844
  c->r[8]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D9848
  c->r[4]=R32(c->r[29]+0x00000018u); // 800D984C
  c->r[5]=c->r[28]|c->r[28]; // 800D9850
  c->r[7]=0u+0x00000001u; // 800D9854
  c->lr=0x800D985Cu; f_800D8EC4(c); // 800D9858
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D985C
  c->r[30]=c->r[3]|c->r[3]; // 800D9860
  cmps(c,0,(int32_t)c->r[0],0); // 800D9864
  if (!crb(c,2)) { goto L_800D987C; } // 800D9868
  cmps(c,0,(int32_t)c->r[30],0); // 800D986C
  if (crb(c,2)) { goto L_800D987C; } // 800D9870
  c->r[0]=0u+0x00000001u; // 800D9874
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D9878
L_800D987C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D987C
  cmps(c,0,(int32_t)c->r[27],209); // 800D9880
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800D9884
  if (!crb(c,2)) { goto L_800D9898; } // 800D9888
  c->r[3]=R32(c->r[29]+0x00000018u); // 800D988C
  c->r[4]=R32(c->r[28]+0x00000000u); // 800D9890
  c->lr=0x800D9898u; f_800D9194(c); // 800D9894
L_800D9898:;
  c->r[4]=0u+0x802C0000u; // 800D9898
  c->r[3]=c->r[30]|c->r[30]; // 800D989C
  c->r[5]=c->r[4]+0xFFFFEF98u; // 800D98A0
  c->r[4]=R32(c->r[5]+0x00000080u); // 800D98A4
  c->r[0]=c->r[4]+0x00000004u; // 800D98A8
  W32(c->r[5]+0x00000080u,c->r[0]); // 800D98AC
L_800D98B0:;
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D98B0
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D98B4
  c->lr=c->r[0]; // 800D98B8
  c->r[1]=c->r[1]+0x00000040u; // 800D98BC
  return; // 800D98C0
}

// TRKTargetGetPC
void f_800D98C4(Ctx* __restrict c) {
  trace_call(0x800D98C4u);
  c->r[3]=0u+0x802C0000u; // 800D98C4
  c->r[3]=c->r[3]+0xFFFFEF98u; // 800D98C8
  c->r[3]=R32(c->r[3]+0x00000080u); // 800D98CC
  return; // 800D98D0
}

// TRKTargetStepOutOfRange
void f_800D98D4(Ctx* __restrict c) {
  trace_call(0x800D98D4u);
  cmps(c,0,(int32_t)c->r[5],0); // 800D98D4
  if (crb(c,2)) { goto L_800D98E4; } // 800D98D8
  c->r[3]=0u+0x00000703u; // 800D98DC
  return; // 800D98E0
L_800D98E4:;
  c->r[5]=0u+0x802C0000u; // 800D98E4
  c->r[7]=0u+0x00000001u; // 800D98E8
  c->r[5]=c->r[5]+0xFFFFEF98u; // 800D98EC
  c->r[6]=0u+0x80220000u; // 800D98F0
  c->r[0]=R32(c->r[5]+0x000001F8u); // 800D98F4
  c->r[6]=c->r[6]+0xFFFFC78Cu; // 800D98F8
  cmps(c,0,(int32_t)c->r[7],0); // 800D98FC
  W32(c->r[6]+0x00000004u,c->r[7]); // 800D9900
  c->r[0]=c->r[0]|0x00000400u; // 800D9904
  W32(c->r[6]+0x0000000Cu,c->r[3]); // 800D9908
  W32(c->r[6]+0x00000010u,c->r[4]); // 800D990C
  W32(c->r[6]+0x00000000u,c->r[7]); // 800D9910
  W32(c->r[5]+0x000001F8u,c->r[0]); // 800D9914
  if (crb(c,2)) { goto L_800D9924; } // 800D9918
  cmps(c,0,(int32_t)c->r[7],16); // 800D991C
  if (!crb(c,2)) { goto L_800D9938; } // 800D9920
L_800D9924:;
  c->r[3]=0u+0x80220000u; // 800D9924
  c->r[4]=c->r[3]+0xFFFFC78Cu; // 800D9928
  c->r[3]=R32(c->r[4]+0x00000008u); // 800D992C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D9930
  W32(c->r[4]+0x00000008u,c->r[0]); // 800D9934
L_800D9938:;
  c->r[3]=0u+0x802C0000u; // 800D9938
  c->r[0]=0u+0x00000000u; // 800D993C
  c->r[4]=c->r[3]+0xFFFFEEF4u; // 800D9940
  c->r[3]=0u+0x00000000u; // 800D9944
  W32(c->r[4]+0x00000098u,c->r[0]); // 800D9948
  return; // 800D994C
}

// TRKTargetSingleStep
void f_800D9950(Ctx* __restrict c) {
  trace_call(0x800D9950u);
  cmps(c,0,(int32_t)c->r[4],0); // 800D9950
  if (crb(c,2)) { goto L_800D9960; } // 800D9954
  c->r[3]=0u+0x00000703u; // 800D9958
  return; // 800D995C
L_800D9960:;
  c->r[4]=0u+0x802C0000u; // 800D9960
  c->r[5]=0u+0x80220000u; // 800D9964
  c->r[4]=c->r[4]+0xFFFFEF98u; // 800D9968
  c->r[7]=0u+0x00000000u; // 800D996C
  c->r[0]=R32(c->r[4]+0x000001F8u); // 800D9970
  c->r[6]=c->r[5]+0xFFFFC78Cu; // 800D9974
  c->r[5]=0u+0x00000001u; // 800D9978
  W32(c->r[6]+0x00000004u,c->r[7]); // 800D997C
  c->r[0]=c->r[0]|0x00000400u; // 800D9980
  W32(c->r[6]+0x00000008u,c->r[3]); // 800D9984
  W32(c->r[6]+0x00000000u,c->r[5]); // 800D9988
  W32(c->r[4]+0x000001F8u,c->r[0]); // 800D998C
  goto L_800D9998; // 800D9990
  if (!crb(c,2)) { goto L_800D99A4; } // 800D9994
L_800D9998:;
  c->r[3]=R32(c->r[6]+0x00000008u); // 800D9998
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D999C
  W32(c->r[6]+0x00000008u,c->r[0]); // 800D99A0
L_800D99A4:;
  c->r[3]=0u+0x802C0000u; // 800D99A4
  c->r[0]=0u+0x00000000u; // 800D99A8
  c->r[4]=c->r[3]+0xFFFFEEF4u; // 800D99AC
  c->r[3]=0u+0x00000000u; // 800D99B0
  W32(c->r[4]+0x00000098u,c->r[0]); // 800D99B4
  return; // 800D99B8
}

// TRKTargetAddExceptionInfo
void f_800D99BC(Ctx* __restrict c) {
  trace_call(0x800D99BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D99BC
  c->r[0]=c->lr; // 800D99C0
  c->r[4]=0u+0x00000000u; // 800D99C4
  c->r[5]=0u+0x00000040u; // 800D99C8
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D99CC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800D99D0
  c->r[31]=c->r[3]|c->r[3]; // 800D99D4
  c->r[3]=c->r[1]+0x0000000Cu; // 800D99D8
  c->lr=0x800D99E0u; f_8000446C(c); // 800D99DC
  c->r[3]=0u+0x80220000u; // 800D99E0
  c->r[5]=0u+0x00000040u; // 800D99E4
  c->r[4]=R32(c->r[3]+0xFFFFC77Cu); // 800D99E8
  c->r[0]=0u+0x00000091u; // 800D99EC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D99F0
  c->r[3]=c->r[1]+0x00000008u; // 800D99F4
  W8(c->r[1]+0x00000010u,c->r[0]); // 800D99F8
  W32(c->r[1]+0x00000014u,c->r[4]); // 800D99FC
  c->lr=0x800D9A04u; f_800DA87C(c); // 800D9A00
  c->r[3]=0u+0x80220000u; // 800D9A04
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D9A08
  c->r[4]=c->r[3]+0xFFFFC77Cu; // 800D9A0C
  c->r[3]=c->r[31]|c->r[31]; // 800D9A10
  c->r[0]=R16(c->r[4]+0x00000008u); // 800D9A14
  c->r[4]=c->r[1]+0x0000000Cu; // 800D9A18
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D9A1C
  c->r[5]=0u+0x00000040u; // 800D9A20
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D9A24
  c->lr=0x800D9A2Cu; f_800D7104(c); // 800D9A28
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D9A2C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800D9A30
  c->lr=c->r[0]; // 800D9A34
  c->r[1]=c->r[1]+0x00000060u; // 800D9A38
  return; // 800D9A3C
}

// TRKTargetAddStopInfo
void f_800D9A40(Ctx* __restrict c) {
  trace_call(0x800D9A40u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9A40
  c->r[0]=c->lr; // 800D9A44
  c->r[4]=0u+0x00000000u; // 800D9A48
  c->r[5]=0u+0x00000040u; // 800D9A4C
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D9A50
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800D9A54
  c->r[31]=c->r[3]|c->r[3]; // 800D9A58
  c->r[3]=c->r[1]+0x0000000Cu; // 800D9A5C
  c->lr=0x800D9A64u; f_8000446C(c); // 800D9A60
  c->r[3]=0u+0x802C0000u; // 800D9A64
  c->r[5]=0u+0x00000040u; // 800D9A68
  c->r[3]=c->r[3]+0xFFFFEF98u; // 800D9A6C
  c->r[0]=0u+0x00000090u; // 800D9A70
  c->r[4]=R32(c->r[3]+0x00000080u); // 800D9A74
  c->r[3]=c->r[1]+0x00000008u; // 800D9A78
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D9A7C
  W8(c->r[1]+0x00000010u,c->r[0]); // 800D9A80
  W32(c->r[1]+0x00000014u,c->r[4]); // 800D9A84
  c->lr=0x800D9A8Cu; f_800DA87C(c); // 800D9A88
  c->r[3]=0u+0x802C0000u; // 800D9A8C
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D9A90
  c->r[4]=c->r[3]+0xFFFFEF98u; // 800D9A94
  c->r[3]=c->r[31]|c->r[31]; // 800D9A98
  c->r[0]=R32(c->r[4]+0x000002F8u); // 800D9A9C
  c->r[4]=c->r[1]+0x0000000Cu; // 800D9AA0
  W32(c->r[1]+0x00000018u,c->r[5]); // 800D9AA4
  c->r[5]=0u+0x00000040u; // 800D9AA8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800D9AAC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D9AB0
  c->lr=0x800D9AB8u; f_800D7104(c); // 800D9AB4
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D9AB8
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800D9ABC
  c->lr=c->r[0]; // 800D9AC0
  c->r[1]=c->r[1]+0x00000060u; // 800D9AC4
  return; // 800D9AC8
}

// TRKTargetInterrupt
void f_800D9ACC(Ctx* __restrict c) {
  trace_call(0x800D9ACCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9ACC
  c->r[0]=c->lr; // 800D9AD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9AD4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D9AD8
  c->r[3]=0u+0x00000000u; // 800D9ADC
  cmps(c,0,(int32_t)c->r[0],5); // 800D9AE0
  if (!crb(c,0)) { goto L_800D9C18; } // 800D9AE4
  cmps(c,0,(int32_t)c->r[0],3); // 800D9AE8
  if (!crb(c,0)) { goto L_800D9AF4; } // 800D9AEC
  goto L_800D9C18; // 800D9AF0
L_800D9AF4:;
  c->r[4]=0u+0x80220000u; // 800D9AF4
  c->r[5]=c->r[4]+0xFFFFC78Cu; // 800D9AF8
  c->r[0]=R32(c->r[5]+0x00000000u); // 800D9AFC
  cmps(c,0,(int32_t)c->r[0],0); // 800D9B00
  if (crb(c,2)) { goto L_800D9BF0; } // 800D9B04
  c->r[4]=0u+0x802C0000u; // 800D9B08
  c->r[7]=0u+0x00000001u; // 800D9B0C
  c->r[6]=c->r[4]+0xFFFFEF98u; // 800D9B10
  c->r[0]=R32(c->r[6]+0x000001F8u); // 800D9B14
  c->r[0]=rotl(c->r[0],0)&0xFFFFFBFFu; // 800D9B18
  W32(c->r[6]+0x000001F8u,c->r[0]); // 800D9B1C
  if (crb(c,2)) { goto L_800D9B84; } // 800D9B20
  c->r[0]=R32(c->r[6]+0x000002F8u); // 800D9B24
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800D9B28
  cmpu(c,0,c->r[0],0x00000D00u); // 800D9B2C
  if (!crb(c,2)) { goto L_800D9B84; } // 800D9B30
  c->r[0]=R32(c->r[5]+0x00000004u); // 800D9B34
  cmps(c,0,(int32_t)c->r[0],1); // 800D9B38
  if (crb(c,2)) { goto L_800D9B64; } // 800D9B3C
  if (!crb(c,0)) { goto L_800D9B84; } // 800D9B40
  cmps(c,0,(int32_t)c->r[0],0); // 800D9B44
  if (!crb(c,0)) { goto L_800D9B50; } // 800D9B48
  goto L_800D9B84; // 800D9B4C
L_800D9B50:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 800D9B50
  cmpu(c,0,c->r[0],0x00000000u); // 800D9B54
  if (crb(c,2)) { goto L_800D9B84; } // 800D9B58
  c->r[7]=0u+0x00000000u; // 800D9B5C
  goto L_800D9B84; // 800D9B60
L_800D9B64:;
  c->r[4]=R32(c->r[6]+0x00000080u); // 800D9B64
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800D9B68
  cmpu(c,0,c->r[4],c->r[0]); // 800D9B6C
  if (crb(c,0)) { goto L_800D9B84; } // 800D9B70
  c->r[0]=R32(c->r[5]+0x00000010u); // 800D9B74
  cmpu(c,0,c->r[4],c->r[0]); // 800D9B78
  if (crb(c,1)) { goto L_800D9B84; } // 800D9B7C
  c->r[7]=0u+0x00000000u; // 800D9B80
L_800D9B84:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D9B84
  if (crb(c,2)) { goto L_800D9B9C; } // 800D9B88
  c->r[4]=0u+0x80220000u; // 800D9B8C
  c->r[0]=0u+0x00000000u; // 800D9B90
  W32(c->r[4]+0xFFFFC78Cu,c->r[0]); // 800D9B94
  goto L_800D9BF0; // 800D9B98
L_800D9B9C:;
  c->r[4]=0u+0x80220000u; // 800D9B9C
  c->r[0]=R32(c->r[6]+0x000001F8u); // 800D9BA0
  c->r[4]=c->r[4]+0xFFFFC78Cu; // 800D9BA4
  c->r[5]=0u+0x00000001u; // 800D9BA8
  c->r[7]=R32(c->r[4]+0x00000004u); // 800D9BAC
  c->r[0]=c->r[0]|0x00000400u; // 800D9BB0
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D9BB4
  cmps(c,0,(int32_t)c->r[7],0); // 800D9BB8
  W32(c->r[6]+0x000001F8u,c->r[0]); // 800D9BBC
  if (crb(c,2)) { goto L_800D9BCC; } // 800D9BC0
  cmps(c,0,(int32_t)c->r[7],16); // 800D9BC4
  if (!crb(c,2)) { goto L_800D9BE0; } // 800D9BC8
L_800D9BCC:;
  c->r[4]=0u+0x80220000u; // 800D9BCC
  c->r[5]=c->r[4]+0xFFFFC78Cu; // 800D9BD0
  c->r[4]=R32(c->r[5]+0x00000008u); // 800D9BD4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800D9BD8
  W32(c->r[5]+0x00000008u,c->r[0]); // 800D9BDC
L_800D9BE0:;
  c->r[4]=0u+0x802C0000u; // 800D9BE0
  c->r[0]=0u+0x00000000u; // 800D9BE4
  c->r[4]=c->r[4]+0xFFFFEEF4u; // 800D9BE8
  W32(c->r[4]+0x00000098u,c->r[0]); // 800D9BEC
L_800D9BF0:;
  c->r[4]=0u+0x80220000u; // 800D9BF0
  c->r[0]=R32(c->r[4]+0xFFFFC78Cu); // 800D9BF4
  cmps(c,0,(int32_t)c->r[0],0); // 800D9BF8
  if (!crb(c,2)) { goto L_800D9C18; } // 800D9BFC
  c->r[3]=0u+0x802C0000u; // 800D9C00
  c->r[0]=0u+0x00000001u; // 800D9C04
  c->r[4]=c->r[3]+0xFFFFEEF4u; // 800D9C08
  c->r[3]=0u+0x00000090u; // 800D9C0C
  W32(c->r[4]+0x00000098u,c->r[0]); // 800D9C10
  c->lr=0x800D9C18u; f_800D90FC(c); // 800D9C14
L_800D9C18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9C18
  c->lr=c->r[0]; // 800D9C1C
  c->r[1]=c->r[1]+0x00000010u; // 800D9C20
  return; // 800D9C24
}

// TRKPostInterruptEvent
void f_800D9C28(Ctx* __restrict c) {
  trace_call(0x800D9C28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9C28
  c->r[0]=c->lr; // 800D9C2C
  c->r[3]=0u+0x802C0000u; // 800D9C30
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9C34
  c->r[3]=c->r[3]+0xFFFFEEF4u; // 800D9C38
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 800D9C3C
  cmps(c,0,(int32_t)c->r[0],0); // 800D9C40
  if (crb(c,2)) { goto L_800D9C54; } // 800D9C44
  c->r[0]=0u+0x00000000u; // 800D9C48
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 800D9C4C
  goto L_800D9CC4; // 800D9C50
L_800D9C54:;
  c->r[3]=0u+0x802C0000u; // 800D9C54
  c->r[3]=c->r[3]+0xFFFFEF98u; // 800D9C58
  c->r[0]=R32(c->r[3]+0x000002F8u); // 800D9C5C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800D9C60
  cmps(c,0,(int32_t)c->r[0],3328); // 800D9C64
  if (crb(c,2)) { goto L_800D9C7C; } // 800D9C68
  if (!crb(c,0)) { goto L_800D9CB0; } // 800D9C6C
  cmps(c,0,(int32_t)c->r[0],1792); // 800D9C70
  if (crb(c,2)) { goto L_800D9C7C; } // 800D9C74
  goto L_800D9CB0; // 800D9C78
L_800D9C7C:;
  c->r[4]=0u+0x802C0000u; // 800D9C7C
  c->r[3]=c->r[1]+0x00000008u; // 800D9C80
  c->r[4]=c->r[4]+0xFFFFEF98u; // 800D9C84
  c->r[4]=R32(c->r[4]+0x00000080u); // 800D9C88
  c->lr=0x800D9C90u; f_800DA87C(c); // 800D9C8C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D9C90
  c->r[0]=c->r[3]+0xF0200000u; // 800D9C94
  cmpu(c,0,c->r[0],0x00000000u); // 800D9C98
  if (!crb(c,2)) { goto L_800D9CA8; } // 800D9C9C
  c->r[4]=0u+0x00000005u; // 800D9CA0
  goto L_800D9CB4; // 800D9CA4
L_800D9CA8:;
  c->r[4]=0u+0x00000003u; // 800D9CA8
  goto L_800D9CB4; // 800D9CAC
L_800D9CB0:;
  c->r[4]=0u+0x00000004u; // 800D9CB0
L_800D9CB4:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800D9CB4
  c->lr=0x800D9CBCu; f_800D69E4(c); // 800D9CB8
  c->r[3]=c->r[1]+0x0000000Cu; // 800D9CBC
  c->lr=0x800D9CC4u; f_800D69FC(c); // 800D9CC0
L_800D9CC4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D9CC4
  c->lr=c->r[0]; // 800D9CC8
  c->r[1]=c->r[1]+0x00000020u; // 800D9CCC
  return; // 800D9CD0
}

// TRKTargetAccessExtended2
void f_800D9CD4(Ctx* __restrict c) {
  trace_call(0x800D9CD4u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9CD4
  c->r[0]=c->lr; // 800D9CD8
  W32(c->r[1]+0x00000134u,c->r[0]); // 800D9CDC
  {uint32_t ea=c->r[1]+0x000000FCu; for(int i=19;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D9CE0
  c->r[23]=c->r[4]|c->r[4]; // 800D9CE4
  cmpu(c,0,c->r[23],0x0000001Fu); // 800D9CE8
  c->r[27]=c->r[3]|c->r[3]; // 800D9CEC
  c->r[24]=c->r[5]|c->r[5]; // 800D9CF0
  c->r[25]=c->r[6]|c->r[6]; // 800D9CF4
  c->r[26]=c->r[7]|c->r[7]; // 800D9CF8
  if (!crb(c,1)) { goto L_800D9D08; } // 800D9CFC
  c->r[3]=0u+0x00000701u; // 800D9D00
  goto L_800DA0F8; // 800D9D04
L_800D9D08:;
  c->r[3]=0u+0x801F0000u; // 800D9D08
  c->r[5]=0u+0x80220000u; // 800D9D0C
  c->r[29]=c->r[3]+0x00004B68u; // 800D9D10
  c->r[4]=0u+0x7C990000u; // 800D9D14
  c->r[0]=R32(c->r[29]+0x00000000u); // 800D9D18
  c->r[31]=c->r[5]+0xFFFFC77Cu; // 800D9D1C
  c->r[8]=R32(c->r[29]+0x00000004u); // 800D9D20
  c->r[3]=0u+0x4E800000u; // 800D9D24
  c->r[7]=R32(c->r[29]+0x00000024u); // 800D9D28
  c->r[6]=c->r[4]+0xFFFFE2A6u; // 800D9D2C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800D9D30
  c->r[0]=c->r[3]+0x00000020u; // 800D9D34
  c->r[19]=R32(c->r[31]+0x00000000u); // 800D9D38
  c->r[30]=0u+0x00000000u; // 800D9D3C
  c->r[22]=R32(c->r[31]+0x0000000Cu); // 800D9D40
  c->r[5]=0u+0x90830000u; // 800D9D44
  W32(c->r[1]+0x000000C8u,c->r[8]); // 800D9D48
  c->r[3]=c->r[1]+0x000000C4u; // 800D9D4C
  c->r[20]=R32(c->r[31]+0x00000004u); // 800D9D50
  c->r[4]=0u+0x00000028u; // 800D9D54
  W32(c->r[1]+0x000000E8u,c->r[7]); // 800D9D58
  c->r[21]=R32(c->r[31]+0x00000008u); // 800D9D5C
  c->r[28]=R32(c->r[29]+0x00000008u); // 800D9D60
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 800D9D64
  c->r[11]=R32(c->r[29]+0x00000010u); // 800D9D68
  c->r[10]=R32(c->r[29]+0x00000014u); // 800D9D6C
  c->r[9]=R32(c->r[29]+0x00000018u); // 800D9D70
  c->r[8]=R32(c->r[29]+0x0000001Cu); // 800D9D74
  c->r[7]=R32(c->r[29]+0x00000020u); // 800D9D78
  W32(c->r[1]+0x00000014u,c->r[19]); // 800D9D7C
  W32(c->r[1]+0x00000018u,c->r[20]); // 800D9D80
  W32(c->r[1]+0x0000001Cu,c->r[21]); // 800D9D84
  W32(c->r[1]+0x00000020u,c->r[22]); // 800D9D88
  W8(c->r[31]+0x0000000Du,c->r[30]); // 800D9D8C
  W32(c->r[1]+0x000000CCu,c->r[28]); // 800D9D90
  W32(c->r[1]+0x000000D0u,c->r[12]); // 800D9D94
  W32(c->r[1]+0x000000D4u,c->r[11]); // 800D9D98
  W32(c->r[1]+0x000000D8u,c->r[10]); // 800D9D9C
  W32(c->r[1]+0x000000DCu,c->r[9]); // 800D9DA0
  W32(c->r[1]+0x000000E0u,c->r[8]); // 800D9DA4
  W32(c->r[1]+0x000000E4u,c->r[7]); // 800D9DA8
  W32(c->r[1]+0x000000C4u,c->r[6]); // 800D9DAC
  W32(c->r[1]+0x000000C8u,c->r[5]); // 800D9DB0
  W32(c->r[1]+0x000000E8u,c->r[0]); // 800D9DB4
  c->lr=0x800D9DBCu; f_800D9194(c); // 800D9DB8
  c->r[3]=0u+0x802C0000u; // 800D9DBC
  c->r[12]=c->r[1]+0x000000C4u; // 800D9DC0
  c->r[4]=c->r[3]+0xFFFFF45Cu; // 800D9DC4
  c->r[3]=c->r[1]+0x00000008u; // 800D9DC8
  c->ctr=c->r[12]; // 800D9DCC
  if (true) { c->lr=0x800D9DD4u; dispatch(c,c->ctr); } // 800D9DD0
  c->r[3]=0u+0x801F0000u; // 800D9DD4
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D9DD8
  c->r[29]=c->r[3]+0x00004B68u; // 800D9DDC
  c->r[4]=0u+0x7C990000u; // 800D9DE0
  c->r[8]=R32(c->r[29]+0x00000000u); // 800D9DE4
  c->r[3]=0u+0x4E800000u; // 800D9DE8
  c->r[0]=R32(c->r[29]+0x00000004u); // 800D9DEC
  c->r[30]=c->r[5]|0xA0000000u; // 800D9DF0
  c->r[7]=R32(c->r[29]+0x00000024u); // 800D9DF4
  c->r[5]=c->r[4]+0xFFFFE3A6u; // 800D9DF8
  W32(c->r[1]+0x000000A0u,c->r[0]); // 800D9DFC
  c->r[0]=c->r[3]+0x00000020u; // 800D9E00
  c->r[28]=R32(c->r[29]+0x00000008u); // 800D9E04
  c->r[6]=0u+0x80830000u; // 800D9E08
  W32(c->r[1]+0x0000009Cu,c->r[8]); // 800D9E0C
  c->r[3]=c->r[1]+0x0000009Cu; // 800D9E10
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 800D9E14
  c->r[4]=0u+0x00000028u; // 800D9E18
  W32(c->r[1]+0x000000C0u,c->r[7]); // 800D9E1C
  c->r[11]=R32(c->r[29]+0x00000010u); // 800D9E20
  c->r[10]=R32(c->r[29]+0x00000014u); // 800D9E24
  c->r[9]=R32(c->r[29]+0x00000018u); // 800D9E28
  c->r[8]=R32(c->r[29]+0x0000001Cu); // 800D9E2C
  c->r[7]=R32(c->r[29]+0x00000020u); // 800D9E30
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9E34
  W32(c->r[1]+0x000000A4u,c->r[28]); // 800D9E38
  W32(c->r[1]+0x000000A8u,c->r[12]); // 800D9E3C
  W32(c->r[1]+0x000000ACu,c->r[11]); // 800D9E40
  W32(c->r[1]+0x000000B0u,c->r[10]); // 800D9E44
  W32(c->r[1]+0x000000B4u,c->r[9]); // 800D9E48
  W32(c->r[1]+0x000000B8u,c->r[8]); // 800D9E4C
  W32(c->r[1]+0x000000BCu,c->r[7]); // 800D9E50
  W32(c->r[1]+0x0000009Cu,c->r[6]); // 800D9E54
  W32(c->r[1]+0x000000A0u,c->r[5]); // 800D9E58
  W32(c->r[1]+0x000000C0u,c->r[0]); // 800D9E5C
  c->lr=0x800D9E64u; f_800D9194(c); // 800D9E60
  c->r[3]=0u+0x802C0000u; // 800D9E64
  c->r[12]=c->r[1]+0x0000009Cu; // 800D9E68
  c->r[4]=c->r[3]+0xFFFFF45Cu; // 800D9E6C
  c->r[3]=c->r[1]+0x00000008u; // 800D9E70
  c->ctr=c->r[12]; // 800D9E74
  if (true) { c->lr=0x800D9E7Cu; dispatch(c,c->ctr); } // 800D9E78
  c->r[3]=0u+0x801F0000u; // 800D9E7C
  c->r[4]=0u+0x7C910000u; // 800D9E80
  c->r[29]=c->r[3]+0x00004B68u; // 800D9E84
  c->r[3]=0u+0x4E800000u; // 800D9E88
  c->r[8]=R32(c->r[29]+0x00000000u); // 800D9E8C
  c->r[30]=0u+0x00000000u; // 800D9E90
  c->r[6]=R32(c->r[29]+0x00000004u); // 800D9E94
  c->r[5]=c->r[4]+0xFFFFE3A6u; // 800D9E98
  c->r[7]=R32(c->r[29]+0x00000024u); // 800D9E9C
  c->r[0]=c->r[3]+0x00000020u; // 800D9EA0
  W32(c->r[1]+0x00000078u,c->r[6]); // 800D9EA4
  c->r[6]=0u+0x80830000u; // 800D9EA8
  c->r[28]=R32(c->r[29]+0x00000008u); // 800D9EAC
  c->r[3]=c->r[1]+0x00000074u; // 800D9EB0
  W32(c->r[1]+0x00000074u,c->r[8]); // 800D9EB4
  c->r[4]=0u+0x00000028u; // 800D9EB8
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 800D9EBC
  W32(c->r[1]+0x00000098u,c->r[7]); // 800D9EC0
  c->r[11]=R32(c->r[29]+0x00000010u); // 800D9EC4
  c->r[10]=R32(c->r[29]+0x00000014u); // 800D9EC8
  c->r[9]=R32(c->r[29]+0x00000018u); // 800D9ECC
  c->r[8]=R32(c->r[29]+0x0000001Cu); // 800D9ED0
  c->r[7]=R32(c->r[29]+0x00000020u); // 800D9ED4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D9ED8
  W32(c->r[1]+0x0000007Cu,c->r[28]); // 800D9EDC
  W32(c->r[1]+0x00000080u,c->r[12]); // 800D9EE0
  W32(c->r[1]+0x00000084u,c->r[11]); // 800D9EE4
  W32(c->r[1]+0x00000088u,c->r[10]); // 800D9EE8
  W32(c->r[1]+0x0000008Cu,c->r[9]); // 800D9EEC
  W32(c->r[1]+0x00000090u,c->r[8]); // 800D9EF0
  W32(c->r[1]+0x00000094u,c->r[7]); // 800D9EF4
  W32(c->r[1]+0x00000074u,c->r[6]); // 800D9EF8
  W32(c->r[1]+0x00000078u,c->r[5]); // 800D9EFC
  W32(c->r[1]+0x00000098u,c->r[0]); // 800D9F00
  c->lr=0x800D9F08u; f_800D9194(c); // 800D9F04
  c->r[3]=0u+0x802C0000u; // 800D9F08
  c->r[12]=c->r[1]+0x00000074u; // 800D9F0C
  c->r[4]=c->r[3]+0xFFFFF45Cu; // 800D9F10
  c->r[3]=c->r[1]+0x00000008u; // 800D9F14
  c->ctr=c->r[12]; // 800D9F18
  if (true) { c->lr=0x800D9F20u; dispatch(c,c->ctr); } // 800D9F1C
  c->r[0]=0u+0x00000000u; // 800D9F20
  c->r[30]=rotl(c->r[27],21)&0xFFE00000u; // 800D9F24
  W32(c->r[25]+0x00000000u,c->r[0]); // 800D9F28
  c->r[29]=c->r[1]+0x0000004Cu; // 800D9F2C
  c->r[28]=c->r[1]+0x00000024u; // 800D9F30
  c->r[3]=0u+0x00000000u; // 800D9F34
  goto L_800DA0A8; // 800D9F38
L_800D9F3C:;
  cmps(c,0,(int32_t)c->r[26],0); // 800D9F3C
  if (crb(c,2)) { goto L_800D9FEC; } // 800D9F40
  c->r[3]=0u+0x801F0000u; // 800D9F44
  {uint32_t ea=c->r[3]+0x00004B90u; c->r[12]=R32(ea); c->r[3]=ea;} // 800D9F48
  c->r[0]=c->r[30]|0xE0030000u; // 800D9F4C
  c->r[11]=R32(c->r[3]+0x00000004u); // 800D9F50
  c->r[10]=R32(c->r[3]+0x00000008u); // 800D9F54
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 800D9F58
  c->r[8]=R32(c->r[3]+0x00000010u); // 800D9F5C
  c->r[7]=R32(c->r[3]+0x00000014u); // 800D9F60
  c->r[6]=R32(c->r[3]+0x00000018u); // 800D9F64
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 800D9F68
  c->r[4]=R32(c->r[3]+0x00000020u); // 800D9F6C
  c->r[3]=R32(c->r[3]+0x00000024u); // 800D9F70
  W32(c->r[1]+0x0000004Cu,c->r[12]); // 800D9F74
  W32(c->r[1]+0x00000050u,c->r[11]); // 800D9F78
  W32(c->r[1]+0x00000054u,c->r[10]); // 800D9F7C
  W32(c->r[1]+0x00000058u,c->r[9]); // 800D9F80
  W32(c->r[1]+0x0000005Cu,c->r[8]); // 800D9F84
  W32(c->r[1]+0x00000060u,c->r[7]); // 800D9F88
  W32(c->r[1]+0x00000064u,c->r[6]); // 800D9F8C
  W32(c->r[1]+0x00000068u,c->r[5]); // 800D9F90
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 800D9F94
  W32(c->r[1]+0x00000070u,c->r[3]); // 800D9F98
  if (crb(c,2)) { goto L_800D9FA4; } // 800D9F9C
  c->r[0]=c->r[30]|0xF0030000u; // 800D9FA0
L_800D9FA4:;
  c->r[3]=0u+0x4E800000u; // 800D9FA4
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800D9FA8
  c->r[0]=c->r[3]+0x00000020u; // 800D9FAC
  c->r[3]=c->r[29]|c->r[29]; // 800D9FB0
  W32(c->r[1]+0x00000070u,c->r[0]); // 800D9FB4
  c->r[4]=0u+0x00000028u; // 800D9FB8
  c->lr=0x800D9FC0u; f_800D9194(c); // 800D9FBC
  c->r[3]=0u+0x802C0000u; // 800D9FC0
  c->r[12]=c->r[1]+0x0000004Cu; // 800D9FC4
  c->r[4]=c->r[3]+0xFFFFF45Cu; // 800D9FC8
  c->r[3]=c->r[1]+0x0000000Cu; // 800D9FCC
  c->ctr=c->r[12]; // 800D9FD0
  if (true) { c->lr=0x800D9FD8u; dispatch(c,c->ctr); } // 800D9FD4
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800D9FD8
  c->r[3]=c->r[24]|c->r[24]; // 800D9FDC
  c->r[6]=R32(c->r[1]+0x00000010u); // 800D9FE0
  c->lr=0x800D9FE8u; f_800D716C(c); // 800D9FE4
  goto L_800DA094; // 800D9FE8
L_800D9FEC:;
  c->r[3]=c->r[24]|c->r[24]; // 800D9FEC
  c->r[4]=c->r[1]+0x0000000Cu; // 800D9FF0
  c->lr=0x800D9FF8u; f_800D6F20(c); // 800D9FF4
  c->r[3]=0u+0x801F0000u; // 800D9FF8
  {uint32_t ea=c->r[3]+0x00004B90u; c->r[12]=R32(ea); c->r[3]=ea;} // 800D9FFC
  cmps(c,0,(int32_t)c->r[26],0); // 800DA000
  c->r[0]=c->r[30]|0xE0030000u; // 800DA004
  c->r[11]=R32(c->r[3]+0x00000004u); // 800DA008
  c->r[10]=R32(c->r[3]+0x00000008u); // 800DA00C
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 800DA010
  c->r[8]=R32(c->r[3]+0x00000010u); // 800DA014
  c->r[7]=R32(c->r[3]+0x00000014u); // 800DA018
  c->r[6]=R32(c->r[3]+0x00000018u); // 800DA01C
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 800DA020
  c->r[4]=R32(c->r[3]+0x00000020u); // 800DA024
  c->r[3]=R32(c->r[3]+0x00000024u); // 800DA028
  W32(c->r[1]+0x00000024u,c->r[12]); // 800DA02C
  W32(c->r[1]+0x00000028u,c->r[11]); // 800DA030
  W32(c->r[1]+0x0000002Cu,c->r[10]); // 800DA034
  W32(c->r[1]+0x00000030u,c->r[9]); // 800DA038
  W32(c->r[1]+0x00000034u,c->r[8]); // 800DA03C
  W32(c->r[1]+0x00000038u,c->r[7]); // 800DA040
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 800DA044
  W32(c->r[1]+0x00000040u,c->r[5]); // 800DA048
  W32(c->r[1]+0x00000044u,c->r[4]); // 800DA04C
  W32(c->r[1]+0x00000048u,c->r[3]); // 800DA050
  if (crb(c,2)) { goto L_800DA05C; } // 800DA054
  c->r[0]=c->r[30]|0xF0030000u; // 800DA058
L_800DA05C:;
  c->r[3]=0u+0x4E800000u; // 800DA05C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA060
  c->r[0]=c->r[3]+0x00000020u; // 800DA064
  c->r[3]=c->r[28]|c->r[28]; // 800DA068
  W32(c->r[1]+0x00000048u,c->r[0]); // 800DA06C
  c->r[4]=0u+0x00000028u; // 800DA070
  c->lr=0x800DA078u; f_800D9194(c); // 800DA074
  c->r[3]=0u+0x802C0000u; // 800DA078
  c->r[12]=c->r[1]+0x00000024u; // 800DA07C
  c->r[4]=c->r[3]+0xFFFFF45Cu; // 800DA080
  c->r[3]=c->r[1]+0x0000000Cu; // 800DA084
  c->ctr=c->r[12]; // 800DA088
  if (true) { c->lr=0x800DA090u; dispatch(c,c->ctr); } // 800DA08C
  c->r[3]=0u+0x00000000u; // 800DA090
L_800DA094:;
  c->r[4]=R32(c->r[25]+0x00000000u); // 800DA094
  c->r[30]=c->r[30]+0x00200000u; // 800DA098
  c->r[27]=c->r[27]+0x00000001u; // 800DA09C
  c->r[0]=c->r[4]+0x00000008u; // 800DA0A0
  W32(c->r[25]+0x00000000u,c->r[0]); // 800DA0A4
L_800DA0A8:;
  cmpu(c,0,c->r[27],c->r[23]); // 800DA0A8
  if (crb(c,1)) { goto L_800DA0B8; } // 800DA0AC
  cmps(c,0,(int32_t)c->r[3],0); // 800DA0B0
  if (crb(c,2)) { IRQCHK(c); goto L_800D9F3C; } // 800DA0B4
L_800DA0B8:;
  c->r[0]=R8(c->r[31]+0x0000000Du); // 800DA0B8
  cmpu(c,0,c->r[0],0x00000000u); // 800DA0BC
  if (crb(c,2)) { goto L_800DA0D0; } // 800DA0C0
  c->r[0]=0u+0x00000000u; // 800DA0C4
  c->r[3]=0u+0x00000702u; // 800DA0C8
  W32(c->r[25]+0x00000000u,c->r[0]); // 800DA0CC
L_800DA0D0:;
  c->r[4]=0u+0x80220000u; // 800DA0D0
  c->r[6]=R32(c->r[1]+0x00000014u); // 800DA0D4
  c->r[7]=c->r[4]+0xFFFFC77Cu; // 800DA0D8
  c->r[5]=R32(c->r[1]+0x00000018u); // 800DA0DC
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 800DA0E0
  c->r[0]=R32(c->r[1]+0x00000020u); // 800DA0E4
  W32(c->r[7]+0x00000000u,c->r[6]); // 800DA0E8
  W32(c->r[7]+0x00000004u,c->r[5]); // 800DA0EC
  W32(c->r[7]+0x00000008u,c->r[4]); // 800DA0F0
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800DA0F4
L_800DA0F8:;
  {uint32_t ea=c->r[1]+0x000000FCu; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA0F8
  c->r[0]=R32(c->r[1]+0x00000134u); // 800DA0FC
  c->lr=c->r[0]; // 800DA100
  c->r[1]=c->r[1]+0x00000130u; // 800DA104
  return; // 800DA108
}

// TRKTargetAccessExtended1
void f_800DA10C(Ctx* __restrict c) {
  trace_call(0x800DA10Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA10C
  c->r[0]=c->lr; // 800DA110
  cmpu(c,0,c->r[4],0x00000060u); // 800DA114
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA118
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DA11C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA120
  c->r[30]=c->r[6]|c->r[6]; // 800DA124
  if (!crb(c,1)) { goto L_800DA134; } // 800DA128
  c->r[3]=0u+0x00000701u; // 800DA12C
  goto L_800DA264; // 800DA130
L_800DA134:;
  c->r[6]=0u+0x80220000u; // 800DA134
  c->r[0]=0u+0x00000000u; // 800DA138
  c->r[31]=c->r[6]+0xFFFFC77Cu; // 800DA13C
  cmpu(c,0,c->r[3],c->r[4]); // 800DA140
  c->r[6]=R32(c->r[31]+0x0000000Cu); // 800DA144
  c->r[10]=R32(c->r[31]+0x00000000u); // 800DA148
  c->r[9]=R32(c->r[31]+0x00000004u); // 800DA14C
  c->r[8]=R32(c->r[31]+0x00000008u); // 800DA150
  W8(c->r[31]+0x0000000Du,c->r[0]); // 800DA154
  W32(c->r[1]+0x00000008u,c->r[10]); // 800DA158
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 800DA15C
  W32(c->r[1]+0x00000010u,c->r[8]); // 800DA160
  W32(c->r[1]+0x00000014u,c->r[6]); // 800DA164
  W32(c->r[30]+0x00000000u,c->r[0]); // 800DA168
  if (crb(c,1)) { goto L_800DA224; } // 800DA16C
  c->r[4]=c->r[4]-c->r[3]; // 800DA170
  c->r[8]=0u+0x802C0000u; // 800DA174
  c->r[0]=c->r[4]+0x00000001u; // 800DA178
  c->r[4]=R32(c->r[30]+0x00000000u); // 800DA17C
  c->r[6]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DA180
  cmps(c,0,(int32_t)c->r[7],0); // 800DA184
  c->r[4]=c->r[4]+c->r[6]; // 800DA188
  c->r[7]=c->r[8]+0xFFFFEF98u; // 800DA18C
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DA190
  W32(c->r[30]+0x00000000u,c->r[4]); // 800DA194
  c->r[4]=c->r[7]+c->r[3]; // 800DA198
  c->r[4]=c->r[4]+0x000001A8u; // 800DA19C
  if (crb(c,2)) { goto L_800DA1B4; } // 800DA1A0
  c->r[3]=c->r[5]|c->r[5]; // 800DA1A4
  c->r[5]=c->r[0]|c->r[0]; // 800DA1A8
  c->lr=0x800DA1B0u; f_800D7008(c); // 800DA1AC
  goto L_800DA224; // 800DA1B0
L_800DA1B4:;
  c->r[3]=c->r[7]+0x000001ECu; // 800DA1B4
  cmpu(c,0,c->r[4],c->r[3]); // 800DA1B8
  if (crb(c,1)) { goto L_800DA1E0; } // 800DA1BC
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 800DA1C0
  c->r[3]=c->r[7]+0x000001E8u; // 800DA1C4
  c->r[6]=c->r[4]+c->r[6]; // 800DA1C8
  cmpu(c,0,c->r[6],c->r[3]); // 800DA1CC
  if (crb(c,0)) { goto L_800DA1E0; } // 800DA1D0
  c->r[3]=0u+0x80220000u; // 800DA1D4
  c->r[6]=0u+0x00000001u; // 800DA1D8
  W8(c->r[3]+0xFFFFC770u,c->r[6]); // 800DA1DC
L_800DA1E0:;
  c->r[3]=0u+0x802C0000u; // 800DA1E0
  c->r[3]=c->r[3]+0xFFFFEF98u; // 800DA1E4
  c->r[6]=c->r[3]+0x00000278u; // 800DA1E8
  cmpu(c,0,c->r[4],c->r[6]); // 800DA1EC
  if (crb(c,1)) { goto L_800DA218; } // 800DA1F0
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DA1F4
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800DA1F8
  c->r[3]=c->r[4]+c->r[3]; // 800DA1FC
  cmpu(c,0,c->r[3],c->r[6]); // 800DA200
  if (crb(c,0)) { goto L_800DA218; } // 800DA204
  c->r[3]=0u+0x80220000u; // 800DA208
  c->r[6]=0u+0x00000001u; // 800DA20C
  c->r[3]=c->r[3]+0xFFFFC770u; // 800DA210
  W8(c->r[3]+0x00000001u,c->r[6]); // 800DA214
L_800DA218:;
  c->r[3]=c->r[5]|c->r[5]; // 800DA218
  c->r[5]=c->r[0]|c->r[0]; // 800DA21C
  c->lr=0x800DA224u; f_800D6D98(c); // 800DA220
L_800DA224:;
  c->r[0]=R8(c->r[31]+0x0000000Du); // 800DA224
  cmpu(c,0,c->r[0],0x00000000u); // 800DA228
  if (crb(c,2)) { goto L_800DA23C; } // 800DA22C
  c->r[0]=0u+0x00000000u; // 800DA230
  c->r[3]=0u+0x00000702u; // 800DA234
  W32(c->r[30]+0x00000000u,c->r[0]); // 800DA238
L_800DA23C:;
  c->r[4]=0u+0x80220000u; // 800DA23C
  c->r[6]=R32(c->r[1]+0x00000008u); // 800DA240
  c->r[7]=c->r[4]+0xFFFFC77Cu; // 800DA244
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800DA248
  c->r[4]=R32(c->r[1]+0x00000010u); // 800DA24C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA250
  W32(c->r[7]+0x00000000u,c->r[6]); // 800DA254
  W32(c->r[7]+0x00000004u,c->r[5]); // 800DA258
  W32(c->r[7]+0x00000008u,c->r[4]); // 800DA25C
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800DA260
L_800DA264:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA264
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DA268
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DA26C
  c->lr=c->r[0]; // 800DA270
  c->r[1]=c->r[1]+0x00000020u; // 800DA274
  return; // 800DA278
}

// TRKTargetAccessFP
void f_800DA27C(Ctx* __restrict c) {
  trace_call(0x800DA27Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA27C
  c->r[0]=c->lr; // 800DA280
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800DA284
  {uint32_t ea=c->r[1]+0x000000C0u; for(int i=20;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA288
  c->r[28]=c->r[4]|c->r[4]; // 800DA28C
  cmpu(c,0,c->r[28],0x00000021u); // 800DA290
  c->r[20]=c->r[3]|c->r[3]; // 800DA294
  c->r[29]=c->r[5]|c->r[5]; // 800DA298
  c->r[30]=c->r[6]|c->r[6]; // 800DA29C
  c->r[31]=c->r[7]|c->r[7]; // 800DA2A0
  if (!crb(c,1)) { goto L_800DA2B0; } // 800DA2A4
  c->r[3]=0u+0x00000701u; // 800DA2A8
  goto L_800DA774; // 800DA2AC
L_800DA2B0:;
  c->r[3]=0u+0x80220000u; // 800DA2B0
  c->r[0]=0u+0x00000000u; // 800DA2B4
  c->r[27]=c->r[3]+0xFFFFC77Cu; // 800DA2B8
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 800DA2BC
  c->r[6]=R32(c->r[27]+0x00000000u); // 800DA2C0
  c->r[5]=R32(c->r[27]+0x00000004u); // 800DA2C4
  c->r[4]=R32(c->r[27]+0x00000008u); // 800DA2C8
  W32(c->r[1]+0x00000010u,c->r[6]); // 800DA2CC
  W32(c->r[1]+0x00000014u,c->r[5]); // 800DA2D0
  W32(c->r[1]+0x00000018u,c->r[4]); // 800DA2D4
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800DA2D8
  W8(c->r[27]+0x0000000Du,c->r[0]); // 800DA2DC
  c->lr=0x800DA2E4u; f_800D92A0(c); // 800DA2E0
  c->r[3]=c->r[3]|0x00002000u; // 800DA2E4
  c->lr=0x800DA2ECu; f_800D92A8(c); // 800DA2E8
  c->r[0]=0u+0x00000000u; // 800DA2EC
  c->r[21]=c->r[20]|c->r[20]; // 800DA2F0
  W32(c->r[30]+0x00000000u,c->r[0]); // 800DA2F4
  c->r[26]=rotl(c->r[20],21)&0xFFE00000u; // 800DA2F8
  c->r[25]=c->r[1]+0x00000098u; // 800DA2FC
  c->r[24]=c->r[1]+0x00000048u; // 800DA300
  c->r[23]=c->r[1]+0x00000070u; // 800DA304
  c->r[22]=c->r[1]+0x00000020u; // 800DA308
  c->r[3]=0u+0x00000000u; // 800DA30C
  goto L_800DA724; // 800DA310
L_800DA314:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DA314
  if (crb(c,2)) { goto L_800DA514; } // 800DA318
  c->r[3]=0u+0x801F0000u; // 800DA31C
  cmpu(c,0,c->r[21],0x00000020u); // 800DA320
  c->r[12]=c->r[3]+0x00004BB8u; // 800DA324
  c->r[11]=R32(c->r[12]+0x00000000u); // 800DA328
  c->r[10]=R32(c->r[12]+0x00000004u); // 800DA32C
  c->r[9]=R32(c->r[12]+0x00000008u); // 800DA330
  c->r[8]=R32(c->r[12]+0x0000000Cu); // 800DA334
  c->r[7]=R32(c->r[12]+0x00000010u); // 800DA338
  c->r[6]=R32(c->r[12]+0x00000014u); // 800DA33C
  c->r[5]=R32(c->r[12]+0x00000018u); // 800DA340
  c->r[4]=R32(c->r[12]+0x0000001Cu); // 800DA344
  c->r[3]=R32(c->r[12]+0x00000020u); // 800DA348
  c->r[0]=R32(c->r[12]+0x00000024u); // 800DA34C
  W32(c->r[1]+0x00000098u,c->r[11]); // 800DA350
  W32(c->r[1]+0x0000009Cu,c->r[10]); // 800DA354
  W32(c->r[1]+0x000000A0u,c->r[9]); // 800DA358
  W32(c->r[1]+0x000000A4u,c->r[8]); // 800DA35C
  W32(c->r[1]+0x000000A8u,c->r[7]); // 800DA360
  W32(c->r[1]+0x000000ACu,c->r[6]); // 800DA364
  W32(c->r[1]+0x000000B0u,c->r[5]); // 800DA368
  W32(c->r[1]+0x000000B4u,c->r[4]); // 800DA36C
  W32(c->r[1]+0x000000B8u,c->r[3]); // 800DA370
  W32(c->r[1]+0x000000BCu,c->r[0]); // 800DA374
  if (!crb(c,0)) { goto L_800DA3C4; } // 800DA378
  cmps(c,0,(int32_t)c->r[31],0); // 800DA37C
  c->r[0]=c->r[26]|0xC8030000u; // 800DA380
  if (crb(c,2)) { goto L_800DA38C; } // 800DA384
  c->r[0]=c->r[26]|0xD8030000u; // 800DA388
L_800DA38C:;
  c->r[3]=0u+0x4E800000u; // 800DA38C
  W32(c->r[1]+0x00000098u,c->r[0]); // 800DA390
  c->r[0]=c->r[3]+0x00000020u; // 800DA394
  c->r[3]=c->r[25]|c->r[25]; // 800DA398
  W32(c->r[1]+0x000000BCu,c->r[0]); // 800DA39C
  c->r[4]=0u+0x00000028u; // 800DA3A0
  c->lr=0x800DA3A8u; f_800D9194(c); // 800DA3A4
  c->r[3]=0u+0x802C0000u; // 800DA3A8
  c->r[12]=c->r[1]+0x00000098u; // 800DA3AC
  c->r[4]=c->r[3]+0xFFFFF45Cu; // 800DA3B0
  c->r[3]=c->r[1]+0x00000008u; // 800DA3B4
  c->ctr=c->r[12]; // 800DA3B8
  if (true) { c->lr=0x800DA3C0u; dispatch(c,c->ctr); } // 800DA3BC
  goto L_800DA500; // 800DA3C0
L_800DA3C4:;
  if (!crb(c,2)) { goto L_800DA408; } // 800DA3C4
  cmps(c,0,(int32_t)c->r[31],0); // 800DA3C8
  if (crb(c,2)) { goto L_800DA3DC; } // 800DA3CC
  c->r[3]=c->r[1]+0x00000008u; // 800DA3D0
  c->lr=0x800DA3D8u; f_800D9634(c); // 800DA3D4
  goto L_800DA3E4; // 800DA3D8
L_800DA3DC:;
  c->r[3]=c->r[1]+0x00000008u; // 800DA3DC
  c->lr=0x800DA3E4u; f_800D9658(c); // 800DA3E0
L_800DA3E4:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 800DA3E4
  c->r[0]=0u+0x00000000u; // 800DA3E8
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800DA3EC
  c->r[3]=0u+0xFFFFFFFFu; // 800DA3F0
  c->r[0]=c->r[4]&c->r[0]; // 800DA3F4
  c->r[3]=c->r[5]&c->r[3]; // 800DA3F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DA3FC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800DA400
  goto L_800DA500; // 800DA404
L_800DA408:;
  cmpu(c,0,c->r[21],0x00000021u); // 800DA408
  if (!crb(c,2)) { goto L_800DA500; } // 800DA40C
  cmps(c,0,(int32_t)c->r[31],0); // 800DA410
  if (!crb(c,2)) { goto L_800DA420; } // 800DA414
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800DA418
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DA41C
L_800DA420:;
  c->r[3]=0u+0x801F0000u; // 800DA420
  cmps(c,0,(int32_t)c->r[31],0); // 800DA424
  c->r[12]=c->r[3]+0x00004B68u; // 800DA428
  c->r[11]=R32(c->r[12]+0x00000000u); // 800DA42C
  c->r[10]=R32(c->r[12]+0x00000004u); // 800DA430
  c->r[9]=R32(c->r[12]+0x00000008u); // 800DA434
  c->r[8]=R32(c->r[12]+0x0000000Cu); // 800DA438
  c->r[7]=R32(c->r[12]+0x00000010u); // 800DA43C
  c->r[6]=R32(c->r[12]+0x00000014u); // 800DA440
  c->r[5]=R32(c->r[12]+0x00000018u); // 800DA444
  c->r[4]=R32(c->r[12]+0x0000001Cu); // 800DA448
  c->r[3]=R32(c->r[12]+0x00000020u); // 800DA44C
  c->r[0]=R32(c->r[12]+0x00000024u); // 800DA450
  W32(c->r[1]+0x00000048u,c->r[11]); // 800DA454
  W32(c->r[1]+0x0000004Cu,c->r[10]); // 800DA458
  W32(c->r[1]+0x00000050u,c->r[9]); // 800DA45C
  W32(c->r[1]+0x00000054u,c->r[8]); // 800DA460
  W32(c->r[1]+0x00000058u,c->r[7]); // 800DA464
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 800DA468
  W32(c->r[1]+0x00000060u,c->r[5]); // 800DA46C
  W32(c->r[1]+0x00000064u,c->r[4]); // 800DA470
  W32(c->r[1]+0x00000068u,c->r[3]); // 800DA474
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800DA478
  if (crb(c,2)) { goto L_800DA498; } // 800DA47C
  c->r[3]=0u+0x7C9F0000u; // 800DA480
  c->r[0]=0u+0x90830000u; // 800DA484
  c->r[3]=c->r[3]+0xFFFFFAA6u; // 800DA488
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800DA48C
  W32(c->r[1]+0x00000048u,c->r[3]); // 800DA490
  goto L_800DA4AC; // 800DA494
L_800DA498:;
  c->r[3]=0u+0x7C9F0000u; // 800DA498
  c->r[4]=0u+0x80830000u; // 800DA49C
  c->r[0]=c->r[3]+0xFFFFFBA6u; // 800DA4A0
  W32(c->r[1]+0x00000048u,c->r[4]); // 800DA4A4
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800DA4A8
L_800DA4AC:;
  c->r[4]=0u+0x4E800000u; // 800DA4AC
  c->r[3]=c->r[24]|c->r[24]; // 800DA4B0
  c->r[0]=c->r[4]+0x00000020u; // 800DA4B4
  c->r[4]=0u+0x00000028u; // 800DA4B8
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800DA4BC
  c->lr=0x800DA4C4u; f_800D9194(c); // 800DA4C0
  c->r[3]=0u+0x802C0000u; // 800DA4C4
  c->r[12]=c->r[1]+0x00000048u; // 800DA4C8
  c->r[4]=c->r[3]+0xFFFFF45Cu; // 800DA4CC
  c->r[3]=c->r[1]+0x00000008u; // 800DA4D0
  c->ctr=c->r[12]; // 800DA4D4
  if (true) { c->lr=0x800DA4DCu; dispatch(c,c->ctr); } // 800DA4D8
  cmps(c,0,(int32_t)c->r[31],0); // 800DA4DC
  if (crb(c,2)) { goto L_800DA500; } // 800DA4E0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800DA4E4
  c->r[4]=0u+0x00000000u; // 800DA4E8
  c->r[0]=0u+0xFFFFFFFFu; // 800DA4EC
  c->r[3]=c->r[3]&c->r[0]; // 800DA4F0
  c->r[0]=c->r[4]&c->r[4]; // 800DA4F4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800DA4F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DA4FC
L_800DA500:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 800DA500
  c->r[3]=c->r[29]|c->r[29]; // 800DA504
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800DA508
  c->lr=0x800DA510u; f_800D716C(c); // 800DA50C
  goto L_800DA710; // 800DA510
L_800DA514:;
  c->r[3]=c->r[29]|c->r[29]; // 800DA514
  c->r[4]=c->r[1]+0x00000008u; // 800DA518
  c->lr=0x800DA520u; f_800D6F20(c); // 800DA51C
  c->r[3]=0u+0x801F0000u; // 800DA520
  cmpu(c,0,c->r[21],0x00000020u); // 800DA524
  c->r[12]=c->r[3]+0x00004BB8u; // 800DA528
  c->r[20]=0u+0x00000000u; // 800DA52C
  c->r[11]=R32(c->r[12]+0x00000000u); // 800DA530
  c->r[10]=R32(c->r[12]+0x00000004u); // 800DA534
  c->r[9]=R32(c->r[12]+0x00000008u); // 800DA538
  c->r[8]=R32(c->r[12]+0x0000000Cu); // 800DA53C
  c->r[7]=R32(c->r[12]+0x00000010u); // 800DA540
  c->r[6]=R32(c->r[12]+0x00000014u); // 800DA544
  c->r[5]=R32(c->r[12]+0x00000018u); // 800DA548
  c->r[4]=R32(c->r[12]+0x0000001Cu); // 800DA54C
  c->r[3]=R32(c->r[12]+0x00000020u); // 800DA550
  c->r[0]=R32(c->r[12]+0x00000024u); // 800DA554
  W32(c->r[1]+0x00000070u,c->r[11]); // 800DA558
  W32(c->r[1]+0x00000074u,c->r[10]); // 800DA55C
  W32(c->r[1]+0x00000078u,c->r[9]); // 800DA560
  W32(c->r[1]+0x0000007Cu,c->r[8]); // 800DA564
  W32(c->r[1]+0x00000080u,c->r[7]); // 800DA568
  W32(c->r[1]+0x00000084u,c->r[6]); // 800DA56C
  W32(c->r[1]+0x00000088u,c->r[5]); // 800DA570
  W32(c->r[1]+0x0000008Cu,c->r[4]); // 800DA574
  W32(c->r[1]+0x00000090u,c->r[3]); // 800DA578
  W32(c->r[1]+0x00000094u,c->r[0]); // 800DA57C
  if (!crb(c,0)) { goto L_800DA5D0; } // 800DA580
  cmps(c,0,(int32_t)c->r[31],0); // 800DA584
  c->r[0]=c->r[26]|0xC8030000u; // 800DA588
  if (crb(c,2)) { goto L_800DA594; } // 800DA58C
  c->r[0]=c->r[26]|0xD8030000u; // 800DA590
L_800DA594:;
  c->r[3]=0u+0x4E800000u; // 800DA594
  W32(c->r[1]+0x00000070u,c->r[0]); // 800DA598
  c->r[0]=c->r[3]+0x00000020u; // 800DA59C
  c->r[3]=c->r[23]|c->r[23]; // 800DA5A0
  W32(c->r[1]+0x00000094u,c->r[0]); // 800DA5A4
  c->r[4]=0u+0x00000028u; // 800DA5A8
  c->lr=0x800DA5B0u; f_800D9194(c); // 800DA5AC
  c->r[3]=0u+0x802C0000u; // 800DA5B0
  c->r[12]=c->r[1]+0x00000070u; // 800DA5B4
  c->r[4]=c->r[3]+0xFFFFF45Cu; // 800DA5B8
  c->r[3]=c->r[1]+0x00000008u; // 800DA5BC
  c->ctr=c->r[12]; // 800DA5C0
  if (true) { c->lr=0x800DA5C8u; dispatch(c,c->ctr); } // 800DA5C4
  c->r[20]=0u+0x00000000u; // 800DA5C8
  goto L_800DA70C; // 800DA5CC
L_800DA5D0:;
  if (!crb(c,2)) { goto L_800DA614; } // 800DA5D0
  cmps(c,0,(int32_t)c->r[31],0); // 800DA5D4
  if (crb(c,2)) { goto L_800DA5E8; } // 800DA5D8
  c->r[3]=c->r[1]+0x00000008u; // 800DA5DC
  c->lr=0x800DA5E4u; f_800D9634(c); // 800DA5E0
  goto L_800DA5F0; // 800DA5E4
L_800DA5E8:;
  c->r[3]=c->r[1]+0x00000008u; // 800DA5E8
  c->lr=0x800DA5F0u; f_800D9658(c); // 800DA5EC
L_800DA5F0:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 800DA5F0
  c->r[0]=0u+0x00000000u; // 800DA5F4
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800DA5F8
  c->r[3]=0u+0xFFFFFFFFu; // 800DA5FC
  c->r[0]=c->r[4]&c->r[0]; // 800DA600
  c->r[3]=c->r[5]&c->r[3]; // 800DA604
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DA608
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800DA60C
  goto L_800DA70C; // 800DA610
L_800DA614:;
  cmpu(c,0,c->r[21],0x00000021u); // 800DA614
  if (!crb(c,2)) { goto L_800DA70C; } // 800DA618
  cmps(c,0,(int32_t)c->r[31],0); // 800DA61C
  if (!crb(c,2)) { goto L_800DA62C; } // 800DA620
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800DA624
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DA628
L_800DA62C:;
  c->r[3]=0u+0x801F0000u; // 800DA62C
  cmps(c,0,(int32_t)c->r[31],0); // 800DA630
  c->r[12]=c->r[3]+0x00004B68u; // 800DA634
  c->r[11]=R32(c->r[12]+0x00000000u); // 800DA638
  c->r[10]=R32(c->r[12]+0x00000004u); // 800DA63C
  c->r[9]=R32(c->r[12]+0x00000008u); // 800DA640
  c->r[8]=R32(c->r[12]+0x0000000Cu); // 800DA644
  c->r[7]=R32(c->r[12]+0x00000010u); // 800DA648
  c->r[6]=R32(c->r[12]+0x00000014u); // 800DA64C
  c->r[5]=R32(c->r[12]+0x00000018u); // 800DA650
  c->r[4]=R32(c->r[12]+0x0000001Cu); // 800DA654
  c->r[3]=R32(c->r[12]+0x00000020u); // 800DA658
  c->r[0]=R32(c->r[12]+0x00000024u); // 800DA65C
  W32(c->r[1]+0x00000020u,c->r[11]); // 800DA660
  W32(c->r[1]+0x00000024u,c->r[10]); // 800DA664
  W32(c->r[1]+0x00000028u,c->r[9]); // 800DA668
  W32(c->r[1]+0x0000002Cu,c->r[8]); // 800DA66C
  W32(c->r[1]+0x00000030u,c->r[7]); // 800DA670
  W32(c->r[1]+0x00000034u,c->r[6]); // 800DA674
  W32(c->r[1]+0x00000038u,c->r[5]); // 800DA678
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 800DA67C
  W32(c->r[1]+0x00000040u,c->r[3]); // 800DA680
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DA684
  if (crb(c,2)) { goto L_800DA6A4; } // 800DA688
  c->r[3]=0u+0x7C9F0000u; // 800DA68C
  c->r[0]=0u+0x90830000u; // 800DA690
  c->r[3]=c->r[3]+0xFFFFFAA6u; // 800DA694
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA698
  W32(c->r[1]+0x00000020u,c->r[3]); // 800DA69C
  goto L_800DA6B8; // 800DA6A0
L_800DA6A4:;
  c->r[3]=0u+0x7C9F0000u; // 800DA6A4
  c->r[4]=0u+0x80830000u; // 800DA6A8
  c->r[0]=c->r[3]+0xFFFFFBA6u; // 800DA6AC
  W32(c->r[1]+0x00000020u,c->r[4]); // 800DA6B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA6B4
L_800DA6B8:;
  c->r[4]=0u+0x4E800000u; // 800DA6B8
  c->r[3]=c->r[22]|c->r[22]; // 800DA6BC
  c->r[0]=c->r[4]+0x00000020u; // 800DA6C0
  c->r[4]=0u+0x00000028u; // 800DA6C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DA6C8
  c->lr=0x800DA6D0u; f_800D9194(c); // 800DA6CC
  c->r[3]=0u+0x802C0000u; // 800DA6D0
  c->r[12]=c->r[1]+0x00000020u; // 800DA6D4
  c->r[4]=c->r[3]+0xFFFFF45Cu; // 800DA6D8
  c->r[3]=c->r[1]+0x00000008u; // 800DA6DC
  c->ctr=c->r[12]; // 800DA6E0
  if (true) { c->lr=0x800DA6E8u; dispatch(c,c->ctr); } // 800DA6E4
  cmps(c,0,(int32_t)c->r[31],0); // 800DA6E8
  c->r[20]=0u+0x00000000u; // 800DA6EC
  if (crb(c,2)) { goto L_800DA70C; } // 800DA6F0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800DA6F4
  c->r[3]=0u+0xFFFFFFFFu; // 800DA6F8
  c->r[0]=c->r[20]&c->r[20]; // 800DA6FC
  c->r[3]=c->r[4]&c->r[3]; // 800DA700
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DA704
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800DA708
L_800DA70C:;
  c->r[3]=c->r[20]|c->r[20]; // 800DA70C
L_800DA710:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 800DA710
  c->r[26]=c->r[26]+0x00200000u; // 800DA714
  c->r[21]=c->r[21]+0x00000001u; // 800DA718
  c->r[0]=c->r[4]+0x00000008u; // 800DA71C
  W32(c->r[30]+0x00000000u,c->r[0]); // 800DA720
L_800DA724:;
  cmpu(c,0,c->r[21],c->r[28]); // 800DA724
  if (crb(c,1)) { goto L_800DA734; } // 800DA728
  cmps(c,0,(int32_t)c->r[3],0); // 800DA72C
  if (crb(c,2)) { IRQCHK(c); goto L_800DA314; } // 800DA730
L_800DA734:;
  c->r[0]=R8(c->r[27]+0x0000000Du); // 800DA734
  cmpu(c,0,c->r[0],0x00000000u); // 800DA738
  if (crb(c,2)) { goto L_800DA74C; } // 800DA73C
  c->r[0]=0u+0x00000000u; // 800DA740
  c->r[3]=0u+0x00000702u; // 800DA744
  W32(c->r[30]+0x00000000u,c->r[0]); // 800DA748
L_800DA74C:;
  c->r[4]=0u+0x80220000u; // 800DA74C
  c->r[6]=R32(c->r[1]+0x00000010u); // 800DA750
  c->r[7]=c->r[4]+0xFFFFC77Cu; // 800DA754
  c->r[5]=R32(c->r[1]+0x00000014u); // 800DA758
  c->r[4]=R32(c->r[1]+0x00000018u); // 800DA75C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800DA760
  W32(c->r[7]+0x00000000u,c->r[6]); // 800DA764
  W32(c->r[7]+0x00000004u,c->r[5]); // 800DA768
  W32(c->r[7]+0x00000008u,c->r[4]); // 800DA76C
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800DA770
L_800DA774:;
  {uint32_t ea=c->r[1]+0x000000C0u; for(int i=20;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DA774
  c->r[0]=R32(c->r[1]+0x000000F4u); // 800DA778
  c->lr=c->r[0]; // 800DA77C
  c->r[1]=c->r[1]+0x000000F0u; // 800DA780
  return; // 800DA784
}

// TRKTargetAccessDefault
void f_800DA788(Ctx* __restrict c) {
  trace_call(0x800DA788u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA788
  c->r[0]=c->lr; // 800DA78C
  cmpu(c,0,c->r[4],0x00000024u); // 800DA790
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DA794
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DA798
  c->r[31]=c->r[6]|c->r[6]; // 800DA79C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DA7A0
  if (!crb(c,1)) { goto L_800DA7B0; } // 800DA7A4
  c->r[3]=0u+0x00000701u; // 800DA7A8
  goto L_800DA864; // 800DA7AC
L_800DA7B0:;
  c->r[6]=0u+0x80220000u; // 800DA7B0
  c->r[4]=c->r[4]-c->r[3]; // 800DA7B4
  c->r[30]=c->r[6]+0xFFFFC77Cu; // 800DA7B8
  c->r[6]=0u+0x802C0000u; // 800DA7BC
  c->r[9]=R32(c->r[30]+0x0000000Cu); // 800DA7C0
  c->r[8]=0u+0x00000000u; // 800DA7C4
  c->r[12]=c->r[4]+0x00000001u; // 800DA7C8
  c->r[11]=R32(c->r[30]+0x00000000u); // 800DA7CC
  c->r[10]=R32(c->r[30]+0x00000004u); // 800DA7D0
  cmps(c,0,(int32_t)c->r[7],0); // 800DA7D4
  c->r[7]=R32(c->r[30]+0x00000008u); // 800DA7D8
  c->r[0]=rotl(c->r[12],2)&0xFFFFFFFCu; // 800DA7DC
  W8(c->r[30]+0x0000000Du,c->r[8]); // 800DA7E0
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DA7E4
  c->r[3]=c->r[6]+0xFFFFEF98u; // 800DA7E8
  W32(c->r[1]+0x00000008u,c->r[11]); // 800DA7EC
  c->r[4]=c->r[3]+c->r[4]; // 800DA7F0
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 800DA7F4
  W32(c->r[1]+0x00000010u,c->r[7]); // 800DA7F8
  W32(c->r[1]+0x00000014u,c->r[9]); // 800DA7FC
  W32(c->r[31]+0x00000000u,c->r[0]); // 800DA800
  if (crb(c,2)) { goto L_800DA818; } // 800DA804
  c->r[3]=c->r[5]|c->r[5]; // 800DA808
  c->r[5]=c->r[12]|c->r[12]; // 800DA80C
  c->lr=0x800DA814u; f_800D7008(c); // 800DA810
  goto L_800DA824; // 800DA814
L_800DA818:;
  c->r[3]=c->r[5]|c->r[5]; // 800DA818
  c->r[5]=c->r[12]|c->r[12]; // 800DA81C
  c->lr=0x800DA824u; f_800D6D98(c); // 800DA820
L_800DA824:;
  c->r[0]=R8(c->r[30]+0x0000000Du); // 800DA824
  cmpu(c,0,c->r[0],0x00000000u); // 800DA828
  if (crb(c,2)) { goto L_800DA83C; } // 800DA82C
  c->r[0]=0u+0x00000000u; // 800DA830
  c->r[3]=0u+0x00000702u; // 800DA834
  W32(c->r[31]+0x00000000u,c->r[0]); // 800DA838
L_800DA83C:;
  c->r[4]=0u+0x80220000u; // 800DA83C
  c->r[6]=R32(c->r[1]+0x00000008u); // 800DA840
  c->r[7]=c->r[4]+0xFFFFC77Cu; // 800DA844
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800DA848
  c->r[4]=R32(c->r[1]+0x00000010u); // 800DA84C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA850
  W32(c->r[7]+0x00000000u,c->r[6]); // 800DA854
  W32(c->r[7]+0x00000004u,c->r[5]); // 800DA858
  W32(c->r[7]+0x00000008u,c->r[4]); // 800DA85C
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800DA860
L_800DA864:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA864
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DA868
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DA86C
  c->lr=c->r[0]; // 800DA870
  c->r[1]=c->r[1]+0x00000020u; // 800DA874
  return; // 800DA878
}

// TRKTargetReadInstruction
void f_800DA87C(Ctx* __restrict c) {
  trace_call(0x800DA87Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA87C
  c->r[0]=c->lr; // 800DA880
  c->r[6]=0u+0x00000000u; // 800DA884
  c->r[7]=0u+0x00000001u; // 800DA888
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA88C
  c->r[0]=0u+0x00000004u; // 800DA890
  c->r[5]=c->r[1]+0x00000008u; // 800DA894
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DA898
  c->lr=0x800DA8A0u; f_800DA8C8(c); // 800DA89C
  cmps(c,0,(int32_t)c->r[3],0); // 800DA8A0
  if (!crb(c,2)) { goto L_800DA8B8; } // 800DA8A4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800DA8A8
  cmpu(c,0,c->r[0],0x00000004u); // 800DA8AC
  if (crb(c,2)) { goto L_800DA8B8; } // 800DA8B0
  c->r[3]=0u+0x00000700u; // 800DA8B4
L_800DA8B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA8B8
  c->lr=c->r[0]; // 800DA8BC
  c->r[1]=c->r[1]+0x00000010u; // 800DA8C0
  return; // 800DA8C4
}

// TRKTargetAccessMemory
void f_800DA8C8(Ctx* __restrict c) {
  trace_call(0x800DA8C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA8C8
  c->r[0]=c->lr; // 800DA8CC
  c->r[6]=0u+0x80220000u; // 800DA8D0
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DA8D4
  c->r[0]=0u+0x00000000u; // 800DA8D8
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DA8DC
  c->r[31]=c->r[6]+0xFFFFC77Cu; // 800DA8E0
  c->r[27]=c->r[4]|c->r[4]; // 800DA8E4
  c->r[28]=c->r[5]|c->r[5]; // 800DA8E8
  c->r[26]=c->r[3]|c->r[3]; // 800DA8EC
  c->r[29]=c->r[7]|c->r[7]; // 800DA8F0
  c->r[3]=c->r[27]|c->r[27]; // 800DA8F4
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800DA8F8
  c->r[8]=R32(c->r[31]+0x00000000u); // 800DA8FC
  c->r[6]=R32(c->r[31]+0x00000004u); // 800DA900
  c->r[5]=R32(c->r[31]+0x00000008u); // 800DA904
  W32(c->r[1]+0x00000008u,c->r[8]); // 800DA908
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800DA90C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800DA910
  W32(c->r[1]+0x00000014u,c->r[4]); // 800DA914
  W8(c->r[31]+0x0000000Du,c->r[0]); // 800DA918
  c->lr=0x800DA920u; f_800DB46C(c); // 800DA91C
  c->r[0]=cntlz(c->r[29]); // 800DA920
  c->r[4]=R32(c->r[28]+0x00000000u); // 800DA924
  c->r[25]=c->r[3]|c->r[3]; // 800DA928
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DA92C
  c->lr=0x800DA934u; f_800DAA14(c); // 800DA930
  c->r[30]=c->r[3]|c->r[3]; cr0(c,c->r[30]); // 800DA934
  if (crb(c,2)) { goto L_800DA948; } // 800DA938
  c->r[0]=0u+0x00000000u; // 800DA93C
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DA940
  goto L_800DA9BC; // 800DA944
L_800DA948:;
  c->lr=0x800DA94Cu; f_800D92A0(c); // 800DA948
  c->r[4]=0u+0x802C0000u; // 800DA94C
  cmps(c,0,(int32_t)c->r[29],0); // 800DA950
  c->r[4]=c->r[4]+0xFFFFEF98u; // 800DA954
  c->r[8]=c->r[3]|c->r[3]; // 800DA958
  c->r[0]=R32(c->r[4]+0x000001F8u); // 800DA95C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; // 800DA960
  c->r[7]=c->r[8]|c->r[0]; // 800DA964
  if (crb(c,2)) { goto L_800DA984; } // 800DA968
  c->r[5]=R32(c->r[28]+0x00000000u); // 800DA96C
  c->r[3]=c->r[26]|c->r[26]; // 800DA970
  c->r[4]=c->r[25]|c->r[25]; // 800DA974
  c->r[6]=c->r[8]|c->r[8]; // 800DA978
  c->lr=0x800DA980u; f_800D92B0(c); // 800DA97C
  goto L_800DA9BC; // 800DA980
L_800DA984:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 800DA984
  c->r[3]=c->r[25]|c->r[25]; // 800DA988
  c->r[4]=c->r[26]|c->r[26]; // 800DA98C
  c->r[6]=c->r[7]|c->r[7]; // 800DA990
  c->r[7]=c->r[8]|c->r[8]; // 800DA994
  c->lr=0x800DA99Cu; f_800D92B0(c); // 800DA998
  c->r[4]=R32(c->r[28]+0x00000000u); // 800DA99C
  c->r[3]=c->r[25]|c->r[25]; // 800DA9A0
  c->lr=0x800DA9A8u; f_800D9194(c); // 800DA9A4
  cmpu(c,0,c->r[27],c->r[25]); // 800DA9A8
  if (crb(c,2)) { goto L_800DA9BC; } // 800DA9AC
  c->r[4]=R32(c->r[28]+0x00000000u); // 800DA9B0
  c->r[3]=c->r[27]|c->r[27]; // 800DA9B4
  c->lr=0x800DA9BCu; f_800D9194(c); // 800DA9B8
L_800DA9BC:;
  c->r[0]=R8(c->r[31]+0x0000000Du); // 800DA9BC
  cmpu(c,0,c->r[0],0x00000000u); // 800DA9C0
  if (crb(c,2)) { goto L_800DA9D4; } // 800DA9C4
  c->r[0]=0u+0x00000000u; // 800DA9C8
  c->r[30]=0u+0x00000702u; // 800DA9CC
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DA9D0
L_800DA9D4:;
  c->r[3]=0u+0x80220000u; // 800DA9D4
  c->r[6]=R32(c->r[1]+0x00000008u); // 800DA9D8
  c->r[7]=c->r[3]+0xFFFFC77Cu; // 800DA9DC
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800DA9E0
  c->r[4]=R32(c->r[1]+0x00000010u); // 800DA9E4
  c->r[3]=c->r[30]|c->r[30]; // 800DA9E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA9EC
  W32(c->r[7]+0x00000000u,c->r[6]); // 800DA9F0
  W32(c->r[7]+0x00000004u,c->r[5]); // 800DA9F4
  W32(c->r[7]+0x00000008u,c->r[4]); // 800DA9F8
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800DA9FC
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAA00
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DAA04
  c->lr=c->r[0]; // 800DAA08
  c->r[1]=c->r[1]+0x00000040u; // 800DAA0C
  return; // 800DAA10
}

// TRKValidMemory32
void f_800DAA14(Ctx* __restrict c) {
  trace_call(0x800DAA14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAA14
  c->r[0]=c->lr; // 800DAA18
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DAA1C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAA20
  c->r[27]=c->r[4]+c->r[3]; // 800DAA24
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 800DAA28
  c->r[26]=c->r[5]|c->r[5]; // 800DAA2C
  cmpu(c,0,c->r[27],c->r[3]); // 800DAA30
  c->r[5]=0u+0x00000700u; // 800DAA34
  if (!crb(c,0)) { goto L_800DAA44; } // 800DAA38
  c->r[3]=0u+0x00000700u; // 800DAA3C
  goto L_800DACA4; // 800DAA40
L_800DAA44:;
  c->r[4]=0u+0x801F0000u; // 800DAA44
  c->r[6]=0u+0x00000000u; // 800DAA48
  c->r[31]=c->r[4]+0x00004B58u; // 800DAA4C
  c->r[0]=R32(c->r[31]+0x00000004u); // 800DAA50
  cmpu(c,0,c->r[3],c->r[0]); // 800DAA54
  if (crb(c,1)) { goto L_800DACA0; } // 800DAA58
  c->r[0]=R32(c->r[31]+0x00000000u); // 800DAA5C
  cmpu(c,0,c->r[27],c->r[0]); // 800DAA60
  if (crb(c,0)) { goto L_800DACA0; } // 800DAA64
  cmps(c,0,(int32_t)c->r[26],0); // 800DAA68
  if (!crb(c,2)) { goto L_800DAA84; } // 800DAA6C
  c->r[0]=rotl(c->r[6],4)&0xFFFFFFF0u; // 800DAA70
  c->r[4]=c->r[31]+c->r[0]; // 800DAA74
  c->r[0]=R32(c->r[4]+0x00000008u); // 800DAA78
  cmps(c,0,(int32_t)c->r[0],0); // 800DAA7C
  if (crb(c,2)) { goto L_800DAAA8; } // 800DAA80
L_800DAA84:;
  cmps(c,0,(int32_t)c->r[26],1); // 800DAA84
  if (!crb(c,2)) { goto L_800DAAB0; } // 800DAA88
  c->r[4]=0u+0x801F0000u; // 800DAA8C
  c->r[0]=rotl(c->r[6],4)&0xFFFFFFF0u; // 800DAA90
  c->r[4]=c->r[4]+0x00004B58u; // 800DAA94
  c->r[4]=c->r[4]+c->r[0]; // 800DAA98
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800DAA9C
  cmps(c,0,(int32_t)c->r[0],0); // 800DAAA0
  if (!crb(c,2)) { goto L_800DAAB0; } // 800DAAA4
L_800DAAA8:;
  c->r[5]=0u+0x00000700u; // 800DAAA8
  goto L_800DACA0; // 800DAAAC
L_800DAAB0:;
  c->r[4]=0u+0x801F0000u; // 800DAAB0
  c->r[29]=rotl(c->r[6],4)&0xFFFFFFF0u; // 800DAAB4
  c->r[4]=c->r[4]+0x00004B58u; // 800DAAB8
  c->r[5]=0u+0x00000000u; // 800DAABC
  c->r[0]=R32(c->r[4]+c->r[29]); // 800DAAC0
  cmpu(c,0,c->r[3],c->r[0]); // 800DAAC4
  if (!crb(c,0)) { goto L_800DABAC; } // 800DAAC8
  c->r[0]=c->r[0]-c->r[3]; // 800DAACC
  c->r[6]=0u+0x00000700u; // 800DAAD0
  c->r[30]=c->r[0]+c->r[3]; // 800DAAD4
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800DAAD8
  cmpu(c,0,c->r[30],c->r[3]); // 800DAADC
  if (!crb(c,0)) { goto L_800DAAE8; } // 800DAAE0
  goto L_800DABA8; // 800DAAE4
L_800DAAE8:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800DAAE8
  c->r[5]=0u+0x00000000u; // 800DAAEC
  cmpu(c,0,c->r[3],c->r[0]); // 800DAAF0
  if (crb(c,1)) { goto L_800DABA8; } // 800DAAF4
  c->r[0]=R32(c->r[31]+0x00000000u); // 800DAAF8
  cmpu(c,0,c->r[30],c->r[0]); // 800DAAFC
  if (crb(c,0)) { goto L_800DABA8; } // 800DAB00
  cmps(c,0,(int32_t)c->r[26],0); // 800DAB04
  if (!crb(c,2)) { goto L_800DAB20; } // 800DAB08
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 800DAB0C
  c->r[4]=c->r[4]+c->r[0]; // 800DAB10
  c->r[0]=R32(c->r[4]+0x00000008u); // 800DAB14
  cmps(c,0,(int32_t)c->r[0],0); // 800DAB18
  if (crb(c,2)) { goto L_800DAB44; } // 800DAB1C
L_800DAB20:;
  cmps(c,0,(int32_t)c->r[26],1); // 800DAB20
  if (!crb(c,2)) { goto L_800DAB4C; } // 800DAB24
  c->r[4]=0u+0x801F0000u; // 800DAB28
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 800DAB2C
  c->r[4]=c->r[4]+0x00004B58u; // 800DAB30
  c->r[4]=c->r[4]+c->r[0]; // 800DAB34
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800DAB38
  cmps(c,0,(int32_t)c->r[0],0); // 800DAB3C
  if (!crb(c,2)) { goto L_800DAB4C; } // 800DAB40
L_800DAB44:;
  c->r[6]=0u+0x00000700u; // 800DAB44
  goto L_800DABA8; // 800DAB48
L_800DAB4C:;
  c->r[4]=0u+0x801F0000u; // 800DAB4C
  c->r[28]=rotl(c->r[5],4)&0xFFFFFFF0u; // 800DAB50
  c->r[4]=c->r[4]+0x00004B58u; // 800DAB54
  c->r[6]=0u+0x00000000u; // 800DAB58
  c->r[0]=R32(c->r[4]+c->r[28]); // 800DAB5C
  cmpu(c,0,c->r[3],c->r[0]); // 800DAB60
  if (!crb(c,0)) { goto L_800DAB78; } // 800DAB64
  c->r[5]=c->r[26]|c->r[26]; // 800DAB68
  c->r[4]=c->r[0]-c->r[3]; // 800DAB6C
  c->lr=0x800DAB74u; f_800DAA14(c); // 800DAB70
  c->r[6]=c->r[3]|c->r[3]; // 800DAB74
L_800DAB78:;
  cmps(c,0,(int32_t)c->r[6],0); // 800DAB78
  if (!crb(c,2)) { goto L_800DABA8; } // 800DAB7C
  c->r[3]=0u+0x801F0000u; // 800DAB80
  c->r[0]=c->r[3]+0x00004B58u; // 800DAB84
  c->r[3]=c->r[0]+c->r[28]; // 800DAB88
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DAB8C
  cmpu(c,0,c->r[30],c->r[3]); // 800DAB90
  if (!crb(c,1)) { goto L_800DABA8; } // 800DAB94
  c->r[5]=c->r[26]|c->r[26]; // 800DAB98
  c->r[4]=c->r[30]-c->r[3]; // 800DAB9C
  c->lr=0x800DABA4u; f_800DAA14(c); // 800DABA0
  c->r[6]=c->r[3]|c->r[3]; // 800DABA4
L_800DABA8:;
  c->r[5]=c->r[6]|c->r[6]; // 800DABA8
L_800DABAC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800DABAC
  if (!crb(c,2)) { goto L_800DACA0; } // 800DABB0
  c->r[3]=0u+0x801F0000u; // 800DABB4
  c->r[4]=c->r[3]+0x00004B58u; // 800DABB8
  c->r[28]=c->r[4]+0x00000004u; // 800DABBC
  c->r[3]=R32(c->r[28]+c->r[29]); // 800DABC0
  cmpu(c,0,c->r[27],c->r[3]); // 800DABC4
  if (!crb(c,1)) { goto L_800DACA0; } // 800DABC8
  c->r[0]=c->r[27]-c->r[3]; // 800DABCC
  c->r[6]=0u+0x00000700u; // 800DABD0
  c->r[30]=c->r[0]+c->r[3]; // 800DABD4
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800DABD8
  cmpu(c,0,c->r[30],c->r[3]); // 800DABDC
  if (!crb(c,0)) { goto L_800DABE8; } // 800DABE0
  goto L_800DAC9C; // 800DABE4
L_800DABE8:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800DABE8
  c->r[5]=0u+0x00000000u; // 800DABEC
  cmpu(c,0,c->r[3],c->r[0]); // 800DABF0
  if (crb(c,1)) { goto L_800DAC9C; } // 800DABF4
  c->r[0]=R32(c->r[31]+0x00000000u); // 800DABF8
  cmpu(c,0,c->r[30],c->r[0]); // 800DABFC
  if (crb(c,0)) { goto L_800DAC9C; } // 800DAC00
  cmps(c,0,(int32_t)c->r[26],0); // 800DAC04
  if (!crb(c,2)) { goto L_800DAC20; } // 800DAC08
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 800DAC0C
  c->r[4]=c->r[4]+c->r[0]; // 800DAC10
  c->r[0]=R32(c->r[4]+0x00000008u); // 800DAC14
  cmps(c,0,(int32_t)c->r[0],0); // 800DAC18
  if (crb(c,2)) { goto L_800DAC44; } // 800DAC1C
L_800DAC20:;
  cmps(c,0,(int32_t)c->r[26],1); // 800DAC20
  if (!crb(c,2)) { goto L_800DAC4C; } // 800DAC24
  c->r[4]=0u+0x801F0000u; // 800DAC28
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 800DAC2C
  c->r[4]=c->r[4]+0x00004B58u; // 800DAC30
  c->r[4]=c->r[4]+c->r[0]; // 800DAC34
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800DAC38
  cmps(c,0,(int32_t)c->r[0],0); // 800DAC3C
  if (!crb(c,2)) { goto L_800DAC4C; } // 800DAC40
L_800DAC44:;
  c->r[6]=0u+0x00000700u; // 800DAC44
  goto L_800DAC9C; // 800DAC48
L_800DAC4C:;
  c->r[4]=0u+0x801F0000u; // 800DAC4C
  c->r[27]=rotl(c->r[5],4)&0xFFFFFFF0u; // 800DAC50
  c->r[4]=c->r[4]+0x00004B58u; // 800DAC54
  c->r[6]=0u+0x00000000u; // 800DAC58
  c->r[0]=R32(c->r[4]+c->r[27]); // 800DAC5C
  cmpu(c,0,c->r[3],c->r[0]); // 800DAC60
  if (!crb(c,0)) { goto L_800DAC78; } // 800DAC64
  c->r[5]=c->r[26]|c->r[26]; // 800DAC68
  c->r[4]=c->r[0]-c->r[3]; // 800DAC6C
  c->lr=0x800DAC74u; f_800DAA14(c); // 800DAC70
  c->r[6]=c->r[3]|c->r[3]; // 800DAC74
L_800DAC78:;
  cmps(c,0,(int32_t)c->r[6],0); // 800DAC78
  if (!crb(c,2)) { goto L_800DAC9C; } // 800DAC7C
  c->r[3]=R32(c->r[28]+c->r[27]); // 800DAC80
  cmpu(c,0,c->r[30],c->r[3]); // 800DAC84
  if (!crb(c,1)) { goto L_800DAC9C; } // 800DAC88
  c->r[5]=c->r[26]|c->r[26]; // 800DAC8C
  c->r[4]=c->r[30]-c->r[3]; // 800DAC90
  c->lr=0x800DAC98u; f_800DAA14(c); // 800DAC94
  c->r[6]=c->r[3]|c->r[3]; // 800DAC98
L_800DAC9C:;
  c->r[5]=c->r[6]|c->r[6]; // 800DAC9C
L_800DACA0:;
  c->r[3]=c->r[5]|c->r[5]; // 800DACA0
L_800DACA4:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DACA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DACA8
  c->lr=c->r[0]; // 800DACAC
  c->r[1]=c->r[1]+0x00000020u; // 800DACB0
  return; // 800DACB4
}

// fn_800DACC0
void f_800DACC0(Ctx* __restrict c) {
  /* twi */ // 800DACC0
  return; // 800DACC4
}

// fn_800DACC8
void f_800DACC8(Ctx* __restrict c) {
  /* twi */ // 800DACC8
  return; // 800DACCC
}

// fn_800DACD0
void f_800DACD0(Ctx* __restrict c) {
  /* twi */ // 800DACD0
  return; // 800DACD4
}

// fn_800DACD8
void f_800DACD8(Ctx* __restrict c) {
  /* twi */ // 800DACD8
  return; // 800DACDC
}

// TRKSaveExtended1Block
void f_800DACE0(Ctx* __restrict c) {
  trace_call(0x800DACE0u);
  c->r[2]=0u+0x802B0000u; // 800DACE0
  c->r[2]=c->r[2]|0x0000EF98u; // 800DACE4
  /* mfsr */ // 800DACE8
  /* mfsr */ // 800DACEC
  /* mfsr */ // 800DACF0
  /* mfsr */ // 800DACF4
  /* mfsr */ // 800DACF8
  /* mfsr */ // 800DACFC
  /* mfsr */ // 800DAD00
  /* mfsr */ // 800DAD04
  /* mfsr */ // 800DAD08
  /* mfsr */ // 800DAD0C
  /* mfsr */ // 800DAD10
  /* mfsr */ // 800DAD14
  /* mfsr */ // 800DAD18
  /* mfsr */ // 800DAD1C
  /* mfsr */ // 800DAD20
  /* mfsr */ // 800DAD24
  {uint32_t ea=c->r[2]+0x000001A8u; for(int i=16;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAD28
  c->r[10]=mftb(c,268); // 800DAD2C
  c->r[11]=mftb(c,269); // 800DAD30
  c->r[12]=mfspr(c,1008); // 800DAD34
  c->r[13]=mfspr(c,1009); // 800DAD38
  c->r[14]=mfspr(c,27); // 800DAD3C
  c->r[15]=mfspr(c,287); // 800DAD40
  c->r[16]=mfspr(c,528); // 800DAD44
  c->r[17]=mfspr(c,529); // 800DAD48
  c->r[18]=mfspr(c,530); // 800DAD4C
  c->r[19]=mfspr(c,531); // 800DAD50
  c->r[20]=mfspr(c,532); // 800DAD54
  c->r[21]=mfspr(c,533); // 800DAD58
  c->r[22]=mfspr(c,534); // 800DAD5C
  c->r[23]=mfspr(c,535); // 800DAD60
  c->r[24]=mfspr(c,536); // 800DAD64
  c->r[25]=mfspr(c,537); // 800DAD68
  c->r[26]=mfspr(c,538); // 800DAD6C
  c->r[27]=mfspr(c,539); // 800DAD70
  c->r[28]=mfspr(c,540); // 800DAD74
  c->r[29]=mfspr(c,541); // 800DAD78
  c->r[30]=mfspr(c,542); // 800DAD7C
  c->r[31]=mfspr(c,543); // 800DAD80
  {uint32_t ea=c->r[2]+0x000001E8u; for(int i=10;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAD84
  c->r[22]=mfspr(c,25); // 800DAD88
  c->r[23]=mfspr(c,19); // 800DAD8C
  c->r[24]=mfspr(c,18); // 800DAD90
  c->r[25]=mfspr(c,272); // 800DAD94
  c->r[26]=mfspr(c,273); // 800DAD98
  c->r[27]=mfspr(c,274); // 800DAD9C
  c->r[28]=mfspr(c,275); // 800DADA0
  c->r[29]=0u+0x00000000u; // 800DADA4
  c->r[30]=mfspr(c,1010); // 800DADA8
  c->r[31]=mfspr(c,282); // 800DADAC
  {uint32_t ea=c->r[2]+0x0000025Cu; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DADB0
  c->r[20]=mfspr(c,912); // 800DADB4
  c->r[21]=mfspr(c,913); // 800DADB8
  c->r[22]=mfspr(c,914); // 800DADBC
  c->r[23]=mfspr(c,915); // 800DADC0
  c->r[24]=mfspr(c,916); // 800DADC4
  c->r[25]=mfspr(c,917); // 800DADC8
  c->r[26]=mfspr(c,918); // 800DADCC
  c->r[27]=mfspr(c,919); // 800DADD0
  c->r[28]=mfspr(c,920); // 800DADD4
  c->r[29]=mfspr(c,921); // 800DADD8
  c->r[30]=mfspr(c,922); // 800DADDC
  c->r[31]=mfspr(c,923); // 800DADE0
  {uint32_t ea=c->r[2]+0x000002FCu; for(int i=20;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DADE4
  goto L_800DAE30; // 800DADE8
  c->r[16]=mfspr(c,928); // 800DADEC
  c->r[17]=mfspr(c,935); // 800DADF0
  c->r[18]=mfspr(c,936); // 800DADF4
  c->r[19]=mfspr(c,937); // 800DADF8
  c->r[20]=mfspr(c,938); // 800DADFC
  c->r[21]=mfspr(c,939); // 800DAE00
  c->r[22]=mfspr(c,940); // 800DAE04
  c->r[23]=mfspr(c,941); // 800DAE08
  c->r[24]=mfspr(c,942); // 800DAE0C
  c->r[25]=mfspr(c,943); // 800DAE10
  c->r[26]=mfspr(c,944); // 800DAE14
  c->r[27]=mfspr(c,951); // 800DAE18
  c->r[28]=mfspr(c,959); // 800DAE1C
  c->r[29]=mfspr(c,1014); // 800DAE20
  c->r[30]=mfspr(c,1015); // 800DAE24
  c->r[31]=mfspr(c,1023); // 800DAE28
  {uint32_t ea=c->r[2]+0x000002B8u; for(int i=16;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAE2C
L_800DAE30:;
  c->r[19]=mfspr(c,1013); // 800DAE30
  c->r[20]=mfspr(c,953); // 800DAE34
  c->r[21]=mfspr(c,954); // 800DAE38
  c->r[22]=mfspr(c,957); // 800DAE3C
  c->r[23]=mfspr(c,958); // 800DAE40
  c->r[24]=mfspr(c,955); // 800DAE44
  c->r[25]=mfspr(c,952); // 800DAE48
  c->r[26]=mfspr(c,956); // 800DAE4C
  c->r[27]=mfspr(c,1020); // 800DAE50
  c->r[28]=mfspr(c,1021); // 800DAE54
  c->r[29]=mfspr(c,1022); // 800DAE58
  c->r[30]=mfspr(c,1019); // 800DAE5C
  c->r[31]=mfspr(c,1017); // 800DAE60
  {uint32_t ea=c->r[2]+0x00000284u; for(int i=19;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAE64
  return; // 800DAE68
  c->r[25]=mfspr(c,976); // 800DAE6C
  c->r[26]=mfspr(c,977); // 800DAE70
  c->r[27]=mfspr(c,978); // 800DAE74
  c->r[28]=mfspr(c,979); // 800DAE78
  c->r[29]=mfspr(c,980); // 800DAE7C
  c->r[30]=mfspr(c,981); // 800DAE80
  c->r[31]=mfspr(c,982); // 800DAE84
  {uint32_t ea=c->r[2]+0x00000240u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DAE88
  c->r[31]=mfspr(c,22); // 800DAE8C
  W32(c->r[2]+0x00000278u,c->r[31]); // 800DAE90
  return; // 800DAE94
}

// TRKRestoreExtended1Block
void f_800DAE98(Ctx* __restrict c) {
  trace_call(0x800DAE98u);
  c->r[2]=0u+0x802B0000u; // 800DAE98
  c->r[2]=c->r[2]|0x0000EF98u; // 800DAE9C
  c->r[5]=0u+0x80210000u; // 800DAEA0
  c->r[5]=c->r[5]|0x0000C770u; // 800DAEA4
  c->r[3]=R8(c->r[5]+0x00000000u); // 800DAEA8
  c->r[6]=R8(c->r[5]+0x00000001u); // 800DAEAC
  c->r[0]=0u+0x00000000u; // 800DAEB0
  W8(c->r[5]+0x00000000u,c->r[0]); // 800DAEB4
  W8(c->r[5]+0x00000001u,c->r[0]); // 800DAEB8
  cmps(c,0,(int32_t)c->r[3],0); // 800DAEBC
  if (crb(c,2)) { goto L_800DAED4; } // 800DAEC0
  c->r[24]=R32(c->r[2]+0x000001E8u); // 800DAEC4
  c->r[25]=R32(c->r[2]+0x000001ECu); // 800DAEC8
  mtspr(c,284,c->r[24]); // 800DAECC
  mtspr(c,285,c->r[25]); // 800DAED0
L_800DAED4:;
  {uint32_t ea=c->r[2]+0x000002FCu; for(int i=20;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAED4
  mtspr(c,912,c->r[20]); // 800DAED8
  mtspr(c,913,c->r[21]); // 800DAEDC
  mtspr(c,914,c->r[22]); // 800DAEE0
  mtspr(c,915,c->r[23]); // 800DAEE4
  mtspr(c,916,c->r[24]); // 800DAEE8
  mtspr(c,917,c->r[25]); // 800DAEEC
  mtspr(c,918,c->r[26]); // 800DAEF0
  mtspr(c,919,c->r[27]); // 800DAEF4
  mtspr(c,920,c->r[28]); // 800DAEF8
  mtspr(c,922,c->r[30]); // 800DAEFC
  mtspr(c,923,c->r[31]); // 800DAF00
  goto L_800DAF20; // 800DAF04
  {uint32_t ea=c->r[2]+0x000002E0u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAF08
  mtspr(c,944,c->r[26]); // 800DAF0C
  mtspr(c,951,c->r[27]); // 800DAF10
  mtspr(c,1014,c->r[29]); // 800DAF14
  mtspr(c,1015,c->r[30]); // 800DAF18
  mtspr(c,1023,c->r[31]); // 800DAF1C
L_800DAF20:;
  {uint32_t ea=c->r[2]+0x00000284u; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAF20
  mtspr(c,1013,c->r[19]); // 800DAF24
  mtspr(c,953,c->r[20]); // 800DAF28
  mtspr(c,954,c->r[21]); // 800DAF2C
  mtspr(c,957,c->r[22]); // 800DAF30
  mtspr(c,958,c->r[23]); // 800DAF34
  mtspr(c,955,c->r[24]); // 800DAF38
  mtspr(c,952,c->r[25]); // 800DAF3C
  mtspr(c,956,c->r[26]); // 800DAF40
  mtspr(c,1020,c->r[27]); // 800DAF44
  mtspr(c,1021,c->r[28]); // 800DAF48
  mtspr(c,1022,c->r[29]); // 800DAF4C
  mtspr(c,1019,c->r[30]); // 800DAF50
  mtspr(c,1017,c->r[31]); // 800DAF54
  goto L_800DAF8C; // 800DAF58
  cmps(c,0,(int32_t)c->r[6],0); // 800DAF5C
  if (crb(c,2)) { goto L_800DAF6C; } // 800DAF60
  c->r[26]=R32(c->r[2]+0x00000278u); // 800DAF64
  mtspr(c,22,c->r[26]); // 800DAF68
L_800DAF6C:;
  {uint32_t ea=c->r[2]+0x00000240u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAF6C
  mtspr(c,976,c->r[25]); // 800DAF70
  mtspr(c,977,c->r[26]); // 800DAF74
  mtspr(c,978,c->r[27]); // 800DAF78
  mtspr(c,979,c->r[28]); // 800DAF7C
  mtspr(c,980,c->r[29]); // 800DAF80
  mtspr(c,981,c->r[30]); // 800DAF84
  mtspr(c,982,c->r[31]); // 800DAF88
L_800DAF8C:;
  {uint32_t ea=c->r[2]+0x000001A8u; for(int i=16;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAF8C
  /* mtsr */ // 800DAF90
  /* mtsr */ // 800DAF94
  /* mtsr */ // 800DAF98
  /* mtsr */ // 800DAF9C
  /* mtsr */ // 800DAFA0
  /* mtsr */ // 800DAFA4
  /* mtsr */ // 800DAFA8
  /* mtsr */ // 800DAFAC
  /* mtsr */ // 800DAFB0
  /* mtsr */ // 800DAFB4
  /* mtsr */ // 800DAFB8
  /* mtsr */ // 800DAFBC
  /* mtsr */ // 800DAFC0
  /* mtsr */ // 800DAFC4
  /* mtsr */ // 800DAFC8
  /* mtsr */ // 800DAFCC
  {uint32_t ea=c->r[2]+0x000001F0u; for(int i=12;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DAFD0
  mtspr(c,1008,c->r[12]); // 800DAFD4
  mtspr(c,1009,c->r[13]); // 800DAFD8
  mtspr(c,27,c->r[14]); // 800DAFDC
  mtspr(c,287,c->r[15]); // 800DAFE0
  mtspr(c,528,c->r[16]); // 800DAFE4
  mtspr(c,529,c->r[17]); // 800DAFE8
  mtspr(c,530,c->r[18]); // 800DAFEC
  mtspr(c,531,c->r[19]); // 800DAFF0
  mtspr(c,532,c->r[20]); // 800DAFF4
  mtspr(c,533,c->r[21]); // 800DAFF8
  mtspr(c,534,c->r[22]); // 800DAFFC
  mtspr(c,535,c->r[23]); // 800DB000
  mtspr(c,536,c->r[24]); // 800DB004
  mtspr(c,537,c->r[25]); // 800DB008
  mtspr(c,538,c->r[26]); // 800DB00C
  mtspr(c,539,c->r[27]); // 800DB010
  mtspr(c,540,c->r[28]); // 800DB014
  mtspr(c,541,c->r[29]); // 800DB018
  mtspr(c,542,c->r[30]); // 800DB01C
  mtspr(c,543,c->r[31]); // 800DB020
  {uint32_t ea=c->r[2]+0x0000025Cu; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB024
  mtspr(c,25,c->r[22]); // 800DB028
  mtspr(c,19,c->r[23]); // 800DB02C
  mtspr(c,18,c->r[24]); // 800DB030
  mtspr(c,272,c->r[25]); // 800DB034
  mtspr(c,273,c->r[26]); // 800DB038
  mtspr(c,274,c->r[27]); // 800DB03C
  mtspr(c,275,c->r[28]); // 800DB040
  mtspr(c,1010,c->r[30]); // 800DB044
  mtspr(c,282,c->r[31]); // 800DB048
  return; // 800DB04C
}

// fn_800DB050
void f_800DB050(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB050
  c->r[0]=c->lr; // 800DB054
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB058
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DB05C
  c->r[31]=c->r[5]|c->r[5]; // 800DB060
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DB064
  c->r[30]=c->r[4]|c->r[4]; // 800DB068
  c->lr=0x800DB070u; f_800DBA1C(c); // 800DB06C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800DB070
  if (!crb(c,2)) { goto L_800DB080; } // 800DB074
  c->r[3]=0u+0x00000001u; // 800DB078
  goto L_800DB0F4; // 800DB07C
L_800DB080:;
  c->lr=0x800DB084u; f_800D8A20(c); // 800DB080
  cmps(c,0,(int32_t)c->r[3],0); // 800DB084
  if (!crb(c,2)) { goto L_800DB094; } // 800DB088
  c->r[3]=0u+0x00000001u; // 800DB08C
  goto L_800DB0F4; // 800DB090
L_800DB094:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800DB094
  c->r[6]=c->r[30]|c->r[30]; // 800DB098
  c->r[5]=c->r[1]+0x00000008u; // 800DB09C
  c->r[3]=0u+0x000000D0u; // 800DB0A0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DB0A4
  c->r[4]=0u+0x00000001u; // 800DB0A8
  c->lr=0x800DB0B0u; f_800DACC0(c); // 800DB0AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800DB0B0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800DB0B4
  cmps(c,0,(int32_t)c->r[0],1); // 800DB0B8
  W32(c->r[31]+0x00000000u,c->r[3]); // 800DB0BC
  if (crb(c,2)) { goto L_800DB0F0; } // 800DB0C0
  if (!crb(c,0)) { goto L_800DB0D4; } // 800DB0C4
  cmps(c,0,(int32_t)c->r[0],0); // 800DB0C8
  if (!crb(c,0)) { goto L_800DB0E0; } // 800DB0CC
  goto L_800DB0F0; // 800DB0D0
L_800DB0D4:;
  cmps(c,0,(int32_t)c->r[0],3); // 800DB0D4
  if (!crb(c,0)) { goto L_800DB0F0; } // 800DB0D8
  goto L_800DB0E8; // 800DB0DC
L_800DB0E0:;
  c->r[3]=0u+0x00000000u; // 800DB0E0
  goto L_800DB0F4; // 800DB0E4
L_800DB0E8:;
  c->r[3]=0u+0x00000002u; // 800DB0E8
  goto L_800DB0F4; // 800DB0EC
L_800DB0F0:;
  c->r[3]=0u+0x00000001u; // 800DB0F0
L_800DB0F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB0F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DB0F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DB0FC
  c->lr=c->r[0]; // 800DB100
  c->r[1]=c->r[1]+0x00000020u; // 800DB104
  return; // 800DB108
}

// fn_800DB10C
void f_800DB10C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB10C
  c->r[0]=c->lr; // 800DB110
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB114
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DB118
  c->r[31]=c->r[5]|c->r[5]; // 800DB11C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DB120
  c->r[30]=c->r[4]|c->r[4]; // 800DB124
  c->lr=0x800DB12Cu; f_800DBA1C(c); // 800DB128
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800DB12C
  if (!crb(c,2)) { goto L_800DB13C; } // 800DB130
  c->r[3]=0u+0x00000001u; // 800DB134
  goto L_800DB1B0; // 800DB138
L_800DB13C:;
  c->lr=0x800DB140u; f_800D8A20(c); // 800DB13C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB140
  if (!crb(c,2)) { goto L_800DB150; } // 800DB144
  c->r[3]=0u+0x00000001u; // 800DB148
  goto L_800DB1B0; // 800DB14C
L_800DB150:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800DB150
  c->r[6]=c->r[30]|c->r[30]; // 800DB154
  c->r[5]=c->r[1]+0x00000008u; // 800DB158
  c->r[3]=0u+0x000000D1u; // 800DB15C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DB160
  c->r[4]=0u+0x00000000u; // 800DB164
  c->lr=0x800DB16Cu; f_800DACC0(c); // 800DB168
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800DB16C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800DB170
  cmps(c,0,(int32_t)c->r[0],1); // 800DB174
  W32(c->r[31]+0x00000000u,c->r[3]); // 800DB178
  if (crb(c,2)) { goto L_800DB1AC; } // 800DB17C
  if (!crb(c,0)) { goto L_800DB190; } // 800DB180
  cmps(c,0,(int32_t)c->r[0],0); // 800DB184
  if (!crb(c,0)) { goto L_800DB19C; } // 800DB188
  goto L_800DB1AC; // 800DB18C
L_800DB190:;
  cmps(c,0,(int32_t)c->r[0],3); // 800DB190
  if (!crb(c,0)) { goto L_800DB1AC; } // 800DB194
  goto L_800DB1A4; // 800DB198
L_800DB19C:;
  c->r[3]=0u+0x00000000u; // 800DB19C
  goto L_800DB1B0; // 800DB1A0
L_800DB1A4:;
  c->r[3]=0u+0x00000002u; // 800DB1A4
  goto L_800DB1B0; // 800DB1A8
L_800DB1AC:;
  c->r[3]=0u+0x00000001u; // 800DB1AC
L_800DB1B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB1B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DB1B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DB1B8
  c->lr=c->r[0]; // 800DB1BC
  c->r[1]=c->r[1]+0x00000020u; // 800DB1C0
  return; // 800DB1C4
}

// InitMetroTRK
void f_800DB1C8(Ctx* __restrict c) {
  trace_call(0x800DB1C8u);
  c->r[1]=c->r[1]+0xFFFFFFFCu; // 800DB1C8
  W32(c->r[1]+0x00000000u,c->r[3]); // 800DB1CC
  c->r[3]=0u+0x802B0000u; // 800DB1D0
  c->r[3]=c->r[3]|0x0000EF98u; // 800DB1D4
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB1D8
  c->r[4]=R32(c->r[1]+0x00000000u); // 800DB1DC
  c->r[1]=c->r[1]+0x00000004u; // 800DB1E0
  W32(c->r[3]+0x00000004u,c->r[1]); // 800DB1E4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800DB1E8
  c->r[4]=c->lr; // 800DB1EC
  W32(c->r[3]+0x00000084u,c->r[4]); // 800DB1F0
  W32(c->r[3]+0x00000080u,c->r[4]); // 800DB1F4
  c->r[4]=c->cr; // 800DB1F8
  W32(c->r[3]+0x00000088u,c->r[4]); // 800DB1FC
  c->r[4]=c->msr; // 800DB200
  c->r[3]=c->r[4]|0x00008000u; // 800DB204
  c->r[3]=c->r[3]^0x00008000u; // 800DB208
  c->msr=c->r[3]; // 800DB20C
  mtspr(c,27,c->r[4]); // 800DB210
  c->lr=0x800DB218u; f_800DACE0(c); // 800DB214
  c->r[3]=0u+0x802B0000u; // 800DB218
  c->r[3]=c->r[3]|0x0000EF98u; // 800DB21C
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB220
  c->r[0]=0u+0x00000000u; // 800DB224
  mtspr(c,1010,c->r[0]); // 800DB228
  mtspr(c,1013,c->r[0]); // 800DB22C
  c->r[1]=0u+0x803D0000u; // 800DB230
  c->r[1]=c->r[1]|0x0000D208u; // 800DB234
  c->r[3]=c->r[5]|c->r[5]; // 800DB238
  c->lr=0x800DB240u; f_800DB7DC(c); // 800DB23C
  cmps(c,0,(int32_t)c->r[3],1); // 800DB240
  if (!crb(c,2)) { goto L_800DB258; } // 800DB244
  c->r[4]=R32(c->r[3]+0x00000084u); // 800DB248
  c->lr=c->r[4]; // 800DB24C
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB250
  return; // 800DB254
L_800DB258:;
  f_800DB4E4(c); return; // 800DB258
}

// InitMetroTRK_BBA
void f_800DB260(Ctx* __restrict c) {
  trace_call(0x800DB260u);
  c->r[1]=c->r[1]+0xFFFFFFFCu; // 800DB260
  W32(c->r[1]+0x00000000u,c->r[3]); // 800DB264
  c->r[3]=0u+0x802B0000u; // 800DB268
  c->r[3]=c->r[3]|0x0000EF98u; // 800DB26C
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB270
  c->r[4]=R32(c->r[1]+0x00000000u); // 800DB274
  c->r[1]=c->r[1]+0x00000004u; // 800DB278
  W32(c->r[3]+0x00000004u,c->r[1]); // 800DB27C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800DB280
  c->r[4]=c->lr; // 800DB284
  W32(c->r[3]+0x00000084u,c->r[4]); // 800DB288
  W32(c->r[3]+0x00000080u,c->r[4]); // 800DB28C
  c->r[4]=c->cr; // 800DB290
  W32(c->r[3]+0x00000088u,c->r[4]); // 800DB294
  c->r[4]=c->msr; // 800DB298
  c->r[3]=c->r[4]|0x00008000u; // 800DB29C
  c->msr=c->r[3]; // 800DB2A0
  mtspr(c,27,c->r[4]); // 800DB2A4
  c->lr=0x800DB2ACu; f_800DACE0(c); // 800DB2A8
  c->r[3]=0u+0x802B0000u; // 800DB2AC
  c->r[3]=c->r[3]|0x0000EF98u; // 800DB2B0
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB2B4
  c->r[0]=0u+0x00000000u; // 800DB2B8
  mtspr(c,1010,c->r[0]); // 800DB2BC
  mtspr(c,1013,c->r[0]); // 800DB2C0
  c->r[1]=0u+0x803D0000u; // 800DB2C4
  c->r[1]=c->r[1]|0x0000D208u; // 800DB2C8
  c->r[3]=0u+0x00000002u; // 800DB2CC
  c->lr=0x800DB2D4u; f_800DB7DC(c); // 800DB2D0
  cmps(c,0,(int32_t)c->r[3],1); // 800DB2D4
  if (!crb(c,2)) { goto L_800DB2EC; } // 800DB2D8
  c->r[4]=R32(c->r[3]+0x00000084u); // 800DB2DC
  c->lr=c->r[4]; // 800DB2E0
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB2E4
  return; // 800DB2E8
L_800DB2EC:;
  f_800DB4E4(c); return; // 800DB2EC
  return; // 800DB2F0
}

// TRKInitializeTarget
void f_800DB2F4(Ctx* __restrict c) {
  trace_call(0x800DB2F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB2F4
  c->r[0]=c->lr; // 800DB2F8
  c->r[3]=0u+0x802C0000u; // 800DB2FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB300
  c->r[0]=0u+0x00000001u; // 800DB304
  c->r[3]=c->r[3]+0xFFFFEEF4u; // 800DB308
  W32(c->r[3]+0x00000098u,c->r[0]); // 800DB30C
  c->lr=0x800DB314u; f_800D92A0(c); // 800DB310
  c->r[5]=0u+0x802C0000u; // 800DB314
  c->r[4]=0u+0x802C0000u; // 800DB318
  c->r[5]=c->r[5]+0xFFFFEEF4u; // 800DB31C
  c->r[0]=0u+0xE0000000u; // 800DB320
  W32(c->r[5]+0x0000008Cu,c->r[3]); // 800DB324
  c->r[3]=0u+0x00000000u; // 800DB328
  W32(c->r[4]+0xFFFFF470u,c->r[0]); // 800DB32C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB330
  c->lr=c->r[0]; // 800DB334
  c->r[1]=c->r[1]+0x00000010u; // 800DB338
  return; // 800DB33C
}

// __TRK_copy_vectors
void f_800DB340(Ctx* __restrict c) {
  trace_call(0x800DB340u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB340
  c->r[0]=c->lr; // 800DB344
  c->r[3]=0u+0x802C0000u; // 800DB348
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB34C
  c->r[3]=c->r[3]+0xFFFFF470u; // 800DB350
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DB354
  c->r[3]=R32(c->r[3]+0x00000000u); // 800DB358
  cmpu(c,0,c->r[3],0x00000044u); // 800DB35C
  if (crb(c,1)) { goto L_800DB38C; } // 800DB360
  c->r[0]=c->r[3]+0x00004000u; // 800DB364
  cmpu(c,0,c->r[0],0x00000044u); // 800DB368
  if (!crb(c,1)) { goto L_800DB38C; } // 800DB36C
  c->r[3]=0u+0x802C0000u; // 800DB370
  c->r[3]=c->r[3]+0xFFFFEF98u; // 800DB374
  c->r[0]=R32(c->r[3]+0x00000238u); // 800DB378
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800DB37C
  if (crb(c,2)) { goto L_800DB38C; } // 800DB380
  c->r[5]=0u+0x00000044u; // 800DB384
  goto L_800DB394; // 800DB388
L_800DB38C:;
  c->r[3]=0u+0x80000000u; // 800DB38C
  c->r[5]=c->r[3]+0x00000044u; // 800DB390
L_800DB394:;
  c->r[4]=0u+0x80220000u; // 800DB394
  c->r[3]=0u+0x802C0000u; // 800DB398
  c->r[29]=R32(c->r[5]+0x00000000u); // 800DB39C
  c->r[31]=c->r[4]+0xFFFFC7A0u; // 800DB3A0
  c->r[28]=c->r[3]+0xFFFFEF98u; // 800DB3A4
  c->r[30]=0u+0x00000000u; // 800DB3A8
L_800DB3AC:;
  c->r[0]=0u+0x00000001u; // 800DB3AC
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[0]<<((c->r[30])&31)); // 800DB3B0
  c->r[0]=c->r[29]&c->r[0]; cr0(c,c->r[0]); // 800DB3B4
  if (crb(c,2)) { goto L_800DB448; } // 800DB3B8
  cmps(c,0,(int32_t)c->r[30],4); // 800DB3BC
  if (crb(c,2)) { goto L_800DB448; } // 800DB3C0
  c->r[3]=0u+0x802C0000u; // 800DB3C4
  c->r[6]=R32(c->r[31]+0x00000000u); // 800DB3C8
  c->r[3]=c->r[3]+0xFFFFF470u; // 800DB3CC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800DB3D0
  cmpu(c,0,c->r[6],c->r[3]); // 800DB3D4
  if (crb(c,0)) { goto L_800DB3FC; } // 800DB3D8
  c->r[0]=c->r[3]+0x00004000u; // 800DB3DC
  cmpu(c,0,c->r[6],c->r[0]); // 800DB3E0
  if (!crb(c,0)) { goto L_800DB3FC; } // 800DB3E4
  c->r[0]=R32(c->r[28]+0x00000238u); // 800DB3E8
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800DB3EC
  if (crb(c,2)) { goto L_800DB3FC; } // 800DB3F0
  c->r[27]=c->r[6]|c->r[6]; // 800DB3F4
  goto L_800DB424; // 800DB3F8
L_800DB3FC:;
  c->r[0]=0u+0x7E000000u; // 800DB3FC
  cmpu(c,0,c->r[6],c->r[0]); // 800DB400
  if (crb(c,0)) { goto L_800DB41C; } // 800DB404
  c->r[0]=0u+0x80000000u; // 800DB408
  cmpu(c,0,c->r[6],c->r[0]); // 800DB40C
  if (crb(c,1)) { goto L_800DB41C; } // 800DB410
  c->r[27]=c->r[6]|c->r[6]; // 800DB414
  goto L_800DB424; // 800DB418
L_800DB41C:;
  c->r[0]=rotl(c->r[6],0)&0x3FFFFFFFu; // 800DB41C
  c->r[27]=c->r[0]|0x80000000u; // 800DB420
L_800DB424:;
  c->r[4]=0u+0x80000000u; // 800DB424
  c->r[3]=c->r[27]|c->r[27]; // 800DB428
  c->r[0]=c->r[4]+0x000044C0u; // 800DB42C
  c->r[5]=0u+0x00000100u; // 800DB430
  c->r[4]=c->r[0]+c->r[6]; // 800DB434
  c->lr=0x800DB43Cu; f_8000449C(c); // 800DB438
  c->r[3]=c->r[27]|c->r[27]; // 800DB43C
  c->r[4]=0u+0x00000100u; // 800DB440
  c->lr=0x800DB448u; f_800D9194(c); // 800DB444
L_800DB448:;
  c->r[30]=c->r[30]+0x00000001u; // 800DB448
  c->r[31]=c->r[31]+0x00000004u; // 800DB44C
  cmps(c,0,(int32_t)c->r[30],14); // 800DB450
  if (!crb(c,1)) { IRQCHK(c); goto L_800DB3AC; } // 800DB454
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB458
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB45C
  c->lr=c->r[0]; // 800DB460
  c->r[1]=c->r[1]+0x00000020u; // 800DB464
  return; // 800DB468
}

// TRKTargetTranslate
void f_800DB46C(Ctx* __restrict c) {
  trace_call(0x800DB46Cu);
  c->r[4]=0u+0x802C0000u; // 800DB46C
  c->r[4]=c->r[4]+0xFFFFF470u; // 800DB470
  c->r[4]=R32(c->r[4]+0x00000000u); // 800DB474
  cmpu(c,0,c->r[3],c->r[4]); // 800DB478
  if (crb(c,0)) { goto L_800DB4A0; } // 800DB47C
  c->r[0]=c->r[4]+0x00004000u; // 800DB480
  cmpu(c,0,c->r[3],c->r[0]); // 800DB484
  if (!crb(c,0)) { goto L_800DB4A0; } // 800DB488
  c->r[4]=0u+0x802C0000u; // 800DB48C
  c->r[4]=c->r[4]+0xFFFFEF98u; // 800DB490
  c->r[0]=R32(c->r[4]+0x00000238u); // 800DB494
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800DB498
  if (!crb(c,2)) return; // 800DB49C
L_800DB4A0:;
  c->r[0]=0u+0x7E000000u; // 800DB4A0
  cmpu(c,0,c->r[3],c->r[0]); // 800DB4A4
  if (crb(c,0)) { goto L_800DB4B8; } // 800DB4A8
  c->r[0]=0u+0x80000000u; // 800DB4AC
  cmpu(c,0,c->r[3],c->r[0]); // 800DB4B0
  if (!crb(c,1)) return; // 800DB4B4
L_800DB4B8:;
  c->r[0]=rotl(c->r[3],0)&0x3FFFFFFFu; // 800DB4B8
  c->r[3]=c->r[0]|0x80000000u; // 800DB4BC
  return; // 800DB4C0
}

// EnableMetroTRKInterrupts
void f_800DB4C4(Ctx* __restrict c) {
  trace_call(0x800DB4C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB4C4
  c->r[0]=c->lr; // 800DB4C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB4CC
  c->lr=0x800DB4D4u; f_800DB744(c); // 800DB4D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB4D4
  c->lr=c->r[0]; // 800DB4D8
  c->r[1]=c->r[1]+0x00000010u; // 800DB4DC
  return; // 800DB4E0
}

// TRK_main
void f_800DB4E4(Ctx* __restrict c) {
  trace_call(0x800DB4E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB4E4
  c->r[0]=c->lr; // 800DB4E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB4EC
  c->lr=0x800DB4F4u; f_800D6C34(c); // 800DB4F0
  c->r[4]=0u+0x802C0000u; // 800DB4F4
  cmps(c,0,(int32_t)c->r[3],0); // 800DB4F8
  W32(c->r[4]+0xFFFFF478u,c->r[3]); // 800DB4FC
  if (!crb(c,2)) { goto L_800DB50C; } // 800DB500
  c->lr=0x800DB508u; f_800D6BE8(c); // 800DB504
  c->lr=0x800DB50Cu; f_800D68C8(c); // 800DB508
L_800DB50C:;
  c->lr=0x800DB510u; f_800D6C10(c); // 800DB50C
  c->r[4]=0u+0x802C0000u; // 800DB510
  W32(c->r[4]+0xFFFFF478u,c->r[3]); // 800DB514
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB518
  c->lr=c->r[0]; // 800DB51C
  c->r[1]=c->r[1]+0x00000010u; // 800DB520
  return; // 800DB524
}

// TRKLoadContext
void f_800DB528(Ctx* __restrict c) {
  trace_call(0x800DB528u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DB528
  c->r[1]=R32(c->r[3]+0x00000004u); // 800DB52C
  c->r[2]=R32(c->r[3]+0x00000008u); // 800DB530
  c->r[5]=R16(c->r[3]+0x000001A2u); // 800DB534
  c->r[6]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[6]); // 800DB538
  if (crb(c,2)) { goto L_800DB550; } // 800DB53C
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFDu; // 800DB540
  W16(c->r[3]+0x000001A2u,c->r[5]); // 800DB544
  {uint32_t ea=c->r[3]+0x00000014u; for(int i=5;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB548
  goto L_800DB554; // 800DB54C
L_800DB550:;
  {uint32_t ea=c->r[3]+0x00000034u; for(int i=13;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DB550
L_800DB554:;
  c->r[31]=c->r[3]|c->r[3]; // 800DB554
  c->r[3]=c->r[4]|c->r[4]; // 800DB558
  c->r[4]=R32(c->r[31]+0x00000080u); // 800DB55C
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[4]&0xFFFFFFFFu); // 800DB560
  c->r[4]=R32(c->r[31]+0x00000084u); // 800DB564
  c->lr=c->r[4]; // 800DB568
  c->r[4]=R32(c->r[31]+0x00000088u); // 800DB56C
  c->ctr=c->r[4]; // 800DB570
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 800DB574
  mtspr(c,1,c->r[4]); // 800DB578
  c->r[4]=c->msr; // 800DB57C
  c->r[4]=rotl(c->r[4],0)&0xFFFF7FFFu; // 800DB580
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFDu; // 800DB584
  c->msr=c->r[4]; // 800DB588
  mtspr(c,273,c->r[2]); // 800DB58C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800DB590
  mtspr(c,274,c->r[4]); // 800DB594
  c->r[4]=R32(c->r[31]+0x00000010u); // 800DB598
  mtspr(c,275,c->r[4]); // 800DB59C
  c->r[2]=R32(c->r[31]+0x00000198u); // 800DB5A0
  c->r[4]=R32(c->r[31]+0x0000019Cu); // 800DB5A4
  c->r[31]=R32(c->r[31]+0x0000007Cu); // 800DB5A8
  f_800D92EC(c); return; // 800DB5AC
}

// TRKUARTInterruptHandler
void f_800DB5B0(Ctx* __restrict c) {
  trace_call(0x800DB5B0u);
  return; // 800DB5B0
}

// InitializeProgramEndTrap
void f_800DB5B4(Ctx* __restrict c) {
  trace_call(0x800DB5B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB5B4
  c->r[0]=c->lr; // 800DB5B8
  c->r[4]=0u+0x80090000u; // 800DB5BC
  c->r[3]=0u+0x801F0000u; // 800DB5C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB5C4
  c->r[5]=0u+0x00000004u; // 800DB5C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB5CC
  c->r[31]=c->r[4]+0x00007A4Cu; // 800DB5D0
  c->r[4]=c->r[3]+0x00004BE0u; // 800DB5D4
  c->r[3]=c->r[31]+0x00000004u; // 800DB5D8
  c->lr=0x800DB5E0u; f_8000449C(c); // 800DB5DC
  c->r[3]=c->r[31]+0x00000004u; // 800DB5E0
  c->r[4]=0u+0x00000004u; // 800DB5E4
  c->lr=0x800DB5ECu; f_8009A0C4(c); // 800DB5E8
  c->r[3]=c->r[31]+0x00000004u; // 800DB5EC
  c->r[4]=0u+0x00000004u; // 800DB5F0
  c->lr=0x800DB5F8u; f_8009A00C(c); // 800DB5F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB5F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB5FC
  c->lr=c->r[0]; // 800DB600
  c->r[1]=c->r[1]+0x00000010u; // 800DB604
  return; // 800DB608
}

// TRK_board_display
void f_800DB60C(Ctx* __restrict c) {
  trace_call(0x800DB60Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB60C
  c->r[0]=c->lr; // 800DB610
  c->r[5]=0u+0x801F0000u; // 800DB614
  c->r[4]=c->r[3]|c->r[3]; // 800DB618
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB61C
  c->r[3]=c->r[5]+0x00004BE4u; // 800DB620
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB624
  c->lr=0x800DB62Cu; f_8009AC4C(c); // 800DB628
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB62C
  c->lr=c->r[0]; // 800DB630
  c->r[1]=c->r[1]+0x00000010u; // 800DB634
  return; // 800DB638
}

// UnreserveEXI2Port
void f_800DB63C(Ctx* __restrict c) {
  trace_call(0x800DB63Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB63C
  c->r[0]=c->lr; // 800DB640
  c->r[3]=0u+0x80220000u; // 800DB644
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB648
  c->r[3]=c->r[3]+0xFFFFC7E0u; // 800DB64C
  c->r[12]=R32(c->r[3]+0x00000020u); // 800DB650
  c->ctr=c->r[12]; // 800DB654
  if (true) { c->lr=0x800DB65Cu; dispatch(c,c->ctr); } // 800DB658
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB65C
  c->lr=c->r[0]; // 800DB660
  c->r[1]=c->r[1]+0x00000010u; // 800DB664
  return; // 800DB668
}

// ReserveEXI2Port
void f_800DB66C(Ctx* __restrict c) {
  trace_call(0x800DB66Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB66C
  c->r[0]=c->lr; // 800DB670
  c->r[3]=0u+0x80220000u; // 800DB674
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB678
  c->r[3]=c->r[3]+0xFFFFC7E0u; // 800DB67C
  c->r[12]=R32(c->r[3]+0x00000024u); // 800DB680
  c->ctr=c->r[12]; // 800DB684
  if (true) { c->lr=0x800DB68Cu; dispatch(c,c->ctr); } // 800DB688
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB68C
  c->lr=c->r[0]; // 800DB690
  c->r[1]=c->r[1]+0x00000010u; // 800DB694
  return; // 800DB698
}

// TRKWriteUARTN
void f_800DB69C(Ctx* __restrict c) {
  trace_call(0x800DB69Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB69C
  c->r[0]=c->lr; // 800DB6A0
  c->r[5]=0u+0x80220000u; // 800DB6A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB6A8
  c->r[5]=c->r[5]+0xFFFFC7E0u; // 800DB6AC
  c->r[12]=R32(c->r[5]+0x00000014u); // 800DB6B0
  c->ctr=c->r[12]; // 800DB6B4
  if (true) { c->lr=0x800DB6BCu; dispatch(c,c->ctr); } // 800DB6B8
  c->r[0]=0u-c->r[3]; // 800DB6BC
  c->r[0]=c->r[0]|c->r[3]; // 800DB6C0
  c->r[3]=sraw(c,c->r[0],31); // 800DB6C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB6C8
  c->lr=c->r[0]; // 800DB6CC
  c->r[1]=c->r[1]+0x00000010u; // 800DB6D0
  return; // 800DB6D4
}

// TRKReadUARTN
void f_800DB6D8(Ctx* __restrict c) {
  trace_call(0x800DB6D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB6D8
  c->r[0]=c->lr; // 800DB6DC
  c->r[5]=0u+0x80220000u; // 800DB6E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB6E4
  c->r[5]=c->r[5]+0xFFFFC7E0u; // 800DB6E8
  c->r[12]=R32(c->r[5]+0x00000010u); // 800DB6EC
  c->ctr=c->r[12]; // 800DB6F0
  if (true) { c->lr=0x800DB6F8u; dispatch(c,c->ctr); } // 800DB6F4
  c->r[0]=0u-c->r[3]; // 800DB6F8
  c->r[0]=c->r[0]|c->r[3]; // 800DB6FC
  c->r[3]=sraw(c,c->r[0],31); // 800DB700
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB704
  c->lr=c->r[0]; // 800DB708
  c->r[1]=c->r[1]+0x00000010u; // 800DB70C
  return; // 800DB710
}

// TRKPollUART
void f_800DB714(Ctx* __restrict c) {
  trace_call(0x800DB714u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB714
  c->r[0]=c->lr; // 800DB718
  c->r[3]=0u+0x80220000u; // 800DB71C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB720
  c->r[3]=c->r[3]+0xFFFFC7E0u; // 800DB724
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 800DB728
  c->ctr=c->r[12]; // 800DB72C
  if (true) { c->lr=0x800DB734u; dispatch(c,c->ctr); } // 800DB730
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB734
  c->lr=c->r[0]; // 800DB738
  c->r[1]=c->r[1]+0x00000010u; // 800DB73C
  return; // 800DB740
}

// EnableEXI2Interrupts
void f_800DB744(Ctx* __restrict c) {
  trace_call(0x800DB744u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB744
  c->r[0]=c->lr; // 800DB748
  c->r[3]=0u+0x802C0000u; // 800DB74C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB750
  c->r[0]=R8(c->r[3]+0xFFFFF480u); // 800DB754
  cmpu(c,0,c->r[0],0x00000000u); // 800DB758
  if (!crb(c,2)) { goto L_800DB77C; } // 800DB75C
  c->r[3]=0u+0x80220000u; // 800DB760
  c->r[3]=c->r[3]+0xFFFFC7E0u; // 800DB764
  c->r[12]=R32(c->r[3]+0x00000004u); // 800DB768
  cmpu(c,0,c->r[12],0x00000000u); // 800DB76C
  if (crb(c,2)) { goto L_800DB77C; } // 800DB770
  c->ctr=c->r[12]; // 800DB774
  if (true) { c->lr=0x800DB77Cu; dispatch(c,c->ctr); } // 800DB778
L_800DB77C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB77C
  c->lr=c->r[0]; // 800DB780
  c->r[1]=c->r[1]+0x00000010u; // 800DB784
  return; // 800DB788
}

// TRKInitializeIntDrivenUART
void f_800DB78C(Ctx* __restrict c) {
  trace_call(0x800DB78Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB78C
  c->r[0]=c->lr; // 800DB790
  c->r[4]=0u+0x800E0000u; // 800DB794
  c->r[3]=0u+0x80220000u; // 800DB798
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB79C
  c->r[4]=c->r[4]+0xFFFFB9B0u; // 800DB7A0
  c->r[12]=R32(c->r[3]+0xFFFFC7E0u); // 800DB7A4
  c->r[3]=c->r[6]|c->r[6]; // 800DB7A8
  c->ctr=c->r[12]; // 800DB7AC
  if (true) { c->lr=0x800DB7B4u; dispatch(c,c->ctr); } // 800DB7B0
  c->r[3]=0u+0x80220000u; // 800DB7B4
  c->r[3]=c->r[3]+0xFFFFC7E0u; // 800DB7B8
  c->r[12]=R32(c->r[3]+0x00000018u); // 800DB7BC
  c->ctr=c->r[12]; // 800DB7C0
  if (true) { c->lr=0x800DB7C8u; dispatch(c,c->ctr); } // 800DB7C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB7C8
  c->r[3]=0u+0x00000000u; // 800DB7CC
  c->lr=c->r[0]; // 800DB7D0
  c->r[1]=c->r[1]+0x00000010u; // 800DB7D4
  return; // 800DB7D8
}

// InitMetroTRKCommTable
void f_800DB7DC(Ctx* __restrict c) {
  trace_call(0x800DB7DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB7DC
  c->r[0]=c->lr; // 800DB7E0
  c->r[4]=0u+0x801F0000u; // 800DB7E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB7E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DB7EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DB7F0
  c->r[30]=c->r[3]|c->r[3]; // 800DB7F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DB7F8
  c->r[29]=c->r[4]+0x00004BE0u; // 800DB7FC
  c->r[4]=c->r[30]|c->r[30]; // 800DB800
  c->r[3]=c->r[29]+0x00000008u; // 800DB804
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB808
  c->lr=0x800DB810u; f_8009AC4C(c); // 800DB80C
  c->r[3]=c->r[29]+0x00000020u; // 800DB810
  c->r[4]=0u+0x00000040u; // 800DB814
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB818
  c->lr=0x800DB820u; f_8009AC4C(c); // 800DB81C
  c->r[3]=0u+0x802C0000u; // 800DB820
  c->r[0]=0u+0x00000000u; // 800DB824
  cmps(c,0,(int32_t)c->r[30],2); // 800DB828
  W8(c->r[3]+0xFFFFF480u,c->r[0]); // 800DB82C
  if (!crb(c,2)) { goto L_800DB8D0; } // 800DB830
  c->r[3]=c->r[29]+0x00000048u; // 800DB834
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB838
  c->lr=0x800DB840u; f_8009AC4C(c); // 800DB83C
  c->r[12]=0u+0x800E0000u; // 800DB840
  c->r[11]=0u+0x80220000u; // 800DB844
  c->r[31]=c->r[12]+0xFFFFBA78u; // 800DB848
  c->r[10]=0u+0x800E0000u; // 800DB84C
  c->r[12]=c->r[11]+0xFFFFC7E0u; // 800DB850
  c->r[0]=0u+0x00000000u; // 800DB854
  c->r[11]=c->r[10]+0xFFFFBA68u; // 800DB858
  c->r[9]=0u+0x800E0000u; // 800DB85C
  c->r[10]=c->r[9]+0xFFFFBA60u; // 800DB860
  c->r[8]=0u+0x800E0000u; // 800DB864
  c->r[9]=c->r[8]+0xFFFFBA58u; // 800DB868
  c->r[7]=0u+0x800E0000u; // 800DB86C
  c->r[8]=c->r[7]+0xFFFFBA50u; // 800DB870
  c->r[6]=0u+0x800E0000u; // 800DB874
  c->r[7]=c->r[6]+0xFFFFBA70u; // 800DB878
  c->r[5]=0u+0x800E0000u; // 800DB87C
  c->r[6]=c->r[5]+0xFFFFBA48u; // 800DB880
  c->r[4]=0u+0x800E0000u; // 800DB884
  c->r[5]=c->r[4]+0xFFFFBA40u; // 800DB888
  c->r[3]=0u+0x800E0000u; // 800DB88C
  c->r[4]=c->r[3]+0xFFFFBA38u; // 800DB890
  c->r[30]=0u+0x802C0000u; // 800DB894
  c->r[29]=0u+0x00000001u; // 800DB898
  W32(c->r[12]+0x00000000u,c->r[31]); // 800DB89C
  c->r[3]=0u+0x00000000u; // 800DB8A0
  W8(c->r[30]+0xFFFFF480u,c->r[29]); // 800DB8A4
  W32(c->r[12]+0x00000018u,c->r[11]); // 800DB8A8
  W32(c->r[12]+0x0000001Cu,c->r[10]); // 800DB8AC
  W32(c->r[12]+0x00000010u,c->r[9]); // 800DB8B0
  W32(c->r[12]+0x00000014u,c->r[8]); // 800DB8B4
  W32(c->r[12]+0x00000008u,c->r[7]); // 800DB8B8
  W32(c->r[12]+0x0000000Cu,c->r[6]); // 800DB8BC
  W32(c->r[12]+0x00000020u,c->r[5]); // 800DB8C0
  W32(c->r[12]+0x00000024u,c->r[4]); // 800DB8C4
  W32(c->r[12]+0x00000004u,c->r[0]); // 800DB8C8
  goto L_800DB994; // 800DB8CC
L_800DB8D0:;
  cmps(c,0,(int32_t)c->r[30],1); // 800DB8D0
  if (!crb(c,2)) { goto L_800DB968; } // 800DB8D4
  c->r[3]=c->r[29]+0x00000060u; // 800DB8D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB8DC
  c->lr=0x800DB8E4u; f_8009AC4C(c); // 800DB8E0
  c->r[31]=0u+0x800E0000u; // 800DB8E4
  c->r[11]=0u+0x800E0000u; // 800DB8E8
  c->r[31]=c->r[31]+0xFFFFBCB8u; // 800DB8EC
  c->r[12]=0u+0x80220000u; // 800DB8F0
  c->r[10]=0u+0x800E0000u; // 800DB8F4
  c->r[9]=0u+0x800E0000u; // 800DB8F8
  c->r[8]=0u+0x800E0000u; // 800DB8FC
  c->r[7]=0u+0x800E0000u; // 800DB900
  c->r[6]=0u+0x800E0000u; // 800DB904
  c->r[5]=0u+0x800E0000u; // 800DB908
  c->r[4]=0u+0x800E0000u; // 800DB90C
  c->r[3]=0u+0x800E0000u; // 800DB910
  c->r[0]=c->r[3]+0xFFFFBA80u; // 800DB914
  {uint32_t ea=c->r[12]+0xFFFFC7E0u; W32(ea,c->r[31]); c->r[12]=ea;} // 800DB918
  c->r[11]=c->r[11]+0xFFFFBC8Cu; // 800DB91C
  c->r[10]=c->r[10]+0xFFFFBC84u; // 800DB920
  c->r[9]=c->r[9]+0xFFFFBBD0u; // 800DB924
  c->r[8]=c->r[8]+0xFFFFBB5Cu; // 800DB928
  c->r[7]=c->r[7]+0xFFFFBCB0u; // 800DB92C
  c->r[6]=c->r[6]+0xFFFFBAA4u; // 800DB930
  c->r[5]=c->r[5]+0xFFFFBB38u; // 800DB934
  c->r[4]=c->r[4]+0xFFFFBB14u; // 800DB938
  W32(c->r[12]+0x00000018u,c->r[11]); // 800DB93C
  c->r[3]=0u+0x00000000u; // 800DB940
  W32(c->r[12]+0x0000001Cu,c->r[10]); // 800DB944
  W32(c->r[12]+0x00000010u,c->r[9]); // 800DB948
  W32(c->r[12]+0x00000014u,c->r[8]); // 800DB94C
  W32(c->r[12]+0x00000008u,c->r[7]); // 800DB950
  W32(c->r[12]+0x0000000Cu,c->r[6]); // 800DB954
  W32(c->r[12]+0x00000020u,c->r[5]); // 800DB958
  W32(c->r[12]+0x00000024u,c->r[4]); // 800DB95C
  W32(c->r[12]+0x00000004u,c->r[0]); // 800DB960
  goto L_800DB994; // 800DB964
L_800DB968:;
  c->r[4]=c->r[30]|c->r[30]; // 800DB968
  c->r[3]=c->r[29]+0x00000084u; // 800DB96C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB970
  c->lr=0x800DB978u; f_8009AC4C(c); // 800DB974
  c->r[3]=c->r[29]+0x000000B0u; // 800DB978
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB97C
  c->lr=0x800DB984u; f_8009AC4C(c); // 800DB980
  c->r[3]=c->r[29]+0x000000E0u; // 800DB984
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DB988
  c->lr=0x800DB990u; f_8009AC4C(c); // 800DB98C
  c->r[3]=0u+0x00000001u; // 800DB990
L_800DB994:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB994
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DB998
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DB99C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DB9A0
  c->lr=c->r[0]; // 800DB9A4
  c->r[1]=c->r[1]+0x00000020u; // 800DB9A8
  return; // 800DB9AC
}

// TRKEXICallBack
void f_800DB9B0(Ctx* __restrict c) {
  trace_call(0x800DB9B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB9B0
  c->r[0]=c->lr; // 800DB9B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB9B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DB9BC
  c->r[31]=c->r[4]|c->r[4]; // 800DB9C0
  c->lr=0x800DB9C8u; f_800A0B04(c); // 800DB9C4
  c->r[3]=c->r[31]|c->r[31]; // 800DB9C8
  c->r[4]=0u+0x00000500u; // 800DB9CC
  c->lr=0x800DB9D4u; f_800DB528(c); // 800DB9D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DB9D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DB9D8
  c->lr=c->r[0]; // 800DB9DC
  c->r[1]=c->r[1]+0x00000010u; // 800DB9E0
  return; // 800DB9E4
}

// TRKTargetContinue
void f_800DB9E8(Ctx* __restrict c) {
  trace_call(0x800DB9E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB9E8
  c->r[0]=c->lr; // 800DB9EC
  c->r[3]=0u+0x00000000u; // 800DB9F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DB9F4
  c->lr=0x800DB9FCu; f_800D96A4(c); // 800DB9F8
  c->lr=0x800DBA00u; f_800DB63C(c); // 800DB9FC
  c->lr=0x800DBA04u; f_800D951C(c); // 800DBA00
  c->lr=0x800DBA08u; f_800DB66C(c); // 800DBA04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBA08
  c->r[3]=0u+0x00000000u; // 800DBA0C
  c->lr=c->r[0]; // 800DBA10
  c->r[1]=c->r[1]+0x00000010u; // 800DBA14
  return; // 800DBA18
}

// GetUseSerialIO
void f_800DBA1C(Ctx* __restrict c) {
  trace_call(0x800DBA1Cu);
  c->r[3]=0u+0x802C0000u; // 800DBA1C
  c->r[3]=c->r[3]+0xFFFFF488u; // 800DBA20
  c->r[3]=R8(c->r[3]+0x00000000u); // 800DBA24
  return; // 800DBA28
}

// SetUseSerialIO
void f_800DBA2C(Ctx* __restrict c) {
  trace_call(0x800DBA2Cu);
  c->r[4]=0u+0x802C0000u; // 800DBA2C
  W8(c->r[4]+0xFFFFF488u,c->r[3]); // 800DBA30
  return; // 800DBA34
}

// udp_cc_post_stop
void f_800DBA38(Ctx* __restrict c) {
  trace_call(0x800DBA38u);
  c->r[3]=0u+0xFFFFFFFFu; // 800DBA38
  return; // 800DBA3C
}

// udp_cc_pre_continue
void f_800DBA40(Ctx* __restrict c) {
  trace_call(0x800DBA40u);
  c->r[3]=0u+0xFFFFFFFFu; // 800DBA40
  return; // 800DBA44
}

// udp_cc_peek
void f_800DBA48(Ctx* __restrict c) {
  trace_call(0x800DBA48u);
  c->r[3]=0u+0x00000000u; // 800DBA48
  return; // 800DBA4C
}

// udp_cc_write
void f_800DBA50(Ctx* __restrict c) {
  trace_call(0x800DBA50u);
  c->r[3]=0u+0x00000000u; // 800DBA50
  return; // 800DBA54
}

// udp_cc_read
void f_800DBA58(Ctx* __restrict c) {
  trace_call(0x800DBA58u);
  c->r[3]=0u+0x00000000u; // 800DBA58
  return; // 800DBA5C
}

// udp_cc_close
void f_800DBA60(Ctx* __restrict c) {
  trace_call(0x800DBA60u);
  c->r[3]=0u+0xFFFFFFFFu; // 800DBA60
  return; // 800DBA64
}

// udp_cc_open
void f_800DBA68(Ctx* __restrict c) {
  trace_call(0x800DBA68u);
  c->r[3]=0u+0xFFFFFFFFu; // 800DBA68
  return; // 800DBA6C
}

// udp_cc_shutdown
void f_800DBA70(Ctx* __restrict c) {
  trace_call(0x800DBA70u);
  c->r[3]=0u+0xFFFFFFFFu; // 800DBA70
  return; // 800DBA74
}

// udp_cc_initialize
void f_800DBA78(Ctx* __restrict c) {
  trace_call(0x800DBA78u);
  c->r[3]=0u+0xFFFFFFFFu; // 800DBA78
  return; // 800DBA7C
}

// gdev_cc_initinterrupts
void f_800DBA80(Ctx* __restrict c) {
  trace_call(0x800DBA80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBA80
  c->r[0]=c->lr; // 800DBA84
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBA88
  c->lr=0x800DBA90u; f_80129558(c); // 800DBA8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBA90
  c->r[3]=0u+0x00000000u; // 800DBA94
  c->lr=c->r[0]; // 800DBA98
  c->r[1]=c->r[1]+0x00000010u; // 800DBA9C
  return; // 800DBAA0
}

// gdev_cc_peek
void f_800DBAA4(Ctx* __restrict c) {
  trace_call(0x800DBAA4u);
  {uint32_t ea=c->r[1]+0xFFFFFAF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBAA4
  c->r[0]=c->lr; // 800DBAA8
  W32(c->r[1]+0x00000514u,c->r[0]); // 800DBAAC
  W32(c->r[1]+0x0000050Cu,c->r[31]); // 800DBAB0
  c->lr=0x800DBAB8u; f_801295AC(c); // 800DBAB4
  c->r[31]=c->r[3]|c->r[3]; cr0(c,c->r[31]); // 800DBAB8
  if (crb(c,1)) { goto L_800DBAC8; } // 800DBABC
  c->r[3]=0u+0x00000000u; // 800DBAC0
  goto L_800DBB00; // 800DBAC4
L_800DBAC8:;
  c->r[4]=c->r[31]|c->r[31]; // 800DBAC8
  c->r[3]=c->r[1]+0x00000008u; // 800DBACC
  c->lr=0x800DBAD4u; f_80129650(c); // 800DBAD0
  cmps(c,0,(int32_t)c->r[3],0); // 800DBAD4
  if (!crb(c,2)) { goto L_800DBAF4; } // 800DBAD8
  c->r[3]=0u+0x802C0000u; // 800DBADC
  c->r[5]=c->r[31]|c->r[31]; // 800DBAE0
  c->r[3]=c->r[3]+0xFFFFF990u; // 800DBAE4
  c->r[4]=c->r[1]+0x00000008u; // 800DBAE8
  c->lr=0x800DBAF0u; f_800DBE48(c); // 800DBAEC
  goto L_800DBAFC; // 800DBAF0
L_800DBAF4:;
  c->r[3]=0u+0xFFFFD8E7u; // 800DBAF4
  goto L_800DBB00; // 800DBAF8
L_800DBAFC:;
  c->r[3]=c->r[31]|c->r[31]; // 800DBAFC
L_800DBB00:;
  c->r[0]=R32(c->r[1]+0x00000514u); // 800DBB00
  c->r[31]=R32(c->r[1]+0x0000050Cu); // 800DBB04
  c->lr=c->r[0]; // 800DBB08
  c->r[1]=c->r[1]+0x00000510u; // 800DBB0C
  return; // 800DBB10
}

// gdev_cc_post_stop
void f_800DBB14(Ctx* __restrict c) {
  trace_call(0x800DBB14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBB14
  c->r[0]=c->lr; // 800DBB18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBB1C
  c->lr=0x800DBB24u; f_801297E0(c); // 800DBB20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBB24
  c->r[3]=0u+0x00000000u; // 800DBB28
  c->lr=c->r[0]; // 800DBB2C
  c->r[1]=c->r[1]+0x00000010u; // 800DBB30
  return; // 800DBB34
}

// gdev_cc_pre_continue
void f_800DBB38(Ctx* __restrict c) {
  trace_call(0x800DBB38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBB38
  c->r[0]=c->lr; // 800DBB3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBB40
  c->lr=0x800DBB48u; f_801297E4(c); // 800DBB44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBB48
  c->r[3]=0u+0x00000000u; // 800DBB4C
  c->lr=c->r[0]; // 800DBB50
  c->r[1]=c->r[1]+0x00000010u; // 800DBB54
  return; // 800DBB58
}

// gdev_cc_write
void f_800DBB5C(Ctx* __restrict c) {
  trace_call(0x800DBB5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBB5C
  c->r[0]=c->lr; // 800DBB60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBB64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBB68
  c->r[31]=c->r[4]|c->r[4]; // 800DBB6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DBB70
  c->r[30]=c->r[3]|c->r[3]; // 800DBB74
  c->r[0]=R32(c->r[13]+0xFFFFA520u); // 800DBB78
  cmps(c,0,(int32_t)c->r[0],0); // 800DBB7C
  if (!crb(c,2)) { goto L_800DBBAC; } // 800DBB80
  c->r[3]=0u+0xFFFFD8EFu; // 800DBB84
  goto L_800DBBB8; // 800DBB88
  goto L_800DBBAC; // 800DBB8C
L_800DBB90:;
  c->r[3]=c->r[30]|c->r[30]; // 800DBB90
  c->r[4]=c->r[31]|c->r[31]; // 800DBB94
  c->lr=0x800DBB9Cu; f_801296D0(c); // 800DBB98
  cmps(c,0,(int32_t)c->r[3],0); // 800DBB9C
  if (crb(c,2)) { goto L_800DBBB4; } // 800DBBA0
  c->r[30]=c->r[30]+c->r[3]; // 800DBBA4
  c->r[31]=c->r[31]-c->r[3]; // 800DBBA8
L_800DBBAC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DBBAC
  if (crb(c,1)) { IRQCHK(c); goto L_800DBB90; } // 800DBBB0
L_800DBBB4:;
  c->r[3]=0u+0x00000000u; // 800DBBB4
L_800DBBB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBBB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBBBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DBBC0
  c->lr=c->r[0]; // 800DBBC4
  c->r[1]=c->r[1]+0x00000010u; // 800DBBC8
  return; // 800DBBCC
}

// gdev_cc_read
void f_800DBBD0(Ctx* __restrict c) {
  trace_call(0x800DBBD0u);
  {uint32_t ea=c->r[1]+0xFFFFFAE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBBD0
  c->r[0]=c->lr; // 800DBBD4
  W32(c->r[1]+0x00000524u,c->r[0]); // 800DBBD8
  {uint32_t ea=c->r[1]+0x0000050Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800DBBDC
  c->r[27]=c->r[3]|c->r[3]; // 800DBBE0
  c->r[29]=0u+0x00000000u; // 800DBBE4
  c->r[0]=R32(c->r[13]+0xFFFFA520u); // 800DBBE8
  cmps(c,0,(int32_t)c->r[0],0); // 800DBBEC
  if (!crb(c,2)) { goto L_800DBBFC; } // 800DBBF0
  c->r[3]=0u+0xFFFFD8EFu; // 800DBBF4
  goto L_800DBC70; // 800DBBF8
L_800DBBFC:;
  c->r[3]=0u+0x802C0000u; // 800DBBFC
  c->r[30]=c->r[4]|c->r[4]; // 800DBC00
  c->r[31]=c->r[3]+0xFFFFF990u; // 800DBC04
  goto L_800DBC40; // 800DBC08
L_800DBC0C:;
  c->r[29]=0u+0x00000000u; // 800DBC0C
  c->lr=0x800DBC14u; f_801295AC(c); // 800DBC10
  c->r[28]=c->r[3]|c->r[3]; cr0(c,c->r[28]); // 800DBC14
  if (crb(c,2)) { goto L_800DBC40; } // 800DBC18
  c->r[4]=c->r[30]|c->r[30]; // 800DBC1C
  c->r[3]=c->r[1]+0x00000008u; // 800DBC20
  c->lr=0x800DBC28u; f_80129650(c); // 800DBC24
  c->r[29]=c->r[3]|c->r[3]; cr0(c,c->r[29]); // 800DBC28
  if (!crb(c,2)) { goto L_800DBC40; } // 800DBC2C
  c->r[3]=c->r[31]|c->r[31]; // 800DBC30
  c->r[5]=c->r[28]|c->r[28]; // 800DBC34
  c->r[4]=c->r[1]+0x00000008u; // 800DBC38
  c->lr=0x800DBC40u; f_800DBE48(c); // 800DBC3C
L_800DBC40:;
  c->r[3]=c->r[31]|c->r[31]; // 800DBC40
  c->lr=0x800DBC48u; f_800DBFA0(c); // 800DBC44
  cmpu(c,0,c->r[3],c->r[30]); // 800DBC48
  if (crb(c,0)) { IRQCHK(c); goto L_800DBC0C; } // 800DBC4C
  cmpu(c,0,c->r[29],0x00000000u); // 800DBC50
  if (!crb(c,2)) { goto L_800DBC6C; } // 800DBC54
  c->r[3]=0u+0x802C0000u; // 800DBC58
  c->r[4]=c->r[27]|c->r[27]; // 800DBC5C
  c->r[3]=c->r[3]+0xFFFFF990u; // 800DBC60
  c->r[5]=c->r[30]|c->r[30]; // 800DBC64
  c->lr=0x800DBC6Cu; f_800DBD40(c); // 800DBC68
L_800DBC6C:;
  c->r[3]=c->r[29]|c->r[29]; // 800DBC6C
L_800DBC70:;
  {uint32_t ea=c->r[1]+0x0000050Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800DBC70
  c->r[0]=R32(c->r[1]+0x00000524u); // 800DBC74
  c->lr=c->r[0]; // 800DBC78
  c->r[1]=c->r[1]+0x00000520u; // 800DBC7C
  return; // 800DBC80
}

// gdev_cc_close
void f_800DBC84(Ctx* __restrict c) {
  trace_call(0x800DBC84u);
  c->r[3]=0u+0x00000000u; // 800DBC84
  return; // 800DBC88
}

// gdev_cc_open
void f_800DBC8C(Ctx* __restrict c) {
  trace_call(0x800DBC8Cu);
  c->r[0]=R32(c->r[13]+0xFFFFA520u); // 800DBC8C
  cmps(c,0,(int32_t)c->r[0],0); // 800DBC90
  if (crb(c,2)) { goto L_800DBCA0; } // 800DBC94
  c->r[3]=0u+0xFFFFD8EBu; // 800DBC98
  return; // 800DBC9C
L_800DBCA0:;
  c->r[0]=0u+0x00000001u; // 800DBCA0
  c->r[3]=0u+0x00000000u; // 800DBCA4
  W32(c->r[13]+0xFFFFA520u,c->r[0]); // 800DBCA8
  return; // 800DBCAC
}

// gdev_cc_shutdown
void f_800DBCB0(Ctx* __restrict c) {
  trace_call(0x800DBCB0u);
  c->r[3]=0u+0x00000000u; // 800DBCB0
  return; // 800DBCB4
}

// gdev_cc_initialize
void f_800DBCB8(Ctx* __restrict c) {
  trace_call(0x800DBCB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBCB8
  c->r[0]=c->lr; // 800DBCBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBCC0
  c->lr=0x800DBCC8u; f_801294FC(c); // 800DBCC4
  c->r[3]=0u+0x802C0000u; // 800DBCC8
  c->r[4]=0u+0x802C0000u; // 800DBCCC
  c->r[3]=c->r[3]+0xFFFFF990u; // 800DBCD0
  c->r[5]=0u+0x00000500u; // 800DBCD4
  c->r[4]=c->r[4]+0xFFFFF490u; // 800DBCD8
  c->lr=0x800DBCE0u; f_800DBF50(c); // 800DBCDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBCE0
  c->r[3]=0u+0x00000000u; // 800DBCE4
  c->lr=c->r[0]; // 800DBCE8
  c->r[1]=c->r[1]+0x00000010u; // 800DBCEC
  return; // 800DBCF0
}

// OutputData
void f_800DBCF4(Ctx* __restrict c) {
  trace_call(0x800DBCF4u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DBCF4
  c->r[5]=0u+0x00000000u; // 800DBCF8
  if (!crb(c,1)) return; // 800DBCFC
  cmps(c,0,(int32_t)c->r[4],8); // 800DBD00
  c->r[3]=c->r[4]+0xFFFFFFF8u; // 800DBD04
  if (!crb(c,1)) { goto L_800DBD28; } // 800DBD08
  c->r[0]=c->r[3]+0x00000007u; // 800DBD0C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800DBD10
  c->ctr=c->r[0]; // 800DBD14
  cmps(c,0,(int32_t)c->r[3],0); // 800DBD18
  if (!crb(c,1)) { goto L_800DBD28; } // 800DBD1C
L_800DBD20:;
  c->r[5]=c->r[5]+0x00000008u; // 800DBD20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DBD20; } // 800DBD24
L_800DBD28:;
  c->r[0]=c->r[4]-c->r[5]; // 800DBD28
  c->ctr=c->r[0]; // 800DBD2C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 800DBD30
  if (!crb(c,0)) return; // 800DBD34
L_800DBD38:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DBD38; } // 800DBD38
  return; // 800DBD3C
}

// CircleBufferReadBytes
void f_800DBD40(Ctx* __restrict c) {
  trace_call(0x800DBD40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBD40
  c->r[0]=c->lr; // 800DBD44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DBD48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DBD4C
  c->r[31]=c->r[5]|c->r[5]; // 800DBD50
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DBD54
  c->r[30]=c->r[3]|c->r[3]; // 800DBD58
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DBD5C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800DBD60
  c->r[28]=c->r[4]|c->r[4]; // 800DBD64
  c->r[0]=R32(c->r[3]+0x00000010u); // 800DBD68
  cmpu(c,0,c->r[31],c->r[0]); // 800DBD6C
  if (!crb(c,1)) { goto L_800DBD7C; } // 800DBD70
  c->r[3]=0u+0xFFFFFFFFu; // 800DBD74
  goto L_800DBE28; // 800DBD78
L_800DBD7C:;
  c->r[3]=c->r[30]+0x00000018u; // 800DBD7C
  c->lr=0x800DBD84u; f_800DBFCC(c); // 800DBD80
  c->r[3]=R32(c->r[30]+0x00000008u); // 800DBD84
  c->r[4]=R32(c->r[30]+0x00000000u); // 800DBD88
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800DBD8C
  c->r[3]=c->r[4]-c->r[3]; // 800DBD90
  c->r[29]=c->r[0]-c->r[3]; // 800DBD94
  cmpu(c,0,c->r[31],c->r[29]); // 800DBD98
  if (!crb(c,0)) { goto L_800DBDBC; } // 800DBD9C
  c->r[3]=c->r[28]|c->r[28]; // 800DBDA0
  c->r[5]=c->r[31]|c->r[31]; // 800DBDA4
  c->lr=0x800DBDACu; f_80004338(c); // 800DBDA8
  c->r[0]=R32(c->r[30]+0x00000000u); // 800DBDAC
  c->r[0]=c->r[0]+c->r[31]; // 800DBDB0
  W32(c->r[30]+0x00000000u,c->r[0]); // 800DBDB4
  goto L_800DBDE8; // 800DBDB8
L_800DBDBC:;
  c->r[3]=c->r[28]|c->r[28]; // 800DBDBC
  c->r[5]=c->r[29]|c->r[29]; // 800DBDC0
  c->lr=0x800DBDC8u; f_80004338(c); // 800DBDC4
  c->r[4]=R32(c->r[30]+0x00000008u); // 800DBDC8
  c->r[3]=c->r[28]+c->r[29]; // 800DBDCC
  c->r[5]=c->r[31]-c->r[29]; // 800DBDD0
  c->lr=0x800DBDD8u; f_80004338(c); // 800DBDD4
  c->r[0]=R32(c->r[30]+0x00000008u); // 800DBDD8
  c->r[0]=c->r[0]+c->r[31]; // 800DBDDC
  c->r[0]=c->r[0]-c->r[29]; // 800DBDE0
  W32(c->r[30]+0x00000000u,c->r[0]); // 800DBDE4
L_800DBDE8:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 800DBDE8
  c->r[0]=R32(c->r[30]+0x00000000u); // 800DBDEC
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800DBDF0
  c->r[0]=c->r[0]-c->r[4]; // 800DBDF4
  cmpu(c,0,c->r[3],c->r[0]); // 800DBDF8
  if (!crb(c,2)) { goto L_800DBE04; } // 800DBDFC
  W32(c->r[30]+0x00000000u,c->r[4]); // 800DBE00
L_800DBE04:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 800DBE04
  c->r[3]=c->r[30]+0x00000018u; // 800DBE08
  c->r[0]=c->r[0]+c->r[31]; // 800DBE0C
  W32(c->r[30]+0x00000014u,c->r[0]); // 800DBE10
  c->r[0]=R32(c->r[30]+0x00000010u); // 800DBE14
  c->r[0]=c->r[0]-c->r[31]; // 800DBE18
  W32(c->r[30]+0x00000010u,c->r[0]); // 800DBE1C
  c->lr=0x800DBE24u; f_800DBFA8(c); // 800DBE20
  c->r[3]=0u+0x00000000u; // 800DBE24
L_800DBE28:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DBE28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DBE2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DBE30
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DBE34
  c->r[28]=R32(c->r[1]+0x00000010u); // 800DBE38
  c->lr=c->r[0]; // 800DBE3C
  c->r[1]=c->r[1]+0x00000020u; // 800DBE40
  return; // 800DBE44
}

// CircleBufferWriteBytes
void f_800DBE48(Ctx* __restrict c) {
  trace_call(0x800DBE48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBE48
  c->r[0]=c->lr; // 800DBE4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DBE50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DBE54
  c->r[31]=c->r[5]|c->r[5]; // 800DBE58
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DBE5C
  c->r[30]=c->r[3]|c->r[3]; // 800DBE60
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DBE64
  W32(c->r[1]+0x00000010u,c->r[28]); // 800DBE68
  c->r[28]=c->r[4]|c->r[4]; // 800DBE6C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DBE70
  cmpu(c,0,c->r[31],c->r[0]); // 800DBE74
  if (!crb(c,1)) { goto L_800DBE84; } // 800DBE78
  c->r[3]=0u+0xFFFFFFFFu; // 800DBE7C
  goto L_800DBF30; // 800DBE80
L_800DBE84:;
  c->r[3]=c->r[30]+0x00000018u; // 800DBE84
  c->lr=0x800DBE8Cu; f_800DBFCC(c); // 800DBE88
  c->r[4]=R32(c->r[30]+0x00000008u); // 800DBE8C
  c->r[3]=R32(c->r[30]+0x00000004u); // 800DBE90
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800DBE94
  c->r[4]=c->r[3]-c->r[4]; // 800DBE98
  c->r[29]=c->r[0]-c->r[4]; // 800DBE9C
  cmpu(c,0,c->r[29],c->r[31]); // 800DBEA0
  if (crb(c,0)) { goto L_800DBEC4; } // 800DBEA4
  c->r[4]=c->r[28]|c->r[28]; // 800DBEA8
  c->r[5]=c->r[31]|c->r[31]; // 800DBEAC
  c->lr=0x800DBEB4u; f_80004338(c); // 800DBEB0
  c->r[0]=R32(c->r[30]+0x00000004u); // 800DBEB4
  c->r[0]=c->r[0]+c->r[31]; // 800DBEB8
  W32(c->r[30]+0x00000004u,c->r[0]); // 800DBEBC
  goto L_800DBEF0; // 800DBEC0
L_800DBEC4:;
  c->r[4]=c->r[28]|c->r[28]; // 800DBEC4
  c->r[5]=c->r[29]|c->r[29]; // 800DBEC8
  c->lr=0x800DBED0u; f_80004338(c); // 800DBECC
  c->r[3]=R32(c->r[30]+0x00000008u); // 800DBED0
  c->r[4]=c->r[28]+c->r[29]; // 800DBED4
  c->r[5]=c->r[31]-c->r[29]; // 800DBED8
  c->lr=0x800DBEE0u; f_80004338(c); // 800DBEDC
  c->r[0]=R32(c->r[30]+0x00000008u); // 800DBEE0
  c->r[0]=c->r[0]+c->r[31]; // 800DBEE4
  c->r[0]=c->r[0]-c->r[29]; // 800DBEE8
  W32(c->r[30]+0x00000004u,c->r[0]); // 800DBEEC
L_800DBEF0:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 800DBEF0
  c->r[0]=R32(c->r[30]+0x00000004u); // 800DBEF4
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800DBEF8
  c->r[0]=c->r[0]-c->r[4]; // 800DBEFC
  cmpu(c,0,c->r[3],c->r[0]); // 800DBF00
  if (!crb(c,2)) { goto L_800DBF0C; } // 800DBF04
  W32(c->r[30]+0x00000004u,c->r[4]); // 800DBF08
L_800DBF0C:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 800DBF0C
  c->r[3]=c->r[30]+0x00000018u; // 800DBF10
  c->r[0]=c->r[0]-c->r[31]; // 800DBF14
  W32(c->r[30]+0x00000014u,c->r[0]); // 800DBF18
  c->r[0]=R32(c->r[30]+0x00000010u); // 800DBF1C
  c->r[0]=c->r[0]+c->r[31]; // 800DBF20
  W32(c->r[30]+0x00000010u,c->r[0]); // 800DBF24
  c->lr=0x800DBF2Cu; f_800DBFA8(c); // 800DBF28
  c->r[3]=0u+0x00000000u; // 800DBF2C
L_800DBF30:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DBF30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DBF34
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DBF38
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DBF3C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800DBF40
  c->lr=c->r[0]; // 800DBF44
  c->r[1]=c->r[1]+0x00000020u; // 800DBF48
  return; // 800DBF4C
}

// CircleBufferInitialize
void f_800DBF50(Ctx* __restrict c) {
  trace_call(0x800DBF50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBF50
  c->r[0]=c->lr; // 800DBF54
  c->r[6]=c->r[3]|c->r[3]; // 800DBF58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBF5C
  c->r[0]=0u+0x00000000u; // 800DBF60
  W32(c->r[3]+0x00000008u,c->r[4]); // 800DBF64
  c->r[3]=c->r[6]+0x00000018u; // 800DBF68
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 800DBF6C
  c->r[4]=R32(c->r[6]+0x00000008u); // 800DBF70
  W32(c->r[6]+0x00000000u,c->r[4]); // 800DBF74
  c->r[4]=R32(c->r[6]+0x00000008u); // 800DBF78
  W32(c->r[6]+0x00000004u,c->r[4]); // 800DBF7C
  W32(c->r[6]+0x00000010u,c->r[0]); // 800DBF80
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800DBF84
  W32(c->r[6]+0x00000014u,c->r[0]); // 800DBF88
  c->lr=0x800DBF90u; f_800DBFFC(c); // 800DBF8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBF90
  c->lr=c->r[0]; // 800DBF94
  c->r[1]=c->r[1]+0x00000010u; // 800DBF98
  return; // 800DBF9C
}

// CBGetBytesAvailableForRead
void f_800DBFA0(Ctx* __restrict c) {
  trace_call(0x800DBFA0u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 800DBFA0
  return; // 800DBFA4
}

// MWExitCriticalSection
void f_800DBFA8(Ctx* __restrict c) {
  trace_call(0x800DBFA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBFA8
  c->r[0]=c->lr; // 800DBFAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBFB0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800DBFB4
  c->lr=0x800DBFBCu; f_8009DFC4(c); // 800DBFB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBFBC
  c->lr=c->r[0]; // 800DBFC0
  c->r[1]=c->r[1]+0x00000010u; // 800DBFC4
  return; // 800DBFC8
}

// MWEnterCriticalSection
void f_800DBFCC(Ctx* __restrict c) {
  trace_call(0x800DBFCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBFCC
  c->r[0]=c->lr; // 800DBFD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DBFD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DBFD8
  c->r[31]=c->r[3]|c->r[3]; // 800DBFDC
  c->lr=0x800DBFE4u; f_8009DF9C(c); // 800DBFE0
  W32(c->r[31]+0x00000000u,c->r[3]); // 800DBFE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DBFE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DBFEC
  c->lr=c->r[0]; // 800DBFF0
  c->r[1]=c->r[1]+0x00000010u; // 800DBFF4
  return; // 800DBFF8
}

// fn_800DBFFC
void f_800DBFFC(Ctx* __restrict c) {
  return; // 800DBFFC
}

// fn_800DC000
void f_800DC000(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC000
  c->r[0]=c->lr; // 800DC004
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC008
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DC00C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DC010
  c->r[30]=c->r[3]|c->r[3]; // 800DC014
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DC018
  c->r[29]=0u+0x00000000u; // 800DC01C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800DC020
  c->r[28]=c->r[4]|c->r[4]; // 800DC024
  goto L_800DC104; // 800DC028
L_800DC02C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DC02C
  cmpu(c,0,c->r[0],c->r[28]); // 800DC030
  if (crb(c,1)) { goto L_800DC104; } // 800DC034
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800DC038
  cmpu(c,0,c->r[28],c->r[0]); // 800DC03C
  if (!crb(c,0)) { goto L_800DC104; } // 800DC040
  c->r[31]=0u+0x00000000u; // 800DC044
  goto L_800DC0D4; // 800DC048
L_800DC04C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DC04C
  cmpu(c,0,c->r[0],c->r[28]); // 800DC050
  if (crb(c,1)) { goto L_800DC0D4; } // 800DC054
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800DC058
  cmpu(c,0,c->r[28],c->r[0]); // 800DC05C
  if (!crb(c,0)) { goto L_800DC0D4; } // 800DC060
  c->r[30]=0u+0x00000000u; // 800DC064
  goto L_800DC0A4; // 800DC068
L_800DC06C:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DC06C
  cmpu(c,0,c->r[0],c->r[28]); // 800DC070
  if (crb(c,1)) { goto L_800DC0A4; } // 800DC074
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800DC078
  cmpu(c,0,c->r[28],c->r[0]); // 800DC07C
  if (!crb(c,0)) { goto L_800DC0A4; } // 800DC080
  c->r[4]=c->r[28]|c->r[28]; // 800DC084
  c->r[3]=c->r[3]+0x0000000Cu; // 800DC088
  c->lr=0x800DC090u; f_800DC000(c); // 800DC08C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC090
  if (crb(c,2)) { goto L_800DC09C; } // 800DC094
  goto L_800DC0C0; // 800DC098
L_800DC09C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC09C
  goto L_800DC0C0; // 800DC0A0
L_800DC0A4:;
  c->r[4]=c->r[30]|c->r[30]; // 800DC0A4
  c->r[3]=c->r[31]+0x0000000Cu; // 800DC0A8
  c->lr=0x800DC0B0u; f_800DD314(c); // 800DC0AC
  cmps(c,0,(int32_t)c->r[3],0); // 800DC0B0
  c->r[30]=c->r[3]|c->r[3]; // 800DC0B4
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC06C; } // 800DC0B8
  c->r[3]=0u+0x00000000u; // 800DC0BC
L_800DC0C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DC0C0
  if (crb(c,2)) { goto L_800DC0CC; } // 800DC0C4
  goto L_800DC0F0; // 800DC0C8
L_800DC0CC:;
  c->r[3]=c->r[31]|c->r[31]; // 800DC0CC
  goto L_800DC0F0; // 800DC0D0
L_800DC0D4:;
  c->r[4]=c->r[31]|c->r[31]; // 800DC0D4
  c->r[3]=c->r[29]+0x0000000Cu; // 800DC0D8
  c->lr=0x800DC0E0u; f_800DD314(c); // 800DC0DC
  cmps(c,0,(int32_t)c->r[3],0); // 800DC0E0
  c->r[31]=c->r[3]|c->r[3]; // 800DC0E4
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC04C; } // 800DC0E8
  c->r[3]=0u+0x00000000u; // 800DC0EC
L_800DC0F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DC0F0
  if (crb(c,2)) { goto L_800DC0FC; } // 800DC0F4
  goto L_800DC120; // 800DC0F8
L_800DC0FC:;
  c->r[3]=c->r[29]|c->r[29]; // 800DC0FC
  goto L_800DC120; // 800DC100
L_800DC104:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC104
  c->r[4]=c->r[29]|c->r[29]; // 800DC108
  c->lr=0x800DC110u; f_800DD314(c); // 800DC10C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC110
  c->r[29]=c->r[3]|c->r[3]; // 800DC114
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC02C; } // 800DC118
  c->r[3]=0u+0x00000000u; // 800DC11C
L_800DC120:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC120
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DC124
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DC128
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DC12C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800DC130
  c->lr=c->r[0]; // 800DC134
  c->r[1]=c->r[1]+0x00000020u; // 800DC138
  return; // 800DC13C
}

// fn_800DC140
void f_800DC140(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC140
  c->r[0]=c->lr; // 800DC144
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC148
  c->r[11]=c->r[1]+0x00000020u; // 800DC14C
  c->lr=0x800DC154u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DC150
  c->r[0]=0u+0x00000000u; // 800DC154
  W32(c->r[3]+0x00000000u,c->r[4]); // 800DC158
  c->r[0]=(rotl(c->r[7],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 800DC15C
  c->r[27]=c->r[3]|c->r[3]; // 800DC160
  W32(c->r[3]+0x00000018u,c->r[5]); // 800DC164
  c->r[4]=0u+0x00000004u; // 800DC168
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 800DC16C
  W32(c->r[3]+0x00000038u,c->r[0]); // 800DC170
  c->r[3]=c->r[3]+0x0000000Cu; // 800DC174
  c->lr=0x800DC17Cu; f_800DD220(c); // 800DC178
  c->r[0]=R32(c->r[13]+0xFFFFA528u); // 800DC17C
  cmps(c,0,(int32_t)c->r[0],0); // 800DC180
  if (!crb(c,2)) { goto L_800DC1AC; } // 800DC184
  c->r[3]=0u+0x802C0000u; // 800DC188
  c->r[4]=0u+0x00000004u; // 800DC18C
  c->r[3]=c->r[3]+0xFFFFF9B0u; // 800DC190
  c->lr=0x800DC198u; f_800DD220(c); // 800DC194
  c->r[3]=0u+0x802C0000u; // 800DC198
  c->r[3]=c->r[3]+0xFFFFF9C0u; // 800DC19C
  c->lr=0x800DC1A4u; f_8009F150(c); // 800DC1A0
  c->r[0]=0u+0x00000001u; // 800DC1A4
  W32(c->r[13]+0xFFFFA528u,c->r[0]); // 800DC1A8
L_800DC1AC:;
  c->r[3]=c->r[27]+0x00000020u; // 800DC1AC
  c->lr=0x800DC1B4u; f_8009F150(c); // 800DC1B0
  c->r[3]=0u+0x802C0000u; // 800DC1B4
  c->r[3]=c->r[3]+0xFFFFF9C0u; // 800DC1B8
  c->lr=0x800DC1C0u; f_8009F188(c); // 800DC1BC
  c->r[31]=0u+0x802C0000u; // 800DC1C0
  c->r[30]=0u+0x00000000u; // 800DC1C4
  c->r[28]=c->r[31]+0xFFFFF9B0u; // 800DC1C8
  goto L_800DC2A8; // 800DC1CC
L_800DC1D0:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DC1D0
  cmpu(c,0,c->r[0],c->r[27]); // 800DC1D4
  if (crb(c,1)) { goto L_800DC2A8; } // 800DC1D8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800DC1DC
  cmpu(c,0,c->r[27],c->r[0]); // 800DC1E0
  if (!crb(c,0)) { goto L_800DC2A8; } // 800DC1E4
  c->r[31]=0u+0x00000000u; // 800DC1E8
  goto L_800DC278; // 800DC1EC
L_800DC1F0:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DC1F0
  cmpu(c,0,c->r[0],c->r[27]); // 800DC1F4
  if (crb(c,1)) { goto L_800DC278; } // 800DC1F8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800DC1FC
  cmpu(c,0,c->r[27],c->r[0]); // 800DC200
  if (!crb(c,0)) { goto L_800DC278; } // 800DC204
  c->r[29]=0u+0x00000000u; // 800DC208
  goto L_800DC248; // 800DC20C
L_800DC210:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DC210
  cmpu(c,0,c->r[0],c->r[27]); // 800DC214
  if (crb(c,1)) { goto L_800DC248; } // 800DC218
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800DC21C
  cmpu(c,0,c->r[27],c->r[0]); // 800DC220
  if (!crb(c,0)) { goto L_800DC248; } // 800DC224
  c->r[4]=c->r[27]|c->r[27]; // 800DC228
  c->r[3]=c->r[3]+0x0000000Cu; // 800DC22C
  c->lr=0x800DC234u; f_800DC000(c); // 800DC230
  cmps(c,0,(int32_t)c->r[3],0); // 800DC234
  if (crb(c,2)) { goto L_800DC240; } // 800DC238
  goto L_800DC264; // 800DC23C
L_800DC240:;
  c->r[3]=c->r[29]|c->r[29]; // 800DC240
  goto L_800DC264; // 800DC244
L_800DC248:;
  c->r[4]=c->r[29]|c->r[29]; // 800DC248
  c->r[3]=c->r[31]+0x0000000Cu; // 800DC24C
  c->lr=0x800DC254u; f_800DD314(c); // 800DC250
  cmps(c,0,(int32_t)c->r[3],0); // 800DC254
  c->r[29]=c->r[3]|c->r[3]; // 800DC258
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC210; } // 800DC25C
  c->r[3]=0u+0x00000000u; // 800DC260
L_800DC264:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DC264
  if (crb(c,2)) { goto L_800DC270; } // 800DC268
  goto L_800DC294; // 800DC26C
L_800DC270:;
  c->r[3]=c->r[31]|c->r[31]; // 800DC270
  goto L_800DC294; // 800DC274
L_800DC278:;
  c->r[4]=c->r[31]|c->r[31]; // 800DC278
  c->r[3]=c->r[30]+0x0000000Cu; // 800DC27C
  c->lr=0x800DC284u; f_800DD314(c); // 800DC280
  cmps(c,0,(int32_t)c->r[3],0); // 800DC284
  c->r[31]=c->r[3]|c->r[3]; // 800DC288
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC1F0; } // 800DC28C
  c->r[3]=0u+0x00000000u; // 800DC290
L_800DC294:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DC294
  if (crb(c,2)) { goto L_800DC2A0; } // 800DC298
  goto L_800DC2C4; // 800DC29C
L_800DC2A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC2A0
  goto L_800DC2C4; // 800DC2A4
L_800DC2A8:;
  c->r[4]=c->r[30]|c->r[30]; // 800DC2A8
  c->r[3]=c->r[31]+0xFFFFF9B0u; // 800DC2AC
  c->lr=0x800DC2B4u; f_800DD314(c); // 800DC2B0
  cmps(c,0,(int32_t)c->r[3],0); // 800DC2B4
  c->r[30]=c->r[3]|c->r[3]; // 800DC2B8
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC1D0; } // 800DC2BC
  c->r[3]=0u+0x00000000u; // 800DC2C0
L_800DC2C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DC2C4
  if (crb(c,2)) { goto L_800DC2D0; } // 800DC2C8
  c->r[28]=c->r[3]+0x0000000Cu; // 800DC2CC
L_800DC2D0:;
  c->r[3]=c->r[28]|c->r[28]; // 800DC2D0
  c->r[4]=c->r[27]|c->r[27]; // 800DC2D4
  c->lr=0x800DC2DCu; f_800DD238(c); // 800DC2D8
  c->r[3]=0u+0x802C0000u; // 800DC2DC
  c->r[3]=c->r[3]+0xFFFFF9C0u; // 800DC2E0
  c->lr=0x800DC2E8u; f_8009F264(c); // 800DC2E4
  c->r[11]=c->r[1]+0x00000020u; // 800DC2E8
  c->lr=0x800DC2F0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DC2EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC2F0
  c->lr=c->r[0]; // 800DC2F4
  c->r[1]=c->r[1]+0x00000020u; // 800DC2F8
  return; // 800DC2FC
}

// fn_800DC300
void f_800DC300(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC300
  c->r[0]=c->lr; // 800DC304
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC308
  c->r[11]=c->r[1]+0x00000020u; // 800DC30C
  c->lr=0x800DC314u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DC310
  c->r[4]=0u+0x802C0000u; // 800DC314
  c->r[27]=c->r[3]|c->r[3]; // 800DC318
  c->r[3]=c->r[4]+0xFFFFF9C0u; // 800DC31C
  c->lr=0x800DC324u; f_8009F188(c); // 800DC320
  c->r[31]=0u+0x802C0000u; // 800DC324
  c->r[30]=0u+0x00000000u; // 800DC328
  c->r[28]=c->r[31]+0xFFFFF9B0u; // 800DC32C
  goto L_800DC40C; // 800DC330
L_800DC334:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DC334
  cmpu(c,0,c->r[0],c->r[27]); // 800DC338
  if (crb(c,1)) { goto L_800DC40C; } // 800DC33C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800DC340
  cmpu(c,0,c->r[27],c->r[0]); // 800DC344
  if (!crb(c,0)) { goto L_800DC40C; } // 800DC348
  c->r[31]=0u+0x00000000u; // 800DC34C
  goto L_800DC3DC; // 800DC350
L_800DC354:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DC354
  cmpu(c,0,c->r[0],c->r[27]); // 800DC358
  if (crb(c,1)) { goto L_800DC3DC; } // 800DC35C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800DC360
  cmpu(c,0,c->r[27],c->r[0]); // 800DC364
  if (!crb(c,0)) { goto L_800DC3DC; } // 800DC368
  c->r[29]=0u+0x00000000u; // 800DC36C
  goto L_800DC3AC; // 800DC370
L_800DC374:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DC374
  cmpu(c,0,c->r[0],c->r[27]); // 800DC378
  if (crb(c,1)) { goto L_800DC3AC; } // 800DC37C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800DC380
  cmpu(c,0,c->r[27],c->r[0]); // 800DC384
  if (!crb(c,0)) { goto L_800DC3AC; } // 800DC388
  c->r[4]=c->r[27]|c->r[27]; // 800DC38C
  c->r[3]=c->r[3]+0x0000000Cu; // 800DC390
  c->lr=0x800DC398u; f_800DC000(c); // 800DC394
  cmps(c,0,(int32_t)c->r[3],0); // 800DC398
  if (crb(c,2)) { goto L_800DC3A4; } // 800DC39C
  goto L_800DC3C8; // 800DC3A0
L_800DC3A4:;
  c->r[3]=c->r[29]|c->r[29]; // 800DC3A4
  goto L_800DC3C8; // 800DC3A8
L_800DC3AC:;
  c->r[4]=c->r[29]|c->r[29]; // 800DC3AC
  c->r[3]=c->r[31]+0x0000000Cu; // 800DC3B0
  c->lr=0x800DC3B8u; f_800DD314(c); // 800DC3B4
  cmps(c,0,(int32_t)c->r[3],0); // 800DC3B8
  c->r[29]=c->r[3]|c->r[3]; // 800DC3BC
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC374; } // 800DC3C0
  c->r[3]=0u+0x00000000u; // 800DC3C4
L_800DC3C8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DC3C8
  if (crb(c,2)) { goto L_800DC3D4; } // 800DC3CC
  goto L_800DC3F8; // 800DC3D0
L_800DC3D4:;
  c->r[3]=c->r[31]|c->r[31]; // 800DC3D4
  goto L_800DC3F8; // 800DC3D8
L_800DC3DC:;
  c->r[4]=c->r[31]|c->r[31]; // 800DC3DC
  c->r[3]=c->r[30]+0x0000000Cu; // 800DC3E0
  c->lr=0x800DC3E8u; f_800DD314(c); // 800DC3E4
  cmps(c,0,(int32_t)c->r[3],0); // 800DC3E8
  c->r[31]=c->r[3]|c->r[3]; // 800DC3EC
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC354; } // 800DC3F0
  c->r[3]=0u+0x00000000u; // 800DC3F4
L_800DC3F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DC3F8
  if (crb(c,2)) { goto L_800DC404; } // 800DC3FC
  goto L_800DC428; // 800DC400
L_800DC404:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC404
  goto L_800DC428; // 800DC408
L_800DC40C:;
  c->r[4]=c->r[30]|c->r[30]; // 800DC40C
  c->r[3]=c->r[31]+0xFFFFF9B0u; // 800DC410
  c->lr=0x800DC418u; f_800DD314(c); // 800DC414
  cmps(c,0,(int32_t)c->r[3],0); // 800DC418
  c->r[30]=c->r[3]|c->r[3]; // 800DC41C
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC334; } // 800DC420
  c->r[3]=0u+0x00000000u; // 800DC424
L_800DC428:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DC428
  if (crb(c,2)) { goto L_800DC434; } // 800DC42C
  c->r[28]=c->r[3]+0x0000000Cu; // 800DC430
L_800DC434:;
  c->r[3]=c->r[28]|c->r[28]; // 800DC434
  c->r[4]=c->r[27]|c->r[27]; // 800DC438
  c->lr=0x800DC440u; f_800DD2A8(c); // 800DC43C
  c->r[3]=0u+0x802C0000u; // 800DC440
  c->r[3]=c->r[3]+0xFFFFF9C0u; // 800DC444
  c->lr=0x800DC44Cu; f_8009F264(c); // 800DC448
  c->r[0]=0u+0x00000000u; // 800DC44C
  c->r[11]=c->r[1]+0x00000020u; // 800DC450
  W32(c->r[27]+0x00000000u,c->r[0]); // 800DC454
  c->lr=0x800DC45Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DC458
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC45C
  c->lr=c->r[0]; // 800DC460
  c->r[1]=c->r[1]+0x00000020u; // 800DC464
  return; // 800DC468
}

// MEM_ExpAllocNewBlock
void f_800DC46C(Ctx* __restrict c) {
  trace_call(0x800DC46Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC46C
  c->r[0]=c->lr; // 800DC470
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC474
  c->r[11]=c->r[1]+0x00000020u; // 800DC478
  c->lr=0x800DC480u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DC47C
  c->r[8]=R32(c->r[4]+0x00000008u); // 800DC480
  c->r[30]=c->r[6]+c->r[5]; // 800DC484
  c->r[6]=R16(c->r[4]+0x00000002u); // 800DC488
  c->r[29]=c->r[5]+0xFFFFFFF0u; // 800DC48C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800DC490
  cmps(c,0,(int32_t)c->r[8],0); // 800DC494
  c->r[9]=rotl(c->r[6],24)&0x0000007Fu; // 800DC498
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 800DC49C
  c->r[6]=c->r[4]+c->r[0]; // 800DC4A0
  c->r[27]=c->r[5]|c->r[5]; // 800DC4A4
  c->r[26]=c->r[3]|c->r[3]; // 800DC4A8
  c->r[28]=c->r[7]|c->r[7]; // 800DC4AC
  c->r[31]=c->r[29]|c->r[29]; // 800DC4B0
  c->r[5]=c->r[4]-c->r[9]; // 800DC4B4
  c->r[6]=c->r[6]+0x00000010u; // 800DC4B8
  if (crb(c,2)) { goto L_800DC4C8; } // 800DC4BC
  W32(c->r[8]+0x0000000Cu,c->r[10]); // 800DC4C0
  goto L_800DC4CC; // 800DC4C4
L_800DC4C8:;
  W32(c->r[3]+0x00000000u,c->r[10]); // 800DC4C8
L_800DC4CC:;
  cmps(c,0,(int32_t)c->r[10],0); // 800DC4CC
  if (crb(c,2)) { goto L_800DC4DC; } // 800DC4D0
  W32(c->r[10]+0x00000008u,c->r[8]); // 800DC4D4
  goto L_800DC4E0; // 800DC4D8
L_800DC4DC:;
  W32(c->r[3]+0x00000004u,c->r[8]); // 800DC4DC
L_800DC4E0:;
  c->r[0]=c->r[29]-c->r[5]; // 800DC4E0
  cmpu(c,0,c->r[0],0x00000014u); // 800DC4E4
  if (!crb(c,0)) { goto L_800DC4F4; } // 800DC4E8
  c->r[31]=c->r[5]|c->r[5]; // 800DC4EC
  goto L_800DC550; // 800DC4F0
L_800DC4F4:;
  c->r[4]=0u+0x00004652u; // 800DC4F4
  c->r[0]=c->r[5]+0x00000010u; // 800DC4F8
  W16(c->r[5]+0x00000000u,c->r[4]); // 800DC4FC
  c->r[4]=0u+0x00000000u; // 800DC500
  c->r[0]=c->r[29]-c->r[0]; // 800DC504
  cmps(c,0,(int32_t)c->r[8],0); // 800DC508
  W16(c->r[5]+0x00000002u,c->r[4]); // 800DC50C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800DC510
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800DC514
  W32(c->r[5]+0x00000008u,c->r[8]); // 800DC518
  if (crb(c,2)) { goto L_800DC52C; } // 800DC51C
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 800DC520
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 800DC524
  goto L_800DC534; // 800DC528
L_800DC52C:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800DC52C
  W32(c->r[3]+0x00000000u,c->r[5]); // 800DC530
L_800DC534:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DC534
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800DC538
  if (crb(c,2)) { goto L_800DC548; } // 800DC53C
  W32(c->r[4]+0x00000008u,c->r[5]); // 800DC540
  goto L_800DC54C; // 800DC544
L_800DC548:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 800DC548
L_800DC54C:;
  c->r[8]=c->r[5]|c->r[5]; // 800DC54C
L_800DC550:;
  c->r[0]=c->r[6]-c->r[30]; // 800DC550
  cmpu(c,0,c->r[0],0x00000014u); // 800DC554
  if (!crb(c,0)) { goto L_800DC564; } // 800DC558
  c->r[30]=c->r[6]|c->r[6]; // 800DC55C
  goto L_800DC5BC; // 800DC560
L_800DC564:;
  c->r[4]=0u+0x00004652u; // 800DC564
  c->r[0]=c->r[30]+0x00000010u; // 800DC568
  W16(c->r[30]+0x00000000u,c->r[4]); // 800DC56C
  c->r[4]=0u+0x00000000u; // 800DC570
  c->r[0]=c->r[6]-c->r[0]; // 800DC574
  cmps(c,0,(int32_t)c->r[8],0); // 800DC578
  W16(c->r[30]+0x00000002u,c->r[4]); // 800DC57C
  W32(c->r[30]+0x00000004u,c->r[0]); // 800DC580
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 800DC584
  W32(c->r[30]+0x00000008u,c->r[8]); // 800DC588
  if (crb(c,2)) { goto L_800DC59C; } // 800DC58C
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 800DC590
  W32(c->r[8]+0x0000000Cu,c->r[30]); // 800DC594
  goto L_800DC5A4; // 800DC598
L_800DC59C:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800DC59C
  W32(c->r[3]+0x00000000u,c->r[30]); // 800DC5A0
L_800DC5A4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DC5A4
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 800DC5A8
  if (crb(c,2)) { goto L_800DC5B8; } // 800DC5AC
  W32(c->r[4]+0x00000008u,c->r[30]); // 800DC5B0
  goto L_800DC5BC; // 800DC5B4
L_800DC5B8:;
  W32(c->r[3]+0x00000004u,c->r[30]); // 800DC5B8
L_800DC5BC:;
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 800DC5BC
  c->r[5]=c->r[30]-c->r[31]; // 800DC5C0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800DC5C4
  if (crb(c,2)) { goto L_800DC5D8; } // 800DC5C8
  c->r[3]=c->r[31]|c->r[31]; // 800DC5CC
  c->r[4]=0u+0x00000000u; // 800DC5D0
  c->lr=0x800DC5D8u; f_8000443C(c); // 800DC5D4
L_800DC5D8:;
  c->r[5]=0u+0x00000000u; // 800DC5D8
  c->r[4]=c->r[29]+0x00000010u; // 800DC5DC
  c->r[3]=c->r[5]|c->r[5]; // 800DC5E0
  c->r[6]=0u+0x00005544u; // 800DC5E4
  c->r[4]=c->r[30]-c->r[4]; // 800DC5E8
  c->r[0]=c->r[29]-c->r[31]; // 800DC5EC
  c->r[3]=(rotl(c->r[28],15)&0x00008000u)|(c->r[3]&~0x00008000u); // 800DC5F0
  W16(c->r[29]+0x00000000u,c->r[6]); // 800DC5F4
  c->r[3]=(rotl(c->r[0],8)&0x00007F00u)|(c->r[3]&~0x00007F00u); // 800DC5F8
  W32(c->r[29]+0x00000004u,c->r[4]); // 800DC5FC
  W32(c->r[29]+0x00000008u,c->r[5]); // 800DC600
  W32(c->r[29]+0x0000000Cu,c->r[5]); // 800DC604
  W16(c->r[29]+0x00000002u,c->r[3]); // 800DC608
  c->r[0]=R16(c->r[26]+0x00000010u); // 800DC60C
  c->r[3]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[3]&~0x000000FFu); // 800DC610
  W16(c->r[29]+0x00000002u,c->r[3]); // 800DC614
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 800DC618
  cmps(c,0,(int32_t)c->r[4],0); // 800DC61C
  W32(c->r[29]+0x00000008u,c->r[4]); // 800DC620
  if (crb(c,2)) { goto L_800DC634; } // 800DC624
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800DC628
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 800DC62C
  goto L_800DC63C; // 800DC630
L_800DC634:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 800DC634
  W32(c->r[26]+0x00000008u,c->r[29]); // 800DC638
L_800DC63C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DC63C
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 800DC640
  if (crb(c,2)) { goto L_800DC650; } // 800DC644
  W32(c->r[3]+0x00000008u,c->r[29]); // 800DC648
  goto L_800DC654; // 800DC64C
L_800DC650:;
  W32(c->r[26]+0x0000000Cu,c->r[29]); // 800DC650
L_800DC654:;
  c->r[11]=c->r[1]+0x00000020u; // 800DC654
  c->r[3]=c->r[27]|c->r[27]; // 800DC658
  c->lr=0x800DC660u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DC65C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC660
  c->lr=c->r[0]; // 800DC664
  c->r[1]=c->r[1]+0x00000020u; // 800DC668
  return; // 800DC66C
}

// MEM_ExpAllocFromHead
void f_800DC670(Ctx* __restrict c) {
  trace_call(0x800DC670u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC670
  c->r[0]=c->lr; // 800DC674
  c->r[3]=c->r[3]+0x0000003Cu; // 800DC678
  c->r[6]=c->r[4]|c->r[4]; // 800DC67C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC680
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800DC684
  c->r[8]=~(c->r[0]|c->r[0]); // 800DC688
  c->r[12]=0u+0x00000000u; // 800DC68C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DC690
  c->r[31]=0u+0xFFFFFFFFu; // 800DC694
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DC698
  c->r[30]=0u+0x00000000u; // 800DC69C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DC6A0
  c->r[7]=R16(c->r[3]+0x00000012u); // 800DC6A4
  c->r[11]=R32(c->r[3]+0x00000000u); // 800DC6A8
  c->r[0]=rotl(c->r[7],0)&0x00000001u; // 800DC6AC
  c->r[0]=cntlz(c->r[0]); // 800DC6B0
  c->r[10]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DC6B4
  goto L_800DC708; // 800DC6B8
L_800DC6BC:;
  c->r[29]=c->r[11]+0x00000010u; // 800DC6BC
  c->r[9]=R32(c->r[11]+0x00000004u); // 800DC6C0
  c->r[7]=c->r[5]+c->r[29]; // 800DC6C4
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800DC6C8
  c->r[7]=c->r[8]&c->r[0]; // 800DC6CC
  c->r[0]=c->r[7]-c->r[29]; // 800DC6D0
  c->r[0]=c->r[4]+c->r[0]; // 800DC6D4
  cmpu(c,0,c->r[9],c->r[0]); // 800DC6D8
  if (crb(c,0)) { goto L_800DC704; } // 800DC6DC
  cmpu(c,0,c->r[31],c->r[9]); // 800DC6E0
  if (!crb(c,1)) { goto L_800DC704; } // 800DC6E4
  cmps(c,0,(int32_t)c->r[10],0); // 800DC6E8
  c->r[12]=c->r[11]|c->r[11]; // 800DC6EC
  c->r[31]=c->r[9]|c->r[9]; // 800DC6F0
  c->r[30]=c->r[7]|c->r[7]; // 800DC6F4
  if (!crb(c,2)) { goto L_800DC710; } // 800DC6F8
  cmpu(c,0,c->r[9],c->r[4]); // 800DC6FC
  if (crb(c,2)) { goto L_800DC710; } // 800DC700
L_800DC704:;
  c->r[11]=R32(c->r[11]+0x0000000Cu); // 800DC704
L_800DC708:;
  cmps(c,0,(int32_t)c->r[11],0); // 800DC708
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC6BC; } // 800DC70C
L_800DC710:;
  cmps(c,0,(int32_t)c->r[12],0); // 800DC710
  if (crb(c,2)) { goto L_800DC72C; } // 800DC714
  c->r[4]=c->r[12]|c->r[12]; // 800DC718
  c->r[5]=c->r[30]|c->r[30]; // 800DC71C
  c->r[7]=0u+0x00000000u; // 800DC720
  c->lr=0x800DC728u; f_800DC46C(c); // 800DC724
  goto L_800DC730; // 800DC728
L_800DC72C:;
  c->r[3]=0u+0x00000000u; // 800DC72C
L_800DC730:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC730
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DC734
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DC738
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DC73C
  c->lr=c->r[0]; // 800DC740
  c->r[1]=c->r[1]+0x00000020u; // 800DC744
  return; // 800DC748
}

// MEM_ExpAllocFromTail
void f_800DC74C(Ctx* __restrict c) {
  trace_call(0x800DC74Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC74C
  c->r[0]=c->lr; // 800DC750
  c->r[3]=c->r[3]+0x0000003Cu; // 800DC754
  c->r[6]=c->r[4]|c->r[4]; // 800DC758
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC75C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800DC760
  c->r[7]=~(c->r[0]|c->r[0]); // 800DC764
  c->r[11]=0u+0x00000000u; // 800DC768
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC76C
  c->r[12]=0u+0xFFFFFFFFu; // 800DC770
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DC774
  c->r[5]=R16(c->r[3]+0x00000012u); // 800DC778
  c->r[10]=R32(c->r[3]+0x00000004u); // 800DC77C
  c->r[0]=rotl(c->r[5],0)&0x00000001u; // 800DC780
  c->r[5]=0u+0x00000000u; // 800DC784
  c->r[0]=cntlz(c->r[0]); // 800DC788
  c->r[9]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DC78C
  goto L_800DC7D8; // 800DC790
L_800DC794:;
  c->r[8]=R32(c->r[10]+0x00000004u); // 800DC794
  c->r[31]=c->r[10]+0x00000010u; // 800DC798
  c->r[0]=c->r[8]+c->r[31]; // 800DC79C
  c->r[0]=c->r[0]-c->r[4]; // 800DC7A0
  c->r[30]=c->r[7]&c->r[0]; // 800DC7A4
  c->r[0]=c->r[30]-c->r[31]; cr0(c,c->r[0]); // 800DC7A8
  if (crb(c,0)) { goto L_800DC7D4; } // 800DC7AC
  cmpu(c,0,c->r[12],c->r[8]); // 800DC7B0
  if (!crb(c,1)) { goto L_800DC7D4; } // 800DC7B4
  cmps(c,0,(int32_t)c->r[9],0); // 800DC7B8
  c->r[11]=c->r[10]|c->r[10]; // 800DC7BC
  c->r[12]=c->r[8]|c->r[8]; // 800DC7C0
  c->r[5]=c->r[30]|c->r[30]; // 800DC7C4
  if (!crb(c,2)) { goto L_800DC7E0; } // 800DC7C8
  cmpu(c,0,c->r[8],c->r[4]); // 800DC7CC
  if (crb(c,2)) { goto L_800DC7E0; } // 800DC7D0
L_800DC7D4:;
  c->r[10]=R32(c->r[10]+0x00000008u); // 800DC7D4
L_800DC7D8:;
  cmps(c,0,(int32_t)c->r[10],0); // 800DC7D8
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC794; } // 800DC7DC
L_800DC7E0:;
  cmps(c,0,(int32_t)c->r[11],0); // 800DC7E0
  if (crb(c,2)) { goto L_800DC7F8; } // 800DC7E4
  c->r[4]=c->r[11]|c->r[11]; // 800DC7E8
  c->r[7]=0u+0x00000001u; // 800DC7EC
  c->lr=0x800DC7F4u; f_800DC46C(c); // 800DC7F0
  goto L_800DC7FC; // 800DC7F4
L_800DC7F8:;
  c->r[3]=0u+0x00000000u; // 800DC7F8
L_800DC7FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DC7FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DC800
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DC804
  c->lr=c->r[0]; // 800DC808
  c->r[1]=c->r[1]+0x00000010u; // 800DC80C
  return; // 800DC810
}

// RecycleRegion_
void f_800DC814(Ctx* __restrict c) {
  trace_call(0x800DC814u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC814
  c->r[8]=0u+0x00000000u; // 800DC818
  c->r[5]=R32(c->r[4]+0x00000000u); // 800DC81C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800DC820
  W32(c->r[1]+0x00000008u,c->r[5]); // 800DC824
  c->r[6]=R32(c->r[3]+0x00000000u); // 800DC828
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DC82C
  goto L_800DC89C; // 800DC830
L_800DC834:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DC834
  cmpu(c,0,c->r[6],c->r[0]); // 800DC838
  if (!crb(c,0)) { goto L_800DC848; } // 800DC83C
  c->r[8]=c->r[6]|c->r[6]; // 800DC840
  goto L_800DC898; // 800DC844
L_800DC848:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800DC848
  cmpu(c,0,c->r[6],c->r[0]); // 800DC84C
  if (!crb(c,2)) { goto L_800DC8A4; } // 800DC850
  c->r[0]=R32(c->r[6]+0x00000004u); // 800DC854
  c->r[7]=R32(c->r[6]+0x00000008u); // 800DC858
  c->r[5]=c->r[6]+c->r[0]; // 800DC85C
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 800DC860
  c->r[0]=c->r[5]+0x00000010u; // 800DC864
  cmps(c,0,(int32_t)c->r[7],0); // 800DC868
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DC86C
  if (crb(c,2)) { goto L_800DC87C; } // 800DC870
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 800DC874
  goto L_800DC880; // 800DC878
L_800DC87C:;
  W32(c->r[3]+0x00000000u,c->r[6]); // 800DC87C
L_800DC880:;
  cmps(c,0,(int32_t)c->r[6],0); // 800DC880
  if (crb(c,2)) { goto L_800DC890; } // 800DC884
  W32(c->r[6]+0x00000008u,c->r[7]); // 800DC888
  goto L_800DC8A4; // 800DC88C
L_800DC890:;
  W32(c->r[3]+0x00000004u,c->r[7]); // 800DC890
  goto L_800DC8A4; // 800DC894
L_800DC898:;
  c->r[6]=R32(c->r[6]+0x0000000Cu); // 800DC898
L_800DC89C:;
  cmps(c,0,(int32_t)c->r[6],0); // 800DC89C
  if (!crb(c,2)) { IRQCHK(c); goto L_800DC834; } // 800DC8A0
L_800DC8A4:;
  cmps(c,0,(int32_t)c->r[8],0); // 800DC8A4
  if (crb(c,2)) { goto L_800DC8FC; } // 800DC8A8
  c->r[5]=R32(c->r[8]+0x00000004u); // 800DC8AC
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DC8B0
  c->r[4]=c->r[8]+c->r[5]; // 800DC8B4
  c->r[4]=c->r[4]+0x00000010u; // 800DC8B8
  cmpu(c,0,c->r[4],c->r[0]); // 800DC8BC
  if (!crb(c,2)) { goto L_800DC8FC; } // 800DC8C0
  c->r[5]=R32(c->r[8]+0x00000008u); // 800DC8C4
  W32(c->r[1]+0x00000008u,c->r[8]); // 800DC8C8
  cmps(c,0,(int32_t)c->r[5],0); // 800DC8CC
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 800DC8D0
  if (crb(c,2)) { goto L_800DC8E0; } // 800DC8D4
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800DC8D8
  goto L_800DC8E4; // 800DC8DC
L_800DC8E0:;
  W32(c->r[3]+0x00000000u,c->r[4]); // 800DC8E0
L_800DC8E4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DC8E4
  if (crb(c,2)) { goto L_800DC8F4; } // 800DC8E8
  W32(c->r[4]+0x00000008u,c->r[5]); // 800DC8EC
  goto L_800DC8F8; // 800DC8F0
L_800DC8F4:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 800DC8F4
L_800DC8F8:;
  c->r[8]=c->r[5]|c->r[5]; // 800DC8F8
L_800DC8FC:;
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800DC8FC
  c->r[5]=R32(c->r[1]+0x00000008u); // 800DC900
  c->r[0]=c->r[6]-c->r[5]; // 800DC904
  cmpu(c,0,c->r[0],0x00000010u); // 800DC908
  if (!crb(c,0)) { goto L_800DC918; } // 800DC90C
  c->r[3]=0u+0x00000000u; // 800DC910
  goto L_800DC974; // 800DC914
L_800DC918:;
  c->r[4]=0u+0x00004652u; // 800DC918
  c->r[0]=c->r[5]+0x00000010u; // 800DC91C
  W16(c->r[5]+0x00000000u,c->r[4]); // 800DC920
  c->r[4]=0u+0x00000000u; // 800DC924
  c->r[0]=c->r[6]-c->r[0]; // 800DC928
  cmps(c,0,(int32_t)c->r[8],0); // 800DC92C
  W16(c->r[5]+0x00000002u,c->r[4]); // 800DC930
  W32(c->r[5]+0x00000004u,c->r[0]); // 800DC934
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800DC938
  W32(c->r[5]+0x00000008u,c->r[8]); // 800DC93C
  if (crb(c,2)) { goto L_800DC950; } // 800DC940
  c->r[4]=R32(c->r[8]+0x0000000Cu); // 800DC944
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 800DC948
  goto L_800DC958; // 800DC94C
L_800DC950:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800DC950
  W32(c->r[3]+0x00000000u,c->r[5]); // 800DC954
L_800DC958:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DC958
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800DC95C
  if (crb(c,2)) { goto L_800DC96C; } // 800DC960
  W32(c->r[4]+0x00000008u,c->r[5]); // 800DC964
  goto L_800DC970; // 800DC968
L_800DC96C:;
  W32(c->r[3]+0x00000004u,c->r[5]); // 800DC96C
L_800DC970:;
  c->r[3]=0u+0x00000001u; // 800DC970
L_800DC974:;
  c->r[1]=c->r[1]+0x00000010u; // 800DC974
  return; // 800DC978
}

// MEMCreateExpHeapEx
void f_800DC97C(Ctx* __restrict c) {
  trace_call(0x800DC97Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC97C
  c->r[0]=c->lr; // 800DC980
  c->r[4]=c->r[4]+c->r[3]; // 800DC984
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DC988
  c->r[0]=c->r[3]+0x00000003u; // 800DC98C
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 800DC990
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DC994
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800DC998
  cmpu(c,0,c->r[31],c->r[6]); // 800DC99C
  if (crb(c,1)) { goto L_800DC9B0; } // 800DC9A0
  c->r[0]=c->r[6]-c->r[31]; // 800DC9A4
  cmpu(c,0,c->r[0],0x00000064u); // 800DC9A8
  if (!crb(c,0)) { goto L_800DC9B8; } // 800DC9AC
L_800DC9B0:;
  c->r[3]=0u+0x00000000u; // 800DC9B0
  goto L_800DCA18; // 800DC9B4
L_800DC9B8:;
  c->r[4]=0u+0x45580000u; // 800DC9B8
  c->r[7]=c->r[5]|c->r[5]; // 800DC9BC
  c->r[3]=c->r[31]|c->r[31]; // 800DC9C0
  c->r[5]=c->r[31]+0x00000050u; // 800DC9C4
  c->r[4]=c->r[4]+0x00005048u; // 800DC9C8
  c->lr=0x800DC9D0u; f_800DC140(c); // 800DC9CC
  c->r[5]=0u+0x00000000u; // 800DC9D0
  c->r[4]=0u+0x00004652u; // 800DC9D4
  W16(c->r[31]+0x0000004Cu,c->r[5]); // 800DC9D8
  c->r[3]=c->r[31]|c->r[31]; // 800DC9DC
  W16(c->r[31]+0x0000004Eu,c->r[5]); // 800DC9E0
  c->r[6]=R32(c->r[31]+0x00000018u); // 800DC9E4
  c->r[7]=R32(c->r[31]+0x0000001Cu); // 800DC9E8
  c->r[0]=c->r[6]+0x00000010u; // 800DC9EC
  W16(c->r[6]+0x00000000u,c->r[4]); // 800DC9F0
  c->r[0]=c->r[7]-c->r[0]; // 800DC9F4
  W16(c->r[6]+0x00000002u,c->r[5]); // 800DC9F8
  W32(c->r[6]+0x00000004u,c->r[0]); // 800DC9FC
  W32(c->r[6]+0x00000008u,c->r[5]); // 800DCA00
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 800DCA04
  W32(c->r[31]+0x0000003Cu,c->r[6]); // 800DCA08
  W32(c->r[31]+0x00000040u,c->r[6]); // 800DCA0C
  W32(c->r[31]+0x00000044u,c->r[5]); // 800DCA10
  W32(c->r[31]+0x00000048u,c->r[5]); // 800DCA14
L_800DCA18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCA18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCA1C
  c->lr=c->r[0]; // 800DCA20
  c->r[1]=c->r[1]+0x00000010u; // 800DCA24
  return; // 800DCA28
}

// MEMDestroyExpHeap
void f_800DCA2C(Ctx* __restrict c) {
  trace_call(0x800DCA2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCA2C
  c->r[0]=c->lr; // 800DCA30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCA34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCA38
  c->r[31]=c->r[3]|c->r[3]; // 800DCA3C
  c->lr=0x800DCA44u; f_800DC300(c); // 800DCA40
  c->r[3]=c->r[31]|c->r[31]; // 800DCA44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCA48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCA4C
  c->lr=c->r[0]; // 800DCA50
  c->r[1]=c->r[1]+0x00000010u; // 800DCA54
  return; // 800DCA58
}

// MEMAllocFromExpHeapEx
void f_800DCA5C(Ctx* __restrict c) {
  trace_call(0x800DCA5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCA5C
  c->r[0]=c->lr; // 800DCA60
  cmps(c,0,(int32_t)c->r[4],0); // 800DCA64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DCA68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DCA6C
  c->r[31]=c->r[5]|c->r[5]; // 800DCA70
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DCA74
  c->r[30]=c->r[4]|c->r[4]; // 800DCA78
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DCA7C
  c->r[29]=c->r[3]|c->r[3]; // 800DCA80
  if (!crb(c,2)) { goto L_800DCA8C; } // 800DCA84
  c->r[30]=0u+0x00000001u; // 800DCA88
L_800DCA8C:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 800DCA8C
  c->r[4]=c->r[30]+0x00000003u; // 800DCA90
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 800DCA94
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DCA98
  if (crb(c,2)) { goto L_800DCAA8; } // 800DCA9C
  c->r[3]=c->r[3]+0x00000020u; // 800DCAA0
  c->lr=0x800DCAA8u; f_8009F188(c); // 800DCAA4
L_800DCAA8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DCAA8
  if (crb(c,0)) { goto L_800DCAC4; } // 800DCAAC
  c->r[3]=c->r[29]|c->r[29]; // 800DCAB0
  c->r[4]=c->r[30]|c->r[30]; // 800DCAB4
  c->r[5]=c->r[31]|c->r[31]; // 800DCAB8
  c->lr=0x800DCAC0u; f_800DC670(c); // 800DCABC
  goto L_800DCAD4; // 800DCAC0
L_800DCAC4:;
  c->r[3]=c->r[29]|c->r[29]; // 800DCAC4
  c->r[4]=c->r[30]|c->r[30]; // 800DCAC8
  c->r[5]=0u-c->r[31]; // 800DCACC
  c->lr=0x800DCAD4u; f_800DC74C(c); // 800DCAD0
L_800DCAD4:;
  c->r[0]=R32(c->r[29]+0x00000038u); // 800DCAD4
  c->r[31]=c->r[3]|c->r[3]; // 800DCAD8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DCADC
  if (crb(c,2)) { goto L_800DCAEC; } // 800DCAE0
  c->r[3]=c->r[29]+0x00000020u; // 800DCAE4
  c->lr=0x800DCAECu; f_8009F264(c); // 800DCAE8
L_800DCAEC:;
  c->r[3]=c->r[31]|c->r[31]; // 800DCAEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DCAF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DCAF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DCAF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DCAFC
  c->lr=c->r[0]; // 800DCB00
  c->r[1]=c->r[1]+0x00000020u; // 800DCB04
  return; // 800DCB08
}

// fn_800DCB0C
void f_800DCB0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCB0C
  c->r[0]=c->lr; // 800DCB10
  cmps(c,0,(int32_t)c->r[4],0); // 800DCB14
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DCB18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DCB1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DCB20
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DCB24
  c->r[29]=c->r[3]|c->r[3]; // 800DCB28
  if (crb(c,2)) { goto L_800DCBBC; } // 800DCB2C
  c->r[0]=R32(c->r[3]+0x00000038u); // 800DCB30
  c->r[31]=c->r[3]+0x0000003Cu; // 800DCB34
  c->r[30]=c->r[4]+0xFFFFFFF0u; // 800DCB38
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DCB3C
  if (crb(c,2)) { goto L_800DCB4C; } // 800DCB40
  c->r[3]=c->r[3]+0x00000020u; // 800DCB44
  c->lr=0x800DCB4Cu; f_8009F188(c); // 800DCB48
L_800DCB4C:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 800DCB4C
  c->r[0]=rotl(c->r[0],24)&0x0000007Fu; // 800DCB50
  c->r[0]=c->r[30]-c->r[0]; // 800DCB54
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DCB58
  c->r[0]=R32(c->r[30]+0x00000004u); // 800DCB5C
  c->r[3]=c->r[30]+c->r[0]; // 800DCB60
  c->r[0]=c->r[3]+0x00000010u; // 800DCB64
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DCB68
  c->r[4]=R32(c->r[30]+0x00000008u); // 800DCB6C
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800DCB70
  cmps(c,0,(int32_t)c->r[4],0); // 800DCB74
  if (crb(c,2)) { goto L_800DCB84; } // 800DCB78
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800DCB7C
  goto L_800DCB88; // 800DCB80
L_800DCB84:;
  W32(c->r[31]+0x00000008u,c->r[3]); // 800DCB84
L_800DCB88:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DCB88
  if (crb(c,2)) { goto L_800DCB98; } // 800DCB8C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800DCB90
  goto L_800DCB9C; // 800DCB94
L_800DCB98:;
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800DCB98
L_800DCB9C:;
  c->r[3]=c->r[31]|c->r[31]; // 800DCB9C
  c->r[4]=c->r[1]+0x00000008u; // 800DCBA0
  c->lr=0x800DCBA8u; f_800DC814(c); // 800DCBA4
  c->r[0]=R32(c->r[29]+0x00000038u); // 800DCBA8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DCBAC
  if (crb(c,2)) { goto L_800DCBBC; } // 800DCBB0
  c->r[3]=c->r[29]+0x00000020u; // 800DCBB4
  c->lr=0x800DCBBCu; f_8009F264(c); // 800DCBB8
L_800DCBBC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DCBBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DCBC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DCBC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DCBC8
  c->lr=c->r[0]; // 800DCBCC
  c->r[1]=c->r[1]+0x00000020u; // 800DCBD0
  return; // 800DCBD4
}

// MEMCreateFrmHeapEx
void f_800DCBD8(Ctx* __restrict c) {
  trace_call(0x800DCBD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCBD8
  c->r[0]=c->lr; // 800DCBDC
  c->r[4]=c->r[4]+c->r[3]; // 800DCBE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCBE4
  c->r[0]=c->r[3]+0x00000003u; // 800DCBE8
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFFCu; // 800DCBEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCBF0
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800DCBF4
  cmpu(c,0,c->r[31],c->r[6]); // 800DCBF8
  if (crb(c,1)) { goto L_800DCC0C; } // 800DCBFC
  c->r[0]=c->r[6]-c->r[31]; // 800DCC00
  cmpu(c,0,c->r[0],0x00000048u); // 800DCC04
  if (!crb(c,0)) { goto L_800DCC14; } // 800DCC08
L_800DCC0C:;
  c->r[3]=0u+0x00000000u; // 800DCC0C
  goto L_800DCC48; // 800DCC10
L_800DCC14:;
  c->r[4]=0u+0x46520000u; // 800DCC14
  c->r[7]=c->r[5]|c->r[5]; // 800DCC18
  c->r[3]=c->r[31]|c->r[31]; // 800DCC1C
  c->r[5]=c->r[31]+0x00000048u; // 800DCC20
  c->r[4]=c->r[4]+0x00004D48u; // 800DCC24
  c->lr=0x800DCC2Cu; f_800DC140(c); // 800DCC28
  c->r[4]=R32(c->r[31]+0x00000018u); // 800DCC2C
  c->r[0]=0u+0x00000000u; // 800DCC30
  c->r[3]=c->r[31]|c->r[31]; // 800DCC34
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 800DCC38
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800DCC3C
  W32(c->r[31]+0x00000040u,c->r[4]); // 800DCC40
  W32(c->r[31]+0x00000044u,c->r[0]); // 800DCC44
L_800DCC48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCC48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCC4C
  c->lr=c->r[0]; // 800DCC50
  c->r[1]=c->r[1]+0x00000010u; // 800DCC54
  return; // 800DCC58
}

// fn_800DCC5C
void f_800DCC5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCC5C
  c->r[0]=c->lr; // 800DCC60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCC64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCC68
  c->r[31]=c->r[3]|c->r[3]; // 800DCC6C
  c->lr=0x800DCC74u; f_800DC300(c); // 800DCC70
  c->r[3]=c->r[31]|c->r[31]; // 800DCC74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCC78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCC7C
  c->lr=c->r[0]; // 800DCC80
  c->r[1]=c->r[1]+0x00000010u; // 800DCC84
  return; // 800DCC88
}

// MEMAllocFromFrmHeapEx
void f_800DCC8C(Ctx* __restrict c) {
  trace_call(0x800DCC8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCC8C
  c->r[0]=c->lr; // 800DCC90
  cmps(c,0,(int32_t)c->r[4],0); // 800DCC94
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DCC98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DCC9C
  c->r[31]=c->r[3]|c->r[3]; // 800DCCA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DCCA4
  c->r[30]=c->r[4]|c->r[4]; // 800DCCA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DCCAC
  c->r[29]=c->r[5]|c->r[5]; // 800DCCB0
  if (!crb(c,2)) { goto L_800DCCBC; } // 800DCCB4
  c->r[30]=0u+0x00000001u; // 800DCCB8
L_800DCCBC:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 800DCCBC
  c->r[4]=c->r[30]+0x00000003u; // 800DCCC0
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 800DCCC4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DCCC8
  if (crb(c,2)) { goto L_800DCCD8; } // 800DCCCC
  c->r[3]=c->r[3]+0x00000020u; // 800DCCD0
  c->lr=0x800DCCD8u; f_8009F188(c); // 800DCCD4
L_800DCCD8:;
  cmps(c,0,(int32_t)c->r[29],0); // 800DCCD8
  if (crb(c,0)) { goto L_800DCD30; } // 800DCCDC
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800DCCE0
  c->r[0]=c->r[29]+0xFFFFFFFFu; // 800DCCE4
  c->r[5]=~(c->r[0]|c->r[0]); // 800DCCE8
  c->r[0]=R32(c->r[31]+0x00000040u); // 800DCCEC
  c->r[4]=c->r[29]+c->r[3]; // 800DCCF0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800DCCF4
  c->r[29]=c->r[5]&c->r[4]; // 800DCCF8
  c->r[30]=c->r[30]+c->r[29]; // 800DCCFC
  cmpu(c,0,c->r[30],c->r[0]); // 800DCD00
  if (!crb(c,1)) { goto L_800DCD10; } // 800DCD04
  c->r[29]=0u+0x00000000u; // 800DCD08
  goto L_800DCD78; // 800DCD0C
L_800DCD10:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 800DCD10
  c->r[5]=c->r[30]-c->r[3]; // 800DCD14
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800DCD18
  if (crb(c,2)) { goto L_800DCD28; } // 800DCD1C
  c->r[4]=0u+0x00000000u; // 800DCD20
  c->lr=0x800DCD28u; f_8000443C(c); // 800DCD24
L_800DCD28:;
  W32(c->r[31]+0x0000003Cu,c->r[30]); // 800DCD28
  goto L_800DCD78; // 800DCD2C
L_800DCD30:;
  c->r[5]=R32(c->r[31]+0x00000040u); // 800DCD30
  c->r[0]=addc(c,~c->r[29],0xFFFFFFFFu,1); // 800DCD34
  c->r[4]=~(c->r[0]|c->r[0]); // 800DCD38
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 800DCD3C
  c->r[3]=c->r[5]-c->r[30]; // 800DCD40
  c->r[29]=c->r[4]&c->r[3]; // 800DCD44
  cmpu(c,0,c->r[29],c->r[0]); // 800DCD48
  if (!crb(c,0)) { goto L_800DCD58; } // 800DCD4C
  c->r[29]=0u+0x00000000u; // 800DCD50
  goto L_800DCD78; // 800DCD54
L_800DCD58:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 800DCD58
  c->r[5]=c->r[5]-c->r[29]; // 800DCD5C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800DCD60
  if (crb(c,2)) { goto L_800DCD74; } // 800DCD64
  c->r[3]=c->r[29]|c->r[29]; // 800DCD68
  c->r[4]=0u+0x00000000u; // 800DCD6C
  c->lr=0x800DCD74u; f_8000443C(c); // 800DCD70
L_800DCD74:;
  W32(c->r[31]+0x00000040u,c->r[29]); // 800DCD74
L_800DCD78:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 800DCD78
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DCD7C
  if (crb(c,2)) { goto L_800DCD8C; } // 800DCD80
  c->r[3]=c->r[31]+0x00000020u; // 800DCD84
  c->lr=0x800DCD8Cu; f_8009F264(c); // 800DCD88
L_800DCD8C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DCD8C
  c->r[3]=c->r[29]|c->r[29]; // 800DCD90
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DCD94
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DCD98
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DCD9C
  c->lr=c->r[0]; // 800DCDA0
  c->r[1]=c->r[1]+0x00000020u; // 800DCDA4
  return; // 800DCDA8
}

// MEMFreeToFrmHeap
void f_800DCDAC(Ctx* __restrict c) {
  trace_call(0x800DCDACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCDAC
  c->r[0]=c->lr; // 800DCDB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCDB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCDB8
  c->r[31]=c->r[4]|c->r[4]; // 800DCDBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DCDC0
  c->r[30]=c->r[3]|c->r[3]; // 800DCDC4
  c->r[0]=R32(c->r[3]+0x00000038u); // 800DCDC8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DCDCC
  if (crb(c,2)) { goto L_800DCDDC; } // 800DCDD0
  c->r[3]=c->r[3]+0x00000020u; // 800DCDD4
  c->lr=0x800DCDDCu; f_8009F188(c); // 800DCDD8
L_800DCDDC:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800DCDDC
  if (crb(c,2)) { goto L_800DCDF4; } // 800DCDE0
  c->r[3]=R32(c->r[30]+0x00000018u); // 800DCDE4
  c->r[0]=0u+0x00000000u; // 800DCDE8
  W32(c->r[30]+0x00000044u,c->r[0]); // 800DCDEC
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 800DCDF0
L_800DCDF4:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 800DCDF4
  if (crb(c,2)) { goto L_800DCE20; } // 800DCDF8
  c->r[3]=R32(c->r[30]+0x00000044u); // 800DCDFC
  goto L_800DCE10; // 800DCE00
L_800DCE04:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800DCE04
  W32(c->r[3]+0x00000008u,c->r[0]); // 800DCE08
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800DCE0C
L_800DCE10:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DCE10
  if (!crb(c,2)) { IRQCHK(c); goto L_800DCE04; } // 800DCE14
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800DCE18
  W32(c->r[30]+0x00000040u,c->r[0]); // 800DCE1C
L_800DCE20:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 800DCE20
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DCE24
  if (crb(c,2)) { goto L_800DCE34; } // 800DCE28
  c->r[3]=c->r[30]+0x00000020u; // 800DCE2C
  c->lr=0x800DCE34u; f_8009F264(c); // 800DCE30
L_800DCE34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCE34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCE38
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DCE3C
  c->lr=c->r[0]; // 800DCE40
  c->r[1]=c->r[1]+0x00000010u; // 800DCE44
  return; // 800DCE48
}

// MEMGetAllocatableSizeForFrmHeapEx
void f_800DCE4C(Ctx* __restrict c) {
  trace_call(0x800DCE4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCE4C
  c->r[0]=c->lr; // 800DCE50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCE54
  c->r[0]=sraw(c,c->r[4],31); // 800DCE58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCE5C
  c->r[31]=c->r[0]^c->r[4]; // 800DCE60
  c->r[31]=c->r[31]-c->r[0]; // 800DCE64
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DCE68
  c->r[30]=c->r[3]|c->r[3]; // 800DCE6C
  c->lr=0x800DCE74u; f_8009DF9C(c); // 800DCE70
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800DCE74
  c->r[4]=c->r[31]+0xFFFFFFFFu; // 800DCE78
  c->r[5]=~(c->r[4]|c->r[4]); // 800DCE7C
  c->r[6]=R32(c->r[30]+0x00000040u); // 800DCE80
  c->r[4]=c->r[31]+c->r[0]; // 800DCE84
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800DCE88
  c->r[0]=c->r[5]&c->r[0]; // 800DCE8C
  cmpu(c,0,c->r[0],c->r[6]); // 800DCE90
  if (!crb(c,1)) { goto L_800DCEA0; } // 800DCE94
  c->r[31]=0u+0x00000000u; // 800DCE98
  goto L_800DCEA4; // 800DCE9C
L_800DCEA0:;
  c->r[31]=c->r[6]-c->r[0]; // 800DCEA0
L_800DCEA4:;
  c->lr=0x800DCEA8u; f_8009DFC4(c); // 800DCEA4
  c->r[3]=c->r[31]|c->r[31]; // 800DCEA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCEAC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DCEB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCEB4
  c->lr=c->r[0]; // 800DCEB8
  c->r[1]=c->r[1]+0x00000010u; // 800DCEBC
  return; // 800DCEC0
}

// fn_800DCEC4
void f_800DCEC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCEC4
  c->r[0]=c->lr; // 800DCEC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DCECC
  c->r[11]=c->r[1]+0x00000020u; // 800DCED0
  c->lr=0x800DCED8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DCED4
  c->r[8]=c->r[3]+0x00000003u; // 800DCED8
  c->r[0]=c->r[4]+c->r[3]; // 800DCEDC
  c->r[31]=rotl(c->r[8],0)&0xFFFFFFFCu; // 800DCEE0
  c->r[8]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800DCEE4
  c->r[0]=c->r[31]-c->r[8]; cr0(c,c->r[0]); // 800DCEE8
  if (!crb(c,1)) { goto L_800DCEF8; } // 800DCEEC
  c->r[3]=0u+0x00000000u; // 800DCEF0
  goto L_800DD008; // 800DCEF4
L_800DCEF8:;
  c->r[30]=c->r[31]+0x0000003Cu; // 800DCEF8
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800DCEFC
  c->r[3]=c->r[30]+c->r[6]; // 800DCF00
  c->r[4]=c->r[6]+c->r[5]; // 800DCF04
  c->r[5]=~(c->r[0]|c->r[0]); // 800DCF08
  c->r[0]=c->r[3]+0x00000007u; // 800DCF0C
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800DCF10
  c->r[28]=c->r[5]&c->r[0]; // 800DCF14
  c->r[0]=c->r[28]-c->r[8]; cr0(c,c->r[0]); // 800DCF18
  c->r[27]=c->r[5]&c->r[3]; // 800DCF1C
  if (!crb(c,1)) { goto L_800DCF2C; } // 800DCF20
  c->r[3]=0u+0x00000000u; // 800DCF24
  goto L_800DD008; // 800DCF28
L_800DCF2C:;
  c->r[0]=c->r[8]-c->r[28]; // 800DCF2C
  c->r[29]=divwu(c->r[0],c->r[27]); cr0(c,c->r[29]); // 800DCF30
  if (!crb(c,2)) { goto L_800DCF40; } // 800DCF34
  c->r[3]=0u+0x00000000u; // 800DCF38
  goto L_800DD008; // 800DCF3C
L_800DCF40:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[27]); // 800DCF40
  c->r[4]=0u+0x554E0000u; // 800DCF44
  c->r[3]=c->r[31]|c->r[31]; // 800DCF48
  c->r[5]=c->r[28]|c->r[28]; // 800DCF4C
  c->r[4]=c->r[4]+0x00005448u; // 800DCF50
  c->r[6]=c->r[0]+c->r[28]; // 800DCF54
  c->lr=0x800DCF5Cu; f_800DC140(c); // 800DCF58
  c->r[3]=c->r[29]+0xFFFFFFFFu; // 800DCF5C
  W32(c->r[30]+0x00000000u,c->r[28]); // 800DCF60
  cmpu(c,0,c->r[3],0x00000000u); // 800DCF64
  W32(c->r[30]+0x00000004u,c->r[27]); // 800DCF68
  if (!crb(c,1)) { goto L_800DCFFC; } // 800DCF6C
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800DCF70
  c->ctr=c->r[0]; // 800DCF74
  if (crb(c,2)) { goto L_800DCFE8; } // 800DCF78
L_800DCF7C:;
  c->r[0]=c->r[27]+c->r[28]; // 800DCF7C
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DCF80
  c->r[28]=c->r[0]|c->r[0]; // 800DCF84
  c->r[0]=c->r[27]+c->r[0]; // 800DCF88
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DCF8C
  c->r[28]=c->r[0]|c->r[0]; // 800DCF90
  c->r[0]=c->r[27]+c->r[0]; // 800DCF94
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DCF98
  c->r[28]=c->r[0]|c->r[0]; // 800DCF9C
  c->r[0]=c->r[27]+c->r[0]; // 800DCFA0
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DCFA4
  c->r[28]=c->r[0]|c->r[0]; // 800DCFA8
  c->r[0]=c->r[27]+c->r[0]; // 800DCFAC
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DCFB0
  c->r[28]=c->r[0]|c->r[0]; // 800DCFB4
  c->r[0]=c->r[27]+c->r[0]; // 800DCFB8
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DCFBC
  c->r[28]=c->r[0]|c->r[0]; // 800DCFC0
  c->r[0]=c->r[27]+c->r[0]; // 800DCFC4
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DCFC8
  c->r[28]=c->r[0]|c->r[0]; // 800DCFCC
  c->r[0]=c->r[27]+c->r[0]; // 800DCFD0
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DCFD4
  c->r[28]=c->r[0]|c->r[0]; // 800DCFD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DCF7C; } // 800DCFDC
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 800DCFE0
  if (crb(c,2)) { goto L_800DCFFC; } // 800DCFE4
L_800DCFE8:;
  c->ctr=c->r[3]; // 800DCFE8
L_800DCFEC:;
  c->r[0]=c->r[27]+c->r[28]; // 800DCFEC
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DCFF0
  c->r[28]=c->r[0]|c->r[0]; // 800DCFF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DCFEC; } // 800DCFF8
L_800DCFFC:;
  c->r[0]=0u+0x00000000u; // 800DCFFC
  c->r[3]=c->r[31]|c->r[31]; // 800DD000
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DD004
L_800DD008:;
  c->r[11]=c->r[1]+0x00000020u; // 800DD008
  c->lr=0x800DD010u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DD00C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD010
  c->lr=c->r[0]; // 800DD014
  c->r[1]=c->r[1]+0x00000020u; // 800DD018
  return; // 800DD01C
}

// fn_800DD020
void f_800DD020(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD020
  c->r[0]=c->lr; // 800DD024
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD028
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD02C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD030
  c->r[30]=c->r[3]|c->r[3]; // 800DD034
  c->r[0]=R32(c->r[3]+0x00000038u); // 800DD038
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DD03C
  if (crb(c,2)) { goto L_800DD04C; } // 800DD040
  c->r[3]=c->r[3]+0x00000020u; // 800DD044
  c->lr=0x800DD04Cu; f_8009F188(c); // 800DD048
L_800DD04C:;
  c->r[31]=R32(c->r[30]+0x0000003Cu); // 800DD04C
  cmps(c,0,(int32_t)c->r[31],0); // 800DD050
  if (crb(c,2)) { goto L_800DD060; } // 800DD054
  c->r[0]=R32(c->r[31]+0x00000000u); // 800DD058
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800DD05C
L_800DD060:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 800DD060
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DD064
  if (crb(c,2)) { goto L_800DD074; } // 800DD068
  c->r[3]=c->r[30]+0x00000020u; // 800DD06C
  c->lr=0x800DD074u; f_8009F264(c); // 800DD070
L_800DD074:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DD074
  if (crb(c,2)) { goto L_800DD098; } // 800DD078
  c->r[0]=R32(c->r[30]+0x00000038u); // 800DD07C
  c->r[5]=R32(c->r[30]+0x00000040u); // 800DD080
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800DD084
  if (crb(c,2)) { goto L_800DD098; } // 800DD088
  c->r[3]=c->r[31]|c->r[31]; // 800DD08C
  c->r[4]=0u+0x00000000u; // 800DD090
  c->lr=0x800DD098u; f_8000443C(c); // 800DD094
L_800DD098:;
  c->r[3]=c->r[31]|c->r[31]; // 800DD098
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD09C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD0A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD0A4
  c->lr=c->r[0]; // 800DD0A8
  c->r[1]=c->r[1]+0x00000010u; // 800DD0AC
  return; // 800DD0B0
}

// fn_800DD0B4
void f_800DD0B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD0B4
  c->r[0]=c->lr; // 800DD0B8
  cmps(c,0,(int32_t)c->r[4],0); // 800DD0BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD0C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD0C4
  c->r[31]=c->r[4]|c->r[4]; // 800DD0C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD0CC
  c->r[30]=c->r[3]|c->r[3]; // 800DD0D0
  if (crb(c,2)) { goto L_800DD10C; } // 800DD0D4
  c->r[0]=R32(c->r[3]+0x00000038u); // 800DD0D8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DD0DC
  if (crb(c,2)) { goto L_800DD0EC; } // 800DD0E0
  c->r[3]=c->r[3]+0x00000020u; // 800DD0E4
  c->lr=0x800DD0ECu; f_8009F188(c); // 800DD0E8
L_800DD0EC:;
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800DD0EC
  W32(c->r[31]+0x00000000u,c->r[0]); // 800DD0F0
  c->r[0]=R32(c->r[30]+0x00000038u); // 800DD0F4
  W32(c->r[30]+0x0000003Cu,c->r[31]); // 800DD0F8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DD0FC
  if (crb(c,2)) { goto L_800DD10C; } // 800DD100
  c->r[3]=c->r[30]+0x00000020u; // 800DD104
  c->lr=0x800DD10Cu; f_8009F264(c); // 800DD108
L_800DD10C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD10C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD110
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD114
  c->lr=c->r[0]; // 800DD118
  c->r[1]=c->r[1]+0x00000010u; // 800DD11C
  return; // 800DD120
}

// fn_800DD124
void f_800DD124(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD124
  c->r[0]=c->lr; // 800DD128
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD12C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD130
  c->r[31]=0u+0x00000000u; // 800DD134
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD138
  c->r[30]=c->r[3]|c->r[3]; // 800DD13C
  c->r[0]=R32(c->r[3]+0x00000038u); // 800DD140
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DD144
  if (crb(c,2)) { goto L_800DD154; } // 800DD148
  c->r[3]=c->r[3]+0x00000020u; // 800DD14C
  c->lr=0x800DD154u; f_8009F188(c); // 800DD150
L_800DD154:;
  c->r[3]=R32(c->r[30]+0x0000003Cu); // 800DD154
  goto L_800DD164; // 800DD158
L_800DD15C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800DD15C
  c->r[31]=c->r[31]+0x00000001u; // 800DD160
L_800DD164:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DD164
  if (!crb(c,2)) { IRQCHK(c); goto L_800DD15C; } // 800DD168
  c->r[0]=R32(c->r[30]+0x00000038u); // 800DD16C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DD170
  if (crb(c,2)) { goto L_800DD180; } // 800DD174
  c->r[3]=c->r[30]+0x00000020u; // 800DD178
  c->lr=0x800DD180u; f_8009F264(c); // 800DD17C
L_800DD180:;
  c->r[3]=c->r[31]|c->r[31]; // 800DD180
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD184
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD188
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD18C
  c->lr=c->r[0]; // 800DD190
  c->r[1]=c->r[1]+0x00000010u; // 800DD194
  return; // 800DD198
}

// fn_800DD19C
void f_800DD19C(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 800DD19C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DD1A0
  c->r[5]=R32(c->r[5]+0x00000008u); // 800DD1A4
  f_800DCA5C(c); return; // 800DD1A8
}

// fn_800DD1AC
void f_800DD1AC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DD1AC
  f_800DCB0C(c); return; // 800DD1B0
}

// fn_800DD1B4
void f_800DD1B4(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 800DD1B4
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DD1B8
  c->r[5]=R32(c->r[5]+0x00000008u); // 800DD1BC
  f_800DCC8C(c); return; // 800DD1C0
}

// fn_800DD1C4
void f_800DD1C4(Ctx* __restrict c) {
  return; // 800DD1C4
}

// fn_800DD1C8
void f_800DD1C8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DD1C8
  c->r[12]=R32(c->r[5]+0x00000000u); // 800DD1CC
  c->ctr=c->r[12]; // 800DD1D0
  if (true) { dispatch(c,c->ctr); return; } // 800DD1D4
}

// fn_800DD1D8
void f_800DD1D8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 800DD1D8
  c->r[12]=R32(c->r[5]+0x00000004u); // 800DD1DC
  c->ctr=c->r[12]; // 800DD1E0
  if (true) { dispatch(c,c->ctr); return; } // 800DD1E4
}

// fn_800DD1E8
void f_800DD1E8(Ctx* __restrict c) {
  c->r[6]=c->r[2]+0xFFFF9518u; // 800DD1E8
  c->r[0]=0u+0x00000000u; // 800DD1EC
  W32(c->r[3]+0x00000000u,c->r[6]); // 800DD1F0
  W32(c->r[3]+0x00000004u,c->r[4]); // 800DD1F4
  W32(c->r[3]+0x00000008u,c->r[5]); // 800DD1F8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800DD1FC
  return; // 800DD200
}

// fn_800DD204
void f_800DD204(Ctx* __restrict c) {
  c->r[6]=c->r[2]+0xFFFF9520u; // 800DD204
  c->r[0]=0u+0x00000000u; // 800DD208
  W32(c->r[3]+0x00000000u,c->r[6]); // 800DD20C
  W32(c->r[3]+0x00000004u,c->r[4]); // 800DD210
  W32(c->r[3]+0x00000008u,c->r[5]); // 800DD214
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800DD218
  return; // 800DD21C
}

// fn_800DD220
void f_800DD220(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800DD220
  W16(c->r[3]+0x0000000Au,c->r[4]); // 800DD224
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DD228
  W32(c->r[3]+0x00000004u,c->r[0]); // 800DD22C
  W16(c->r[3]+0x00000008u,c->r[0]); // 800DD230
  return; // 800DD234
}

// fn_800DD238
void f_800DD238(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DD238
  cmps(c,0,(int32_t)c->r[0],0); // 800DD23C
  if (!crb(c,2)) { goto L_800DD270; } // 800DD240
  c->r[5]=R16(c->r[3]+0x0000000Au); // 800DD244
  c->r[0]=0u+0x00000000u; // 800DD248
  c->r[5]=c->r[4]+c->r[5]; // 800DD24C
  W32(c->r[5]+0x00000004u,c->r[0]); // 800DD250
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DD254
  c->r[5]=R16(c->r[3]+0x00000008u); // 800DD258
  W32(c->r[3]+0x00000000u,c->r[4]); // 800DD25C
  c->r[0]=c->r[5]+0x00000001u; // 800DD260
  W32(c->r[3]+0x00000004u,c->r[4]); // 800DD264
  W16(c->r[3]+0x00000008u,c->r[0]); // 800DD268
  return; // 800DD26C
L_800DD270:;
  c->r[6]=R16(c->r[3]+0x0000000Au); // 800DD270
  c->r[0]=0u+0x00000000u; // 800DD274
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DD278
  {uint32_t ea=c->r[6]+c->r[4]; W32(ea,c->r[5]); c->r[6]=ea;} // 800DD27C
  W32(c->r[6]+0x00000004u,c->r[0]); // 800DD280
  c->r[5]=R32(c->r[3]+0x00000004u); // 800DD284
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800DD288
  c->r[5]=c->r[5]+c->r[0]; // 800DD28C
  W32(c->r[5]+0x00000004u,c->r[4]); // 800DD290
  c->r[5]=R16(c->r[3]+0x00000008u); // 800DD294
  W32(c->r[3]+0x00000004u,c->r[4]); // 800DD298
  c->r[0]=c->r[5]+0x00000001u; // 800DD29C
  W16(c->r[3]+0x00000008u,c->r[0]); // 800DD2A0
  return; // 800DD2A4
}

// fn_800DD2A8
void f_800DD2A8(Ctx* __restrict c) {
  c->r[5]=R16(c->r[3]+0x0000000Au); // 800DD2A8
  c->r[6]=c->r[4]+c->r[5]; // 800DD2AC
  c->r[4]=R32(c->r[4]+c->r[5]); // 800DD2B0
  cmps(c,0,(int32_t)c->r[4],0); // 800DD2B4
  if (!crb(c,2)) { goto L_800DD2C8; } // 800DD2B8
  c->r[0]=R32(c->r[6]+0x00000004u); // 800DD2BC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DD2C0
  goto L_800DD2D4; // 800DD2C4
L_800DD2C8:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 800DD2C8
  c->r[4]=c->r[4]+c->r[5]; // 800DD2CC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800DD2D0
L_800DD2D4:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 800DD2D4
  cmps(c,0,(int32_t)c->r[5],0); // 800DD2D8
  if (!crb(c,2)) { goto L_800DD2EC; } // 800DD2DC
  c->r[0]=R32(c->r[6]+0x00000000u); // 800DD2E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800DD2E4
  goto L_800DD2F8; // 800DD2E8
L_800DD2EC:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 800DD2EC
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800DD2F0
  W32(c->r[5]+c->r[0],c->r[4]); // 800DD2F4
L_800DD2F8:;
  c->r[0]=0u+0x00000000u; // 800DD2F8
  W32(c->r[6]+0x00000000u,c->r[0]); // 800DD2FC
  W32(c->r[6]+0x00000004u,c->r[0]); // 800DD300
  c->r[4]=R16(c->r[3]+0x00000008u); // 800DD304
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800DD308
  W16(c->r[3]+0x00000008u,c->r[0]); // 800DD30C
  return; // 800DD310
}

// fn_800DD314
void f_800DD314(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800DD314
  if (!crb(c,2)) { goto L_800DD324; } // 800DD318
  c->r[3]=R32(c->r[3]+0x00000000u); // 800DD31C
  return; // 800DD320
L_800DD324:;
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800DD324
  c->r[3]=c->r[4]+c->r[0]; // 800DD328
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DD32C
  return; // 800DD330
}

// EUARTInit
void f_800DD334(Ctx* __restrict c) {
  trace_call(0x800DD334u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD334
  c->r[0]=c->lr; // 800DD338
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD33C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DD340
  c->r[0]=R32(c->r[13]+0xFFFFA530u); // 800DD344
  cmps(c,0,(int32_t)c->r[0],0); // 800DD348
  if (crb(c,2)) { goto L_800DD358; } // 800DD34C
  c->r[3]=0u+0x00000001u; // 800DD350
  goto L_800DD41C; // 800DD354
L_800DD358:;
  c->lr=0x800DD35Cu; f_80097DF8(c); // 800DD358
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 800DD35C
  if (!crb(c,2)) { goto L_800DD374; } // 800DD360
  c->r[0]=0u+0x00000002u; // 800DD364
  c->r[3]=0u+0x00000000u; // 800DD368
  W32(c->r[13]+0xFFFFA534u,c->r[0]); // 800DD36C
  goto L_800DD41C; // 800DD370
L_800DD374:;
  c->lr=0x800DD378u; f_8009DF9C(c); // 800DD374
  c->r[0]=0u+0x000000F2u; // 800DD378
  c->r[31]=c->r[3]|c->r[3]; // 800DD37C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800DD380
  c->r[6]=c->r[1]+0x00000008u; // 800DD384
  c->r[3]=0u+0x00000000u; // 800DD388
  c->r[4]=0u+0x00000001u; // 800DD38C
  c->r[5]=0u+0xB0000000u; // 800DD390
  c->r[7]=0u+0x00000001u; // 800DD394
  c->lr=0x800DD39Cu; f_800D5654(c); // 800DD398
  cmps(c,0,(int32_t)c->r[3],0); // 800DD39C
  if (!crb(c,2)) { goto L_800DD3BC; } // 800DD3A0
  c->r[0]=0u+0x00000005u; // 800DD3A4
  c->r[3]=c->r[31]|c->r[31]; // 800DD3A8
  W32(c->r[13]+0xFFFFA534u,c->r[0]); // 800DD3AC
  c->lr=0x800DD3B4u; f_8009DFC4(c); // 800DD3B0
  c->r[3]=0u+0x00000000u; // 800DD3B4
  goto L_800DD41C; // 800DD3B8
L_800DD3BC:;
  c->r[0]=0u+0x000000F3u; // 800DD3BC
  c->r[6]=c->r[1]+0x00000008u; // 800DD3C0
  W8(c->r[1]+0x00000008u,c->r[0]); // 800DD3C4
  c->r[3]=0u+0x00000000u; // 800DD3C8
  c->r[4]=0u+0x00000001u; // 800DD3CC
  c->r[5]=0u+0xB0000000u; // 800DD3D0
  c->r[7]=0u+0x00000001u; // 800DD3D4
  c->lr=0x800DD3DCu; f_800D5654(c); // 800DD3D8
  cmps(c,0,(int32_t)c->r[3],0); // 800DD3DC
  if (!crb(c,2)) { goto L_800DD3FC; } // 800DD3E0
  c->r[0]=0u+0x00000005u; // 800DD3E4
  c->r[3]=c->r[31]|c->r[31]; // 800DD3E8
  W32(c->r[13]+0xFFFFA534u,c->r[0]); // 800DD3EC
  c->lr=0x800DD3F4u; f_8009DFC4(c); // 800DD3F0
  c->r[3]=0u+0x00000000u; // 800DD3F4
  goto L_800DD41C; // 800DD3F8
L_800DD3FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800DD3FC
  c->lr=0x800DD404u; f_8009DFC4(c); // 800DD400
  c->r[0]=0u+0x00000000u; // 800DD404
  c->r[3]=0u+0x00000001u; // 800DD408
  W32(c->r[13]+0xFFFFA530u,c->r[3]); // 800DD40C
  c->r[3]=0u+0x00000001u; // 800DD410
  W32(c->r[13]+0xFFFFA534u,c->r[0]); // 800DD414
  W32(c->r[13]+0xFFFFA538u,c->r[0]); // 800DD418
L_800DD41C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD41C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DD420
  c->lr=c->r[0]; // 800DD424
  c->r[1]=c->r[1]+0x00000020u; // 800DD428
  return; // 800DD42C
}

// InitializeUART
void f_800DD430(Ctx* __restrict c) {
  trace_call(0x800DD430u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD430
  c->r[0]=c->lr; // 800DD434
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD438
  c->lr=0x800DD440u; f_80097DF8(c); // 800DD43C
  c->r[0]=rotl(c->r[3],0)&0x10000000u; cr0(c,c->r[0]); // 800DD440
  if (!crb(c,2)) { goto L_800DD458; } // 800DD444
  c->r[0]=0u+0x00000000u; // 800DD448
  c->r[3]=0u+0x00000002u; // 800DD44C
  W32(c->r[13]+0xFFFFA53Cu,c->r[0]); // 800DD450
  goto L_800DD468; // 800DD454
L_800DD458:;
  c->r[4]=0u+0xA5FF0000u; // 800DD458
  c->r[3]=0u+0x00000000u; // 800DD45C
  c->r[0]=c->r[4]+0x0000005Au; // 800DD460
  W32(c->r[13]+0xFFFFA53Cu,c->r[0]); // 800DD464
L_800DD468:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD468
  c->lr=c->r[0]; // 800DD46C
  c->r[1]=c->r[1]+0x00000010u; // 800DD470
  return; // 800DD474
}

// WriteUARTN
void f_800DD478(Ctx* __restrict c) {
  trace_call(0x800DD478u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD478
  c->r[0]=c->lr; // 800DD47C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DD480
  c->r[11]=c->r[1]+0x00000030u; // 800DD484
  c->lr=0x800DD48Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DD488
  c->r[5]=R32(c->r[13]+0xFFFFA53Cu); // 800DD48C
  c->r[30]=c->r[3]|c->r[3]; // 800DD490
  c->r[31]=c->r[4]|c->r[4]; // 800DD494
  c->r[0]=c->r[5]+0x5A010000u; // 800DD498
  cmpu(c,0,c->r[0],0x0000005Au); // 800DD49C
  if (crb(c,2)) { goto L_800DD4AC; } // 800DD4A0
  c->r[3]=0u+0x00000002u; // 800DD4A4
  goto L_800DD68C; // 800DD4A8
L_800DD4AC:;
  c->r[0]=R32(c->r[13]+0xFFFFA530u); // 800DD4AC
  cmps(c,0,(int32_t)c->r[0],0); // 800DD4B0
  if (!crb(c,2)) { goto L_800DD4CC; } // 800DD4B4
  c->lr=0x800DD4BCu; f_800DD334(c); // 800DD4B8
  cmps(c,0,(int32_t)c->r[3],0); // 800DD4BC
  if (!crb(c,2)) { goto L_800DD4CC; } // 800DD4C0
  c->r[3]=0u+0x00000002u; // 800DD4C4
  goto L_800DD68C; // 800DD4C8
L_800DD4CC:;
  c->r[0]=R32(c->r[13]+0xFFFFA530u); // 800DD4CC
  cmps(c,0,(int32_t)c->r[0],0); // 800DD4D0
  if (!crb(c,2)) { goto L_800DD4E8; } // 800DD4D4
  c->r[0]=0u+0x00000001u; // 800DD4D8
  c->r[3]=0u+0x00000002u; // 800DD4DC
  W32(c->r[13]+0xFFFFA534u,c->r[0]); // 800DD4E0
  goto L_800DD68C; // 800DD4E4
L_800DD4E8:;
  c->r[3]=0u+0x00000000u; // 800DD4E8
  c->r[4]=0u+0x00000001u; // 800DD4EC
  c->r[5]=0u+0x00000000u; // 800DD4F0
  c->lr=0x800DD4F8u; f_800D4D78(c); // 800DD4F4
  cmps(c,0,(int32_t)c->r[3],0); // 800DD4F8
  if (!crb(c,2)) { goto L_800DD508; } // 800DD4FC
  c->r[3]=0u+0x00000000u; // 800DD500
  goto L_800DD68C; // 800DD504
L_800DD508:;
  c->r[4]=c->r[30]|c->r[30]; // 800DD508
  c->r[3]=0u+0x0000000Du; // 800DD50C
  goto L_800DD528; // 800DD510
L_800DD514:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800DD514
  cmps(c,0,(int32_t)c->r[0],10); // 800DD518
  if (!crb(c,2)) { goto L_800DD524; } // 800DD51C
  W8(c->r[4]+0x00000000u,c->r[3]); // 800DD520
L_800DD524:;
  c->r[4]=c->r[4]+0x00000001u; // 800DD524
L_800DD528:;
  c->r[0]=c->r[4]-c->r[30]; // 800DD528
  cmpu(c,0,c->r[0],c->r[31]); // 800DD52C
  if (crb(c,0)) { IRQCHK(c); goto L_800DD514; } // 800DD530
  c->r[3]=0u+0xB0000000u; // 800DD534
  c->r[28]=R32(c->r[2]+0xFFFF9510u); // 800DD538
  c->r[0]=c->r[3]+0x00000100u; // 800DD53C
  c->r[26]=0u+0x00000000u; // 800DD540
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD544
  c->r[29]=0u+0x30000000u; // 800DD548
  goto L_800DD678; // 800DD54C
L_800DD550:;
  c->r[5]=c->r[28]|c->r[28]; // 800DD550
  c->r[3]=0u+0x00000000u; // 800DD554
  c->r[4]=0u+0x00000001u; // 800DD558
  c->lr=0x800DD560u; f_800D45E4(c); // 800DD55C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD560
  if (!crb(c,2)) { goto L_800DD570; } // 800DD564
  c->r[27]=0u+0xFFFFFFFFu; // 800DD568
  goto L_800DD5CC; // 800DD56C
L_800DD570:;
  c->r[0]=c->r[29]+0x00000100u; // 800DD570
  c->r[4]=c->r[1]+0x00000008u; // 800DD574
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DD578
  c->r[3]=0u+0x00000000u; // 800DD57C
  c->r[5]=0u+0x00000004u; // 800DD580
  c->r[6]=0u+0x00000001u; // 800DD584
  c->r[7]=0u+0x00000000u; // 800DD588
  c->lr=0x800DD590u; f_800D3B7C(c); // 800DD58C
  c->r[3]=0u+0x00000000u; // 800DD590
  c->lr=0x800DD598u; f_800D3F94(c); // 800DD594
  c->r[4]=c->r[1]+0x0000000Cu; // 800DD598
  c->r[3]=0u+0x00000000u; // 800DD59C
  c->r[5]=0u+0x00000004u; // 800DD5A0
  c->r[6]=0u+0x00000000u; // 800DD5A4
  c->r[7]=0u+0x00000000u; // 800DD5A8
  c->lr=0x800DD5B0u; f_800D3B7C(c); // 800DD5AC
  c->r[3]=0u+0x00000000u; // 800DD5B0
  c->lr=0x800DD5B8u; f_800D3F94(c); // 800DD5B4
  c->r[3]=0u+0x00000000u; // 800DD5B8
  c->lr=0x800DD5C0u; f_800D4714(c); // 800DD5BC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800DD5C0
  c->r[0]=rotl(c->r[0],8)&0x0000003Fu; // 800DD5C4
  c->r[27]=addc(c,~c->r[0],0x00000020u,1); // 800DD5C8
L_800DD5CC:;
  cmps(c,0,(int32_t)c->r[27],0); // 800DD5CC
  if (!crb(c,0)) { goto L_800DD5DC; } // 800DD5D0
  c->r[26]=0u+0x00000003u; // 800DD5D4
  goto L_800DD680; // 800DD5D8
L_800DD5DC:;
  cmps(c,0,(int32_t)c->r[27],32); // 800DD5DC
  if (!crb(c,2)) { goto L_800DD678; } // 800DD5E0
  c->r[5]=c->r[28]|c->r[28]; // 800DD5E4
  c->r[3]=0u+0x00000000u; // 800DD5E8
  c->r[4]=0u+0x00000001u; // 800DD5EC
  c->lr=0x800DD5F4u; f_800D45E4(c); // 800DD5F0
  cmps(c,0,(int32_t)c->r[3],0); // 800DD5F4
  if (!crb(c,2)) { goto L_800DD604; } // 800DD5F8
  c->r[26]=0u+0x00000003u; // 800DD5FC
  goto L_800DD680; // 800DD600
L_800DD604:;
  c->r[4]=c->r[1]+0x00000014u; // 800DD604
  c->r[3]=0u+0x00000000u; // 800DD608
  c->r[5]=0u+0x00000004u; // 800DD60C
  c->r[6]=0u+0x00000001u; // 800DD610
  c->r[7]=0u+0x00000000u; // 800DD614
  c->lr=0x800DD61Cu; f_800D3B7C(c); // 800DD618
  c->r[3]=0u+0x00000000u; // 800DD61C
  c->lr=0x800DD624u; f_800D3F94(c); // 800DD620
  goto L_800DD660; // 800DD624
L_800DD628:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 800DD628
  c->r[4]=c->r[1]+0x00000010u; // 800DD62C
  c->r[3]=0u+0x00000000u; // 800DD630
  c->r[5]=0u+0x00000004u; // 800DD634
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 800DD638
  c->r[6]=0u+0x00000001u; // 800DD63C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DD640
  c->r[7]=0u+0x00000000u; // 800DD644
  c->lr=0x800DD64Cu; f_800D3B7C(c); // 800DD648
  c->r[3]=0u+0x00000000u; // 800DD64C
  c->lr=0x800DD654u; f_800D3F94(c); // 800DD650
  c->r[30]=c->r[30]+0x00000001u; // 800DD654
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 800DD658
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 800DD65C
L_800DD660:;
  cmps(c,0,(int32_t)c->r[27],0); // 800DD660
  if (!crb(c,1)) { goto L_800DD670; } // 800DD664
  cmps(c,0,(int32_t)c->r[31],0); // 800DD668
  if (!crb(c,2)) { IRQCHK(c); goto L_800DD628; } // 800DD66C
L_800DD670:;
  c->r[3]=0u+0x00000000u; // 800DD670
  c->lr=0x800DD678u; f_800D4714(c); // 800DD674
L_800DD678:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DD678
  if (!crb(c,2)) { IRQCHK(c); goto L_800DD550; } // 800DD67C
L_800DD680:;
  c->r[3]=0u+0x00000000u; // 800DD680
  c->lr=0x800DD688u; f_800D4E74(c); // 800DD684
  c->r[3]=c->r[26]|c->r[26]; // 800DD688
L_800DD68C:;
  c->r[11]=c->r[1]+0x00000030u; // 800DD68C
  c->lr=0x800DD694u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DD690
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DD694
  c->lr=c->r[0]; // 800DD698
  c->r[1]=c->r[1]+0x00000030u; // 800DD69C
  return; // 800DD6A0
}

// ISFS_OpenLib
void f_800DD6A4(Ctx* __restrict c) {
  trace_call(0x800DD6A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD6A4
  c->r[0]=c->lr; // 800DD6A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD6AC
  c->r[0]=R32(c->r[13]+0xFFFF8A34u); // 800DD6B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD6B4
  c->r[31]=0u+0x00000000u; // 800DD6B8
  cmps(c,0,(int32_t)c->r[0],0); // 800DD6BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD6C0
  if (crb(c,2)) { goto L_800DD6D8; } // 800DD6C4
  c->lr=0x800DD6CCu; f_800DEB0C(c); // 800DD6C8
  W32(c->r[13]+0xFFFFA548u,c->r[3]); // 800DD6CC
  c->lr=0x800DD6D4u; f_800DEB04(c); // 800DD6D0
  W32(c->r[13]+0xFFFFA54Cu,c->r[3]); // 800DD6D4
L_800DD6D8:;
  c->r[3]=R32(c->r[13]+0xFFFFA548u); // 800DD6D8
  c->r[0]=R32(c->r[13]+0xFFFF8A34u); // 800DD6DC
  c->r[3]=c->r[3]+0x0000001Fu; // 800DD6E0
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFE0u; // 800DD6E4
  cmps(c,0,(int32_t)c->r[0],0); // 800DD6E8
  W32(c->r[13]+0xFFFFA540u,c->r[3]); // 800DD6EC
  if (crb(c,2)) { goto L_800DD71C; } // 800DD6F0
  c->r[0]=R32(c->r[13]+0xFFFFA54Cu); // 800DD6F4
  c->r[4]=c->r[3]+0x00000040u; // 800DD6F8
  cmpu(c,0,c->r[4],c->r[0]); // 800DD6FC
  if (!crb(c,1)) { goto L_800DD71C; } // 800DD700
  c->r[3]=0u+0x80220000u; // 800DD704
  c->r[3]=c->r[3]+0xFFFFC808u; // 800DD708
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD70C
  c->lr=0x800DD714u; f_8009AC4C(c); // 800DD710
  c->r[31]=0u+0xFFFFFFEAu; // 800DD714
  goto L_800DD7B0; // 800DD718
L_800DD71C:;
  c->r[4]=c->r[13]+0xFFFF8A38u; // 800DD71C
  c->lr=0x800DD724u; f_800CB9F0(c); // 800DD720
  c->r[3]=R32(c->r[13]+0xFFFFA540u); // 800DD724
  c->r[4]=0u+0x00000000u; // 800DD728
  c->lr=0x800DD730u; f_800DF370(c); // 800DD72C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD730
  W32(c->r[13]+0xFFFF8A30u,c->r[3]); // 800DD734
  if (!crb(c,0)) { goto L_800DD744; } // 800DD738
  c->r[31]=c->r[3]|c->r[3]; // 800DD73C
  goto L_800DD7B0; // 800DD740
L_800DD744:;
  c->r[4]=R32(c->r[13]+0xFFFF8A34u); // 800DD744
  c->r[30]=R32(c->r[13]+0xFFFFA540u); // 800DD748
  cmps(c,0,(int32_t)c->r[4],0); // 800DD74C
  if (crb(c,2)) { goto L_800DD77C; } // 800DD750
  c->r[0]=R32(c->r[13]+0xFFFFA54Cu); // 800DD754
  c->r[3]=c->r[30]+0x00001540u; // 800DD758
  cmpu(c,0,c->r[3],c->r[0]); // 800DD75C
  if (!crb(c,1)) { goto L_800DD77C; } // 800DD760
  c->r[3]=0u+0x80220000u; // 800DD764
  c->r[3]=c->r[3]+0xFFFFC808u; // 800DD768
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800DD76C
  c->lr=0x800DD774u; f_8009AC4C(c); // 800DD770
  c->r[31]=0u+0xFFFFFFEAu; // 800DD774
  goto L_800DD7B0; // 800DD778
L_800DD77C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DD77C
  if (crb(c,2)) { goto L_800DD794; } // 800DD780
  c->r[3]=c->r[30]+0x00001540u; // 800DD784
  c->lr=0x800DD78Cu; f_800DEB14(c); // 800DD788
  c->r[0]=0u+0x00000000u; // 800DD78C
  W32(c->r[13]+0xFFFF8A34u,c->r[0]); // 800DD790
L_800DD794:;
  c->r[3]=c->r[30]|c->r[30]; // 800DD794
  c->r[4]=0u+0x00001540u; // 800DD798
  c->lr=0x800DD7A0u; f_800E021C(c); // 800DD79C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD7A0
  W32(c->r[13]+0xFFFFA550u,c->r[3]); // 800DD7A4
  if (!crb(c,0)) { goto L_800DD7B0; } // 800DD7A8
  c->r[31]=0u+0xFFFFFFEAu; // 800DD7AC
L_800DD7B0:;
  c->r[3]=c->r[31]|c->r[31]; // 800DD7B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD7B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD7B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD7BC
  c->lr=c->r[0]; // 800DD7C0
  c->r[1]=c->r[1]+0x00000010u; // 800DD7C4
  return; // 800DD7C8
}

// _isfsFuncCb
void f_800DD7CC(Ctx* __restrict c) {
  trace_call(0x800DD7CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD7CC
  c->r[0]=c->lr; // 800DD7D0
  cmps(c,1,(int32_t)c->r[3],0); // 800DD7D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD7D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD7DC
  c->r[31]=c->r[4]|c->r[4]; // 800DD7E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD7E4
  c->r[30]=c->r[3]|c->r[3]; // 800DD7E8
  if (crb(c,4)) { goto L_800DD8E0; } // 800DD7EC
  c->r[0]=R32(c->r[4]+0x00000108u); // 800DD7F0
  cmps(c,0,(int32_t)c->r[0],3); // 800DD7F4
  if (crb(c,2)) { goto L_800DD854; } // 800DD7F8
  if (!crb(c,0)) { goto L_800DD810; } // 800DD7FC
  cmps(c,0,(int32_t)c->r[0],1); // 800DD800
  if (crb(c,2)) { goto L_800DD81C; } // 800DD804
  if (!crb(c,0)) { goto L_800DD830; } // 800DD808
  goto L_800DD8E0; // 800DD80C
L_800DD810:;
  cmps(c,0,(int32_t)c->r[0],5); // 800DD810
  if (!crb(c,0)) { goto L_800DD8E0; } // 800DD814
  goto L_800DD8AC; // 800DD818
L_800DD81C:;
  if (!crb(c,6)) { goto L_800DD8E0; } // 800DD81C
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DD820
  c->r[5]=0u+0x0000001Cu; // 800DD824
  c->lr=0x800DD82Cu; f_80004338(c); // 800DD828
  goto L_800DD8E0; // 800DD82C
L_800DD830:;
  if (!crb(c,6)) { goto L_800DD8E0; } // 800DD830
  c->r[0]=c->r[4]+0x0000003Fu; // 800DD834
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DD838
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DD83C
  c->r[0]=c->r[4]+0x0000005Fu; // 800DD840
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DD844
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DD848
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DD84C
  goto L_800DD8E0; // 800DD850
L_800DD854:;
  if (!crb(c,6)) { goto L_800DD8E0; } // 800DD854
  c->r[0]=c->r[4]+0x0000005Fu; // 800DD858
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DD85C
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DD860
  c->r[0]=R32(c->r[5]+0x00000000u); // 800DD864
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DD868
  c->r[0]=R16(c->r[5]+0x00000004u); // 800DD86C
  c->r[3]=R32(c->r[4]+0x00000110u); // 800DD870
  W16(c->r[3]+0x00000000u,c->r[0]); // 800DD874
  c->r[0]=R8(c->r[5]+0x00000049u); // 800DD878
  c->r[3]=R32(c->r[4]+0x00000114u); // 800DD87C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DD880
  c->r[0]=R8(c->r[5]+0x00000046u); // 800DD884
  c->r[3]=R32(c->r[4]+0x00000118u); // 800DD888
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DD88C
  c->r[0]=R8(c->r[5]+0x00000047u); // 800DD890
  c->r[3]=R32(c->r[4]+0x0000011Cu); // 800DD894
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DD898
  c->r[0]=R8(c->r[5]+0x00000048u); // 800DD89C
  c->r[3]=R32(c->r[4]+0x00000120u); // 800DD8A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DD8A4
  goto L_800DD8E0; // 800DD8A8
L_800DD8AC:;
  if (!crb(c,6)) { goto L_800DD8E0; } // 800DD8AC
  c->r[0]=c->r[4]+0x0000003Fu; // 800DD8B0
  c->r[3]=R32(c->r[4]+0x0000010Cu); // 800DD8B4
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DD8B8
  c->r[0]=c->r[5]+0x0000005Fu; // 800DD8BC
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DD8C0
  c->r[5]=R32(c->r[6]+0x00000000u); // 800DD8C4
  c->r[0]=c->r[6]+0x00000023u; // 800DD8C8
  c->r[6]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DD8CC
  W32(c->r[3]+0x00000000u,c->r[5]); // 800DD8D0
  c->r[0]=R32(c->r[6]+0x00000000u); // 800DD8D4
  c->r[3]=R32(c->r[4]+0x00000110u); // 800DD8D8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800DD8DC
L_800DD8E0:;
  c->r[0]=0u+0x00000000u; // 800DD8E0
  W32(c->r[13]+0xFFFFA544u,c->r[0]); // 800DD8E4
  c->r[12]=R32(c->r[31]+0x00000100u); // 800DD8E8
  cmps(c,0,(int32_t)c->r[12],0); // 800DD8EC
  if (crb(c,2)) { goto L_800DD904; } // 800DD8F0
  c->r[3]=c->r[30]|c->r[30]; // 800DD8F4
  c->r[4]=R32(c->r[31]+0x00000104u); // 800DD8F8
  c->ctr=c->r[12]; // 800DD8FC
  if (true) { c->lr=0x800DD904u; dispatch(c,c->ctr); } // 800DD900
L_800DD904:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DD904
  if (crb(c,2)) { goto L_800DD918; } // 800DD908
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DD90C
  c->r[4]=c->r[31]|c->r[31]; // 800DD910
  c->lr=0x800DD918u; f_800E0554(c); // 800DD914
L_800DD918:;
  c->r[3]=c->r[30]|c->r[30]; // 800DD918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD91C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD920
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD924
  c->lr=c->r[0]; // 800DD928
  c->r[1]=c->r[1]+0x00000010u; // 800DD92C
  return; // 800DD930
}

// ISFS_CreateDir
void f_800DD934(Ctx* __restrict c) {
  trace_call(0x800DD934u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD934
  c->r[0]=c->lr; // 800DD938
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DD93C
  c->r[11]=c->r[1]+0x00000030u; // 800DD940
  c->lr=0x800DD948u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DD944
  cmps(c,0,(int32_t)c->r[3],0); // 800DD948
  c->r[25]=c->r[3]|c->r[3]; // 800DD94C
  c->r[26]=c->r[4]|c->r[4]; // 800DD950
  c->r[27]=c->r[5]|c->r[5]; // 800DD954
  c->r[28]=c->r[6]|c->r[6]; // 800DD958
  c->r[29]=c->r[7]|c->r[7]; // 800DD95C
  c->r[30]=0u+0x00000000u; // 800DD960
  if (crb(c,2)) { goto L_800DD988; } // 800DD964
  c->r[0]=R32(c->r[13]+0xFFFF8A30u); // 800DD968
  cmps(c,0,(int32_t)c->r[0],0); // 800DD96C
  if (crb(c,0)) { goto L_800DD988; } // 800DD970
  c->r[4]=0u+0x00000040u; // 800DD974
  c->lr=0x800DD97Cu; f_800DEB1C(c); // 800DD978
  cmpu(c,0,c->r[3],0x00000040u); // 800DD97C
  c->r[31]=c->r[3]|c->r[3]; // 800DD980
  if (!crb(c,2)) { goto L_800DD990; } // 800DD984
L_800DD988:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800DD988
  goto L_800DD9F4; // 800DD98C
L_800DD990:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DD990
  c->r[4]=0u+0x00000140u; // 800DD994
  c->r[5]=0u+0x00000020u; // 800DD998
  c->lr=0x800DD9A0u; f_800E0550(c); // 800DD99C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD9A0
  c->r[30]=c->r[3]|c->r[3]; // 800DD9A4
  if (!crb(c,2)) { goto L_800DD9B4; } // 800DD9A8
  c->r[31]=0u+0xFFFFFFEAu; // 800DD9AC
  goto L_800DD9F4; // 800DD9B0
L_800DD9B4:;
  c->r[4]=c->r[25]|c->r[25]; // 800DD9B4
  c->r[5]=c->r[31]+0x00000001u; // 800DD9B8
  c->r[3]=c->r[3]+0x00000006u; // 800DD9BC
  c->lr=0x800DD9C4u; f_80004338(c); // 800DD9C0
  W8(c->r[30]+0x00000049u,c->r[26]); // 800DD9C4
  c->r[5]=c->r[30]|c->r[30]; // 800DD9C8
  c->r[4]=0u+0x00000003u; // 800DD9CC
  c->r[6]=0u+0x0000004Cu; // 800DD9D0
  W8(c->r[30]+0x00000046u,c->r[27]); // 800DD9D4
  c->r[7]=0u+0x00000000u; // 800DD9D8
  c->r[8]=0u+0x00000000u; // 800DD9DC
  W8(c->r[30]+0x00000047u,c->r[28]); // 800DD9E0
  W8(c->r[30]+0x00000048u,c->r[29]); // 800DD9E4
  c->r[3]=R32(c->r[13]+0xFFFF8A30u); // 800DD9E8
  c->lr=0x800DD9F0u; f_800DFD08(c); // 800DD9EC
  c->r[31]=c->r[3]|c->r[3]; // 800DD9F0
L_800DD9F4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800DD9F4
  if (crb(c,2)) { goto L_800DDA0C; } // 800DD9F8
  if (crb(c,2)) { goto L_800DDA0C; } // 800DD9FC
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DDA00
  c->r[4]=c->r[30]|c->r[30]; // 800DDA04
  c->lr=0x800DDA0Cu; f_800E0554(c); // 800DDA08
L_800DDA0C:;
  c->r[11]=c->r[1]+0x00000030u; // 800DDA0C
  c->r[3]=c->r[31]|c->r[31]; // 800DDA10
  c->lr=0x800DDA18u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DDA14
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DDA18
  c->lr=c->r[0]; // 800DDA1C
  c->r[1]=c->r[1]+0x00000030u; // 800DDA20
  return; // 800DDA24
}

// ISFS_CreateDirAsync
void f_800DDA28(Ctx* __restrict c) {
  trace_call(0x800DDA28u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDA28
  c->r[0]=c->lr; // 800DDA2C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DDA30
  c->r[11]=c->r[1]+0x00000030u; // 800DDA34
  c->lr=0x800DDA3Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DDA38
  cmps(c,0,(int32_t)c->r[3],0); // 800DDA3C
  c->r[23]=c->r[3]|c->r[3]; // 800DDA40
  c->r[24]=c->r[4]|c->r[4]; // 800DDA44
  c->r[25]=c->r[5]|c->r[5]; // 800DDA48
  c->r[26]=c->r[6]|c->r[6]; // 800DDA4C
  c->r[27]=c->r[7]|c->r[7]; // 800DDA50
  c->r[28]=c->r[8]|c->r[8]; // 800DDA54
  c->r[29]=c->r[9]|c->r[9]; // 800DDA58
  if (crb(c,2)) { goto L_800DDA80; } // 800DDA5C
  c->r[0]=R32(c->r[13]+0xFFFF8A30u); // 800DDA60
  cmps(c,0,(int32_t)c->r[0],0); // 800DDA64
  if (crb(c,0)) { goto L_800DDA80; } // 800DDA68
  c->r[4]=0u+0x00000040u; // 800DDA6C
  c->lr=0x800DDA74u; f_800DEB1C(c); // 800DDA70
  cmpu(c,0,c->r[3],0x00000040u); // 800DDA74
  c->r[31]=c->r[3]|c->r[3]; // 800DDA78
  if (!crb(c,2)) { goto L_800DDA88; } // 800DDA7C
L_800DDA80:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800DDA80
  goto L_800DDB04; // 800DDA84
L_800DDA88:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DDA88
  c->r[4]=0u+0x00000140u; // 800DDA8C
  c->r[5]=0u+0x00000020u; // 800DDA90
  c->lr=0x800DDA98u; f_800E0550(c); // 800DDA94
  cmps(c,0,(int32_t)c->r[3],0); // 800DDA98
  c->r[30]=c->r[3]|c->r[3]; // 800DDA9C
  if (!crb(c,2)) { goto L_800DDAAC; } // 800DDAA0
  c->r[3]=0u+0xFFFFFF8Au; // 800DDAA4
  goto L_800DDB04; // 800DDAA8
L_800DDAAC:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 800DDAAC
  c->r[0]=0u+0x00000000u; // 800DDAB0
  c->r[4]=c->r[23]|c->r[23]; // 800DDAB4
  c->r[5]=c->r[31]+0x00000001u; // 800DDAB8
  W32(c->r[3]+0x00000104u,c->r[29]); // 800DDABC
  W32(c->r[3]+0x00000108u,c->r[0]); // 800DDAC0
  c->r[3]=c->r[3]+0x00000006u; // 800DDAC4
  c->lr=0x800DDACCu; f_80004338(c); // 800DDAC8
  W8(c->r[30]+0x00000049u,c->r[24]); // 800DDACC
  c->r[9]=0u+0x800E0000u; // 800DDAD0
  c->r[5]=c->r[30]|c->r[30]; // 800DDAD4
  c->r[10]=c->r[30]|c->r[30]; // 800DDAD8
  W8(c->r[30]+0x00000046u,c->r[25]); // 800DDADC
  c->r[9]=c->r[9]+0xFFFFD7CCu; // 800DDAE0
  c->r[4]=0u+0x00000003u; // 800DDAE4
  c->r[6]=0u+0x0000004Cu; // 800DDAE8
  W8(c->r[30]+0x00000047u,c->r[26]); // 800DDAEC
  c->r[7]=0u+0x00000000u; // 800DDAF0
  c->r[8]=0u+0x00000000u; // 800DDAF4
  W8(c->r[30]+0x00000048u,c->r[27]); // 800DDAF8
  c->r[3]=R32(c->r[13]+0xFFFF8A30u); // 800DDAFC
  c->lr=0x800DDB04u; f_800DFBD0(c); // 800DDB00
L_800DDB04:;
  c->r[11]=c->r[1]+0x00000030u; // 800DDB04
  c->lr=0x800DDB0Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DDB08
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DDB0C
  c->lr=c->r[0]; // 800DDB10
  c->r[1]=c->r[1]+0x00000030u; // 800DDB14
  return; // 800DDB18
}

// ISFS_ReadDir
void f_800DDB1C(Ctx* __restrict c) {
  trace_call(0x800DDB1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDB1C
  c->r[0]=c->lr; // 800DDB20
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DDB24
  c->r[11]=c->r[1]+0x00000020u; // 800DDB28
  c->lr=0x800DDB30u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DDB2C
  cmps(c,0,(int32_t)c->r[3],0); // 800DDB30
  c->r[26]=c->r[3]|c->r[3]; // 800DDB34
  c->r[27]=c->r[4]|c->r[4]; // 800DDB38
  c->r[28]=c->r[5]|c->r[5]; // 800DDB3C
  c->r[29]=0u+0x00000000u; // 800DDB40
  if (crb(c,2)) { goto L_800DDB78; } // 800DDB44
  cmps(c,0,(int32_t)c->r[5],0); // 800DDB48
  if (crb(c,2)) { goto L_800DDB78; } // 800DDB4C
  c->r[0]=R32(c->r[13]+0xFFFF8A30u); // 800DDB50
  cmps(c,0,(int32_t)c->r[0],0); // 800DDB54
  if (crb(c,0)) { goto L_800DDB78; } // 800DDB58
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DDB5C
  if (!crb(c,2)) { goto L_800DDB78; } // 800DDB60
  c->r[4]=0u+0x00000040u; // 800DDB64
  c->lr=0x800DDB6Cu; f_800DEB1C(c); // 800DDB68
  cmpu(c,0,c->r[3],0x00000040u); // 800DDB6C
  c->r[31]=c->r[3]|c->r[3]; // 800DDB70
  if (!crb(c,2)) { goto L_800DDB80; } // 800DDB74
L_800DDB78:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800DDB78
  goto L_800DDC3C; // 800DDB7C
L_800DDB80:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DDB80
  c->r[4]=0u+0x00000140u; // 800DDB84
  c->r[5]=0u+0x00000020u; // 800DDB88
  c->lr=0x800DDB90u; f_800E0550(c); // 800DDB8C
  cmps(c,0,(int32_t)c->r[3],0); // 800DDB90
  c->r[29]=c->r[3]|c->r[3]; // 800DDB94
  if (!crb(c,2)) { goto L_800DDBA4; } // 800DDB98
  c->r[31]=0u+0xFFFFFFEAu; // 800DDB9C
  goto L_800DDC3C; // 800DDBA0
L_800DDBA4:;
  c->r[0]=c->r[3]+0x0000003Fu; // 800DDBA4
  c->r[4]=c->r[26]|c->r[26]; // 800DDBA8
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DDBAC
  c->r[5]=c->r[31]+0x00000001u; // 800DDBB0
  c->r[3]=c->r[30]|c->r[30]; // 800DDBB4
  c->lr=0x800DDBBCu; f_80004338(c); // 800DDBB8
  W32(c->r[29]+0x00000000u,c->r[30]); // 800DDBBC
  c->r[3]=0u+0x00000040u; // 800DDBC0
  c->r[0]=c->r[30]+0x0000005Fu; // 800DDBC4
  cmps(c,0,(int32_t)c->r[27],0); // 800DDBC8
  W32(c->r[29]+0x00000004u,c->r[3]); // 800DDBCC
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DDBD0
  c->r[3]=0u+0x00000004u; // 800DDBD4
  W32(c->r[29]+0x00000008u,c->r[30]); // 800DDBD8
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 800DDBDC
  if (crb(c,2)) { goto L_800DDC10; } // 800DDBE0
  c->r[0]=R32(c->r[28]+0x00000000u); // 800DDBE4
  c->r[5]=0u+0x00000002u; // 800DDBE8
  c->r[6]=0u+0x00000002u; // 800DDBEC
  W32(c->r[30]+0x00000000u,c->r[0]); // 800DDBF0
  W32(c->r[29]+0x00000010u,c->r[27]); // 800DDBF4
  c->r[0]=R32(c->r[28]+0x00000000u); // 800DDBF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)13); // 800DDBFC
  W32(c->r[29]+0x00000014u,c->r[0]); // 800DDC00
  W32(c->r[29]+0x00000018u,c->r[30]); // 800DDC04
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 800DDC08
  goto L_800DDC18; // 800DDC0C
L_800DDC10:;
  c->r[5]=0u+0x00000001u; // 800DDC10
  c->r[6]=0u+0x00000001u; // 800DDC14
L_800DDC18:;
  c->r[3]=R32(c->r[13]+0xFFFF8A30u); // 800DDC18
  c->r[7]=c->r[29]|c->r[29]; // 800DDC1C
  c->r[4]=0u+0x00000004u; // 800DDC20
  c->lr=0x800DDC28u; f_800E0058(c); // 800DDC24
  cmps(c,0,(int32_t)c->r[3],0); // 800DDC28
  c->r[31]=c->r[3]|c->r[3]; // 800DDC2C
  if (!crb(c,2)) { goto L_800DDC3C; } // 800DDC30
  c->r[0]=R32(c->r[30]+0x00000000u); // 800DDC34
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DDC38
L_800DDC3C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800DDC3C
  if (crb(c,2)) { goto L_800DDC54; } // 800DDC40
  if (crb(c,2)) { goto L_800DDC54; } // 800DDC44
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DDC48
  c->r[4]=c->r[29]|c->r[29]; // 800DDC4C
  c->lr=0x800DDC54u; f_800E0554(c); // 800DDC50
L_800DDC54:;
  c->r[11]=c->r[1]+0x00000020u; // 800DDC54
  c->r[3]=c->r[31]|c->r[31]; // 800DDC58
  c->lr=0x800DDC60u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DDC5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DDC60
  c->lr=c->r[0]; // 800DDC64
  c->r[1]=c->r[1]+0x00000020u; // 800DDC68
  return; // 800DDC6C
}

// ISFS_ReadDirAsync
void f_800DDC70(Ctx* __restrict c) {
  trace_call(0x800DDC70u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDC70
  c->r[0]=c->lr; // 800DDC74
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DDC78
  c->r[11]=c->r[1]+0x00000030u; // 800DDC7C
  c->lr=0x800DDC84u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DDC80
  cmps(c,0,(int32_t)c->r[3],0); // 800DDC84
  c->r[25]=c->r[3]|c->r[3]; // 800DDC88
  c->r[26]=c->r[4]|c->r[4]; // 800DDC8C
  c->r[27]=c->r[5]|c->r[5]; // 800DDC90
  c->r[28]=c->r[6]|c->r[6]; // 800DDC94
  c->r[29]=c->r[7]|c->r[7]; // 800DDC98
  if (crb(c,2)) { goto L_800DDCD0; } // 800DDC9C
  cmps(c,0,(int32_t)c->r[5],0); // 800DDCA0
  if (crb(c,2)) { goto L_800DDCD0; } // 800DDCA4
  c->r[0]=R32(c->r[13]+0xFFFF8A30u); // 800DDCA8
  cmps(c,0,(int32_t)c->r[0],0); // 800DDCAC
  if (crb(c,0)) { goto L_800DDCD0; } // 800DDCB0
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DDCB4
  if (!crb(c,2)) { goto L_800DDCD0; } // 800DDCB8
  c->r[4]=0u+0x00000040u; // 800DDCBC
  c->lr=0x800DDCC4u; f_800DEB1C(c); // 800DDCC0
  cmpu(c,0,c->r[3],0x00000040u); // 800DDCC4
  c->r[31]=c->r[3]|c->r[3]; // 800DDCC8
  if (!crb(c,2)) { goto L_800DDCD8; } // 800DDCCC
L_800DDCD0:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800DDCD0
  goto L_800DDDA0; // 800DDCD4
L_800DDCD8:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DDCD8
  c->r[4]=0u+0x00000140u; // 800DDCDC
  c->r[5]=0u+0x00000020u; // 800DDCE0
  c->lr=0x800DDCE8u; f_800E0550(c); // 800DDCE4
  cmps(c,0,(int32_t)c->r[3],0); // 800DDCE8
  c->r[30]=c->r[3]|c->r[3]; // 800DDCEC
  if (!crb(c,2)) { goto L_800DDCFC; } // 800DDCF0
  c->r[3]=0u+0xFFFFFF8Au; // 800DDCF4
  goto L_800DDDA0; // 800DDCF8
L_800DDCFC:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 800DDCFC
  c->r[6]=0u+0x00000002u; // 800DDD00
  c->r[0]=c->r[3]+0x0000003Fu; // 800DDD04
  c->r[4]=c->r[25]|c->r[25]; // 800DDD08
  W32(c->r[3]+0x00000104u,c->r[29]); // 800DDD0C
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DDD10
  c->r[5]=c->r[31]+0x00000001u; // 800DDD14
  W32(c->r[3]+0x00000108u,c->r[6]); // 800DDD18
  W32(c->r[3]+0x0000010Cu,c->r[27]); // 800DDD1C
  c->r[3]=c->r[29]|c->r[29]; // 800DDD20
  c->lr=0x800DDD28u; f_80004338(c); // 800DDD24
  W32(c->r[30]+0x00000000u,c->r[29]); // 800DDD28
  c->r[3]=0u+0x00000040u; // 800DDD2C
  c->r[0]=c->r[29]+0x0000005Fu; // 800DDD30
  cmps(c,0,(int32_t)c->r[26],0); // 800DDD34
  W32(c->r[30]+0x00000004u,c->r[3]); // 800DDD38
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DDD3C
  c->r[3]=0u+0x00000004u; // 800DDD40
  W32(c->r[30]+0x00000008u,c->r[4]); // 800DDD44
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800DDD48
  if (crb(c,2)) { goto L_800DDD7C; } // 800DDD4C
  c->r[0]=R32(c->r[27]+0x00000000u); // 800DDD50
  c->r[5]=0u+0x00000002u; // 800DDD54
  c->r[6]=0u+0x00000002u; // 800DDD58
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DDD5C
  W32(c->r[30]+0x00000010u,c->r[26]); // 800DDD60
  c->r[0]=R32(c->r[27]+0x00000000u); // 800DDD64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)13); // 800DDD68
  W32(c->r[30]+0x00000014u,c->r[0]); // 800DDD6C
  W32(c->r[30]+0x00000018u,c->r[4]); // 800DDD70
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 800DDD74
  goto L_800DDD84; // 800DDD78
L_800DDD7C:;
  c->r[5]=0u+0x00000001u; // 800DDD7C
  c->r[6]=0u+0x00000001u; // 800DDD80
L_800DDD84:;
  c->r[8]=0u+0x800E0000u; // 800DDD84
  c->r[3]=R32(c->r[13]+0xFFFF8A30u); // 800DDD88
  c->r[7]=c->r[30]|c->r[30]; // 800DDD8C
  c->r[9]=c->r[30]|c->r[30]; // 800DDD90
  c->r[8]=c->r[8]+0xFFFFD7CCu; // 800DDD94
  c->r[4]=0u+0x00000004u; // 800DDD98
  c->lr=0x800DDDA0u; f_800DFF74(c); // 800DDD9C
L_800DDDA0:;
  c->r[11]=c->r[1]+0x00000030u; // 800DDDA0
  c->lr=0x800DDDA8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DDDA4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DDDA8
  c->lr=c->r[0]; // 800DDDAC
  c->r[1]=c->r[1]+0x00000030u; // 800DDDB0
  return; // 800DDDB4
}

// ISFS_GetAttr
void f_800DDDB8(Ctx* __restrict c) {
  trace_call(0x800DDDB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDDB8
  c->r[0]=c->lr; // 800DDDBC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DDDC0
  c->r[11]=c->r[1]+0x00000030u; // 800DDDC4
  c->lr=0x800DDDCCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DDDC8
  cmps(c,0,(int32_t)c->r[3],0); // 800DDDCC
  c->r[30]=c->r[3]|c->r[3]; // 800DDDD0
  c->r[23]=c->r[4]|c->r[4]; // 800DDDD4
  c->r[24]=c->r[5]|c->r[5]; // 800DDDD8
  c->r[25]=c->r[6]|c->r[6]; // 800DDDDC
  c->r[26]=c->r[7]|c->r[7]; // 800DDDE0
  c->r[27]=c->r[8]|c->r[8]; // 800DDDE4
  c->r[28]=c->r[9]|c->r[9]; // 800DDDE8
  c->r[29]=0u+0x00000000u; // 800DDDEC
  if (crb(c,2)) { goto L_800DDE44; } // 800DDDF0
  c->r[0]=R32(c->r[13]+0xFFFF8A30u); // 800DDDF4
  cmps(c,0,(int32_t)c->r[0],0); // 800DDDF8
  if (crb(c,0)) { goto L_800DDE44; } // 800DDDFC
  c->r[4]=0u+0x00000040u; // 800DDE00
  c->lr=0x800DDE08u; f_800DEB1C(c); // 800DDE04
  cmpu(c,0,c->r[3],0x00000040u); // 800DDE08
  c->r[31]=c->r[3]|c->r[3]; // 800DDE0C
  if (crb(c,2)) { goto L_800DDE44; } // 800DDE10
  cmps(c,0,(int32_t)c->r[23],0); // 800DDE14
  if (crb(c,2)) { goto L_800DDE44; } // 800DDE18
  cmps(c,0,(int32_t)c->r[24],0); // 800DDE1C
  if (crb(c,2)) { goto L_800DDE44; } // 800DDE20
  cmps(c,0,(int32_t)c->r[25],0); // 800DDE24
  if (crb(c,2)) { goto L_800DDE44; } // 800DDE28
  cmps(c,0,(int32_t)c->r[26],0); // 800DDE2C
  if (crb(c,2)) { goto L_800DDE44; } // 800DDE30
  cmps(c,0,(int32_t)c->r[27],0); // 800DDE34
  if (crb(c,2)) { goto L_800DDE44; } // 800DDE38
  cmps(c,0,(int32_t)c->r[28],0); // 800DDE3C
  if (!crb(c,2)) { goto L_800DDE4C; } // 800DDE40
L_800DDE44:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800DDE44
  goto L_800DDEDC; // 800DDE48
L_800DDE4C:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DDE4C
  c->r[4]=0u+0x00000140u; // 800DDE50
  c->r[5]=0u+0x00000020u; // 800DDE54
  c->lr=0x800DDE5Cu; f_800E0550(c); // 800DDE58
  cmps(c,0,(int32_t)c->r[3],0); // 800DDE5C
  c->r[29]=c->r[3]|c->r[3]; // 800DDE60
  if (!crb(c,2)) { goto L_800DDE70; } // 800DDE64
  c->r[31]=0u+0xFFFFFFEAu; // 800DDE68
  goto L_800DDEDC; // 800DDE6C
L_800DDE70:;
  c->r[4]=c->r[30]|c->r[30]; // 800DDE70
  c->r[5]=c->r[31]+0x00000001u; // 800DDE74
  c->lr=0x800DDE7Cu; f_80004338(c); // 800DDE78
  c->r[0]=c->r[29]+0x0000005Fu; // 800DDE7C
  c->r[3]=R32(c->r[13]+0xFFFF8A30u); // 800DDE80
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DDE84
  c->r[5]=c->r[29]|c->r[29]; // 800DDE88
  c->r[7]=c->r[30]|c->r[30]; // 800DDE8C
  c->r[4]=0u+0x00000006u; // 800DDE90
  c->r[6]=0u+0x00000040u; // 800DDE94
  c->r[8]=0u+0x0000004Cu; // 800DDE98
  c->lr=0x800DDEA0u; f_800DFD08(c); // 800DDE9C
  cmps(c,0,(int32_t)c->r[3],0); // 800DDEA0
  c->r[31]=c->r[3]|c->r[3]; // 800DDEA4
  if (!crb(c,2)) { goto L_800DDEDC; } // 800DDEA8
  c->r[0]=R32(c->r[30]+0x00000000u); // 800DDEAC
  W32(c->r[23]+0x00000000u,c->r[0]); // 800DDEB0
  c->r[0]=R16(c->r[30]+0x00000004u); // 800DDEB4
  W16(c->r[24]+0x00000000u,c->r[0]); // 800DDEB8
  c->r[0]=R8(c->r[30]+0x00000049u); // 800DDEBC
  W32(c->r[25]+0x00000000u,c->r[0]); // 800DDEC0
  c->r[0]=R8(c->r[30]+0x00000046u); // 800DDEC4
  W32(c->r[26]+0x00000000u,c->r[0]); // 800DDEC8
  c->r[0]=R8(c->r[30]+0x00000047u); // 800DDECC
  W32(c->r[27]+0x00000000u,c->r[0]); // 800DDED0
  c->r[0]=R8(c->r[30]+0x00000048u); // 800DDED4
  W32(c->r[28]+0x00000000u,c->r[0]); // 800DDED8
L_800DDEDC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800DDEDC
  if (crb(c,2)) { goto L_800DDEF4; } // 800DDEE0
  if (crb(c,2)) { goto L_800DDEF4; } // 800DDEE4
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DDEE8
  c->r[4]=c->r[29]|c->r[29]; // 800DDEEC
  c->lr=0x800DDEF4u; f_800E0554(c); // 800DDEF0
L_800DDEF4:;
  c->r[11]=c->r[1]+0x00000030u; // 800DDEF4
  c->r[3]=c->r[31]|c->r[31]; // 800DDEF8
  c->lr=0x800DDF00u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DDEFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DDF00
  c->lr=c->r[0]; // 800DDF04
  c->r[1]=c->r[1]+0x00000030u; // 800DDF08
  return; // 800DDF0C
}

// ISFS_GetAttrAsync
void f_800DDF10(Ctx* __restrict c) {
  trace_call(0x800DDF10u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDF10
  c->r[0]=c->lr; // 800DDF14
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DDF18
  c->r[11]=c->r[1]+0x00000040u; // 800DDF1C
  c->lr=0x800DDF24u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DDF20
  cmps(c,0,(int32_t)c->r[3],0); // 800DDF24
  c->r[29]=R32(c->r[1]+0x00000048u); // 800DDF28
  c->r[21]=c->r[3]|c->r[3]; // 800DDF2C
  c->r[22]=c->r[4]|c->r[4]; // 800DDF30
  c->r[23]=c->r[5]|c->r[5]; // 800DDF34
  c->r[24]=c->r[6]|c->r[6]; // 800DDF38
  c->r[25]=c->r[7]|c->r[7]; // 800DDF3C
  c->r[26]=c->r[8]|c->r[8]; // 800DDF40
  c->r[27]=c->r[9]|c->r[9]; // 800DDF44
  c->r[28]=c->r[10]|c->r[10]; // 800DDF48
  if (crb(c,2)) { goto L_800DDFA0; } // 800DDF4C
  c->r[0]=R32(c->r[13]+0xFFFF8A30u); // 800DDF50
  cmps(c,0,(int32_t)c->r[0],0); // 800DDF54
  if (crb(c,0)) { goto L_800DDFA0; } // 800DDF58
  c->r[4]=0u+0x00000040u; // 800DDF5C
  c->lr=0x800DDF64u; f_800DEB1C(c); // 800DDF60
  cmpu(c,0,c->r[3],0x00000040u); // 800DDF64
  c->r[31]=c->r[3]|c->r[3]; // 800DDF68
  if (crb(c,2)) { goto L_800DDFA0; } // 800DDF6C
  cmps(c,0,(int32_t)c->r[22],0); // 800DDF70
  if (crb(c,2)) { goto L_800DDFA0; } // 800DDF74
  cmps(c,0,(int32_t)c->r[23],0); // 800DDF78
  if (crb(c,2)) { goto L_800DDFA0; } // 800DDF7C
  cmps(c,0,(int32_t)c->r[24],0); // 800DDF80
  if (crb(c,2)) { goto L_800DDFA0; } // 800DDF84
  cmps(c,0,(int32_t)c->r[25],0); // 800DDF88
  if (crb(c,2)) { goto L_800DDFA0; } // 800DDF8C
  cmps(c,0,(int32_t)c->r[26],0); // 800DDF90
  if (crb(c,2)) { goto L_800DDFA0; } // 800DDF94
  cmps(c,0,(int32_t)c->r[27],0); // 800DDF98
  if (!crb(c,2)) { goto L_800DDFA8; } // 800DDF9C
L_800DDFA0:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800DDFA0
  goto L_800DE02C; // 800DDFA4
L_800DDFA8:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DDFA8
  c->r[4]=0u+0x00000140u; // 800DDFAC
  c->r[5]=0u+0x00000020u; // 800DDFB0
  c->lr=0x800DDFB8u; f_800E0550(c); // 800DDFB4
  cmps(c,0,(int32_t)c->r[3],0); // 800DDFB8
  c->r[30]=c->r[3]|c->r[3]; // 800DDFBC
  if (!crb(c,2)) { goto L_800DDFCC; } // 800DDFC0
  c->r[3]=0u+0xFFFFFF8Au; // 800DDFC4
  goto L_800DE02C; // 800DDFC8
L_800DDFCC:;
  W32(c->r[3]+0x0000010Cu,c->r[22]); // 800DDFCC
  c->r[0]=0u+0x00000003u; // 800DDFD0
  c->r[4]=c->r[21]|c->r[21]; // 800DDFD4
  c->r[5]=c->r[31]+0x00000001u; // 800DDFD8
  W32(c->r[3]+0x00000110u,c->r[23]); // 800DDFDC
  W32(c->r[3]+0x00000114u,c->r[24]); // 800DDFE0
  W32(c->r[3]+0x00000118u,c->r[25]); // 800DDFE4
  W32(c->r[3]+0x0000011Cu,c->r[26]); // 800DDFE8
  W32(c->r[3]+0x00000120u,c->r[27]); // 800DDFEC
  W32(c->r[3]+0x00000100u,c->r[28]); // 800DDFF0
  W32(c->r[3]+0x00000104u,c->r[29]); // 800DDFF4
  W32(c->r[3]+0x00000108u,c->r[0]); // 800DDFF8
  c->lr=0x800DE000u; f_80004338(c); // 800DDFFC
  c->r[0]=c->r[30]+0x0000005Fu; // 800DE000
  c->r[9]=0u+0x800E0000u; // 800DE004
  c->r[3]=R32(c->r[13]+0xFFFF8A30u); // 800DE008
  c->r[5]=c->r[30]|c->r[30]; // 800DE00C
  c->r[10]=c->r[30]|c->r[30]; // 800DE010
  c->r[7]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DE014
  c->r[9]=c->r[9]+0xFFFFD7CCu; // 800DE018
  c->r[4]=0u+0x00000006u; // 800DE01C
  c->r[6]=0u+0x00000040u; // 800DE020
  c->r[8]=0u+0x0000004Cu; // 800DE024
  c->lr=0x800DE02Cu; f_800DFBD0(c); // 800DE028
L_800DE02C:;
  c->r[11]=c->r[1]+0x00000040u; // 800DE02C
  c->lr=0x800DE034u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DE030
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DE034
  c->lr=c->r[0]; // 800DE038
  c->r[1]=c->r[1]+0x00000040u; // 800DE03C
  return; // 800DE040
}

// ISFS_Delete
void f_800DE044(Ctx* __restrict c) {
  trace_call(0x800DE044u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE044
  c->r[0]=c->lr; // 800DE048
  cmps(c,0,(int32_t)c->r[3],0); // 800DE04C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE050
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DE054
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DE058
  c->r[30]=0u+0x00000000u; // 800DE05C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DE060
  c->r[29]=c->r[3]|c->r[3]; // 800DE064
  if (crb(c,2)) { goto L_800DE08C; } // 800DE068
  c->r[0]=R32(c->r[13]+0xFFFF8A30u); // 800DE06C
  cmps(c,0,(int32_t)c->r[0],0); // 800DE070
  if (crb(c,0)) { goto L_800DE08C; } // 800DE074
  c->r[4]=0u+0x00000040u; // 800DE078
  c->lr=0x800DE080u; f_800DEB1C(c); // 800DE07C
  cmpu(c,0,c->r[3],0x00000040u); // 800DE080
  c->r[31]=c->r[3]|c->r[3]; // 800DE084
  if (!crb(c,2)) { goto L_800DE094; } // 800DE088
L_800DE08C:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800DE08C
  goto L_800DE0E4; // 800DE090
L_800DE094:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE094
  c->r[4]=0u+0x00000140u; // 800DE098
  c->r[5]=0u+0x00000020u; // 800DE09C
  c->lr=0x800DE0A4u; f_800E0550(c); // 800DE0A0
  cmps(c,0,(int32_t)c->r[3],0); // 800DE0A4
  c->r[30]=c->r[3]|c->r[3]; // 800DE0A8
  if (!crb(c,2)) { goto L_800DE0B8; } // 800DE0AC
  c->r[31]=0u+0xFFFFFFEAu; // 800DE0B0
  goto L_800DE0E4; // 800DE0B4
L_800DE0B8:;
  c->r[4]=c->r[29]|c->r[29]; // 800DE0B8
  c->r[5]=c->r[31]+0x00000001u; // 800DE0BC
  c->lr=0x800DE0C4u; f_80004338(c); // 800DE0C0
  c->r[3]=R32(c->r[13]+0xFFFF8A30u); // 800DE0C4
  c->r[5]=c->r[30]|c->r[30]; // 800DE0C8
  c->r[4]=0u+0x00000007u; // 800DE0CC
  c->r[6]=0u+0x00000040u; // 800DE0D0
  c->r[7]=0u+0x00000000u; // 800DE0D4
  c->r[8]=0u+0x00000000u; // 800DE0D8
  c->lr=0x800DE0E0u; f_800DFD08(c); // 800DE0DC
  c->r[31]=c->r[3]|c->r[3]; // 800DE0E0
L_800DE0E4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800DE0E4
  if (crb(c,2)) { goto L_800DE0FC; } // 800DE0E8
  if (crb(c,2)) { goto L_800DE0FC; } // 800DE0EC
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE0F0
  c->r[4]=c->r[30]|c->r[30]; // 800DE0F4
  c->lr=0x800DE0FCu; f_800E0554(c); // 800DE0F8
L_800DE0FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800DE0FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DE100
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DE104
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DE108
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DE10C
  c->lr=c->r[0]; // 800DE110
  c->r[1]=c->r[1]+0x00000020u; // 800DE114
  return; // 800DE118
}

// ISFS_DeleteAsync
void f_800DE11C(Ctx* __restrict c) {
  trace_call(0x800DE11Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE11C
  c->r[0]=c->lr; // 800DE120
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE124
  c->r[11]=c->r[1]+0x00000020u; // 800DE128
  c->lr=0x800DE130u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE12C
  cmps(c,0,(int32_t)c->r[3],0); // 800DE130
  c->r[27]=c->r[3]|c->r[3]; // 800DE134
  c->r[28]=c->r[4]|c->r[4]; // 800DE138
  c->r[29]=c->r[5]|c->r[5]; // 800DE13C
  if (crb(c,2)) { goto L_800DE164; } // 800DE140
  c->r[0]=R32(c->r[13]+0xFFFF8A30u); // 800DE144
  cmps(c,0,(int32_t)c->r[0],0); // 800DE148
  if (crb(c,0)) { goto L_800DE164; } // 800DE14C
  c->r[4]=0u+0x00000040u; // 800DE150
  c->lr=0x800DE158u; f_800DEB1C(c); // 800DE154
  cmpu(c,0,c->r[3],0x00000040u); // 800DE158
  c->r[31]=c->r[3]|c->r[3]; // 800DE15C
  if (!crb(c,2)) { goto L_800DE16C; } // 800DE160
L_800DE164:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800DE164
  goto L_800DE1D4; // 800DE168
L_800DE16C:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE16C
  c->r[4]=0u+0x00000140u; // 800DE170
  c->r[5]=0u+0x00000020u; // 800DE174
  c->lr=0x800DE17Cu; f_800E0550(c); // 800DE178
  cmps(c,0,(int32_t)c->r[3],0); // 800DE17C
  c->r[30]=c->r[3]|c->r[3]; // 800DE180
  if (!crb(c,2)) { goto L_800DE190; } // 800DE184
  c->r[3]=0u+0xFFFFFF8Au; // 800DE188
  goto L_800DE1D4; // 800DE18C
L_800DE190:;
  c->r[4]=c->r[27]|c->r[27]; // 800DE190
  c->r[5]=c->r[31]+0x00000001u; // 800DE194
  c->lr=0x800DE19Cu; f_80004338(c); // 800DE198
  W32(c->r[30]+0x00000100u,c->r[28]); // 800DE19C
  c->r[9]=0u+0x800E0000u; // 800DE1A0
  c->r[0]=0u+0x00000000u; // 800DE1A4
  c->r[5]=c->r[30]|c->r[30]; // 800DE1A8
  W32(c->r[30]+0x00000104u,c->r[29]); // 800DE1AC
  c->r[10]=c->r[30]|c->r[30]; // 800DE1B0
  c->r[9]=c->r[9]+0xFFFFD7CCu; // 800DE1B4
  c->r[4]=0u+0x00000007u; // 800DE1B8
  W32(c->r[30]+0x00000108u,c->r[0]); // 800DE1BC
  c->r[6]=0u+0x00000040u; // 800DE1C0
  c->r[7]=0u+0x00000000u; // 800DE1C4
  c->r[8]=0u+0x00000000u; // 800DE1C8
  c->r[3]=R32(c->r[13]+0xFFFF8A30u); // 800DE1CC
  c->lr=0x800DE1D4u; f_800DFBD0(c); // 800DE1D0
L_800DE1D4:;
  c->r[11]=c->r[1]+0x00000020u; // 800DE1D4
  c->lr=0x800DE1DCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DE1D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DE1DC
  c->lr=c->r[0]; // 800DE1E0
  c->r[1]=c->r[1]+0x00000020u; // 800DE1E4
  return; // 800DE1E8
}

// fn_800DE1EC
void f_800DE1EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE1EC
  c->r[0]=c->lr; // 800DE1F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DE1F4
  c->r[11]=c->r[1]+0x00000030u; // 800DE1F8
  c->lr=0x800DE200u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE1FC
  cmps(c,0,(int32_t)c->r[3],0); // 800DE200
  c->r[25]=c->r[3]|c->r[3]; // 800DE204
  c->r[26]=c->r[4]|c->r[4]; // 800DE208
  c->r[27]=c->r[5]|c->r[5]; // 800DE20C
  c->r[31]=c->r[6]|c->r[6]; // 800DE210
  c->r[28]=c->r[7]|c->r[7]; // 800DE214
  if (crb(c,2)) { goto L_800DE24C; } // 800DE218
  c->r[0]=R32(c->r[13]+0xFFFF8A30u); // 800DE21C
  cmps(c,0,(int32_t)c->r[0],0); // 800DE220
  if (crb(c,0)) { goto L_800DE24C; } // 800DE224
  cmps(c,0,(int32_t)c->r[4],0); // 800DE228
  if (crb(c,2)) { goto L_800DE24C; } // 800DE22C
  cmps(c,0,(int32_t)c->r[5],0); // 800DE230
  if (crb(c,2)) { goto L_800DE24C; } // 800DE234
  c->r[4]=0u+0x00000040u; // 800DE238
  c->lr=0x800DE240u; f_800DEB1C(c); // 800DE23C
  cmpu(c,0,c->r[3],0x00000040u); // 800DE240
  c->r[30]=c->r[3]|c->r[3]; // 800DE244
  if (!crb(c,2)) { goto L_800DE254; } // 800DE248
L_800DE24C:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800DE24C
  goto L_800DE2F8; // 800DE250
L_800DE254:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE254
  c->r[4]=0u+0x00000140u; // 800DE258
  c->r[5]=0u+0x00000020u; // 800DE25C
  c->lr=0x800DE264u; f_800E0550(c); // 800DE260
  cmps(c,0,(int32_t)c->r[3],0); // 800DE264
  c->r[29]=c->r[3]|c->r[3]; // 800DE268
  if (!crb(c,2)) { goto L_800DE278; } // 800DE26C
  c->r[3]=0u+0xFFFFFF8Au; // 800DE270
  goto L_800DE2F8; // 800DE274
L_800DE278:;
  W32(c->r[3]+0x00000100u,c->r[31]); // 800DE278
  c->r[31]=0u+0x00000004u; // 800DE27C
  c->r[0]=c->r[3]+0x00000037u; // 800DE280
  c->r[4]=c->r[25]|c->r[25]; // 800DE284
  W32(c->r[3]+0x00000104u,c->r[28]); // 800DE288
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DE28C
  c->r[5]=c->r[30]+0x00000001u; // 800DE290
  W32(c->r[3]+0x00000108u,c->r[31]); // 800DE294
  W32(c->r[3]+0x0000010Cu,c->r[26]); // 800DE298
  W32(c->r[3]+0x00000110u,c->r[27]); // 800DE29C
  c->r[3]=c->r[28]|c->r[28]; // 800DE2A0
  c->lr=0x800DE2A8u; f_80004338(c); // 800DE2A4
  W32(c->r[29]+0x00000000u,c->r[28]); // 800DE2A8
  c->r[3]=0u+0x00000040u; // 800DE2AC
  c->r[8]=0u+0x800E0000u; // 800DE2B0
  c->r[0]=c->r[28]+0x0000005Fu; // 800DE2B4
  W32(c->r[29]+0x00000004u,c->r[3]); // 800DE2B8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DE2BC
  c->r[0]=c->r[3]+0x00000023u; // 800DE2C0
  c->r[7]=c->r[29]|c->r[29]; // 800DE2C4
  W32(c->r[29]+0x00000008u,c->r[3]); // 800DE2C8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800DE2CC
  c->r[9]=c->r[29]|c->r[29]; // 800DE2D0
  c->r[8]=c->r[8]+0xFFFFD7CCu; // 800DE2D4
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 800DE2D8
  c->r[4]=0u+0x0000000Cu; // 800DE2DC
  c->r[5]=0u+0x00000001u; // 800DE2E0
  c->r[6]=0u+0x00000002u; // 800DE2E4
  W32(c->r[29]+0x00000010u,c->r[0]); // 800DE2E8
  W32(c->r[29]+0x00000014u,c->r[31]); // 800DE2EC
  c->r[3]=R32(c->r[13]+0xFFFF8A30u); // 800DE2F0
  c->lr=0x800DE2F8u; f_800DFF74(c); // 800DE2F4
L_800DE2F8:;
  c->r[11]=c->r[1]+0x00000030u; // 800DE2F8
  c->lr=0x800DE300u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DE2FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DE300
  c->lr=c->r[0]; // 800DE304
  c->r[1]=c->r[1]+0x00000030u; // 800DE308
  return; // 800DE30C
}

// fn_800DE310
void f_800DE310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE310
  c->r[0]=c->lr; // 800DE314
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DE318
  c->r[11]=c->r[1]+0x00000030u; // 800DE31C
  c->lr=0x800DE324u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE320
  cmps(c,0,(int32_t)c->r[3],0); // 800DE324
  c->r[25]=c->r[3]|c->r[3]; // 800DE328
  c->r[26]=c->r[4]|c->r[4]; // 800DE32C
  c->r[27]=c->r[5]|c->r[5]; // 800DE330
  c->r[28]=c->r[6]|c->r[6]; // 800DE334
  c->r[29]=c->r[7]|c->r[7]; // 800DE338
  c->r[30]=0u+0x00000000u; // 800DE33C
  if (crb(c,2)) { goto L_800DE364; } // 800DE340
  c->r[0]=R32(c->r[13]+0xFFFF8A30u); // 800DE344
  cmps(c,0,(int32_t)c->r[0],0); // 800DE348
  if (crb(c,0)) { goto L_800DE364; } // 800DE34C
  c->r[4]=0u+0x00000040u; // 800DE350
  c->lr=0x800DE358u; f_800DEB1C(c); // 800DE354
  cmpu(c,0,c->r[3],0x00000040u); // 800DE358
  c->r[31]=c->r[3]|c->r[3]; // 800DE35C
  if (!crb(c,2)) { goto L_800DE36C; } // 800DE360
L_800DE364:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800DE364
  goto L_800DE3D0; // 800DE368
L_800DE36C:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE36C
  c->r[4]=0u+0x00000140u; // 800DE370
  c->r[5]=0u+0x00000020u; // 800DE374
  c->lr=0x800DE37Cu; f_800E0550(c); // 800DE378
  cmps(c,0,(int32_t)c->r[3],0); // 800DE37C
  c->r[30]=c->r[3]|c->r[3]; // 800DE380
  if (!crb(c,2)) { goto L_800DE390; } // 800DE384
  c->r[31]=0u+0xFFFFFFEAu; // 800DE388
  goto L_800DE3D0; // 800DE38C
L_800DE390:;
  c->r[4]=c->r[25]|c->r[25]; // 800DE390
  c->r[5]=c->r[31]+0x00000001u; // 800DE394
  c->r[3]=c->r[3]+0x00000006u; // 800DE398
  c->lr=0x800DE3A0u; f_80004338(c); // 800DE39C
  W8(c->r[30]+0x00000049u,c->r[26]); // 800DE3A0
  c->r[5]=c->r[30]|c->r[30]; // 800DE3A4
  c->r[4]=0u+0x00000009u; // 800DE3A8
  c->r[6]=0u+0x0000004Cu; // 800DE3AC
  W8(c->r[30]+0x00000046u,c->r[27]); // 800DE3B0
  c->r[7]=0u+0x00000000u; // 800DE3B4
  c->r[8]=0u+0x00000000u; // 800DE3B8
  W8(c->r[30]+0x00000047u,c->r[28]); // 800DE3BC
  W8(c->r[30]+0x00000048u,c->r[29]); // 800DE3C0
  c->r[3]=R32(c->r[13]+0xFFFF8A30u); // 800DE3C4
  c->lr=0x800DE3CCu; f_800DFD08(c); // 800DE3C8
  c->r[31]=c->r[3]|c->r[3]; // 800DE3CC
L_800DE3D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800DE3D0
  if (crb(c,2)) { goto L_800DE3E8; } // 800DE3D4
  if (crb(c,2)) { goto L_800DE3E8; } // 800DE3D8
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE3DC
  c->r[4]=c->r[30]|c->r[30]; // 800DE3E0
  c->lr=0x800DE3E8u; f_800E0554(c); // 800DE3E4
L_800DE3E8:;
  c->r[11]=c->r[1]+0x00000030u; // 800DE3E8
  c->r[3]=c->r[31]|c->r[31]; // 800DE3EC
  c->lr=0x800DE3F4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DE3F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DE3F4
  c->lr=c->r[0]; // 800DE3F8
  c->r[1]=c->r[1]+0x00000030u; // 800DE3FC
  return; // 800DE400
}

// fn_800DE404
void f_800DE404(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE404
  c->r[0]=c->lr; // 800DE408
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DE40C
  c->r[11]=c->r[1]+0x00000030u; // 800DE410
  c->lr=0x800DE418u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE414
  cmps(c,0,(int32_t)c->r[3],0); // 800DE418
  c->r[23]=c->r[3]|c->r[3]; // 800DE41C
  c->r[24]=c->r[4]|c->r[4]; // 800DE420
  c->r[25]=c->r[5]|c->r[5]; // 800DE424
  c->r[26]=c->r[6]|c->r[6]; // 800DE428
  c->r[27]=c->r[7]|c->r[7]; // 800DE42C
  c->r[28]=c->r[8]|c->r[8]; // 800DE430
  c->r[29]=c->r[9]|c->r[9]; // 800DE434
  if (crb(c,2)) { goto L_800DE45C; } // 800DE438
  c->r[0]=R32(c->r[13]+0xFFFF8A30u); // 800DE43C
  cmps(c,0,(int32_t)c->r[0],0); // 800DE440
  if (crb(c,0)) { goto L_800DE45C; } // 800DE444
  c->r[4]=0u+0x00000040u; // 800DE448
  c->lr=0x800DE450u; f_800DEB1C(c); // 800DE44C
  cmpu(c,0,c->r[3],0x00000040u); // 800DE450
  c->r[31]=c->r[3]|c->r[3]; // 800DE454
  if (!crb(c,2)) { goto L_800DE464; } // 800DE458
L_800DE45C:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800DE45C
  goto L_800DE4E0; // 800DE460
L_800DE464:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE464
  c->r[4]=0u+0x00000140u; // 800DE468
  c->r[5]=0u+0x00000020u; // 800DE46C
  c->lr=0x800DE474u; f_800E0550(c); // 800DE470
  cmps(c,0,(int32_t)c->r[3],0); // 800DE474
  c->r[30]=c->r[3]|c->r[3]; // 800DE478
  if (!crb(c,2)) { goto L_800DE488; } // 800DE47C
  c->r[3]=0u+0xFFFFFF8Au; // 800DE480
  goto L_800DE4E0; // 800DE484
L_800DE488:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 800DE488
  c->r[0]=0u+0x00000000u; // 800DE48C
  c->r[4]=c->r[23]|c->r[23]; // 800DE490
  c->r[5]=c->r[31]+0x00000001u; // 800DE494
  W32(c->r[3]+0x00000104u,c->r[29]); // 800DE498
  W32(c->r[3]+0x00000108u,c->r[0]); // 800DE49C
  c->r[3]=c->r[3]+0x00000006u; // 800DE4A0
  c->lr=0x800DE4A8u; f_80004338(c); // 800DE4A4
  W8(c->r[30]+0x00000049u,c->r[24]); // 800DE4A8
  c->r[9]=0u+0x800E0000u; // 800DE4AC
  c->r[5]=c->r[30]|c->r[30]; // 800DE4B0
  c->r[10]=c->r[30]|c->r[30]; // 800DE4B4
  W8(c->r[30]+0x00000046u,c->r[25]); // 800DE4B8
  c->r[9]=c->r[9]+0xFFFFD7CCu; // 800DE4BC
  c->r[4]=0u+0x00000009u; // 800DE4C0
  c->r[6]=0u+0x0000004Cu; // 800DE4C4
  W8(c->r[30]+0x00000047u,c->r[26]); // 800DE4C8
  c->r[7]=0u+0x00000000u; // 800DE4CC
  c->r[8]=0u+0x00000000u; // 800DE4D0
  W8(c->r[30]+0x00000048u,c->r[27]); // 800DE4D4
  c->r[3]=R32(c->r[13]+0xFFFF8A30u); // 800DE4D8
  c->lr=0x800DE4E0u; f_800DFBD0(c); // 800DE4DC
L_800DE4E0:;
  c->r[11]=c->r[1]+0x00000030u; // 800DE4E0
  c->lr=0x800DE4E8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DE4E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DE4E8
  c->lr=c->r[0]; // 800DE4EC
  c->r[1]=c->r[1]+0x00000030u; // 800DE4F0
  return; // 800DE4F4
}

// ISFS_Open
void f_800DE4F8(Ctx* __restrict c) {
  trace_call(0x800DE4F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE4F8
  c->r[0]=c->lr; // 800DE4FC
  cmps(c,0,(int32_t)c->r[3],0); // 800DE500
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE504
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DE508
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DE50C
  c->r[30]=0u+0x00000000u; // 800DE510
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DE514
  c->r[29]=c->r[4]|c->r[4]; // 800DE518
  W32(c->r[1]+0x00000010u,c->r[28]); // 800DE51C
  c->r[28]=c->r[3]|c->r[3]; // 800DE520
  if (crb(c,2)) { goto L_800DE53C; } // 800DE524
  c->r[4]=0u+0x00000040u; // 800DE528
  c->lr=0x800DE530u; f_800DEB1C(c); // 800DE52C
  cmpu(c,0,c->r[3],0x00000040u); // 800DE530
  c->r[31]=c->r[3]|c->r[3]; // 800DE534
  if (!crb(c,2)) { goto L_800DE544; } // 800DE538
L_800DE53C:;
  c->r[31]=0u+0xFFFFFF9Bu; // 800DE53C
  goto L_800DE584; // 800DE540
L_800DE544:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE544
  c->r[4]=0u+0x00000140u; // 800DE548
  c->r[5]=0u+0x00000020u; // 800DE54C
  c->lr=0x800DE554u; f_800E0550(c); // 800DE550
  cmps(c,0,(int32_t)c->r[3],0); // 800DE554
  c->r[30]=c->r[3]|c->r[3]; // 800DE558
  if (!crb(c,2)) { goto L_800DE568; } // 800DE55C
  c->r[31]=0u+0xFFFFFFEAu; // 800DE560
  goto L_800DE584; // 800DE564
L_800DE568:;
  c->r[4]=c->r[28]|c->r[28]; // 800DE568
  c->r[5]=c->r[31]+0x00000001u; // 800DE56C
  c->lr=0x800DE574u; f_80004338(c); // 800DE570
  c->r[3]=c->r[30]|c->r[30]; // 800DE574
  c->r[4]=c->r[29]|c->r[29]; // 800DE578
  c->lr=0x800DE580u; f_800DF370(c); // 800DE57C
  c->r[31]=c->r[3]|c->r[3]; // 800DE580
L_800DE584:;
  cmps(c,0,(int32_t)c->r[30],0); // 800DE584
  if (crb(c,2)) { goto L_800DE59C; } // 800DE588
  if (crb(c,2)) { goto L_800DE59C; } // 800DE58C
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE590
  c->r[4]=c->r[30]|c->r[30]; // 800DE594
  c->lr=0x800DE59Cu; f_800E0554(c); // 800DE598
L_800DE59C:;
  c->r[3]=c->r[31]|c->r[31]; // 800DE59C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DE5A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DE5A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DE5A8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800DE5AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DE5B0
  c->lr=c->r[0]; // 800DE5B4
  c->r[1]=c->r[1]+0x00000020u; // 800DE5B8
  return; // 800DE5BC
}

// ISFS_OpenAsync
void f_800DE5C0(Ctx* __restrict c) {
  trace_call(0x800DE5C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE5C0
  c->r[0]=c->lr; // 800DE5C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE5C8
  c->r[11]=c->r[1]+0x00000020u; // 800DE5CC
  c->lr=0x800DE5D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE5D0
  cmps(c,0,(int32_t)c->r[3],0); // 800DE5D4
  c->r[26]=c->r[3]|c->r[3]; // 800DE5D8
  c->r[27]=c->r[4]|c->r[4]; // 800DE5DC
  c->r[28]=c->r[5]|c->r[5]; // 800DE5E0
  c->r[29]=c->r[6]|c->r[6]; // 800DE5E4
  if (crb(c,2)) { goto L_800DE600; } // 800DE5E8
  c->r[4]=0u+0x00000040u; // 800DE5EC
  c->lr=0x800DE5F4u; f_800DEB1C(c); // 800DE5F0
  cmpu(c,0,c->r[3],0x00000040u); // 800DE5F4
  c->r[31]=c->r[3]|c->r[3]; // 800DE5F8
  if (!crb(c,2)) { goto L_800DE608; } // 800DE5FC
L_800DE600:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800DE600
  goto L_800DE660; // 800DE604
L_800DE608:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE608
  c->r[4]=0u+0x00000140u; // 800DE60C
  c->r[5]=0u+0x00000020u; // 800DE610
  c->lr=0x800DE618u; f_800E0550(c); // 800DE614
  cmps(c,0,(int32_t)c->r[3],0); // 800DE618
  c->r[30]=c->r[3]|c->r[3]; // 800DE61C
  if (!crb(c,2)) { goto L_800DE62C; } // 800DE620
  c->r[3]=0u+0xFFFFFF8Au; // 800DE624
  goto L_800DE660; // 800DE628
L_800DE62C:;
  W32(c->r[3]+0x00000100u,c->r[28]); // 800DE62C
  c->r[0]=0u+0x00000000u; // 800DE630
  c->r[4]=c->r[26]|c->r[26]; // 800DE634
  c->r[5]=c->r[31]+0x00000001u; // 800DE638
  W32(c->r[3]+0x00000104u,c->r[29]); // 800DE63C
  W32(c->r[3]+0x00000108u,c->r[0]); // 800DE640
  c->lr=0x800DE648u; f_80004338(c); // 800DE644
  c->r[5]=0u+0x800E0000u; // 800DE648
  c->r[3]=c->r[30]|c->r[30]; // 800DE64C
  c->r[4]=c->r[27]|c->r[27]; // 800DE650
  c->r[6]=c->r[30]|c->r[30]; // 800DE654
  c->r[5]=c->r[5]+0xFFFFD7CCu; // 800DE658
  c->lr=0x800DE660u; f_800DF258(c); // 800DE65C
L_800DE660:;
  c->r[11]=c->r[1]+0x00000020u; // 800DE660
  c->lr=0x800DE668u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DE664
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DE668
  c->lr=c->r[0]; // 800DE66C
  c->r[1]=c->r[1]+0x00000020u; // 800DE670
  return; // 800DE674
}

// fn_800DE678
void f_800DE678(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800DE678
  if (crb(c,2)) { goto L_800DE688; } // 800DE67C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DE680
  if (crb(c,2)) { goto L_800DE690; } // 800DE684
L_800DE688:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800DE688
  return; // 800DE68C
L_800DE690:;
  c->r[7]=c->r[4]|c->r[4]; // 800DE690
  c->r[4]=0u+0x0000000Bu; // 800DE694
  c->r[5]=0u+0x00000000u; // 800DE698
  c->r[6]=0u+0x00000000u; // 800DE69C
  c->r[8]=0u+0x00000008u; // 800DE6A0
  f_800DFD08(c); return; // 800DE6A4
  return; // 800DE6A8
}

// fn_800DE6AC
void f_800DE6AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE6AC
  c->r[0]=c->lr; // 800DE6B0
  cmps(c,0,(int32_t)c->r[4],0); // 800DE6B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE6B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DE6BC
  c->r[31]=c->r[6]|c->r[6]; // 800DE6C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DE6C4
  c->r[30]=c->r[5]|c->r[5]; // 800DE6C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DE6CC
  c->r[29]=c->r[4]|c->r[4]; // 800DE6D0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800DE6D4
  c->r[28]=c->r[3]|c->r[3]; // 800DE6D8
  if (crb(c,2)) { goto L_800DE6E8; } // 800DE6DC
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DE6E0
  if (crb(c,2)) { goto L_800DE6F0; } // 800DE6E4
L_800DE6E8:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800DE6E8
  goto L_800DE748; // 800DE6EC
L_800DE6F0:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE6F0
  c->r[4]=0u+0x00000140u; // 800DE6F4
  c->r[5]=0u+0x00000020u; // 800DE6F8
  c->lr=0x800DE700u; f_800E0550(c); // 800DE6FC
  cmps(c,0,(int32_t)c->r[3],0); // 800DE700
  if (!crb(c,2)) { goto L_800DE710; } // 800DE704
  c->r[3]=0u+0xFFFFFF8Au; // 800DE708
  goto L_800DE748; // 800DE70C
L_800DE710:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800DE710
  c->r[9]=0u+0x800E0000u; // 800DE714
  c->r[0]=0u+0x00000000u; // 800DE718
  c->r[7]=c->r[29]|c->r[29]; // 800DE71C
  W32(c->r[3]+0x00000104u,c->r[31]); // 800DE720
  c->r[10]=c->r[3]|c->r[3]; // 800DE724
  c->r[9]=c->r[9]+0xFFFFD7CCu; // 800DE728
  c->r[4]=0u+0x0000000Bu; // 800DE72C
  W32(c->r[3]+0x00000108u,c->r[0]); // 800DE730
  c->r[3]=c->r[28]|c->r[28]; // 800DE734
  c->r[5]=0u+0x00000000u; // 800DE738
  c->r[6]=0u+0x00000000u; // 800DE73C
  c->r[8]=0u+0x00000008u; // 800DE740
  c->lr=0x800DE748u; f_800DFBD0(c); // 800DE744
L_800DE748:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DE748
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DE74C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DE750
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DE754
  c->r[28]=R32(c->r[1]+0x00000010u); // 800DE758
  c->lr=c->r[0]; // 800DE75C
  c->r[1]=c->r[1]+0x00000020u; // 800DE760
  return; // 800DE764
}

// fn_800DE768
void f_800DE768(Ctx* __restrict c) {
  f_800DFAE8(c); return; // 800DE768
}

// fn_800DE76C
void f_800DE76C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE76C
  c->r[0]=c->lr; // 800DE770
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE774
  c->r[11]=c->r[1]+0x00000020u; // 800DE778
  c->lr=0x800DE780u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE77C
  c->r[27]=c->r[3]|c->r[3]; // 800DE780
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE784
  c->r[28]=c->r[4]|c->r[4]; // 800DE788
  c->r[29]=c->r[5]|c->r[5]; // 800DE78C
  c->r[30]=c->r[6]|c->r[6]; // 800DE790
  c->r[31]=c->r[7]|c->r[7]; // 800DE794
  c->r[4]=0u+0x00000140u; // 800DE798
  c->r[5]=0u+0x00000020u; // 800DE79C
  c->lr=0x800DE7A4u; f_800E0550(c); // 800DE7A0
  cmps(c,0,(int32_t)c->r[3],0); // 800DE7A4
  if (!crb(c,2)) { goto L_800DE7B4; } // 800DE7A8
  c->r[3]=0u+0xFFFFFF8Au; // 800DE7AC
  goto L_800DE7E0; // 800DE7B0
L_800DE7B4:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800DE7B4
  c->r[6]=0u+0x800E0000u; // 800DE7B8
  c->r[0]=0u+0x00000000u; // 800DE7BC
  c->r[4]=c->r[28]|c->r[28]; // 800DE7C0
  W32(c->r[3]+0x00000104u,c->r[31]); // 800DE7C4
  c->r[5]=c->r[29]|c->r[29]; // 800DE7C8
  c->r[7]=c->r[3]|c->r[3]; // 800DE7CC
  c->r[6]=c->r[6]+0xFFFFD7CCu; // 800DE7D0
  W32(c->r[3]+0x00000108u,c->r[0]); // 800DE7D4
  c->r[3]=c->r[27]|c->r[27]; // 800DE7D8
  c->lr=0x800DE7E0u; f_800DFA08(c); // 800DE7DC
L_800DE7E0:;
  c->r[11]=c->r[1]+0x00000020u; // 800DE7E0
  c->lr=0x800DE7E8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DE7E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DE7E8
  c->lr=c->r[0]; // 800DE7EC
  c->r[1]=c->r[1]+0x00000020u; // 800DE7F0
  return; // 800DE7F4
}

// fn_800DE7F8
void f_800DE7F8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800DE7F8
  if (crb(c,2)) { goto L_800DE808; } // 800DE7FC
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DE800
  if (crb(c,2)) { goto L_800DE810; } // 800DE804
L_800DE808:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800DE808
  return; // 800DE80C
L_800DE810:;
  f_800DF6F8(c); return; // 800DE810
  return; // 800DE814
}

// fn_800DE818
void f_800DE818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE818
  c->r[0]=c->lr; // 800DE81C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE820
  c->r[11]=c->r[1]+0x00000020u; // 800DE824
  c->lr=0x800DE82Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE828
  cmps(c,0,(int32_t)c->r[4],0); // 800DE82C
  c->r[27]=c->r[3]|c->r[3]; // 800DE830
  c->r[28]=c->r[4]|c->r[4]; // 800DE834
  c->r[29]=c->r[5]|c->r[5]; // 800DE838
  c->r[30]=c->r[6]|c->r[6]; // 800DE83C
  c->r[31]=c->r[7]|c->r[7]; // 800DE840
  if (crb(c,2)) { goto L_800DE850; } // 800DE844
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DE848
  if (crb(c,2)) { goto L_800DE858; } // 800DE84C
L_800DE850:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800DE850
  goto L_800DE8A4; // 800DE854
L_800DE858:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE858
  c->r[4]=0u+0x00000140u; // 800DE85C
  c->r[5]=0u+0x00000020u; // 800DE860
  c->lr=0x800DE868u; f_800E0550(c); // 800DE864
  cmps(c,0,(int32_t)c->r[3],0); // 800DE868
  if (!crb(c,2)) { goto L_800DE878; } // 800DE86C
  c->r[3]=0u+0xFFFFFF8Au; // 800DE870
  goto L_800DE8A4; // 800DE874
L_800DE878:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800DE878
  c->r[6]=0u+0x800E0000u; // 800DE87C
  c->r[0]=0u+0x00000000u; // 800DE880
  c->r[4]=c->r[28]|c->r[28]; // 800DE884
  W32(c->r[3]+0x00000104u,c->r[31]); // 800DE888
  c->r[5]=c->r[29]|c->r[29]; // 800DE88C
  c->r[7]=c->r[3]|c->r[3]; // 800DE890
  c->r[6]=c->r[6]+0xFFFFD7CCu; // 800DE894
  W32(c->r[3]+0x00000108u,c->r[0]); // 800DE898
  c->r[3]=c->r[27]|c->r[27]; // 800DE89C
  c->lr=0x800DE8A4u; f_800DF5F8(c); // 800DE8A0
L_800DE8A4:;
  c->r[11]=c->r[1]+0x00000020u; // 800DE8A4
  c->lr=0x800DE8ACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DE8A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DE8AC
  c->lr=c->r[0]; // 800DE8B0
  c->r[1]=c->r[1]+0x00000020u; // 800DE8B4
  return; // 800DE8B8
}

// fn_800DE8BC
void f_800DE8BC(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800DE8BC
  if (crb(c,2)) { goto L_800DE8CC; } // 800DE8C0
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DE8C4
  if (crb(c,2)) { goto L_800DE8D4; } // 800DE8C8
L_800DE8CC:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800DE8CC
  return; // 800DE8D0
L_800DE8D4:;
  f_800DF900(c); return; // 800DE8D4
  return; // 800DE8D8
}

// fn_800DE8DC
void f_800DE8DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE8DC
  c->r[0]=c->lr; // 800DE8E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE8E4
  c->r[11]=c->r[1]+0x00000020u; // 800DE8E8
  c->lr=0x800DE8F0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE8EC
  cmps(c,0,(int32_t)c->r[4],0); // 800DE8F0
  c->r[27]=c->r[3]|c->r[3]; // 800DE8F4
  c->r[28]=c->r[4]|c->r[4]; // 800DE8F8
  c->r[29]=c->r[5]|c->r[5]; // 800DE8FC
  c->r[30]=c->r[6]|c->r[6]; // 800DE900
  c->r[31]=c->r[7]|c->r[7]; // 800DE904
  if (crb(c,2)) { goto L_800DE914; } // 800DE908
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 800DE90C
  if (crb(c,2)) { goto L_800DE91C; } // 800DE910
L_800DE914:;
  c->r[3]=0u+0xFFFFFF9Bu; // 800DE914
  goto L_800DE968; // 800DE918
L_800DE91C:;
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE91C
  c->r[4]=0u+0x00000140u; // 800DE920
  c->r[5]=0u+0x00000020u; // 800DE924
  c->lr=0x800DE92Cu; f_800E0550(c); // 800DE928
  cmps(c,0,(int32_t)c->r[3],0); // 800DE92C
  if (!crb(c,2)) { goto L_800DE93C; } // 800DE930
  c->r[3]=0u+0xFFFFFF8Au; // 800DE934
  goto L_800DE968; // 800DE938
L_800DE93C:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800DE93C
  c->r[6]=0u+0x800E0000u; // 800DE940
  c->r[0]=0u+0x00000000u; // 800DE944
  c->r[4]=c->r[28]|c->r[28]; // 800DE948
  W32(c->r[3]+0x00000104u,c->r[31]); // 800DE94C
  c->r[5]=c->r[29]|c->r[29]; // 800DE950
  c->r[7]=c->r[3]|c->r[3]; // 800DE954
  c->r[6]=c->r[6]+0xFFFFD7CCu; // 800DE958
  W32(c->r[3]+0x00000108u,c->r[0]); // 800DE95C
  c->r[3]=c->r[27]|c->r[27]; // 800DE960
  c->lr=0x800DE968u; f_800DF800(c); // 800DE964
L_800DE968:;
  c->r[11]=c->r[1]+0x00000020u; // 800DE968
  c->lr=0x800DE970u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DE96C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DE970
  c->lr=c->r[0]; // 800DE974
  c->r[1]=c->r[1]+0x00000020u; // 800DE978
  return; // 800DE97C
}

// fn_800DE980
void f_800DE980(Ctx* __restrict c) {
  f_800DF550(c); return; // 800DE980
}

// fn_800DE984
void f_800DE984(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE984
  c->r[0]=c->lr; // 800DE988
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DE98C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DE990
  c->r[31]=c->r[5]|c->r[5]; // 800DE994
  c->r[5]=0u+0x00000020u; // 800DE998
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DE99C
  c->r[30]=c->r[4]|c->r[4]; // 800DE9A0
  c->r[4]=0u+0x00000140u; // 800DE9A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DE9A8
  c->r[29]=c->r[3]|c->r[3]; // 800DE9AC
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DE9B0
  c->lr=0x800DE9B8u; f_800E0550(c); // 800DE9B4
  cmps(c,0,(int32_t)c->r[3],0); // 800DE9B8
  if (!crb(c,2)) { goto L_800DE9C8; } // 800DE9BC
  c->r[3]=0u+0xFFFFFF8Au; // 800DE9C0
  goto L_800DE9EC; // 800DE9C4
L_800DE9C8:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800DE9C8
  c->r[4]=0u+0x800E0000u; // 800DE9CC
  c->r[0]=0u+0x00000000u; // 800DE9D0
  c->r[5]=c->r[3]|c->r[3]; // 800DE9D4
  W32(c->r[3]+0x00000104u,c->r[31]); // 800DE9D8
  c->r[4]=c->r[4]+0xFFFFD7CCu; // 800DE9DC
  W32(c->r[3]+0x00000108u,c->r[0]); // 800DE9E0
  c->r[3]=c->r[29]|c->r[29]; // 800DE9E4
  c->lr=0x800DE9ECu; f_800DF490(c); // 800DE9E8
L_800DE9EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DE9EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DE9F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DE9F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DE9F8
  c->lr=c->r[0]; // 800DE9FC
  c->r[1]=c->r[1]+0x00000020u; // 800DEA00
  return; // 800DEA04
}

// fn_800DEA08
void f_800DEA08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEA08
  c->r[0]=c->lr; // 800DEA0C
  c->r[5]=0u+0x00000020u; // 800DEA10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEA14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEA18
  c->r[31]=c->r[4]|c->r[4]; // 800DEA1C
  c->r[4]=0u+0x00000140u; // 800DEA20
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DEA24
  c->r[30]=c->r[3]|c->r[3]; // 800DEA28
  c->r[3]=R32(c->r[13]+0xFFFFA550u); // 800DEA2C
  c->lr=0x800DEA34u; f_800E0550(c); // 800DEA30
  c->r[0]=R32(c->r[13]+0xFFFF8A30u); // 800DEA34
  cmps(c,0,(int32_t)c->r[0],0); // 800DEA38
  if (!crb(c,0)) { goto L_800DEA48; } // 800DEA3C
  c->r[3]=0u+0xFFFFFF9Bu; // 800DEA40
  goto L_800DEA80; // 800DEA44
L_800DEA48:;
  W32(c->r[3]+0x00000100u,c->r[30]); // 800DEA48
  c->r[9]=0u+0x800E0000u; // 800DEA4C
  c->r[0]=0u+0x00000000u; // 800DEA50
  c->r[10]=c->r[3]|c->r[3]; // 800DEA54
  W32(c->r[3]+0x00000104u,c->r[31]); // 800DEA58
  c->r[9]=c->r[9]+0xFFFFD7CCu; // 800DEA5C
  c->r[4]=0u+0x0000000Du; // 800DEA60
  c->r[5]=0u+0x00000000u; // 800DEA64
  W32(c->r[3]+0x00000108u,c->r[0]); // 800DEA68
  c->r[6]=0u+0x00000000u; // 800DEA6C
  c->r[7]=0u+0x00000000u; // 800DEA70
  c->r[8]=0u+0x00000000u; // 800DEA74
  c->r[3]=R32(c->r[13]+0xFFFF8A30u); // 800DEA78
  c->lr=0x800DEA80u; f_800DFBD0(c); // 800DEA7C
L_800DEA80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEA80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEA84
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DEA88
  c->lr=c->r[0]; // 800DEA8C
  c->r[1]=c->r[1]+0x00000010u; // 800DEA90
  return; // 800DEA94
}

// IPCInit
void f_800DEA98(Ctx* __restrict c) {
  trace_call(0x800DEA98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEA98
  c->r[0]=c->lr; // 800DEA9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEAA0
  c->r[0]=R8(c->r[13]+0xFFFFA558u); // 800DEAA4
  cmps(c,0,(int32_t)c->r[0],0); // 800DEAA8
  if (!crb(c,2)) { goto L_800DEAD4; } // 800DEAAC
  c->lr=0x800DEAB4u; f_800A2660(c); // 800DEAB0
  W32(c->r[13]+0xFFFFA568u,c->r[3]); // 800DEAB4
  c->lr=0x800DEABCu; f_800A2668(c); // 800DEAB8
  c->r[4]=R32(c->r[13]+0xFFFFA568u); // 800DEABC
  c->r[0]=0u+0x00000001u; // 800DEAC0
  W32(c->r[13]+0xFFFFA564u,c->r[3]); // 800DEAC4
  W32(c->r[13]+0xFFFFA560u,c->r[4]); // 800DEAC8
  W32(c->r[13]+0xFFFFA55Cu,c->r[3]); // 800DEACC
  W8(c->r[13]+0xFFFFA558u,c->r[0]); // 800DEAD0
L_800DEAD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEAD4
  c->lr=c->r[0]; // 800DEAD8
  c->r[1]=c->r[1]+0x00000010u; // 800DEADC
  return; // 800DEAE0
}

// IPCReadReg
void f_800DEAE4(Ctx* __restrict c) {
  trace_call(0x800DEAE4u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DEAE4
  c->r[3]=0u+0xCD000000u; // 800DEAE8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800DEAEC
  return; // 800DEAF0
}

// IPCWriteReg
void f_800DEAF4(Ctx* __restrict c) {
  trace_call(0x800DEAF4u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800DEAF4
  c->r[3]=0u+0xCD000000u; // 800DEAF8
  W32(c->r[3]+c->r[0],c->r[4]); // 800DEAFC
  return; // 800DEB00
}

// IPCGetBufferHi
void f_800DEB04(Ctx* __restrict c) {
  trace_call(0x800DEB04u);
  c->r[3]=R32(c->r[13]+0xFFFFA560u); // 800DEB04
  return; // 800DEB08
}

// IPCGetBufferLo
void f_800DEB0C(Ctx* __restrict c) {
  trace_call(0x800DEB0Cu);
  c->r[3]=R32(c->r[13]+0xFFFFA55Cu); // 800DEB0C
  return; // 800DEB10
}

// IPCSetBufferLo
void f_800DEB14(Ctx* __restrict c) {
  trace_call(0x800DEB14u);
  W32(c->r[13]+0xFFFFA55Cu,c->r[3]); // 800DEB14
  return; // 800DEB18
}

// strnlen
void f_800DEB1C(Ctx* __restrict c) {
  trace_call(0x800DEB1Cu);
  c->r[5]=c->r[3]|c->r[3]; // 800DEB1C
  goto L_800DEB28; // 800DEB20
L_800DEB24:;
  c->r[5]=c->r[5]+0x00000001u; // 800DEB24
L_800DEB28:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 800DEB28
  cmps(c,0,(int32_t)c->r[0],0); // 800DEB2C
  if (crb(c,2)) { goto L_800DEB40; } // 800DEB30
  cmps(c,0,(int32_t)c->r[4],0); // 800DEB34
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800DEB38
  if (!crb(c,2)) { IRQCHK(c); goto L_800DEB24; } // 800DEB3C
L_800DEB40:;
  c->r[3]=c->r[5]-c->r[3]; // 800DEB40
  return; // 800DEB44
}

// IpcReplyHandler
void f_800DEB48(Ctx* __restrict c) {
  trace_call(0x800DEB48u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEB48
  c->r[0]=c->lr; // 800DEB4C
  c->r[3]=0u+0x00000002u; // 800DEB50
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800DEB54
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800DEB58
  W32(c->r[1]+0x000002D8u,c->r[30]); // 800DEB5C
  c->r[30]=c->r[4]|c->r[4]; // 800DEB60
  W32(c->r[1]+0x000002D4u,c->r[29]); // 800DEB64
  W32(c->r[1]+0x000002D0u,c->r[28]); // 800DEB68
  c->lr=0x800DEB70u; f_800DEAE4(c); // 800DEB6C
  cmps(c,0,(int32_t)c->r[3],0); // 800DEB70
  if (crb(c,2)) { goto L_800DED80; } // 800DEB74
  c->r[31]=c->r[3]+0x80000000u; // 800DEB78
  c->r[3]=0u+0x00000001u; // 800DEB7C
  c->lr=0x800DEB84u; f_800DEAE4(c); // 800DEB80
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 800DEB84
  c->r[3]=0u+0x00000001u; // 800DEB88
  c->r[4]=c->r[0]|0x00000004u; // 800DEB8C
  c->lr=0x800DEB94u; f_800DEAF4(c); // 800DEB90
  c->r[0]=0u+0x40000000u; // 800DEB94
  c->r[3]=0u+0xCD000000u; // 800DEB98
  W32(c->r[3]+0x00000030u,c->r[0]); // 800DEB9C
  c->r[3]=c->r[31]|c->r[31]; // 800DEBA0
  c->r[4]=0u+0x00000020u; // 800DEBA4
  c->lr=0x800DEBACu; f_80099FE0(c); // 800DEBA8
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DEBAC
  cmps(c,0,(int32_t)c->r[0],6); // 800DEBB0
  if (crb(c,2)) { goto L_800DEC08; } // 800DEBB4
  if (!crb(c,0)) { goto L_800DEBC8; } // 800DEBB8
  cmps(c,0,(int32_t)c->r[0],3); // 800DEBBC
  if (crb(c,2)) { goto L_800DEBD4; } // 800DEBC0
  goto L_800DED04; // 800DEBC4
L_800DEBC8:;
  cmps(c,0,(int32_t)c->r[0],8); // 800DEBC8
  if (!crb(c,0)) { goto L_800DED04; } // 800DEBCC
  goto L_800DEC40; // 800DEBD0
L_800DEBD4:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800DEBD4
  cmps(c,0,(int32_t)c->r[3],0); // 800DEBD8
  if (crb(c,2)) { goto L_800DEBE8; } // 800DEBDC
  c->r[0]=c->r[3]+0x80000000u; // 800DEBE0
  goto L_800DEBEC; // 800DEBE4
L_800DEBE8:;
  c->r[0]=0u+0x00000000u; // 800DEBE8
L_800DEBEC:;
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800DEBEC
  c->r[4]=R32(c->r[31]+0x00000004u); // 800DEBF0
  cmps(c,0,(int32_t)c->r[4],0); // 800DEBF4
  if (!crb(c,1)) { goto L_800DED04; } // 800DEBF8
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800DEBFC
  c->lr=0x800DEC04u; f_80099FE0(c); // 800DEC00
  goto L_800DED04; // 800DEC04
L_800DEC08:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 800DEC08
  cmps(c,0,(int32_t)c->r[3],0); // 800DEC0C
  if (crb(c,2)) { goto L_800DEC1C; } // 800DEC10
  c->r[0]=c->r[3]+0x80000000u; // 800DEC14
  goto L_800DEC20; // 800DEC18
L_800DEC1C:;
  c->r[0]=0u+0x00000000u; // 800DEC1C
L_800DEC20:;
  W32(c->r[31]+0x00000018u,c->r[0]); // 800DEC20
  c->r[3]=R32(c->r[31]+0x00000010u); // 800DEC24
  c->r[4]=R32(c->r[31]+0x00000014u); // 800DEC28
  c->lr=0x800DEC30u; f_80099FE0(c); // 800DEC2C
  c->r[3]=R32(c->r[31]+0x00000018u); // 800DEC30
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800DEC34
  c->lr=0x800DEC3Cu; f_80099FE0(c); // 800DEC38
  goto L_800DED04; // 800DEC3C
L_800DEC40:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 800DEC40
  cmps(c,0,(int32_t)c->r[3],0); // 800DEC44
  if (crb(c,2)) { goto L_800DEC54; } // 800DEC48
  c->r[3]=c->r[3]+0x80000000u; // 800DEC4C
  goto L_800DEC58; // 800DEC50
L_800DEC54:;
  c->r[3]=0u+0x00000000u; // 800DEC54
L_800DEC58:;
  W32(c->r[31]+0x00000018u,c->r[3]); // 800DEC58
  c->r[4]=R32(c->r[31]+0x00000010u); // 800DEC5C
  c->r[0]=R32(c->r[31]+0x00000014u); // 800DEC60
  c->r[0]=c->r[4]+c->r[0]; // 800DEC64
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800DEC68
  c->lr=0x800DEC70u; f_80099FE0(c); // 800DEC6C
  c->r[28]=0u+0x00000000u; // 800DEC70
  c->r[29]=0u+0x00000000u; // 800DEC74
  goto L_800DECBC; // 800DEC78
L_800DEC7C:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 800DEC7C
  c->r[3]=R32(c->r[3]+c->r[29]); // 800DEC80
  cmps(c,0,(int32_t)c->r[3],0); // 800DEC84
  if (crb(c,2)) { goto L_800DEC94; } // 800DEC88
  c->r[0]=c->r[3]+0x80000000u; // 800DEC8C
  goto L_800DEC98; // 800DEC90
L_800DEC94:;
  c->r[0]=0u+0x00000000u; // 800DEC94
L_800DEC98:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 800DEC98
  W32(c->r[3]+c->r[29],c->r[0]); // 800DEC9C
  c->r[3]=R32(c->r[31]+0x00000018u); // 800DECA0
  c->r[4]=c->r[3]+c->r[29]; // 800DECA4
  c->r[3]=R32(c->r[3]+c->r[29]); // 800DECA8
  c->r[4]=R32(c->r[4]+0x00000004u); // 800DECAC
  c->lr=0x800DECB4u; f_80099FE0(c); // 800DECB0
  c->r[28]=c->r[28]+0x00000001u; // 800DECB4
  c->r[29]=c->r[29]+0x00000008u; // 800DECB8
L_800DECBC:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 800DECBC
  c->r[0]=R32(c->r[31]+0x00000014u); // 800DECC0
  c->r[0]=c->r[3]+c->r[0]; // 800DECC4
  cmpu(c,0,c->r[28],c->r[0]); // 800DECC8
  if (crb(c,0)) { IRQCHK(c); goto L_800DEC7C; } // 800DECCC
  c->r[0]=R32(c->r[13]+0xFFFFA570u); // 800DECD0
  cmps(c,0,(int32_t)c->r[0],0); // 800DECD4
  if (crb(c,2)) { goto L_800DED04; } // 800DECD8
  c->r[0]=R32(c->r[13]+0xFFFFA574u); // 800DECDC
  cmpu(c,0,c->r[0],c->r[31]); // 800DECE0
  if (!crb(c,2)) { goto L_800DED04; } // 800DECE4
  c->r[3]=R32(c->r[13]+0xFFFF8A40u); // 800DECE8
  c->r[0]=0u+0x00000000u; // 800DECEC
  W32(c->r[13]+0xFFFFA570u,c->r[0]); // 800DECF0
  cmps(c,0,(int32_t)c->r[3],1); // 800DECF4
  if (!crb(c,0)) { goto L_800DED04; } // 800DECF8
  c->r[0]=c->r[3]+0x00000001u; // 800DECFC
  W32(c->r[13]+0xFFFF8A40u,c->r[0]); // 800DED00
L_800DED04:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 800DED04
  cmps(c,0,(int32_t)c->r[0],0); // 800DED08
  if (crb(c,2)) { goto L_800DED54; } // 800DED0C
  c->r[3]=c->r[1]+0x00000008u; // 800DED10
  c->lr=0x800DED18u; f_8009A840(c); // 800DED14
  c->r[3]=c->r[1]+0x00000008u; // 800DED18
  c->lr=0x800DED20u; f_8009A618(c); // 800DED1C
  c->r[12]=R32(c->r[31]+0x00000020u); // 800DED20
  c->r[3]=R32(c->r[31]+0x00000004u); // 800DED24
  c->r[4]=R32(c->r[31]+0x00000024u); // 800DED28
  c->ctr=c->r[12]; // 800DED2C
  if (true) { c->lr=0x800DED34u; dispatch(c,c->ctr); } // 800DED30
  c->r[3]=c->r[1]+0x00000008u; // 800DED34
  c->lr=0x800DED3Cu; f_8009A840(c); // 800DED38
  c->r[3]=c->r[30]|c->r[30]; // 800DED3C
  c->lr=0x800DED44u; f_8009A618(c); // 800DED40
  c->r[3]=R32(c->r[13]+0xFFFF8A44u); // 800DED44
  c->r[4]=c->r[31]|c->r[31]; // 800DED48
  c->lr=0x800DED50u; f_800E0554(c); // 800DED4C
  goto L_800DED5C; // 800DED50
L_800DED54:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800DED54
  c->lr=0x800DED5Cu; f_800A1BA8(c); // 800DED58
L_800DED5C:;
  c->r[3]=0u+0x00000001u; // 800DED5C
  c->lr=0x800DED64u; f_800DEAE4(c); // 800DED60
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 800DED64
  c->r[3]=0u+0x00000001u; // 800DED68
  c->r[4]=c->r[0]|0x00000008u; // 800DED6C
  c->lr=0x800DED74u; f_800DEAF4(c); // 800DED70
  c->r[4]=R32(c->r[31]+0x00000008u); // 800DED74
  c->r[3]=c->r[31]|c->r[31]; // 800DED78
  c->lr=0x800DED80u; f_800E0888(c); // 800DED7C
L_800DED80:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800DED80
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800DED84
  c->r[30]=R32(c->r[1]+0x000002D8u); // 800DED88
  c->r[29]=R32(c->r[1]+0x000002D4u); // 800DED8C
  c->r[28]=R32(c->r[1]+0x000002D0u); // 800DED90
  c->lr=c->r[0]; // 800DED94
  c->r[1]=c->r[1]+0x000002E0u; // 800DED98
  return; // 800DED9C
}

// IPCInterruptHandler
void f_800DEDA0(Ctx* __restrict c) {
  trace_call(0x800DEDA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEDA0
  c->r[0]=c->lr; // 800DEDA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEDA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEDAC
  c->r[31]=c->r[4]|c->r[4]; // 800DEDB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DEDB4
  c->r[30]=c->r[3]|c->r[3]; // 800DEDB8
  c->r[3]=0u+0x00000001u; // 800DEDBC
  c->lr=0x800DEDC4u; f_800DEAE4(c); // 800DEDC0
  c->r[0]=c->r[3]&0x00000014u; cr0(c,c->r[0]); // 800DEDC4
  cmpu(c,0,c->r[0],0x00000014u); // 800DEDC8
  if (!crb(c,2)) { goto L_800DEDDC; } // 800DEDCC
  c->r[3]=c->r[30]|c->r[30]; // 800DEDD0
  c->r[4]=c->r[31]|c->r[31]; // 800DEDD4
  c->lr=0x800DEDDCu; f_800DEB48(c); // 800DEDD8
L_800DEDDC:;
  c->r[3]=0u+0x00000001u; // 800DEDDC
  c->lr=0x800DEDE4u; f_800DEAE4(c); // 800DEDE0
  c->r[0]=c->r[3]&0x00000022u; cr0(c,c->r[0]); // 800DEDE4
  cmpu(c,0,c->r[0],0x00000022u); // 800DEDE8
  if (!crb(c,2)) { goto L_800DEF40; } // 800DEDEC
  c->r[3]=0u+0x00000001u; // 800DEDF0
  c->lr=0x800DEDF8u; f_800DEAE4(c); // 800DEDF4
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 800DEDF8
  c->r[3]=0u+0x00000001u; // 800DEDFC
  c->r[4]=c->r[0]|0x00000002u; // 800DEE00
  c->lr=0x800DEE08u; f_800DEAF4(c); // 800DEE04
  c->r[0]=0u+0x40000000u; // 800DEE08
  c->r[3]=0u+0xCD000000u; // 800DEE0C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800DEE10
  c->r[31]=R32(c->r[13]+0xFFFF8A40u); // 800DEE14
  cmps(c,0,(int32_t)c->r[31],1); // 800DEE18
  if (!crb(c,0)) { goto L_800DEE2C; } // 800DEE1C
  c->r[31]=c->r[31]+0x00000001u; // 800DEE20
  W32(c->r[13]+0xFFFF8A40u,c->r[31]); // 800DEE24
  c->lr=0x800DEE2Cu; f_800E0878(c); // 800DEE28
L_800DEE2C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DEE2C
  if (!crb(c,1)) { goto L_800DEF40; } // 800DEE30
  c->r[0]=R32(c->r[13]+0xFFFFA570u); // 800DEE34
  cmps(c,0,(int32_t)c->r[0],0); // 800DEE38
  if (crb(c,2)) { goto L_800DEE74; } // 800DEE3C
  c->r[3]=R32(c->r[13]+0xFFFFA574u); // 800DEE40
  c->r[0]=0u+0x00000000u; // 800DEE44
  W32(c->r[3]+0x00000004u,c->r[0]); // 800DEE48
  c->r[3]=R32(c->r[13]+0xFFFFA574u); // 800DEE4C
  W32(c->r[13]+0xFFFFA570u,c->r[0]); // 800DEE50
  c->r[3]=c->r[3]+0x0000002Cu; // 800DEE54
  c->lr=0x800DEE5Cu; f_800A1BA8(c); // 800DEE58
  c->r[3]=0u+0x00000001u; // 800DEE5C
  c->lr=0x800DEE64u; f_800DEAE4(c); // 800DEE60
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 800DEE64
  c->r[3]=0u+0x00000001u; // 800DEE68
  c->r[4]=c->r[0]|0x00000008u; // 800DEE6C
  c->lr=0x800DEE74u; f_800DEAF4(c); // 800DEE70
L_800DEE74:;
  c->r[4]=0u+0x802C0000u; // 800DEE74
  c->r[3]=c->r[4]+0xFFFFF9D8u; // 800DEE78
  c->r[4]=R32(c->r[4]+0xFFFFF9D8u); // 800DEE7C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DEE80
  cmpu(c,0,c->r[0],c->r[4]); // 800DEE84
  if (!crb(c,0)) { goto L_800DEE94; } // 800DEE88
  c->r[0]=c->r[0]-c->r[4]; // 800DEE8C
  goto L_800DEEA0; // 800DEE90
L_800DEE94:;
  c->r[0]=c->r[0]-c->r[4]; // 800DEE94
  c->r[0]=cntlz(c->r[0]); // 800DEE98
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEE9C
L_800DEEA0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DEEA0
  if (!crb(c,2)) { goto L_800DEF40; } // 800DEEA4
  c->r[3]=0u+0x802C0000u; // 800DEEA8
  c->r[3]=c->r[3]+0xFFFFF9D8u; // 800DEEAC
  c->r[0]=R32(c->r[3]+0x00000008u); // 800DEEB0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DEEB4
  c->r[3]=c->r[3]+c->r[0]; // 800DEEB8
  c->r[4]=R32(c->r[3]+0x00000010u); // 800DEEBC
  cmps(c,0,(int32_t)c->r[4],0); // 800DEEC0
  if (crb(c,2)) { goto L_800DEF40; } // 800DEEC4
  c->r[0]=R32(c->r[4]+0x00000028u); // 800DEEC8
  cmps(c,0,(int32_t)c->r[0],0); // 800DEECC
  if (crb(c,2)) { goto L_800DEEEC; } // 800DEED0
  c->r[3]=R32(c->r[13]+0xFFFF8A40u); // 800DEED4
  c->r[0]=0u+0x00000001u; // 800DEED8
  W32(c->r[13]+0xFFFFA570u,c->r[0]); // 800DEEDC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800DEEE0
  W32(c->r[13]+0xFFFFA574u,c->r[4]); // 800DEEE4
  W32(c->r[13]+0xFFFF8A40u,c->r[0]); // 800DEEE8
L_800DEEEC:;
  c->r[4]=c->r[4]+0x80000000u; // 800DEEEC
  c->r[3]=0u+0x00000000u; // 800DEEF0
  c->lr=0x800DEEF8u; f_800DEAF4(c); // 800DEEF4
  c->r[7]=0u+0x802C0000u; // 800DEEF8
  c->r[3]=R32(c->r[13]+0xFFFF8A40u); // 800DEEFC
  c->r[6]=c->r[7]+0xFFFFF9D8u; // 800DEF00
  c->r[4]=R32(c->r[7]+0xFFFFF9D8u); // 800DEF04
  c->r[5]=R32(c->r[6]+0x00000008u); // 800DEF08
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800DEF0C
  W32(c->r[13]+0xFFFF8A40u,c->r[0]); // 800DEF10
  c->r[4]=c->r[4]+0x00000001u; // 800DEF14
  c->r[0]=c->r[5]+0x00000001u; // 800DEF18
  c->r[3]=0u+0x00000001u; // 800DEF1C
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 800DEF20
  W32(c->r[7]+0xFFFFF9D8u,c->r[4]); // 800DEF24
  W32(c->r[6]+0x00000008u,c->r[0]); // 800DEF28
  c->lr=0x800DEF30u; f_800DEAE4(c); // 800DEF2C
  c->r[0]=rotl(c->r[3],0)&0x00000030u; // 800DEF30
  c->r[3]=0u+0x00000001u; // 800DEF34
  c->r[4]=c->r[0]|0x00000001u; // 800DEF38
  c->lr=0x800DEF40u; f_800DEAF4(c); // 800DEF3C
L_800DEF40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEF40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEF44
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DEF48
  c->lr=c->r[0]; // 800DEF4C
  c->r[1]=c->r[1]+0x00000010u; // 800DEF50
  return; // 800DEF54
}

