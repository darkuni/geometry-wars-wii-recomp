#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// GXCPInterruptHandler
void f_800BB75C(Ctx* __restrict c) {
  trace_call(0x800BB75Cu);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB75C
  c->r[0]=c->lr; // 800BB760
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800BB764
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800BB768
  c->r[31]=R32(c->r[2]+0xFFFF90C0u); // 800BB76C
  W32(c->r[1]+0x000002D8u,c->r[30]); // 800BB770
  c->r[30]=c->r[4]|c->r[4]; // 800BB774
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BB778
  c->r[0]=R16(c->r[3]+0x00000000u); // 800BB77C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800BB780
  c->r[0]=R32(c->r[31]+0x00000008u); // 800BB784
  c->r[0]=rotl(c->r[0],29)&0x00000001u; cr0(c,c->r[0]); // 800BB788
  if (crb(c,2)) { goto L_800BB7DC; } // 800BB78C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800BB790
  c->r[0]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[0]); // 800BB794
  if (crb(c,2)) { goto L_800BB7DC; } // 800BB798
  c->r[3]=R32(c->r[13]+0xFFFFA494u); // 800BB79C
  c->lr=0x800BB7A4u; f_800A1690(c); // 800BB7A0
  c->r[0]=0u+0x00000000u; // 800BB7A4
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BB7A8
  W32(c->r[13]+0xFFFFA490u,c->r[0]); // 800BB7AC
  c->r[0]=R32(c->r[3]+0x00000010u); // 800BB7B0
  c->r[0]=c->r[0]|0x00000003u; // 800BB7B4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800BB7B8
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BB7BC
  W16(c->r[3]+0x00000004u,c->r[0]); // 800BB7C0
  c->r[0]=R32(c->r[31]+0x00000008u); // 800BB7C4
  c->r[0]=c->r[0]|0x00000004u; // 800BB7C8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800BB7CC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800BB7D0
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BB7D4
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BB7D8
L_800BB7DC:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800BB7DC
  c->r[0]=rotl(c->r[0],30)&0x00000001u; cr0(c,c->r[0]); // 800BB7E0
  if (crb(c,2)) { goto L_800BB844; } // 800BB7E4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800BB7E8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800BB7EC
  if (crb(c,2)) { goto L_800BB844; } // 800BB7F0
  c->r[3]=R32(c->r[13]+0xFFFFA484u); // 800BB7F4
  c->r[0]=0u+0x00000001u; // 800BB7F8
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BB7FC
  c->r[3]=c->r[3]+0x00000001u; // 800BB800
  W32(c->r[13]+0xFFFFA484u,c->r[3]); // 800BB804
  c->r[3]=R32(c->r[31]+0x00000008u); // 800BB808
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFFBu; // 800BB80C
  c->r[4]=c->r[4]|0x00000008u; // 800BB810
  W32(c->r[31]+0x00000008u,c->r[4]); // 800BB814
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BB818
  W16(c->r[3]+0x00000002u,c->r[4]); // 800BB81C
  c->r[3]=R32(c->r[5]+0x00000010u); // 800BB820
  c->r[3]=c->r[3]|0x00000001u; // 800BB824
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFFDu; // 800BB828
  W32(c->r[5]+0x00000010u,c->r[4]); // 800BB82C
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BB830
  W16(c->r[3]+0x00000004u,c->r[4]); // 800BB834
  W32(c->r[13]+0xFFFFA490u,c->r[0]); // 800BB838
  c->r[3]=R32(c->r[13]+0xFFFFA494u); // 800BB83C
  c->lr=0x800BB844u; f_800A1928(c); // 800BB840
L_800BB844:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800BB844
  c->r[0]=rotl(c->r[3],27)&0x00000001u; cr0(c,c->r[0]); // 800BB848
  if (crb(c,2)) { goto L_800BB8A4; } // 800BB84C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800BB850
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 800BB854
  if (crb(c,2)) { goto L_800BB8A4; } // 800BB858
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFDFu; // 800BB85C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800BB860
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BB864
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BB868
  c->r[0]=R32(c->r[13]+0xFFFFA48Cu); // 800BB86C
  cmps(c,0,(int32_t)c->r[0],0); // 800BB870
  if (crb(c,2)) { goto L_800BB8A4; } // 800BB874
  c->r[3]=c->r[1]+0x00000008u; // 800BB878
  c->lr=0x800BB880u; f_8009A840(c); // 800BB87C
  c->r[3]=c->r[1]+0x00000008u; // 800BB880
  c->lr=0x800BB888u; f_8009A618(c); // 800BB884
  c->r[12]=R32(c->r[13]+0xFFFFA48Cu); // 800BB888
  c->ctr=c->r[12]; // 800BB88C
  if (true) { c->lr=0x800BB894u; dispatch(c,c->ctr); } // 800BB890
  c->r[3]=c->r[1]+0x00000008u; // 800BB894
  c->lr=0x800BB89Cu; f_8009A840(c); // 800BB898
  c->r[3]=c->r[30]|c->r[30]; // 800BB89C
  c->lr=0x800BB8A4u; f_8009A618(c); // 800BB8A0
L_800BB8A4:;
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800BB8A4
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800BB8A8
  c->r[30]=R32(c->r[1]+0x000002D8u); // 800BB8AC
  c->lr=c->r[0]; // 800BB8B0
  c->r[1]=c->r[1]+0x000002E0u; // 800BB8B4
  return; // 800BB8B8
}

// GXInitFifoBase
void f_800BB8BC(Ctx* __restrict c) {
  trace_call(0x800BB8BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB8BC
  c->r[0]=c->lr; // 800BB8C0
  c->r[7]=c->r[4]+c->r[5]; // 800BB8C4
  c->r[6]=c->r[5]+0xFFFFC000u; // 800BB8C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BB8CC
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 800BB8D0
  c->r[0]=rotl(c->r[5],31)&0x7FFFFFE0u; // 800BB8D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BB8D8
  c->r[31]=0u+0x00000000u; // 800BB8DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BB8E0
  c->r[30]=c->r[4]|c->r[4]; // 800BB8E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BB8E8
  c->r[29]=c->r[3]|c->r[3]; // 800BB8EC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BB8F0
  W32(c->r[3]+0x00000004u,c->r[7]); // 800BB8F4
  W32(c->r[3]+0x00000008u,c->r[5]); // 800BB8F8
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 800BB8FC
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 800BB900
  W32(c->r[3]+0x00000010u,c->r[0]); // 800BB904
  c->lr=0x800BB90Cu; f_8009DF9C(c); // 800BB908
  cmps(c,0,(int32_t)c->r[31],0); // 800BB90C
  W32(c->r[29]+0x00000014u,c->r[30]); // 800BB910
  W32(c->r[29]+0x00000018u,c->r[30]); // 800BB914
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 800BB918
  if (!crb(c,0)) { goto L_800BB928; } // 800BB91C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BB920
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 800BB924
L_800BB928:;
  c->lr=0x800BB92Cu; f_8009DFC4(c); // 800BB928
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BB92C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BB930
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BB934
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BB938
  c->lr=c->r[0]; // 800BB93C
  c->r[1]=c->r[1]+0x00000020u; // 800BB940
  return; // 800BB944
}

// CPGPLinkCheck
void f_800BB948(Ctx* __restrict c) {
  trace_call(0x800BB948u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BB948
  c->r[0]=c->lr; // 800BB94C
  c->r[7]=0u+0x00000000u; // 800BB950
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BB954
  c->r[0]=R8(c->r[13]+0xFFFFA480u); // 800BB958
  cmps(c,0,(int32_t)c->r[0],0); // 800BB95C
  if (crb(c,2)) { goto L_800BB970; } // 800BB960
  c->r[0]=R8(c->r[13]+0xFFFFA481u); // 800BB964
  cmps(c,0,(int32_t)c->r[0],0); // 800BB968
  if (!crb(c,2)) { goto L_800BB978; } // 800BB96C
L_800BB970:;
  c->r[3]=0u+0x00000000u; // 800BB970
  goto L_800BBA30; // 800BB974
L_800BB978:;
  c->r[4]=0u+0x802C0000u; // 800BB978
  c->r[3]=0u+0x802C0000u; // 800BB97C
  c->r[6]=R32(c->r[4]+0xFFFFC760u); // 800BB980
  c->r[4]=R32(c->r[3]+0xFFFFC784u); // 800BB984
  cmpu(c,0,c->r[4],c->r[6]); // 800BB988
  if (!crb(c,2)) { goto L_800BB994; } // 800BB98C
  c->r[7]=0u+0x00000001u; // 800BB990
L_800BB994:;
  c->r[5]=0u+0x802C0000u; // 800BB994
  c->r[3]=0u+0x802C0000u; // 800BB998
  c->r[5]=c->r[5]+0xFFFFC760u; // 800BB99C
  c->r[3]=c->r[3]+0xFFFFC784u; // 800BB9A0
  c->r[0]=R32(c->r[5]+0x00000004u); // 800BB9A4
  c->r[5]=R32(c->r[3]+0x00000004u); // 800BB9A8
  cmpu(c,0,c->r[5],c->r[0]); // 800BB9AC
  if (!crb(c,2)) { goto L_800BB9B8; } // 800BB9B0
  c->r[7]=c->r[7]+0x00000001u; // 800BB9B4
L_800BB9B8:;
  cmpu(c,0,c->r[7],0x00000002u); // 800BB9B8
  if (!crb(c,2)) { goto L_800BB9C8; } // 800BB9BC
  c->r[3]=0u+0x00000001u; // 800BB9C0
  goto L_800BBA30; // 800BB9C4
L_800BB9C8:;
  c->r[3]=c->r[5]-c->r[6]; cr0(c,c->r[3]); // 800BB9C8
  c->r[6]=c->r[0]-c->r[4]; // 800BB9CC
  c->r[0]=0u+0x00000000u; // 800BB9D0
  if (!crb(c,1)) { goto L_800BB9E0; } // 800BB9D4
  cmps(c,0,(int32_t)c->r[6],0); // 800BB9D8
  if (crb(c,1)) { goto L_800BB9F0; } // 800BB9DC
L_800BB9E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800BB9E0
  if (!crb(c,0)) { goto L_800BB9F4; } // 800BB9E4
  cmps(c,0,(int32_t)c->r[6],0); // 800BB9E8
  if (!crb(c,0)) { goto L_800BB9F4; } // 800BB9EC
L_800BB9F0:;
  c->r[0]=0u+0x00000001u; // 800BB9F0
L_800BB9F4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BB9F4
  if (crb(c,2)) { goto L_800BBA2C; } // 800BB9F8
  c->r[3]=0u+0x80220000u; // 800BB9FC
  c->r[3]=c->r[3]+0xFFFFB2E0u; // 800BBA00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBA04
  c->lr=0x800BBA0Cu; f_8009AC4C(c); // 800BBA08
  c->r[4]=0u+0x802C0000u; // 800BBA0C
  c->r[3]=0u+0x80220000u; // 800BBA10
  c->r[5]=c->r[4]+0xFFFFC760u; // 800BBA14
  c->r[4]=R32(c->r[4]+0xFFFFC760u); // 800BBA18
  c->r[5]=R32(c->r[5]+0x00000004u); // 800BBA1C
  c->r[3]=c->r[3]+0xFFFFB2F8u; // 800BBA20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800BBA24
  c->lr=0x800BBA2Cu; f_8009AC4C(c); // 800BBA28
L_800BBA2C:;
  c->r[3]=0u+0x00000000u; // 800BBA2C
L_800BBA30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BBA30
  c->lr=c->r[0]; // 800BBA34
  c->r[1]=c->r[1]+0x00000010u; // 800BBA38
  return; // 800BBA3C
}

// GXSetCPUFifo
void f_800BBA40(Ctx* __restrict c) {
  trace_call(0x800BBA40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBA40
  c->r[0]=c->lr; // 800BBA44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BBA48
  c->r[11]=c->r[1]+0x00000020u; // 800BBA4C
  c->lr=0x800BBA54u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BBA50
  c->r[27]=c->r[3]|c->r[3]; // 800BBA54
  c->lr=0x800BBA5Cu; f_8009DF9C(c); // 800BBA58
  cmps(c,0,(int32_t)c->r[27],0); // 800BBA5C
  c->r[30]=c->r[3]|c->r[3]; // 800BBA60
  if (!crb(c,2)) { goto L_800BBA8C; } // 800BBA64
  c->r[4]=0u+0x802C0000u; // 800BBA68
  c->r[0]=0u+0x00000000u; // 800BBA6C
  c->r[4]=c->r[4]+0xFFFFC784u; // 800BBA70
  W8(c->r[13]+0xFFFFA480u,c->r[0]); // 800BBA74
  W8(c->r[13]+0xFFFFA498u,c->r[0]); // 800BBA78
  W8(c->r[4]+0x00000022u,c->r[0]); // 800BBA7C
  W8(c->r[4]+0x00000021u,c->r[0]); // 800BBA80
  c->lr=0x800BBA88u; f_8009DFC4(c); // 800BBA84
  goto L_800BBC08; // 800BBA88
L_800BBA8C:;
  c->r[28]=0u+0x802C0000u; // 800BBA8C
  c->r[3]=R32(c->r[27]+0x00000000u); // 800BBA90
  c->r[0]=R32(c->r[27]+0x00000004u); // 800BBA94
  c->r[31]=c->r[28]+0xFFFFC784u; // 800BBA98
  c->r[29]=0u+0x00000001u; // 800BBA9C
  W32(c->r[31]+0x00000000u,c->r[3]); // 800BBAA0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800BBAA4
  c->r[3]=R32(c->r[27]+0x00000008u); // 800BBAA8
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 800BBAAC
  W32(c->r[31]+0x00000008u,c->r[3]); // 800BBAB0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800BBAB4
  c->r[3]=R32(c->r[27]+0x00000010u); // 800BBAB8
  c->r[0]=R32(c->r[27]+0x00000014u); // 800BBABC
  W32(c->r[31]+0x00000010u,c->r[3]); // 800BBAC0
  W32(c->r[31]+0x00000014u,c->r[0]); // 800BBAC4
  c->r[3]=R32(c->r[27]+0x00000018u); // 800BBAC8
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 800BBACC
  W32(c->r[31]+0x00000018u,c->r[3]); // 800BBAD0
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800BBAD4
  c->r[0]=R32(c->r[27]+0x00000020u); // 800BBAD8
  W32(c->r[31]+0x00000020u,c->r[0]); // 800BBADC
  W8(c->r[13]+0xFFFFA480u,c->r[29]); // 800BBAE0
  W8(c->r[31]+0x00000021u,c->r[29]); // 800BBAE4
  c->lr=0x800BBAECu; f_800BB948(c); // 800BBAE8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800BBAEC
  if (crb(c,2)) { goto L_800BBB78; } // 800BBAF0
  c->r[4]=R32(c->r[28]+0xFFFFC784u); // 800BBAF4
  c->r[0]=0u+0x00000000u; // 800BBAF8
  W8(c->r[13]+0xFFFFA498u,c->r[29]); // 800BBAFC
  c->r[3]=R32(c->r[13]+0xFFFFA458u); // 800BBB00
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 800BBB04
  W8(c->r[31]+0x00000022u,c->r[29]); // 800BBB08
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BBB0C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800BBB10
  c->r[4]=R32(c->r[31]+0x00000004u); // 800BBB14
  c->r[3]=R32(c->r[13]+0xFFFFA458u); // 800BBB18
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 800BBB1C
  W32(c->r[3]+0x00000010u,c->r[4]); // 800BBB20
  c->r[4]=R32(c->r[31]+0x00000018u); // 800BBB24
  c->r[3]=R32(c->r[13]+0xFFFFA458u); // 800BBB28
  c->r[0]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[0]&~0x1FFFFFE0u); // 800BBB2C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BBB30
  c->r[0]=R32(c->r[5]+0x00000010u); // 800BBB34
  c->r[0]=c->r[0]|0x00000003u; // 800BBB38
  W32(c->r[5]+0x00000010u,c->r[0]); // 800BBB3C
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBB40
  W16(c->r[3]+0x00000004u,c->r[0]); // 800BBB44
  c->r[0]=R32(c->r[5]+0x00000008u); // 800BBB48
  c->r[0]=c->r[0]|0x00000004u; // 800BBB4C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800BBB50
  W32(c->r[5]+0x00000008u,c->r[0]); // 800BBB54
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBB58
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BBB5C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800BBB60
  c->r[0]=c->r[0]|0x00000010u; // 800BBB64
  W32(c->r[5]+0x00000008u,c->r[0]); // 800BBB68
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBB6C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BBB70
  goto L_800BBBFC; // 800BBB74
L_800BBB78:;
  c->r[0]=R8(c->r[13]+0xFFFFA498u); // 800BBB78
  c->r[4]=0u+0x00000000u; // 800BBB7C
  W8(c->r[31]+0x00000022u,c->r[4]); // 800BBB80
  cmps(c,0,(int32_t)c->r[0],0); // 800BBB84
  if (crb(c,2)) { goto L_800BBBA8; } // 800BBB88
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BBB8C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BBB90
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800BBB94
  W32(c->r[3]+0x00000008u,c->r[0]); // 800BBB98
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBB9C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BBBA0
  W8(c->r[13]+0xFFFFA498u,c->r[4]); // 800BBBA4
L_800BBBA8:;
  c->r[7]=R32(c->r[2]+0xFFFF90C0u); // 800BBBA8
  c->r[3]=0u+0x802C0000u; // 800BBBAC
  c->r[5]=c->r[3]+0xFFFFC784u; // 800BBBB0
  c->r[0]=0u+0x00000000u; // 800BBBB4
  c->r[4]=R32(c->r[7]+0x00000008u); // 800BBBB8
  c->r[6]=rotl(c->r[4],0)&0xFFFFFFF3u; // 800BBBBC
  W32(c->r[7]+0x00000008u,c->r[6]); // 800BBBC0
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBBC4
  W16(c->r[4]+0x00000002u,c->r[6]); // 800BBBC8
  c->r[4]=R32(c->r[3]+0xFFFFC784u); // 800BBBCC
  c->r[3]=R32(c->r[13]+0xFFFFA458u); // 800BBBD0
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 800BBBD4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800BBBD8
  c->r[4]=R32(c->r[5]+0x00000004u); // 800BBBDC
  c->r[3]=R32(c->r[13]+0xFFFFA458u); // 800BBBE0
  c->r[4]=rotl(c->r[4],0)&0x3FFFFFFFu; // 800BBBE4
  W32(c->r[3]+0x00000010u,c->r[4]); // 800BBBE8
  c->r[4]=R32(c->r[5]+0x00000018u); // 800BBBEC
  c->r[3]=R32(c->r[13]+0xFFFFA458u); // 800BBBF0
  c->r[0]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[0]&~0x1FFFFFE0u); // 800BBBF4
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BBBF8
L_800BBBFC:;
  c->lr=0x800BBC00u; f_80097A44(c); // 800BBBFC
  c->r[3]=c->r[30]|c->r[30]; // 800BBC00
  c->lr=0x800BBC08u; f_8009DFC4(c); // 800BBC04
L_800BBC08:;
  c->r[11]=c->r[1]+0x00000020u; // 800BBC08
  c->lr=0x800BBC10u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BBC0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBC10
  c->lr=c->r[0]; // 800BBC14
  c->r[1]=c->r[1]+0x00000020u; // 800BBC18
  return; // 800BBC1C
}

// GXSetGPFifo
void f_800BBC20(Ctx* __restrict c) {
  trace_call(0x800BBC20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBC20
  c->r[0]=c->lr; // 800BBC24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BBC28
  c->r[11]=c->r[1]+0x00000020u; // 800BBC2C
  c->lr=0x800BBC34u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BBC30
  c->r[27]=c->r[3]|c->r[3]; // 800BBC34
  c->lr=0x800BBC3Cu; f_8009DF9C(c); // 800BBC38
  c->r[29]=R32(c->r[2]+0xFFFF90C0u); // 800BBC3C
  cmps(c,0,(int32_t)c->r[27],0); // 800BBC40
  c->r[28]=c->r[3]|c->r[3]; // 800BBC44
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BBC48
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800BBC4C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800BBC50
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBC54
  W16(c->r[4]+0x00000002u,c->r[0]); // 800BBC58
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BBC5C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 800BBC60
  W32(c->r[29]+0x00000008u,c->r[0]); // 800BBC64
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBC68
  W16(c->r[4]+0x00000002u,c->r[0]); // 800BBC6C
  if (!crb(c,2)) { goto L_800BBCAC; } // 800BBC70
  c->r[6]=0u+0x00000000u; // 800BBC74
  c->r[4]=0u+0x802C0000u; // 800BBC78
  W8(c->r[13]+0xFFFFA481u,c->r[6]); // 800BBC7C
  c->r[4]=c->r[4]+0xFFFFC760u; // 800BBC80
  W8(c->r[13]+0xFFFFA498u,c->r[6]); // 800BBC84
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BBC88
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800BBC8C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800BBC90
  c->r[5]=R32(c->r[13]+0xFFFFA45Cu); // 800BBC94
  W16(c->r[5]+0x00000002u,c->r[0]); // 800BBC98
  W8(c->r[4]+0x00000021u,c->r[6]); // 800BBC9C
  W8(c->r[4]+0x00000022u,c->r[6]); // 800BBCA0
  c->lr=0x800BBCA8u; f_8009DFC4(c); // 800BBCA4
  goto L_800BBE98; // 800BBCA8
L_800BBCAC:;
  c->r[3]=0u+0x802C0000u; // 800BBCAC
  c->r[6]=R32(c->r[27]+0x00000000u); // 800BBCB0
  c->r[0]=R32(c->r[27]+0x00000004u); // 800BBCB4
  c->r[30]=c->r[3]+0xFFFFC760u; // 800BBCB8
  c->r[31]=0u+0x00000001u; // 800BBCBC
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBCC0
  W32(c->r[30]+0x00000000u,c->r[6]); // 800BBCC4
  W32(c->r[30]+0x00000004u,c->r[0]); // 800BBCC8
  c->r[5]=R32(c->r[27]+0x00000008u); // 800BBCCC
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 800BBCD0
  W32(c->r[30]+0x00000008u,c->r[5]); // 800BBCD4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800BBCD8
  c->r[5]=R32(c->r[27]+0x00000010u); // 800BBCDC
  c->r[0]=R32(c->r[27]+0x00000014u); // 800BBCE0
  W32(c->r[30]+0x00000010u,c->r[5]); // 800BBCE4
  W32(c->r[30]+0x00000014u,c->r[0]); // 800BBCE8
  c->r[5]=R32(c->r[27]+0x00000018u); // 800BBCEC
  c->r[0]=R32(c->r[27]+0x0000001Cu); // 800BBCF0
  W32(c->r[30]+0x00000018u,c->r[5]); // 800BBCF4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800BBCF8
  c->r[0]=R32(c->r[27]+0x00000020u); // 800BBCFC
  W32(c->r[30]+0x00000020u,c->r[0]); // 800BBD00
  W8(c->r[13]+0xFFFFA481u,c->r[31]); // 800BBD04
  W8(c->r[30]+0x00000022u,c->r[31]); // 800BBD08
  W16(c->r[4]+0x00000020u,c->r[6]); // 800BBD0C
  c->r[0]=R32(c->r[30]+0x00000004u); // 800BBD10
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBD14
  W16(c->r[4]+0x00000024u,c->r[0]); // 800BBD18
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800BBD1C
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBD20
  W16(c->r[4]+0x00000030u,c->r[0]); // 800BBD24
  c->r[0]=R32(c->r[30]+0x00000018u); // 800BBD28
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBD2C
  W16(c->r[4]+0x00000034u,c->r[0]); // 800BBD30
  c->r[0]=R32(c->r[30]+0x00000014u); // 800BBD34
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBD38
  W16(c->r[4]+0x00000038u,c->r[0]); // 800BBD3C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800BBD40
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBD44
  W16(c->r[4]+0x00000028u,c->r[0]); // 800BBD48
  c->r[0]=R32(c->r[30]+0x00000010u); // 800BBD4C
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBD50
  W16(c->r[4]+0x0000002Cu,c->r[0]); // 800BBD54
  c->r[0]=R32(c->r[3]+0xFFFFC760u); // 800BBD58
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBD5C
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 800BBD60
  W16(c->r[3]+0x00000022u,c->r[0]); // 800BBD64
  c->r[0]=R32(c->r[30]+0x00000004u); // 800BBD68
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBD6C
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 800BBD70
  W16(c->r[3]+0x00000026u,c->r[0]); // 800BBD74
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800BBD78
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBD7C
  c->r[0]=sraw(c,c->r[0],16); // 800BBD80
  W16(c->r[3]+0x00000032u,c->r[0]); // 800BBD84
  c->r[0]=R32(c->r[30]+0x00000018u); // 800BBD88
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBD8C
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 800BBD90
  W16(c->r[3]+0x00000036u,c->r[0]); // 800BBD94
  c->r[0]=R32(c->r[30]+0x00000014u); // 800BBD98
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBD9C
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 800BBDA0
  W16(c->r[3]+0x0000003Au,c->r[0]); // 800BBDA4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800BBDA8
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBDAC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800BBDB0
  W16(c->r[3]+0x0000002Au,c->r[0]); // 800BBDB4
  c->r[0]=R32(c->r[30]+0x00000010u); // 800BBDB8
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBDBC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800BBDC0
  W16(c->r[3]+0x0000002Eu,c->r[0]); // 800BBDC4
  c->lr=0x800BBDCCu; f_80097A44(c); // 800BBDC8
  c->lr=0x800BBDD0u; f_800BB948(c); // 800BBDCC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800BBDD0
  if (crb(c,2)) { goto L_800BBE10; } // 800BBDD4
  W8(c->r[13]+0xFFFFA498u,c->r[31]); // 800BBDD8
  W8(c->r[30]+0x00000021u,c->r[31]); // 800BBDDC
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BBDE0
  c->r[0]=c->r[0]|0x00000004u; // 800BBDE4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800BBDE8
  W32(c->r[29]+0x00000008u,c->r[0]); // 800BBDEC
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBDF0
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BBDF4
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BBDF8
  c->r[0]=c->r[0]|0x00000010u; // 800BBDFC
  W32(c->r[29]+0x00000008u,c->r[0]); // 800BBE00
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBE04
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BBE08
  goto L_800BBE44; // 800BBE0C
L_800BBE10:;
  c->r[0]=0u+0x00000000u; // 800BBE10
  W8(c->r[13]+0xFFFFA498u,c->r[0]); // 800BBE14
  W8(c->r[30]+0x00000021u,c->r[0]); // 800BBE18
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BBE1C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 800BBE20
  W32(c->r[29]+0x00000008u,c->r[0]); // 800BBE24
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBE28
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BBE2C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BBE30
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800BBE34
  W32(c->r[29]+0x00000008u,c->r[0]); // 800BBE38
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BBE3C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BBE40
L_800BBE44:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BBE44
  c->r[3]=c->r[28]|c->r[28]; // 800BBE48
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBE4C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800BBE50
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BBE54
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 800BBE58
  W16(c->r[4]+0x00000002u,c->r[0]); // 800BBE5C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BBE60
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBE64
  W16(c->r[4]+0x00000002u,c->r[0]); // 800BBE68
  c->r[0]=R32(c->r[5]+0x00000010u); // 800BBE6C
  c->r[0]=c->r[0]|0x00000003u; // 800BBE70
  W32(c->r[5]+0x00000010u,c->r[0]); // 800BBE74
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBE78
  W16(c->r[4]+0x00000004u,c->r[0]); // 800BBE7C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BBE80
  c->r[0]=c->r[0]|0x00000001u; // 800BBE84
  W32(c->r[29]+0x00000008u,c->r[0]); // 800BBE88
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BBE8C
  W16(c->r[4]+0x00000002u,c->r[0]); // 800BBE90
  c->lr=0x800BBE98u; f_8009DFC4(c); // 800BBE94
L_800BBE98:;
  c->r[11]=c->r[1]+0x00000020u; // 800BBE98
  c->lr=0x800BBEA0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BBE9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BBEA0
  c->lr=c->r[0]; // 800BBEA4
  c->r[1]=c->r[1]+0x00000020u; // 800BBEA8
  return; // 800BBEAC
}

// __GXSaveCPUFifo
void f_800BBEB0(Ctx* __restrict c) {
  trace_call(0x800BBEB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBEB0
  c->r[0]=c->lr; // 800BBEB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBEB8
  c->lr=0x800BBEC0u; f_8009DF9C(c); // 800BBEBC
  c->r[6]=R8(c->r[13]+0xFFFFA480u); // 800BBEC0
  cmps(c,0,(int32_t)c->r[6],0); // 800BBEC4
  if (crb(c,2)) { goto L_800BBEF0; } // 800BBEC8
  c->r[5]=R32(c->r[13]+0xFFFFA458u); // 800BBECC
  c->r[4]=0u+0x802C0000u; // 800BBED0
  c->r[4]=c->r[4]+0xFFFFC784u; // 800BBED4
  c->r[0]=R32(c->r[5]+0x00000014u); // 800BBED8
  c->r[5]=rotl(c->r[0],0)&0x1FFFFFE0u; // 800BBEDC
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 800BBEE0
  c->r[5]=c->r[5]+0x80000000u; // 800BBEE4
  W8(c->r[4]+0x00000020u,c->r[0]); // 800BBEE8
  W32(c->r[4]+0x00000018u,c->r[5]); // 800BBEEC
L_800BBEF0:;
  c->r[0]=R8(c->r[13]+0xFFFFA481u); // 800BBEF0
  cmps(c,0,(int32_t)c->r[0],0); // 800BBEF4
  if (crb(c,2)) { goto L_800BBF2C; } // 800BBEF8
  c->r[7]=R32(c->r[13]+0xFFFFA45Cu); // 800BBEFC
  c->r[4]=0u+0x802C0000u; // 800BBF00
  c->r[4]=c->r[4]+0xFFFFC760u; // 800BBF04
  c->r[0]=R16(c->r[7]+0x0000003Au); // 800BBF08
  c->r[5]=R16(c->r[7]+0x00000038u); // 800BBF0C
  c->r[5]=(rotl(c->r[0],16)&0xFFFF0000u)|(c->r[5]&~0xFFFF0000u); // 800BBF10
  c->r[0]=c->r[5]+0x80000000u; // 800BBF14
  W32(c->r[4]+0x00000014u,c->r[0]); // 800BBF18
  c->r[0]=R16(c->r[7]+0x00000032u); // 800BBF1C
  c->r[5]=R16(c->r[7]+0x00000030u); // 800BBF20
  c->r[5]=(rotl(c->r[0],16)&0xFFFF0000u)|(c->r[5]&~0xFFFF0000u); // 800BBF24
  W32(c->r[4]+0x0000001Cu,c->r[5]); // 800BBF28
L_800BBF2C:;
  c->r[0]=R8(c->r[13]+0xFFFFA498u); // 800BBF2C
  cmps(c,0,(int32_t)c->r[0],0); // 800BBF30
  if (crb(c,2)) { goto L_800BBF6C; } // 800BBF34
  c->r[8]=0u+0x802C0000u; // 800BBF38
  c->r[6]=0u+0x802C0000u; // 800BBF3C
  c->r[8]=c->r[8]+0xFFFFC760u; // 800BBF40
  c->r[6]=c->r[6]+0xFFFFC784u; // 800BBF44
  c->r[7]=R32(c->r[8]+0x00000014u); // 800BBF48
  c->r[5]=R32(c->r[8]+0x0000001Cu); // 800BBF4C
  c->r[4]=R32(c->r[6]+0x00000018u); // 800BBF50
  c->r[0]=R8(c->r[6]+0x00000020u); // 800BBF54
  W32(c->r[6]+0x00000014u,c->r[7]); // 800BBF58
  W32(c->r[6]+0x0000001Cu,c->r[5]); // 800BBF5C
  W32(c->r[8]+0x00000018u,c->r[4]); // 800BBF60
  W8(c->r[8]+0x00000020u,c->r[0]); // 800BBF64
  goto L_800BBF9C; // 800BBF68
L_800BBF6C:;
  cmps(c,0,(int32_t)c->r[6],0); // 800BBF6C
  if (crb(c,2)) { goto L_800BBF9C; } // 800BBF70
  c->r[5]=0u+0x802C0000u; // 800BBF74
  c->r[5]=c->r[5]+0xFFFFC784u; // 800BBF78
  c->r[4]=R32(c->r[5]+0x00000014u); // 800BBF7C
  c->r[0]=R32(c->r[5]+0x00000018u); // 800BBF80
  c->r[4]=c->r[0]-c->r[4]; cr0(c,c->r[4]); // 800BBF84
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 800BBF88
  if (!crb(c,0)) { goto L_800BBF9C; } // 800BBF8C
  c->r[0]=R32(c->r[5]+0x00000008u); // 800BBF90
  c->r[0]=c->r[4]+c->r[0]; // 800BBF94
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 800BBF98
L_800BBF9C:;
  c->lr=0x800BBFA0u; f_8009DFC4(c); // 800BBF9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BBFA0
  c->lr=c->r[0]; // 800BBFA4
  c->r[1]=c->r[1]+0x00000010u; // 800BBFA8
  return; // 800BBFAC
}

// fn_800BBFB0
void f_800BBFB0(Ctx* __restrict c) {
  c->r[3]=R8(c->r[13]+0xFFFFA481u); // 800BBFB0
  return; // 800BBFB4
}

// GXGetCPUFifo
void f_800BBFB8(Ctx* __restrict c) {
  trace_call(0x800BBFB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BBFB8
  c->r[0]=c->lr; // 800BBFBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BBFC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BBFC4
  c->r[31]=c->r[3]|c->r[3]; // 800BBFC8
  c->r[0]=R8(c->r[13]+0xFFFFA480u); // 800BBFCC
  cmps(c,0,(int32_t)c->r[0],0); // 800BBFD0
  if (!crb(c,2)) { goto L_800BBFE0; } // 800BBFD4
  c->r[3]=0u+0x00000000u; // 800BBFD8
  goto L_800BC038; // 800BBFDC
L_800BBFE0:;
  c->lr=0x800BBFE4u; f_800BCF38(c); // 800BBFE0
  c->lr=0x800BBFE8u; f_800BBEB0(c); // 800BBFE4
  c->r[5]=0u+0x802C0000u; // 800BBFE8
  {uint32_t ea=c->r[5]+0xFFFFC784u; c->r[4]=R32(ea); c->r[5]=ea;} // 800BBFEC
  c->r[3]=0u+0x00000001u; // 800BBFF0
  c->r[0]=R32(c->r[5]+0x00000004u); // 800BBFF4
  W32(c->r[31]+0x00000000u,c->r[4]); // 800BBFF8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800BBFFC
  c->r[4]=R32(c->r[5]+0x00000008u); // 800BC000
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800BC004
  W32(c->r[31]+0x00000008u,c->r[4]); // 800BC008
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800BC00C
  c->r[4]=R32(c->r[5]+0x00000010u); // 800BC010
  c->r[0]=R32(c->r[5]+0x00000014u); // 800BC014
  W32(c->r[31]+0x00000010u,c->r[4]); // 800BC018
  W32(c->r[31]+0x00000014u,c->r[0]); // 800BC01C
  c->r[4]=R32(c->r[5]+0x00000018u); // 800BC020
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 800BC024
  W32(c->r[31]+0x00000018u,c->r[4]); // 800BC028
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 800BC02C
  c->r[0]=R32(c->r[5]+0x00000020u); // 800BC030
  W32(c->r[31]+0x00000020u,c->r[0]); // 800BC034
L_800BC038:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC038
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC03C
  c->lr=c->r[0]; // 800BC040
  c->r[1]=c->r[1]+0x00000010u; // 800BC044
  return; // 800BC048
}

// GXGetFifoPtrs
void f_800BC04C(Ctx* __restrict c) {
  trace_call(0x800BC04Cu);
  c->r[6]=R32(c->r[3]+0x00000014u); // 800BC04C
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BC050
  W32(c->r[4]+0x00000000u,c->r[6]); // 800BC054
  W32(c->r[5]+0x00000000u,c->r[0]); // 800BC058
  return; // 800BC05C
}

// fn_800BC060
void f_800BC060(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 800BC060
  return; // 800BC064
}

// fn_800BC068
void f_800BC068(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000020u); // 800BC068
  return; // 800BC06C
}

// GXSetBreakPtCallback
void f_800BC070(Ctx* __restrict c) {
  trace_call(0x800BC070u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC070
  c->r[0]=c->lr; // 800BC074
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC078
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BC07C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BC080
  c->r[30]=c->r[3]|c->r[3]; // 800BC084
  c->r[31]=R32(c->r[13]+0xFFFFA48Cu); // 800BC088
  c->lr=0x800BC090u; f_8009DF9C(c); // 800BC08C
  W32(c->r[13]+0xFFFFA48Cu,c->r[30]); // 800BC090
  c->lr=0x800BC098u; f_8009DFC4(c); // 800BC094
  c->r[3]=c->r[31]|c->r[31]; // 800BC098
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC09C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BC0A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC0A4
  c->lr=c->r[0]; // 800BC0A8
  c->r[1]=c->r[1]+0x00000010u; // 800BC0AC
  return; // 800BC0B0
}

// GXEnableBreakPt
void f_800BC0B4(Ctx* __restrict c) {
  trace_call(0x800BC0B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC0B4
  c->r[0]=c->lr; // 800BC0B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC0BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BC0C0
  c->r[31]=c->r[3]|c->r[3]; // 800BC0C4
  c->lr=0x800BC0CCu; f_8009DF9C(c); // 800BC0C8
  c->r[6]=R32(c->r[2]+0xFFFF90C0u); // 800BC0CC
  c->r[0]=rotl(c->r[31],16)&0x00003FFFu; // 800BC0D0
  c->r[4]=R32(c->r[6]+0x00000008u); // 800BC0D4
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFFEu; // 800BC0D8
  W32(c->r[6]+0x00000008u,c->r[5]); // 800BC0DC
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BC0E0
  W16(c->r[4]+0x00000002u,c->r[5]); // 800BC0E4
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BC0E8
  W16(c->r[4]+0x0000003Cu,c->r[31]); // 800BC0EC
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BC0F0
  W16(c->r[4]+0x0000003Eu,c->r[0]); // 800BC0F4
  c->r[0]=R32(c->r[6]+0x00000008u); // 800BC0F8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800BC0FC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 800BC100
  W32(c->r[6]+0x00000008u,c->r[0]); // 800BC104
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BC108
  W16(c->r[4]+0x00000002u,c->r[0]); // 800BC10C
  c->r[0]=R32(c->r[6]+0x00000008u); // 800BC110
  c->r[0]=c->r[0]|0x00000022u; // 800BC114
  W32(c->r[6]+0x00000008u,c->r[0]); // 800BC118
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BC11C
  W16(c->r[4]+0x00000002u,c->r[0]); // 800BC120
  W32(c->r[13]+0xFFFFA488u,c->r[31]); // 800BC124
  c->r[0]=R32(c->r[6]+0x00000008u); // 800BC128
  c->r[0]=c->r[0]|0x00000001u; // 800BC12C
  W32(c->r[6]+0x00000008u,c->r[0]); // 800BC130
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BC134
  W16(c->r[4]+0x00000002u,c->r[0]); // 800BC138
  c->lr=0x800BC140u; f_8009DFC4(c); // 800BC13C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC140
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC144
  c->lr=c->r[0]; // 800BC148
  c->r[1]=c->r[1]+0x00000010u; // 800BC14C
  return; // 800BC150
}

// GXDisableBreakPt
void f_800BC154(Ctx* __restrict c) {
  trace_call(0x800BC154u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC154
  c->r[0]=c->lr; // 800BC158
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC15C
  c->lr=0x800BC164u; f_8009DF9C(c); // 800BC160
  c->r[6]=R32(c->r[2]+0xFFFF90C0u); // 800BC164
  c->r[0]=0u+0x00000000u; // 800BC168
  c->r[4]=R32(c->r[6]+0x00000008u); // 800BC16C
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFDu; // 800BC170
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFDFu; // 800BC174
  W32(c->r[6]+0x00000008u,c->r[5]); // 800BC178
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BC17C
  W16(c->r[4]+0x00000002u,c->r[5]); // 800BC180
  W32(c->r[13]+0xFFFFA488u,c->r[0]); // 800BC184
  c->lr=0x800BC18Cu; f_8009DFC4(c); // 800BC188
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC18C
  c->lr=c->r[0]; // 800BC190
  c->r[1]=c->r[1]+0x00000010u; // 800BC194
  return; // 800BC198
}

// __GXFifoInit
void f_800BC19C(Ctx* __restrict c) {
  trace_call(0x800BC19Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC19C
  c->r[0]=c->lr; // 800BC1A0
  c->r[4]=0u+0x800C0000u; // 800BC1A4
  c->r[3]=0u+0x00000011u; // 800BC1A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BC1AC
  c->r[4]=c->r[4]+0xFFFFB75Cu; // 800BC1B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BC1B4
  c->lr=0x800BC1BCu; f_8009DFE8(c); // 800BC1B8
  c->r[3]=0u+0x00004000u; // 800BC1BC
  c->lr=0x800BC1C4u; f_8009E3AC(c); // 800BC1C0
  c->lr=0x800BC1C8u; f_800A0A90(c); // 800BC1C4
  c->r[31]=0u+0x00000000u; // 800BC1C8
  W32(c->r[13]+0xFFFFA494u,c->r[3]); // 800BC1CC
  c->r[3]=0u+0x802C0000u; // 800BC1D0
  c->r[4]=0u+0x00000000u; // 800BC1D4
  W32(c->r[13]+0xFFFFA490u,c->r[31]); // 800BC1D8
  c->r[3]=c->r[3]+0xFFFFC784u; // 800BC1DC
  c->r[5]=0u+0x00000024u; // 800BC1E0
  c->lr=0x800BC1E8u; f_8000443C(c); // 800BC1E4
  c->r[3]=0u+0x802C0000u; // 800BC1E8
  c->r[4]=0u+0x00000000u; // 800BC1EC
  c->r[3]=c->r[3]+0xFFFFC760u; // 800BC1F0
  c->r[5]=0u+0x00000024u; // 800BC1F4
  c->lr=0x800BC1FCu; f_8000443C(c); // 800BC1F8
  W8(c->r[13]+0xFFFFA480u,c->r[31]); // 800BC1FC
  W8(c->r[13]+0xFFFFA481u,c->r[31]); // 800BC200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC204
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BC208
  c->lr=c->r[0]; // 800BC20C
  c->r[1]=c->r[1]+0x00000010u; // 800BC210
  return; // 800BC214
}

// fn_800BC218
void f_800BC218(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC218
  c->r[0]=c->lr; // 800BC21C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BC220
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BC224
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BC228
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BC22C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800BC230
  c->r[0]=R8(c->r[13]+0xFFFFA481u); // 800BC234
  cmps(c,0,(int32_t)c->r[0],0); // 800BC238
  if (crb(c,2)) { goto L_800BC398; } // 800BC23C
  c->lr=0x800BC244u; f_8009DF9C(c); // 800BC240
  c->r[29]=R32(c->r[2]+0xFFFF90C0u); // 800BC244
  c->r[30]=0u+0x802C0000u; // 800BC248
  c->r[28]=c->r[3]|c->r[3]; // 800BC24C
  c->r[31]=0u+0x00000000u; // 800BC250
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BC254
  c->r[30]=c->r[30]+0xFFFFC760u; // 800BC258
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800BC25C
  W32(c->r[29]+0x00000008u,c->r[0]); // 800BC260
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BC264
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BC268
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BC26C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF3u; // 800BC270
  W32(c->r[29]+0x00000008u,c->r[0]); // 800BC274
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BC278
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BC27C
  c->r[0]=R32(c->r[30]+0x00000018u); // 800BC280
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 800BC284
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BC288
  W32(c->r[30]+0x00000014u,c->r[0]); // 800BC28C
  W16(c->r[3]+0x00000030u,c->r[31]); // 800BC290
  c->r[0]=R32(c->r[30]+0x00000018u); // 800BC294
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BC298
  W16(c->r[3]+0x00000034u,c->r[0]); // 800BC29C
  c->r[0]=R32(c->r[30]+0x00000014u); // 800BC2A0
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BC2A4
  W16(c->r[3]+0x00000038u,c->r[0]); // 800BC2A8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800BC2AC
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BC2B0
  c->r[0]=sraw(c,c->r[0],16); // 800BC2B4
  W16(c->r[3]+0x00000032u,c->r[0]); // 800BC2B8
  c->r[0]=R32(c->r[30]+0x00000018u); // 800BC2BC
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BC2C0
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 800BC2C4
  W16(c->r[3]+0x00000036u,c->r[0]); // 800BC2C8
  c->r[0]=R32(c->r[30]+0x00000014u); // 800BC2CC
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BC2D0
  c->r[0]=rotl(c->r[0],16)&0x00003FFFu; // 800BC2D4
  W16(c->r[3]+0x0000003Au,c->r[0]); // 800BC2D8
  c->lr=0x800BC2E0u; f_80097A44(c); // 800BC2DC
  c->r[0]=R8(c->r[13]+0xFFFFA498u); // 800BC2E0
  cmps(c,0,(int32_t)c->r[0],0); // 800BC2E4
  if (crb(c,2)) { goto L_800BC344; } // 800BC2E8
  c->r[5]=0u+0x802C0000u; // 800BC2EC
  c->r[4]=R32(c->r[30]+0x00000018u); // 800BC2F0
  c->r[5]=c->r[5]+0xFFFFC784u; // 800BC2F4
  c->r[3]=R32(c->r[30]+0x00000014u); // 800BC2F8
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800BC2FC
  c->r[31]=(rotl(c->r[4],0)&0x1FFFFFE0u)|(c->r[31]&~0x1FFFFFE0u); // 800BC300
  W32(c->r[5]+0x00000014u,c->r[3]); // 800BC304
  c->r[3]=R32(c->r[13]+0xFFFFA458u); // 800BC308
  W32(c->r[5]+0x00000018u,c->r[4]); // 800BC30C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 800BC310
  W32(c->r[3]+0x00000014u,c->r[31]); // 800BC314
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BC318
  c->r[0]=c->r[0]|0x00000004u; // 800BC31C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 800BC320
  W32(c->r[29]+0x00000008u,c->r[0]); // 800BC324
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BC328
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BC32C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BC330
  c->r[0]=c->r[0]|0x00000010u; // 800BC334
  W32(c->r[29]+0x00000008u,c->r[0]); // 800BC338
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800BC33C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BC340
L_800BC344:;
  c->r[4]=R32(c->r[29]+0x00000008u); // 800BC344
  c->r[0]=0u+0x00000000u; // 800BC348
  c->r[6]=R32(c->r[2]+0xFFFF90C0u); // 800BC34C
  c->r[3]=c->r[28]|c->r[28]; // 800BC350
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFDu; // 800BC354
  c->r[5]=rotl(c->r[4],0)&0xFFFFFFDFu; // 800BC358
  W32(c->r[29]+0x00000008u,c->r[5]); // 800BC35C
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BC360
  W16(c->r[4]+0x00000002u,c->r[5]); // 800BC364
  W32(c->r[13]+0xFFFFA488u,c->r[0]); // 800BC368
  c->r[0]=R32(c->r[6]+0x00000010u); // 800BC36C
  c->r[0]=c->r[0]|0x00000003u; // 800BC370
  W32(c->r[6]+0x00000010u,c->r[0]); // 800BC374
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BC378
  W16(c->r[4]+0x00000004u,c->r[0]); // 800BC37C
  c->r[0]=R32(c->r[29]+0x00000008u); // 800BC380
  c->r[0]=c->r[0]|0x00000001u; // 800BC384
  W32(c->r[29]+0x00000008u,c->r[0]); // 800BC388
  c->r[4]=R32(c->r[13]+0xFFFFA45Cu); // 800BC38C
  W16(c->r[4]+0x00000002u,c->r[0]); // 800BC390
  c->lr=0x800BC398u; f_8009DFC4(c); // 800BC394
L_800BC398:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BC398
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BC39C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BC3A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BC3A4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800BC3A8
  c->lr=c->r[0]; // 800BC3AC
  c->r[1]=c->r[1]+0x00000020u; // 800BC3B0
  return; // 800BC3B4
}

// fn_800BC3B8
void f_800BC3B8(Ctx* __restrict c) {
  cmpu(c,0,c->r[3],0x00000019u); // 800BC3B8
  if (crb(c,1)) { goto L_800BC5CC; } // 800BC3BC
  c->r[5]=0u+0x80220000u; // 800BC3C0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BC3C4
  c->r[5]=c->r[5]+0xFFFFB310u; // 800BC3C8
  c->r[5]=R32(c->r[5]+c->r[0]); // 800BC3CC
  c->ctr=c->r[5]; // 800BC3D0
  if (true) { switch (c->ctr) { case 0x800BC3D8u: goto L_800BC3D8; case 0x800BC3ECu: goto L_800BC3EC; case 0x800BC400u: goto L_800BC400; case 0x800BC414u: goto L_800BC414; case 0x800BC428u: goto L_800BC428; case 0x800BC43Cu: goto L_800BC43C; case 0x800BC450u: goto L_800BC450; case 0x800BC464u: goto L_800BC464; case 0x800BC478u: goto L_800BC478; case 0x800BC48Cu: goto L_800BC48C; case 0x800BC4A0u: goto L_800BC4A0; case 0x800BC4D4u: goto L_800BC4D4; case 0x800BC508u: goto L_800BC508; case 0x800BC51Cu: goto L_800BC51C; case 0x800BC530u: goto L_800BC530; case 0x800BC544u: goto L_800BC544; case 0x800BC558u: goto L_800BC558; case 0x800BC56Cu: goto L_800BC56C; case 0x800BC580u: goto L_800BC580; case 0x800BC594u: goto L_800BC594; case 0x800BC5A8u: goto L_800BC5A8; case 0x800BC5BCu: goto L_800BC5BC; case 0x800BC5CCu: goto L_800BC5CC; default: break; } dispatch(c,c->ctr); return; } // 800BC3D4
L_800BC3D8:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC3D8
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BC3DC
  c->r[0]=(rotl(c->r[4],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800BC3E0
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BC3E4
  goto L_800BC5CC; // 800BC3E8
L_800BC3EC:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC3EC
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BC3F0
  c->r[0]=(rotl(c->r[4],1)&0x00000002u)|(c->r[0]&~0x00000002u); // 800BC3F4
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BC3F8
  goto L_800BC5CC; // 800BC3FC
L_800BC400:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC400
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BC404
  c->r[0]=(rotl(c->r[4],2)&0x00000004u)|(c->r[0]&~0x00000004u); // 800BC408
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BC40C
  goto L_800BC5CC; // 800BC410
L_800BC414:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC414
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BC418
  c->r[0]=(rotl(c->r[4],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 800BC41C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BC420
  goto L_800BC5CC; // 800BC424
L_800BC428:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC428
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BC42C
  c->r[0]=(rotl(c->r[4],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 800BC430
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BC434
  goto L_800BC5CC; // 800BC438
L_800BC43C:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC43C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BC440
  c->r[0]=(rotl(c->r[4],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 800BC444
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BC448
  goto L_800BC5CC; // 800BC44C
L_800BC450:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC450
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BC454
  c->r[0]=(rotl(c->r[4],6)&0x00000040u)|(c->r[0]&~0x00000040u); // 800BC458
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BC45C
  goto L_800BC5CC; // 800BC460
L_800BC464:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC464
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BC468
  c->r[0]=(rotl(c->r[4],7)&0x00000080u)|(c->r[0]&~0x00000080u); // 800BC46C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BC470
  goto L_800BC5CC; // 800BC474
L_800BC478:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC478
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BC47C
  c->r[0]=(rotl(c->r[4],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 800BC480
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BC484
  goto L_800BC5CC; // 800BC488
L_800BC48C:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC48C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BC490
  c->r[0]=(rotl(c->r[4],9)&0x00000600u)|(c->r[0]&~0x00000600u); // 800BC494
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BC498
  goto L_800BC5CC; // 800BC49C
L_800BC4A0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BC4A0
  if (crb(c,2)) { goto L_800BC4C4; } // 800BC4A4
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BC4A8
  c->r[3]=0u+0x00000001u; // 800BC4AC
  c->r[0]=0u+0x00000000u; // 800BC4B0
  W8(c->r[5]+0x00000524u,c->r[3]); // 800BC4B4
  W8(c->r[5]+0x00000525u,c->r[0]); // 800BC4B8
  W32(c->r[5]+0x00000520u,c->r[4]); // 800BC4BC
  goto L_800BC5CC; // 800BC4C0
L_800BC4C4:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC4C4
  c->r[0]=0u+0x00000000u; // 800BC4C8
  W8(c->r[3]+0x00000524u,c->r[0]); // 800BC4CC
  goto L_800BC5CC; // 800BC4D0
L_800BC4D4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BC4D4
  if (crb(c,2)) { goto L_800BC4F8; } // 800BC4D8
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BC4DC
  c->r[3]=0u+0x00000001u; // 800BC4E0
  c->r[0]=0u+0x00000000u; // 800BC4E4
  W8(c->r[5]+0x00000525u,c->r[3]); // 800BC4E8
  W8(c->r[5]+0x00000524u,c->r[0]); // 800BC4EC
  W32(c->r[5]+0x00000520u,c->r[4]); // 800BC4F0
  goto L_800BC5CC; // 800BC4F4
L_800BC4F8:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC4F8
  c->r[0]=0u+0x00000000u; // 800BC4FC
  W8(c->r[3]+0x00000525u,c->r[0]); // 800BC500
  goto L_800BC5CC; // 800BC504
L_800BC508:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC508
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BC50C
  c->r[0]=(rotl(c->r[4],13)&0x00006000u)|(c->r[0]&~0x00006000u); // 800BC510
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BC514
  goto L_800BC5CC; // 800BC518
L_800BC51C:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC51C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800BC520
  c->r[0]=(rotl(c->r[4],15)&0x00018000u)|(c->r[0]&~0x00018000u); // 800BC524
  W32(c->r[3]+0x00000014u,c->r[0]); // 800BC528
  goto L_800BC5CC; // 800BC52C
L_800BC530:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC530
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BC534
  c->r[0]=(rotl(c->r[4],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 800BC538
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BC53C
  goto L_800BC5CC; // 800BC540
L_800BC544:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC544
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BC548
  c->r[0]=(rotl(c->r[4],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 800BC54C
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BC550
  goto L_800BC5CC; // 800BC554
L_800BC558:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC558
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BC55C
  c->r[0]=(rotl(c->r[4],4)&0x00000030u)|(c->r[0]&~0x00000030u); // 800BC560
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BC564
  goto L_800BC5CC; // 800BC568
L_800BC56C:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC56C
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BC570
  c->r[0]=(rotl(c->r[4],6)&0x000000C0u)|(c->r[0]&~0x000000C0u); // 800BC574
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BC578
  goto L_800BC5CC; // 800BC57C
L_800BC580:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC580
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BC584
  c->r[0]=(rotl(c->r[4],8)&0x00000300u)|(c->r[0]&~0x00000300u); // 800BC588
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BC58C
  goto L_800BC5CC; // 800BC590
L_800BC594:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC594
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BC598
  c->r[0]=(rotl(c->r[4],10)&0x00000C00u)|(c->r[0]&~0x00000C00u); // 800BC59C
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BC5A0
  goto L_800BC5CC; // 800BC5A4
L_800BC5A8:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC5A8
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BC5AC
  c->r[0]=(rotl(c->r[4],12)&0x00003000u)|(c->r[0]&~0x00003000u); // 800BC5B0
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BC5B4
  goto L_800BC5CC; // 800BC5B8
L_800BC5BC:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC5BC
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BC5C0
  c->r[0]=(rotl(c->r[4],14)&0x0000C000u)|(c->r[0]&~0x0000C000u); // 800BC5C4
  W32(c->r[3]+0x00000018u,c->r[0]); // 800BC5C8
L_800BC5CC:;
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800BC5CC
  c->r[0]=R8(c->r[4]+0x00000524u); // 800BC5D0
  cmps(c,0,(int32_t)c->r[0],0); // 800BC5D4
  if (!crb(c,2)) { goto L_800BC5E8; } // 800BC5D8
  c->r[0]=R8(c->r[4]+0x00000525u); // 800BC5DC
  cmps(c,0,(int32_t)c->r[0],0); // 800BC5E0
  if (crb(c,2)) { goto L_800BC600; } // 800BC5E4
L_800BC5E8:;
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BC5E8
  c->r[0]=R32(c->r[5]+0x00000520u); // 800BC5EC
  c->r[3]=R32(c->r[5]+0x00000014u); // 800BC5F0
  c->r[3]=(rotl(c->r[0],11)&0x00001800u)|(c->r[3]&~0x00001800u); // 800BC5F4
  W32(c->r[5]+0x00000014u,c->r[3]); // 800BC5F8
  goto L_800BC60C; // 800BC5FC
L_800BC600:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 800BC600
  c->r[0]=rotl(c->r[0],0)&0xFFFFE7FFu; // 800BC604
  W32(c->r[4]+0x00000014u,c->r[0]); // 800BC608
L_800BC60C:;
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800BC60C
  c->r[0]=c->r[0]|0x00000008u; // 800BC610
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800BC614
  return; // 800BC618
}

// fn_800BC61C
void f_800BC61C(Ctx* __restrict c) {
  c->r[5]=0u+0xCC010000u; // 800BC61C
  c->r[6]=0u+0x00000008u; // 800BC620
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800BC624
  c->r[4]=0u+0x00000050u; // 800BC628
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC62C
  c->r[0]=0u+0x00000060u; // 800BC630
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 800BC634
  c->r[4]=R32(c->r[3]+0x00000014u); // 800BC638
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800BC63C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800BC640
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800BC644
  c->r[0]=R32(c->r[3]+0x00000018u); // 800BC648
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800BC64C
  c->r[0]=R8(c->r[3]+0x00000525u); // 800BC650
  cmps(c,0,(int32_t)c->r[0],0); // 800BC654
  if (crb(c,2)) { goto L_800BC664; } // 800BC658
  c->r[8]=0u+0x00000002u; // 800BC65C
  goto L_800BC674; // 800BC660
L_800BC664:;
  c->r[4]=R8(c->r[3]+0x00000524u); // 800BC664
  c->r[0]=0u-c->r[4]; // 800BC668
  c->r[0]=c->r[0]|c->r[4]; // 800BC66C
  c->r[8]=rotl(c->r[0],1)&0x00000001u; // 800BC670
L_800BC674:;
  c->r[5]=R32(c->r[3]+0x00000014u); // 800BC674
  c->r[6]=0u+0xCC010000u; // 800BC678
  c->r[4]=R32(c->r[3]+0x00000018u); // 800BC67C
  c->r[0]=0u+0x00000010u; // 800BC680
  c->r[7]=rotl(c->r[5],19)&0x0000000Fu; // 800BC684
  c->r[5]=0u+0x00001008u; // 800BC688
  c->r[7]=cntlz(c->r[7]); // 800BC68C
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 800BC690
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800BC694
  c->r[7]=addc(c,~c->r[7],0x00000021u,1); // 800BC698
  c->r[0]=cntlz(c->r[4]); // 800BC69C
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800BC6A0
  c->r[0]=addc(c,~c->r[0],0x00000021u,1); // 800BC6A4
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800BC6A8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF0u; // 800BC6AC
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 800BC6B0
  c->r[5]=c->r[0]|c->r[7]; // 800BC6B4
  c->r[4]=c->r[5]|c->r[4]; // 800BC6B8
  c->r[0]=0u+0x00000001u; // 800BC6BC
  W32(c->r[6]+0xFFFF8000u,c->r[4]); // 800BC6C0
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BC6C4
  return; // 800BC6C8
}

// fn_800BC6CC
void f_800BC6CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BC6CC
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BC6D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BC6D4
  c->r[0]=R16(c->r[3]+0x00000004u); // 800BC6D8
  cmps(c,0,(int32_t)c->r[0],0); // 800BC6DC
  if (crb(c,2)) { goto L_800BC7EC; } // 800BC6E0
  c->r[9]=R32(c->r[3]+0x00000014u); // 800BC6E4
  c->r[7]=c->r[13]+0xFFFF8988u; // 800BC6E8
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 800BC6EC
  c->r[0]=rotl(c->r[9],0)&0x00000001u; // 800BC6F0
  c->r[4]=rotl(c->r[9],31)&0x00000001u; // 800BC6F4
  c->r[0]=c->r[0]+c->r[4]; // 800BC6F8
  c->r[8]=rotl(c->r[5],23)&0x00000001u; // 800BC6FC
  c->r[4]=rotl(c->r[9],30)&0x00000001u; // 800BC700
  c->r[5]=rotl(c->r[9],21)&0x00000003u; // 800BC704
  c->r[0]=c->r[0]+c->r[4]; // 800BC708
  cmps(c,0,(int32_t)c->r[8],1); // 800BC70C
  c->r[4]=rotl(c->r[9],29)&0x00000001u; // 800BC710
  c->r[6]=rotl(c->r[9],26)&0x00000001u; // 800BC714
  c->r[0]=c->r[0]+c->r[4]; // 800BC718
  c->r[8]=rotl(c->r[9],24)&0x00000001u; // 800BC71C
  c->r[4]=rotl(c->r[9],28)&0x00000001u; // 800BC720
  c->r[31]=R32(c->r[3]+0x00000018u); // 800BC724
  c->r[0]=c->r[0]+c->r[4]; // 800BC728
  c->r[5]=R8(c->r[7]+c->r[5]); // 800BC72C
  c->r[4]=rotl(c->r[9],27)&0x00000001u; // 800BC730
  c->r[0]=c->r[0]+c->r[4]; // 800BC734
  c->r[0]=c->r[0]+c->r[6]; // 800BC738
  c->r[6]=rotl(c->r[9],25)&0x00000001u; // 800BC73C
  c->r[0]=c->r[0]+c->r[6]; // 800BC740
  c->r[4]=rotl(c->r[9],23)&0x00000003u; // 800BC744
  c->r[6]=R8(c->r[7]+c->r[4]); // 800BC748
  c->r[0]=c->r[0]+c->r[8]; // 800BC74C
  c->r[4]=0u+0x00000001u; // 800BC750
  c->r[0]=c->r[0]+c->r[6]; // 800BC754
  if (!crb(c,2)) { goto L_800BC760; } // 800BC758
  c->r[4]=0u+0x00000003u; // 800BC75C
L_800BC760:;
  c->r[8]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 800BC760
  c->r[7]=c->r[13]+0xFFFF8980u; // 800BC764
  c->r[4]=rotl(c->r[9],19)&0x00000003u; // 800BC768
  c->r[5]=rotl(c->r[9],17)&0x00000003u; // 800BC76C
  c->r[6]=R8(c->r[7]+c->r[4]); // 800BC770
  c->r[5]=R8(c->r[7]+c->r[5]); // 800BC774
  c->r[0]=c->r[0]+c->r[8]; // 800BC778
  c->r[12]=c->r[13]+0xFFFF8984u; // 800BC77C
  c->r[0]=c->r[0]+c->r[6]; // 800BC780
  c->r[4]=rotl(c->r[31],0)&0x00000003u; // 800BC784
  c->r[10]=rotl(c->r[31],30)&0x00000003u; // 800BC788
  c->r[11]=R8(c->r[12]+c->r[4]); // 800BC78C
  c->r[0]=c->r[0]+c->r[5]; // 800BC790
  c->r[9]=rotl(c->r[31],28)&0x00000003u; // 800BC794
  c->r[8]=rotl(c->r[31],26)&0x00000003u; // 800BC798
  c->r[7]=rotl(c->r[31],24)&0x00000003u; // 800BC79C
  c->r[6]=rotl(c->r[31],22)&0x00000003u; // 800BC7A0
  c->r[5]=rotl(c->r[31],20)&0x00000003u; // 800BC7A4
  c->r[4]=rotl(c->r[31],18)&0x00000003u; // 800BC7A8
  c->r[10]=R8(c->r[12]+c->r[10]); // 800BC7AC
  c->r[0]=c->r[0]+c->r[11]; // 800BC7B0
  c->r[9]=R8(c->r[12]+c->r[9]); // 800BC7B4
  c->r[0]=c->r[0]+c->r[10]; // 800BC7B8
  c->r[8]=R8(c->r[12]+c->r[8]); // 800BC7BC
  c->r[0]=c->r[0]+c->r[9]; // 800BC7C0
  c->r[7]=R8(c->r[12]+c->r[7]); // 800BC7C4
  c->r[0]=c->r[0]+c->r[8]; // 800BC7C8
  c->r[6]=R8(c->r[12]+c->r[6]); // 800BC7CC
  c->r[0]=c->r[0]+c->r[7]; // 800BC7D0
  c->r[5]=R8(c->r[12]+c->r[5]); // 800BC7D4
  c->r[0]=c->r[0]+c->r[6]; // 800BC7D8
  c->r[4]=R8(c->r[12]+c->r[4]); // 800BC7DC
  c->r[0]=c->r[0]+c->r[5]; // 800BC7E0
  c->r[0]=c->r[0]+c->r[4]; // 800BC7E4
  W16(c->r[3]+0x00000006u,c->r[0]); // 800BC7E8
L_800BC7EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BC7EC
  c->r[1]=c->r[1]+0x00000010u; // 800BC7F0
  return; // 800BC7F4
}

// fn_800BC7F8
void f_800BC7F8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BC7F8
  c->r[0]=0u+0x00000001u; // 800BC7FC
  c->r[3]=0u+0x00000000u; // 800BC800
  c->r[4]=0u+0x00000000u; // 800BC804
  c->r[3]=(rotl(c->r[0],9)&0x00000600u)|(c->r[3]&~0x00000600u); // 800BC808
  W32(c->r[5]+0x00000014u,c->r[3]); // 800BC80C
  W32(c->r[5]+0x00000018u,c->r[4]); // 800BC810
  W8(c->r[5]+0x00000524u,c->r[4]); // 800BC814
  W8(c->r[5]+0x00000525u,c->r[4]); // 800BC818
  c->r[0]=R32(c->r[5]+0x000005FCu); // 800BC81C
  c->r[0]=c->r[0]|0x00000008u; // 800BC820
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800BC824
  return; // 800BC828
}

// fn_800BC82C
void f_800BC82C(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0xFFFFFFF7u; // 800BC82C
  c->r[8]=R32(c->r[2]+0xFFFF90C0u); // 800BC830
  cmpu(c,0,c->r[0],0x00000010u); // 800BC834
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BC838
  c->r[8]=c->r[8]+c->r[4]; // 800BC83C
  if (crb(c,1)) { goto L_800BC99C; } // 800BC840
  c->r[4]=0u+0x80220000u; // 800BC844
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BC848
  c->r[4]=c->r[4]+0xFFFFB378u; // 800BC84C
  c->r[4]=R32(c->r[4]+c->r[0]); // 800BC850
  c->ctr=c->r[4]; // 800BC854
  if (true) { switch (c->ctr) { case 0x800BC85Cu: goto L_800BC85C; case 0x800BC874u: goto L_800BC874; case 0x800BC8B0u: goto L_800BC8B0; case 0x800BC8C4u: goto L_800BC8C4; case 0x800BC8D8u: goto L_800BC8D8; case 0x800BC8F0u: goto L_800BC8F0; case 0x800BC908u: goto L_800BC908; case 0x800BC920u: goto L_800BC920; case 0x800BC938u: goto L_800BC938; case 0x800BC958u: goto L_800BC958; case 0x800BC970u: goto L_800BC970; case 0x800BC988u: goto L_800BC988; case 0x800BC99Cu: goto L_800BC99C; default: break; } dispatch(c,c->ctr); return; } // 800BC858
L_800BC85C:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BC85C
  c->r[0]=(rotl(c->r[5],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800BC860
  c->r[0]=(rotl(c->r[6],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 800BC864
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 800BC868
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BC86C
  goto L_800BC99C; // 800BC870
L_800BC874:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BC874
  c->r[0]=(rotl(c->r[6],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 800BC878
  cmps(c,0,(int32_t)c->r[5],2); // 800BC87C
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BC880
  if (!crb(c,2)) { goto L_800BC89C; } // 800BC884
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BC888
  c->r[0]=c->r[0]|0x00000200u; // 800BC88C
  c->r[0]=c->r[0]|0x80000000u; // 800BC890
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BC894
  goto L_800BC99C; // 800BC898
L_800BC89C:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BC89C
  c->r[0]=(rotl(c->r[5],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 800BC8A0
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800BC8A4
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BC8A8
  goto L_800BC99C; // 800BC8AC
L_800BC8B0:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BC8B0
  c->r[0]=(rotl(c->r[5],13)&0x00002000u)|(c->r[0]&~0x00002000u); // 800BC8B4
  c->r[0]=(rotl(c->r[6],14)&0x0001C000u)|(c->r[0]&~0x0001C000u); // 800BC8B8
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BC8BC
  goto L_800BC99C; // 800BC8C0
L_800BC8C4:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BC8C4
  c->r[0]=(rotl(c->r[5],17)&0x00020000u)|(c->r[0]&~0x00020000u); // 800BC8C8
  c->r[0]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 800BC8CC
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BC8D0
  goto L_800BC99C; // 800BC8D4
L_800BC8D8:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BC8D8
  c->r[0]=(rotl(c->r[5],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 800BC8DC
  c->r[0]=(rotl(c->r[6],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 800BC8E0
  c->r[0]=(rotl(c->r[7],25)&0x3E000000u)|(c->r[0]&~0x3E000000u); // 800BC8E4
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BC8E8
  goto L_800BC99C; // 800BC8EC
L_800BC8F0:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800BC8F0
  c->r[0]=(rotl(c->r[5],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800BC8F4
  c->r[0]=(rotl(c->r[6],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 800BC8F8
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 800BC8FC
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800BC900
  goto L_800BC99C; // 800BC904
L_800BC908:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800BC908
  c->r[0]=(rotl(c->r[5],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 800BC90C
  c->r[0]=(rotl(c->r[6],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 800BC910
  c->r[0]=(rotl(c->r[7],13)&0x0003E000u)|(c->r[0]&~0x0003E000u); // 800BC914
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800BC918
  goto L_800BC99C; // 800BC91C
L_800BC920:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800BC920
  c->r[0]=(rotl(c->r[5],18)&0x00040000u)|(c->r[0]&~0x00040000u); // 800BC924
  c->r[0]=(rotl(c->r[6],19)&0x00380000u)|(c->r[0]&~0x00380000u); // 800BC928
  c->r[0]=(rotl(c->r[7],22)&0x07C00000u)|(c->r[0]&~0x07C00000u); // 800BC92C
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800BC930
  goto L_800BC99C; // 800BC934
L_800BC938:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800BC938
  c->r[0]=(rotl(c->r[5],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 800BC93C
  c->r[0]=(rotl(c->r[6],28)&0x70000000u)|(c->r[0]&~0x70000000u); // 800BC940
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800BC944
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800BC948
  c->r[0]=(rotl(c->r[7],0)&0x0000001Fu)|(c->r[0]&~0x0000001Fu); // 800BC94C
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800BC950
  goto L_800BC99C; // 800BC954
L_800BC958:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800BC958
  c->r[0]=(rotl(c->r[5],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 800BC95C
  c->r[0]=(rotl(c->r[6],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 800BC960
  c->r[0]=(rotl(c->r[7],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 800BC964
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800BC968
  goto L_800BC99C; // 800BC96C
L_800BC970:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800BC970
  c->r[0]=(rotl(c->r[5],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 800BC974
  c->r[0]=(rotl(c->r[6],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 800BC978
  c->r[0]=(rotl(c->r[7],18)&0x007C0000u)|(c->r[0]&~0x007C0000u); // 800BC97C
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800BC980
  goto L_800BC99C; // 800BC984
L_800BC988:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800BC988
  c->r[0]=(rotl(c->r[5],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 800BC98C
  c->r[0]=(rotl(c->r[6],24)&0x07000000u)|(c->r[0]&~0x07000000u); // 800BC990
  c->r[0]=(rotl(c->r[7],27)&0xF8000000u)|(c->r[0]&~0xF8000000u); // 800BC994
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800BC998
L_800BC99C:;
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BC99C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800BC9A0
  c->r[3]=0u+0x00000001u; // 800BC9A4
  c->r[4]=R32(c->r[5]+0x000005FCu); // 800BC9A8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800BC9AC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800BC9B0
  c->r[3]=c->r[4]|0x00000010u; // 800BC9B4
  W32(c->r[5]+0x000005FCu,c->r[3]); // 800BC9B8
  c->r[3]=R8(c->r[5]+0x000005FBu); // 800BC9BC
  c->r[0]=c->r[3]|c->r[0]; // 800BC9C0
  W8(c->r[5]+0x000005FBu,c->r[0]); // 800BC9C4
  return; // 800BC9C8
}

// fn_800BC9CC
void f_800BC9CC(Ctx* __restrict c) {
  c->r[6]=R32(c->r[2]+0xFFFF90C0u); // 800BC9CC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BC9D0
  c->r[5]=0u+0x80220000u; // 800BC9D4
  c->r[8]=c->r[6]+c->r[0]; // 800BC9D8
  goto L_800BCB54; // 800BC9DC
L_800BC9E0:;
  c->r[6]=R32(c->r[4]+0x00000000u); // 800BC9E0
  c->r[7]=R8(c->r[4]+0x0000000Cu); // 800BC9E4
  c->r[0]=c->r[6]+0xFFFFFFF7u; // 800BC9E8
  c->r[10]=R32(c->r[4]+0x00000008u); // 800BC9EC
  cmpu(c,0,c->r[0],0x00000010u); // 800BC9F0
  c->r[9]=R32(c->r[4]+0x00000004u); // 800BC9F4
  if (crb(c,1)) { goto L_800BCB50; } // 800BC9F8
  c->r[6]=c->r[5]+0xFFFFB3BCu; // 800BC9FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800BCA00
  c->r[6]=R32(c->r[6]+c->r[0]); // 800BCA04
  c->ctr=c->r[6]; // 800BCA08
  if (true) { switch (c->ctr) { case 0x800BCA10u: goto L_800BCA10; case 0x800BCA28u: goto L_800BCA28; case 0x800BCA64u: goto L_800BCA64; case 0x800BCA78u: goto L_800BCA78; case 0x800BCA8Cu: goto L_800BCA8C; case 0x800BCAA4u: goto L_800BCAA4; case 0x800BCABCu: goto L_800BCABC; case 0x800BCAD4u: goto L_800BCAD4; case 0x800BCAECu: goto L_800BCAEC; case 0x800BCB0Cu: goto L_800BCB0C; case 0x800BCB24u: goto L_800BCB24; case 0x800BCB3Cu: goto L_800BCB3C; case 0x800BCB50u: goto L_800BCB50; default: break; } dispatch(c,c->ctr); return; } // 800BCA0C
L_800BCA10:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BCA10
  c->r[0]=(rotl(c->r[9],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800BCA14
  c->r[0]=(rotl(c->r[10],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 800BCA18
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 800BCA1C
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BCA20
  goto L_800BCB50; // 800BCA24
L_800BCA28:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BCA28
  c->r[0]=(rotl(c->r[10],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 800BCA2C
  cmps(c,0,(int32_t)c->r[9],2); // 800BCA30
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BCA34
  if (!crb(c,2)) { goto L_800BCA50; } // 800BCA38
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BCA3C
  c->r[0]=c->r[0]|0x00000200u; // 800BCA40
  c->r[0]=c->r[0]|0x80000000u; // 800BCA44
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BCA48
  goto L_800BCB50; // 800BCA4C
L_800BCA50:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BCA50
  c->r[0]=(rotl(c->r[9],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 800BCA54
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800BCA58
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BCA5C
  goto L_800BCB50; // 800BCA60
L_800BCA64:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BCA64
  c->r[0]=(rotl(c->r[9],13)&0x00002000u)|(c->r[0]&~0x00002000u); // 800BCA68
  c->r[0]=(rotl(c->r[10],14)&0x0001C000u)|(c->r[0]&~0x0001C000u); // 800BCA6C
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BCA70
  goto L_800BCB50; // 800BCA74
L_800BCA78:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BCA78
  c->r[0]=(rotl(c->r[9],17)&0x00020000u)|(c->r[0]&~0x00020000u); // 800BCA7C
  c->r[0]=(rotl(c->r[10],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 800BCA80
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BCA84
  goto L_800BCB50; // 800BCA88
L_800BCA8C:;
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 800BCA8C
  c->r[0]=(rotl(c->r[9],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 800BCA90
  c->r[0]=(rotl(c->r[10],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 800BCA94
  c->r[0]=(rotl(c->r[7],25)&0x3E000000u)|(c->r[0]&~0x3E000000u); // 800BCA98
  W32(c->r[8]+0x0000001Cu,c->r[0]); // 800BCA9C
  goto L_800BCB50; // 800BCAA0
L_800BCAA4:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800BCAA4
  c->r[0]=(rotl(c->r[9],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800BCAA8
  c->r[0]=(rotl(c->r[10],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 800BCAAC
  c->r[0]=(rotl(c->r[7],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 800BCAB0
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800BCAB4
  goto L_800BCB50; // 800BCAB8
L_800BCABC:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800BCABC
  c->r[0]=(rotl(c->r[9],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 800BCAC0
  c->r[0]=(rotl(c->r[10],10)&0x00001C00u)|(c->r[0]&~0x00001C00u); // 800BCAC4
  c->r[0]=(rotl(c->r[7],13)&0x0003E000u)|(c->r[0]&~0x0003E000u); // 800BCAC8
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800BCACC
  goto L_800BCB50; // 800BCAD0
L_800BCAD4:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800BCAD4
  c->r[0]=(rotl(c->r[9],18)&0x00040000u)|(c->r[0]&~0x00040000u); // 800BCAD8
  c->r[0]=(rotl(c->r[10],19)&0x00380000u)|(c->r[0]&~0x00380000u); // 800BCADC
  c->r[0]=(rotl(c->r[7],22)&0x07C00000u)|(c->r[0]&~0x07C00000u); // 800BCAE0
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800BCAE4
  goto L_800BCB50; // 800BCAE8
L_800BCAEC:;
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 800BCAEC
  c->r[0]=(rotl(c->r[9],27)&0x08000000u)|(c->r[0]&~0x08000000u); // 800BCAF0
  c->r[0]=(rotl(c->r[10],28)&0x70000000u)|(c->r[0]&~0x70000000u); // 800BCAF4
  W32(c->r[8]+0x0000003Cu,c->r[0]); // 800BCAF8
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800BCAFC
  c->r[0]=(rotl(c->r[7],0)&0x0000001Fu)|(c->r[0]&~0x0000001Fu); // 800BCB00
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800BCB04
  goto L_800BCB50; // 800BCB08
L_800BCB0C:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800BCB0C
  c->r[0]=(rotl(c->r[9],5)&0x00000020u)|(c->r[0]&~0x00000020u); // 800BCB10
  c->r[0]=(rotl(c->r[10],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 800BCB14
  c->r[0]=(rotl(c->r[7],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 800BCB18
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800BCB1C
  goto L_800BCB50; // 800BCB20
L_800BCB24:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800BCB24
  c->r[0]=(rotl(c->r[9],14)&0x00004000u)|(c->r[0]&~0x00004000u); // 800BCB28
  c->r[0]=(rotl(c->r[10],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 800BCB2C
  c->r[0]=(rotl(c->r[7],18)&0x007C0000u)|(c->r[0]&~0x007C0000u); // 800BCB30
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800BCB34
  goto L_800BCB50; // 800BCB38
L_800BCB3C:;
  c->r[0]=R32(c->r[8]+0x0000005Cu); // 800BCB3C
  c->r[0]=(rotl(c->r[9],23)&0x00800000u)|(c->r[0]&~0x00800000u); // 800BCB40
  c->r[0]=(rotl(c->r[10],24)&0x07000000u)|(c->r[0]&~0x07000000u); // 800BCB44
  c->r[0]=(rotl(c->r[7],27)&0xF8000000u)|(c->r[0]&~0xF8000000u); // 800BCB48
  W32(c->r[8]+0x0000005Cu,c->r[0]); // 800BCB4C
L_800BCB50:;
  c->r[4]=c->r[4]+0x00000010u; // 800BCB50
L_800BCB54:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800BCB54
  cmps(c,0,(int32_t)c->r[0],255); // 800BCB58
  if (!crb(c,2)) { IRQCHK(c); goto L_800BC9E0; } // 800BCB5C
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BCB60
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800BCB64
  c->r[3]=0u+0x00000001u; // 800BCB68
  c->r[4]=R32(c->r[5]+0x000005FCu); // 800BCB6C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800BCB70
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800BCB74
  c->r[3]=c->r[4]|0x00000010u; // 800BCB78
  W32(c->r[5]+0x000005FCu,c->r[3]); // 800BCB7C
  c->r[3]=R8(c->r[5]+0x000005FBu); // 800BCB80
  c->r[0]=c->r[3]|c->r[0]; // 800BCB84
  W8(c->r[5]+0x000005FBu,c->r[0]); // 800BCB88
  return; // 800BCB8C
}

// fn_800BCB90
void f_800BCB90(Ctx* __restrict c) {
  c->r[8]=R32(c->r[2]+0xFFFF90C0u); // 800BCB90
  c->r[9]=0u+0x00000000u; // 800BCB94
  c->r[6]=0u+0x00000008u; // 800BCB98
  c->r[5]=0u+0xCC010000u; // 800BCB9C
  c->r[10]=R8(c->r[8]+0x000005FBu); // 800BCBA0
  c->r[7]=c->r[8]|c->r[8]; // 800BCBA4
L_800BCBA8:;
  c->r[0]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[0]); // 800BCBA8
  if (crb(c,2)) { goto L_800BCBEC; } // 800BCBAC
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800BCBB0
  c->r[4]=c->r[9]|0x00000070u; // 800BCBB4
  c->r[3]=c->r[9]|0x00000080u; // 800BCBB8
  c->r[0]=c->r[9]|0x00000090u; // 800BCBBC
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 800BCBC0
  c->r[4]=R32(c->r[7]+0x0000001Cu); // 800BCBC4
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800BCBC8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800BCBCC
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 800BCBD0
  c->r[3]=R32(c->r[7]+0x0000003Cu); // 800BCBD4
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 800BCBD8
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800BCBDC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800BCBE0
  c->r[0]=R32(c->r[7]+0x0000005Cu); // 800BCBE4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800BCBE8
L_800BCBEC:;
  c->r[10]=rotl(c->r[10],31)&0x7FFFFFFFu; cr0(c,c->r[10]); // 800BCBEC
  c->r[9]=c->r[9]+0x00000001u; // 800BCBF0
  c->r[7]=c->r[7]+0x00000004u; // 800BCBF4
  if (!crb(c,2)) { IRQCHK(c); goto L_800BCBA8; } // 800BCBF8
  c->r[0]=0u+0x00000000u; // 800BCBFC
  c->r[3]=0u+0xCC010000u; // 800BCC00
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BCC04
  W8(c->r[8]+0x000005FBu,c->r[0]); // 800BCC08
  return; // 800BCC0C
}

// fn_800BCC10
void f_800BCC10(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],25); // 800BCC10
  if (!crb(c,2)) { goto L_800BCC1C; } // 800BCC14
  c->r[3]=0u+0x0000000Au; // 800BCC18
L_800BCC1C:;
  c->r[6]=0u+0xCC010000u; // 800BCC1C
  c->r[7]=0u+0x00000008u; // 800BCC20
  c->r[8]=c->r[3]+0xFFFFFFF7u; // 800BCC24
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 800BCC28
  c->r[0]=c->r[8]|0x000000A0u; // 800BCC2C
  c->r[3]=rotl(c->r[4],0)&0x3FFFFFFFu; // 800BCC30
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800BCC34
  c->r[0]=c->r[8]|0x000000B0u; // 800BCC38
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800BCC3C
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 800BCC40
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800BCC44
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 800BCC48
  return; // 800BCC4C
}

// fn_800BCC50
void f_800BCC50(Ctx* __restrict c) {
  c->r[0]=0u+0x00000048u; // 800BCC50
  c->r[3]=0u+0xCC010000u; // 800BCC54
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BCC58
  return; // 800BCC5C
}

// fn_800BCC60
void f_800BCC60(Ctx* __restrict c) {
  cmpu(c,0,c->r[5],0x00000014u); // 800BCC60
  c->r[11]=0u+0x00000000u; // 800BCC64
  c->r[12]=0u+0x00000000u; // 800BCC68
  c->r[10]=0u+0x00000005u; // 800BCC6C
  if (crb(c,1)) { goto L_800BCD08; } // 800BCC70
  c->r[9]=0u+0x80220000u; // 800BCC74
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800BCC78
  c->r[9]=c->r[9]+0xFFFFB41Cu; // 800BCC7C
  c->r[9]=R32(c->r[9]+c->r[0]); // 800BCC80
  c->ctr=c->r[9]; // 800BCC84
  if (true) { switch (c->ctr) { case 0x800BCC8Cu: goto L_800BCC8C; case 0x800BCC98u: goto L_800BCC98; case 0x800BCCA4u: goto L_800BCCA4; case 0x800BCCB0u: goto L_800BCCB0; case 0x800BCCBCu: goto L_800BCCBC; case 0x800BCCC4u: goto L_800BCCC4; case 0x800BCCCCu: goto L_800BCCCC; case 0x800BCCD4u: goto L_800BCCD4; case 0x800BCCDCu: goto L_800BCCDC; case 0x800BCCE4u: goto L_800BCCE4; case 0x800BCCECu: goto L_800BCCEC; case 0x800BCCF4u: goto L_800BCCF4; case 0x800BCCFCu: goto L_800BCCFC; case 0x800BCD04u: goto L_800BCD04; case 0x800BCD08u: goto L_800BCD08; case 0x800BCDFCu: goto L_800BCDFC; case 0x800BCE0Cu: goto L_800BCE0C; case 0x800BCE1Cu: goto L_800BCE1C; case 0x800BCE2Cu: goto L_800BCE2C; case 0x800BCE3Cu: goto L_800BCE3C; case 0x800BCE4Cu: goto L_800BCE4C; case 0x800BCE5Cu: goto L_800BCE5C; default: break; } dispatch(c,c->ctr); return; } // 800BCC88
L_800BCC8C:;
  c->r[10]=0u+0x00000000u; // 800BCC8C
  c->r[12]=0u+0x00000001u; // 800BCC90
  goto L_800BCD08; // 800BCC94
L_800BCC98:;
  c->r[10]=0u+0x00000001u; // 800BCC98
  c->r[12]=0u+0x00000001u; // 800BCC9C
  goto L_800BCD08; // 800BCCA0
L_800BCCA4:;
  c->r[10]=0u+0x00000003u; // 800BCCA4
  c->r[12]=0u+0x00000001u; // 800BCCA8
  goto L_800BCD08; // 800BCCAC
L_800BCCB0:;
  c->r[10]=0u+0x00000004u; // 800BCCB0
  c->r[12]=0u+0x00000001u; // 800BCCB4
  goto L_800BCD08; // 800BCCB8
L_800BCCBC:;
  c->r[10]=0u+0x00000002u; // 800BCCBC
  goto L_800BCD08; // 800BCCC0
L_800BCCC4:;
  c->r[10]=0u+0x00000002u; // 800BCCC4
  goto L_800BCD08; // 800BCCC8
L_800BCCCC:;
  c->r[10]=0u+0x00000005u; // 800BCCCC
  goto L_800BCD08; // 800BCCD0
L_800BCCD4:;
  c->r[10]=0u+0x00000006u; // 800BCCD4
  goto L_800BCD08; // 800BCCD8
L_800BCCDC:;
  c->r[10]=0u+0x00000007u; // 800BCCDC
  goto L_800BCD08; // 800BCCE0
L_800BCCE4:;
  c->r[10]=0u+0x00000008u; // 800BCCE4
  goto L_800BCD08; // 800BCCE8
L_800BCCEC:;
  c->r[10]=0u+0x00000009u; // 800BCCEC
  goto L_800BCD08; // 800BCCF0
L_800BCCF4:;
  c->r[10]=0u+0x0000000Au; // 800BCCF4
  goto L_800BCD08; // 800BCCF8
L_800BCCFC:;
  c->r[10]=0u+0x0000000Bu; // 800BCCFC
  goto L_800BCD08; // 800BCD00
L_800BCD04:;
  c->r[10]=0u+0x0000000Cu; // 800BCD04
L_800BCD08:;
  cmps(c,0,(int32_t)c->r[4],1); // 800BCD08
  if (crb(c,2)) { goto L_800BCD30; } // 800BCD0C
  if (!crb(c,0)) { goto L_800BCD20; } // 800BCD10
  cmps(c,0,(int32_t)c->r[4],0); // 800BCD14
  if (!crb(c,0)) { goto L_800BCD40; } // 800BCD18
  goto L_800BCDA8; // 800BCD1C
L_800BCD20:;
  cmps(c,0,(int32_t)c->r[4],10); // 800BCD20
  if (crb(c,2)) { goto L_800BCD7C; } // 800BCD24
  if (!crb(c,0)) { goto L_800BCDA8; } // 800BCD28
  goto L_800BCD54; // 800BCD2C
L_800BCD30:;
  c->r[11]=0u+0x00000000u; // 800BCD30
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 800BCD34
  c->r[11]=(rotl(c->r[10],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 800BCD38
  goto L_800BCDA8; // 800BCD3C
L_800BCD40:;
  c->r[0]=0u+0x00000000u; // 800BCD40
  c->r[11]=c->r[0]|0x00000002u; // 800BCD44
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 800BCD48
  c->r[11]=(rotl(c->r[10],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 800BCD4C
  goto L_800BCDA8; // 800BCD50
L_800BCD54:;
  c->r[9]=0u+0x00000001u; // 800BCD54
  c->r[5]=c->r[5]+0xFFFFFFF4u; // 800BCD58
  c->r[11]=0u+0x00000000u; // 800BCD5C
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 800BCD60
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 800BCD64
  c->r[11]=(rotl(c->r[9],4)&0x00000070u)|(c->r[11]&~0x00000070u); // 800BCD68
  c->r[11]=(rotl(c->r[10],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 800BCD6C
  c->r[11]=(rotl(c->r[5],12)&0x00007000u)|(c->r[11]&~0x00007000u); // 800BCD70
  c->r[11]=(rotl(c->r[0],15)&0x00038000u)|(c->r[11]&~0x00038000u); // 800BCD74
  goto L_800BCDA8; // 800BCD78
L_800BCD7C:;
  cmps(c,0,(int32_t)c->r[5],19); // 800BCD7C
  c->r[11]=0u+0x00000000u; // 800BCD80
  c->r[11]=(rotl(c->r[12],2)&0x00000004u)|(c->r[11]&~0x00000004u); // 800BCD84
  if (!crb(c,2)) { goto L_800BCD98; } // 800BCD88
  c->r[0]=0u+0x00000002u; // 800BCD8C
  c->r[11]=(rotl(c->r[0],4)&0x00000070u)|(c->r[11]&~0x00000070u); // 800BCD90
  goto L_800BCDA0; // 800BCD94
L_800BCD98:;
  c->r[0]=0u+0x00000003u; // 800BCD98
  c->r[11]=(rotl(c->r[0],4)&0x00000070u)|(c->r[11]&~0x00000070u); // 800BCD9C
L_800BCDA0:;
  c->r[0]=0u+0x00000002u; // 800BCDA0
  c->r[11]=(rotl(c->r[0],7)&0x00000F80u)|(c->r[11]&~0x00000F80u); // 800BCDA4
L_800BCDA8:;
  c->r[10]=R32(c->r[2]+0xFFFF90C0u); // 800BCDA8
  c->r[9]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BCDAC
  c->r[0]=c->r[8]+0xFFFFFFC0u; // 800BCDB0
  c->r[4]=0u+0x00000000u; // 800BCDB4
  c->r[8]=c->r[10]+c->r[9]; // 800BCDB8
  c->r[5]=0u+0x00010000u; // 800BCDBC
  W32(c->r[8]+0x000000C8u,c->r[11]); // 800BCDC0
  c->r[4]=(rotl(c->r[0],0)&0x0000003Fu)|(c->r[4]&~0x0000003Fu); // 800BCDC4
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[5]<<((c->r[3])&31)); // 800BCDC8
  cmpu(c,0,c->r[3],0x00000006u); // 800BCDCC
  c->r[5]=R32(c->r[10]+0x000005FCu); // 800BCDD0
  c->r[4]=(rotl(c->r[7],8)&0x00000100u)|(c->r[4]&~0x00000100u); // 800BCDD4
  c->r[0]=c->r[5]|c->r[0]; // 800BCDD8
  W32(c->r[10]+0x000005FCu,c->r[0]); // 800BCDDC
  W32(c->r[8]+0x000000E8u,c->r[4]); // 800BCDE0
  if (crb(c,1)) { goto L_800BCE6C; } // 800BCDE4
  c->r[3]=0u+0x80220000u; // 800BCDE8
  c->r[3]=c->r[3]+0xFFFFB400u; // 800BCDEC
  c->r[3]=R32(c->r[3]+c->r[9]); // 800BCDF0
  c->ctr=c->r[3]; // 800BCDF4
  if (true) { switch (c->ctr) { case 0x800BCC8Cu: goto L_800BCC8C; case 0x800BCC98u: goto L_800BCC98; case 0x800BCCA4u: goto L_800BCCA4; case 0x800BCCB0u: goto L_800BCCB0; case 0x800BCCBCu: goto L_800BCCBC; case 0x800BCCC4u: goto L_800BCCC4; case 0x800BCCCCu: goto L_800BCCCC; case 0x800BCCD4u: goto L_800BCCD4; case 0x800BCCDCu: goto L_800BCCDC; case 0x800BCCE4u: goto L_800BCCE4; case 0x800BCCECu: goto L_800BCCEC; case 0x800BCCF4u: goto L_800BCCF4; case 0x800BCCFCu: goto L_800BCCFC; case 0x800BCD04u: goto L_800BCD04; case 0x800BCD08u: goto L_800BCD08; case 0x800BCDFCu: goto L_800BCDFC; case 0x800BCE0Cu: goto L_800BCE0C; case 0x800BCE1Cu: goto L_800BCE1C; case 0x800BCE2Cu: goto L_800BCE2C; case 0x800BCE3Cu: goto L_800BCE3C; case 0x800BCE4Cu: goto L_800BCE4C; case 0x800BCE5Cu: goto L_800BCE5C; default: break; } dispatch(c,c->ctr); return; } // 800BCDF8
L_800BCDFC:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 800BCDFC
  c->r[0]=(rotl(c->r[6],6)&0x00000FC0u)|(c->r[0]&~0x00000FC0u); // 800BCE00
  W32(c->r[10]+0x00000080u,c->r[0]); // 800BCE04
  goto L_800BCE78; // 800BCE08
L_800BCE0C:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 800BCE0C
  c->r[0]=(rotl(c->r[6],12)&0x0003F000u)|(c->r[0]&~0x0003F000u); // 800BCE10
  W32(c->r[10]+0x00000080u,c->r[0]); // 800BCE14
  goto L_800BCE78; // 800BCE18
L_800BCE1C:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 800BCE1C
  c->r[0]=(rotl(c->r[6],18)&0x00FC0000u)|(c->r[0]&~0x00FC0000u); // 800BCE20
  W32(c->r[10]+0x00000080u,c->r[0]); // 800BCE24
  goto L_800BCE78; // 800BCE28
L_800BCE2C:;
  c->r[0]=R32(c->r[10]+0x00000080u); // 800BCE2C
  c->r[0]=(rotl(c->r[6],24)&0x3F000000u)|(c->r[0]&~0x3F000000u); // 800BCE30
  W32(c->r[10]+0x00000080u,c->r[0]); // 800BCE34
  goto L_800BCE78; // 800BCE38
L_800BCE3C:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 800BCE3C
  c->r[0]=(rotl(c->r[6],0)&0x0000003Fu)|(c->r[0]&~0x0000003Fu); // 800BCE40
  W32(c->r[10]+0x00000084u,c->r[0]); // 800BCE44
  goto L_800BCE78; // 800BCE48
L_800BCE4C:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 800BCE4C
  c->r[0]=(rotl(c->r[6],6)&0x00000FC0u)|(c->r[0]&~0x00000FC0u); // 800BCE50
  W32(c->r[10]+0x00000084u,c->r[0]); // 800BCE54
  goto L_800BCE78; // 800BCE58
L_800BCE5C:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 800BCE5C
  c->r[0]=(rotl(c->r[6],12)&0x0003F000u)|(c->r[0]&~0x0003F000u); // 800BCE60
  W32(c->r[10]+0x00000084u,c->r[0]); // 800BCE64
  goto L_800BCE78; // 800BCE68
L_800BCE6C:;
  c->r[0]=R32(c->r[10]+0x00000084u); // 800BCE6C
  c->r[0]=(rotl(c->r[6],18)&0x00FC0000u)|(c->r[0]&~0x00FC0000u); // 800BCE70
  W32(c->r[10]+0x00000084u,c->r[0]); // 800BCE74
L_800BCE78:;
  c->r[0]=R32(c->r[10]+0x000005FCu); // 800BCE78
  c->r[0]=c->r[0]|0x04000000u; // 800BCE7C
  W32(c->r[10]+0x000005FCu,c->r[0]); // 800BCE80
  return; // 800BCE84
}

// fn_800BCE88
void f_800BCE88(Ctx* __restrict c) {
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800BCE88
  c->r[0]=R32(c->r[4]+0x00000254u); // 800BCE8C
  c->r[0]=(rotl(c->r[3],0)&0x0000000Fu)|(c->r[0]&~0x0000000Fu); // 800BCE90
  W32(c->r[4]+0x00000254u,c->r[0]); // 800BCE94
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800BCE98
  c->r[0]=c->r[0]|0x02000000u; // 800BCE9C
  c->r[0]=c->r[0]|0x00000004u; // 800BCEA0
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800BCEA4
  return; // 800BCEA8
}

// GXSetMisc
void f_800BCEAC(Ctx* __restrict c) {
  trace_call(0x800BCEACu);
  cmps(c,0,(int32_t)c->r[3],2); // 800BCEAC
  if (crb(c,2)) { goto L_800BCF08; } // 800BCEB0
  if (!crb(c,0)) { goto L_800BCEC8; } // 800BCEB4
  cmps(c,0,(int32_t)c->r[3],0); // 800BCEB8
  if (crb(c,2)) return; // 800BCEBC
  if (!crb(c,0)) { goto L_800BCED4; } // 800BCEC0
  return; // 800BCEC4
L_800BCEC8:;
  cmps(c,0,(int32_t)c->r[3],4); // 800BCEC8
  if (!crb(c,0)) return; // 800BCECC
  goto L_800BCF20; // 800BCED0
L_800BCED4:;
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800BCED4
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BCED8
  W16(c->r[5]+0x00000004u,c->r[4]); // 800BCEDC
  c->r[3]=cntlz(c->r[0]); // 800BCEE0
  c->r[0]=0u+0x00000001u; // 800BCEE4
  c->r[3]=rotl(c->r[3],27)&0x0000FFFFu; // 800BCEE8
  W16(c->r[5]+0x00000000u,c->r[3]); // 800BCEEC
  W16(c->r[5]+0x00000002u,c->r[0]); // 800BCEF0
  if (crb(c,2)) return; // 800BCEF4
  c->r[0]=R32(c->r[5]+0x000005FCu); // 800BCEF8
  c->r[0]=c->r[0]|0x00000008u; // 800BCEFC
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800BCF00
  return; // 800BCF04
L_800BCF08:;
  c->r[0]=0u-c->r[4]; // 800BCF08
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BCF0C
  c->r[0]=c->r[0]|c->r[4]; // 800BCF10
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800BCF14
  W8(c->r[3]+0x000005F9u,c->r[0]); // 800BCF18
  return; // 800BCF1C
L_800BCF20:;
  c->r[0]=0u-c->r[4]; // 800BCF20
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BCF24
  c->r[0]=c->r[0]|c->r[4]; // 800BCF28
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800BCF2C
  W8(c->r[3]+0x000005FAu,c->r[0]); // 800BCF30
  return; // 800BCF34
}

// GXFlush
void f_800BCF38(Ctx* __restrict c) {
  trace_call(0x800BCF38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCF38
  c->r[0]=c->lr; // 800BCF3C
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BCF40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BCF44
  c->r[0]=R32(c->r[3]+0x000005FCu); // 800BCF48
  cmps(c,0,(int32_t)c->r[0],0); // 800BCF4C
  if (crb(c,2)) { goto L_800BCF58; } // 800BCF50
  c->lr=0x800BCF58u; f_800BD6A8(c); // 800BCF54
L_800BCF58:;
  c->r[0]=0u+0x00000000u; // 800BCF58
  c->r[3]=0u+0xCC010000u; // 800BCF5C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BCF60
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BCF64
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BCF68
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BCF6C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BCF70
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BCF74
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BCF78
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BCF7C
  c->lr=0x800BCF84u; f_80097A44(c); // 800BCF80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BCF84
  c->lr=c->r[0]; // 800BCF88
  c->r[1]=c->r[1]+0x00000010u; // 800BCF8C
  return; // 800BCF90
}

// fn_800BCF94
void f_800BCF94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCF94
  c->r[0]=c->lr; // 800BCF98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BCF9C
L_800BCFA0:;
  c->lr=0x800BCFA4u; f_80097AE8(c); // 800BCFA0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800BCFA4
  if (!crb(c,2)) { IRQCHK(c); goto L_800BCFA0; } // 800BCFA8
  c->r[3]=0u+0x0C010000u; // 800BCFAC
  c->r[3]=c->r[3]+0xFFFF8000u; // 800BCFB0
  c->lr=0x800BCFB8u; f_80097AF4(c); // 800BCFB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BCFB8
  c->lr=c->r[0]; // 800BCFBC
  c->r[1]=c->r[1]+0x00000010u; // 800BCFC0
  return; // 800BCFC4
}

// fn_800BCFC8
void f_800BCFC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BCFC8
  c->r[0]=c->lr; // 800BCFCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BCFD0
  c->r[11]=c->r[1]+0x00000020u; // 800BCFD4
  c->lr=0x800BCFDCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BCFD8
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BCFDC
  c->r[0]=R8(c->r[3]+0x000005FAu); // 800BCFE0
  cmps(c,0,(int32_t)c->r[0],0); // 800BCFE4
  if (crb(c,2)) { goto L_800BD088; } // 800BCFE8
  c->lr=0x800BCFF0u; f_800BBFB0(c); // 800BCFEC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800BCFF0
  if (crb(c,2)) { goto L_800BD088; } // 800BCFF4
  c->r[5]=R32(c->r[13]+0xFFFFA464u); // 800BCFF8
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 800BCFFC
L_800BD000:;
  c->r[3]=c->r[0]|c->r[0]; // 800BD000
  c->r[4]=R16(c->r[5]+0x00000050u); // 800BD004
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 800BD008
  cmpu(c,0,c->r[0],c->r[3]); // 800BD00C
  if (!crb(c,2)) { IRQCHK(c); goto L_800BD000; } // 800BD010
  c->r[3]=rotl(c->r[0],16)&0xFFFF0000u; // 800BD014
  c->r[0]=0u+0x00000000u; // 800BD018
  c->r[27]=c->r[3]|c->r[4]; // 800BD01C
  c->r[29]=0u+0x00000008u; // 800BD020
  c->r[28]=c->r[0]^0x80000000u; // 800BD024
L_800BD028:;
  c->lr=0x800BD02Cu; f_800A1D74(c); // 800BD028
  c->r[31]=c->r[4]|c->r[4]; // 800BD02C
  c->r[30]=c->r[3]|c->r[3]; // 800BD030
L_800BD034:;
  c->lr=0x800BD038u; f_800A1D74(c); // 800BD034
  c->r[4]=addc(c,~c->r[31],c->r[4],1); // 800BD038
  c->r[0]=addc(c,~c->r[30],c->r[3],c->xer_ca); // 800BD03C
  c->r[3]=c->r[0]^0x80000000u; // 800BD040
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 800BD044
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 800BD048
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 800BD04C
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800BD050
  if (crb(c,2)) { IRQCHK(c); goto L_800BD034; } // 800BD054
  c->r[5]=R32(c->r[13]+0xFFFFA464u); // 800BD058
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 800BD05C
L_800BD060:;
  c->r[3]=c->r[0]|c->r[0]; // 800BD060
  c->r[4]=R16(c->r[5]+0x00000050u); // 800BD064
  c->r[0]=R16(c->r[5]+0x0000004Eu); // 800BD068
  cmpu(c,0,c->r[0],c->r[3]); // 800BD06C
  if (!crb(c,2)) { IRQCHK(c); goto L_800BD060; } // 800BD070
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 800BD074
  c->r[0]=c->r[0]|c->r[4]; // 800BD078
  cmpu(c,0,c->r[0],c->r[27]); // 800BD07C
  c->r[27]=c->r[0]|c->r[0]; // 800BD080
  if (!crb(c,2)) { IRQCHK(c); goto L_800BD028; } // 800BD084
L_800BD088:;
  c->r[0]=0u+0x00000001u; // 800BD088
  c->r[3]=0u+0xCC000000u; // 800BD08C
  W32(c->r[3]+0x00003018u,c->r[0]); // 800BD090
  c->lr=0x800BD098u; f_800A1D74(c); // 800BD094
  c->r[0]=0u+0x00000000u; // 800BD098
  c->r[31]=c->r[4]|c->r[4]; // 800BD09C
  c->r[30]=c->r[3]|c->r[3]; // 800BD0A0
  c->r[29]=0u+0x00000032u; // 800BD0A4
  c->r[28]=c->r[0]^0x80000000u; // 800BD0A8
L_800BD0AC:;
  c->lr=0x800BD0B0u; f_800A1D74(c); // 800BD0AC
  c->r[4]=addc(c,~c->r[31],c->r[4],1); // 800BD0B0
  c->r[0]=addc(c,~c->r[30],c->r[3],c->xer_ca); // 800BD0B4
  c->r[3]=c->r[0]^0x80000000u; // 800BD0B8
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 800BD0BC
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 800BD0C0
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 800BD0C4
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800BD0C8
  if (crb(c,2)) { IRQCHK(c); goto L_800BD0AC; } // 800BD0CC
  c->r[30]=0u+0x00000000u; // 800BD0D0
  c->r[3]=0u+0xCC000000u; // 800BD0D4
  W32(c->r[3]+0x00003018u,c->r[30]); // 800BD0D8
  c->lr=0x800BD0E0u; f_800A1D74(c); // 800BD0DC
  c->r[31]=c->r[30]^0x80000000u; // 800BD0E0
  c->r[28]=c->r[4]|c->r[4]; // 800BD0E4
  c->r[29]=c->r[3]|c->r[3]; // 800BD0E8
  c->r[30]=0u+0x00000005u; // 800BD0EC
L_800BD0F0:;
  c->lr=0x800BD0F4u; f_800A1D74(c); // 800BD0F0
  c->r[4]=addc(c,~c->r[28],c->r[4],1); // 800BD0F4
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 800BD0F8
  c->r[3]=c->r[0]^0x80000000u; // 800BD0FC
  c->r[0]=addc(c,~c->r[4],c->r[30],1); // 800BD100
  c->r[3]=addc(c,~c->r[3],c->r[31],c->xer_ca); // 800BD104
  c->r[3]=addc(c,~c->r[31],c->r[31],c->xer_ca); // 800BD108
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800BD10C
  if (crb(c,2)) { IRQCHK(c); goto L_800BD0F0; } // 800BD110
  c->r[11]=c->r[1]+0x00000020u; // 800BD114
  c->lr=0x800BD11Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BD118
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD11C
  c->lr=c->r[0]; // 800BD120
  c->r[1]=c->r[1]+0x00000020u; // 800BD124
  return; // 800BD128
}

// fn_800BD12C
void f_800BD12C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD12C
  c->r[0]=c->lr; // 800BD130
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD134
  c->r[11]=c->r[1]+0x00000020u; // 800BD138
  c->lr=0x800BD140u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BD13C
  c->r[31]=R32(c->r[2]+0xFFFF90C0u); // 800BD140
  c->r[0]=R8(c->r[31]+0x000005FAu); // 800BD144
  cmps(c,0,(int32_t)c->r[0],0); // 800BD148
  if (crb(c,2)) { goto L_800BD1EC; } // 800BD14C
  c->lr=0x800BD154u; f_800BBFB0(c); // 800BD150
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800BD154
  if (crb(c,2)) { goto L_800BD1EC; } // 800BD158
  c->r[5]=R32(c->r[13]+0xFFFFA464u); // 800BD15C
  c->r[3]=R16(c->r[5]+0x0000004Eu); // 800BD160
L_800BD164:;
  c->r[0]=c->r[3]|c->r[3]; // 800BD164
  c->r[4]=R16(c->r[5]+0x00000050u); // 800BD168
  c->r[3]=R16(c->r[5]+0x0000004Eu); // 800BD16C
  cmpu(c,0,c->r[3],c->r[0]); // 800BD170
  if (!crb(c,2)) { IRQCHK(c); goto L_800BD164; } // 800BD174
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 800BD178
  c->r[0]=0u+0x00000000u; // 800BD17C
  c->r[26]=c->r[3]|c->r[4]; // 800BD180
  c->r[28]=0u+0x00000008u; // 800BD184
  c->r[27]=c->r[0]^0x80000000u; // 800BD188
L_800BD18C:;
  c->lr=0x800BD190u; f_800A1D74(c); // 800BD18C
  c->r[30]=c->r[4]|c->r[4]; // 800BD190
  c->r[29]=c->r[3]|c->r[3]; // 800BD194
L_800BD198:;
  c->lr=0x800BD19Cu; f_800A1D74(c); // 800BD198
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 800BD19C
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 800BD1A0
  c->r[3]=c->r[0]^0x80000000u; // 800BD1A4
  c->r[0]=addc(c,~c->r[4],c->r[28],1); // 800BD1A8
  c->r[3]=addc(c,~c->r[3],c->r[27],c->xer_ca); // 800BD1AC
  c->r[3]=addc(c,~c->r[27],c->r[27],c->xer_ca); // 800BD1B0
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800BD1B4
  if (crb(c,2)) { IRQCHK(c); goto L_800BD198; } // 800BD1B8
  c->r[5]=R32(c->r[13]+0xFFFFA464u); // 800BD1BC
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 800BD1C0
L_800BD1C4:;
  c->r[0]=c->r[4]|c->r[4]; // 800BD1C4
  c->r[3]=R16(c->r[5]+0x00000050u); // 800BD1C8
  c->r[4]=R16(c->r[5]+0x0000004Eu); // 800BD1CC
  cmpu(c,0,c->r[4],c->r[0]); // 800BD1D0
  if (!crb(c,2)) { IRQCHK(c); goto L_800BD1C4; } // 800BD1D4
  c->r[0]=rotl(c->r[4],16)&0xFFFF0000u; // 800BD1D8
  c->r[0]=c->r[0]|c->r[3]; // 800BD1DC
  cmpu(c,0,c->r[0],c->r[26]); // 800BD1E0
  c->r[26]=c->r[0]|c->r[0]; // 800BD1E4
  if (!crb(c,2)) { IRQCHK(c); goto L_800BD18C; } // 800BD1E8
L_800BD1EC:;
  c->r[0]=0u+0x00000001u; // 800BD1EC
  c->r[3]=0u+0xCC000000u; // 800BD1F0
  W32(c->r[3]+0x00003018u,c->r[0]); // 800BD1F4
  c->lr=0x800BD1FCu; f_800A1D74(c); // 800BD1F8
  c->r[0]=0u+0x00000000u; // 800BD1FC
  c->r[30]=c->r[4]|c->r[4]; // 800BD200
  c->r[29]=c->r[3]|c->r[3]; // 800BD204
  c->r[28]=0u+0x00000032u; // 800BD208
  c->r[27]=c->r[0]^0x80000000u; // 800BD20C
L_800BD210:;
  c->lr=0x800BD214u; f_800A1D74(c); // 800BD210
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 800BD214
  c->r[0]=addc(c,~c->r[29],c->r[3],c->xer_ca); // 800BD218
  c->r[3]=c->r[0]^0x80000000u; // 800BD21C
  c->r[0]=addc(c,~c->r[4],c->r[28],1); // 800BD220
  c->r[3]=addc(c,~c->r[3],c->r[27],c->xer_ca); // 800BD224
  c->r[3]=addc(c,~c->r[27],c->r[27],c->xer_ca); // 800BD228
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800BD22C
  if (crb(c,2)) { IRQCHK(c); goto L_800BD210; } // 800BD230
  c->r[29]=0u+0x00000000u; // 800BD234
  c->r[3]=0u+0xCC000000u; // 800BD238
  W32(c->r[3]+0x00003018u,c->r[29]); // 800BD23C
  c->lr=0x800BD244u; f_800A1D74(c); // 800BD240
  c->r[30]=c->r[29]^0x80000000u; // 800BD244
  c->r[27]=c->r[4]|c->r[4]; // 800BD248
  c->r[28]=c->r[3]|c->r[3]; // 800BD24C
  c->r[29]=0u+0x00000005u; // 800BD250
L_800BD254:;
  c->lr=0x800BD258u; f_800A1D74(c); // 800BD254
  c->r[4]=addc(c,~c->r[27],c->r[4],1); // 800BD258
  c->r[0]=addc(c,~c->r[28],c->r[3],c->xer_ca); // 800BD25C
  c->r[3]=c->r[0]^0x80000000u; // 800BD260
  c->r[0]=addc(c,~c->r[4],c->r[29],1); // 800BD264
  c->r[3]=addc(c,~c->r[3],c->r[30],c->xer_ca); // 800BD268
  c->r[3]=addc(c,~c->r[30],c->r[30],c->xer_ca); // 800BD26C
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800BD270
  if (crb(c,2)) { IRQCHK(c); goto L_800BD254; } // 800BD274
  c->lr=0x800BD27Cu; f_800BBFB0(c); // 800BD278
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800BD27C
  if (crb(c,2)) { goto L_800BD2C8; } // 800BD280
  c->lr=0x800BD288u; f_800BC218(c); // 800BD284
  c->lr=0x800BD28Cu; f_800BA818(c); // 800BD288
  c->r[0]=0u+0x00000000u; // 800BD28C
  W32(c->r[31]+0x000005FCu,c->r[0]); // 800BD290
  goto L_800BD29C; // 800BD294
  c->lr=0x800BD29Cu; f_800BD6A8(c); // 800BD298
L_800BD29C:;
  c->r[0]=0u+0x00000000u; // 800BD29C
  c->r[3]=0u+0xCC010000u; // 800BD2A0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD2A4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD2A8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD2AC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD2B0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD2B4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD2B8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD2BC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD2C0
  c->lr=0x800BD2C8u; f_80097A44(c); // 800BD2C4
L_800BD2C8:;
  c->r[11]=c->r[1]+0x00000020u; // 800BD2C8
  c->lr=0x800BD2D0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BD2CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD2D0
  c->lr=c->r[0]; // 800BD2D4
  c->r[1]=c->r[1]+0x00000020u; // 800BD2D8
  return; // 800BD2DC
}

// GXSetDrawSync
void f_800BD2E0(Ctx* __restrict c) {
  trace_call(0x800BD2E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD2E0
  c->r[0]=c->lr; // 800BD2E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD2E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BD2EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BD2F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BD2F4
  c->r[29]=c->r[3]|c->r[3]; // 800BD2F8
  c->lr=0x800BD300u; f_8009DF9C(c); // 800BD2FC
  c->r[4]=0u+0xCC010000u; // 800BD300
  c->r[5]=0u+0x00000061u; // 800BD304
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BD308
  c->r[6]=c->r[29]|0x48000000u; // 800BD30C
  c->r[0]=0u+0x00000047u; // 800BD310
  c->r[30]=R32(c->r[2]+0xFFFF90C0u); // 800BD314
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800BD318
  c->r[6]=(rotl(c->r[29],0)&0x0000FFFFu)|(c->r[6]&~0x0000FFFFu); // 800BD31C
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800BD320
  c->r[29]=c->r[3]|c->r[3]; // 800BD324
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BD328
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800BD32C
  c->r[0]=R32(c->r[30]+0x000005FCu); // 800BD330
  cmps(c,0,(int32_t)c->r[0],0); // 800BD334
  if (crb(c,2)) { goto L_800BD340; } // 800BD338
  c->lr=0x800BD340u; f_800BD6A8(c); // 800BD33C
L_800BD340:;
  c->r[31]=0u+0x00000000u; // 800BD340
  c->r[3]=0u+0xCC010000u; // 800BD344
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800BD348
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800BD34C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800BD350
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800BD354
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800BD358
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800BD35C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800BD360
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800BD364
  c->lr=0x800BD36Cu; f_80097A44(c); // 800BD368
  c->r[3]=c->r[29]|c->r[29]; // 800BD36C
  c->lr=0x800BD374u; f_8009DFC4(c); // 800BD370
  W16(c->r[30]+0x00000002u,c->r[31]); // 800BD374
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BD378
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BD37C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BD380
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BD384
  c->lr=c->r[0]; // 800BD388
  c->r[1]=c->r[1]+0x00000020u; // 800BD38C
  return; // 800BD390
}

// GXReadDrawSync
void f_800BD394(Ctx* __restrict c) {
  trace_call(0x800BD394u);
  c->r[3]=R32(c->r[13]+0xFFFFA460u); // 800BD394
  c->r[3]=R16(c->r[3]+0x0000000Eu); // 800BD398
  return; // 800BD39C
}

// fn_800BD3A0
void f_800BD3A0(Ctx* __restrict c) {
  c->r[4]=0u+0xCC010000u; // 800BD3A0
  c->r[0]=0u+0x00000061u; // 800BD3A4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800BD3A8
  c->r[0]=0u+0x00000000u; // 800BD3AC
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BD3B0
  c->r[3]=R32(c->r[5]+0x0000022Cu); // 800BD3B4
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800BD3B8
  W16(c->r[5]+0x00000002u,c->r[0]); // 800BD3BC
  return; // 800BD3C0
}

// GXPokeAlphaMode
void f_800BD3C4(Ctx* __restrict c) {
  trace_call(0x800BD3C4u);
  c->r[5]=R32(c->r[13]+0xFFFFA460u); // 800BD3C4
  c->r[4]=(rotl(c->r[3],8)&0xFFFFFF00u)|(c->r[4]&~0xFFFFFF00u); // 800BD3C8
  W16(c->r[5]+0x00000006u,c->r[4]); // 800BD3CC
  return; // 800BD3D0
}

// GXPokeAlphaRead
void f_800BD3D4(Ctx* __restrict c) {
  trace_call(0x800BD3D4u);
  c->r[0]=0u+0x00000000u; // 800BD3D4
  c->r[4]=R32(c->r[13]+0xFFFFA460u); // 800BD3D8
  c->r[0]=(rotl(c->r[3],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 800BD3DC
  c->r[0]=c->r[0]|0x00000004u; // 800BD3E0
  W16(c->r[4]+0x00000008u,c->r[0]); // 800BD3E4
  return; // 800BD3E8
}

// GXPokeAlphaUpdate
void f_800BD3EC(Ctx* __restrict c) {
  trace_call(0x800BD3ECu);
  c->r[4]=R32(c->r[13]+0xFFFFA460u); // 800BD3EC
  c->r[0]=R16(c->r[4]+0x00000002u); // 800BD3F0
  c->r[0]=(rotl(c->r[3],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 800BD3F4
  W16(c->r[4]+0x00000002u,c->r[0]); // 800BD3F8
  return; // 800BD3FC
}

// GXPokeBlendMode
void f_800BD400(Ctx* __restrict c) {
  trace_call(0x800BD400u);
  c->r[7]=R32(c->r[13]+0xFFFFA460u); // 800BD400
  cmps(c,0,(int32_t)c->r[3],1); // 800BD404
  c->r[0]=0u+0x00000000u; // 800BD408
  c->r[9]=R16(c->r[7]+0x00000002u); // 800BD40C
  if (crb(c,2)) { goto L_800BD41C; } // 800BD410
  cmps(c,0,(int32_t)c->r[3],3); // 800BD414
  if (!crb(c,2)) { goto L_800BD420; } // 800BD418
L_800BD41C:;
  c->r[0]=0u+0x00000001u; // 800BD41C
L_800BD420:;
  c->r[7]=c->r[3]+0xFFFFFFFDu; // 800BD420
  c->r[9]=(rotl(c->r[0],0)&0x00000001u)|(c->r[9]&~0x00000001u); // 800BD424
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800BD428
  c->r[3]=R32(c->r[13]+0xFFFFA460u); // 800BD42C
  c->r[8]=cntlz(c->r[7]); // 800BD430
  c->r[7]=cntlz(c->r[0]); // 800BD434
  c->r[0]=0u+0x00000041u; // 800BD438
  c->r[9]=(rotl(c->r[8],6)&0x00000800u)|(c->r[9]&~0x00000800u); // 800BD43C
  c->r[9]=(rotl(c->r[7],28)&0x00000002u)|(c->r[9]&~0x00000002u); // 800BD440
  c->r[9]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 800BD444
  c->r[9]=(rotl(c->r[4],8)&0x00000700u)|(c->r[9]&~0x00000700u); // 800BD448
  c->r[9]=(rotl(c->r[5],5)&0x000000E0u)|(c->r[9]&~0x000000E0u); // 800BD44C
  c->r[9]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 800BD450
  W16(c->r[3]+0x00000002u,c->r[9]); // 800BD454
  return; // 800BD458
}

// GXPokeColorUpdate
void f_800BD45C(Ctx* __restrict c) {
  trace_call(0x800BD45Cu);
  c->r[4]=R32(c->r[13]+0xFFFFA460u); // 800BD45C
  c->r[0]=R16(c->r[4]+0x00000002u); // 800BD460
  c->r[0]=(rotl(c->r[3],3)&0x00000008u)|(c->r[0]&~0x00000008u); // 800BD464
  W16(c->r[4]+0x00000002u,c->r[0]); // 800BD468
  return; // 800BD46C
}

// GXPokeDstAlpha
void f_800BD470(Ctx* __restrict c) {
  trace_call(0x800BD470u);
  c->r[5]=R32(c->r[13]+0xFFFFA460u); // 800BD470
  c->r[0]=0u+0x00000000u; // 800BD474
  c->r[0]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 800BD478
  c->r[0]=(rotl(c->r[3],8)&0x00000100u)|(c->r[0]&~0x00000100u); // 800BD47C
  W16(c->r[5]+0x00000004u,c->r[0]); // 800BD480
  return; // 800BD484
}

// GXPokeDither
void f_800BD488(Ctx* __restrict c) {
  trace_call(0x800BD488u);
  c->r[4]=R32(c->r[13]+0xFFFFA460u); // 800BD488
  c->r[0]=R16(c->r[4]+0x00000002u); // 800BD48C
  c->r[0]=(rotl(c->r[3],2)&0x00000004u)|(c->r[0]&~0x00000004u); // 800BD490
  W16(c->r[4]+0x00000002u,c->r[0]); // 800BD494
  return; // 800BD498
}

// GXPokeZMode
void f_800BD49C(Ctx* __restrict c) {
  trace_call(0x800BD49Cu);
  c->r[6]=R32(c->r[13]+0xFFFFA460u); // 800BD49C
  c->r[0]=0u+0x00000000u; // 800BD4A0
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800BD4A4
  c->r[0]=(rotl(c->r[4],1)&0x0000000Eu)|(c->r[0]&~0x0000000Eu); // 800BD4A8
  c->r[0]=(rotl(c->r[5],4)&0x00000010u)|(c->r[0]&~0x00000010u); // 800BD4AC
  W16(c->r[6]+0x00000000u,c->r[0]); // 800BD4B0
  return; // 800BD4B4
}

// GXSetDrawSyncCallback
void f_800BD4B8(Ctx* __restrict c) {
  trace_call(0x800BD4B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD4B8
  c->r[0]=c->lr; // 800BD4BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD4C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD4C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BD4C8
  c->r[30]=c->r[3]|c->r[3]; // 800BD4CC
  c->r[31]=R32(c->r[13]+0xFFFFA4B0u); // 800BD4D0
  c->lr=0x800BD4D8u; f_8009DF9C(c); // 800BD4D4
  W32(c->r[13]+0xFFFFA4B0u,c->r[30]); // 800BD4D8
  c->lr=0x800BD4E0u; f_8009DFC4(c); // 800BD4DC
  c->r[3]=c->r[31]|c->r[31]; // 800BD4E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD4E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BD4E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD4EC
  c->lr=c->r[0]; // 800BD4F0
  c->r[1]=c->r[1]+0x00000010u; // 800BD4F4
  return; // 800BD4F8
}

// GXTokenInterruptHandler
void f_800BD4FC(Ctx* __restrict c) {
  trace_call(0x800BD4FCu);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD4FC
  c->r[0]=c->lr; // 800BD500
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800BD504
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800BD508
  W32(c->r[1]+0x000002D8u,c->r[30]); // 800BD50C
  c->r[30]=c->r[4]|c->r[4]; // 800BD510
  c->r[0]=R32(c->r[13]+0xFFFFA4B0u); // 800BD514
  c->r[3]=R32(c->r[13]+0xFFFFA460u); // 800BD518
  cmps(c,0,(int32_t)c->r[0],0); // 800BD51C
  c->r[31]=R16(c->r[3]+0x0000000Eu); // 800BD520
  if (crb(c,2)) { goto L_800BD558; } // 800BD524
  c->r[3]=c->r[1]+0x00000008u; // 800BD528
  c->lr=0x800BD530u; f_8009A840(c); // 800BD52C
  c->r[3]=c->r[1]+0x00000008u; // 800BD530
  c->lr=0x800BD538u; f_8009A618(c); // 800BD534
  c->r[12]=R32(c->r[13]+0xFFFFA4B0u); // 800BD538
  c->r[3]=c->r[31]|c->r[31]; // 800BD53C
  c->ctr=c->r[12]; // 800BD540
  if (true) { c->lr=0x800BD548u; dispatch(c,c->ctr); } // 800BD544
  c->r[3]=c->r[1]+0x00000008u; // 800BD548
  c->lr=0x800BD550u; f_8009A840(c); // 800BD54C
  c->r[3]=c->r[30]|c->r[30]; // 800BD550
  c->lr=0x800BD558u; f_8009A618(c); // 800BD554
L_800BD558:;
  c->r[3]=R32(c->r[13]+0xFFFFA460u); // 800BD558
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800BD55C
  c->r[0]=c->r[0]|0x00000004u; // 800BD560
  W16(c->r[3]+0x0000000Au,c->r[0]); // 800BD564
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800BD568
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800BD56C
  c->r[30]=R32(c->r[1]+0x000002D8u); // 800BD570
  c->lr=c->r[0]; // 800BD574
  c->r[1]=c->r[1]+0x000002E0u; // 800BD578
  return; // 800BD57C
}

// GXSetDrawDoneCallback
void f_800BD580(Ctx* __restrict c) {
  trace_call(0x800BD580u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD580
  c->r[0]=c->lr; // 800BD584
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD588
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD58C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BD590
  c->r[30]=c->r[3]|c->r[3]; // 800BD594
  c->r[31]=R32(c->r[13]+0xFFFFA4ACu); // 800BD598
  c->lr=0x800BD5A0u; f_8009DF9C(c); // 800BD59C
  W32(c->r[13]+0xFFFFA4ACu,c->r[30]); // 800BD5A0
  c->lr=0x800BD5A8u; f_8009DFC4(c); // 800BD5A4
  c->r[3]=c->r[31]|c->r[31]; // 800BD5A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD5AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BD5B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD5B4
  c->lr=c->r[0]; // 800BD5B8
  c->r[1]=c->r[1]+0x00000010u; // 800BD5BC
  return; // 800BD5C0
}

// GXFinishInterruptHandler
void f_800BD5C4(Ctx* __restrict c) {
  trace_call(0x800BD5C4u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD5C4
  c->r[0]=c->lr; // 800BD5C8
  c->r[3]=0u+0x00000001u; // 800BD5CC
  W32(c->r[1]+0x000002E4u,c->r[0]); // 800BD5D0
  W32(c->r[1]+0x000002DCu,c->r[31]); // 800BD5D4
  c->r[31]=c->r[4]|c->r[4]; // 800BD5D8
  c->r[5]=R32(c->r[13]+0xFFFFA460u); // 800BD5DC
  c->r[0]=R16(c->r[5]+0x0000000Au); // 800BD5E0
  c->r[0]=c->r[0]|0x00000008u; // 800BD5E4
  W16(c->r[5]+0x0000000Au,c->r[0]); // 800BD5E8
  c->r[0]=R32(c->r[13]+0xFFFFA4ACu); // 800BD5EC
  W8(c->r[13]+0xFFFFA4A8u,c->r[3]); // 800BD5F0
  cmps(c,0,(int32_t)c->r[0],0); // 800BD5F4
  if (crb(c,2)) { goto L_800BD628; } // 800BD5F8
  c->r[3]=c->r[1]+0x00000008u; // 800BD5FC
  c->lr=0x800BD604u; f_8009A840(c); // 800BD600
  c->r[3]=c->r[1]+0x00000008u; // 800BD604
  c->lr=0x800BD60Cu; f_8009A618(c); // 800BD608
  c->r[12]=R32(c->r[13]+0xFFFFA4ACu); // 800BD60C
  c->ctr=c->r[12]; // 800BD610
  if (true) { c->lr=0x800BD618u; dispatch(c,c->ctr); } // 800BD614
  c->r[3]=c->r[1]+0x00000008u; // 800BD618
  c->lr=0x800BD620u; f_8009A840(c); // 800BD61C
  c->r[3]=c->r[31]|c->r[31]; // 800BD620
  c->lr=0x800BD628u; f_8009A618(c); // 800BD624
L_800BD628:;
  c->r[3]=c->r[13]+0xFFFFA4A0u; // 800BD628
  c->lr=0x800BD630u; f_800A1BA8(c); // 800BD62C
  c->r[0]=R32(c->r[1]+0x000002E4u); // 800BD630
  c->r[31]=R32(c->r[1]+0x000002DCu); // 800BD634
  c->lr=c->r[0]; // 800BD638
  c->r[1]=c->r[1]+0x000002E0u; // 800BD63C
  return; // 800BD640
}

// __GXPEInit
void f_800BD644(Ctx* __restrict c) {
  trace_call(0x800BD644u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD644
  c->r[0]=c->lr; // 800BD648
  c->r[4]=0u+0x800C0000u; // 800BD64C
  c->r[3]=0u+0x00000012u; // 800BD650
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD654
  c->r[4]=c->r[4]+0xFFFFD4FCu; // 800BD658
  c->lr=0x800BD660u; f_8009DFE8(c); // 800BD65C
  c->r[4]=0u+0x800C0000u; // 800BD660
  c->r[3]=0u+0x00000013u; // 800BD664
  c->r[4]=c->r[4]+0xFFFFD5C4u; // 800BD668
  c->lr=0x800BD670u; f_8009DFE8(c); // 800BD66C
  c->r[3]=c->r[13]+0xFFFFA4A0u; // 800BD670
  c->lr=0x800BD678u; f_800A0A80(c); // 800BD674
  c->r[3]=0u+0x00002000u; // 800BD678
  c->lr=0x800BD680u; f_8009E3AC(c); // 800BD67C
  c->r[3]=0u+0x00001000u; // 800BD680
  c->lr=0x800BD688u; f_8009E3AC(c); // 800BD684
  c->r[3]=R32(c->r[13]+0xFFFFA460u); // 800BD688
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800BD68C
  c->r[0]=c->r[0]|0x0000000Fu; // 800BD690
  W16(c->r[3]+0x0000000Au,c->r[0]); // 800BD694
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD698
  c->lr=c->r[0]; // 800BD69C
  c->r[1]=c->r[1]+0x00000010u; // 800BD6A0
  return; // 800BD6A4
}

// __GXSetDirtyState
void f_800BD6A8(Ctx* __restrict c) {
  trace_call(0x800BD6A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD6A8
  c->r[0]=c->lr; // 800BD6AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BD6B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BD6B4
  c->r[31]=R32(c->r[2]+0xFFFF90C0u); // 800BD6B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BD6BC
  c->r[30]=R32(c->r[31]+0x000005FCu); // 800BD6C0
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 800BD6C4
  if (crb(c,2)) { goto L_800BD6D0; } // 800BD6C8
  c->lr=0x800BD6D0u; f_800BF31C(c); // 800BD6CC
L_800BD6D0:;
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 800BD6D0
  if (crb(c,2)) { goto L_800BD6DC; } // 800BD6D4
  c->lr=0x800BD6DCu; f_800BFBCC(c); // 800BD6D8
L_800BD6DC:;
  c->r[0]=rotl(c->r[30],0)&0x00000004u; cr0(c,c->r[0]); // 800BD6DC
  if (crb(c,2)) { goto L_800BD704; } // 800BD6E0
  c->r[4]=0u+0xCC010000u; // 800BD6E4
  c->r[0]=0u+0x00000061u; // 800BD6E8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800BD6EC
  c->r[0]=0u+0x00000000u; // 800BD6F0
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BD6F4
  c->r[3]=R32(c->r[5]+0x00000254u); // 800BD6F8
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800BD6FC
  W16(c->r[5]+0x00000002u,c->r[0]); // 800BD700
L_800BD704:;
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 800BD704
  if (crb(c,2)) { goto L_800BD710; } // 800BD708
  c->lr=0x800BD710u; f_800BC61C(c); // 800BD70C
L_800BD710:;
  c->r[0]=rotl(c->r[30],0)&0x00000010u; cr0(c,c->r[0]); // 800BD710
  if (crb(c,2)) { goto L_800BD71C; } // 800BD714
  c->lr=0x800BD71Cu; f_800BCB90(c); // 800BD718
L_800BD71C:;
  c->r[0]=rotl(c->r[30],0)&0x00000018u; cr0(c,c->r[0]); // 800BD71C
  if (crb(c,2)) { goto L_800BD728; } // 800BD720
  c->lr=0x800BD728u; f_800BC6CC(c); // 800BD724
L_800BD728:;
  c->r[30]=rotl(c->r[30],0)&0xFFFFFF00u; cr0(c,c->r[30]); // 800BD728
  if (crb(c,2)) { goto L_800BD900; } // 800BD72C
  c->r[4]=rotl(c->r[30],0)&0x00000F00u; cr0(c,c->r[4]); // 800BD730
  if (crb(c,2)) { goto L_800BD7C8; } // 800BD734
  c->r[0]=rotl(c->r[4],0)&0x00000100u; cr0(c,c->r[0]); // 800BD738
  if (crb(c,2)) { goto L_800BD75C; } // 800BD73C
  c->r[3]=0u+0xCC010000u; // 800BD740
  c->r[0]=0u+0x00000010u; // 800BD744
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD748
  c->r[0]=0u+0x0000100Au; // 800BD74C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD750
  c->r[0]=R32(c->r[31]+0x000000A8u); // 800BD754
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD758
L_800BD75C:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 800BD75C
  if (crb(c,2)) { goto L_800BD780; } // 800BD760
  c->r[3]=0u+0xCC010000u; // 800BD764
  c->r[0]=0u+0x00000010u; // 800BD768
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD76C
  c->r[0]=0u+0x0000100Bu; // 800BD770
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD774
  c->r[0]=R32(c->r[31]+0x000000ACu); // 800BD778
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD77C
L_800BD780:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 800BD780
  if (crb(c,2)) { goto L_800BD7A4; } // 800BD784
  c->r[3]=0u+0xCC010000u; // 800BD788
  c->r[0]=0u+0x00000010u; // 800BD78C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD790
  c->r[0]=0u+0x0000100Cu; // 800BD794
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD798
  c->r[0]=R32(c->r[31]+0x000000B0u); // 800BD79C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD7A0
L_800BD7A4:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 800BD7A4
  if (crb(c,2)) { goto L_800BD7C8; } // 800BD7A8
  c->r[3]=0u+0xCC010000u; // 800BD7AC
  c->r[0]=0u+0x00000010u; // 800BD7B0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD7B4
  c->r[0]=0u+0x0000100Du; // 800BD7B8
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD7BC
  c->r[0]=R32(c->r[31]+0x000000B4u); // 800BD7C0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD7C4
L_800BD7C8:;
  c->r[7]=rotl(c->r[30],0)&0x01000000u; // 800BD7C8
  c->r[7]=(rotl(c->r[30],0)&0x0000F000u)|(c->r[7]&~0x0000F000u); cr0(c,c->r[7]); // 800BD7CC
  if (crb(c,2)) { goto L_800BD840; } // 800BD7D0
  c->r[0]=rotl(c->r[7],0)&0x01000000u; cr0(c,c->r[0]); // 800BD7D4
  c->r[6]=0u+0x0000100Eu; // 800BD7D8
  if (crb(c,2)) { goto L_800BD800; } // 800BD7DC
  c->r[5]=R32(c->r[31]+0x00000254u); // 800BD7E0
  c->r[3]=0u+0xCC010000u; // 800BD7E4
  c->r[4]=0u+0x00000010u; // 800BD7E8
  c->r[0]=0u+0x00001009u; // 800BD7EC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800BD7F0
  c->r[4]=rotl(c->r[5],28)&0x00000007u; // 800BD7F4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD7F8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BD7FC
L_800BD800:;
  c->r[5]=c->r[31]|c->r[31]; // 800BD800
  c->r[7]=rotl(c->r[7],20)&0x0000000Fu; // 800BD804
  c->r[4]=0u+0x00000010u; // 800BD808
  c->r[3]=0u+0xCC010000u; // 800BD80C
  goto L_800BD838; // 800BD810
L_800BD814:;
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 800BD814
  if (crb(c,2)) { goto L_800BD82C; } // 800BD818
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800BD81C
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 800BD820
  c->r[0]=R32(c->r[5]+0x000000B8u); // 800BD824
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD828
L_800BD82C:;
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800BD82C
  c->r[5]=c->r[5]+0x00000004u; // 800BD830
  c->r[6]=c->r[6]+0x00000001u; // 800BD834
L_800BD838:;
  cmps(c,0,(int32_t)c->r[7],0); // 800BD838
  if (!crb(c,2)) { IRQCHK(c); goto L_800BD814; } // 800BD83C
L_800BD840:;
  c->r[8]=c->r[30]&0x02FF0000u; cr0(c,c->r[8]); // 800BD840
  if (crb(c,2)) { goto L_800BD8C8; } // 800BD844
  c->r[0]=rotl(c->r[8],0)&0x02000000u; cr0(c,c->r[0]); // 800BD848
  c->r[6]=0u+0x00001040u; // 800BD84C
  if (crb(c,2)) { goto L_800BD874; } // 800BD850
  c->r[5]=R32(c->r[31]+0x00000254u); // 800BD854
  c->r[3]=0u+0xCC010000u; // 800BD858
  c->r[4]=0u+0x00000010u; // 800BD85C
  c->r[0]=0u+0x0000103Fu; // 800BD860
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800BD864
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 800BD868
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD86C
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BD870
L_800BD874:;
  c->r[7]=c->r[31]|c->r[31]; // 800BD874
  c->r[8]=rotl(c->r[8],16)&0x000000FFu; // 800BD878
  c->r[4]=0u+0x00000010u; // 800BD87C
  c->r[3]=0u+0xCC010000u; // 800BD880
  goto L_800BD8C0; // 800BD884
L_800BD888:;
  c->r[0]=rotl(c->r[8],0)&0x00000001u; cr0(c,c->r[0]); // 800BD888
  c->r[5]=c->r[6]+0x00000010u; // 800BD88C
  if (crb(c,2)) { goto L_800BD8B4; } // 800BD890
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800BD894
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 800BD898
  c->r[0]=R32(c->r[7]+0x000000C8u); // 800BD89C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD8A0
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800BD8A4
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800BD8A8
  c->r[0]=R32(c->r[7]+0x000000E8u); // 800BD8AC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD8B0
L_800BD8B4:;
  c->r[8]=rotl(c->r[8],31)&0x7FFFFFFFu; // 800BD8B4
  c->r[6]=c->r[6]+0x00000001u; // 800BD8B8
  c->r[7]=c->r[7]+0x00000004u; // 800BD8BC
L_800BD8C0:;
  cmps(c,0,(int32_t)c->r[8],0); // 800BD8C0
  if (!crb(c,2)) { IRQCHK(c); goto L_800BD888; } // 800BD8C4
L_800BD8C8:;
  c->r[0]=rotl(c->r[30],0)&0x04000000u; cr0(c,c->r[0]); // 800BD8C8
  if (crb(c,2)) { goto L_800BD8E0; } // 800BD8CC
  c->r[3]=0u+0x00000000u; // 800BD8D0
  c->lr=0x800BD8D8u; f_800C0E70(c); // 800BD8D4
  c->r[3]=0u+0x00000005u; // 800BD8D8
  c->lr=0x800BD8E0u; f_800C0E70(c); // 800BD8DC
L_800BD8E0:;
  c->r[0]=rotl(c->r[30],0)&0x10000000u; cr0(c,c->r[0]); // 800BD8E0
  if (crb(c,2)) { goto L_800BD8EC; } // 800BD8E4
  c->lr=0x800BD8ECu; f_800C0CE8(c); // 800BD8E8
L_800BD8EC:;
  c->r[0]=rotl(c->r[30],0)&0x08000000u; cr0(c,c->r[0]); // 800BD8EC
  if (crb(c,2)) { goto L_800BD8F8; } // 800BD8F0
  c->lr=0x800BD8F8u; f_800C0A78(c); // 800BD8F4
L_800BD8F8:;
  c->r[0]=0u+0x00000001u; // 800BD8F8
  W16(c->r[31]+0x00000002u,c->r[0]); // 800BD8FC
L_800BD900:;
  c->r[0]=0u+0x00000000u; // 800BD900
  W32(c->r[31]+0x000005FCu,c->r[0]); // 800BD904
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BD908
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BD90C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BD910
  c->lr=c->r[0]; // 800BD914
  c->r[1]=c->r[1]+0x00000010u; // 800BD918
  return; // 800BD91C
}

// GXBegin
void f_800BD920(Ctx* __restrict c) {
  trace_call(0x800BD920u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BD920
  c->r[0]=c->lr; // 800BD924
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BD928
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BD92C
  c->r[31]=R32(c->r[2]+0xFFFF90C0u); // 800BD930
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BD934
  c->r[30]=c->r[5]|c->r[5]; // 800BD938
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BD93C
  c->r[29]=c->r[4]|c->r[4]; // 800BD940
  W32(c->r[1]+0x00000010u,c->r[28]); // 800BD944
  c->r[28]=c->r[3]|c->r[3]; // 800BD948
  c->r[0]=R32(c->r[31]+0x000005FCu); // 800BD94C
  cmps(c,0,(int32_t)c->r[0],0); // 800BD950
  if (crb(c,2)) { goto L_800BD95C; } // 800BD954
  c->lr=0x800BD95Cu; f_800BD6A8(c); // 800BD958
L_800BD95C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800BD95C
  cmps(c,0,(int32_t)c->r[0],0); // 800BD960
  if (!crb(c,2)) { goto L_800BDA3C; } // 800BD964
  c->r[7]=R32(c->r[2]+0xFFFF90C0u); // 800BD968
  c->r[3]=0u+0xCC010000u; // 800BD96C
  c->r[0]=0u+0x00000098u; // 800BD970
  c->r[6]=0u+0x00000000u; // 800BD974
  c->r[5]=R16(c->r[7]+0x00000004u); // 800BD978
  c->r[4]=R16(c->r[7]+0x00000006u); // 800BD97C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD980
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); cr0(c,c->r[5]); // 800BD984
  c->r[0]=R16(c->r[7]+0x00000004u); // 800BD988
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 800BD98C
  if (crb(c,2)) { goto L_800BDA34; } // 800BD990
  c->r[3]=c->r[5]+0x00000003u; // 800BD994
  c->r[7]=c->r[5]+0xFFFFFFE0u; // 800BD998
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 800BD99C
  cmpu(c,0,c->r[0],0x00000008u); // 800BD9A0
  if (!crb(c,1)) { goto L_800BDA0C; } // 800BD9A4
  cmpu(c,0,c->r[3],0x00000003u); // 800BD9A8
  c->r[0]=0u+0x00000000u; // 800BD9AC
  if (crb(c,0)) { goto L_800BD9C0; } // 800BD9B0
  cmpu(c,0,c->r[5],c->r[3]); // 800BD9B4
  if (crb(c,1)) { goto L_800BD9C0; } // 800BD9B8
  c->r[0]=0u+0x00000001u; // 800BD9BC
L_800BD9C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BD9C0
  if (crb(c,2)) { goto L_800BDA0C; } // 800BD9C4
  c->r[0]=c->r[7]+0x0000001Fu; // 800BD9C8
  c->r[4]=0u+0x00000000u; // 800BD9CC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BD9D0
  c->r[3]=0u+0xCC010000u; // 800BD9D4
  c->ctr=c->r[0]; // 800BD9D8
  cmpu(c,0,c->r[7],0x00000000u); // 800BD9DC
  if (!crb(c,1)) { goto L_800BDA0C; } // 800BD9E0
L_800BD9E4:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BD9E4
  c->r[6]=c->r[6]+0x00000020u; // 800BD9E8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BD9EC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BD9F0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BD9F4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BD9F8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BD9FC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BDA00
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BDA04
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BD9E4; } // 800BDA08
L_800BDA0C:;
  c->r[0]=c->r[5]+0x00000003u; // 800BDA0C
  c->r[4]=0u+0x00000000u; // 800BDA10
  c->r[0]=c->r[0]-c->r[6]; // 800BDA14
  c->r[3]=0u+0xCC010000u; // 800BDA18
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800BDA1C
  c->ctr=c->r[0]; // 800BDA20
  cmpu(c,0,c->r[6],c->r[5]); // 800BDA24
  if (!crb(c,0)) { goto L_800BDA34; } // 800BDA28
L_800BDA2C:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BDA2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BDA2C; } // 800BDA30
L_800BDA34:;
  c->r[0]=0u+0x00000001u; // 800BDA34
  W16(c->r[31]+0x00000002u,c->r[0]); // 800BDA38
L_800BDA3C:;
  c->r[3]=0u+0xCC010000u; // 800BDA3C
  c->r[0]=c->r[29]|c->r[28]; // 800BDA40
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BDA44
  W16(c->r[3]+0xFFFF8000u,c->r[30]); // 800BDA48
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BDA4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BDA50
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BDA54
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BDA58
  c->r[28]=R32(c->r[1]+0x00000010u); // 800BDA5C
  c->lr=c->r[0]; // 800BDA60
  c->r[1]=c->r[1]+0x00000020u; // 800BDA64
  return; // 800BDA68
}

// __GXSendFlushPrim
void f_800BDA6C(Ctx* __restrict c) {
  trace_call(0x800BDA6Cu);
  c->r[6]=R32(c->r[2]+0xFFFF90C0u); // 800BDA6C
  c->r[3]=0u+0xCC010000u; // 800BDA70
  c->r[0]=0u+0x00000098u; // 800BDA74
  c->r[7]=0u+0x00000000u; // 800BDA78
  c->r[5]=R16(c->r[6]+0x00000004u); // 800BDA7C
  c->r[4]=R16(c->r[6]+0x00000006u); // 800BDA80
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BDA84
  c->r[8]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); cr0(c,c->r[8]); // 800BDA88
  c->r[0]=R16(c->r[6]+0x00000004u); // 800BDA8C
  W16(c->r[3]+0xFFFF8000u,c->r[0]); // 800BDA90
  if (crb(c,2)) { goto L_800BDB38; } // 800BDA94
  c->r[3]=c->r[8]+0x00000003u; // 800BDA98
  c->r[5]=c->r[8]+0xFFFFFFE0u; // 800BDA9C
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; // 800BDAA0
  cmpu(c,0,c->r[0],0x00000008u); // 800BDAA4
  if (!crb(c,1)) { goto L_800BDB10; } // 800BDAA8
  cmpu(c,0,c->r[3],0x00000003u); // 800BDAAC
  c->r[0]=0u+0x00000000u; // 800BDAB0
  if (crb(c,0)) { goto L_800BDAC4; } // 800BDAB4
  cmpu(c,0,c->r[8],c->r[3]); // 800BDAB8
  if (crb(c,1)) { goto L_800BDAC4; } // 800BDABC
  c->r[0]=0u+0x00000001u; // 800BDAC0
L_800BDAC4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800BDAC4
  if (crb(c,2)) { goto L_800BDB10; } // 800BDAC8
  c->r[0]=c->r[5]+0x0000001Fu; // 800BDACC
  c->r[4]=0u+0x00000000u; // 800BDAD0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800BDAD4
  c->r[3]=0u+0xCC010000u; // 800BDAD8
  c->ctr=c->r[0]; // 800BDADC
  cmpu(c,0,c->r[5],0x00000000u); // 800BDAE0
  if (!crb(c,1)) { goto L_800BDB10; } // 800BDAE4
L_800BDAE8:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BDAE8
  c->r[7]=c->r[7]+0x00000020u; // 800BDAEC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BDAF0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BDAF4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BDAF8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BDAFC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BDB00
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BDB04
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BDB08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BDAE8; } // 800BDB0C
L_800BDB10:;
  c->r[0]=c->r[8]+0x00000003u; // 800BDB10
  c->r[4]=0u+0x00000000u; // 800BDB14
  c->r[0]=c->r[0]-c->r[7]; // 800BDB18
  c->r[3]=0u+0xCC010000u; // 800BDB1C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800BDB20
  c->ctr=c->r[0]; // 800BDB24
  cmpu(c,0,c->r[7],c->r[8]); // 800BDB28
  if (!crb(c,0)) { goto L_800BDB38; } // 800BDB2C
L_800BDB30:;
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BDB30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BDB30; } // 800BDB34
L_800BDB38:;
  c->r[0]=0u+0x00000001u; // 800BDB38
  W16(c->r[6]+0x00000002u,c->r[0]); // 800BDB3C
  return; // 800BDB40
}

// GXSetLineWidth
void f_800BDB44(Ctx* __restrict c) {
  trace_call(0x800BDB44u);
  c->r[8]=R32(c->r[2]+0xFFFF90C0u); // 800BDB44
  c->r[5]=0u+0xCC010000u; // 800BDB48
  c->r[6]=0u+0x00000061u; // 800BDB4C
  c->r[0]=0u+0x00000000u; // 800BDB50
  c->r[7]=R32(c->r[8]+0x0000007Cu); // 800BDB54
  c->r[7]=(rotl(c->r[3],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800BDB58
  c->r[7]=(rotl(c->r[4],16)&0x00070000u)|(c->r[7]&~0x00070000u); // 800BDB5C
  W32(c->r[8]+0x0000007Cu,c->r[7]); // 800BDB60
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800BDB64
  c->r[3]=R32(c->r[8]+0x0000007Cu); // 800BDB68
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 800BDB6C
  W16(c->r[8]+0x00000002u,c->r[0]); // 800BDB70
  return; // 800BDB74
}

// fn_800BDB78
void f_800BDB78(Ctx* __restrict c) {
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BDB78
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 800BDB7C
  W8(c->r[3]+0x00000000u,c->r[0]); // 800BDB80
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 800BDB84
  c->r[0]=rotl(c->r[0],16)&0x00000007u; // 800BDB88
  W32(c->r[4]+0x00000000u,c->r[0]); // 800BDB8C
  return; // 800BDB90
}

// GXSetPointSize
void f_800BDB94(Ctx* __restrict c) {
  trace_call(0x800BDB94u);
  c->r[8]=R32(c->r[2]+0xFFFF90C0u); // 800BDB94
  c->r[5]=0u+0xCC010000u; // 800BDB98
  c->r[6]=0u+0x00000061u; // 800BDB9C
  c->r[0]=0u+0x00000000u; // 800BDBA0
  c->r[7]=R32(c->r[8]+0x0000007Cu); // 800BDBA4
  c->r[7]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 800BDBA8
  c->r[7]=(rotl(c->r[4],19)&0x00380000u)|(c->r[7]&~0x00380000u); // 800BDBAC
  W32(c->r[8]+0x0000007Cu,c->r[7]); // 800BDBB0
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800BDBB4
  c->r[3]=R32(c->r[8]+0x0000007Cu); // 800BDBB8
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 800BDBBC
  W16(c->r[8]+0x00000002u,c->r[0]); // 800BDBC0
  return; // 800BDBC4
}

// GXEnableTexOffsets
void f_800BDBC8(Ctx* __restrict c) {
  trace_call(0x800BDBC8u);
  c->r[9]=R32(c->r[2]+0xFFFF90C0u); // 800BDBC8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BDBCC
  c->r[6]=0u+0xCC010000u; // 800BDBD0
  c->r[3]=0u+0x00000061u; // 800BDBD4
  c->r[8]=c->r[9]+c->r[0]; // 800BDBD8
  c->r[0]=0u+0x00000000u; // 800BDBDC
  c->r[7]=R32(c->r[8]+0x00000108u); // 800BDBE0
  c->r[7]=(rotl(c->r[4],18)&0x00040000u)|(c->r[7]&~0x00040000u); // 800BDBE4
  c->r[7]=(rotl(c->r[5],19)&0x00080000u)|(c->r[7]&~0x00080000u); // 800BDBE8
  W32(c->r[8]+0x00000108u,c->r[7]); // 800BDBEC
  W8(c->r[6]+0xFFFF8000u,c->r[3]); // 800BDBF0
  c->r[3]=R32(c->r[8]+0x00000108u); // 800BDBF4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800BDBF8
  W16(c->r[9]+0x00000002u,c->r[0]); // 800BDBFC
  return; // 800BDC00
}

// GXSetCullMode
void f_800BDC04(Ctx* __restrict c) {
  trace_call(0x800BDC04u);
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800BDC04
  c->r[5]=rotl(c->r[3],31)&0x00000001u; // 800BDC08
  c->r[5]=(rotl(c->r[3],1)&0x00000002u)|(c->r[5]&~0x00000002u); // 800BDC0C
  c->r[0]=R32(c->r[4]+0x00000254u); // 800BDC10
  c->r[0]=(rotl(c->r[5],14)&0x0000C000u)|(c->r[0]&~0x0000C000u); // 800BDC14
  W32(c->r[4]+0x00000254u,c->r[0]); // 800BDC18
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800BDC1C
  c->r[0]=c->r[0]|0x00000004u; // 800BDC20
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800BDC24
  return; // 800BDC28
}

// GXSetCoPlanar
void f_800BDC2C(Ctx* __restrict c) {
  trace_call(0x800BDC2Cu);
  c->r[7]=R32(c->r[2]+0xFFFF90C0u); // 800BDC2C
  c->r[4]=0u+0xCC010000u; // 800BDC30
  c->r[5]=0u+0x00000061u; // 800BDC34
  c->r[0]=0u+0xFE080000u; // 800BDC38
  c->r[6]=R32(c->r[7]+0x00000254u); // 800BDC3C
  c->r[6]=(rotl(c->r[3],19)&0x00080000u)|(c->r[6]&~0x00080000u); // 800BDC40
  W32(c->r[7]+0x00000254u,c->r[6]); // 800BDC44
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BDC48
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800BDC4C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BDC50
  c->r[0]=R32(c->r[7]+0x00000254u); // 800BDC54
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800BDC58
  return; // 800BDC5C
}

// fn_800BDC60
void f_800BDC60(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 800BDC60
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800BDC64
  c->r[7]=(rotl(c->r[3],0)&0x000003FFu)|(c->r[7]&~0x000003FFu); // 800BDC68
  c->r[3]=0u+0x00000000u; // 800BDC6C
  c->r[7]=(rotl(c->r[4],10)&0x000FFC00u)|(c->r[7]&~0x000FFC00u); // 800BDC70
  c->r[4]=0u+0x00000049u; // 800BDC74
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 800BDC78
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800BDC7C
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 800BDC80
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BDC84
  c->r[7]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800BDC88
  c->r[0]=0u+0x0000004Au; // 800BDC8C
  W32(c->r[5]+0x00000230u,c->r[7]); // 800BDC90
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800BDC94
  W32(c->r[5]+0x00000234u,c->r[3]); // 800BDC98
  return; // 800BDC9C
}

// fn_800BDCA0
void f_800BDCA0(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 800BDCA0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800BDCA4
  c->r[7]=(rotl(c->r[3],0)&0x000003FFu)|(c->r[7]&~0x000003FFu); // 800BDCA8
  c->r[3]=0u+0x00000000u; // 800BDCAC
  c->r[7]=(rotl(c->r[4],10)&0x000FFC00u)|(c->r[7]&~0x000FFC00u); // 800BDCB0
  c->r[4]=0u+0x00000049u; // 800BDCB4
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 800BDCB8
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800BDCBC
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 800BDCC0
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BDCC4
  c->r[7]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800BDCC8
  c->r[0]=0u+0x0000004Au; // 800BDCCC
  W32(c->r[5]+0x00000240u,c->r[7]); // 800BDCD0
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800BDCD4
  W32(c->r[5]+0x00000244u,c->r[3]); // 800BDCD8
  return; // 800BDCDC
}

// fn_800BDCE0
void f_800BDCE0(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],1)&0x0000FFFEu; // 800BDCE0
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800BDCE4
  c->r[0]=sraw(c,c->r[0],5); // 800BDCE8
  c->r[3]=0u+0x00000000u; // 800BDCEC
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 800BDCF0
  c->r[0]=0u+0x0000004Du; // 800BDCF4
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800BDCF8
  W32(c->r[4]+0x00000238u,c->r[3]); // 800BDCFC
  return; // 800BDD00
}

// fn_800BDD04
void f_800BDD04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDD04
  c->r[0]=c->lr; // 800BDD08
  c->r[7]=R32(c->r[2]+0xFFFF90C0u); // 800BDD0C
  cmps(c,0,(int32_t)c->r[5],19); // 800BDD10
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BDD14
  c->r[0]=0u+0x00000000u; // 800BDD18
  c->r[9]=c->r[3]|c->r[3]; // 800BDD1C
  c->r[8]=c->r[4]|c->r[4]; // 800BDD20
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800BDD24
  c->r[31]=rotl(c->r[5],0)&0x0000000Fu; // 800BDD28
  W32(c->r[1]+0x00000028u,c->r[30]); // 800BDD2C
  c->r[30]=c->r[6]|c->r[6]; // 800BDD30
  W32(c->r[1]+0x00000024u,c->r[29]); // 800BDD34
  W32(c->r[1]+0x00000020u,c->r[28]); // 800BDD38
  W8(c->r[7]+0x00000250u,c->r[0]); // 800BDD3C
  if (!crb(c,2)) { goto L_800BDD48; } // 800BDD40
  c->r[31]=0u+0x0000000Bu; // 800BDD44
L_800BDD48:;
  cmps(c,0,(int32_t)c->r[5],38); // 800BDD48
  if (crb(c,2)) { goto L_800BDD68; } // 800BDD4C
  if (!crb(c,0)) { goto L_800BDD80; } // 800BDD50
  cmps(c,0,(int32_t)c->r[5],4); // 800BDD54
  if (!crb(c,0)) { goto L_800BDD80; } // 800BDD58
  cmps(c,0,(int32_t)c->r[5],0); // 800BDD5C
  if (!crb(c,0)) { goto L_800BDD68; } // 800BDD60
  goto L_800BDD80; // 800BDD64
L_800BDD68:;
  c->r[0]=0u+0x00000003u; // 800BDD68
  c->r[3]=R32(c->r[7]+0x0000024Cu); // 800BDD6C
  c->r[3]=(rotl(c->r[0],15)&0x00018000u)|(c->r[3]&~0x00018000u); // 800BDD70
  c->r[29]=c->r[7]+0x0000024Cu; // 800BDD74
  W32(c->r[7]+0x0000024Cu,c->r[3]); // 800BDD78
  goto L_800BDD94; // 800BDD7C
L_800BDD80:;
  c->r[0]=0u+0x00000002u; // 800BDD80
  c->r[3]=R32(c->r[7]+0x0000024Cu); // 800BDD84
  c->r[3]=(rotl(c->r[0],15)&0x00018000u)|(c->r[3]&~0x00018000u); // 800BDD88
  c->r[29]=c->r[7]+0x0000024Cu; // 800BDD8C
  W32(c->r[7]+0x0000024Cu,c->r[3]); // 800BDD90
L_800BDD94:;
  c->r[0]=rotl(c->r[5],28)&0x00000001u; // 800BDD94
  c->r[3]=c->r[5]|c->r[5]; // 800BDD98
  W8(c->r[7]+0x00000250u,c->r[0]); // 800BDD9C
  c->r[5]=c->r[8]|c->r[8]; // 800BDDA0
  c->r[28]=R32(c->r[2]+0xFFFF90C0u); // 800BDDA4
  c->r[4]=c->r[9]|c->r[9]; // 800BDDA8
  c->r[0]=R32(c->r[29]+0x00000000u); // 800BDDAC
  c->r[0]=(rotl(c->r[31],0)&0x00000008u)|(c->r[0]&~0x00000008u); // 800BDDB0
  c->r[6]=c->r[1]+0x00000010u; // 800BDDB4
  c->r[7]=c->r[1]+0x0000000Cu; // 800BDDB8
  W32(c->r[29]+0x00000000u,c->r[0]); // 800BDDBC
  c->r[8]=c->r[1]+0x00000008u; // 800BDDC0
  c->lr=0x800BDDC8u; f_800BEA3C(c); // 800BDDC4
  c->r[0]=0u+0x00000000u; // 800BDDC8
  c->r[3]=0u+0x00000000u; // 800BDDCC
  W32(c->r[28]+0x00000248u,c->r[0]); // 800BDDD0
  c->r[0]=0u+0x0000004Du; // 800BDDD4
  c->r[5]=R32(c->r[1]+0x00000010u); // 800BDDD8
  c->r[4]=R32(c->r[1]+0x00000008u); // 800BDDDC
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 800BDDE0
  c->r[3]=(rotl(c->r[4],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 800BDDE4
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800BDDE8
  W32(c->r[28]+0x00000248u,c->r[3]); // 800BDDEC
  c->r[0]=R32(c->r[29]+0x00000000u); // 800BDDF0
  c->r[0]=(rotl(c->r[30],9)&0x00000200u)|(c->r[0]&~0x00000200u); // 800BDDF4
  c->r[0]=(rotl(c->r[31],4)&0x00000070u)|(c->r[0]&~0x00000070u); // 800BDDF8
  W32(c->r[29]+0x00000000u,c->r[0]); // 800BDDFC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800BDE00
  c->r[30]=R32(c->r[1]+0x00000028u); // 800BDE04
  c->r[29]=R32(c->r[1]+0x00000024u); // 800BDE08
  c->r[28]=R32(c->r[1]+0x00000020u); // 800BDE0C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BDE10
  c->lr=c->r[0]; // 800BDE14
  c->r[1]=c->r[1]+0x00000030u; // 800BDE18
  return; // 800BDE1C
}

// fn_800BDE20
void f_800BDE20(Ctx* __restrict c) {
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800BDE20
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 800BDE24
  c->r[0]=(rotl(c->r[3],12)&0x00003000u)|(c->r[0]&~0x00003000u); // 800BDE28
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 800BDE2C
  c->r[0]=R32(c->r[4]+0x0000024Cu); // 800BDE30
  c->r[0]=rotl(c->r[0],0)&0xFFFFCFFFu; // 800BDE34
  W32(c->r[4]+0x0000024Cu,c->r[0]); // 800BDE38
  return; // 800BDE3C
}

// fn_800BDE40
void f_800BDE40(Ctx* __restrict c) {
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800BDE40
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 800BDE44
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800BDE48
  c->r[0]=(rotl(c->r[3],0)&0x00000002u)|(c->r[0]&~0x00000002u); // 800BDE4C
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 800BDE50
  c->r[0]=R32(c->r[4]+0x0000024Cu); // 800BDE54
  c->r[0]=(rotl(c->r[3],0)&0x00000001u)|(c->r[0]&~0x00000001u); // 800BDE58
  c->r[0]=(rotl(c->r[3],0)&0x00000002u)|(c->r[0]&~0x00000002u); // 800BDE5C
  W32(c->r[4]+0x0000024Cu,c->r[0]); // 800BDE60
  return; // 800BDE64
}

// GXGetYScaleFactor
void f_800BDE68(Ctx* __restrict c) {
  trace_call(0x800BDE68u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BDE68
  c->r[0]=c->lr; // 800BDE6C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800BDE70
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800BDE74
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800BDE78
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800BDE7C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 800BDE80
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 800BDE84
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 800BDE88
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 800BDE8C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 800BDE90
  c->r[0]=0u+0x43300000u; // 800BDE94
  {uint32_t ea=c->r[2]+0xFFFF90F0u; c->f[3]=RF64(ea);} // 800BDE98
  W32(c->r[1]+0x00000008u,c->r[0]); // 800BDE9C
  {uint32_t ea=c->r[2]+0xFFFF90E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BDEA0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800BDEA4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800BDEA8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800BDEAC
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 800BDEB0
  W32(c->r[1]+0x00000014u,c->r[3]); // 800BDEB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800BDEB8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800BDEBC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 800BDEC0
  W32(c->r[1]+0x00000028u,c->r[30]); // 800BDEC4
  c->f[28]=c->ps1[28]=S(c->f[2]/c->f[1]); // 800BDEC8
  W32(c->r[1]+0x00000024u,c->r[29]); // 800BDECC
  c->r[29]=c->r[4]|c->r[4]; // 800BDED0
  W32(c->r[1]+0x00000020u,c->r[28]); // 800BDED4
  c->r[28]=c->r[3]|c->r[3]; // 800BDED8
  c->r[30]=c->r[29]|c->r[29]; // 800BDEDC
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[28]); // 800BDEE0
  c->lr=0x800BDEE8u; f_800C2030(c); // 800BDEE4
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 800BDEE8
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 800BDEEC
  c->r[31]=rotl(c->r[0],8)&0xFFFFFF00u; // 800BDEF0
  c->r[3]=divwu(c->r[31],c->r[4]); // 800BDEF4
  cmpu(c,0,c->r[4],0x00000080u); // 800BDEF8
  c->r[3]=c->r[3]+0x00000001u; // 800BDEFC
  if (!crb(c,1)) { goto L_800BDF30; } // 800BDF00
  cmpu(c,0,c->r[4],0x00000100u); // 800BDF04
  if (!crb(c,0)) { goto L_800BDF30; } // 800BDF08
  goto L_800BDF14; // 800BDF0C
L_800BDF10:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800BDF10
L_800BDF14:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800BDF14
  if (crb(c,2)) { IRQCHK(c); goto L_800BDF10; } // 800BDF18
  c->r[0]=divwu(c->r[28],c->r[4]); // 800BDF1C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800BDF20
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 800BDF24
  if (!crb(c,2)) { goto L_800BDF30; } // 800BDF28
  c->r[3]=c->r[3]+0x00000001u; // 800BDF2C
L_800BDF30:;
  cmpu(c,0,c->r[3],0x00000400u); // 800BDF30
  if (!crb(c,1)) { goto L_800BDF3C; } // 800BDF34
  c->r[3]=0u+0x00000400u; // 800BDF38
L_800BDF3C:;
  {uint32_t ea=c->r[2]+0xFFFF90F0u; c->f[31]=RF64(ea);} // 800BDF3C
  {uint32_t ea=c->r[2]+0xFFFF90E8u; c->f[30]=c->ps1[30]=RF32(ea);} // 800BDF40
  goto L_800BDFBC; // 800BDF44
L_800BDF48:;
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800BDF48
  W32(c->r[1]+0x00000014u,c->r[28]); // 800BDF4C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800BDF50
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800BDF54
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800BDF58
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800BDF5C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 800BDF60
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 800BDF64
  c->f[1]=c->ps1[1]=S(c->f[30]/c->f[28]); // 800BDF68
  c->lr=0x800BDF70u; f_800C2030(c); // 800BDF6C
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 800BDF70
  c->r[3]=divwu(c->r[31],c->r[4]); // 800BDF74
  cmpu(c,0,c->r[4],0x00000080u); // 800BDF78
  c->r[3]=c->r[3]+0x00000001u; // 800BDF7C
  if (!crb(c,1)) { goto L_800BDFB0; } // 800BDF80
  cmpu(c,0,c->r[4],0x00000100u); // 800BDF84
  if (!crb(c,0)) { goto L_800BDFB0; } // 800BDF88
  goto L_800BDF94; // 800BDF8C
L_800BDF90:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800BDF90
L_800BDF94:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800BDF94
  if (crb(c,2)) { IRQCHK(c); goto L_800BDF90; } // 800BDF98
  c->r[0]=divwu(c->r[28],c->r[4]); // 800BDF9C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800BDFA0
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 800BDFA4
  if (!crb(c,2)) { goto L_800BDFB0; } // 800BDFA8
  c->r[3]=c->r[3]+0x00000001u; // 800BDFAC
L_800BDFB0:;
  cmpu(c,0,c->r[3],0x00000400u); // 800BDFB0
  if (!crb(c,1)) { goto L_800BDFBC; } // 800BDFB4
  c->r[3]=0u+0x00000400u; // 800BDFB8
L_800BDFBC:;
  cmpu(c,0,c->r[3],c->r[29]); // 800BDFBC
  if (crb(c,1)) { IRQCHK(c); goto L_800BDF48; } // 800BDFC0
  c->f[29]=c->f[28]; // 800BDFC4
  {uint32_t ea=c->r[2]+0xFFFF90F0u; c->f[30]=RF64(ea);} // 800BDFC8
  {uint32_t ea=c->r[2]+0xFFFF90E8u; c->f[31]=c->ps1[31]=RF32(ea);} // 800BDFCC
  goto L_800BE04C; // 800BDFD0
L_800BDFD4:;
  c->r[30]=c->r[30]+0x00000001u; // 800BDFD4
  W32(c->r[1]+0x00000014u,c->r[28]); // 800BDFD8
  c->f[29]=c->f[28]; // 800BDFDC
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800BDFE0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800BDFE4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800BDFE8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800BDFEC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 800BDFF0
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 800BDFF4
  c->f[1]=c->ps1[1]=S(c->f[31]/c->f[28]); // 800BDFF8
  c->lr=0x800BE000u; f_800C2030(c); // 800BDFFC
  c->r[4]=rotl(c->r[3],0)&0x000001FFu; // 800BE000
  c->r[3]=divwu(c->r[31],c->r[4]); // 800BE004
  cmpu(c,0,c->r[4],0x00000080u); // 800BE008
  c->r[3]=c->r[3]+0x00000001u; // 800BE00C
  if (!crb(c,1)) { goto L_800BE040; } // 800BE010
  cmpu(c,0,c->r[4],0x00000100u); // 800BE014
  if (!crb(c,0)) { goto L_800BE040; } // 800BE018
  goto L_800BE024; // 800BE01C
L_800BE020:;
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800BE020
L_800BE024:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800BE024
  if (crb(c,2)) { IRQCHK(c); goto L_800BE020; } // 800BE028
  c->r[0]=divwu(c->r[28],c->r[4]); // 800BE02C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800BE030
  c->r[0]=c->r[28]-c->r[0]; cr0(c,c->r[0]); // 800BE034
  if (!crb(c,2)) { goto L_800BE040; } // 800BE038
  c->r[3]=c->r[3]+0x00000001u; // 800BE03C
L_800BE040:;
  cmpu(c,0,c->r[3],0x00000400u); // 800BE040
  if (!crb(c,1)) { goto L_800BE04C; } // 800BE044
  c->r[3]=0u+0x00000400u; // 800BE048
L_800BE04C:;
  cmpu(c,0,c->r[3],c->r[29]); // 800BE04C
  if (crb(c,0)) { IRQCHK(c); goto L_800BDFD4; } // 800BE050
  c->f[1]=c->f[29]; // 800BE054
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 800BE058
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800BE05C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 800BE060
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800BE064
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 800BE068
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 800BE06C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 800BE070
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 800BE074
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800BE078
  c->r[30]=R32(c->r[1]+0x00000028u); // 800BE07C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800BE080
  c->r[28]=R32(c->r[1]+0x00000020u); // 800BE084
  c->r[0]=R32(c->r[1]+0x00000074u); // 800BE088
  c->lr=c->r[0]; // 800BE08C
  c->r[1]=c->r[1]+0x00000070u; // 800BE090
  return; // 800BE094
}

// GXSetDispCopyYScale
void f_800BE098(Ctx* __restrict c) {
  trace_call(0x800BE098u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BE098
  c->r[0]=c->lr; // 800BE09C
  {uint32_t ea=c->r[2]+0xFFFF90E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BE0A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BE0A4
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 800BE0A8
  c->lr=0x800BE0B0u; f_800C2030(c); // 800BE0AC
  c->r[4]=0u+0xCC010000u; // 800BE0B0
  c->r[0]=0u+0x00000061u; // 800BE0B4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800BE0B8
  c->r[0]=0u+0x0000004Eu; // 800BE0BC
  c->r[5]=0u+0x00000000u; // 800BE0C0
  c->r[7]=rotl(c->r[3],0)&0x000001FFu; // 800BE0C4
  c->r[5]=(rotl(c->r[3],0)&0x000001FFu)|(c->r[5]&~0x000001FFu); // 800BE0C8
  c->r[6]=R32(c->r[2]+0xFFFF90C0u); // 800BE0CC
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 800BE0D0
  c->r[0]=0u+0x00000000u; // 800BE0D4
  W32(c->r[4]+0xFFFF8000u,c->r[5]); // 800BE0D8
  c->r[3]=addc(c,~c->r[7],0x00000100u,1); // 800BE0DC
  cmpu(c,0,c->r[7],0x00000080u); // 800BE0E0
  W16(c->r[6]+0x00000002u,c->r[0]); // 800BE0E4
  c->r[0]=c->r[7]+0xFFFFFF00u; // 800BE0E8
  c->r[3]=c->r[3]|c->r[0]; // 800BE0EC
  c->r[0]=R32(c->r[6]+0x0000023Cu); // 800BE0F0
  c->r[0]=(rotl(c->r[3],11)&0x00000400u)|(c->r[0]&~0x00000400u); // 800BE0F4
  W32(c->r[6]+0x0000023Cu,c->r[0]); // 800BE0F8
  c->r[0]=R32(c->r[6]+0x00000234u); // 800BE0FC
  c->r[3]=rotl(c->r[0],22)&0x000003FFu; // 800BE100
  c->r[4]=c->r[3]+0x00000001u; // 800BE104
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BE108
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 800BE10C
  c->r[3]=divwu(c->r[0],c->r[7]); // 800BE110
  c->r[3]=c->r[3]+0x00000001u; // 800BE114
  if (!crb(c,1)) { goto L_800BE148; } // 800BE118
  cmpu(c,0,c->r[7],0x00000100u); // 800BE11C
  if (!crb(c,0)) { goto L_800BE148; } // 800BE120
  goto L_800BE12C; // 800BE124
L_800BE128:;
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800BE128
L_800BE12C:;
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 800BE12C
  if (crb(c,2)) { IRQCHK(c); goto L_800BE128; } // 800BE130
  c->r[0]=divwu(c->r[4],c->r[7]); // 800BE134
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[7]); // 800BE138
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 800BE13C
  if (!crb(c,2)) { goto L_800BE148; } // 800BE140
  c->r[3]=c->r[3]+0x00000001u; // 800BE144
L_800BE148:;
  cmpu(c,0,c->r[3],0x00000400u); // 800BE148
  if (!crb(c,1)) { goto L_800BE154; } // 800BE14C
  c->r[3]=0u+0x00000400u; // 800BE150
L_800BE154:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BE154
  c->lr=c->r[0]; // 800BE158
  c->r[1]=c->r[1]+0x00000010u; // 800BE15C
  return; // 800BE160
}

// GXSetCopyClear
void f_800BE164(Ctx* __restrict c) {
  trace_call(0x800BE164u);
  c->r[6]=R8(c->r[3]+0x00000000u); // 800BE164
  c->r[7]=0u+0xCC010000u; // 800BE168
  c->r[8]=0u+0x00000061u; // 800BE16C
  c->r[0]=R8(c->r[3]+0x00000003u); // 800BE170
  c->r[10]=0u+0x00000000u; // 800BE174
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800BE178
  c->r[10]=(rotl(c->r[6],0)&0x000000FFu)|(c->r[10]&~0x000000FFu); // 800BE17C
  c->r[9]=0u+0x0000004Fu; // 800BE180
  c->r[10]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[10]&~0x0000FF00u); // 800BE184
  c->r[0]=R8(c->r[3]+0x00000002u); // 800BE188
  c->r[10]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 800BE18C
  c->r[6]=0u+0x00000000u; // 800BE190
  W32(c->r[7]+0xFFFF8000u,c->r[10]); // 800BE194
  c->r[6]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 800BE198
  c->r[3]=R8(c->r[3]+0x00000001u); // 800BE19C
  c->r[0]=0u+0x00000050u; // 800BE1A0
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800BE1A4
  c->r[5]=0u+0x00000000u; // 800BE1A8
  c->r[6]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 800BE1AC
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BE1B0
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800BE1B4
  c->r[0]=0u+0x00000051u; // 800BE1B8
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 800BE1BC
  c->r[5]=(rotl(c->r[4],0)&0x00FFFFFFu)|(c->r[5]&~0x00FFFFFFu); // 800BE1C0
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 800BE1C4
  c->r[0]=0u+0x00000000u; // 800BE1C8
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800BE1CC
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 800BE1D0
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BE1D4
  return; // 800BE1D8
}

// GXSetCopyFilter
void f_800BE1DC(Ctx* __restrict c) {
  trace_call(0x800BE1DCu);
  cmps(c,0,(int32_t)c->r[3],0); // 800BE1DC
  if (crb(c,2)) { goto L_800BE2D8; } // 800BE1E0
  c->r[8]=R8(c->r[4]+0x00000000u); // 800BE1E4
  c->r[0]=0u+0x00000000u; // 800BE1E8
  c->r[10]=R8(c->r[4]+0x00000001u); // 800BE1EC
  c->r[3]=0u+0x00000000u; // 800BE1F0
  c->r[0]=(rotl(c->r[8],0)&0x0000000Fu)|(c->r[0]&~0x0000000Fu); // 800BE1F4
  c->r[7]=R8(c->r[4]+0x00000006u); // 800BE1F8
  c->r[0]=(rotl(c->r[10],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 800BE1FC
  c->r[8]=R8(c->r[4]+0x0000000Cu); // 800BE200
  c->r[3]=(rotl(c->r[7],0)&0x0000000Fu)|(c->r[3]&~0x0000000Fu); // 800BE204
  c->r[7]=0u+0x00000000u; // 800BE208
  c->r[7]=(rotl(c->r[8],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 800BE20C
  c->r[10]=R8(c->r[4]+0x0000000Du); // 800BE210
  c->r[11]=R8(c->r[4]+0x00000007u); // 800BE214
  c->r[8]=0u+0x00000000u; // 800BE218
  c->r[7]=(rotl(c->r[10],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 800BE21C
  c->r[10]=R8(c->r[4]+0x00000002u); // 800BE220
  c->r[9]=R8(c->r[4]+0x00000012u); // 800BE224
  c->r[3]=(rotl(c->r[11],4)&0x000000F0u)|(c->r[3]&~0x000000F0u); // 800BE228
  c->r[0]=(rotl(c->r[10],8)&0x00000F00u)|(c->r[0]&~0x00000F00u); // 800BE22C
  c->r[10]=R8(c->r[4]+0x0000000Eu); // 800BE230
  c->r[8]=(rotl(c->r[9],0)&0x0000000Fu)|(c->r[8]&~0x0000000Fu); // 800BE234
  c->r[9]=R8(c->r[4]+0x00000013u); // 800BE238
  c->r[7]=(rotl(c->r[10],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 800BE23C
  c->r[10]=R8(c->r[4]+0x00000003u); // 800BE240
  c->r[8]=(rotl(c->r[9],4)&0x000000F0u)|(c->r[8]&~0x000000F0u); // 800BE244
  c->r[9]=R8(c->r[4]+0x00000014u); // 800BE248
  c->r[0]=(rotl(c->r[10],12)&0x0000F000u)|(c->r[0]&~0x0000F000u); // 800BE24C
  c->r[10]=R8(c->r[4]+0x0000000Fu); // 800BE250
  c->r[8]=(rotl(c->r[9],8)&0x00000F00u)|(c->r[8]&~0x00000F00u); // 800BE254
  c->r[9]=R8(c->r[4]+0x00000015u); // 800BE258
  c->r[7]=(rotl(c->r[10],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 800BE25C
  c->r[10]=R8(c->r[4]+0x00000004u); // 800BE260
  c->r[11]=R8(c->r[4]+0x00000008u); // 800BE264
  c->r[8]=(rotl(c->r[9],12)&0x0000F000u)|(c->r[8]&~0x0000F000u); // 800BE268
  c->r[0]=(rotl(c->r[10],16)&0x000F0000u)|(c->r[0]&~0x000F0000u); // 800BE26C
  c->r[10]=R8(c->r[4]+0x00000010u); // 800BE270
  c->r[9]=R8(c->r[4]+0x00000016u); // 800BE274
  c->r[3]=(rotl(c->r[11],8)&0x00000F00u)|(c->r[3]&~0x00000F00u); // 800BE278
  c->r[11]=R8(c->r[4]+0x00000009u); // 800BE27C
  c->r[7]=(rotl(c->r[10],16)&0x000F0000u)|(c->r[7]&~0x000F0000u); // 800BE280
  c->r[10]=R8(c->r[4]+0x00000005u); // 800BE284
  c->r[8]=(rotl(c->r[9],16)&0x000F0000u)|(c->r[8]&~0x000F0000u); // 800BE288
  c->r[9]=R8(c->r[4]+0x00000011u); // 800BE28C
  c->r[3]=(rotl(c->r[11],12)&0x0000F000u)|(c->r[3]&~0x0000F000u); // 800BE290
  c->r[11]=R8(c->r[4]+0x0000000Au); // 800BE294
  c->r[0]=(rotl(c->r[10],20)&0x00F00000u)|(c->r[0]&~0x00F00000u); // 800BE298
  c->r[10]=R8(c->r[4]+0x0000000Bu); // 800BE29C
  c->r[7]=(rotl(c->r[9],20)&0x00F00000u)|(c->r[7]&~0x00F00000u); // 800BE2A0
  c->r[4]=R8(c->r[4]+0x00000017u); // 800BE2A4
  c->r[9]=0u+0x00000001u; // 800BE2A8
  c->r[3]=(rotl(c->r[11],16)&0x000F0000u)|(c->r[3]&~0x000F0000u); // 800BE2AC
  c->r[3]=(rotl(c->r[10],20)&0x00F00000u)|(c->r[3]&~0x00F00000u); // 800BE2B0
  c->r[8]=(rotl(c->r[4],20)&0x00F00000u)|(c->r[8]&~0x00F00000u); // 800BE2B4
  c->r[0]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 800BE2B8
  c->r[10]=0u+0x00000002u; // 800BE2BC
  c->r[9]=0u+0x00000003u; // 800BE2C0
  c->r[4]=0u+0x00000004u; // 800BE2C4
  c->r[3]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800BE2C8
  c->r[7]=(rotl(c->r[9],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800BE2CC
  c->r[8]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800BE2D0
  goto L_800BE2F8; // 800BE2D4
L_800BE2D8:;
  c->r[8]=0u+0x01660000u; // 800BE2D8
  c->r[3]=0u+0x02660000u; // 800BE2DC
  c->r[7]=0u+0x03660000u; // 800BE2E0
  c->r[4]=0u+0x04660000u; // 800BE2E4
  c->r[0]=c->r[8]+0x00006666u; // 800BE2E8
  c->r[3]=c->r[3]+0x00006666u; // 800BE2EC
  c->r[7]=c->r[7]+0x00006666u; // 800BE2F0
  c->r[8]=c->r[4]+0x00006666u; // 800BE2F4
L_800BE2F8:;
  c->r[9]=0u+0xCC010000u; // 800BE2F8
  c->r[10]=0u+0x00000061u; // 800BE2FC
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 800BE300
  cmps(c,0,(int32_t)c->r[5],0); // 800BE304
  c->r[4]=0u+0x00000053u; // 800BE308
  c->r[11]=0u+0x00000000u; // 800BE30C
  W32(c->r[9]+0xFFFF8000u,c->r[0]); // 800BE310
  c->r[0]=0u+0x00000054u; // 800BE314
  c->r[12]=0u+0x00000000u; // 800BE318
  c->r[11]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 800BE31C
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 800BE320
  c->r[12]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 800BE324
  W32(c->r[9]+0xFFFF8000u,c->r[3]); // 800BE328
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 800BE32C
  W32(c->r[9]+0xFFFF8000u,c->r[7]); // 800BE330
  W8(c->r[9]+0xFFFF8000u,c->r[10]); // 800BE334
  W32(c->r[9]+0xFFFF8000u,c->r[8]); // 800BE338
  if (crb(c,2)) { goto L_800BE37C; } // 800BE33C
  c->r[4]=R8(c->r[6]+0x00000000u); // 800BE340
  c->r[0]=R8(c->r[6]+0x00000004u); // 800BE344
  c->r[11]=(rotl(c->r[4],0)&0x0000003Fu)|(c->r[11]&~0x0000003Fu); // 800BE348
  c->r[3]=R8(c->r[6]+0x00000001u); // 800BE34C
  c->r[12]=(rotl(c->r[0],0)&0x0000003Fu)|(c->r[12]&~0x0000003Fu); // 800BE350
  c->r[5]=R8(c->r[6]+0x00000002u); // 800BE354
  c->r[11]=(rotl(c->r[3],6)&0x00000FC0u)|(c->r[11]&~0x00000FC0u); // 800BE358
  c->r[3]=R8(c->r[6]+0x00000005u); // 800BE35C
  c->r[4]=R8(c->r[6]+0x00000003u); // 800BE360
  c->r[11]=(rotl(c->r[5],12)&0x0003F000u)|(c->r[11]&~0x0003F000u); // 800BE364
  c->r[0]=R8(c->r[6]+0x00000006u); // 800BE368
  c->r[12]=(rotl(c->r[3],6)&0x00000FC0u)|(c->r[12]&~0x00000FC0u); // 800BE36C
  c->r[11]=(rotl(c->r[4],18)&0x00FC0000u)|(c->r[11]&~0x00FC0000u); // 800BE370
  c->r[12]=(rotl(c->r[0],12)&0x0003F000u)|(c->r[12]&~0x0003F000u); // 800BE374
  goto L_800BE398; // 800BE378
L_800BE37C:;
  c->r[3]=0u+0x00000015u; // 800BE37C
  c->r[11]=rotl(c->r[11],0)&0xFFFFF000u; // 800BE380
  c->r[12]=(rotl(c->r[3],0)&0x0000003Fu)|(c->r[12]&~0x0000003Fu); // 800BE384
  c->r[0]=0u+0x00000016u; // 800BE388
  c->r[11]=(rotl(c->r[3],12)&0x0003F000u)|(c->r[11]&~0x0003F000u); // 800BE38C
  c->r[11]=(rotl(c->r[0],18)&0x00FC0000u)|(c->r[11]&~0x00FC0000u); // 800BE390
  c->r[12]=rotl(c->r[12],0)&0xFFFC003Fu; // 800BE394
L_800BE398:;
  c->r[4]=0u+0xCC010000u; // 800BE398
  c->r[5]=0u+0x00000061u; // 800BE39C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BE3A0
  c->r[0]=0u+0x00000000u; // 800BE3A4
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BE3A8
  W32(c->r[4]+0xFFFF8000u,c->r[11]); // 800BE3AC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BE3B0
  W32(c->r[4]+0xFFFF8000u,c->r[12]); // 800BE3B4
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BE3B8
  return; // 800BE3BC
}

// GXSetDispCopyGamma
void f_800BE3C0(Ctx* __restrict c) {
  trace_call(0x800BE3C0u);
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800BE3C0
  c->r[0]=R32(c->r[4]+0x0000023Cu); // 800BE3C4
  c->r[0]=(rotl(c->r[3],7)&0x00000180u)|(c->r[0]&~0x00000180u); // 800BE3C8
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 800BE3CC
  return; // 800BE3D0
}

// GXCopyDisp
void f_800BE3D4(Ctx* __restrict c) {
  trace_call(0x800BE3D4u);
  cmps(c,0,(int32_t)c->r[4],0); // 800BE3D4
  if (crb(c,2)) { goto L_800BE408; } // 800BE3D8
  c->r[7]=R32(c->r[2]+0xFFFF90C0u); // 800BE3DC
  c->r[5]=0u+0xCC010000u; // 800BE3E0
  c->r[0]=0u+0x00000061u; // 800BE3E4
  c->r[6]=R32(c->r[7]+0x00000228u); // 800BE3E8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800BE3EC
  c->r[6]=c->r[6]|0x0000000Fu; // 800BE3F0
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800BE3F4
  c->r[6]=R32(c->r[7]+0x00000220u); // 800BE3F8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800BE3FC
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFCu; // 800BE400
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800BE404
L_800BE408:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BE408
  c->r[12]=0u+0x00000000u; // 800BE40C
  if (!crb(c,2)) { goto L_800BE42C; } // 800BE410
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BE414
  c->r[0]=R32(c->r[5]+0x0000022Cu); // 800BE418
  c->r[10]=c->r[5]+0x0000022Cu; // 800BE41C
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 800BE420
  cmpu(c,0,c->r[0],0x00000003u); // 800BE424
  if (!crb(c,2)) { goto L_800BE45C; } // 800BE428
L_800BE42C:;
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BE42C
  c->r[7]=R32(c->r[5]+0x0000022Cu); // 800BE430
  c->r[10]=c->r[5]+0x0000022Cu; // 800BE434
  c->r[0]=rotl(c->r[7],26)&0x00000001u; // 800BE438
  cmpu(c,0,c->r[0],0x00000001u); // 800BE43C
  if (!crb(c,2)) { goto L_800BE45C; } // 800BE440
  c->r[6]=0u+0xCC010000u; // 800BE444
  c->r[0]=0u+0x00000061u; // 800BE448
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800BE44C
  c->r[0]=rotl(c->r[7],0)&0xFFFFFFBFu; // 800BE450
  c->r[12]=0u+0x00000001u; // 800BE454
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800BE458
L_800BE45C:;
  c->r[8]=0u+0xCC010000u; // 800BE45C
  c->r[9]=0u+0x00000061u; // 800BE460
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800BE464
  c->r[6]=0u+0x00000000u; // 800BE468
  c->r[11]=R32(c->r[2]+0xFFFF90C0u); // 800BE46C
  c->r[6]=(rotl(c->r[3],27)&0x00FFFFFFu)|(c->r[6]&~0x00FFFFFFu); // 800BE470
  c->r[3]=0u+0x0000004Bu; // 800BE474
  c->r[0]=0u+0x00000052u; // 800BE478
  c->r[7]=R32(c->r[11]+0x00000230u); // 800BE47C
  c->r[6]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800BE480
  cmps(c,0,(int32_t)c->r[4],0); // 800BE484
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 800BE488
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800BE48C
  c->r[3]=R32(c->r[11]+0x00000234u); // 800BE490
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 800BE494
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800BE498
  c->r[3]=R32(c->r[11]+0x00000238u); // 800BE49C
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 800BE4A0
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800BE4A4
  W32(c->r[8]+0xFFFF8000u,c->r[6]); // 800BE4A8
  c->r[3]=R32(c->r[11]+0x0000023Cu); // 800BE4AC
  c->r[3]=(rotl(c->r[4],11)&0x00000800u)|(c->r[3]&~0x00000800u); // 800BE4B0
  c->r[3]=c->r[3]|0x00004000u; // 800BE4B4
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800BE4B8
  W32(c->r[11]+0x0000023Cu,c->r[3]); // 800BE4BC
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800BE4C0
  c->r[0]=R32(c->r[11]+0x0000023Cu); // 800BE4C4
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 800BE4C8
  if (crb(c,2)) { goto L_800BE4E8; } // 800BE4CC
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800BE4D0
  c->r[0]=R32(c->r[11]+0x00000228u); // 800BE4D4
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 800BE4D8
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800BE4DC
  c->r[0]=R32(c->r[11]+0x00000220u); // 800BE4E0
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 800BE4E4
L_800BE4E8:;
  cmps(c,0,(int32_t)c->r[12],0); // 800BE4E8
  if (crb(c,2)) { goto L_800BE504; } // 800BE4EC
  c->r[3]=0u+0xCC010000u; // 800BE4F0
  c->r[0]=0u+0x00000061u; // 800BE4F4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BE4F8
  c->r[0]=R32(c->r[10]+0x00000000u); // 800BE4FC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BE500
L_800BE504:;
  c->r[0]=0u+0x00000000u; // 800BE504
  W16(c->r[5]+0x00000002u,c->r[0]); // 800BE508
  return; // 800BE50C
}

// GXCopyTex
void f_800BE510(Ctx* __restrict c) {
  trace_call(0x800BE510u);
  cmps(c,0,(int32_t)c->r[4],0); // 800BE510
  if (crb(c,2)) { goto L_800BE544; } // 800BE514
  c->r[7]=R32(c->r[2]+0xFFFF90C0u); // 800BE518
  c->r[5]=0u+0xCC010000u; // 800BE51C
  c->r[0]=0u+0x00000061u; // 800BE520
  c->r[6]=R32(c->r[7]+0x00000228u); // 800BE524
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800BE528
  c->r[6]=c->r[6]|0x0000000Fu; // 800BE52C
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800BE530
  c->r[6]=R32(c->r[7]+0x00000220u); // 800BE534
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800BE538
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFCu; // 800BE53C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800BE540
L_800BE544:;
  c->r[9]=R32(c->r[2]+0xFFFF90C0u); // 800BE544
  c->r[11]=0u+0x00000000u; // 800BE548
  c->r[0]=R8(c->r[9]+0x00000250u); // 800BE54C
  c->r[6]=R32(c->r[9]+0x0000022Cu); // 800BE550
  cmps(c,0,(int32_t)c->r[0],0); // 800BE554
  if (crb(c,2)) { goto L_800BE574; } // 800BE558
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 800BE55C
  cmpu(c,0,c->r[0],0x00000003u); // 800BE560
  if (crb(c,2)) { goto L_800BE574; } // 800BE564
  c->r[0]=0u+0x00000003u; // 800BE568
  c->r[11]=0u+0x00000001u; // 800BE56C
  c->r[6]=(rotl(c->r[0],0)&0x00000007u)|(c->r[6]&~0x00000007u); // 800BE570
L_800BE574:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BE574
  if (!crb(c,2)) { goto L_800BE588; } // 800BE578
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 800BE57C
  cmpu(c,0,c->r[0],0x00000003u); // 800BE580
  if (!crb(c,2)) { goto L_800BE59C; } // 800BE584
L_800BE588:;
  c->r[0]=rotl(c->r[6],26)&0x00000001u; // 800BE588
  cmpu(c,0,c->r[0],0x00000001u); // 800BE58C
  if (!crb(c,2)) { goto L_800BE59C; } // 800BE590
  c->r[11]=0u+0x00000001u; // 800BE594
  c->r[6]=rotl(c->r[6],0)&0xFFFFFFBFu; // 800BE598
L_800BE59C:;
  cmps(c,0,(int32_t)c->r[11],0); // 800BE59C
  if (crb(c,2)) { goto L_800BE5B4; } // 800BE5A0
  c->r[5]=0u+0xCC010000u; // 800BE5A4
  c->r[0]=0u+0x00000061u; // 800BE5A8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800BE5AC
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800BE5B0
L_800BE5B4:;
  c->r[7]=0u+0xCC010000u; // 800BE5B4
  c->r[8]=0u+0x00000061u; // 800BE5B8
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800BE5BC
  c->r[5]=0u+0x00000000u; // 800BE5C0
  c->r[10]=R32(c->r[2]+0xFFFF90C0u); // 800BE5C4
  c->r[5]=(rotl(c->r[3],27)&0x00FFFFFFu)|(c->r[5]&~0x00FFFFFFu); // 800BE5C8
  c->r[3]=0u+0x0000004Bu; // 800BE5CC
  c->r[0]=0u+0x00000052u; // 800BE5D0
  c->r[6]=R32(c->r[10]+0x00000240u); // 800BE5D4
  c->r[5]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 800BE5D8
  cmps(c,0,(int32_t)c->r[4],0); // 800BE5DC
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 800BE5E0
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800BE5E4
  c->r[3]=R32(c->r[10]+0x00000244u); // 800BE5E8
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 800BE5EC
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800BE5F0
  c->r[3]=R32(c->r[10]+0x00000248u); // 800BE5F4
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 800BE5F8
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800BE5FC
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 800BE600
  c->r[3]=R32(c->r[10]+0x0000024Cu); // 800BE604
  c->r[3]=(rotl(c->r[4],11)&0x00000800u)|(c->r[3]&~0x00000800u); // 800BE608
  c->r[3]=rotl(c->r[3],0)&0xFFFFBFFFu; // 800BE60C
  c->r[3]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 800BE610
  W32(c->r[10]+0x0000024Cu,c->r[3]); // 800BE614
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800BE618
  c->r[0]=R32(c->r[10]+0x0000024Cu); // 800BE61C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 800BE620
  if (crb(c,2)) { goto L_800BE640; } // 800BE624
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800BE628
  c->r[0]=R32(c->r[10]+0x00000228u); // 800BE62C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 800BE630
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 800BE634
  c->r[0]=R32(c->r[10]+0x00000220u); // 800BE638
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 800BE63C
L_800BE640:;
  cmps(c,0,(int32_t)c->r[11],0); // 800BE640
  if (crb(c,2)) { goto L_800BE65C; } // 800BE644
  c->r[3]=0u+0xCC010000u; // 800BE648
  c->r[0]=0u+0x00000061u; // 800BE64C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BE650
  c->r[0]=R32(c->r[9]+0x0000022Cu); // 800BE654
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BE658
L_800BE65C:;
  c->r[0]=0u+0x00000000u; // 800BE65C
  W16(c->r[9]+0x00000002u,c->r[0]); // 800BE660
  return; // 800BE664
}

// GXClearBoundingBox
void f_800BE668(Ctx* __restrict c) {
  trace_call(0x800BE668u);
  c->r[5]=0u+0xCC010000u; // 800BE668
  c->r[6]=0u+0x00000061u; // 800BE66C
  c->r[3]=0u+0x55000000u; // 800BE670
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800BE674
  c->r[0]=c->r[3]+0x000003FFu; // 800BE678
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800BE67C
  c->r[3]=0u+0x56000000u; // 800BE680
  c->r[4]=c->r[3]+0x000003FFu; // 800BE684
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BE688
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800BE68C
  c->r[0]=0u+0x00000000u; // 800BE690
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800BE694
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BE698
  return; // 800BE69C
}

// GXSetChanAmbColor
void f_800BE6A0(Ctx* __restrict c) {
  trace_call(0x800BE6A0u);
  cmps(c,0,(int32_t)c->r[3],3); // 800BE6A0
  if (crb(c,2)) { goto L_800BE71C; } // 800BE6A4
  if (!crb(c,0)) { goto L_800BE6C4; } // 800BE6A8
  cmps(c,0,(int32_t)c->r[3],1); // 800BE6AC
  if (crb(c,2)) { goto L_800BE6EC; } // 800BE6B0
  if (!crb(c,0)) { goto L_800BE704; } // 800BE6B4
  cmps(c,0,(int32_t)c->r[3],0); // 800BE6B8
  if (!crb(c,0)) { goto L_800BE6D4; } // 800BE6BC
  return; // 800BE6C0
L_800BE6C4:;
  cmps(c,0,(int32_t)c->r[3],5); // 800BE6C4
  if (crb(c,2)) { goto L_800BE740; } // 800BE6C8
  if (!crb(c,0)) return; // 800BE6CC
  goto L_800BE734; // 800BE6D0
L_800BE6D4:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BE6D4
  c->r[8]=0u+0x00000000u; // 800BE6D8
  c->r[0]=R32(c->r[4]+0x00000000u); // 800BE6DC
  c->r[7]=R32(c->r[3]+0x000000A8u); // 800BE6E0
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 800BE6E4
  goto L_800BE750; // 800BE6E8
L_800BE6EC:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BE6EC
  c->r[8]=0u+0x00000001u; // 800BE6F0
  c->r[0]=R32(c->r[4]+0x00000000u); // 800BE6F4
  c->r[7]=R32(c->r[3]+0x000000ACu); // 800BE6F8
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 800BE6FC
  goto L_800BE750; // 800BE700
L_800BE704:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BE704
  c->r[8]=0u+0x00000000u; // 800BE708
  c->r[0]=R8(c->r[4]+0x00000003u); // 800BE70C
  c->r[7]=R32(c->r[3]+0x000000A8u); // 800BE710
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800BE714
  goto L_800BE750; // 800BE718
L_800BE71C:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BE71C
  c->r[8]=0u+0x00000001u; // 800BE720
  c->r[0]=R8(c->r[4]+0x00000003u); // 800BE724
  c->r[7]=R32(c->r[3]+0x000000ACu); // 800BE728
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800BE72C
  goto L_800BE750; // 800BE730
L_800BE734:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 800BE734
  c->r[8]=0u+0x00000000u; // 800BE738
  goto L_800BE750; // 800BE73C
L_800BE740:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 800BE740
  c->r[8]=0u+0x00000001u; // 800BE744
  goto L_800BE750; // 800BE748
  return; // 800BE74C
L_800BE750:;
  c->r[6]=R32(c->r[2]+0xFFFF90C0u); // 800BE750
  c->r[3]=0u+0x00000100u; // 800BE754
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800BE758
  c->r[5]=R32(c->r[6]+0x000005FCu); // 800BE75C
  c->r[4]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 800BE760
  c->r[3]=c->r[6]+c->r[0]; // 800BE764
  c->r[0]=c->r[5]|c->r[4]; // 800BE768
  W32(c->r[6]+0x000005FCu,c->r[0]); // 800BE76C
  W32(c->r[3]+0x000000A8u,c->r[7]); // 800BE770
  return; // 800BE774
}

// GXSetChanMatColor
void f_800BE778(Ctx* __restrict c) {
  trace_call(0x800BE778u);
  cmps(c,0,(int32_t)c->r[3],3); // 800BE778
  if (crb(c,2)) { goto L_800BE7F4; } // 800BE77C
  if (!crb(c,0)) { goto L_800BE79C; } // 800BE780
  cmps(c,0,(int32_t)c->r[3],1); // 800BE784
  if (crb(c,2)) { goto L_800BE7C4; } // 800BE788
  if (!crb(c,0)) { goto L_800BE7DC; } // 800BE78C
  cmps(c,0,(int32_t)c->r[3],0); // 800BE790
  if (!crb(c,0)) { goto L_800BE7AC; } // 800BE794
  return; // 800BE798
L_800BE79C:;
  cmps(c,0,(int32_t)c->r[3],5); // 800BE79C
  if (crb(c,2)) { goto L_800BE818; } // 800BE7A0
  if (!crb(c,0)) return; // 800BE7A4
  goto L_800BE80C; // 800BE7A8
L_800BE7AC:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BE7AC
  c->r[8]=0u+0x00000000u; // 800BE7B0
  c->r[0]=R32(c->r[4]+0x00000000u); // 800BE7B4
  c->r[7]=R32(c->r[3]+0x000000B0u); // 800BE7B8
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 800BE7BC
  goto L_800BE828; // 800BE7C0
L_800BE7C4:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BE7C4
  c->r[8]=0u+0x00000001u; // 800BE7C8
  c->r[0]=R32(c->r[4]+0x00000000u); // 800BE7CC
  c->r[7]=R32(c->r[3]+0x000000B4u); // 800BE7D0
  c->r[7]=(rotl(c->r[0],0)&0xFFFFFF00u)|(c->r[7]&~0xFFFFFF00u); // 800BE7D4
  goto L_800BE828; // 800BE7D8
L_800BE7DC:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BE7DC
  c->r[8]=0u+0x00000000u; // 800BE7E0
  c->r[0]=R8(c->r[4]+0x00000003u); // 800BE7E4
  c->r[7]=R32(c->r[3]+0x000000B0u); // 800BE7E8
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800BE7EC
  goto L_800BE828; // 800BE7F0
L_800BE7F4:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BE7F4
  c->r[8]=0u+0x00000001u; // 800BE7F8
  c->r[0]=R8(c->r[4]+0x00000003u); // 800BE7FC
  c->r[7]=R32(c->r[3]+0x000000B4u); // 800BE800
  c->r[7]=(rotl(c->r[0],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800BE804
  goto L_800BE828; // 800BE808
L_800BE80C:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 800BE80C
  c->r[8]=0u+0x00000000u; // 800BE810
  goto L_800BE828; // 800BE814
L_800BE818:;
  c->r[7]=R32(c->r[4]+0x00000000u); // 800BE818
  c->r[8]=0u+0x00000001u; // 800BE81C
  goto L_800BE828; // 800BE820
  return; // 800BE824
L_800BE828:;
  c->r[6]=R32(c->r[2]+0xFFFF90C0u); // 800BE828
  c->r[3]=0u+0x00000400u; // 800BE82C
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800BE830
  c->r[5]=R32(c->r[6]+0x000005FCu); // 800BE834
  c->r[4]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 800BE838
  c->r[3]=c->r[6]+c->r[0]; // 800BE83C
  c->r[0]=c->r[5]|c->r[4]; // 800BE840
  W32(c->r[6]+0x000005FCu,c->r[0]); // 800BE844
  W32(c->r[3]+0x000000B0u,c->r[7]); // 800BE848
  return; // 800BE84C
}

// GXSetNumChans
void f_800BE850(Ctx* __restrict c) {
  trace_call(0x800BE850u);
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800BE850
  c->r[0]=R32(c->r[4]+0x00000254u); // 800BE854
  c->r[0]=(rotl(c->r[3],4)&0x00000070u)|(c->r[0]&~0x00000070u); // 800BE858
  W32(c->r[4]+0x00000254u,c->r[0]); // 800BE85C
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800BE860
  c->r[0]=c->r[0]|0x01000000u; // 800BE864
  c->r[0]=c->r[0]|0x00000004u; // 800BE868
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800BE86C
  return; // 800BE870
}

// GXSetChanCtrl
void f_800BE874(Ctx* __restrict c) {
  trace_call(0x800BE874u);
  cmps(c,0,(int32_t)c->r[9],0); // 800BE874
  c->r[10]=0u+0x00000000u; // 800BE878
  c->r[10]=(rotl(c->r[4],1)&0x00000002u)|(c->r[10]&~0x00000002u); // 800BE87C
  c->r[11]=rotl(c->r[3],0)&0x00000003u; // 800BE880
  c->r[10]=(rotl(c->r[6],0)&0x00000001u)|(c->r[10]&~0x00000001u); // 800BE884
  c->r[10]=(rotl(c->r[5],6)&0x00000040u)|(c->r[10]&~0x00000040u); // 800BE888
  if (!crb(c,2)) { goto L_800BE894; } // 800BE88C
  c->r[8]=0u+0x00000000u; // 800BE890
L_800BE894:;
  c->r[5]=addc(c,~c->r[9],0x00000002u,1); // 800BE894
  c->r[4]=c->r[9]+0xFFFFFFFEu; // 800BE898
  c->r[0]=0u-c->r[9]; // 800BE89C
  c->r[10]=(rotl(c->r[8],7)&0x00000180u)|(c->r[10]&~0x00000180u); // 800BE8A0
  c->r[4]=c->r[5]|c->r[4]; // 800BE8A4
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BE8A8
  c->r[10]=(rotl(c->r[4],10)&0x00000200u)|(c->r[10]&~0x00000200u); // 800BE8AC
  c->r[0]=c->r[0]|c->r[9]; // 800BE8B0
  c->r[10]=(rotl(c->r[0],11)&0x00000400u)|(c->r[10]&~0x00000400u); // 800BE8B4
  c->r[4]=rotl(c->r[11],2)&0xFFFFFFFCu; // 800BE8B8
  c->r[10]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[10]&~0x0000003Cu); // 800BE8BC
  c->r[0]=0u+0x00001000u; // 800BE8C0
  c->r[4]=c->r[5]+c->r[4]; // 800BE8C4
  cmps(c,0,(int32_t)c->r[3],4); // 800BE8C8
  c->r[10]=(rotl(c->r[7],7)&0x00007800u)|(c->r[10]&~0x00007800u); // 800BE8CC
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[0]<<((c->r[11])&31)); // 800BE8D0
  W32(c->r[4]+0x000000B8u,c->r[10]); // 800BE8D4
  c->r[4]=R32(c->r[5]+0x000005FCu); // 800BE8D8
  c->r[0]=c->r[4]|c->r[0]; // 800BE8DC
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800BE8E0
  if (!crb(c,2)) { goto L_800BE8FC; } // 800BE8E4
  W32(c->r[5]+0x000000C0u,c->r[10]); // 800BE8E8
  c->r[0]=R32(c->r[5]+0x000005FCu); // 800BE8EC
  c->r[0]=c->r[0]|0x00005000u; // 800BE8F0
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800BE8F4
  return; // 800BE8F8
L_800BE8FC:;
  cmps(c,0,(int32_t)c->r[3],5); // 800BE8FC
  if (!crb(c,2)) return; // 800BE900
  W32(c->r[5]+0x000000C4u,c->r[10]); // 800BE904
  c->r[0]=R32(c->r[5]+0x000005FCu); // 800BE908
  c->r[0]=c->r[0]|0x0000A000u; // 800BE90C
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800BE910
  return; // 800BE914
}

// GXGetTexBufferSize
void f_800BE918(Ctx* __restrict c) {
  trace_call(0x800BE918u);
  cmpu(c,0,c->r[5],0x0000003Cu); // 800BE918
  if (crb(c,1)) { goto L_800BE95C; } // 800BE91C
  c->r[8]=0u+0x80220000u; // 800BE920
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800BE924
  c->r[8]=c->r[8]+0xFFFFB560u; // 800BE928
  c->r[8]=R32(c->r[8]+c->r[0]); // 800BE92C
  c->ctr=c->r[8]; // 800BE930
  if (true) { switch (c->ctr) { case 0x800BE938u: goto L_800BE938; case 0x800BE944u: goto L_800BE944; case 0x800BE950u: goto L_800BE950; case 0x800BE95Cu: goto L_800BE95C; default: break; } dispatch(c,c->ctr); return; } // 800BE934
L_800BE938:;
  c->r[10]=0u+0x00000003u; // 800BE938
  c->r[0]=0u+0x00000003u; // 800BE93C
  goto L_800BE964; // 800BE940
L_800BE944:;
  c->r[10]=0u+0x00000003u; // 800BE944
  c->r[0]=0u+0x00000002u; // 800BE948
  goto L_800BE964; // 800BE94C
L_800BE950:;
  c->r[10]=0u+0x00000002u; // 800BE950
  c->r[0]=0u+0x00000002u; // 800BE954
  goto L_800BE964; // 800BE958
L_800BE95C:;
  c->r[0]=0u+0x00000000u; // 800BE95C
  c->r[10]=0u+0x00000000u; // 800BE960
L_800BE964:;
  cmpu(c,0,c->r[5],0x00000006u); // 800BE964
  if (crb(c,2)) { goto L_800BE974; } // 800BE968
  cmpu(c,0,c->r[5],0x00000016u); // 800BE96C
  if (!crb(c,2)) { goto L_800BE97C; } // 800BE970
L_800BE974:;
  c->r[11]=0u+0x00000040u; // 800BE974
  goto L_800BE980; // 800BE978
L_800BE97C:;
  c->r[11]=0u+0x00000020u; // 800BE97C
L_800BE980:;
  cmpu(c,0,c->r[6],0x00000001u); // 800BE980
  if (!crb(c,2)) { goto L_800BEA08; } // 800BE984
  c->r[5]=0u+0x00000001u; // 800BE988
  c->r[12]=0u+0x00000000u; // 800BE98C
  c->r[8]=((c->r[10])&0x20)?0u:(c->r[5]<<((c->r[10])&31)); // 800BE990
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800BE994
  c->ctr=c->r[7]; // 800BE998
  cmpu(c,0,c->r[7],0x00000000u); // 800BE99C
  if (!crb(c,1)) { goto L_800BEA34; } // 800BE9A0
L_800BE9A4:;
  c->r[6]=c->r[3]+c->r[8]; // 800BE9A4
  c->r[5]=c->r[4]+c->r[9]; // 800BE9A8
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800BE9AC
  cmpu(c,0,c->r[3],0x00000001u); // 800BE9B0
  c->r[6]=sraw(c,c->r[6],(c->r[10])&63); // 800BE9B4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800BE9B8
  c->r[6]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[6]); // 800BE9BC
  c->r[5]=sraw(c,c->r[5],(c->r[0])&63); // 800BE9C0
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 800BE9C4
  c->r[12]=c->r[12]+c->r[5]; // 800BE9C8
  if (!crb(c,2)) { goto L_800BE9D8; } // 800BE9CC
  cmpu(c,0,c->r[4],0x00000001u); // 800BE9D0
  if (crb(c,2)) { goto L_800BEA34; } // 800BE9D4
L_800BE9D8:;
  cmpu(c,0,c->r[3],0x00000001u); // 800BE9D8
  c->r[5]=0u+0x00000001u; // 800BE9DC
  if (!crb(c,1)) { goto L_800BE9E8; } // 800BE9E0
  c->r[5]=rotl(c->r[3],31)&0x00007FFFu; // 800BE9E4
L_800BE9E8:;
  cmpu(c,0,c->r[4],0x00000001u); // 800BE9E8
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 800BE9EC
  c->r[5]=0u+0x00000001u; // 800BE9F0
  if (!crb(c,1)) { goto L_800BE9FC; } // 800BE9F4
  c->r[5]=rotl(c->r[4],31)&0x00007FFFu; // 800BE9F8
L_800BE9FC:;
  c->r[4]=rotl(c->r[5],0)&0x0000FFFFu; // 800BE9FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800BE9A4; } // 800BEA00
  goto L_800BEA34; // 800BEA04
L_800BEA08:;
  c->r[6]=0u+0x00000001u; // 800BEA08
  c->r[5]=((c->r[10])&0x20)?0u:(c->r[6]<<((c->r[10])&31)); // 800BEA0C
  c->r[5]=c->r[3]+c->r[5]; // 800BEA10
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 800BEA14
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800BEA18
  c->r[5]=sraw(c,c->r[5],(c->r[10])&63); // 800BEA1C
  c->r[3]=c->r[4]+c->r[3]; // 800BEA20
  c->r[4]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[5]); // 800BEA24
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800BEA28
  c->r[0]=sraw(c,c->r[3],(c->r[0])&63); // 800BEA2C
  c->r[12]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800BEA30
L_800BEA34:;
  c->r[3]=c->r[12]|c->r[12]; // 800BEA34
  return; // 800BEA38
}

// __GetImageTileCount
void f_800BEA3C(Ctx* __restrict c) {
  trace_call(0x800BEA3Cu);
  cmpu(c,0,c->r[3],0x0000003Cu); // 800BEA3C
  if (crb(c,1)) { goto L_800BEA80; } // 800BEA40
  c->r[9]=0u+0x80220000u; // 800BEA44
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BEA48
  c->r[9]=c->r[9]+0xFFFFB654u; // 800BEA4C
  c->r[9]=R32(c->r[9]+c->r[0]); // 800BEA50
  c->ctr=c->r[9]; // 800BEA54
  if (true) { switch (c->ctr) { case 0x800BEA5Cu: goto L_800BEA5C; case 0x800BEA68u: goto L_800BEA68; case 0x800BEA74u: goto L_800BEA74; case 0x800BEA80u: goto L_800BEA80; default: break; } dispatch(c,c->ctr); return; } // 800BEA58
L_800BEA5C:;
  c->r[11]=0u+0x00000003u; // 800BEA5C
  c->r[12]=0u+0x00000003u; // 800BEA60
  goto L_800BEA88; // 800BEA64
L_800BEA68:;
  c->r[11]=0u+0x00000003u; // 800BEA68
  c->r[12]=0u+0x00000002u; // 800BEA6C
  goto L_800BEA88; // 800BEA70
L_800BEA74:;
  c->r[11]=0u+0x00000002u; // 800BEA74
  c->r[12]=0u+0x00000002u; // 800BEA78
  goto L_800BEA88; // 800BEA7C
L_800BEA80:;
  c->r[12]=0u+0x00000000u; // 800BEA80
  c->r[11]=0u+0x00000000u; // 800BEA84
L_800BEA88:;
  cmps(c,0,(int32_t)c->r[4],0); // 800BEA88
  if (!crb(c,2)) { goto L_800BEA94; } // 800BEA8C
  c->r[4]=0u+0x00000001u; // 800BEA90
L_800BEA94:;
  cmps(c,0,(int32_t)c->r[5],0); // 800BEA94
  if (!crb(c,2)) { goto L_800BEAA0; } // 800BEA98
  c->r[5]=0u+0x00000001u; // 800BEA9C
L_800BEAA0:;
  c->r[10]=0u+0x00000001u; // 800BEAA0
  cmps(c,0,(int32_t)c->r[3],6); // 800BEAA4
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[10]<<((c->r[11])&31)); // 800BEAA8
  c->r[9]=0u+0x00000000u; // 800BEAAC
  c->r[4]=c->r[4]+c->r[0]; // 800BEAB0
  c->r[0]=((c->r[12])&0x20)?0u:(c->r[10]<<((c->r[12])&31)); // 800BEAB4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800BEAB8
  c->r[10]=sraw(c,c->r[4],(c->r[11])&63); // 800BEABC
  c->r[4]=c->r[5]+c->r[0]; // 800BEAC0
  W32(c->r[6]+0x00000000u,c->r[10]); // 800BEAC4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800BEAC8
  c->r[0]=sraw(c,c->r[0],(c->r[12])&63); // 800BEACC
  W32(c->r[7]+0x00000000u,c->r[0]); // 800BEAD0
  if (crb(c,2)) { goto L_800BEAE0; } // 800BEAD4
  cmps(c,0,(int32_t)c->r[3],22); // 800BEAD8
  if (!crb(c,2)) { goto L_800BEAE4; } // 800BEADC
L_800BEAE0:;
  c->r[9]=0u+0x00000001u; // 800BEAE0
L_800BEAE4:;
  c->r[0]=0u-c->r[9]; // 800BEAE4
  c->r[0]=c->r[0]|c->r[9]; // 800BEAE8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800BEAEC
  c->r[0]=c->r[3]+0x00000001u; // 800BEAF0
  W32(c->r[8]+0x00000000u,c->r[0]); // 800BEAF4
  return; // 800BEAF8
}

// GXInitTexObj
void f_800BEAFC(Ctx* __restrict c) {
  trace_call(0x800BEAFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEAFC
  c->r[0]=c->lr; // 800BEB00
  W32(c->r[1]+0x00000044u,c->r[0]); // 800BEB04
  c->r[11]=c->r[1]+0x00000040u; // 800BEB08
  c->lr=0x800BEB10u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BEB0C
  c->r[27]=c->r[4]|c->r[4]; // 800BEB10
  c->r[28]=c->r[5]|c->r[5]; // 800BEB14
  c->r[31]=c->r[3]|c->r[3]; // 800BEB18
  c->r[29]=c->r[6]|c->r[6]; // 800BEB1C
  c->r[30]=c->r[7]|c->r[7]; // 800BEB20
  c->r[24]=c->r[8]|c->r[8]; // 800BEB24
  c->r[25]=c->r[9]|c->r[9]; // 800BEB28
  c->r[26]=c->r[10]|c->r[10]; // 800BEB2C
  c->r[4]=0u+0x00000000u; // 800BEB30
  c->r[5]=0u+0x00000020u; // 800BEB34
  c->lr=0x800BEB3Cu; f_8000443C(c); // 800BEB38
  c->r[0]=R32(c->r[31]+0x00000000u); // 800BEB3C
  c->r[0]=(rotl(c->r[24],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 800BEB40
  c->r[0]=(rotl(c->r[25],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 800BEB44
  cmps(c,0,(int32_t)c->r[26],0); // 800BEB48
  c->r[4]=c->r[0]|0x00000010u; // 800BEB4C
  W32(c->r[31]+0x00000000u,c->r[4]); // 800BEB50
  if (crb(c,2)) { goto L_800BEBE4; } // 800BEB54
  c->r[3]=R8(c->r[31]+0x0000001Fu); // 800BEB58
  c->r[0]=c->r[30]+0xFFFFFFF8u; // 800BEB5C
  cmpu(c,0,c->r[0],0x00000002u); // 800BEB60
  c->r[0]=c->r[3]|0x00000001u; // 800BEB64
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 800BEB68
  if (crb(c,1)) { goto L_800BEB80; } // 800BEB6C
  c->r[0]=0u+0x00000005u; // 800BEB70
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 800BEB74
  W32(c->r[31]+0x00000000u,c->r[4]); // 800BEB78
  goto L_800BEB8C; // 800BEB7C
L_800BEB80:;
  c->r[0]=0u+0x00000006u; // 800BEB80
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 800BEB84
  W32(c->r[31]+0x00000000u,c->r[4]); // 800BEB88
L_800BEB8C:;
  cmpu(c,0,c->r[28],c->r[29]); // 800BEB8C
  if (!crb(c,1)) { goto L_800BEBA0; } // 800BEB90
  c->r[0]=cntlz(c->r[28]); // 800BEB94
  c->r[3]=addc(c,~c->r[0],0x0000001Fu,1); // 800BEB98
  goto L_800BEBA8; // 800BEB9C
L_800BEBA0:;
  c->r[0]=cntlz(c->r[29]); // 800BEBA0
  c->r[3]=addc(c,~c->r[0],0x0000001Fu,1); // 800BEBA4
L_800BEBA8:;
  c->r[0]=0u+0x43300000u; // 800BEBA8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800BEBAC
  {uint32_t ea=c->r[2]+0xFFFF9100u; c->f[2]=RF64(ea);} // 800BEBB0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800BEBB4
  {uint32_t ea=c->r[2]+0xFFFF90F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEBB8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800BEBBC
  c->r[0]=R32(c->r[31]+0x00000004u); // 800BEBC0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800BEBC4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800BEBC8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BEBCC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800BEBD0
  c->r[3]=R32(c->r[1]+0x00000014u); // 800BEBD4
  c->r[0]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 800BEBD8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800BEBDC
  goto L_800BEBF0; // 800BEBE0
L_800BEBE4:;
  c->r[0]=0u+0x00000004u; // 800BEBE4
  c->r[4]=(rotl(c->r[0],5)&0x000000E0u)|(c->r[4]&~0x000000E0u); // 800BEBE8
  W32(c->r[31]+0x00000000u,c->r[4]); // 800BEBEC
L_800BEBF0:;
  c->r[0]=c->r[28]+0xFFFFFFFFu; // 800BEBF0
  c->r[3]=R32(c->r[31]+0x00000008u); // 800BEBF4
  c->r[3]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[3]&~0x000003FFu); // 800BEBF8
  c->r[4]=rotl(c->r[30],0)&0x0000000Fu; // 800BEBFC
  c->r[0]=c->r[29]+0xFFFFFFFFu; // 800BEC00
  W32(c->r[31]+0x00000014u,c->r[30]); // 800BEC04
  c->r[3]=(rotl(c->r[0],10)&0x000FFC00u)|(c->r[3]&~0x000FFC00u); // 800BEC08
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800BEC0C
  c->r[0]=(rotl(c->r[27],27)&0x00FFFFFFu)|(c->r[0]&~0x00FFFFFFu); // 800BEC10
  cmpu(c,0,c->r[4],0x0000000Eu); // 800BEC14
  c->r[3]=(rotl(c->r[30],20)&0x00F00000u)|(c->r[3]&~0x00F00000u); // 800BEC18
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800BEC1C
  W32(c->r[31]+0x00000008u,c->r[3]); // 800BEC20
  if (crb(c,1)) { goto L_800BECA4; } // 800BEC24
  c->r[3]=0u+0x80220000u; // 800BEC28
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BEC2C
  c->r[3]=c->r[3]+0xFFFFB748u; // 800BEC30
  c->r[3]=R32(c->r[3]+c->r[0]); // 800BEC34
  c->ctr=c->r[3]; // 800BEC38
  if (true) { switch (c->ctr) { case 0x800BEC40u: goto L_800BEC40; case 0x800BEC54u: goto L_800BEC54; case 0x800BEC68u: goto L_800BEC68; case 0x800BEC7Cu: goto L_800BEC7C; case 0x800BEC90u: goto L_800BEC90; case 0x800BECA4u: goto L_800BECA4; default: break; } dispatch(c,c->ctr); return; } // 800BEC3C
L_800BEC40:;
  c->r[0]=0u+0x00000001u; // 800BEC40
  c->r[6]=0u+0x00000003u; // 800BEC44
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800BEC48
  c->r[7]=0u+0x00000003u; // 800BEC4C
  goto L_800BECB4; // 800BEC50
L_800BEC54:;
  c->r[0]=0u+0x00000002u; // 800BEC54
  c->r[6]=0u+0x00000003u; // 800BEC58
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800BEC5C
  c->r[7]=0u+0x00000002u; // 800BEC60
  goto L_800BECB4; // 800BEC64
L_800BEC68:;
  c->r[0]=0u+0x00000002u; // 800BEC68
  c->r[6]=0u+0x00000002u; // 800BEC6C
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800BEC70
  c->r[7]=0u+0x00000002u; // 800BEC74
  goto L_800BECB4; // 800BEC78
L_800BEC7C:;
  c->r[0]=0u+0x00000003u; // 800BEC7C
  c->r[6]=0u+0x00000002u; // 800BEC80
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800BEC84
  c->r[7]=0u+0x00000002u; // 800BEC88
  goto L_800BECB4; // 800BEC8C
L_800BEC90:;
  c->r[0]=0u+0x00000000u; // 800BEC90
  c->r[6]=0u+0x00000003u; // 800BEC94
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800BEC98
  c->r[7]=0u+0x00000003u; // 800BEC9C
  goto L_800BECB4; // 800BECA0
L_800BECA4:;
  c->r[0]=0u+0x00000002u; // 800BECA4
  c->r[6]=0u+0x00000002u; // 800BECA8
  W8(c->r[31]+0x0000001Eu,c->r[0]); // 800BECAC
  c->r[7]=0u+0x00000002u; // 800BECB0
L_800BECB4:;
  c->r[5]=0u+0x00000001u; // 800BECB4
  c->r[0]=R8(c->r[31]+0x0000001Fu); // 800BECB8
  c->r[3]=((c->r[6])&0x20)?0u:(c->r[5]<<((c->r[6])&31)); // 800BECBC
  c->r[11]=c->r[1]+0x00000040u; // 800BECC0
  c->r[4]=c->r[28]+c->r[3]; // 800BECC4
  c->r[0]=c->r[0]|0x00000002u; // 800BECC8
  c->r[3]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 800BECCC
  W8(c->r[31]+0x0000001Fu,c->r[0]); // 800BECD0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800BECD4
  c->r[3]=c->r[29]+c->r[3]; // 800BECD8
  c->r[4]=sraw(c,c->r[4],(c->r[6])&63); // 800BECDC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800BECE0
  c->r[0]=sraw(c,c->r[0],(c->r[7])&63); // 800BECE4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800BECE8
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 800BECEC
  W16(c->r[31]+0x0000001Cu,c->r[0]); // 800BECF0
  c->lr=0x800BECF8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BECF4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800BECF8
  c->lr=c->r[0]; // 800BECFC
  c->r[1]=c->r[1]+0x00000040u; // 800BED00
  return; // 800BED04
}

// GXInitTexObjCI
void f_800BED08(Ctx* __restrict c) {
  trace_call(0x800BED08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BED08
  c->r[0]=c->lr; // 800BED0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BED10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BED14
  c->r[31]=R32(c->r[1]+0x00000018u); // 800BED18
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BED1C
  c->r[30]=c->r[3]|c->r[3]; // 800BED20
  c->lr=0x800BED28u; f_800BEAFC(c); // 800BED24
  c->r[0]=R8(c->r[30]+0x0000001Fu); // 800BED28
  W32(c->r[30]+0x00000018u,c->r[31]); // 800BED2C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800BED30
  W8(c->r[30]+0x0000001Fu,c->r[0]); // 800BED34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BED38
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BED3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BED40
  c->lr=c->r[0]; // 800BED44
  c->r[1]=c->r[1]+0x00000010u; // 800BED48
  return; // 800BED4C
}

// GXInitTexObjLOD
void f_800BED50(Ctx* __restrict c) {
  trace_call(0x800BED50u);
  {uint32_t ea=c->r[2]+0xFFFF9108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BED50
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BED54
  fcmp(c,0,c->f[3],c->f[0]); // 800BED58
  if (!crb(c,0)) { goto L_800BED68; } // 800BED5C
  c->f[3]=c->f[0]; // 800BED60
  goto L_800BED7C; // 800BED64
L_800BED68:;
  {uint32_t ea=c->r[2]+0xFFFF9110u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BED68
  fcmp(c,0,c->f[3],c->f[0]); // 800BED6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800BED70
  if (!crb(c,2)) { goto L_800BED7C; } // 800BED74
  {uint32_t ea=c->r[2]+0xFFFF910Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800BED78
L_800BED7C:;
  {uint32_t ea=c->r[2]+0xFFFF9114u; c->f[4]=c->ps1[4]=RF32(ea);} // 800BED7C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800BED80
  c->r[9]=cntlz(c->r[0]); // 800BED84
  {uint32_t ea=c->r[2]+0xFFFF9118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BED88
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800BED8C
  c->r[0]=cntlz(c->r[7]); // 800BED90
  c->r[10]=R32(c->r[3]+0x00000000u); // 800BED94
  c->r[5]=c->r[13]+0xFFFF89C8u; // 800BED98
  fcmp(c,0,c->f[1],c->f[0]); // 800BED9C
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800BEDA0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[3]);} // 800BEDA4
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 800BEDA8
  c->r[10]=(rotl(c->r[7],9)&0x0001FE00u)|(c->r[10]&~0x0001FE00u); // 800BEDAC
  c->r[10]=(rotl(c->r[9],31)&0x00000010u)|(c->r[10]&~0x00000010u); // 800BEDB0
  W32(c->r[3]+0x00000000u,c->r[10]); // 800BEDB4
  c->r[4]=R8(c->r[5]+c->r[4]); // 800BEDB8
  c->r[10]=(rotl(c->r[4],5)&0x000000E0u)|(c->r[10]&~0x000000E0u); // 800BEDBC
  c->r[10]=(rotl(c->r[0],3)&0x00000100u)|(c->r[10]&~0x00000100u); // 800BEDC0
  c->r[0]=rotl(c->r[10],0)&0xFFF9FFFFu; // 800BEDC4
  c->r[0]=(rotl(c->r[8],19)&0x00180000u)|(c->r[0]&~0x00180000u); // 800BEDC8
  c->r[0]=(rotl(c->r[6],21)&0x00200000u)|(c->r[0]&~0x00200000u); // 800BEDCC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BEDD0
  if (!crb(c,0)) { goto L_800BEDE0; } // 800BEDD4
  c->f[1]=c->f[0]; // 800BEDD8
  goto L_800BEDF0; // 800BEDDC
L_800BEDE0:;
  {uint32_t ea=c->r[2]+0xFFFF911Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEDE0
  fcmp(c,0,c->f[1],c->f[0]); // 800BEDE4
  if (!crb(c,1)) { goto L_800BEDF0; } // 800BEDE8
  c->f[1]=c->f[0]; // 800BEDEC
L_800BEDF0:;
  {uint32_t ea=c->r[2]+0xFFFF90F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BEDF0
  {uint32_t ea=c->r[2]+0xFFFF9118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEDF4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 800BEDF8
  fcmp(c,0,c->f[2],c->f[0]); // 800BEDFC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800BEE00
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800BEE04
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800BEE08
  if (!crb(c,0)) { goto L_800BEE18; } // 800BEE0C
  c->f[2]=c->f[0]; // 800BEE10
  goto L_800BEE28; // 800BEE14
L_800BEE18:;
  {uint32_t ea=c->r[2]+0xFFFF911Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEE18
  fcmp(c,0,c->f[2],c->f[0]); // 800BEE1C
  if (!crb(c,1)) { goto L_800BEE28; } // 800BEE20
  c->f[2]=c->f[0]; // 800BEE24
L_800BEE28:;
  {uint32_t ea=c->r[2]+0xFFFF90F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BEE28
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BEE2C
  c->r[0]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 800BEE30
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800BEE34
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BEE38
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800BEE3C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800BEE40
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 800BEE44
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BEE48
  c->r[1]=c->r[1]+0x00000010u; // 800BEE4C
  return; // 800BEE50
}

// GXInitTexObjWrapMode
void f_800BEE54(Ctx* __restrict c) {
  trace_call(0x800BEE54u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BEE54
  c->r[0]=(rotl(c->r[4],0)&0x00000003u)|(c->r[0]&~0x00000003u); // 800BEE58
  c->r[0]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[0]&~0x0000000Cu); // 800BEE5C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BEE60
  return; // 800BEE64
}

// fn_800BEE68
void f_800BEE68(Ctx* __restrict c) {
  W32(c->r[3]+0x00000018u,c->r[4]); // 800BEE68
  return; // 800BEE6C
}

// fn_800BEE70
void f_800BEE70(Ctx* __restrict c) {
  W32(c->r[3]+0x00000010u,c->r[4]); // 800BEE70
  return; // 800BEE74
}

// fn_800BEE78
void f_800BEE78(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 800BEE78
  return; // 800BEE7C
}

// fn_800BEE80
void f_800BEE80(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BEE80
  c->r[3]=rotl(c->r[0],0)&0x000003FFu; // 800BEE84
  c->r[0]=c->r[3]+0x00000001u; // 800BEE88
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800BEE8C
  return; // 800BEE90
}

// fn_800BEE94
void f_800BEE94(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000008u); // 800BEE94
  c->r[3]=rotl(c->r[0],22)&0x000003FFu; // 800BEE98
  c->r[0]=c->r[3]+0x00000001u; // 800BEE9C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800BEEA0
  return; // 800BEEA4
}

// fn_800BEEA8
void f_800BEEA8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000014u); // 800BEEA8
  return; // 800BEEAC
}

// fn_800BEEB0
void f_800BEEB0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BEEB0
  c->r[3]=rotl(c->r[0],0)&0x00000003u; // 800BEEB4
  return; // 800BEEB8
}

// fn_800BEEBC
void f_800BEEBC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800BEEBC
  c->r[3]=rotl(c->r[0],30)&0x00000003u; // 800BEEC0
  return; // 800BEEC4
}

// fn_800BEEC8
void f_800BEEC8(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 800BEEC8
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800BEECC
  return; // 800BEED0
}

// fn_800BEED4
void f_800BEED4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BEED4
  c->r[0]=c->lr; // 800BEED8
  c->r[11]=c->r[13]+0xFFFF8990u; // 800BEEDC
  c->r[10]=c->r[13]+0xFFFF8998u; // 800BEEE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800BEEE4
  c->r[9]=c->r[13]+0xFFFF89A0u; // 800BEEE8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800BEEEC
  c->r[8]=c->r[13]+0xFFFF89A8u; // 800BEEF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800BEEF4
  c->r[7]=c->r[13]+0xFFFF89B0u; // 800BEEF8
  c->r[6]=c->r[13]+0xFFFF89B8u; // 800BEEFC
  c->r[31]=c->r[5]|c->r[5]; // 800BEF00
  W32(c->r[1]+0x00000018u,c->r[30]); // 800BEF04
  c->r[30]=c->r[3]|c->r[3]; // 800BEF08
  W32(c->r[1]+0x00000014u,c->r[29]); // 800BEF0C
  c->r[29]=0u+0xCC010000u; // 800BEF10
  W32(c->r[1]+0x00000010u,c->r[28]); // 800BEF14
  c->r[28]=0u+0x00000061u; // 800BEF18
  c->r[0]=R8(c->r[11]+c->r[5]); // 800BEF1C
  c->r[11]=R32(c->r[3]+0x00000004u); // 800BEF20
  c->r[12]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 800BEF24
  c->r[0]=R8(c->r[10]+c->r[5]); // 800BEF28
  c->r[10]=R8(c->r[9]+c->r[5]); // 800BEF2C
  c->r[11]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 800BEF30
  c->r[0]=R8(c->r[7]+c->r[5]); // 800BEF34
  c->r[8]=R8(c->r[8]+c->r[5]); // 800BEF38
  c->r[5]=R8(c->r[6]+c->r[5]); // 800BEF3C
  c->r[9]=R32(c->r[3]+0x00000008u); // 800BEF40
  c->r[9]=(rotl(c->r[10],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 800BEF44
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800BEF48
  c->r[7]=R32(c->r[4]+0x00000000u); // 800BEF4C
  c->r[7]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800BEF50
  W32(c->r[29]+0xFFFF8000u,c->r[12]); // 800BEF54
  c->r[6]=R32(c->r[4]+0x00000004u); // 800BEF58
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800BEF5C
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800BEF60
  c->r[0]=R8(c->r[3]+0x0000001Fu); // 800BEF64
  W32(c->r[29]+0xFFFF8000u,c->r[11]); // 800BEF68
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800BEF6C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800BEF70
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800BEF74
  c->r[0]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 800BEF78
  W32(c->r[29]+0xFFFF8000u,c->r[9]); // 800BEF7C
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800BEF80
  W32(c->r[29]+0xFFFF8000u,c->r[7]); // 800BEF84
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800BEF88
  W32(c->r[29]+0xFFFF8000u,c->r[6]); // 800BEF8C
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800BEF90
  W32(c->r[3]+0x00000000u,c->r[12]); // 800BEF94
  W32(c->r[3]+0x00000004u,c->r[11]); // 800BEF98
  W32(c->r[3]+0x00000008u,c->r[9]); // 800BEF9C
  W32(c->r[4]+0x00000000u,c->r[7]); // 800BEFA0
  W32(c->r[4]+0x00000004u,c->r[6]); // 800BEFA4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800BEFA8
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 800BEFAC
  if (!crb(c,2)) { goto L_800BEFE8; } // 800BEFB0
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800BEFB4
  c->r[3]=R32(c->r[3]+0x00000018u); // 800BEFB8
  c->r[12]=R32(c->r[4]+0x0000051Cu); // 800BEFBC
  c->ctr=c->r[12]; // 800BEFC0
  if (true) { c->lr=0x800BEFC8u; dispatch(c,c->ctr); } // 800BEFC4
  c->r[4]=c->r[13]+0xFFFF89C0u; // 800BEFC8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BEFCC
  c->r[4]=R8(c->r[4]+c->r[31]); // 800BEFD0
  c->r[0]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 800BEFD4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800BEFD8
  W8(c->r[29]+0xFFFF8000u,c->r[28]); // 800BEFDC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800BEFE0
  W32(c->r[29]+0xFFFF8000u,c->r[0]); // 800BEFE4
L_800BEFE8:;
  c->r[6]=R32(c->r[2]+0xFFFF90C0u); // 800BEFE8
  c->r[3]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800BEFEC
  c->r[5]=R32(c->r[30]+0x00000008u); // 800BEFF0
  c->r[0]=0u+0x00000000u; // 800BEFF4
  c->r[4]=c->r[6]+c->r[3]; // 800BEFF8
  c->r[3]=R32(c->r[30]+0x00000000u); // 800BEFFC
  W32(c->r[4]+0x00000564u,c->r[5]); // 800BF000
  W32(c->r[4]+0x00000584u,c->r[3]); // 800BF004
  c->r[3]=R32(c->r[6]+0x000005FCu); // 800BF008
  c->r[3]=c->r[3]|0x00000001u; // 800BF00C
  W32(c->r[6]+0x000005FCu,c->r[3]); // 800BF010
  W16(c->r[6]+0x00000002u,c->r[0]); // 800BF014
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BF018
  c->r[30]=R32(c->r[1]+0x00000018u); // 800BF01C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800BF020
  c->r[28]=R32(c->r[1]+0x00000010u); // 800BF024
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BF028
  c->lr=c->r[0]; // 800BF02C
  c->r[1]=c->r[1]+0x00000020u; // 800BF030
  return; // 800BF034
}

// fn_800BF038
void f_800BF038(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF038
  c->r[0]=c->lr; // 800BF03C
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BF040
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF044
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF048
  c->r[31]=c->r[4]|c->r[4]; // 800BF04C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BF050
  c->r[30]=c->r[3]|c->r[3]; // 800BF054
  c->r[12]=R32(c->r[5]+0x00000518u); // 800BF058
  c->ctr=c->r[12]; // 800BF05C
  if (true) { c->lr=0x800BF064u; dispatch(c,c->ctr); } // 800BF060
  c->r[4]=c->r[3]|c->r[3]; // 800BF064
  c->r[3]=c->r[30]|c->r[30]; // 800BF068
  c->r[5]=c->r[31]|c->r[31]; // 800BF06C
  c->lr=0x800BF074u; f_800BEED4(c); // 800BF070
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF074
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF078
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BF07C
  c->lr=c->r[0]; // 800BF080
  c->r[1]=c->r[1]+0x00000010u; // 800BF084
  return; // 800BF088
}

// fn_800BF08C
void f_800BF08C(Ctx* __restrict c) {
  c->r[7]=R32(c->r[3]+0x00000004u); // 800BF08C
  c->r[0]=0u+0x00000064u; // 800BF090
  c->r[7]=(rotl(c->r[4],27)&0x00FFFFFFu)|(c->r[7]&~0x00FFFFFFu); // 800BF094
  c->r[4]=0u+0x00000000u; // 800BF098
  c->r[4]=(rotl(c->r[5],10)&0x00000C00u)|(c->r[4]&~0x00000C00u); // 800BF09C
  W16(c->r[3]+0x00000008u,c->r[6]); // 800BF0A0
  c->r[7]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800BF0A4
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BF0A8
  W32(c->r[3]+0x00000004u,c->r[7]); // 800BF0AC
  return; // 800BF0B0
}

// fn_800BF0B4
void f_800BF0B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF0B4
  c->r[0]=c->lr; // 800BF0B8
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BF0BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF0C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF0C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BF0C8
  c->r[30]=c->r[3]|c->r[3]; // 800BF0CC
  c->r[3]=c->r[4]|c->r[4]; // 800BF0D0
  c->r[12]=R32(c->r[5]+0x0000051Cu); // 800BF0D4
  c->ctr=c->r[12]; // 800BF0D8
  if (true) { c->lr=0x800BF0E0u; dispatch(c,c->ctr); } // 800BF0DC
  c->r[31]=c->r[3]|c->r[3]; // 800BF0E0
  c->lr=0x800BF0E8u; f_800BFC00(c); // 800BF0E4
  c->r[3]=0u+0xCC010000u; // 800BF0E8
  c->r[4]=0u+0x00000061u; // 800BF0EC
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF0F0
  c->r[0]=R32(c->r[30]+0x00000004u); // 800BF0F4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF0F8
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF0FC
  c->r[0]=R32(c->r[31]+0x00000000u); // 800BF100
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF104
  c->lr=0x800BF10Cu; f_800BFC00(c); // 800BF108
  c->r[0]=R32(c->r[31]+0x00000000u); // 800BF10C
  c->r[4]=R32(c->r[30]+0x00000000u); // 800BF110
  c->r[4]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[4]&~0x000003FFu); // 800BF114
  c->r[3]=R32(c->r[30]+0x00000004u); // 800BF118
  W32(c->r[31]+0x00000004u,c->r[4]); // 800BF11C
  c->r[0]=R32(c->r[30]+0x00000008u); // 800BF120
  W32(c->r[31]+0x00000008u,c->r[3]); // 800BF124
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800BF128
  W32(c->r[30]+0x00000000u,c->r[4]); // 800BF12C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF130
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BF134
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF138
  c->lr=c->r[0]; // 800BF13C
  c->r[1]=c->r[1]+0x00000010u; // 800BF140
  return; // 800BF144
}

// GXInitTexCacheRegion
void f_800BF148(Ctx* __restrict c) {
  trace_call(0x800BF148u);
  cmps(c,0,(int32_t)c->r[6],1); // 800BF148
  if (crb(c,2)) { goto L_800BF174; } // 800BF14C
  if (!crb(c,0)) { goto L_800BF160; } // 800BF150
  cmps(c,0,(int32_t)c->r[6],0); // 800BF154
  if (!crb(c,0)) { goto L_800BF16C; } // 800BF158
  goto L_800BF180; // 800BF15C
L_800BF160:;
  cmps(c,0,(int32_t)c->r[6],3); // 800BF160
  if (!crb(c,0)) { goto L_800BF180; } // 800BF164
  goto L_800BF17C; // 800BF168
L_800BF16C:;
  c->r[6]=0u+0x00000003u; // 800BF16C
  goto L_800BF180; // 800BF170
L_800BF174:;
  c->r[6]=0u+0x00000004u; // 800BF174
  goto L_800BF180; // 800BF178
L_800BF17C:;
  c->r[6]=0u+0x00000005u; // 800BF17C
L_800BF180:;
  c->r[0]=0u+0x00000000u; // 800BF180
  cmps(c,0,(int32_t)c->r[8],2); // 800BF184
  c->r[0]=(rotl(c->r[5],27)&0x00007FFFu)|(c->r[0]&~0x00007FFFu); // 800BF188
  c->r[0]=(rotl(c->r[6],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 800BF18C
  c->r[0]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 800BF190
  W32(c->r[3]+0x00000000u,c->r[0]); // 800BF194
  if (crb(c,2)) { goto L_800BF1CC; } // 800BF198
  if (!crb(c,0)) { goto L_800BF1B0; } // 800BF19C
  cmps(c,0,(int32_t)c->r[8],0); // 800BF1A0
  if (crb(c,2)) { goto L_800BF1BC; } // 800BF1A4
  if (!crb(c,0)) { goto L_800BF1C4; } // 800BF1A8
  goto L_800BF1D8; // 800BF1AC
L_800BF1B0:;
  cmps(c,0,(int32_t)c->r[8],4); // 800BF1B0
  if (!crb(c,0)) { goto L_800BF1D8; } // 800BF1B4
  goto L_800BF1D4; // 800BF1B8
L_800BF1BC:;
  c->r[6]=0u+0x00000003u; // 800BF1BC
  goto L_800BF1D8; // 800BF1C0
L_800BF1C4:;
  c->r[6]=0u+0x00000004u; // 800BF1C4
  goto L_800BF1D8; // 800BF1C8
L_800BF1CC:;
  c->r[6]=0u+0x00000005u; // 800BF1CC
  goto L_800BF1D8; // 800BF1D0
L_800BF1D4:;
  c->r[6]=0u+0x00000000u; // 800BF1D4
L_800BF1D8:;
  c->r[5]=0u+0x00000000u; // 800BF1D8
  c->r[0]=0u+0x00000001u; // 800BF1DC
  c->r[5]=(rotl(c->r[7],27)&0x00007FFFu)|(c->r[5]&~0x00007FFFu); // 800BF1E0
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 800BF1E4
  c->r[5]=(rotl(c->r[6],15)&0x00038000u)|(c->r[5]&~0x00038000u); // 800BF1E8
  c->r[5]=(rotl(c->r[6],18)&0x001C0000u)|(c->r[5]&~0x001C0000u); // 800BF1EC
  W8(c->r[3]+0x0000000Du,c->r[0]); // 800BF1F0
  W32(c->r[3]+0x00000004u,c->r[5]); // 800BF1F4
  return; // 800BF1F8
}

// GXInitTlutRegion
void f_800BF1FC(Ctx* __restrict c) {
  trace_call(0x800BF1FCu);
  c->r[0]=c->r[4]+0xFFF80000u; // 800BF1FC
  c->r[4]=0u+0x00000000u; // 800BF200
  c->r[4]=(rotl(c->r[0],23)&0x000003FFu)|(c->r[4]&~0x000003FFu); // 800BF204
  c->r[0]=0u+0x00000065u; // 800BF208
  c->r[4]=(rotl(c->r[5],10)&0x001FFC00u)|(c->r[4]&~0x001FFC00u); // 800BF20C
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800BF210
  W32(c->r[3]+0x00000000u,c->r[4]); // 800BF214
  return; // 800BF218
}

// fn_800BF21C
void f_800BF21C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF21C
  c->r[0]=c->lr; // 800BF220
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BF224
  c->lr=0x800BF22Cu; f_800BFC00(c); // 800BF228
  c->r[4]=0u+0xCC010000u; // 800BF22C
  c->r[5]=0u+0x00000061u; // 800BF230
  c->r[3]=0u+0x66000000u; // 800BF234
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BF238
  c->r[0]=c->r[3]+0x00001000u; // 800BF23C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800BF240
  c->r[0]=c->r[3]+0x00001100u; // 800BF244
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BF248
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800BF24C
  c->lr=0x800BF254u; f_800BFC00(c); // 800BF250
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF254
  c->lr=c->r[0]; // 800BF258
  c->r[1]=c->r[1]+0x00000010u; // 800BF25C
  return; // 800BF260
}

// fn_800BF264
void f_800BF264(Ctx* __restrict c) {
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800BF264
  c->r[0]=c->r[3]|c->r[3]; // 800BF268
  c->r[3]=R32(c->r[4]+0x00000518u); // 800BF26C
  W32(c->r[4]+0x00000518u,c->r[0]); // 800BF270
  return; // 800BF274
}

// fn_800BF278
void f_800BF278(Ctx* __restrict c) {
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800BF278
  c->r[0]=c->r[3]|c->r[3]; // 800BF27C
  c->r[3]=R32(c->r[4]+0x0000051Cu); // 800BF280
  W32(c->r[4]+0x0000051Cu,c->r[0]); // 800BF284
  return; // 800BF288
}

// __SetSURegs
void f_800BF28C(Ctx* __restrict c) {
  trace_call(0x800BF28Cu);
  c->r[11]=R32(c->r[2]+0xFFFF90C0u); // 800BF28C
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BF290
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BF294
  c->r[5]=0u+0xCC010000u; // 800BF298
  c->r[10]=c->r[11]+c->r[0]; // 800BF29C
  c->r[9]=c->r[11]+c->r[6]; // 800BF2A0
  c->r[3]=R32(c->r[10]+0x00000564u); // 800BF2A4
  c->r[4]=0u+0x00000061u; // 800BF2A8
  c->r[8]=R32(c->r[9]+0x00000108u); // 800BF2AC
  c->r[0]=0u+0x00000000u; // 800BF2B0
  c->r[6]=rotl(c->r[3],0)&0x000003FFu; // 800BF2B4
  c->r[3]=rotl(c->r[3],22)&0x000003FFu; // 800BF2B8
  c->r[8]=(rotl(c->r[6],0)&0x0000FFFFu)|(c->r[8]&~0x0000FFFFu); // 800BF2BC
  W32(c->r[9]+0x00000108u,c->r[8]); // 800BF2C0
  c->r[7]=R32(c->r[9]+0x00000128u); // 800BF2C4
  c->r[7]=(rotl(c->r[3],0)&0x0000FFFFu)|(c->r[7]&~0x0000FFFFu); // 800BF2C8
  W32(c->r[9]+0x00000128u,c->r[7]); // 800BF2CC
  c->r[3]=R32(c->r[10]+0x00000584u); // 800BF2D0
  c->r[6]=rotl(c->r[3],0)&0x00000003u; // 800BF2D4
  c->r[3]=rotl(c->r[3],30)&0x00000003u; // 800BF2D8
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800BF2DC
  c->r[6]=cntlz(c->r[6]); // 800BF2E0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800BF2E4
  c->r[8]=(rotl(c->r[6],11)&0x00010000u)|(c->r[8]&~0x00010000u); // 800BF2E8
  c->r[3]=cntlz(c->r[3]); // 800BF2EC
  W32(c->r[9]+0x00000108u,c->r[8]); // 800BF2F0
  c->r[7]=(rotl(c->r[3],11)&0x00010000u)|(c->r[7]&~0x00010000u); // 800BF2F4
  W32(c->r[9]+0x00000128u,c->r[7]); // 800BF2F8
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 800BF2FC
  c->r[3]=R32(c->r[9]+0x00000108u); // 800BF300
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 800BF304
  W8(c->r[5]+0xFFFF8000u,c->r[4]); // 800BF308
  c->r[3]=R32(c->r[9]+0x00000128u); // 800BF30C
  W32(c->r[5]+0xFFFF8000u,c->r[3]); // 800BF310
  W16(c->r[11]+0x00000002u,c->r[0]); // 800BF314
  return; // 800BF318
}

// __GXSetSUTexRegs
void f_800BF31C(Ctx* __restrict c) {
  trace_call(0x800BF31Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF31C
  c->r[0]=c->lr; // 800BF320
  W32(c->r[1]+0x00000034u,c->r[0]); // 800BF324
  c->r[11]=c->r[1]+0x00000030u; // 800BF328
  c->lr=0x800BF330u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800BF32C
  c->r[29]=R32(c->r[2]+0xFFFF90C0u); // 800BF330
  c->r[0]=R32(c->r[29]+0x000005E4u); // 800BF334
  cmpu(c,0,c->r[0],0x000000FFu); // 800BF338
  if (crb(c,2)) { goto L_800BF46C; } // 800BF33C
  c->r[0]=R32(c->r[29]+0x00000254u); // 800BF340
  c->r[28]=0u+0x00000000u; // 800BF344
  c->r[23]=0u+0x00000001u; // 800BF348
  c->r[3]=rotl(c->r[0],22)&0x0000000Fu; // 800BF34C
  c->r[27]=rotl(c->r[0],16)&0x00000007u; // 800BF350
  c->r[26]=c->r[3]+0x00000001u; // 800BF354
  goto L_800BF3E0; // 800BF358
L_800BF35C:;
  cmps(c,0,(int32_t)c->r[28],2); // 800BF35C
  if (crb(c,2)) { goto L_800BF3A4; } // 800BF360
  if (!crb(c,0)) { goto L_800BF378; } // 800BF364
  cmps(c,0,(int32_t)c->r[28],0); // 800BF368
  if (crb(c,2)) { goto L_800BF384; } // 800BF36C
  if (!crb(c,0)) { goto L_800BF394; } // 800BF370
  goto L_800BF3C0; // 800BF374
L_800BF378:;
  cmps(c,0,(int32_t)c->r[28],4); // 800BF378
  if (!crb(c,0)) { goto L_800BF3C0; } // 800BF37C
  goto L_800BF3B4; // 800BF380
L_800BF384:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 800BF384
  c->r[25]=rotl(c->r[0],0)&0x00000007u; // 800BF388
  c->r[24]=rotl(c->r[0],29)&0x00000007u; // 800BF38C
  goto L_800BF3C0; // 800BF390
L_800BF394:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 800BF394
  c->r[25]=rotl(c->r[0],26)&0x00000007u; // 800BF398
  c->r[24]=rotl(c->r[0],23)&0x00000007u; // 800BF39C
  goto L_800BF3C0; // 800BF3A0
L_800BF3A4:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 800BF3A4
  c->r[25]=rotl(c->r[0],20)&0x00000007u; // 800BF3A8
  c->r[24]=rotl(c->r[0],17)&0x00000007u; // 800BF3AC
  goto L_800BF3C0; // 800BF3B0
L_800BF3B4:;
  c->r[0]=R32(c->r[29]+0x00000170u); // 800BF3B4
  c->r[25]=rotl(c->r[0],14)&0x00000007u; // 800BF3B8
  c->r[24]=rotl(c->r[0],11)&0x00000007u; // 800BF3BC
L_800BF3C0:;
  c->r[3]=R32(c->r[29]+0x000005E4u); // 800BF3C0
  c->r[0]=((c->r[24])&0x20)?0u:(c->r[23]<<((c->r[24])&31)); // 800BF3C4
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800BF3C8
  if (!crb(c,2)) { goto L_800BF3DC; } // 800BF3CC
  c->r[3]=c->r[25]|c->r[25]; // 800BF3D0
  c->r[4]=c->r[24]|c->r[24]; // 800BF3D4
  c->lr=0x800BF3DCu; f_800BF28C(c); // 800BF3D8
L_800BF3DC:;
  c->r[28]=c->r[28]+0x00000001u; // 800BF3DC
L_800BF3E0:;
  cmpu(c,0,c->r[28],c->r[27]); // 800BF3E0
  if (crb(c,0)) { IRQCHK(c); goto L_800BF35C; } // 800BF3E4
  c->r[28]=R32(c->r[2]+0xFFFF90C0u); // 800BF3E8
  c->r[27]=0u+0x00000000u; // 800BF3EC
  c->r[23]=0u+0x00000001u; // 800BF3F0
  c->r[31]=c->r[28]|c->r[28]; // 800BF3F4
  c->r[30]=c->r[28]+0x00000150u; // 800BF3F8
  goto L_800BF464; // 800BF3FC
L_800BF400:;
  c->r[0]=rotl(c->r[27],0)&0x00000001u; cr0(c,c->r[0]); // 800BF400
  c->r[0]=R32(c->r[31]+0x000005A4u); // 800BF404
  c->r[3]=rotl(c->r[27],1)&0xFFFFFFFCu; // 800BF408
  c->r[25]=rotl(c->r[0],0)&0xFFFFFEFFu; // 800BF40C
  if (crb(c,2)) { goto L_800BF420; } // 800BF410
  c->r[0]=R32(c->r[30]+c->r[3]); // 800BF414
  c->r[24]=rotl(c->r[0],17)&0x00000007u; // 800BF418
  goto L_800BF428; // 800BF41C
L_800BF420:;
  c->r[0]=R32(c->r[30]+c->r[3]); // 800BF420
  c->r[24]=rotl(c->r[0],29)&0x00000007u; // 800BF424
L_800BF428:;
  cmpu(c,0,c->r[25],0x000000FFu); // 800BF428
  if (crb(c,2)) { goto L_800BF45C; } // 800BF42C
  c->r[3]=R32(c->r[29]+0x000005E4u); // 800BF430
  c->r[0]=((c->r[24])&0x20)?0u:(c->r[23]<<((c->r[24])&31)); // 800BF434
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800BF438
  if (!crb(c,2)) { goto L_800BF45C; } // 800BF43C
  c->r[3]=R32(c->r[28]+0x000005E8u); // 800BF440
  c->r[0]=((c->r[27])&0x20)?0u:(c->r[23]<<((c->r[27])&31)); // 800BF444
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800BF448
  if (crb(c,2)) { goto L_800BF45C; } // 800BF44C
  c->r[3]=c->r[25]|c->r[25]; // 800BF450
  c->r[4]=c->r[24]|c->r[24]; // 800BF454
  c->lr=0x800BF45Cu; f_800BF28C(c); // 800BF458
L_800BF45C:;
  c->r[31]=c->r[31]+0x00000004u; // 800BF45C
  c->r[27]=c->r[27]+0x00000001u; // 800BF460
L_800BF464:;
  cmpu(c,0,c->r[27],c->r[26]); // 800BF464
  if (crb(c,0)) { IRQCHK(c); goto L_800BF400; } // 800BF468
L_800BF46C:;
  c->r[11]=c->r[1]+0x00000030u; // 800BF46C
  c->lr=0x800BF474u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800BF470
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BF474
  c->lr=c->r[0]; // 800BF478
  c->r[1]=c->r[1]+0x00000030u; // 800BF47C
  return; // 800BF480
}

// __GXSetTmemConfig
void f_800BF484(Ctx* __restrict c) {
  trace_call(0x800BF484u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF484
  cmps(c,0,(int32_t)c->r[3],1); // 800BF488
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF48C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800BF490
  if (crb(c,2)) { goto L_800BF5B4; } // 800BF494
  if (!crb(c,0)) { goto L_800BF4A0; } // 800BF498
  goto L_800BF6C0; // 800BF49C
L_800BF4A0:;
  cmps(c,0,(int32_t)c->r[3],3); // 800BF4A0
  if (!crb(c,0)) { goto L_800BF6C0; } // 800BF4A4
  c->r[3]=0u+0xCC010000u; // 800BF4A8
  c->r[0]=0u+0x00000061u; // 800BF4AC
  c->r[4]=0u+0x8C0E0000u; // 800BF4B0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF4B4
  c->r[4]=c->r[4]+0xFFFF8000u; // 800BF4B8
  c->r[5]=0u+0x900E0000u; // 800BF4BC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF4C0
  c->r[4]=0u+0x8D0E0000u; // 800BF4C4
  c->r[31]=0u+0x910E0000u; // 800BF4C8
  c->r[30]=0u+0x8E0E0000u; // 800BF4CC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF4D0
  c->r[5]=c->r[5]+0xFFFFC000u; // 800BF4D4
  c->r[12]=0u+0x920E0000u; // 800BF4D8
  c->r[11]=0u+0x8F0E0000u; // 800BF4DC
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800BF4E0
  c->r[10]=0u+0x930E0000u; // 800BF4E4
  c->r[9]=0u+0xAC0E0000u; // 800BF4E8
  c->r[8]=0u+0xB00E0000u; // 800BF4EC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF4F0
  c->r[4]=c->r[4]+0xFFFF8800u; // 800BF4F4
  c->r[7]=0u+0xAD0E0000u; // 800BF4F8
  c->r[6]=0u+0xB10E0000u; // 800BF4FC
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF500
  c->r[5]=0u+0xAE0E0000u; // 800BF504
  c->r[4]=0u+0xB20E0000u; // 800BF508
  c->r[31]=c->r[31]+0xFFFFC800u; // 800BF50C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF510
  c->r[30]=c->r[30]+0xFFFF9000u; // 800BF514
  c->r[12]=c->r[12]+0xFFFFD000u; // 800BF518
  c->r[11]=c->r[11]+0xFFFF9800u; // 800BF51C
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800BF520
  c->r[10]=c->r[10]+0xFFFFD800u; // 800BF524
  c->r[9]=c->r[9]+0xFFFFA000u; // 800BF528
  c->r[8]=c->r[8]+0xFFFFC400u; // 800BF52C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF530
  c->r[7]=c->r[7]+0xFFFFA800u; // 800BF534
  c->r[6]=c->r[6]+0xFFFFCC00u; // 800BF538
  c->r[5]=c->r[5]+0xFFFFB000u; // 800BF53C
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 800BF540
  c->r[4]=c->r[4]+0xFFFFD400u; // 800BF544
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF548
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 800BF54C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF550
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 800BF554
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF558
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 800BF55C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF560
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 800BF564
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF568
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 800BF56C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF570
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 800BF574
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF578
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 800BF57C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF580
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800BF584
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF588
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF58C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF590
  c->r[5]=0u+0xAF0E0000u; // 800BF594
  c->r[4]=0u+0xB30E0000u; // 800BF598
  c->r[5]=c->r[5]+0xFFFFB800u; // 800BF59C
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800BF5A0
  c->r[4]=c->r[4]+0xFFFFDC00u; // 800BF5A4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF5A8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF5AC
  goto L_800BF7C8; // 800BF5B0
L_800BF5B4:;
  c->r[3]=0u+0xCC010000u; // 800BF5B4
  c->r[0]=0u+0x00000061u; // 800BF5B8
  c->r[4]=0u+0x8C0E0000u; // 800BF5BC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF5C0
  c->r[4]=c->r[4]+0xFFFF8000u; // 800BF5C4
  c->r[5]=0u+0x900E0000u; // 800BF5C8
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF5CC
  c->r[4]=0u+0x8D0E0000u; // 800BF5D0
  c->r[31]=0u+0x910E0000u; // 800BF5D4
  c->r[30]=0u+0x8E0E0000u; // 800BF5D8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF5DC
  c->r[5]=c->r[5]+0xFFFFC000u; // 800BF5E0
  c->r[12]=0u+0x920E0000u; // 800BF5E4
  c->r[11]=0u+0x8F0E0000u; // 800BF5E8
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800BF5EC
  c->r[10]=0u+0x930E0000u; // 800BF5F0
  c->r[9]=0u+0xAC0E0000u; // 800BF5F4
  c->r[8]=0u+0xB00E0000u; // 800BF5F8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF5FC
  c->r[4]=c->r[4]+0xFFFF8800u; // 800BF600
  c->r[7]=0u+0xAD0E0000u; // 800BF604
  c->r[6]=0u+0xB10E0000u; // 800BF608
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF60C
  c->r[5]=0u+0xAE0E0000u; // 800BF610
  c->r[4]=0u+0xB20E0000u; // 800BF614
  c->r[31]=c->r[31]+0xFFFFC800u; // 800BF618
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF61C
  c->r[30]=c->r[30]+0xFFFF9000u; // 800BF620
  c->r[12]=c->r[12]+0xFFFFD000u; // 800BF624
  c->r[11]=c->r[11]+0xFFFF9800u; // 800BF628
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800BF62C
  c->r[10]=c->r[10]+0xFFFFD800u; // 800BF630
  c->r[9]=c->r[9]+0xFFFFA000u; // 800BF634
  c->r[8]=c->r[8]+0xFFFFE000u; // 800BF638
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF63C
  c->r[7]=c->r[7]+0xFFFFA800u; // 800BF640
  c->r[6]=c->r[6]+0xFFFFE800u; // 800BF644
  c->r[5]=c->r[5]+0xFFFFB000u; // 800BF648
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 800BF64C
  c->r[4]=c->r[4]+0xFFFFF000u; // 800BF650
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF654
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 800BF658
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF65C
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 800BF660
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF664
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 800BF668
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF66C
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 800BF670
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF674
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 800BF678
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF67C
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 800BF680
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF684
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 800BF688
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF68C
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800BF690
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF694
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF698
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF69C
  c->r[5]=0u+0xAF0E0000u; // 800BF6A0
  c->r[4]=0u+0xB30E0000u; // 800BF6A4
  c->r[5]=c->r[5]+0xFFFFB800u; // 800BF6A8
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800BF6AC
  c->r[4]=c->r[4]+0xFFFFF800u; // 800BF6B0
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF6B4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF6B8
  goto L_800BF7C8; // 800BF6BC
L_800BF6C0:;
  c->r[3]=0u+0xCC010000u; // 800BF6C0
  c->r[0]=0u+0x00000061u; // 800BF6C4
  c->r[4]=0u+0x8C0E0000u; // 800BF6C8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF6CC
  c->r[4]=c->r[4]+0xFFFF8000u; // 800BF6D0
  c->r[5]=0u+0x900E0000u; // 800BF6D4
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF6D8
  c->r[4]=0u+0x8D0E0000u; // 800BF6DC
  c->r[30]=0u+0x910E0000u; // 800BF6E0
  c->r[31]=0u+0x8E0E0000u; // 800BF6E4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF6E8
  c->r[5]=c->r[5]+0xFFFFC000u; // 800BF6EC
  c->r[12]=0u+0x920E0000u; // 800BF6F0
  c->r[11]=0u+0x8F0E0000u; // 800BF6F4
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800BF6F8
  c->r[10]=0u+0x930E0000u; // 800BF6FC
  c->r[9]=0u+0xAC0E0000u; // 800BF700
  c->r[8]=0u+0xB00E0000u; // 800BF704
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF708
  c->r[4]=c->r[4]+0xFFFF8400u; // 800BF70C
  c->r[7]=0u+0xAD0E0000u; // 800BF710
  c->r[6]=0u+0xB10E0000u; // 800BF714
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF718
  c->r[5]=0u+0xAE0E0000u; // 800BF71C
  c->r[4]=0u+0xB20E0000u; // 800BF720
  c->r[30]=c->r[30]+0xFFFFC400u; // 800BF724
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF728
  c->r[31]=c->r[31]+0xFFFF8800u; // 800BF72C
  c->r[12]=c->r[12]+0xFFFFC800u; // 800BF730
  c->r[11]=c->r[11]+0xFFFF8C00u; // 800BF734
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 800BF738
  c->r[10]=c->r[10]+0xFFFFCC00u; // 800BF73C
  c->r[9]=c->r[9]+0xFFFF9000u; // 800BF740
  c->r[8]=c->r[8]+0xFFFFD000u; // 800BF744
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF748
  c->r[7]=c->r[7]+0xFFFF9400u; // 800BF74C
  c->r[6]=c->r[6]+0xFFFFD400u; // 800BF750
  c->r[5]=c->r[5]+0xFFFF9800u; // 800BF754
  W32(c->r[3]+0xFFFF8000u,c->r[31]); // 800BF758
  c->r[4]=c->r[4]+0xFFFFD800u; // 800BF75C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF760
  W32(c->r[3]+0xFFFF8000u,c->r[12]); // 800BF764
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF768
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 800BF76C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF770
  W32(c->r[3]+0xFFFF8000u,c->r[10]); // 800BF774
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF778
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 800BF77C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF780
  W32(c->r[3]+0xFFFF8000u,c->r[8]); // 800BF784
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF788
  W32(c->r[3]+0xFFFF8000u,c->r[7]); // 800BF78C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF790
  W32(c->r[3]+0xFFFF8000u,c->r[6]); // 800BF794
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF798
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800BF79C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF7A0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF7A4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF7A8
  c->r[5]=0u+0xAF0E0000u; // 800BF7AC
  c->r[4]=0u+0xB30E0000u; // 800BF7B0
  c->r[5]=c->r[5]+0xFFFF9C00u; // 800BF7B4
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 800BF7B8
  c->r[4]=c->r[4]+0xFFFFDC00u; // 800BF7BC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF7C0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 800BF7C4
L_800BF7C8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF7C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800BF7CC
  c->r[1]=c->r[1]+0x00000010u; // 800BF7D0
  return; // 800BF7D4
}

// GXSetTevIndirect
void f_800BF7D8(Ctx* __restrict c) {
  trace_call(0x800BF7D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF7D8
  c->r[12]=0u+0x00000000u; // 800BF7DC
  c->r[12]=(rotl(c->r[4],0)&0x00000003u)|(c->r[12]&~0x00000003u); // 800BF7E0
  c->r[4]=c->r[3]+0x00000010u; // 800BF7E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BF7E8
  c->r[12]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[12]&~0x0000000Cu); // 800BF7EC
  c->r[11]=0u+0xCC010000u; // 800BF7F0
  c->r[0]=0u+0x00000061u; // 800BF7F4
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 800BF7F8
  c->r[12]=(rotl(c->r[6],4)&0x00000070u)|(c->r[12]&~0x00000070u); // 800BF7FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800BF800
  c->r[0]=0u+0x00000000u; // 800BF804
  c->r[5]=R8(c->r[1]+0x0000001Bu); // 800BF808
  c->r[12]=(rotl(c->r[31],7)&0x00000180u)|(c->r[12]&~0x00000180u); // 800BF80C
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BF810
  c->r[12]=(rotl(c->r[7],9)&0x00001E00u)|(c->r[12]&~0x00001E00u); // 800BF814
  c->r[12]=(rotl(c->r[8],13)&0x0000E000u)|(c->r[12]&~0x0000E000u); // 800BF818
  c->r[12]=(rotl(c->r[9],16)&0x00070000u)|(c->r[12]&~0x00070000u); // 800BF81C
  c->r[12]=(rotl(c->r[5],19)&0x00080000u)|(c->r[12]&~0x00080000u); // 800BF820
  c->r[12]=(rotl(c->r[10],20)&0x00100000u)|(c->r[12]&~0x00100000u); // 800BF824
  c->r[12]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[12]&~0xFF000000u); // 800BF828
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 800BF82C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BF830
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800BF834
  c->r[1]=c->r[1]+0x00000010u; // 800BF838
  return; // 800BF83C
}

// GXSetIndTexMtx
void f_800BF840(Ctx* __restrict c) {
  trace_call(0x800BF840u);
  cmps(c,0,(int32_t)c->r[3],8); // 800BF840
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BF844
  if (crb(c,2)) { goto L_800BF88C; } // 800BF848
  if (!crb(c,0)) { goto L_800BF868; } // 800BF84C
  cmps(c,0,(int32_t)c->r[3],4); // 800BF850
  if (crb(c,2)) { goto L_800BF88C; } // 800BF854
  if (!crb(c,0)) { goto L_800BF87C; } // 800BF858
  cmps(c,0,(int32_t)c->r[3],1); // 800BF85C
  if (!crb(c,0)) { goto L_800BF874; } // 800BF860
  goto L_800BF88C; // 800BF864
L_800BF868:;
  cmps(c,0,(int32_t)c->r[3],12); // 800BF868
  if (!crb(c,0)) { goto L_800BF88C; } // 800BF86C
  goto L_800BF884; // 800BF870
L_800BF874:;
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800BF874
  goto L_800BF890; // 800BF878
L_800BF87C:;
  c->r[3]=c->r[3]+0xFFFFFFFBu; // 800BF87C
  goto L_800BF890; // 800BF880
L_800BF884:;
  c->r[3]=c->r[3]+0xFFFFFFF7u; // 800BF884
  goto L_800BF890; // 800BF888
L_800BF88C:;
  c->r[3]=0u+0x00000000u; // 800BF88C
L_800BF890:;
  {uint32_t ea=c->r[2]+0xFFFF9120u; c->f[6]=c->ps1[6]=RF32(ea);} // 800BF890
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BF894
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF898
  c->r[9]=c->r[0]-c->r[3]; // 800BF89C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF8A0
  c->r[8]=c->r[5]+0x00000011u; // 800BF8A4
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 800BF8A8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800BF8AC
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 800BF8B0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800BF8B4
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[3]); // 800BF8B8
  c->r[6]=0u+0xCC010000u; // 800BF8BC
  c->f[5]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800BF8C0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800BF8C4
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BF8C8
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800BF8CC
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 800BF8D0
  c->r[7]=0u+0x00000061u; // 800BF8D4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[5]);} // 800BF8D8
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800BF8DC
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[1]); // 800BF8E0
  c->r[5]=0u+0x00000000u; // 800BF8E4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800BF8E8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800BF8EC
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 800BF8F0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800BF8F4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[4]);} // 800BF8F8
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 800BF8FC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800BF900
  c->r[3]=c->r[9]+0x00000006u; // 800BF904
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BF908
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 800BF90C
  c->r[4]=0u+0x00000000u; // 800BF910
  c->r[5]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[5]&~0x003FF800u); // 800BF914
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800BF918
  c->r[5]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[5]&~0x00C00000u); // 800BF91C
  c->r[5]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 800BF920
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 800BF924
  c->r[4]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[4]&~0x000007FFu); // 800BF928
  c->r[3]=c->r[9]+0x00000007u; // 800BF92C
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 800BF930
  c->r[5]=0u+0x00000000u; // 800BF934
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 800BF938
  c->r[0]=R32(c->r[1]+0x00000024u); // 800BF93C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800BF940
  c->r[4]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[4]&~0x003FF800u); // 800BF944
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800BF948
  c->r[4]=(rotl(c->r[8],20)&0x00C00000u)|(c->r[4]&~0x00C00000u); // 800BF94C
  c->r[4]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800BF950
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 800BF954
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 800BF958
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BF95C
  W32(c->r[6]+0xFFFF8000u,c->r[4]); // 800BF960
  c->r[4]=c->r[9]+0x00000008u; // 800BF964
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800BF968
  c->r[0]=R32(c->r[1]+0x00000034u); // 800BF96C
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 800BF970
  c->r[5]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[5]&~0x003FF800u); // 800BF974
  c->r[0]=0u+0x00000000u; // 800BF978
  c->r[5]=(rotl(c->r[8],18)&0x00C00000u)|(c->r[5]&~0x00C00000u); // 800BF97C
  c->r[5]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 800BF980
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 800BF984
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BF988
  c->r[1]=c->r[1]+0x00000040u; // 800BF98C
  return; // 800BF990
}

// GXSetIndTexCoordScale
void f_800BF994(Ctx* __restrict c) {
  trace_call(0x800BF994u);
  cmps(c,0,(int32_t)c->r[3],2); // 800BF994
  if (crb(c,2)) { goto L_800BFA24; } // 800BF998
  if (!crb(c,0)) { goto L_800BF9B0; } // 800BF99C
  cmps(c,0,(int32_t)c->r[3],0); // 800BF9A0
  if (crb(c,2)) { goto L_800BF9BC; } // 800BF9A4
  if (!crb(c,0)) { goto L_800BF9F0; } // 800BF9A8
  goto L_800BFA88; // 800BF9AC
L_800BF9B0:;
  cmps(c,0,(int32_t)c->r[3],4); // 800BF9B0
  if (!crb(c,0)) { goto L_800BFA88; } // 800BF9B4
  goto L_800BFA58; // 800BF9B8
L_800BF9BC:;
  c->r[8]=R32(c->r[2]+0xFFFF90C0u); // 800BF9BC
  c->r[6]=0u+0x00000025u; // 800BF9C0
  c->r[3]=0u+0xCC010000u; // 800BF9C4
  c->r[0]=0u+0x00000061u; // 800BF9C8
  c->r[7]=R32(c->r[8]+0x00000178u); // 800BF9CC
  c->r[7]=(rotl(c->r[4],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 800BF9D0
  c->r[7]=(rotl(c->r[5],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 800BF9D4
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800BF9D8
  W32(c->r[8]+0x00000178u,c->r[7]); // 800BF9DC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF9E0
  c->r[0]=R32(c->r[8]+0x00000178u); // 800BF9E4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BF9E8
  goto L_800BFA88; // 800BF9EC
L_800BF9F0:;
  c->r[8]=R32(c->r[2]+0xFFFF90C0u); // 800BF9F0
  c->r[6]=0u+0x00000025u; // 800BF9F4
  c->r[3]=0u+0xCC010000u; // 800BF9F8
  c->r[0]=0u+0x00000061u; // 800BF9FC
  c->r[7]=R32(c->r[8]+0x00000178u); // 800BFA00
  c->r[7]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 800BFA04
  c->r[7]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 800BFA08
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800BFA0C
  W32(c->r[8]+0x00000178u,c->r[7]); // 800BFA10
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BFA14
  c->r[0]=R32(c->r[8]+0x00000178u); // 800BFA18
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BFA1C
  goto L_800BFA88; // 800BFA20
L_800BFA24:;
  c->r[8]=R32(c->r[2]+0xFFFF90C0u); // 800BFA24
  c->r[6]=0u+0x00000026u; // 800BFA28
  c->r[3]=0u+0xCC010000u; // 800BFA2C
  c->r[0]=0u+0x00000061u; // 800BFA30
  c->r[7]=R32(c->r[8]+0x0000017Cu); // 800BFA34
  c->r[7]=(rotl(c->r[4],0)&0x0000000Fu)|(c->r[7]&~0x0000000Fu); // 800BFA38
  c->r[7]=(rotl(c->r[5],4)&0x000000F0u)|(c->r[7]&~0x000000F0u); // 800BFA3C
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800BFA40
  W32(c->r[8]+0x0000017Cu,c->r[7]); // 800BFA44
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BFA48
  c->r[0]=R32(c->r[8]+0x0000017Cu); // 800BFA4C
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BFA50
  goto L_800BFA88; // 800BFA54
L_800BFA58:;
  c->r[8]=R32(c->r[2]+0xFFFF90C0u); // 800BFA58
  c->r[6]=0u+0x00000026u; // 800BFA5C
  c->r[3]=0u+0xCC010000u; // 800BFA60
  c->r[0]=0u+0x00000061u; // 800BFA64
  c->r[7]=R32(c->r[8]+0x0000017Cu); // 800BFA68
  c->r[7]=(rotl(c->r[4],8)&0x00000F00u)|(c->r[7]&~0x00000F00u); // 800BFA6C
  c->r[7]=(rotl(c->r[5],12)&0x0000F000u)|(c->r[7]&~0x0000F000u); // 800BFA70
  c->r[7]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800BFA74
  W32(c->r[8]+0x0000017Cu,c->r[7]); // 800BFA78
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BFA7C
  c->r[0]=R32(c->r[8]+0x0000017Cu); // 800BFA80
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800BFA84
L_800BFA88:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BFA88
  c->r[0]=0u+0x00000000u; // 800BFA8C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BFA90
  return; // 800BFA94
}

// GXSetIndTexOrder
void f_800BFA98(Ctx* __restrict c) {
  trace_call(0x800BFA98u);
  cmps(c,0,(int32_t)c->r[5],255); // 800BFA98
  if (!crb(c,2)) { goto L_800BFAA4; } // 800BFA9C
  c->r[5]=0u+0x00000000u; // 800BFAA0
L_800BFAA4:;
  cmps(c,0,(int32_t)c->r[4],255); // 800BFAA4
  if (!crb(c,2)) { goto L_800BFAB0; } // 800BFAA8
  c->r[4]=0u+0x00000000u; // 800BFAAC
L_800BFAB0:;
  cmps(c,0,(int32_t)c->r[3],2); // 800BFAB0
  if (crb(c,2)) { goto L_800BFB08; } // 800BFAB4
  if (!crb(c,0)) { goto L_800BFACC; } // 800BFAB8
  cmps(c,0,(int32_t)c->r[3],0); // 800BFABC
  if (crb(c,2)) { goto L_800BFAD8; } // 800BFAC0
  if (!crb(c,0)) { goto L_800BFAF0; } // 800BFAC4
  goto L_800BFB34; // 800BFAC8
L_800BFACC:;
  cmps(c,0,(int32_t)c->r[3],4); // 800BFACC
  if (!crb(c,0)) { goto L_800BFB34; } // 800BFAD0
  goto L_800BFB20; // 800BFAD4
L_800BFAD8:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BFAD8
  c->r[0]=R32(c->r[3]+0x00000170u); // 800BFADC
  c->r[0]=(rotl(c->r[5],0)&0x00000007u)|(c->r[0]&~0x00000007u); // 800BFAE0
  c->r[0]=(rotl(c->r[4],3)&0x00000038u)|(c->r[0]&~0x00000038u); // 800BFAE4
  W32(c->r[3]+0x00000170u,c->r[0]); // 800BFAE8
  goto L_800BFB34; // 800BFAEC
L_800BFAF0:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BFAF0
  c->r[0]=R32(c->r[3]+0x00000170u); // 800BFAF4
  c->r[0]=(rotl(c->r[5],6)&0x000001C0u)|(c->r[0]&~0x000001C0u); // 800BFAF8
  c->r[0]=(rotl(c->r[4],9)&0x00000E00u)|(c->r[0]&~0x00000E00u); // 800BFAFC
  W32(c->r[3]+0x00000170u,c->r[0]); // 800BFB00
  goto L_800BFB34; // 800BFB04
L_800BFB08:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BFB08
  c->r[0]=R32(c->r[3]+0x00000170u); // 800BFB0C
  c->r[0]=(rotl(c->r[5],12)&0x00007000u)|(c->r[0]&~0x00007000u); // 800BFB10
  c->r[0]=(rotl(c->r[4],15)&0x00038000u)|(c->r[0]&~0x00038000u); // 800BFB14
  W32(c->r[3]+0x00000170u,c->r[0]); // 800BFB18
  goto L_800BFB34; // 800BFB1C
L_800BFB20:;
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BFB20
  c->r[0]=R32(c->r[3]+0x00000170u); // 800BFB24
  c->r[0]=(rotl(c->r[5],18)&0x001C0000u)|(c->r[0]&~0x001C0000u); // 800BFB28
  c->r[0]=(rotl(c->r[4],21)&0x00E00000u)|(c->r[0]&~0x00E00000u); // 800BFB2C
  W32(c->r[3]+0x00000170u,c->r[0]); // 800BFB30
L_800BFB34:;
  c->r[4]=0u+0xCC010000u; // 800BFB34
  c->r[0]=0u+0x00000061u; // 800BFB38
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800BFB3C
  c->r[0]=0u+0x00000000u; // 800BFB40
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BFB44
  c->r[3]=R32(c->r[5]+0x00000170u); // 800BFB48
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800BFB4C
  c->r[3]=R32(c->r[5]+0x000005FCu); // 800BFB50
  c->r[3]=c->r[3]|0x00000003u; // 800BFB54
  W32(c->r[5]+0x000005FCu,c->r[3]); // 800BFB58
  W16(c->r[5]+0x00000002u,c->r[0]); // 800BFB5C
  return; // 800BFB60
}

// GXSetNumIndStages
void f_800BFB64(Ctx* __restrict c) {
  trace_call(0x800BFB64u);
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800BFB64
  c->r[0]=R32(c->r[4]+0x00000254u); // 800BFB68
  c->r[0]=(rotl(c->r[3],16)&0x00070000u)|(c->r[0]&~0x00070000u); // 800BFB6C
  W32(c->r[4]+0x00000254u,c->r[0]); // 800BFB70
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800BFB74
  c->r[0]=c->r[0]|0x00000006u; // 800BFB78
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800BFB7C
  return; // 800BFB80
}

// GXSetTevDirect
void f_800BFB84(Ctx* __restrict c) {
  trace_call(0x800BFB84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFB84
  c->r[0]=c->lr; // 800BFB88
  c->r[4]=0u+0x00000000u; // 800BFB8C
  c->r[5]=0u+0x00000000u; // 800BFB90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800BFB94
  c->r[0]=0u+0x00000000u; // 800BFB98
  c->r[6]=0u+0x00000000u; // 800BFB9C
  c->r[7]=0u+0x00000000u; // 800BFBA0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800BFBA4
  c->r[8]=0u+0x00000000u; // 800BFBA8
  c->r[9]=0u+0x00000000u; // 800BFBAC
  c->r[10]=0u+0x00000000u; // 800BFBB0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800BFBB4
  c->lr=0x800BFBBCu; f_800BF7D8(c); // 800BFBB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800BFBBC
  c->lr=c->r[0]; // 800BFBC0
  c->r[1]=c->r[1]+0x00000010u; // 800BFBC4
  return; // 800BFBC8
}

// fn_800BFBCC
void f_800BFBCC(Ctx* __restrict c) {
  return; // 800BFBCC
}

// __GXSetIndirectMask
void f_800BFBD0(Ctx* __restrict c) {
  trace_call(0x800BFBD0u);
  c->r[7]=R32(c->r[2]+0xFFFF90C0u); // 800BFBD0
  c->r[4]=0u+0xCC010000u; // 800BFBD4
  c->r[5]=0u+0x00000061u; // 800BFBD8
  c->r[0]=0u+0x00000000u; // 800BFBDC
  c->r[6]=R32(c->r[7]+0x00000174u); // 800BFBE0
  c->r[6]=(rotl(c->r[3],0)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 800BFBE4
  W32(c->r[7]+0x00000174u,c->r[6]); // 800BFBE8
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BFBEC
  c->r[3]=R32(c->r[7]+0x00000174u); // 800BFBF0
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800BFBF4
  W16(c->r[7]+0x00000002u,c->r[0]); // 800BFBF8
  return; // 800BFBFC
}

// __GXFlushTextureState
void f_800BFC00(Ctx* __restrict c) {
  trace_call(0x800BFC00u);
  c->r[4]=0u+0xCC010000u; // 800BFC00
  c->r[0]=0u+0x00000061u; // 800BFC04
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800BFC08
  c->r[0]=0u+0x00000000u; // 800BFC0C
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BFC10
  c->r[3]=R32(c->r[5]+0x00000174u); // 800BFC14
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800BFC18
  W16(c->r[5]+0x00000002u,c->r[0]); // 800BFC1C
  return; // 800BFC20
}

// GXSetTevOp
void f_800BFC24(Ctx* __restrict c) {
  trace_call(0x800BFC24u);
  cmps(c,0,(int32_t)c->r[3],0); // 800BFC24
  c->r[5]=0u+0x80220000u; // 800BFC28
  c->r[5]=c->r[5]+0xFFFFB788u; // 800BFC2C
  if (!crb(c,2)) { goto L_800BFC4C; } // 800BFC30
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BFC34
  c->r[4]=c->r[5]+0x00000000u; // 800BFC38
  c->r[0]=c->r[5]+0x00000028u; // 800BFC3C
  c->r[8]=c->r[4]+c->r[6]; // 800BFC40
  c->r[9]=c->r[0]+c->r[6]; // 800BFC44
  goto L_800BFC60; // 800BFC48
L_800BFC4C:;
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800BFC4C
  c->r[4]=c->r[5]+0x00000014u; // 800BFC50
  c->r[0]=c->r[5]+0x0000003Cu; // 800BFC54
  c->r[8]=c->r[4]+c->r[6]; // 800BFC58
  c->r[9]=c->r[0]+c->r[6]; // 800BFC5C
L_800BFC60:;
  c->r[7]=R32(c->r[2]+0xFFFF90C0u); // 800BFC60
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BFC64
  c->r[3]=R32(c->r[8]+0x00000000u); // 800BFC68
  c->r[4]=0u+0xCC010000u; // 800BFC6C
  c->r[6]=c->r[7]+c->r[0]; // 800BFC70
  c->r[5]=0u+0x00000061u; // 800BFC74
  c->r[8]=R32(c->r[6]+0x00000180u); // 800BFC78
  c->r[0]=0u+0x00000000u; // 800BFC7C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BFC80
  c->r[8]=rotl(c->r[8],0)&0xFF000000u; // 800BFC84
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFFFu)|(c->r[8]&~0x00FFFFFFu); // 800BFC88
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 800BFC8C
  W32(c->r[6]+0x00000180u,c->r[8]); // 800BFC90
  c->r[8]=R32(c->r[6]+0x000001C0u); // 800BFC94
  c->r[3]=R32(c->r[9]+0x00000000u); // 800BFC98
  c->r[8]=rotl(c->r[8],0)&0xFF00000Fu; // 800BFC9C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BFCA0
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFF0u)|(c->r[8]&~0x00FFFFF0u); // 800BFCA4
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 800BFCA8
  W32(c->r[6]+0x000001C0u,c->r[8]); // 800BFCAC
  W16(c->r[7]+0x00000002u,c->r[0]); // 800BFCB0
  return; // 800BFCB4
}

// GXSetTevColorIn
void f_800BFCB8(Ctx* __restrict c) {
  trace_call(0x800BFCB8u);
  c->r[11]=R32(c->r[2]+0xFFFF90C0u); // 800BFCB8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BFCBC
  c->r[3]=0u+0xCC010000u; // 800BFCC0
  c->r[8]=0u+0x00000061u; // 800BFCC4
  c->r[10]=c->r[11]+c->r[0]; // 800BFCC8
  c->r[0]=0u+0x00000000u; // 800BFCCC
  c->r[9]=R32(c->r[10]+0x00000180u); // 800BFCD0
  c->r[9]=(rotl(c->r[4],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 800BFCD4
  c->r[9]=(rotl(c->r[5],8)&0x00000F00u)|(c->r[9]&~0x00000F00u); // 800BFCD8
  W8(c->r[3]+0xFFFF8000u,c->r[8]); // 800BFCDC
  c->r[9]=(rotl(c->r[6],4)&0x000000F0u)|(c->r[9]&~0x000000F0u); // 800BFCE0
  c->r[9]=(rotl(c->r[7],0)&0x0000000Fu)|(c->r[9]&~0x0000000Fu); // 800BFCE4
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 800BFCE8
  W32(c->r[10]+0x00000180u,c->r[9]); // 800BFCEC
  W16(c->r[11]+0x00000002u,c->r[0]); // 800BFCF0
  return; // 800BFCF4
}

// GXSetTevAlphaIn
void f_800BFCF8(Ctx* __restrict c) {
  trace_call(0x800BFCF8u);
  c->r[11]=R32(c->r[2]+0xFFFF90C0u); // 800BFCF8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BFCFC
  c->r[3]=0u+0xCC010000u; // 800BFD00
  c->r[8]=0u+0x00000061u; // 800BFD04
  c->r[10]=c->r[11]+c->r[0]; // 800BFD08
  c->r[0]=0u+0x00000000u; // 800BFD0C
  c->r[9]=R32(c->r[10]+0x000001C0u); // 800BFD10
  c->r[9]=(rotl(c->r[4],13)&0x0000E000u)|(c->r[9]&~0x0000E000u); // 800BFD14
  c->r[9]=(rotl(c->r[5],10)&0x00001C00u)|(c->r[9]&~0x00001C00u); // 800BFD18
  W8(c->r[3]+0xFFFF8000u,c->r[8]); // 800BFD1C
  c->r[9]=(rotl(c->r[6],7)&0x00000380u)|(c->r[9]&~0x00000380u); // 800BFD20
  c->r[9]=(rotl(c->r[7],4)&0x00000070u)|(c->r[9]&~0x00000070u); // 800BFD24
  W32(c->r[3]+0xFFFF8000u,c->r[9]); // 800BFD28
  W32(c->r[10]+0x000001C0u,c->r[9]); // 800BFD2C
  W16(c->r[11]+0x00000002u,c->r[0]); // 800BFD30
  return; // 800BFD34
}

// GXSetTevColorOp
void f_800BFD38(Ctx* __restrict c) {
  trace_call(0x800BFD38u);
  c->r[10]=R32(c->r[2]+0xFFFF90C0u); // 800BFD38
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BFD3C
  cmps(c,0,(int32_t)c->r[4],1); // 800BFD40
  c->r[9]=c->r[10]+c->r[0]; // 800BFD44
  c->r[11]=R32(c->r[9]+0x00000180u); // 800BFD48
  c->r[11]=(rotl(c->r[4],18)&0x00040000u)|(c->r[11]&~0x00040000u); // 800BFD4C
  if (crb(c,1)) { goto L_800BFD60; } // 800BFD50
  c->r[11]=(rotl(c->r[6],20)&0x00300000u)|(c->r[11]&~0x00300000u); // 800BFD54
  c->r[11]=(rotl(c->r[5],16)&0x00030000u)|(c->r[11]&~0x00030000u); // 800BFD58
  goto L_800BFD68; // 800BFD5C
L_800BFD60:;
  c->r[11]=(rotl(c->r[4],19)&0x00300000u)|(c->r[11]&~0x00300000u); // 800BFD60
  c->r[11]=c->r[11]|0x00030000u; // 800BFD64
L_800BFD68:;
  c->r[3]=0u+0xCC010000u; // 800BFD68
  c->r[0]=0u+0x00000061u; // 800BFD6C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BFD70
  c->r[11]=(rotl(c->r[7],19)&0x00080000u)|(c->r[11]&~0x00080000u); // 800BFD74
  c->r[11]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[11]&~0x00C00000u); // 800BFD78
  c->r[0]=0u+0x00000000u; // 800BFD7C
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 800BFD80
  W32(c->r[9]+0x00000180u,c->r[11]); // 800BFD84
  W16(c->r[10]+0x00000002u,c->r[0]); // 800BFD88
  return; // 800BFD8C
}

// GXSetTevAlphaOp
void f_800BFD90(Ctx* __restrict c) {
  trace_call(0x800BFD90u);
  c->r[10]=R32(c->r[2]+0xFFFF90C0u); // 800BFD90
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BFD94
  cmps(c,0,(int32_t)c->r[4],1); // 800BFD98
  c->r[9]=c->r[10]+c->r[0]; // 800BFD9C
  c->r[11]=R32(c->r[9]+0x000001C0u); // 800BFDA0
  c->r[11]=(rotl(c->r[4],18)&0x00040000u)|(c->r[11]&~0x00040000u); // 800BFDA4
  if (crb(c,1)) { goto L_800BFDB8; } // 800BFDA8
  c->r[11]=(rotl(c->r[6],20)&0x00300000u)|(c->r[11]&~0x00300000u); // 800BFDAC
  c->r[11]=(rotl(c->r[5],16)&0x00030000u)|(c->r[11]&~0x00030000u); // 800BFDB0
  goto L_800BFDC0; // 800BFDB4
L_800BFDB8:;
  c->r[11]=(rotl(c->r[4],19)&0x00300000u)|(c->r[11]&~0x00300000u); // 800BFDB8
  c->r[11]=c->r[11]|0x00030000u; // 800BFDBC
L_800BFDC0:;
  c->r[3]=0u+0xCC010000u; // 800BFDC0
  c->r[0]=0u+0x00000061u; // 800BFDC4
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800BFDC8
  c->r[11]=(rotl(c->r[7],19)&0x00080000u)|(c->r[11]&~0x00080000u); // 800BFDCC
  c->r[11]=(rotl(c->r[8],22)&0x00C00000u)|(c->r[11]&~0x00C00000u); // 800BFDD0
  c->r[0]=0u+0x00000000u; // 800BFDD4
  W32(c->r[3]+0xFFFF8000u,c->r[11]); // 800BFDD8
  W32(c->r[9]+0x000001C0u,c->r[11]); // 800BFDDC
  W16(c->r[10]+0x00000002u,c->r[0]); // 800BFDE0
  return; // 800BFDE4
}

// GXSetTevColor
void f_800BFDE8(Ctx* __restrict c) {
  trace_call(0x800BFDE8u);
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800BFDE8
  c->r[8]=R32(c->r[4]+0x00000000u); // 800BFDEC
  c->r[0]=c->r[3]+0x000000E0u; // 800BFDF0
  c->r[4]=0u+0xCC010000u; // 800BFDF4
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 800BFDF8
  c->r[5]=0u+0x00000061u; // 800BFDFC
  c->r[7]=(rotl(c->r[8],8)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800BFE00
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BFE04
  c->r[7]=(rotl(c->r[8],12)&0x000FF000u)|(c->r[7]&~0x000FF000u); // 800BFE08
  c->r[0]=c->r[3]+0x000000E1u; // 800BFE0C
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 800BFE10
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800BFE14
  c->r[6]=(rotl(c->r[8],24)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 800BFE18
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BFE1C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BFE20
  c->r[6]=(rotl(c->r[8],28)&0x000FF000u)|(c->r[6]&~0x000FF000u); // 800BFE24
  c->r[0]=0u+0x00000000u; // 800BFE28
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800BFE2C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BFE30
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800BFE34
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BFE38
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800BFE3C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BFE40
  return; // 800BFE44
}

// GXSetTevColorS10
void f_800BFE48(Ctx* __restrict c) {
  trace_call(0x800BFE48u);
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800BFE48
  c->r[8]=R32(c->r[4]+0x00000000u); // 800BFE4C
  c->r[0]=c->r[3]+0x000000E0u; // 800BFE50
  c->r[5]=0u+0xCC010000u; // 800BFE54
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 800BFE58
  c->r[6]=0u+0x00000061u; // 800BFE5C
  c->r[9]=R32(c->r[4]+0x00000004u); // 800BFE60
  c->r[7]=(rotl(c->r[8],16)&0x000007FFu)|(c->r[7]&~0x000007FFu); // 800BFE64
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800BFE68
  c->r[0]=c->r[3]+0x000000E1u; // 800BFE6C
  c->r[7]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[7]&~0x007FF000u); // 800BFE70
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BFE74
  c->r[4]=rotl(c->r[0],24)&0xFF000000u; // 800BFE78
  W32(c->r[5]+0xFFFF8000u,c->r[7]); // 800BFE7C
  c->r[4]=(rotl(c->r[9],16)&0x000007FFu)|(c->r[4]&~0x000007FFu); // 800BFE80
  c->r[0]=0u+0x00000000u; // 800BFE84
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800BFE88
  c->r[4]=(rotl(c->r[8],12)&0x007FF000u)|(c->r[4]&~0x007FF000u); // 800BFE8C
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800BFE90
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800BFE94
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800BFE98
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800BFE9C
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800BFEA0
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BFEA4
  return; // 800BFEA8
}

// GXSetTevKColor
void f_800BFEAC(Ctx* __restrict c) {
  trace_call(0x800BFEACu);
  c->r[6]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800BFEAC
  c->r[9]=R32(c->r[4]+0x00000000u); // 800BFEB0
  c->r[3]=c->r[6]+0x000000E0u; // 800BFEB4
  c->r[4]=0u+0xCC010000u; // 800BFEB8
  c->r[8]=rotl(c->r[3],24)&0xFF000000u; // 800BFEBC
  c->r[5]=0u+0x00000061u; // 800BFEC0
  c->r[8]=(rotl(c->r[9],8)&0x000000FFu)|(c->r[8]&~0x000000FFu); // 800BFEC4
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BFEC8
  c->r[7]=0u+0x00000008u; // 800BFECC
  c->r[0]=c->r[6]+0x000000E1u; // 800BFED0
  c->r[8]=(rotl(c->r[9],12)&0x000FF000u)|(c->r[8]&~0x000FF000u); // 800BFED4
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800BFED8
  c->r[6]=rotl(c->r[0],24)&0xFF000000u; // 800BFEDC
  c->r[0]=0u+0x00000000u; // 800BFEE0
  c->r[8]=(rotl(c->r[7],20)&0x00F00000u)|(c->r[8]&~0x00F00000u); // 800BFEE4
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 800BFEE8
  c->r[6]=(rotl(c->r[9],24)&0x000000FFu)|(c->r[6]&~0x000000FFu); // 800BFEEC
  c->r[6]=(rotl(c->r[9],28)&0x000FF000u)|(c->r[6]&~0x000FF000u); // 800BFEF0
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800BFEF4
  c->r[6]=(rotl(c->r[7],20)&0x00F00000u)|(c->r[6]&~0x00F00000u); // 800BFEF8
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800BFEFC
  W16(c->r[3]+0x00000002u,c->r[0]); // 800BFF00
  return; // 800BFF04
}

// GXSetTevKColorSel
void f_800BFF08(Ctx* __restrict c) {
  trace_call(0x800BFF08u);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800BFF08
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BFF0C
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFCu; // 800BFF10
  c->r[3]=c->r[5]+c->r[0]; // 800BFF14
  if (crb(c,2)) { goto L_800BFF2C; } // 800BFF18
  c->r[0]=R32(c->r[3]+0x00000200u); // 800BFF1C
  c->r[0]=(rotl(c->r[4],14)&0x0007C000u)|(c->r[0]&~0x0007C000u); // 800BFF20
  W32(c->r[3]+0x00000200u,c->r[0]); // 800BFF24
  goto L_800BFF38; // 800BFF28
L_800BFF2C:;
  c->r[0]=R32(c->r[3]+0x00000200u); // 800BFF2C
  c->r[0]=(rotl(c->r[4],4)&0x000001F0u)|(c->r[0]&~0x000001F0u); // 800BFF30
  W32(c->r[3]+0x00000200u,c->r[0]); // 800BFF34
L_800BFF38:;
  c->r[4]=0u+0xCC010000u; // 800BFF38
  c->r[0]=0u+0x00000061u; // 800BFF3C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800BFF40
  c->r[0]=0u+0x00000000u; // 800BFF44
  c->r[3]=R32(c->r[3]+0x00000200u); // 800BFF48
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800BFF4C
  W16(c->r[5]+0x00000002u,c->r[0]); // 800BFF50
  return; // 800BFF54
}

// GXSetTevKAlphaSel
void f_800BFF58(Ctx* __restrict c) {
  trace_call(0x800BFF58u);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800BFF58
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800BFF5C
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFCu; // 800BFF60
  c->r[3]=c->r[5]+c->r[0]; // 800BFF64
  if (crb(c,2)) { goto L_800BFF7C; } // 800BFF68
  c->r[0]=R32(c->r[3]+0x00000200u); // 800BFF6C
  c->r[0]=(rotl(c->r[4],19)&0x00F80000u)|(c->r[0]&~0x00F80000u); // 800BFF70
  W32(c->r[3]+0x00000200u,c->r[0]); // 800BFF74
  goto L_800BFF88; // 800BFF78
L_800BFF7C:;
  c->r[0]=R32(c->r[3]+0x00000200u); // 800BFF7C
  c->r[0]=(rotl(c->r[4],9)&0x00003E00u)|(c->r[0]&~0x00003E00u); // 800BFF80
  W32(c->r[3]+0x00000200u,c->r[0]); // 800BFF84
L_800BFF88:;
  c->r[4]=0u+0xCC010000u; // 800BFF88
  c->r[0]=0u+0x00000061u; // 800BFF8C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800BFF90
  c->r[0]=0u+0x00000000u; // 800BFF94
  c->r[3]=R32(c->r[3]+0x00000200u); // 800BFF98
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800BFF9C
  W16(c->r[5]+0x00000002u,c->r[0]); // 800BFFA0
  return; // 800BFFA4
}

// GXSetTevSwapMode
void f_800BFFA8(Ctx* __restrict c) {
  trace_call(0x800BFFA8u);
  c->r[9]=R32(c->r[2]+0xFFFF90C0u); // 800BFFA8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800BFFAC
  c->r[6]=0u+0xCC010000u; // 800BFFB0
  c->r[3]=0u+0x00000061u; // 800BFFB4
  c->r[8]=c->r[9]+c->r[0]; // 800BFFB8
  c->r[0]=0u+0x00000000u; // 800BFFBC
  c->r[7]=R32(c->r[8]+0x000001C0u); // 800BFFC0
  c->r[7]=(rotl(c->r[4],0)&0x00000003u)|(c->r[7]&~0x00000003u); // 800BFFC4
  c->r[7]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[7]&~0x0000000Cu); // 800BFFC8
  W32(c->r[8]+0x000001C0u,c->r[7]); // 800BFFCC
  W8(c->r[6]+0xFFFF8000u,c->r[3]); // 800BFFD0
  c->r[3]=R32(c->r[8]+0x000001C0u); // 800BFFD4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800BFFD8
  W16(c->r[9]+0x00000002u,c->r[0]); // 800BFFDC
  return; // 800BFFE0
}

// GXSetTevSwapModeTable
void f_800BFFE4(Ctx* __restrict c) {
  trace_call(0x800BFFE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800BFFE4
  c->r[11]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800BFFE8
  c->r[12]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800BFFEC
  c->r[8]=0u+0xCC010000u; // 800BFFF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800BFFF4
  c->r[9]=0u+0x00000061u; // 800BFFF8
  c->r[3]=c->r[12]+0x00000001u; // 800BFFFC
  c->r[0]=0u+0x00000000u; // 800C0000
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C0004
  c->r[30]=R32(c->r[2]+0xFFFF90C0u); // 800C0008
  c->r[31]=c->r[30]+0x00000200u; // 800C000C
  c->r[10]=R32(c->r[31]+c->r[11]); // 800C0010
  c->r[10]=(rotl(c->r[4],0)&0x00000003u)|(c->r[10]&~0x00000003u); // 800C0014
  c->r[10]=(rotl(c->r[5],2)&0x0000000Cu)|(c->r[10]&~0x0000000Cu); // 800C0018
  c->r[4]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C001C
  W32(c->r[31]+c->r[11],c->r[10]); // 800C0020
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800C0024
  c->r[3]=R32(c->r[31]+c->r[11]); // 800C0028
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 800C002C
  c->r[3]=R32(c->r[31]+c->r[4]); // 800C0030
  c->r[3]=(rotl(c->r[6],0)&0x00000003u)|(c->r[3]&~0x00000003u); // 800C0034
  c->r[3]=(rotl(c->r[7],2)&0x0000000Cu)|(c->r[3]&~0x0000000Cu); // 800C0038
  W32(c->r[31]+c->r[4],c->r[3]); // 800C003C
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 800C0040
  c->r[3]=R32(c->r[31]+c->r[4]); // 800C0044
  W32(c->r[8]+0xFFFF8000u,c->r[3]); // 800C0048
  W16(c->r[30]+0x00000002u,c->r[0]); // 800C004C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C0050
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C0054
  c->r[1]=c->r[1]+0x00000010u; // 800C0058
  return; // 800C005C
}

// GXSetAlphaCompare
void f_800C0060(Ctx* __restrict c) {
  trace_call(0x800C0060u);
  c->r[8]=0u+0xCC010000u; // 800C0060
  c->r[0]=0u+0x00000061u; // 800C0064
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 800C0068
  c->r[9]=0u+0xF3000000u; // 800C006C
  c->r[9]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[9]&~0x000000FFu); // 800C0070
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800C0074
  c->r[9]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[9]&~0x0000FF00u); // 800C0078
  c->r[0]=0u+0x00000000u; // 800C007C
  c->r[9]=(rotl(c->r[3],16)&0x00070000u)|(c->r[9]&~0x00070000u); // 800C0080
  c->r[9]=(rotl(c->r[6],19)&0x00380000u)|(c->r[9]&~0x00380000u); // 800C0084
  c->r[9]=(rotl(c->r[5],22)&0x00C00000u)|(c->r[9]&~0x00C00000u); // 800C0088
  W32(c->r[8]+0xFFFF8000u,c->r[9]); // 800C008C
  W16(c->r[4]+0x00000002u,c->r[0]); // 800C0090
  return; // 800C0094
}

// GXSetZTexture
void f_800C0098(Ctx* __restrict c) {
  trace_call(0x800C0098u);
  cmps(c,0,(int32_t)c->r[4],19); // 800C0098
  c->r[7]=0u+0x00000000u; // 800C009C
  c->r[0]=0u+0x000000F4u; // 800C00A0
  c->r[7]=(rotl(c->r[5],0)&0x00FFFFFFu)|(c->r[7]&~0x00FFFFFFu); // 800C00A4
  c->r[7]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800C00A8
  if (crb(c,2)) { goto L_800C00D4; } // 800C00AC
  if (!crb(c,0)) { goto L_800C00C0; } // 800C00B0
  cmps(c,0,(int32_t)c->r[4],17); // 800C00B4
  if (crb(c,2)) { goto L_800C00CC; } // 800C00B8
  goto L_800C00E4; // 800C00BC
L_800C00C0:;
  cmps(c,0,(int32_t)c->r[4],22); // 800C00C0
  if (crb(c,2)) { goto L_800C00DC; } // 800C00C4
  goto L_800C00E4; // 800C00C8
L_800C00CC:;
  c->r[5]=0u+0x00000000u; // 800C00CC
  goto L_800C00E8; // 800C00D0
L_800C00D4:;
  c->r[5]=0u+0x00000001u; // 800C00D4
  goto L_800C00E8; // 800C00D8
L_800C00DC:;
  c->r[5]=0u+0x00000002u; // 800C00DC
  goto L_800C00E8; // 800C00E0
L_800C00E4:;
  c->r[5]=0u+0x00000002u; // 800C00E4
L_800C00E8:;
  c->r[4]=0u+0xCC010000u; // 800C00E8
  c->r[0]=0u+0x00000061u; // 800C00EC
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C00F0
  c->r[6]=0u+0x00000000u; // 800C00F4
  c->r[6]=(rotl(c->r[5],0)&0x00000003u)|(c->r[6]&~0x00000003u); // 800C00F8
  c->r[5]=0u+0x000000F5u; // 800C00FC
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 800C0100
  c->r[6]=(rotl(c->r[3],2)&0x0000000Cu)|(c->r[6]&~0x0000000Cu); // 800C0104
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800C0108
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800C010C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C0110
  c->r[0]=0u+0x00000000u; // 800C0114
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800C0118
  W16(c->r[3]+0x00000002u,c->r[0]); // 800C011C
  return; // 800C0120
}

// GXSetTevOrder
void f_800C0124(Ctx* __restrict c) {
  trace_call(0x800C0124u);
  c->r[11]=rotl(c->r[5],0)&0xFFFFFEFFu; // 800C0124
  c->r[7]=0u+0x00000008u; // 800C0128
  c->r[9]=rotl(c->r[3],1)&0x00000001u; // 800C012C
  c->r[10]=R32(c->r[2]+0xFFFF90C0u); // 800C0130
  c->r[0]=addc(c,~c->r[7],c->r[11],1); // 800C0134
  c->r[8]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C0138
  c->r[0]=addc(c,c->r[7],0,c->xer_ca); // 800C013C
  c->r[9]=c->r[9]+c->r[3]; // 800C0140
  c->r[7]=c->r[10]+c->r[8]; // 800C0144
  cmps(c,0,(int32_t)c->r[4],8); // 800C0148
  c->r[8]=rotl(c->r[9],1)&0xFFFFFFFCu; // 800C014C
  c->r[0]=addc(c,~c->r[0],0x00000008u,1); // 800C0150
  W32(c->r[7]+0x000005A4u,c->r[5]); // 800C0154
  c->r[7]=c->r[10]+c->r[8]; // 800C0158
  c->r[9]=c->r[11]&~c->r[0]; // 800C015C
  if (crb(c,0)) { goto L_800C0180; } // 800C0160
  c->r[0]=0u+0x00000001u; // 800C0164
  c->r[8]=R32(c->r[10]+0x000005E8u); // 800C0168
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 800C016C
  c->r[4]=0u+0x00000000u; // 800C0170
  c->r[0]=c->r[8]&~c->r[0]; // 800C0174
  W32(c->r[10]+0x000005E8u,c->r[0]); // 800C0178
  goto L_800C0194; // 800C017C
L_800C0180:;
  c->r[0]=0u+0x00000001u; // 800C0180
  c->r[8]=R32(c->r[10]+0x000005E8u); // 800C0184
  c->r[0]=((c->r[3])&0x20)?0u:(c->r[0]<<((c->r[3])&31)); // 800C0188
  c->r[0]=c->r[8]|c->r[0]; // 800C018C
  W32(c->r[10]+0x000005E8u,c->r[0]); // 800C0190
L_800C0194:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C0194
  if (crb(c,2)) { goto L_800C01F8; } // 800C0198
  c->r[8]=R32(c->r[7]+0x00000150u); // 800C019C
  c->r[8]=(rotl(c->r[9],12)&0x00007000u)|(c->r[8]&~0x00007000u); // 800C01A0
  c->r[8]=(rotl(c->r[4],15)&0x00038000u)|(c->r[8]&~0x00038000u); // 800C01A4
  cmps(c,0,(int32_t)c->r[6],255); // 800C01A8
  W32(c->r[7]+0x00000150u,c->r[8]); // 800C01AC
  if (!crb(c,2)) { goto L_800C01BC; } // 800C01B0
  c->r[0]=0u+0x00000007u; // 800C01B4
  goto L_800C01CC; // 800C01B8
L_800C01BC:;
  c->r[3]=0u+0x80220000u; // 800C01BC
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800C01C0
  c->r[3]=c->r[3]+0xFFFFB7D8u; // 800C01C4
  c->r[0]=R32(c->r[3]+c->r[0]); // 800C01C8
L_800C01CC:;
  c->r[8]=(rotl(c->r[0],19)&0x00380000u)|(c->r[8]&~0x00380000u); // 800C01CC
  cmps(c,0,(int32_t)c->r[5],255); // 800C01D0
  W32(c->r[7]+0x00000150u,c->r[8]); // 800C01D4
  c->r[3]=0u+0x00000000u; // 800C01D8
  if (crb(c,2)) { goto L_800C01EC; } // 800C01DC
  c->r[0]=rotl(c->r[5],0)&0x00000100u; cr0(c,c->r[0]); // 800C01E0
  if (!crb(c,2)) { goto L_800C01EC; } // 800C01E4
  c->r[3]=0u+0x00000001u; // 800C01E8
L_800C01EC:;
  c->r[8]=(rotl(c->r[3],18)&0x00040000u)|(c->r[8]&~0x00040000u); // 800C01EC
  W32(c->r[7]+0x00000150u,c->r[8]); // 800C01F0
  goto L_800C0250; // 800C01F4
L_800C01F8:;
  c->r[8]=R32(c->r[7]+0x00000150u); // 800C01F8
  c->r[8]=(rotl(c->r[9],0)&0x00000007u)|(c->r[8]&~0x00000007u); // 800C01FC
  c->r[8]=(rotl(c->r[4],3)&0x00000038u)|(c->r[8]&~0x00000038u); // 800C0200
  cmps(c,0,(int32_t)c->r[6],255); // 800C0204
  W32(c->r[7]+0x00000150u,c->r[8]); // 800C0208
  if (!crb(c,2)) { goto L_800C0218; } // 800C020C
  c->r[0]=0u+0x00000007u; // 800C0210
  goto L_800C0228; // 800C0214
L_800C0218:;
  c->r[3]=0u+0x80220000u; // 800C0218
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800C021C
  c->r[3]=c->r[3]+0xFFFFB7D8u; // 800C0220
  c->r[0]=R32(c->r[3]+c->r[0]); // 800C0224
L_800C0228:;
  c->r[8]=(rotl(c->r[0],7)&0x00000380u)|(c->r[8]&~0x00000380u); // 800C0228
  cmps(c,0,(int32_t)c->r[5],255); // 800C022C
  W32(c->r[7]+0x00000150u,c->r[8]); // 800C0230
  c->r[3]=0u+0x00000000u; // 800C0234
  if (crb(c,2)) { goto L_800C0248; } // 800C0238
  c->r[0]=rotl(c->r[5],0)&0x00000100u; cr0(c,c->r[0]); // 800C023C
  if (!crb(c,2)) { goto L_800C0248; } // 800C0240
  c->r[3]=0u+0x00000001u; // 800C0244
L_800C0248:;
  c->r[8]=(rotl(c->r[3],6)&0x00000040u)|(c->r[8]&~0x00000040u); // 800C0248
  W32(c->r[7]+0x00000150u,c->r[8]); // 800C024C
L_800C0250:;
  c->r[4]=0u+0xCC010000u; // 800C0250
  c->r[0]=0u+0x00000061u; // 800C0254
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C0258
  c->r[0]=0u+0x00000000u; // 800C025C
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800C0260
  c->r[3]=R32(c->r[7]+0x00000150u); // 800C0264
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800C0268
  W16(c->r[5]+0x00000002u,c->r[0]); // 800C026C
  c->r[0]=R32(c->r[5]+0x000005FCu); // 800C0270
  c->r[0]=c->r[0]|0x00000001u; // 800C0274
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800C0278
  return; // 800C027C
}

// GXSetNumTevStages
void f_800C0280(Ctx* __restrict c) {
  trace_call(0x800C0280u);
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800C0280
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C0284
  c->r[3]=R32(c->r[4]+0x00000254u); // 800C0288
  c->r[3]=(rotl(c->r[0],10)&0x00003C00u)|(c->r[3]&~0x00003C00u); // 800C028C
  W32(c->r[4]+0x00000254u,c->r[3]); // 800C0290
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800C0294
  c->r[0]=c->r[0]|0x00000004u; // 800C0298
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800C029C
  return; // 800C02A0
}

// GXSetFog
void f_800C02A4(Ctx* __restrict c) {
  trace_call(0x800C02A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C02A4
  c->r[0]=c->lr; // 800C02A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C02AC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800C02B0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800C02B4
  c->r[8]=0u+0x00000000u; // 800C02B8
  c->r[9]=0u+0x00000000u; // 800C02BC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C02C0
  c->r[31]=rotl(c->r[3],0)&0x00000007u; // 800C02C4
  W32(c->r[1]+0x00000028u,c->r[30]); // 800C02C8
  c->r[30]=rotl(c->r[3],29)&0x00000001u; cr0(c,c->r[30]); // 800C02CC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800C02D0
  c->r[29]=c->r[4]|c->r[4]; // 800C02D4
  W32(c->r[1]+0x00000020u,c->r[28]); // 800C02D8
  if (crb(c,2)) { goto L_800C0328; } // 800C02DC
  fcmp(c,0,c->f[4],c->f[3]); // 800C02E0
  if (crb(c,2)) { goto L_800C02F0; } // 800C02E4
  fcmp(c,0,c->f[2],c->f[1]); // 800C02E8
  if (!crb(c,2)) { goto L_800C0300; } // 800C02EC
L_800C02F0:;
  {uint32_t ea=c->r[2]+0xFFFF9128u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C02F0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C02F4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800C02F8
  goto L_800C0418; // 800C02FC
L_800C0300:;
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[1]); // 800C0300
  {uint32_t ea=c->r[2]+0xFFFF912Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 800C0304
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[3]); // 800C0308
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[3]); // 800C030C
  c->f[3]=c->ps1[3]=S(c->f[5]/c->f[6]); // 800C0310
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[2]); // 800C0314
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 800C0318
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800C031C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800C0320
  goto L_800C0418; // 800C0324
L_800C0328:;
  fcmp(c,0,c->f[4],c->f[3]); // 800C0328
  if (crb(c,2)) { goto L_800C0338; } // 800C032C
  fcmp(c,0,c->f[2],c->f[1]); // 800C0330
  if (!crb(c,2)) { goto L_800C0348; } // 800C0334
L_800C0338:;
  {uint32_t ea=c->r[2]+0xFFFF9128u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C0338
  {uint32_t ea=c->r[2]+0xFFFF9130u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C033C
  c->f[31]=c->f[3]; // 800C0340
  goto L_800C0364; // 800C0344
L_800C0348:;
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[3]); // 800C0348
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 800C034C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 800C0350
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[0]); // 800C0354
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800C0358
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[2]); // 800C035C
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[0]); // 800C0360
L_800C0364:;
  {uint32_t ea=c->r[2]+0xFFFF9130u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0364
  c->r[28]=0u+0x00000000u; // 800C0368
  {uint32_t ea=c->r[2]+0xFFFF9138u; c->f[0]=RF64(ea);} // 800C036C
  goto L_800C037C; // 800C0370
L_800C0374:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 800C0374
  c->r[28]=c->r[28]+0x00000001u; // 800C0378
L_800C037C:;
  fcmp(c,0,c->f[4],c->f[0]); // 800C037C
  if (crb(c,1)) { IRQCHK(c); goto L_800C0374; } // 800C0380
  {uint32_t ea=c->r[2]+0xFFFF9148u; c->f[0]=RF64(ea);} // 800C0384
  {uint32_t ea=c->r[2]+0xFFFF9140u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0388
  {uint32_t ea=c->r[2]+0xFFFF9128u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C038C
  goto L_800C039C; // 800C0390
L_800C0394:;
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[2]); // 800C0394
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 800C0398
L_800C039C:;
  fcmp(c,0,c->f[4],c->f[1]); // 800C039C
  c->r[0]=c->cr; // 800C03A0
  c->r[0]=rotl(c->r[0],2)&0x00000001u; cr0(c,c->r[0]); // 800C03A4
  if (crb(c,2)) { goto L_800C03B4; } // 800C03A8
  fcmp(c,0,c->f[4],c->f[0]); // 800C03AC
  if (crb(c,0)) { IRQCHK(c); goto L_800C0394; } // 800C03B0
L_800C03B4:;
  c->r[0]=c->r[28]+0x00000001u; // 800C03B4
  c->r[3]=0u+0x00000001u; // 800C03B8
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800C03BC
  {uint32_t ea=c->r[2]+0xFFFF9150u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C03C0
  c->r[0]=0u+0x43300000u; // 800C03C4
  {uint32_t ea=c->r[2]+0xFFFF9158u; c->f[2]=RF64(ea);} // 800C03C8
  c->r[3]=c->r[3]^0x80000000u; // 800C03CC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C03D0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 800C03D4
  W32(c->r[1]+0x00000014u,c->r[3]); // 800C03D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800C03DC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800C03E0
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[0]); // 800C03E4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C03E8
  c->lr=0x800C03F0u; f_800C2030(c); // 800C03EC
  c->r[0]=c->r[28]+0x00000001u; // 800C03F0
  c->r[8]=0u+0x00000000u; // 800C03F4
  c->r[8]=(rotl(c->r[3],0)&0x00FFFFFFu)|(c->r[8]&~0x00FFFFFFu); // 800C03F8
  c->r[9]=0u+0x00000000u; // 800C03FC
  c->r[9]=(rotl(c->r[0],0)&0x0000001Fu)|(c->r[9]&~0x0000001Fu); // 800C0400
  c->r[3]=0u+0x000000EFu; // 800C0404
  c->r[0]=0u+0x000000F0u; // 800C0408
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 800C040C
  c->r[8]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800C0410
  c->r[9]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 800C0414
L_800C0418:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C0418
  c->r[4]=0u+0xCC010000u; // 800C041C
  c->r[5]=0u+0x00000061u; // 800C0420
  c->r[0]=0u+0x000000EEu; // 800C0424
  c->r[6]=0u+0x00000000u; // 800C0428
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800C042C
  c->r[6]=(rotl(c->r[3],20)&0x000007FFu)|(c->r[6]&~0x000007FFu); // 800C0430
  c->r[10]=R32(c->r[1]+0x00000008u); // 800C0434
  c->r[6]=(rotl(c->r[3],20)&0x0007F800u)|(c->r[6]&~0x0007F800u); // 800C0438
  c->r[7]=0u+0x00000000u; // 800C043C
  c->r[6]=(rotl(c->r[3],20)&0x00080000u)|(c->r[6]&~0x00080000u); // 800C0440
  c->r[3]=0u+0x000000F1u; // 800C0444
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800C0448
  c->r[7]=(rotl(c->r[10],20)&0x000007FFu)|(c->r[7]&~0x000007FFu); // 800C044C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800C0450
  c->r[7]=(rotl(c->r[10],20)&0x0007F800u)|(c->r[7]&~0x0007F800u); // 800C0454
  c->r[7]=(rotl(c->r[10],20)&0x00080000u)|(c->r[7]&~0x00080000u); // 800C0458
  c->r[0]=R32(c->r[29]+0x00000000u); // 800C045C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800C0460
  c->r[7]=(rotl(c->r[30],20)&0x00100000u)|(c->r[7]&~0x00100000u); // 800C0464
  c->r[7]=(rotl(c->r[31],21)&0x00E00000u)|(c->r[7]&~0x00E00000u); // 800C0468
  c->r[6]=0u+0x00000000u; // 800C046C
  W32(c->r[4]+0xFFFF8000u,c->r[8]); // 800C0470
  c->r[7]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[7]&~0xFF000000u); // 800C0474
  c->r[6]=(rotl(c->r[0],24)&0x00FFFFFFu)|(c->r[6]&~0x00FFFFFFu); // 800C0478
  c->r[0]=0u+0x000000F2u; // 800C047C
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800C0480
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800C0484
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800C0488
  c->r[0]=0u+0x00000000u; // 800C048C
  W32(c->r[4]+0xFFFF8000u,c->r[9]); // 800C0490
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800C0494
  W32(c->r[4]+0xFFFF8000u,c->r[7]); // 800C0498
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800C049C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800C04A0
  W16(c->r[3]+0x00000002u,c->r[0]); // 800C04A4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800C04A8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800C04AC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C04B0
  c->r[30]=R32(c->r[1]+0x00000028u); // 800C04B4
  c->r[29]=R32(c->r[1]+0x00000024u); // 800C04B8
  c->r[28]=R32(c->r[1]+0x00000020u); // 800C04BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C04C0
  c->lr=c->r[0]; // 800C04C4
  c->r[1]=c->r[1]+0x00000040u; // 800C04C8
  return; // 800C04CC
}

// GXSetFogRangeAdj
void f_800C04D0(Ctx* __restrict c) {
  trace_call(0x800C04D0u);
  cmps(c,0,(int32_t)c->r[3],0); // 800C04D0
  if (crb(c,2)) { goto L_800C05BC; } // 800C04D4
  c->r[12]=R16(c->r[5]+0x00000000u); // 800C04D8
  c->r[11]=0u+0x00000000u; // 800C04DC
  c->r[10]=R16(c->r[5]+0x00000002u); // 800C04E0
  c->r[6]=0u+0xCC010000u; // 800C04E4
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 800C04E8
  c->r[0]=0u+0x00000061u; // 800C04EC
  c->r[9]=c->r[11]|c->r[11]; // 800C04F0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C04F4
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 800C04F8
  c->r[7]=0u+0x000000E9u; // 800C04FC
  c->r[8]=c->r[9]|c->r[9]; // 800C0500
  c->r[12]=R16(c->r[5]+0x00000004u); // 800C0504
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800C0508
  c->r[11]=0u+0x00000000u; // 800C050C
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 800C0510
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 800C0514
  c->r[9]=c->r[11]|c->r[11]; // 800C0518
  c->r[10]=R16(c->r[5]+0x00000006u); // 800C051C
  c->r[7]=0u+0x000000EAu; // 800C0520
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C0524
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 800C0528
  c->r[12]=R16(c->r[5]+0x00000008u); // 800C052C
  c->r[8]=c->r[9]|c->r[9]; // 800C0530
  c->r[11]=0u+0x00000000u; // 800C0534
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800C0538
  c->r[10]=R16(c->r[5]+0x0000000Au); // 800C053C
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 800C0540
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 800C0544
  c->r[9]=c->r[11]|c->r[11]; // 800C0548
  c->r[7]=0u+0x000000EBu; // 800C054C
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 800C0550
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C0554
  c->r[8]=c->r[9]|c->r[9]; // 800C0558
  c->r[12]=R16(c->r[5]+0x0000000Cu); // 800C055C
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800C0560
  c->r[11]=0u+0x00000000u; // 800C0564
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 800C0568
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 800C056C
  c->r[9]=c->r[11]|c->r[11]; // 800C0570
  c->r[10]=R16(c->r[5]+0x0000000Eu); // 800C0574
  c->r[7]=0u+0x000000ECu; // 800C0578
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C057C
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 800C0580
  c->r[12]=R16(c->r[5]+0x00000010u); // 800C0584
  c->r[8]=c->r[9]|c->r[9]; // 800C0588
  c->r[11]=0u+0x00000000u; // 800C058C
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800C0590
  c->r[10]=R16(c->r[5]+0x00000012u); // 800C0594
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 800C0598
  c->r[11]=(rotl(c->r[12],0)&0x00000FFFu)|(c->r[11]&~0x00000FFFu); // 800C059C
  c->r[9]=c->r[11]|c->r[11]; // 800C05A0
  c->r[7]=0u+0x000000EDu; // 800C05A4
  c->r[9]=(rotl(c->r[10],12)&0x00FFF000u)|(c->r[9]&~0x00FFF000u); // 800C05A8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C05AC
  c->r[8]=c->r[9]|c->r[9]; // 800C05B0
  c->r[8]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[8]&~0xFF000000u); // 800C05B4
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 800C05B8
L_800C05BC:;
  c->r[0]=c->r[4]+0x00000156u; // 800C05BC
  c->r[6]=0u+0x00000000u; // 800C05C0
  c->r[6]=(rotl(c->r[0],0)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 800C05C4
  c->r[4]=0u+0xCC010000u; // 800C05C8
  c->r[0]=0u+0x00000061u; // 800C05CC
  c->r[5]=0u+0x000000E8u; // 800C05D0
  c->r[6]=(rotl(c->r[3],10)&0x00000400u)|(c->r[6]&~0x00000400u); // 800C05D4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C05D8
  c->r[6]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800C05DC
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800C05E0
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800C05E4
  c->r[0]=0u+0x00000000u; // 800C05E8
  W16(c->r[3]+0x00000002u,c->r[0]); // 800C05EC
  return; // 800C05F0
}

// GXSetBlendMode
void f_800C05F4(Ctx* __restrict c) {
  trace_call(0x800C05F4u);
  c->r[10]=R32(c->r[2]+0xFFFF90C0u); // 800C05F4
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 800C05F8
  c->r[8]=c->r[3]+0xFFFFFFFEu; // 800C05FC
  c->r[7]=0u+0xCC010000u; // 800C0600
  c->r[0]=cntlz(c->r[0]); // 800C0604
  c->r[9]=R32(c->r[10]+0x00000220u); // 800C0608
  c->r[9]=(rotl(c->r[0],6)&0x00000800u)|(c->r[9]&~0x00000800u); // 800C060C
  c->r[8]=cntlz(c->r[8]); // 800C0610
  c->r[0]=0u+0x00000061u; // 800C0614
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 800C0618
  c->r[9]=(rotl(c->r[3],0)&0x00000001u)|(c->r[9]&~0x00000001u); // 800C061C
  c->r[9]=(rotl(c->r[8],28)&0x00000002u)|(c->r[9]&~0x00000002u); // 800C0620
  c->r[0]=0u+0x00000000u; // 800C0624
  c->r[9]=(rotl(c->r[6],12)&0x0000F000u)|(c->r[9]&~0x0000F000u); // 800C0628
  c->r[9]=(rotl(c->r[4],8)&0x00000700u)|(c->r[9]&~0x00000700u); // 800C062C
  c->r[9]=(rotl(c->r[5],5)&0x000000E0u)|(c->r[9]&~0x000000E0u); // 800C0630
  W32(c->r[7]+0xFFFF8000u,c->r[9]); // 800C0634
  W32(c->r[10]+0x00000220u,c->r[9]); // 800C0638
  W16(c->r[10]+0x00000002u,c->r[0]); // 800C063C
  return; // 800C0640
}

// GXSetColorUpdate
void f_800C0644(Ctx* __restrict c) {
  trace_call(0x800C0644u);
  c->r[7]=R32(c->r[2]+0xFFFF90C0u); // 800C0644
  c->r[4]=0u+0xCC010000u; // 800C0648
  c->r[5]=0u+0x00000061u; // 800C064C
  c->r[0]=0u+0x00000000u; // 800C0650
  c->r[6]=R32(c->r[7]+0x00000220u); // 800C0654
  c->r[6]=(rotl(c->r[3],3)&0x00000008u)|(c->r[6]&~0x00000008u); // 800C0658
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800C065C
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800C0660
  W32(c->r[7]+0x00000220u,c->r[6]); // 800C0664
  W16(c->r[7]+0x00000002u,c->r[0]); // 800C0668
  return; // 800C066C
}

// GXSetAlphaUpdate
void f_800C0670(Ctx* __restrict c) {
  trace_call(0x800C0670u);
  c->r[7]=R32(c->r[2]+0xFFFF90C0u); // 800C0670
  c->r[4]=0u+0xCC010000u; // 800C0674
  c->r[5]=0u+0x00000061u; // 800C0678
  c->r[0]=0u+0x00000000u; // 800C067C
  c->r[6]=R32(c->r[7]+0x00000220u); // 800C0680
  c->r[6]=(rotl(c->r[3],4)&0x00000010u)|(c->r[6]&~0x00000010u); // 800C0684
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800C0688
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800C068C
  W32(c->r[7]+0x00000220u,c->r[6]); // 800C0690
  W16(c->r[7]+0x00000002u,c->r[0]); // 800C0694
  return; // 800C0698
}

// GXSetZMode
void f_800C069C(Ctx* __restrict c) {
  trace_call(0x800C069Cu);
  c->r[9]=R32(c->r[2]+0xFFFF90C0u); // 800C069C
  c->r[6]=0u+0xCC010000u; // 800C06A0
  c->r[7]=0u+0x00000061u; // 800C06A4
  c->r[0]=0u+0x00000000u; // 800C06A8
  c->r[8]=R32(c->r[9]+0x00000228u); // 800C06AC
  c->r[8]=(rotl(c->r[3],0)&0x00000001u)|(c->r[8]&~0x00000001u); // 800C06B0
  c->r[8]=(rotl(c->r[4],1)&0x0000000Eu)|(c->r[8]&~0x0000000Eu); // 800C06B4
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 800C06B8
  c->r[8]=(rotl(c->r[5],4)&0x00000010u)|(c->r[8]&~0x00000010u); // 800C06BC
  W32(c->r[6]+0xFFFF8000u,c->r[8]); // 800C06C0
  W32(c->r[9]+0x00000228u,c->r[8]); // 800C06C4
  W16(c->r[9]+0x00000002u,c->r[0]); // 800C06C8
  return; // 800C06CC
}

// GXSetZCompLoc
void f_800C06D0(Ctx* __restrict c) {
  trace_call(0x800C06D0u);
  c->r[7]=R32(c->r[2]+0xFFFF90C0u); // 800C06D0
  c->r[4]=0u+0xCC010000u; // 800C06D4
  c->r[5]=0u+0x00000061u; // 800C06D8
  c->r[0]=0u+0x00000000u; // 800C06DC
  c->r[6]=R32(c->r[7]+0x0000022Cu); // 800C06E0
  c->r[6]=(rotl(c->r[3],6)&0x00000040u)|(c->r[6]&~0x00000040u); // 800C06E4
  W32(c->r[7]+0x0000022Cu,c->r[6]); // 800C06E8
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800C06EC
  c->r[3]=R32(c->r[7]+0x0000022Cu); // 800C06F0
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 800C06F4
  W16(c->r[7]+0x00000002u,c->r[0]); // 800C06F8
  return; // 800C06FC
}

// GXSetPixelFmt
void f_800C0700(Ctx* __restrict c) {
  trace_call(0x800C0700u);
  c->r[9]=R32(c->r[2]+0xFFFF90C0u); // 800C0700
  c->r[6]=0u+0x80220000u; // 800C0704
  c->r[7]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C0708
  c->r[6]=c->r[6]+0xFFFFB800u; // 800C070C
  c->r[8]=R32(c->r[9]+0x0000022Cu); // 800C0710
  c->r[0]=R32(c->r[6]+c->r[7]); // 800C0714
  c->r[5]=c->r[8]|c->r[8]; // 800C0718
  c->r[5]=(rotl(c->r[0],0)&0x00000007u)|(c->r[5]&~0x00000007u); // 800C071C
  c->r[5]=(rotl(c->r[4],3)&0x00000038u)|(c->r[5]&~0x00000038u); // 800C0720
  cmpu(c,0,c->r[8],c->r[5]); // 800C0724
  W32(c->r[9]+0x0000022Cu,c->r[5]); // 800C0728
  if (crb(c,2)) { goto L_800C0764; } // 800C072C
  c->r[5]=0u+0xCC010000u; // 800C0730
  c->r[0]=0u+0x00000061u; // 800C0734
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0738
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800C073C
  c->r[4]=cntlz(c->r[0]); // 800C0740
  c->r[0]=R32(c->r[9]+0x0000022Cu); // 800C0744
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0748
  c->r[0]=R32(c->r[9]+0x00000254u); // 800C074C
  c->r[0]=(rotl(c->r[4],4)&0x00000200u)|(c->r[0]&~0x00000200u); // 800C0750
  W32(c->r[9]+0x00000254u,c->r[0]); // 800C0754
  c->r[0]=R32(c->r[9]+0x000005FCu); // 800C0758
  c->r[0]=c->r[0]|0x00000004u; // 800C075C
  W32(c->r[9]+0x000005FCu,c->r[0]); // 800C0760
L_800C0764:;
  c->r[0]=R32(c->r[6]+c->r[7]); // 800C0764
  cmpu(c,0,c->r[0],0x00000004u); // 800C0768
  if (!crb(c,2)) { goto L_800C079C; } // 800C076C
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800C0770
  c->r[4]=R32(c->r[9]+0x00000224u); // 800C0774
  c->r[4]=(rotl(c->r[0],9)&0x00000600u)|(c->r[4]&~0x00000600u); // 800C0778
  c->r[3]=0u+0xCC010000u; // 800C077C
  c->r[0]=0u+0x00000042u; // 800C0780
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 800C0784
  W32(c->r[9]+0x00000224u,c->r[4]); // 800C0788
  c->r[0]=0u+0x00000061u; // 800C078C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800C0790
  c->r[0]=R32(c->r[9]+0x00000224u); // 800C0794
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800C0798
L_800C079C:;
  c->r[0]=0u+0x00000000u; // 800C079C
  W16(c->r[9]+0x00000002u,c->r[0]); // 800C07A0
  return; // 800C07A4
}

// GXSetDither
void f_800C07A8(Ctx* __restrict c) {
  trace_call(0x800C07A8u);
  c->r[7]=R32(c->r[2]+0xFFFF90C0u); // 800C07A8
  c->r[4]=0u+0xCC010000u; // 800C07AC
  c->r[5]=0u+0x00000061u; // 800C07B0
  c->r[0]=0u+0x00000000u; // 800C07B4
  c->r[6]=R32(c->r[7]+0x00000220u); // 800C07B8
  c->r[6]=(rotl(c->r[3],2)&0x00000004u)|(c->r[6]&~0x00000004u); // 800C07BC
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800C07C0
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 800C07C4
  W32(c->r[7]+0x00000220u,c->r[6]); // 800C07C8
  W16(c->r[7]+0x00000002u,c->r[0]); // 800C07CC
  return; // 800C07D0
}

// GXSetDstAlpha
void f_800C07D4(Ctx* __restrict c) {
  trace_call(0x800C07D4u);
  c->r[8]=R32(c->r[2]+0xFFFF90C0u); // 800C07D4
  c->r[5]=0u+0xCC010000u; // 800C07D8
  c->r[6]=0u+0x00000061u; // 800C07DC
  c->r[0]=0u+0x00000000u; // 800C07E0
  c->r[7]=R32(c->r[8]+0x00000224u); // 800C07E4
  c->r[7]=(rotl(c->r[4],0)&0x000000FFu)|(c->r[7]&~0x000000FFu); // 800C07E8
  c->r[7]=(rotl(c->r[3],8)&0x00000100u)|(c->r[7]&~0x00000100u); // 800C07EC
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 800C07F0
  W32(c->r[5]+0xFFFF8000u,c->r[7]); // 800C07F4
  W32(c->r[8]+0x00000224u,c->r[7]); // 800C07F8
  W16(c->r[8]+0x00000002u,c->r[0]); // 800C07FC
  return; // 800C0800
}

// GXSetFieldMask
void f_800C0804(Ctx* __restrict c) {
  trace_call(0x800C0804u);
  c->r[5]=0u+0xCC010000u; // 800C0804
  c->r[0]=0u+0x00000061u; // 800C0808
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800C080C
  c->r[0]=0u+0x00000044u; // 800C0810
  c->r[6]=0u+0x00000000u; // 800C0814
  c->r[6]=(rotl(c->r[4],0)&0x00000001u)|(c->r[6]&~0x00000001u); // 800C0818
  c->r[6]=(rotl(c->r[3],1)&0x00000002u)|(c->r[6]&~0x00000002u); // 800C081C
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800C0820
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800C0824
  c->r[0]=0u+0x00000000u; // 800C0828
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800C082C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800C0830
  return; // 800C0834
}

// GXSetFieldMode
void f_800C0838(Ctx* __restrict c) {
  trace_call(0x800C0838u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0838
  c->r[0]=c->lr; // 800C083C
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800C0840
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C0844
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C0848
  c->r[31]=0u+0xCC010000u; // 800C084C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C0850
  c->r[30]=0u+0x00000061u; // 800C0854
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C0858
  c->r[29]=c->r[3]|c->r[3]; // 800C085C
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 800C0860
  c->r[0]=(rotl(c->r[4],22)&0x00400000u)|(c->r[0]&~0x00400000u); // 800C0864
  W32(c->r[5]+0x0000007Cu,c->r[0]); // 800C0868
  W8(c->r[31]+0xFFFF8000u,c->r[30]); // 800C086C
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 800C0870
  W32(c->r[31]+0xFFFF8000u,c->r[0]); // 800C0874
  c->lr=0x800C087Cu; f_800BFC00(c); // 800C0878
  W8(c->r[31]+0xFFFF8000u,c->r[30]); // 800C087C
  c->r[0]=c->r[29]|0x68000000u; // 800C0880
  W32(c->r[31]+0xFFFF8000u,c->r[0]); // 800C0884
  c->lr=0x800C088Cu; f_800BFC00(c); // 800C0888
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C088C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C0890
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C0894
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C0898
  c->lr=c->r[0]; // 800C089C
  c->r[1]=c->r[1]+0x00000020u; // 800C08A0
  return; // 800C08A4
}

// fn_800C08A8
void f_800C08A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C08A8
  c->r[0]=c->lr; // 800C08AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C08B0
  c->r[11]=c->r[1]+0x00000020u; // 800C08B4
  c->lr=0x800C08BCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C08B8
  c->r[30]=R32(c->r[2]+0xFFFF90C0u); // 800C08BC
  c->r[31]=0u+0x802C0000u; // 800C08C0
  c->r[31]=c->r[31]+0xFFFFC7A8u; // 800C08C4
  c->r[27]=c->r[3]|c->r[3]; // 800C08C8
  c->r[0]=R32(c->r[30]+0x000005FCu); // 800C08CC
  c->r[28]=c->r[4]|c->r[4]; // 800C08D0
  c->r[29]=c->r[31]+0x00000000u; // 800C08D4
  cmps(c,0,(int32_t)c->r[0],0); // 800C08D8
  if (crb(c,2)) { goto L_800C08E4; } // 800C08DC
  c->lr=0x800C08E4u; f_800BD6A8(c); // 800C08E0
L_800C08E4:;
  c->r[0]=R8(c->r[30]+0x000005F9u); // 800C08E4
  cmps(c,0,(int32_t)c->r[0],0); // 800C08E8
  if (crb(c,2)) { goto L_800C0900; } // 800C08EC
  c->r[4]=c->r[30]|c->r[30]; // 800C08F0
  c->r[3]=c->r[31]+0x00000080u; // 800C08F4
  c->r[5]=0u+0x00000600u; // 800C08F8
  c->lr=0x800C0900u; f_80004338(c); // 800C08FC
L_800C0900:;
  c->r[3]=c->r[27]+c->r[28]; // 800C0900
  c->r[4]=0u+0x00000000u; // 800C0904
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 800C0908
  W32(c->r[29]+0x00000000u,c->r[27]); // 800C090C
  c->r[0]=0u+0x00000001u; // 800C0910
  c->r[3]=c->r[31]+0x00000680u; // 800C0914
  W32(c->r[29]+0x00000004u,c->r[5]); // 800C0918
  W32(c->r[29]+0x00000008u,c->r[28]); // 800C091C
  W32(c->r[29]+0x0000001Cu,c->r[4]); // 800C0920
  W32(c->r[29]+0x00000014u,c->r[27]); // 800C0924
  W32(c->r[29]+0x00000018u,c->r[27]); // 800C0928
  W8(c->r[30]+0x000005F8u,c->r[0]); // 800C092C
  c->lr=0x800C0934u; f_800BBFB8(c); // 800C0930
  c->r[3]=c->r[31]+0x00000000u; // 800C0934
  c->lr=0x800C093Cu; f_800BBA40(c); // 800C0938
  c->lr=0x800C0940u; f_800BCF94(c); // 800C093C
  c->r[11]=c->r[1]+0x00000020u; // 800C0940
  c->lr=0x800C0948u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C0944
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C0948
  c->lr=c->r[0]; // 800C094C
  c->r[1]=c->r[1]+0x00000020u; // 800C0950
  return; // 800C0954
}

// fn_800C0958
void f_800C0958(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0958
  c->r[0]=c->lr; // 800C095C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C0960
  c->r[11]=c->r[1]+0x00000020u; // 800C0964
  c->lr=0x800C096Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C0968
  c->r[30]=0u+0x802C0000u; // 800C096C
  c->r[30]=c->r[30]+0xFFFFC7A8u; // 800C0970
  c->r[3]=c->r[30]+0x00000000u; // 800C0974
  c->lr=0x800C097Cu; f_800BBFB8(c); // 800C0978
  c->r[3]=c->r[30]+0x00000000u; // 800C097C
  c->lr=0x800C0984u; f_800BC068(c); // 800C0980
  c->r[31]=c->r[3]|c->r[3]; // 800C0984
  c->r[3]=c->r[30]+0x00000680u; // 800C0988
  c->lr=0x800C0990u; f_800BBA40(c); // 800C098C
  c->r[29]=R32(c->r[2]+0xFFFF90C0u); // 800C0990
  c->r[0]=R8(c->r[29]+0x000005F9u); // 800C0994
  cmps(c,0,(int32_t)c->r[0],0); // 800C0998
  if (crb(c,2)) { goto L_800C09CC; } // 800C099C
  c->lr=0x800C09A4u; f_8009DF9C(c); // 800C09A0
  c->r[28]=R32(c->r[2]+0xFFFF90C0u); // 800C09A4
  c->r[27]=c->r[3]|c->r[3]; // 800C09A8
  c->r[4]=c->r[30]+0x00000080u; // 800C09AC
  c->r[5]=0u+0x00000600u; // 800C09B0
  c->r[26]=R32(c->r[28]+0x00000008u); // 800C09B4
  c->r[3]=c->r[28]|c->r[28]; // 800C09B8
  c->lr=0x800C09C0u; f_80004338(c); // 800C09BC
  W32(c->r[28]+0x00000008u,c->r[26]); // 800C09C0
  c->r[3]=c->r[27]|c->r[27]; // 800C09C4
  c->lr=0x800C09CCu; f_8009DFC4(c); // 800C09C8
L_800C09CC:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 800C09CC
  c->r[0]=0u+0x00000000u; // 800C09D0
  W8(c->r[29]+0x000005F8u,c->r[0]); // 800C09D4
  if (!crb(c,2)) { goto L_800C09E8; } // 800C09D8
  c->r[3]=c->r[30]+0x00000000u; // 800C09DC
  c->lr=0x800C09E4u; f_800BC060(c); // 800C09E0
  goto L_800C09EC; // 800C09E4
L_800C09E8:;
  c->r[3]=0u+0x00000000u; // 800C09E8
L_800C09EC:;
  c->r[11]=c->r[1]+0x00000020u; // 800C09EC
  c->lr=0x800C09F4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C09F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C09F4
  c->lr=c->r[0]; // 800C09F8
  c->r[1]=c->r[1]+0x00000020u; // 800C09FC
  return; // 800C0A00
}

// GXCallDisplayList
void f_800C0A04(Ctx* __restrict c) {
  trace_call(0x800C0A04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C0A04
  c->r[0]=c->lr; // 800C0A08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C0A0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C0A10
  c->r[31]=R32(c->r[2]+0xFFFF90C0u); // 800C0A14
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C0A18
  c->r[30]=c->r[4]|c->r[4]; // 800C0A1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C0A20
  c->r[29]=c->r[3]|c->r[3]; // 800C0A24
  c->r[0]=R32(c->r[31]+0x000005FCu); // 800C0A28
  cmps(c,0,(int32_t)c->r[0],0); // 800C0A2C
  if (crb(c,2)) { goto L_800C0A38; } // 800C0A30
  c->lr=0x800C0A38u; f_800BD6A8(c); // 800C0A34
L_800C0A38:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C0A38
  cmps(c,0,(int32_t)c->r[0],0); // 800C0A3C
  if (!crb(c,2)) { goto L_800C0A48; } // 800C0A40
  c->lr=0x800C0A48u; f_800BDA6C(c); // 800C0A44
L_800C0A48:;
  c->r[3]=0u+0xCC010000u; // 800C0A48
  c->r[0]=0u+0x00000040u; // 800C0A4C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800C0A50
  W32(c->r[3]+0xFFFF8000u,c->r[29]); // 800C0A54
  W32(c->r[3]+0xFFFF8000u,c->r[30]); // 800C0A58
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C0A5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C0A60
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C0A64
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C0A68
  c->lr=c->r[0]; // 800C0A6C
  c->r[1]=c->r[1]+0x00000020u; // 800C0A70
  return; // 800C0A74
}

// __GXSetProjection
void f_800C0A78(Ctx* __restrict c) {
  trace_call(0x800C0A78u);
  c->r[4]=0u+0xCC010000u; // 800C0A78
  c->r[0]=0u+0x00000010u; // 800C0A7C
  c->r[3]=0u+0x00060000u; // 800C0A80
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C0A84
  c->r[0]=c->r[3]+0x00001020u; // 800C0A88
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800C0A8C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C0A90
  c->r[5]=c->r[4]+0xFFFF8000u; // 800C0A94
  {uint32_t ea=c->r[3]+0x0000052Cu; psq_load(c,2,ea,0,0);} // 800C0A98
  {uint32_t ea=c->r[3]+0x00000534u; psq_load(c,1,ea,0,0);} // 800C0A9C
  {uint32_t ea=c->r[3]+0x0000053Cu; psq_load(c,0,ea,0,0);} // 800C0AA0
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,2,ea,0,0);} // 800C0AA4
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,1,ea,0,0);} // 800C0AA8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 800C0AAC
  c->r[0]=R32(c->r[3]+0x00000528u); // 800C0AB0
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C0AB4
  return; // 800C0AB8
}

// GXSetProjection
void f_800C0ABC(Ctx* __restrict c) {
  trace_call(0x800C0ABCu);
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800C0ABC
  cmps(c,0,(int32_t)c->r[4],1); // 800C0AC0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0AC4
  W32(c->r[5]+0x00000528u,c->r[4]); // 800C0AC8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0ACC
  {uint32_t ea=c->r[5]+0x0000052Cu; WF32(ea,c->f[1]);} // 800C0AD0
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0AD4
  {uint32_t ea=c->r[5]+0x00000534u; WF32(ea,c->f[0]);} // 800C0AD8
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0ADC
  {uint32_t ea=c->r[5]+0x0000053Cu; WF32(ea,c->f[1]);} // 800C0AE0
  {uint32_t ea=c->r[5]+0x00000540u; WF32(ea,c->f[0]);} // 800C0AE4
  if (!crb(c,2)) { goto L_800C0B00; } // 800C0AE8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0AEC
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0AF0
  {uint32_t ea=c->r[5]+0x00000530u; WF32(ea,c->f[1]);} // 800C0AF4
  {uint32_t ea=c->r[5]+0x00000538u; WF32(ea,c->f[0]);} // 800C0AF8
  goto L_800C0B10; // 800C0AFC
L_800C0B00:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0B00
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0B04
  {uint32_t ea=c->r[5]+0x00000530u; WF32(ea,c->f[1]);} // 800C0B08
  {uint32_t ea=c->r[5]+0x00000538u; WF32(ea,c->f[0]);} // 800C0B0C
L_800C0B10:;
  c->r[0]=R32(c->r[5]+0x000005FCu); // 800C0B10
  c->r[0]=c->r[0]|0x08000000u; // 800C0B14
  W32(c->r[5]+0x000005FCu,c->r[0]); // 800C0B18
  return; // 800C0B1C
}

// GXSetProjectionv
void f_800C0B20(Ctx* __restrict c) {
  trace_call(0x800C0B20u);
  {uint32_t ea=c->r[2]+0xFFFF9160u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0B20
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0B24
  fcmp(c,0,c->f[1],c->f[0]); // 800C0B28
  if (!crb(c,2)) { goto L_800C0B38; } // 800C0B2C
  c->r[0]=0u+0x00000000u; // 800C0B30
  goto L_800C0B3C; // 800C0B34
L_800C0B38:;
  c->r[0]=0u+0x00000001u; // 800C0B38
L_800C0B3C:;
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800C0B3C
  W32(c->r[4]+0x00000528u,c->r[0]); // 800C0B40
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,2,ea,0,0);} // 800C0B44
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_load(c,1,ea,0,0);} // 800C0B48
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,0,ea,0,0);} // 800C0B4C
  {uint32_t ea=c->r[4]+0x0000052Cu; psq_store(c,2,ea,0,0);} // 800C0B50
  {uint32_t ea=c->r[4]+0x00000534u; psq_store(c,1,ea,0,0);} // 800C0B54
  {uint32_t ea=c->r[4]+0x0000053Cu; psq_store(c,0,ea,0,0);} // 800C0B58
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800C0B5C
  c->r[0]=c->r[0]|0x08000000u; // 800C0B60
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800C0B64
  return; // 800C0B68
}

// GXLoadPosMtxImm
void f_800C0B6C(Ctx* __restrict c) {
  trace_call(0x800C0B6Cu);
  c->r[5]=0u+0xCC010000u; // 800C0B6C
  c->r[0]=0u+0x00000010u; // 800C0B70
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800C0B74
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0B78
  c->r[0]=c->r[4]|0x000B0000u; // 800C0B7C
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0B80
  c->r[4]=c->r[5]+0xFFFF8000u; // 800C0B84
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 800C0B88
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 800C0B8C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 800C0B90
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 800C0B94
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 800C0B98
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,0,0);} // 800C0B9C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 800C0BA0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 800C0BA4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 800C0BA8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 800C0BAC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 800C0BB0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800C0BB4
  return; // 800C0BB8
}

// GXLoadNrmMtxImm
void f_800C0BBC(Ctx* __restrict c) {
  trace_call(0x800C0BBCu);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800C0BBC
  c->r[5]=0u+0xCC010000u; // 800C0BC0
  c->r[4]=c->r[0]-c->r[4]; // 800C0BC4
  c->r[0]=0u+0x00000010u; // 800C0BC8
  c->r[4]=c->r[4]+0x00000400u; // 800C0BCC
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0BD0
  c->r[0]=c->r[4]|0x00080000u; // 800C0BD4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0BD8
  c->r[4]=c->r[5]+0xFFFF8000u; // 800C0BDC
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 800C0BE0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C0BE4
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 800C0BE8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0BEC
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 800C0BF0
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0BF4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 800C0BF8
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[4]);} // 800C0BFC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 800C0C00
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[2]);} // 800C0C04
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 800C0C08
  {uint32_t ea=c->r[5]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800C0C0C
  return; // 800C0C10
}

// GXSetCurrentMtx
void f_800C0C14(Ctx* __restrict c) {
  trace_call(0x800C0C14u);
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800C0C14
  c->r[0]=R32(c->r[4]+0x00000080u); // 800C0C18
  c->r[0]=(rotl(c->r[3],0)&0x0000003Fu)|(c->r[0]&~0x0000003Fu); // 800C0C1C
  W32(c->r[4]+0x00000080u,c->r[0]); // 800C0C20
  c->r[0]=R32(c->r[4]+0x000005FCu); // 800C0C24
  c->r[0]=c->r[0]|0x04000000u; // 800C0C28
  W32(c->r[4]+0x000005FCu,c->r[0]); // 800C0C2C
  return; // 800C0C30
}

// GXLoadTexMtxImm
void f_800C0C34(Ctx* __restrict c) {
  trace_call(0x800C0C34u);
  cmpu(c,0,c->r[4],0x00000040u); // 800C0C34
  if (crb(c,0)) { goto L_800C0C4C; } // 800C0C38
  c->r[0]=c->r[4]+0xFFFFFFC0u; // 800C0C3C
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C0C40
  c->r[7]=c->r[4]+0x00000500u; // 800C0C44
  goto L_800C0C50; // 800C0C48
L_800C0C4C:;
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800C0C4C
L_800C0C50:;
  cmps(c,0,(int32_t)c->r[5],1); // 800C0C50
  if (!crb(c,2)) { goto L_800C0C60; } // 800C0C54
  c->r[4]=0u+0x00000008u; // 800C0C58
  goto L_800C0C64; // 800C0C5C
L_800C0C60:;
  c->r[4]=0u+0x0000000Cu; // 800C0C60
L_800C0C64:;
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 800C0C64
  c->r[4]=0u+0xCC010000u; // 800C0C68
  c->r[0]=0u+0x00000010u; // 800C0C6C
  cmps(c,0,(int32_t)c->r[5],0); // 800C0C70
  c->r[5]=rotl(c->r[6],16)&0xFFFF0000u; // 800C0C74
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C0C78
  c->r[0]=c->r[7]|c->r[5]; // 800C0C7C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C0C80
  if (!crb(c,2)) { goto L_800C0CC0; } // 800C0C84
  c->r[4]=c->r[4]+0xFFFF8000u; // 800C0C88
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 800C0C8C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,4,ea,0,0);} // 800C0C90
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,3,ea,0,0);} // 800C0C94
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,0,0);} // 800C0C98
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 800C0C9C
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,0,ea,0,0);} // 800C0CA0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 800C0CA4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 800C0CA8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 800C0CAC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 800C0CB0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 800C0CB4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800C0CB8
  return; // 800C0CBC
L_800C0CC0:;
  c->r[4]=c->r[4]+0xFFFF8000u; // 800C0CC0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,3,ea,0,0);} // 800C0CC4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,0,0);} // 800C0CC8
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,1,ea,0,0);} // 800C0CCC
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,0,ea,0,0);} // 800C0CD0
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,3,ea,0,0);} // 800C0CD4
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 800C0CD8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,1,ea,0,0);} // 800C0CDC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 800C0CE0
  return; // 800C0CE4
}

// __GXSetViewport
void f_800C0CE8(Ctx* __restrict c) {
  trace_call(0x800C0CE8u);
  c->r[6]=R32(c->r[2]+0xFFFF90C0u); // 800C0CE8
  c->r[3]=0u+0x00050000u; // 800C0CEC
  {uint32_t ea=c->r[2]+0xFFFF9164u; c->f[6]=c->ps1[6]=RF32(ea);} // 800C0CF0
  c->r[4]=0u+0xCC010000u; // 800C0CF4
  {uint32_t ea=c->r[6]+0x00000550u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0CF8
  c->r[5]=0u+0x00000010u; // 800C0CFC
  {uint32_t ea=c->r[6]+0x0000054Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800C0D00
  c->r[0]=c->r[3]+0x0000101Au; // 800C0D04
  c->f[1]=-c->f[2]; // 800C0D08
  {uint32_t ea=c->r[6]+0x00000544u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0D0C
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[6]); // 800C0D10
  {uint32_t ea=c->r[6]+0x00000548u; c->f[4]=c->ps1[4]=RF32(ea);} // 800C0D14
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[6]); // 800C0D18
  {uint32_t ea=c->r[6]+0x00000554u; c->f[3]=c->ps1[3]=RF32(ea);} // 800C0D1C
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[6]); // 800C0D20
  {uint32_t ea=c->r[6]+0x00000560u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0D24
  {uint32_t ea=c->r[6]+0x00000558u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C0D28
  c->f[6]=c->ps1[6]=S(c->f[0]+c->f[7]); // 800C0D2C
  {uint32_t ea=c->r[6]+0x0000055Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C0D30
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 800C0D34
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[2]); // 800C0D38
  W8(c->r[4]+0xFFFF8000u,c->r[5]); // 800C0D3C
  {uint32_t ea=c->r[2]+0xFFFF9168u; c->f[2]=c->ps1[2]=RF32(ea);} // 800C0D40
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[5]); // 800C0D44
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C0D48
  c->f[3]=c->ps1[3]=S(c->f[9]-c->f[3]); // 800C0D4C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[7]);} // 800C0D50
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[6]); // 800C0D54
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 800C0D58
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[8]);} // 800C0D5C
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[0]); // 800C0D60
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[3]);} // 800C0D64
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[4]);} // 800C0D68
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[1]);} // 800C0D6C
  {uint32_t ea=c->r[4]+0xFFFF8000u; WF32(ea,c->f[0]);} // 800C0D70
  return; // 800C0D74
}

// GXSetViewport
void f_800C0D78(Ctx* __restrict c) {
  trace_call(0x800C0D78u);
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800C0D78
  {uint32_t ea=c->r[3]+0x00000544u; WF32(ea,c->f[1]);} // 800C0D7C
  {uint32_t ea=c->r[3]+0x00000548u; WF32(ea,c->f[2]);} // 800C0D80
  {uint32_t ea=c->r[3]+0x0000054Cu; WF32(ea,c->f[3]);} // 800C0D84
  {uint32_t ea=c->r[3]+0x00000550u; WF32(ea,c->f[4]);} // 800C0D88
  {uint32_t ea=c->r[3]+0x00000554u; WF32(ea,c->f[5]);} // 800C0D8C
  {uint32_t ea=c->r[3]+0x00000558u; WF32(ea,c->f[6]);} // 800C0D90
  c->r[0]=R32(c->r[3]+0x000005FCu); // 800C0D94
  c->r[0]=c->r[0]|0x10000000u; // 800C0D98
  W32(c->r[3]+0x000005FCu,c->r[0]); // 800C0D9C
  return; // 800C0DA0
}

// fn_800C0DA4
void f_800C0DA4(Ctx* __restrict c) {
  c->r[8]=R32(c->r[2]+0xFFFF90C0u); // 800C0DA4
  c->r[4]=c->r[4]+0x00000156u; // 800C0DA8
  c->r[9]=c->r[3]+0x00000156u; // 800C0DAC
  c->r[7]=0u+0xCC010000u; // 800C0DB0
  c->r[0]=R32(c->r[8]+0x00000148u); // 800C0DB4
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 800C0DB8
  c->r[0]=(rotl(c->r[9],12)&0x007FF000u)|(c->r[0]&~0x007FF000u); // 800C0DBC
  c->r[6]=c->r[4]+c->r[6]; // 800C0DC0
  W32(c->r[8]+0x00000148u,c->r[0]); // 800C0DC4
  c->r[3]=c->r[9]+c->r[5]; // 800C0DC8
  c->r[5]=c->r[6]+0xFFFFFFFFu; // 800C0DCC
  c->r[4]=0u+0x00000061u; // 800C0DD0
  c->r[6]=R32(c->r[8]+0x0000014Cu); // 800C0DD4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800C0DD8
  c->r[6]=(rotl(c->r[5],0)&0x000007FFu)|(c->r[6]&~0x000007FFu); // 800C0DDC
  c->r[0]=0u+0x00000000u; // 800C0DE0
  c->r[6]=(rotl(c->r[3],12)&0x007FF000u)|(c->r[6]&~0x007FF000u); // 800C0DE4
  W32(c->r[8]+0x0000014Cu,c->r[6]); // 800C0DE8
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 800C0DEC
  c->r[3]=R32(c->r[8]+0x00000148u); // 800C0DF0
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 800C0DF4
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 800C0DF8
  c->r[3]=R32(c->r[8]+0x0000014Cu); // 800C0DFC
  W32(c->r[7]+0xFFFF8000u,c->r[3]); // 800C0E00
  W16(c->r[8]+0x00000002u,c->r[0]); // 800C0E04
  return; // 800C0E08
}

// GXSetScissorBoxOffset
void f_800C0E0C(Ctx* __restrict c) {
  trace_call(0x800C0E0Cu);
  c->r[0]=c->r[3]+0x00000156u; // 800C0E0C
  c->r[6]=0u+0x00000000u; // 800C0E10
  c->r[6]=(rotl(c->r[0],31)&0x000003FFu)|(c->r[6]&~0x000003FFu); // 800C0E14
  c->r[5]=0u+0xCC010000u; // 800C0E18
  c->r[0]=0u+0x00000061u; // 800C0E1C
  c->r[3]=c->r[4]+0x00000156u; // 800C0E20
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0E24
  c->r[6]=(rotl(c->r[3],9)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 800C0E28
  c->r[0]=0u+0x00000059u; // 800C0E2C
  c->r[3]=R32(c->r[2]+0xFFFF90C0u); // 800C0E30
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 800C0E34
  W32(c->r[5]+0xFFFF8000u,c->r[6]); // 800C0E38
  c->r[0]=0u+0x00000000u; // 800C0E3C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800C0E40
  return; // 800C0E44
}

// GXSetClipMode
void f_800C0E48(Ctx* __restrict c) {
  trace_call(0x800C0E48u);
  c->r[6]=0u+0xCC010000u; // 800C0E48
  c->r[0]=0u+0x00000010u; // 800C0E4C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C0E50
  c->r[5]=0u+0x00001005u; // 800C0E54
  c->r[4]=R32(c->r[2]+0xFFFF90C0u); // 800C0E58
  c->r[0]=0u+0x00000001u; // 800C0E5C
  W32(c->r[6]+0xFFFF8000u,c->r[5]); // 800C0E60
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800C0E64
  W16(c->r[4]+0x00000002u,c->r[0]); // 800C0E68
  return; // 800C0E6C
}

// __GXSetMatrixIndex
void f_800C0E70(Ctx* __restrict c) {
  trace_call(0x800C0E70u);
  cmps(c,0,(int32_t)c->r[3],5); // 800C0E70
  if (!crb(c,0)) { goto L_800C0EB4; } // 800C0E74
  c->r[5]=0u+0xCC010000u; // 800C0E78
  c->r[0]=0u+0x00000008u; // 800C0E7C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0E80
  c->r[0]=0u+0x00000030u; // 800C0E84
  c->r[6]=R32(c->r[2]+0xFFFF90C0u); // 800C0E88
  c->r[3]=0u+0x00000010u; // 800C0E8C
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0E90
  c->r[0]=0u+0x00001018u; // 800C0E94
  c->r[4]=R32(c->r[6]+0x00000080u); // 800C0E98
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800C0E9C
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 800C0EA0
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0EA4
  c->r[0]=R32(c->r[6]+0x00000080u); // 800C0EA8
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0EAC
  goto L_800C0EEC; // 800C0EB0
L_800C0EB4:;
  c->r[5]=0u+0xCC010000u; // 800C0EB4
  c->r[0]=0u+0x00000008u; // 800C0EB8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0EBC
  c->r[0]=0u+0x00000040u; // 800C0EC0
  c->r[6]=R32(c->r[2]+0xFFFF90C0u); // 800C0EC4
  c->r[3]=0u+0x00000010u; // 800C0EC8
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0ECC
  c->r[0]=0u+0x00001019u; // 800C0ED0
  c->r[4]=R32(c->r[6]+0x00000084u); // 800C0ED4
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 800C0ED8
  W8(c->r[5]+0xFFFF8000u,c->r[3]); // 800C0EDC
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0EE0
  c->r[0]=R32(c->r[6]+0x00000084u); // 800C0EE4
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 800C0EE8
L_800C0EEC:;
  c->r[0]=0u+0x00000001u; // 800C0EEC
  W16(c->r[6]+0x00000002u,c->r[0]); // 800C0EF0
  return; // 800C0EF4
}

// GXSetGPMetric
void f_800C0EF8(Ctx* __restrict c) {
  trace_call(0x800C0EF8u);
  c->r[5]=R32(c->r[2]+0xFFFF90C0u); // 800C0EF8
  c->r[0]=R32(c->r[5]+0x000005ECu); // 800C0EFC
  cmps(c,0,(int32_t)c->r[0],34); // 800C0F00
  if (crb(c,2)) { goto L_800C0F30; } // 800C0F04
  if (!crb(c,0)) { goto L_800C0F7C; } // 800C0F08
  cmps(c,0,(int32_t)c->r[0],11); // 800C0F0C
  if (!crb(c,0)) { goto L_800C0F20; } // 800C0F10
  cmps(c,0,(int32_t)c->r[0],0); // 800C0F14
  if (!crb(c,0)) { goto L_800C0F30; } // 800C0F18
  goto L_800C0F7C; // 800C0F1C
L_800C0F20:;
  cmps(c,0,(int32_t)c->r[0],27); // 800C0F20
  if (!crb(c,0)) { goto L_800C0F68; } // 800C0F24
  goto L_800C0F50; // 800C0F28
  goto L_800C0F7C; // 800C0F2C
L_800C0F30:;
  c->r[7]=0u+0xCC010000u; // 800C0F30
  c->r[0]=0u+0x00000010u; // 800C0F34
  W8(c->r[7]+0xFFFF8000u,c->r[0]); // 800C0F38
  c->r[6]=0u+0x00001006u; // 800C0F3C
  c->r[0]=0u+0x00000000u; // 800C0F40
  W32(c->r[7]+0xFFFF8000u,c->r[6]); // 800C0F44
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 800C0F48
  goto L_800C0F7C; // 800C0F4C
L_800C0F50:;
  c->r[6]=0u+0xCC010000u; // 800C0F50
  c->r[0]=0u+0x00000061u; // 800C0F54
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C0F58
  c->r[0]=0u+0x23000000u; // 800C0F5C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C0F60
  goto L_800C0F7C; // 800C0F64
L_800C0F68:;
  c->r[6]=0u+0xCC010000u; // 800C0F68
  c->r[0]=0u+0x00000061u; // 800C0F6C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C0F70
  c->r[0]=0u+0x24000000u; // 800C0F74
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C0F78
L_800C0F7C:;
  c->r[0]=R32(c->r[5]+0x000005F0u); // 800C0F7C
  cmps(c,0,(int32_t)c->r[0],21); // 800C0F80
  if (crb(c,2)) { goto L_800C0FB0; } // 800C0F84
  if (!crb(c,0)) { goto L_800C1000; } // 800C0F88
  cmps(c,0,(int32_t)c->r[0],9); // 800C0F8C
  if (!crb(c,0)) { goto L_800C0FA0; } // 800C0F90
  cmps(c,0,(int32_t)c->r[0],0); // 800C0F94
  if (!crb(c,0)) { goto L_800C0FB0; } // 800C0F98
  goto L_800C1000; // 800C0F9C
L_800C0FA0:;
  cmps(c,0,(int32_t)c->r[0],17); // 800C0FA0
  if (!crb(c,0)) { goto L_800C0FF4; } // 800C0FA4
  goto L_800C0FC8; // 800C0FA8
  goto L_800C1000; // 800C0FAC
L_800C0FB0:;
  c->r[6]=0u+0xCC010000u; // 800C0FB0
  c->r[0]=0u+0x00000061u; // 800C0FB4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C0FB8
  c->r[0]=0u+0x67000000u; // 800C0FBC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C0FC0
  goto L_800C1000; // 800C0FC4
L_800C0FC8:;
  c->r[8]=R32(c->r[5]+0x000005F4u); // 800C0FC8
  c->r[6]=0u+0xCC010000u; // 800C0FCC
  c->r[7]=0u+0x00000008u; // 800C0FD0
  c->r[0]=0u+0x00000020u; // 800C0FD4
  c->r[8]=rotl(c->r[8],0)&0xFFFFFF0Fu; // 800C0FD8
  W32(c->r[5]+0x000005F4u,c->r[8]); // 800C0FDC
  W8(c->r[6]+0xFFFF8000u,c->r[7]); // 800C0FE0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C0FE4
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800C0FE8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C0FEC
  goto L_800C1000; // 800C0FF0
L_800C0FF4:;
  c->r[6]=R32(c->r[13]+0xFFFFA45Cu); // 800C0FF4
  c->r[0]=0u+0x00000000u; // 800C0FF8
  W16(c->r[6]+0x00000006u,c->r[0]); // 800C0FFC
L_800C1000:;
  cmpu(c,0,c->r[3],0x00000023u); // 800C1000
  W32(c->r[5]+0x000005ECu,c->r[3]); // 800C1004
  if (crb(c,1)) { goto L_800C1424; } // 800C1008
  c->r[6]=0u+0x80220000u; // 800C100C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C1010
  c->r[6]=c->r[6]+0xFFFFB87Cu; // 800C1014
  c->r[6]=R32(c->r[6]+c->r[0]); // 800C1018
  c->ctr=c->r[6]; // 800C101C
  if (true) { switch (c->ctr) { case 0x800C1024u: goto L_800C1024; case 0x800C1044u: goto L_800C1044; case 0x800C1064u: goto L_800C1064; case 0x800C1084u: goto L_800C1084; case 0x800C10A4u: goto L_800C10A4; case 0x800C10C4u: goto L_800C10C4; case 0x800C10E4u: goto L_800C10E4; case 0x800C1104u: goto L_800C1104; case 0x800C1124u: goto L_800C1124; case 0x800C1144u: goto L_800C1144; case 0x800C1164u: goto L_800C1164; case 0x800C1184u: goto L_800C1184; case 0x800C11A4u: goto L_800C11A4; case 0x800C11C0u: goto L_800C11C0; case 0x800C11DCu: goto L_800C11DC; case 0x800C11F8u: goto L_800C11F8; case 0x800C1214u: goto L_800C1214; case 0x800C1230u: goto L_800C1230; case 0x800C124Cu: goto L_800C124C; case 0x800C1268u: goto L_800C1268; case 0x800C1284u: goto L_800C1284; case 0x800C12A0u: goto L_800C12A0; case 0x800C12BCu: goto L_800C12BC; case 0x800C12D8u: goto L_800C12D8; case 0x800C12F4u: goto L_800C12F4; case 0x800C1310u: goto L_800C1310; case 0x800C132Cu: goto L_800C132C; case 0x800C1348u: goto L_800C1348; case 0x800C1364u: goto L_800C1364; case 0x800C1380u: goto L_800C1380; case 0x800C139Cu: goto L_800C139C; case 0x800C13B8u: goto L_800C13B8; case 0x800C13D4u: goto L_800C13D4; case 0x800C13F0u: goto L_800C13F0; case 0x800C140Cu: goto L_800C140C; case 0x800C1424u: goto L_800C1424; case 0x800C1448u: goto L_800C1448; case 0x800C1464u: goto L_800C1464; case 0x800C1480u: goto L_800C1480; case 0x800C149Cu: goto L_800C149C; case 0x800C14B8u: goto L_800C14B8; case 0x800C14D4u: goto L_800C14D4; case 0x800C14F0u: goto L_800C14F0; case 0x800C150Cu: goto L_800C150C; case 0x800C1528u: goto L_800C1528; case 0x800C1544u: goto L_800C1544; case 0x800C1560u: goto L_800C1560; case 0x800C1590u: goto L_800C1590; case 0x800C15C0u: goto L_800C15C0; case 0x800C15F0u: goto L_800C15F0; case 0x800C1620u: goto L_800C1620; case 0x800C1650u: goto L_800C1650; case 0x800C1680u: goto L_800C1680; case 0x800C16B0u: goto L_800C16B0; case 0x800C16DCu: goto L_800C16DC; case 0x800C16ECu: goto L_800C16EC; case 0x800C16FCu: goto L_800C16FC; case 0x800C170Cu: goto L_800C170C; case 0x800C1718u: goto L_800C1718; default: break; } dispatch(c,c->ctr); return; } // 800C1020
L_800C1024:;
  c->r[6]=0u+0xCC010000u; // 800C1024
  c->r[0]=0u+0x00000010u; // 800C1028
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C102C
  c->r[3]=0u+0x00001006u; // 800C1030
  c->r[0]=0u+0x00000273u; // 800C1034
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800C1038
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C103C
  goto L_800C1424; // 800C1040
L_800C1044:;
  c->r[6]=0u+0xCC010000u; // 800C1044
  c->r[0]=0u+0x00000010u; // 800C1048
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C104C
  c->r[3]=0u+0x00001006u; // 800C1050
  c->r[0]=0u+0x0000014Au; // 800C1054
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800C1058
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C105C
  goto L_800C1424; // 800C1060
L_800C1064:;
  c->r[6]=0u+0xCC010000u; // 800C1064
  c->r[0]=0u+0x00000010u; // 800C1068
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C106C
  c->r[3]=0u+0x00001006u; // 800C1070
  c->r[0]=0u+0x0000016Bu; // 800C1074
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800C1078
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C107C
  goto L_800C1424; // 800C1080
L_800C1084:;
  c->r[6]=0u+0xCC010000u; // 800C1084
  c->r[0]=0u+0x00000010u; // 800C1088
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C108C
  c->r[3]=0u+0x00001006u; // 800C1090
  c->r[0]=0u+0x00000084u; // 800C1094
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800C1098
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C109C
  goto L_800C1424; // 800C10A0
L_800C10A4:;
  c->r[6]=0u+0xCC010000u; // 800C10A4
  c->r[0]=0u+0x00000010u; // 800C10A8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C10AC
  c->r[3]=0u+0x00001006u; // 800C10B0
  c->r[0]=0u+0x000000C6u; // 800C10B4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800C10B8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C10BC
  goto L_800C1424; // 800C10C0
L_800C10C4:;
  c->r[6]=0u+0xCC010000u; // 800C10C4
  c->r[0]=0u+0x00000010u; // 800C10C8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C10CC
  c->r[3]=0u+0x00001006u; // 800C10D0
  c->r[0]=0u+0x00000210u; // 800C10D4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800C10D8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C10DC
  goto L_800C1424; // 800C10E0
L_800C10E4:;
  c->r[6]=0u+0xCC010000u; // 800C10E4
  c->r[0]=0u+0x00000010u; // 800C10E8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C10EC
  c->r[3]=0u+0x00001006u; // 800C10F0
  c->r[0]=0u+0x00000252u; // 800C10F4
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800C10F8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C10FC
  goto L_800C1424; // 800C1100
L_800C1104:;
  c->r[6]=0u+0xCC010000u; // 800C1104
  c->r[0]=0u+0x00000010u; // 800C1108
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C110C
  c->r[3]=0u+0x00001006u; // 800C1110
  c->r[0]=0u+0x00000231u; // 800C1114
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800C1118
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C111C
  goto L_800C1424; // 800C1120
L_800C1124:;
  c->r[6]=0u+0xCC010000u; // 800C1124
  c->r[0]=0u+0x00000010u; // 800C1128
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C112C
  c->r[3]=0u+0x00001006u; // 800C1130
  c->r[0]=0u+0x000001ADu; // 800C1134
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800C1138
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C113C
  goto L_800C1424; // 800C1140
L_800C1144:;
  c->r[6]=0u+0xCC010000u; // 800C1144
  c->r[0]=0u+0x00000010u; // 800C1148
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C114C
  c->r[3]=0u+0x00001006u; // 800C1150
  c->r[0]=0u+0x000001CEu; // 800C1154
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800C1158
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C115C
  goto L_800C1424; // 800C1160
L_800C1164:;
  c->r[6]=0u+0xCC010000u; // 800C1164
  c->r[0]=0u+0x00000010u; // 800C1168
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C116C
  c->r[3]=0u+0x00001006u; // 800C1170
  c->r[0]=0u+0x00000021u; // 800C1174
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800C1178
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C117C
  goto L_800C1424; // 800C1180
L_800C1184:;
  c->r[6]=0u+0xCC010000u; // 800C1184
  c->r[0]=0u+0x00000010u; // 800C1188
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C118C
  c->r[3]=0u+0x00001006u; // 800C1190
  c->r[0]=0u+0x00000153u; // 800C1194
  W32(c->r[6]+0xFFFF8000u,c->r[3]); // 800C1198
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C119C
  goto L_800C1424; // 800C11A0
L_800C11A4:;
  c->r[6]=0u+0xCC010000u; // 800C11A4
  c->r[0]=0u+0x00000061u; // 800C11A8
  c->r[3]=0u+0x23010000u; // 800C11AC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C11B0
  c->r[0]=c->r[3]+0xFFFFAE7Fu; // 800C11B4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C11B8
  goto L_800C1424; // 800C11BC
L_800C11C0:;
  c->r[6]=0u+0xCC010000u; // 800C11C0
  c->r[0]=0u+0x00000061u; // 800C11C4
  c->r[3]=0u+0x23010000u; // 800C11C8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C11CC
  c->r[0]=c->r[3]+0xFFFF8E7Fu; // 800C11D0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C11D4
  goto L_800C1424; // 800C11D8
L_800C11DC:;
  c->r[6]=0u+0xCC010000u; // 800C11DC
  c->r[0]=0u+0x00000061u; // 800C11E0
  c->r[3]=0u+0x23010000u; // 800C11E4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C11E8
  c->r[0]=c->r[3]+0xFFFF9E7Fu; // 800C11EC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C11F0
  goto L_800C1424; // 800C11F4
L_800C11F8:;
  c->r[6]=0u+0xCC010000u; // 800C11F8
  c->r[0]=0u+0x00000061u; // 800C11FC
  c->r[3]=0u+0x23000000u; // 800C1200
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1204
  c->r[0]=c->r[3]+0x00001E7Fu; // 800C1208
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C120C
  goto L_800C1424; // 800C1210
L_800C1214:;
  c->r[6]=0u+0xCC010000u; // 800C1214
  c->r[0]=0u+0x00000061u; // 800C1218
  c->r[3]=0u+0x23010000u; // 800C121C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1220
  c->r[0]=c->r[3]+0xFFFFAC3Fu; // 800C1224
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1228
  goto L_800C1424; // 800C122C
L_800C1230:;
  c->r[6]=0u+0xCC010000u; // 800C1230
  c->r[0]=0u+0x00000061u; // 800C1234
  c->r[3]=0u+0x23010000u; // 800C1238
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C123C
  c->r[0]=c->r[3]+0xFFFFAC7Fu; // 800C1240
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1244
  goto L_800C1424; // 800C1248
L_800C124C:;
  c->r[6]=0u+0xCC010000u; // 800C124C
  c->r[0]=0u+0x00000061u; // 800C1250
  c->r[3]=0u+0x23010000u; // 800C1254
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1258
  c->r[0]=c->r[3]+0xFFFFACBFu; // 800C125C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1260
  goto L_800C1424; // 800C1264
L_800C1268:;
  c->r[6]=0u+0xCC010000u; // 800C1268
  c->r[0]=0u+0x00000061u; // 800C126C
  c->r[3]=0u+0x23010000u; // 800C1270
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1274
  c->r[0]=c->r[3]+0xFFFFACFFu; // 800C1278
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C127C
  goto L_800C1424; // 800C1280
L_800C1284:;
  c->r[6]=0u+0xCC010000u; // 800C1284
  c->r[0]=0u+0x00000061u; // 800C1288
  c->r[3]=0u+0x23010000u; // 800C128C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1290
  c->r[0]=c->r[3]+0xFFFFAD3Fu; // 800C1294
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1298
  goto L_800C1424; // 800C129C
L_800C12A0:;
  c->r[6]=0u+0xCC010000u; // 800C12A0
  c->r[0]=0u+0x00000061u; // 800C12A4
  c->r[3]=0u+0x23010000u; // 800C12A8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C12AC
  c->r[0]=c->r[3]+0xFFFFAD7Fu; // 800C12B0
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C12B4
  goto L_800C1424; // 800C12B8
L_800C12BC:;
  c->r[6]=0u+0xCC010000u; // 800C12BC
  c->r[0]=0u+0x00000061u; // 800C12C0
  c->r[3]=0u+0x23010000u; // 800C12C4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C12C8
  c->r[0]=c->r[3]+0xFFFFADBFu; // 800C12CC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C12D0
  goto L_800C1424; // 800C12D4
L_800C12D8:;
  c->r[6]=0u+0xCC010000u; // 800C12D8
  c->r[0]=0u+0x00000061u; // 800C12DC
  c->r[3]=0u+0x23010000u; // 800C12E0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C12E4
  c->r[0]=c->r[3]+0xFFFFADFFu; // 800C12E8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C12EC
  goto L_800C1424; // 800C12F0
L_800C12F4:;
  c->r[6]=0u+0xCC010000u; // 800C12F4
  c->r[0]=0u+0x00000061u; // 800C12F8
  c->r[3]=0u+0x23010000u; // 800C12FC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1300
  c->r[0]=c->r[3]+0xFFFFAE3Fu; // 800C1304
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1308
  goto L_800C1424; // 800C130C
L_800C1310:;
  c->r[6]=0u+0xCC010000u; // 800C1310
  c->r[0]=0u+0x00000061u; // 800C1314
  c->r[3]=0u+0x23010000u; // 800C1318
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C131C
  c->r[0]=c->r[3]+0xFFFFA27Fu; // 800C1320
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1324
  goto L_800C1424; // 800C1328
L_800C132C:;
  c->r[6]=0u+0xCC010000u; // 800C132C
  c->r[0]=0u+0x00000061u; // 800C1330
  c->r[3]=0u+0x23010000u; // 800C1334
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1338
  c->r[0]=c->r[3]+0xFFFFA67Fu; // 800C133C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1340
  goto L_800C1424; // 800C1344
L_800C1348:;
  c->r[6]=0u+0xCC010000u; // 800C1348
  c->r[0]=0u+0x00000061u; // 800C134C
  c->r[3]=0u+0x23010000u; // 800C1350
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1354
  c->r[0]=c->r[3]+0xFFFFAA7Fu; // 800C1358
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C135C
  goto L_800C1424; // 800C1360
L_800C1364:;
  c->r[6]=0u+0xCC010000u; // 800C1364
  c->r[0]=0u+0x00000061u; // 800C1368
  c->r[3]=0u+0x24030000u; // 800C136C
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1370
  c->r[0]=c->r[3]+0xFFFFC0C6u; // 800C1374
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1378
  goto L_800C1424; // 800C137C
L_800C1380:;
  c->r[6]=0u+0xCC010000u; // 800C1380
  c->r[0]=0u+0x00000061u; // 800C1384
  c->r[3]=0u+0x24030000u; // 800C1388
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C138C
  c->r[0]=c->r[3]+0xFFFFC16Bu; // 800C1390
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1394
  goto L_800C1424; // 800C1398
L_800C139C:;
  c->r[6]=0u+0xCC010000u; // 800C139C
  c->r[0]=0u+0x00000061u; // 800C13A0
  c->r[3]=0u+0x24030000u; // 800C13A4
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C13A8
  c->r[0]=c->r[3]+0xFFFFC0E7u; // 800C13AC
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C13B0
  goto L_800C1424; // 800C13B4
L_800C13B8:;
  c->r[6]=0u+0xCC010000u; // 800C13B8
  c->r[0]=0u+0x00000061u; // 800C13BC
  c->r[3]=0u+0x24030000u; // 800C13C0
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C13C4
  c->r[0]=c->r[3]+0xFFFFC108u; // 800C13C8
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C13CC
  goto L_800C1424; // 800C13D0
L_800C13D4:;
  c->r[6]=0u+0xCC010000u; // 800C13D4
  c->r[0]=0u+0x00000061u; // 800C13D8
  c->r[3]=0u+0x24030000u; // 800C13DC
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C13E0
  c->r[0]=c->r[3]+0xFFFFC129u; // 800C13E4
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C13E8
  goto L_800C1424; // 800C13EC
L_800C13F0:;
  c->r[6]=0u+0xCC010000u; // 800C13F0
  c->r[0]=0u+0x00000061u; // 800C13F4
  c->r[3]=0u+0x24030000u; // 800C13F8
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C13FC
  c->r[0]=c->r[3]+0xFFFFC14Au; // 800C1400
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1404
  goto L_800C1424; // 800C1408
L_800C140C:;
  c->r[6]=0u+0xCC010000u; // 800C140C
  c->r[0]=0u+0x00000061u; // 800C1410
  c->r[3]=0u+0x24030000u; // 800C1414
  W8(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1418
  c->r[0]=c->r[3]+0xFFFFC1ADu; // 800C141C
  W32(c->r[6]+0xFFFF8000u,c->r[0]); // 800C1420
L_800C1424:;
  cmpu(c,0,c->r[4],0x00000016u); // 800C1424
  W32(c->r[5]+0x000005F0u,c->r[4]); // 800C1428
  if (crb(c,1)) { goto L_800C1718; } // 800C142C
  c->r[3]=0u+0x80220000u; // 800C1430
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800C1434
  c->r[3]=c->r[3]+0xFFFFB820u; // 800C1438
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C143C
  c->ctr=c->r[3]; // 800C1440
  if (true) { switch (c->ctr) { case 0x800C1024u: goto L_800C1024; case 0x800C1044u: goto L_800C1044; case 0x800C1064u: goto L_800C1064; case 0x800C1084u: goto L_800C1084; case 0x800C10A4u: goto L_800C10A4; case 0x800C10C4u: goto L_800C10C4; case 0x800C10E4u: goto L_800C10E4; case 0x800C1104u: goto L_800C1104; case 0x800C1124u: goto L_800C1124; case 0x800C1144u: goto L_800C1144; case 0x800C1164u: goto L_800C1164; case 0x800C1184u: goto L_800C1184; case 0x800C11A4u: goto L_800C11A4; case 0x800C11C0u: goto L_800C11C0; case 0x800C11DCu: goto L_800C11DC; case 0x800C11F8u: goto L_800C11F8; case 0x800C1214u: goto L_800C1214; case 0x800C1230u: goto L_800C1230; case 0x800C124Cu: goto L_800C124C; case 0x800C1268u: goto L_800C1268; case 0x800C1284u: goto L_800C1284; case 0x800C12A0u: goto L_800C12A0; case 0x800C12BCu: goto L_800C12BC; case 0x800C12D8u: goto L_800C12D8; case 0x800C12F4u: goto L_800C12F4; case 0x800C1310u: goto L_800C1310; case 0x800C132Cu: goto L_800C132C; case 0x800C1348u: goto L_800C1348; case 0x800C1364u: goto L_800C1364; case 0x800C1380u: goto L_800C1380; case 0x800C139Cu: goto L_800C139C; case 0x800C13B8u: goto L_800C13B8; case 0x800C13D4u: goto L_800C13D4; case 0x800C13F0u: goto L_800C13F0; case 0x800C140Cu: goto L_800C140C; case 0x800C1424u: goto L_800C1424; case 0x800C1448u: goto L_800C1448; case 0x800C1464u: goto L_800C1464; case 0x800C1480u: goto L_800C1480; case 0x800C149Cu: goto L_800C149C; case 0x800C14B8u: goto L_800C14B8; case 0x800C14D4u: goto L_800C14D4; case 0x800C14F0u: goto L_800C14F0; case 0x800C150Cu: goto L_800C150C; case 0x800C1528u: goto L_800C1528; case 0x800C1544u: goto L_800C1544; case 0x800C1560u: goto L_800C1560; case 0x800C1590u: goto L_800C1590; case 0x800C15C0u: goto L_800C15C0; case 0x800C15F0u: goto L_800C15F0; case 0x800C1620u: goto L_800C1620; case 0x800C1650u: goto L_800C1650; case 0x800C1680u: goto L_800C1680; case 0x800C16B0u: goto L_800C16B0; case 0x800C16DCu: goto L_800C16DC; case 0x800C16ECu: goto L_800C16EC; case 0x800C16FCu: goto L_800C16FC; case 0x800C170Cu: goto L_800C170C; case 0x800C1718u: goto L_800C1718; default: break; } dispatch(c,c->ctr); return; } // 800C1444
L_800C1448:;
  c->r[4]=0u+0xCC010000u; // 800C1448
  c->r[0]=0u+0x00000061u; // 800C144C
  c->r[3]=0u+0x67000000u; // 800C1450
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C1454
  c->r[0]=c->r[3]+0x00000042u; // 800C1458
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C145C
  goto L_800C1718; // 800C1460
L_800C1464:;
  c->r[4]=0u+0xCC010000u; // 800C1464
  c->r[0]=0u+0x00000061u; // 800C1468
  c->r[3]=0u+0x67000000u; // 800C146C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C1470
  c->r[0]=c->r[3]+0x00000084u; // 800C1474
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C1478
  goto L_800C1718; // 800C147C
L_800C1480:;
  c->r[4]=0u+0xCC010000u; // 800C1480
  c->r[0]=0u+0x00000061u; // 800C1484
  c->r[3]=0u+0x67000000u; // 800C1488
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C148C
  c->r[0]=c->r[3]+0x00000063u; // 800C1490
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C1494
  goto L_800C1718; // 800C1498
L_800C149C:;
  c->r[4]=0u+0xCC010000u; // 800C149C
  c->r[0]=0u+0x00000061u; // 800C14A0
  c->r[3]=0u+0x67000000u; // 800C14A4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C14A8
  c->r[0]=c->r[3]+0x00000129u; // 800C14AC
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C14B0
  goto L_800C1718; // 800C14B4
L_800C14B8:;
  c->r[4]=0u+0xCC010000u; // 800C14B8
  c->r[0]=0u+0x00000061u; // 800C14BC
  c->r[3]=0u+0x67000000u; // 800C14C0
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C14C4
  c->r[0]=c->r[3]+0x00000252u; // 800C14C8
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C14CC
  goto L_800C1718; // 800C14D0
L_800C14D4:;
  c->r[4]=0u+0xCC010000u; // 800C14D4
  c->r[0]=0u+0x00000061u; // 800C14D8
  c->r[3]=0u+0x67000000u; // 800C14DC
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C14E0
  c->r[0]=c->r[3]+0x00000021u; // 800C14E4
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C14E8
  goto L_800C1718; // 800C14EC
L_800C14F0:;
  c->r[4]=0u+0xCC010000u; // 800C14F0
  c->r[0]=0u+0x00000061u; // 800C14F4
  c->r[3]=0u+0x67000000u; // 800C14F8
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C14FC
  c->r[0]=c->r[3]+0x0000014Bu; // 800C1500
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C1504
  goto L_800C1718; // 800C1508
L_800C150C:;
  c->r[4]=0u+0xCC010000u; // 800C150C
  c->r[0]=0u+0x00000061u; // 800C1510
  c->r[3]=0u+0x67000000u; // 800C1514
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C1518
  c->r[0]=c->r[3]+0x0000018Du; // 800C151C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C1520
  goto L_800C1718; // 800C1524
L_800C1528:;
  c->r[4]=0u+0xCC010000u; // 800C1528
  c->r[0]=0u+0x00000061u; // 800C152C
  c->r[3]=0u+0x67000000u; // 800C1530
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C1534
  c->r[0]=c->r[3]+0x000001CFu; // 800C1538
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C153C
  goto L_800C1718; // 800C1540
L_800C1544:;
  c->r[4]=0u+0xCC010000u; // 800C1544
  c->r[0]=0u+0x00000061u; // 800C1548
  c->r[3]=0u+0x67000000u; // 800C154C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 800C1550
  c->r[0]=c->r[3]+0x00000211u; // 800C1554
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 800C1558
  goto L_800C1718; // 800C155C
L_800C1560:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 800C1560
  c->r[0]=0u+0x00000002u; // 800C1564
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 800C1568
  c->r[3]=0u+0xCC010000u; // 800C156C
  W32(c->r[5]+0x000005F4u,c->r[4]); // 800C1570
  c->r[4]=0u+0x00000008u; // 800C1574
  c->r[0]=0u+0x00000020u; // 800C1578
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800C157C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800C1580
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800C1584
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800C1588
  goto L_800C1718; // 800C158C
L_800C1590:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 800C1590
  c->r[0]=0u+0x00000003u; // 800C1594
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 800C1598
  c->r[3]=0u+0xCC010000u; // 800C159C
  W32(c->r[5]+0x000005F4u,c->r[4]); // 800C15A0
  c->r[4]=0u+0x00000008u; // 800C15A4
  c->r[0]=0u+0x00000020u; // 800C15A8
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800C15AC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800C15B0
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800C15B4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800C15B8
  goto L_800C1718; // 800C15BC
L_800C15C0:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 800C15C0
  c->r[0]=0u+0x00000004u; // 800C15C4
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 800C15C8
  c->r[3]=0u+0xCC010000u; // 800C15CC
  W32(c->r[5]+0x000005F4u,c->r[4]); // 800C15D0
  c->r[4]=0u+0x00000008u; // 800C15D4
  c->r[0]=0u+0x00000020u; // 800C15D8
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800C15DC
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800C15E0
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800C15E4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800C15E8
  goto L_800C1718; // 800C15EC
L_800C15F0:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 800C15F0
  c->r[0]=0u+0x00000005u; // 800C15F4
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 800C15F8
  c->r[3]=0u+0xCC010000u; // 800C15FC
  W32(c->r[5]+0x000005F4u,c->r[4]); // 800C1600
  c->r[4]=0u+0x00000008u; // 800C1604
  c->r[0]=0u+0x00000020u; // 800C1608
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800C160C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800C1610
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800C1614
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800C1618
  goto L_800C1718; // 800C161C
L_800C1620:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 800C1620
  c->r[0]=0u+0x00000006u; // 800C1624
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 800C1628
  c->r[3]=0u+0xCC010000u; // 800C162C
  W32(c->r[5]+0x000005F4u,c->r[4]); // 800C1630
  c->r[4]=0u+0x00000008u; // 800C1634
  c->r[0]=0u+0x00000020u; // 800C1638
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800C163C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800C1640
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800C1644
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800C1648
  goto L_800C1718; // 800C164C
L_800C1650:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 800C1650
  c->r[0]=0u+0x00000007u; // 800C1654
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 800C1658
  c->r[3]=0u+0xCC010000u; // 800C165C
  W32(c->r[5]+0x000005F4u,c->r[4]); // 800C1660
  c->r[4]=0u+0x00000008u; // 800C1664
  c->r[0]=0u+0x00000020u; // 800C1668
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800C166C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800C1670
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800C1674
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800C1678
  goto L_800C1718; // 800C167C
L_800C1680:;
  c->r[4]=R32(c->r[5]+0x000005F4u); // 800C1680
  c->r[0]=0u+0x00000009u; // 800C1684
  c->r[4]=(rotl(c->r[0],4)&0x000000F0u)|(c->r[4]&~0x000000F0u); // 800C1688
  c->r[3]=0u+0xCC010000u; // 800C168C
  W32(c->r[5]+0x000005F4u,c->r[4]); // 800C1690
  c->r[4]=0u+0x00000008u; // 800C1694
  c->r[0]=0u+0x00000020u; // 800C1698
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800C169C
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800C16A0
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800C16A4
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800C16A8
  goto L_800C1718; // 800C16AC
L_800C16B0:;
  c->r[4]=0u+0x00000008u; // 800C16B0
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800C16B4
  c->r[0]=(rotl(c->r[4],4)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 800C16B8
  c->r[3]=0u+0xCC010000u; // 800C16BC
  W32(c->r[5]+0x000005F4u,c->r[0]); // 800C16C0
  c->r[0]=0u+0x00000020u; // 800C16C4
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 800C16C8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 800C16CC
  c->r[0]=R32(c->r[5]+0x000005F4u); // 800C16D0
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 800C16D4
  goto L_800C1718; // 800C16D8
L_800C16DC:;
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800C16DC
  c->r[0]=0u+0x00000002u; // 800C16E0
  W16(c->r[3]+0x00000006u,c->r[0]); // 800C16E4
  goto L_800C1718; // 800C16E8
L_800C16EC:;
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800C16EC
  c->r[0]=0u+0x00000003u; // 800C16F0
  W16(c->r[3]+0x00000006u,c->r[0]); // 800C16F4
  goto L_800C1718; // 800C16F8
L_800C16FC:;
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800C16FC
  c->r[0]=0u+0x00000004u; // 800C1700
  W16(c->r[3]+0x00000006u,c->r[0]); // 800C1704
  goto L_800C1718; // 800C1708
L_800C170C:;
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800C170C
  c->r[0]=0u+0x00000005u; // 800C1710
  W16(c->r[3]+0x00000006u,c->r[0]); // 800C1714
L_800C1718:;
  c->r[0]=0u+0x00000000u; // 800C1718
  W16(c->r[5]+0x00000002u,c->r[0]); // 800C171C
  return; // 800C1720
}

// GXClearGPMetric
void f_800C1724(Ctx* __restrict c) {
  trace_call(0x800C1724u);
  c->r[3]=R32(c->r[13]+0xFFFFA45Cu); // 800C1724
  c->r[0]=0u+0x00000004u; // 800C1728
  W16(c->r[3]+0x00000004u,c->r[0]); // 800C172C
  return; // 800C1730
}

// strlen
void f_800C1734(Ctx* __restrict c) {
  trace_call(0x800C1734u);
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 800C1734
  c->r[3]=0u+0xFFFFFFFFu; // 800C1738
L_800C173C:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800C173C
  c->r[3]=c->r[3]+0x00000001u; // 800C1740
  cmps(c,0,(int32_t)c->r[0],0); // 800C1744
  if (!crb(c,2)) { IRQCHK(c); goto L_800C173C; } // 800C1748
  return; // 800C174C
}

// __va_arg
void f_800C1750(Ctx* __restrict c) {
  trace_call(0x800C1750u);
  c->r[7]=R8(c->r[3]+0x00000000u); // 800C1750
  cmps(c,0,(int32_t)c->r[4],3); // 800C1754
  c->r[6]=c->r[3]|c->r[3]; // 800C1758
  c->r[0]=0u+0x00000008u; // 800C175C
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800C1760
  c->r[8]=0u+0x00000004u; // 800C1764
  c->r[9]=0u+0x00000001u; // 800C1768
  c->r[5]=0u+0x00000000u; // 800C176C
  c->r[10]=0u+0x00000000u; // 800C1770
  c->r[11]=0u+0x00000004u; // 800C1774
  if (!crb(c,2)) { goto L_800C1794; } // 800C1778
  c->r[7]=R8(c->r[3]+0x00000001u); // 800C177C
  c->r[6]=c->r[3]+0x00000001u; // 800C1780
  c->r[8]=0u+0x00000008u; // 800C1784
  c->r[10]=0u+0x00000020u; // 800C1788
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800C178C
  c->r[11]=0u+0x00000008u; // 800C1790
L_800C1794:;
  cmps(c,0,(int32_t)c->r[4],2); // 800C1794
  if (!crb(c,2)) { goto L_800C17B4; } // 800C1798
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 800C179C
  c->r[8]=0u+0x00000008u; // 800C17A0
  c->r[0]=0u+0x00000007u; // 800C17A4
  if (crb(c,2)) { goto L_800C17B0; } // 800C17A8
  c->r[5]=0u+0x00000001u; // 800C17AC
L_800C17B0:;
  c->r[9]=0u+0x00000002u; // 800C17B0
L_800C17B4:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800C17B4
  if (!crb(c,0)) { goto L_800C17DC; } // 800C17B8
  c->r[7]=c->r[7]+c->r[5]; // 800C17BC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C17C0
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[11]); // 800C17C4
  c->r[0]=c->r[7]+c->r[9]; // 800C17C8
  c->r[3]=c->r[3]+c->r[10]; // 800C17CC
  W8(c->r[6]+0x00000000u,c->r[0]); // 800C17D0
  c->r[5]=c->r[5]+c->r[3]; // 800C17D4
  goto L_800C1804; // 800C17D8
L_800C17DC:;
  c->r[5]=0u+0x00000008u; // 800C17DC
  c->r[0]=c->r[8]+0xFFFFFFFFu; // 800C17E0
  W8(c->r[6]+0x00000000u,c->r[5]); // 800C17E4
  c->r[6]=~(c->r[0]|c->r[0]); // 800C17E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C17EC
  c->r[5]=c->r[8]+c->r[0]; // 800C17F0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800C17F4
  c->r[5]=c->r[6]&c->r[0]; // 800C17F8
  c->r[0]=c->r[5]+c->r[8]; // 800C17FC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C1800
L_800C1804:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C1804
  if (!crb(c,2)) { goto L_800C1810; } // 800C1808
  c->r[5]=R32(c->r[5]+0x00000000u); // 800C180C
L_800C1810:;
  c->r[3]=c->r[5]|c->r[5]; // 800C1810
  return; // 800C1814
}

// __register_global_object
void f_800C1818(Ctx* __restrict c) {
  trace_call(0x800C1818u);
  c->r[0]=R32(c->r[13]+0xFFFFA4B8u); // 800C1818
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C181C
  W32(c->r[5]+0x00000004u,c->r[4]); // 800C1820
  W32(c->r[5]+0x00000008u,c->r[3]); // 800C1824
  W32(c->r[13]+0xFFFFA4B8u,c->r[5]); // 800C1828
  return; // 800C182C
}

// __destroy_global_chain
void f_800C1830(Ctx* __restrict c) {
  trace_call(0x800C1830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1830
  c->r[0]=c->lr; // 800C1834
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C1838
  goto L_800C185C; // 800C183C
L_800C1840:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C1840
  c->r[4]=0u+0xFFFFFFFFu; // 800C1844
  W32(c->r[13]+0xFFFFA4B8u,c->r[0]); // 800C1848
  c->r[12]=R32(c->r[3]+0x00000004u); // 800C184C
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C1850
  c->ctr=c->r[12]; // 800C1854
  if (true) { c->lr=0x800C185Cu; dispatch(c,c->ctr); } // 800C1858
L_800C185C:;
  c->r[3]=R32(c->r[13]+0xFFFFA4B8u); // 800C185C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1860
  if (!crb(c,2)) { IRQCHK(c); goto L_800C1840; } // 800C1864
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C1868
  c->lr=c->r[0]; // 800C186C
  c->r[1]=c->r[1]+0x00000010u; // 800C1870
  return; // 800C1874
}

// fn_800C1878
void f_800C1878(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1878
  c->r[0]=c->lr; // 800C187C
  cmps(c,0,(int32_t)c->r[3],0); // 800C1880
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C1884
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C1888
  c->r[31]=c->r[1]|c->r[1]; // 800C188C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800C1890
  c->r[30]=c->r[3]|c->r[3]; // 800C1894
  if (!crb(c,2)) { goto L_800C18A0; } // 800C1898
  c->r[30]=0u+0x00000004u; // 800C189C
L_800C18A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800C18A0
  c->lr=0x800C18A8u; f_800C4BF4(c); // 800C18A4
  cmps(c,0,(int32_t)c->r[3],0); // 800C18A8
  if (!crb(c,2)) { goto L_800C1900; } // 800C18AC
  c->r[12]=R32(c->r[13]+0xFFFFA4C0u); // 800C18B0
  cmps(c,0,(int32_t)c->r[12],0); // 800C18B4
  if (crb(c,2)) { goto L_800C18C8; } // 800C18B8
  c->ctr=c->r[12]; // 800C18BC
  if (true) { c->lr=0x800C18C4u; dispatch(c,c->ctr); } // 800C18C0
  IRQCHK(c); goto L_800C18A0; // 800C18C4
L_800C18C8:;
  c->r[4]=0u+0x80220000u; // 800C18C8
  c->r[3]=0u+0x801F0000u; // 800C18CC
  c->r[4]=c->r[4]+0xFFFFB910u; // 800C18D0
  c->r[5]=0u+0x800C0000u; // 800C18D4
  W32(c->r[31]+0x00000008u,c->r[4]); // 800C18D8
  c->r[3]=c->r[3]+0x00003A9Cu; // 800C18DC
  c->r[4]=c->r[31]+0x00000008u; // 800C18E0
  c->r[5]=c->r[5]+0x00001920u; // 800C18E4
  c->lr=0x800C18ECu; f_800C3CD8(c); // 800C18E8
  IRQCHK(c); goto L_800C18A0; // 800C18EC
  goto L_800C1900; // 800C18F0
  c->r[3]=c->r[31]+0x00000010u; // 800C18F4
  c->lr=0x800C18FCu; f_800C35DC(c); // 800C18F8
L_800C18FC:;
  IRQCHK(c); goto L_800C18FC; // 800C18FC
L_800C1900:;
  c->r[10]=c->r[31]|c->r[31]; // 800C1900
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 800C1904
  c->r[30]=R32(c->r[10]+0x00000028u); // 800C1908
  c->r[10]=R32(c->r[1]+0x00000000u); // 800C190C
  c->r[0]=R32(c->r[10]+0x00000004u); // 800C1910
  c->r[1]=c->r[10]|c->r[10]; // 800C1914
  c->lr=c->r[0]; // 800C1918
  return; // 800C191C
}

// fn_800C1920
void f_800C1920(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1920
  c->r[0]=c->lr; // 800C1924
  cmps(c,0,(int32_t)c->r[3],0); // 800C1928
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C192C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C1930
  c->r[31]=c->r[3]|c->r[3]; // 800C1934
  if (crb(c,2)) { goto L_800C1948; } // 800C1938
  cmps(c,0,(int32_t)c->r[4],0); // 800C193C
  if (!crb(c,1)) { goto L_800C1948; } // 800C1940
  c->lr=0x800C1948u; f_800C1960(c); // 800C1944
L_800C1948:;
  c->r[3]=c->r[31]|c->r[31]; // 800C1948
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C194C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C1950
  c->lr=c->r[0]; // 800C1954
  c->r[1]=c->r[1]+0x00000010u; // 800C1958
  return; // 800C195C
}

// dtor_800C1960
void f_800C1960(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 800C1960
  if (crb(c,2)) return; // 800C1964
  f_800C4C94(c); return; // 800C1968
  return; // 800C196C
}

// fn_800C1970
void f_800C1970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1970
  c->r[0]=c->lr; // 800C1974
  cmps(c,0,(int32_t)c->r[3],0); // 800C1978
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C197C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800C1980
  c->r[31]=c->r[1]|c->r[1]; // 800C1984
  W32(c->r[1]+0x00000048u,c->r[30]); // 800C1988
  c->r[30]=c->r[3]|c->r[3]; // 800C198C
  if (!crb(c,2)) { goto L_800C1998; } // 800C1990
  c->r[30]=0u+0x00000004u; // 800C1994
L_800C1998:;
  c->r[3]=c->r[30]|c->r[30]; // 800C1998
  c->lr=0x800C19A0u; f_800C4BF4(c); // 800C199C
  cmps(c,0,(int32_t)c->r[3],0); // 800C19A0
  if (!crb(c,2)) { goto L_800C1A04; } // 800C19A4
  c->r[12]=R32(c->r[13]+0xFFFFA4C0u); // 800C19A8
  cmps(c,0,(int32_t)c->r[12],0); // 800C19AC
  if (crb(c,2)) { goto L_800C19C0; } // 800C19B0
  c->ctr=c->r[12]; // 800C19B4
  if (true) { c->lr=0x800C19BCu; dispatch(c,c->ctr); } // 800C19B8
  IRQCHK(c); goto L_800C1998; // 800C19BC
L_800C19C0:;
  c->r[4]=0u+0x80220000u; // 800C19C0
  c->r[3]=0u+0x801F0000u; // 800C19C4
  c->r[4]=c->r[4]+0xFFFFB910u; // 800C19C8
  c->r[5]=0u+0x800C0000u; // 800C19CC
  W32(c->r[31]+0x00000008u,c->r[4]); // 800C19D0
  c->r[3]=c->r[3]+0x00003A9Cu; // 800C19D4
  c->r[4]=c->r[31]+0x00000008u; // 800C19D8
  c->r[5]=c->r[5]+0x00001920u; // 800C19DC
  c->lr=0x800C19E4u; f_800C3CD8(c); // 800C19E0
  IRQCHK(c); goto L_800C1998; // 800C19E4
  c->r[3]=c->r[31]+0x00000010u; // 800C19E8
  c->lr=0x800C19F0u; f_800C35DC(c); // 800C19EC
L_800C19F0:;
  IRQCHK(c); goto L_800C19F0; // 800C19F0
  goto L_800C1A04; // 800C19F4
  c->r[3]=c->r[31]+0x00000028u; // 800C19F8
  c->lr=0x800C1A00u; f_800C35DC(c); // 800C19FC
L_800C1A00:;
  IRQCHK(c); goto L_800C1A00; // 800C1A00
L_800C1A04:;
  c->r[10]=c->r[31]|c->r[31]; // 800C1A04
  c->r[31]=R32(c->r[31]+0x0000004Cu); // 800C1A08
  c->r[30]=R32(c->r[10]+0x00000048u); // 800C1A0C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800C1A10
  c->r[0]=R32(c->r[10]+0x00000004u); // 800C1A14
  c->r[1]=c->r[10]|c->r[10]; // 800C1A18
  c->lr=c->r[0]; // 800C1A1C
  return; // 800C1A20
}

// dtor_800C1A24
void f_800C1A24(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 800C1A24
  if (crb(c,2)) return; // 800C1A28
  f_800C4C94(c); return; // 800C1A2C
  return; // 800C1A30
}

// fn_800C1A34
void f_800C1A34(Ctx* __restrict c) {
  c->r[3]=0u+0x80220000u; // 800C1A34
  c->r[3]=c->r[3]+0xFFFFB92Cu; // 800C1A38
  return; // 800C1A3C
}

// fn_800C1A40
void f_800C1A40(Ctx* __restrict c) {
  f_800D044C(c); return; // 800C1A40
}

// fn_800C1A44
void f_800C1A44(Ctx* __restrict c) {
  f_800C1A48(c); return; // 800C1A44
}

// fn_800C1A48
void f_800C1A48(Ctx* __restrict c) {
  c->r[12]=R32(c->r[13]+0xFFFF89E0u); // 800C1A48
  c->ctr=c->r[12]; // 800C1A4C
  if (true) { dispatch(c,c->ctr); return; } // 800C1A50
}

// fn_800C1A54
void f_800C1A54(Ctx* __restrict c) {
  c->r[12]=R32(c->r[13]+0xFFFF89E4u); // 800C1A54
  c->ctr=c->r[12]; // 800C1A58
  if (true) { dispatch(c,c->ctr); return; } // 800C1A5C
}

// fn_800C1A60
void f_800C1A60(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800C1A60
  cmps(c,0,(int32_t)c->r[4],0); // 800C1A64
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C1A68
  c->r[7]=c->r[4]|c->r[4]; // 800C1A6C
  if (!crb(c,2)) { goto L_800C1A7C; } // 800C1A70
  c->r[3]=0u+0x00000001u; // 800C1A74
  return; // 800C1A78
L_800C1A7C:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800C1A7C
  c->r[6]=c->r[3]|c->r[3]; // 800C1A80
  cmps(c,0,(int32_t)c->r[0],80); // 800C1A84
  if (!crb(c,2)) { goto L_800C1AE0; } // 800C1A88
  c->r[0]=R8(c->r[4]+0x00000001u); // 800C1A8C
  c->r[7]=c->r[4]+0x00000001u; // 800C1A90
  cmps(c,0,(int32_t)c->r[0],67); // 800C1A94
  if (!crb(c,2)) { goto L_800C1AA0; } // 800C1A98
  c->r[7]=c->r[7]+0x00000001u; // 800C1A9C
L_800C1AA0:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800C1AA0
  cmps(c,0,(int32_t)c->r[0],86); // 800C1AA4
  if (!crb(c,2)) { goto L_800C1AB0; } // 800C1AA8
  c->r[7]=c->r[7]+0x00000001u; // 800C1AAC
L_800C1AB0:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800C1AB0
  cmps(c,0,(int32_t)c->r[0],118); // 800C1AB4
  if (!crb(c,2)) { goto L_800C1ADC; } // 800C1AB8
  c->r[0]=R8(c->r[3]+0x00000000u); // 800C1ABC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C1AC0
  cmps(c,0,(int32_t)c->r[0],80); // 800C1AC4
  if (crb(c,2)) { goto L_800C1AD4; } // 800C1AC8
  cmps(c,0,(int32_t)c->r[0],42); // 800C1ACC
  if (!crb(c,2)) { goto L_800C1ADC; } // 800C1AD0
L_800C1AD4:;
  c->r[3]=0u+0x00000001u; // 800C1AD4
  return; // 800C1AD8
L_800C1ADC:;
  c->r[7]=c->r[4]|c->r[4]; // 800C1ADC
L_800C1AE0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800C1AE0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C1AE4
  cmps(c,0,(int32_t)c->r[0],42); // 800C1AE8
  if (crb(c,2)) { goto L_800C1B00; } // 800C1AEC
  if (!crb(c,0)) { goto L_800C1C34; } // 800C1AF0
  cmps(c,0,(int32_t)c->r[0],33); // 800C1AF4
  if (crb(c,2)) { goto L_800C1B00; } // 800C1AF8
  goto L_800C1C34; // 800C1AFC
L_800C1B00:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800C1B00
  c->r[6]=c->r[3]+0x00000001u; // 800C1B04
  c->r[3]=R8(c->r[3]+0x00000000u); // 800C1B08
  c->r[7]=c->r[7]+0x00000001u; // 800C1B0C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C1B10
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800C1B14
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800C1B18
  if (crb(c,2)) { goto L_800C1B28; } // 800C1B1C
  c->r[3]=0u+0x00000000u; // 800C1B20
  return; // 800C1B24
L_800C1B28:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800C1B28
  c->r[7]=c->r[7]+0x00000001u; // 800C1B2C
  c->r[3]=R8(c->r[6]+0x00000000u); // 800C1B30
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C1B34
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800C1B38
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800C1B3C
  if (!crb(c,2)) { goto L_800C1B88; } // 800C1B40
  cmps(c,0,(int32_t)c->r[3],33); // 800C1B44
  c->r[6]=c->r[6]+0x00000001u; // 800C1B48
  if (!crb(c,2)) { IRQCHK(c); goto L_800C1B28; } // 800C1B4C
  c->r[4]=0u+0x00000000u; // 800C1B50
  goto L_800C1B70; // 800C1B54
L_800C1B58:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 800C1B58
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 800C1B5C
  c->r[6]=c->r[6]+0x00000001u; // 800C1B60
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800C1B64
  c->r[4]=c->r[3]+c->r[0]; // 800C1B68
  c->r[4]=c->r[4]+0xFFFFFFD0u; // 800C1B6C
L_800C1B70:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 800C1B70
  cmps(c,0,(int32_t)c->r[0],33); // 800C1B74
  if (!crb(c,2)) { IRQCHK(c); goto L_800C1B58; } // 800C1B78
  W32(c->r[5]+0x00000000u,c->r[4]); // 800C1B7C
  c->r[3]=0u+0x00000001u; // 800C1B80
  return; // 800C1B84
L_800C1B88:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 800C1B88
  c->r[6]=c->r[6]+0x00000001u; // 800C1B8C
  cmps(c,0,(int32_t)c->r[0],33); // 800C1B90
  if (!crb(c,2)) { IRQCHK(c); goto L_800C1B88; } // 800C1B94
L_800C1B98:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 800C1B98
  c->r[6]=c->r[6]+0x00000001u; // 800C1B9C
  cmps(c,0,(int32_t)c->r[0],33); // 800C1BA0
  if (!crb(c,2)) { IRQCHK(c); goto L_800C1B98; } // 800C1BA4
  c->r[0]=R8(c->r[6]+0x00000000u); // 800C1BA8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C1BAC
  if (!crb(c,2)) { goto L_800C1BBC; } // 800C1BB0
  c->r[3]=0u+0x00000000u; // 800C1BB4
  return; // 800C1BB8
L_800C1BBC:;
  c->r[7]=c->r[4]+0x00000001u; // 800C1BBC
  IRQCHK(c); goto L_800C1B28; // 800C1BC0
  goto L_800C1C34; // 800C1BC4
L_800C1BC8:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 800C1BC8
  c->r[6]=c->r[6]+0x00000001u; // 800C1BCC
  cmps(c,0,(int32_t)c->r[0],67); // 800C1BD0
  if (!crb(c,2)) { goto L_800C1BEC; } // 800C1BD4
  c->r[0]=R8(c->r[6]+0x00000000u); // 800C1BD8
  cmps(c,0,(int32_t)c->r[0],67); // 800C1BDC
  if (!crb(c,2)) { goto L_800C1BE8; } // 800C1BE0
  c->r[6]=c->r[6]+0x00000001u; // 800C1BE4
L_800C1BE8:;
  c->r[7]=c->r[7]+0x00000001u; // 800C1BE8
L_800C1BEC:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 800C1BEC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C1BF0
  cmps(c,0,(int32_t)c->r[3],67); // 800C1BF4
  if (!crb(c,2)) { goto L_800C1C04; } // 800C1BF8
  c->r[3]=0u+0x00000000u; // 800C1BFC
  return; // 800C1C00
L_800C1C04:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800C1C04
  cmps(c,0,(int32_t)c->r[0],86); // 800C1C08
  if (!crb(c,2)) { goto L_800C1C20; } // 800C1C0C
  cmps(c,0,(int32_t)c->r[3],86); // 800C1C10
  if (!crb(c,2)) { goto L_800C1C1C; } // 800C1C14
  c->r[6]=c->r[6]+0x00000001u; // 800C1C18
L_800C1C1C:;
  c->r[7]=c->r[7]+0x00000001u; // 800C1C1C
L_800C1C20:;
  c->r[0]=R8(c->r[6]+0x00000000u); // 800C1C20
  cmps(c,0,(int32_t)c->r[0],86); // 800C1C24
  if (!crb(c,2)) { goto L_800C1C34; } // 800C1C28
  c->r[3]=0u+0x00000000u; // 800C1C2C
  return; // 800C1C30
L_800C1C34:;
  c->r[3]=R8(c->r[6]+0x00000000u); // 800C1C34
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800C1C38
  cmps(c,0,(int32_t)c->r[0],80); // 800C1C3C
  if (crb(c,2)) { goto L_800C1C4C; } // 800C1C40
  cmps(c,0,(int32_t)c->r[0],82); // 800C1C44
  if (!crb(c,2)) { goto L_800C1C7C; } // 800C1C48
L_800C1C4C:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800C1C4C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800C1C50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C1C54
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800C1C58
  if (crb(c,2)) { IRQCHK(c); goto L_800C1BC8; } // 800C1C5C
  goto L_800C1C7C; // 800C1C60
L_800C1C64:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 800C1C64
  if (!crb(c,2)) { goto L_800C1C74; } // 800C1C68
  c->r[3]=0u+0x00000001u; // 800C1C6C
  return; // 800C1C70
L_800C1C74:;
  c->r[6]=c->r[6]+0x00000001u; // 800C1C74
  c->r[7]=c->r[7]+0x00000001u; // 800C1C78
L_800C1C7C:;
  c->r[4]=R8(c->r[6]+0x00000000u); // 800C1C7C
  c->r[0]=R8(c->r[7]+0x00000000u); // 800C1C80
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800C1C84
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C1C88
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800C1C8C
  if (crb(c,2)) { IRQCHK(c); goto L_800C1C64; } // 800C1C90
  c->r[3]=0u+0x00000000u; // 800C1C94
  return; // 800C1C98
}

// __construct_new_array
void f_800C1C9C(Ctx* __restrict c) {
  trace_call(0x800C1C9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1C9C
  c->r[0]=c->lr; // 800C1CA0
  cmps(c,0,(int32_t)c->r[3],0); // 800C1CA4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C1CA8
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C1CAC
  c->r[30]=c->r[3]|c->r[3]; // 800C1CB0
  c->r[27]=c->r[4]|c->r[4]; // 800C1CB4
  c->r[28]=c->r[6]|c->r[6]; // 800C1CB8
  c->r[29]=c->r[7]|c->r[7]; // 800C1CBC
  if (crb(c,2)) { goto L_800C1D88; } // 800C1CC0
  cmps(c,0,(int32_t)c->r[4],0); // 800C1CC4
  W32(c->r[3]+0x00000000u,c->r[6]); // 800C1CC8
  c->r[30]=c->r[3]+0x00000010u; // 800C1CCC
  W32(c->r[3]+0x00000004u,c->r[7]); // 800C1CD0
  if (crb(c,2)) { goto L_800C1D88; } // 800C1CD4
  c->r[0]=0u+0x00000000u; // 800C1CD8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C1CDC
  c->r[31]=c->r[30]|c->r[30]; // 800C1CE0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C1CE4
  W32(c->r[1]+0x00000010u,c->r[7]); // 800C1CE8
  W32(c->r[1]+0x00000014u,c->r[5]); // 800C1CEC
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C1CF0
  goto L_800C1D1C; // 800C1CF4
L_800C1CF8:;
  c->r[12]=c->r[27]|c->r[27]; // 800C1CF8
  c->r[3]=c->r[31]|c->r[31]; // 800C1CFC
  c->r[4]=0u+0x00000001u; // 800C1D00
  c->ctr=c->r[12]; // 800C1D04
  if (true) { c->lr=0x800C1D0Cu; dispatch(c,c->ctr); } // 800C1D08
  c->r[3]=R32(c->r[1]+0x00000018u); // 800C1D0C
  c->r[31]=c->r[31]+c->r[28]; // 800C1D10
  c->r[0]=c->r[3]+0x00000001u; // 800C1D14
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C1D18
L_800C1D1C:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 800C1D1C
  cmpu(c,0,c->r[4],c->r[29]); // 800C1D20
  if (crb(c,0)) { IRQCHK(c); goto L_800C1CF8; } // 800C1D24
  c->r[0]=R32(c->r[1]+0x00000010u); // 800C1D28
  cmpu(c,0,c->r[4],c->r[0]); // 800C1D2C
  if (!crb(c,0)) { goto L_800C1D88; } // 800C1D30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C1D34
  cmps(c,0,(int32_t)c->r[0],0); // 800C1D38
  if (crb(c,2)) { goto L_800C1D88; } // 800C1D3C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800C1D40
  c->r[3]=R32(c->r[1]+0x00000008u); // 800C1D44
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800C1D48
  c->r[31]=c->r[3]+c->r[0]; // 800C1D4C
  goto L_800C1D7C; // 800C1D50
L_800C1D54:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800C1D54
  c->r[4]=0u+0xFFFFFFFFu; // 800C1D58
  c->r[12]=R32(c->r[1]+0x00000014u); // 800C1D5C
  c->r[31]=c->r[31]-c->r[0]; // 800C1D60
  c->r[3]=c->r[31]|c->r[31]; // 800C1D64
  c->ctr=c->r[12]; // 800C1D68
  if (true) { c->lr=0x800C1D70u; dispatch(c,c->ctr); } // 800C1D6C
  c->r[3]=R32(c->r[1]+0x00000018u); // 800C1D70
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C1D74
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C1D78
L_800C1D7C:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 800C1D7C
  cmps(c,0,(int32_t)c->r[0],0); // 800C1D80
  if (!crb(c,2)) { IRQCHK(c); goto L_800C1D54; } // 800C1D84
L_800C1D88:;
  c->r[3]=c->r[30]|c->r[30]; // 800C1D88
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C1D8C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C1D90
  c->lr=c->r[0]; // 800C1D94
  c->r[1]=c->r[1]+0x00000040u; // 800C1D98
  return; // 800C1D9C
}

// dtor
void f_800C1DA0(Ctx* __restrict c) {
  trace_call(0x800C1DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1DA0
  c->r[0]=c->lr; // 800C1DA4
  cmps(c,0,(int32_t)c->r[3],0); // 800C1DA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C1DAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C1DB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C1DB4
  c->r[30]=c->r[4]|c->r[4]; // 800C1DB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C1DBC
  c->r[29]=c->r[3]|c->r[3]; // 800C1DC0
  if (crb(c,2)) { goto L_800C1E3C; } // 800C1DC4
  c->r[4]=R32(c->r[3]+0x00000010u); // 800C1DC8
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C1DCC
  cmpu(c,0,c->r[4],c->r[0]); // 800C1DD0
  if (!crb(c,0)) { goto L_800C1E2C; } // 800C1DD4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C1DD8
  cmps(c,0,(int32_t)c->r[0],0); // 800C1DDC
  if (crb(c,2)) { goto L_800C1E2C; } // 800C1DE0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C1DE4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C1DE8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800C1DEC
  c->r[31]=c->r[3]+c->r[0]; // 800C1DF0
  goto L_800C1E20; // 800C1DF4
L_800C1DF8:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 800C1DF8
  c->r[4]=0u+0xFFFFFFFFu; // 800C1DFC
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 800C1E00
  c->r[31]=c->r[31]-c->r[0]; // 800C1E04
  c->r[3]=c->r[31]|c->r[31]; // 800C1E08
  c->ctr=c->r[12]; // 800C1E0C
  if (true) { c->lr=0x800C1E14u; dispatch(c,c->ctr); } // 800C1E10
  c->r[3]=R32(c->r[29]+0x00000010u); // 800C1E14
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C1E18
  W32(c->r[29]+0x00000010u,c->r[0]); // 800C1E1C
L_800C1E20:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 800C1E20
  cmps(c,0,(int32_t)c->r[0],0); // 800C1E24
  if (!crb(c,2)) { IRQCHK(c); goto L_800C1DF8; } // 800C1E28
L_800C1E2C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C1E2C
  if (!crb(c,1)) { goto L_800C1E3C; } // 800C1E30
  c->r[3]=c->r[29]|c->r[29]; // 800C1E34
  c->lr=0x800C1E3Cu; f_800C1960(c); // 800C1E38
L_800C1E3C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C1E3C
  c->r[3]=c->r[29]|c->r[29]; // 800C1E40
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C1E44
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C1E48
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C1E4C
  c->lr=c->r[0]; // 800C1E50
  c->r[1]=c->r[1]+0x00000020u; // 800C1E54
  return; // 800C1E58
}

// __construct_array
void f_800C1E5C(Ctx* __restrict c) {
  trace_call(0x800C1E5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1E5C
  c->r[0]=c->lr; // 800C1E60
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C1E64
  c->r[0]=0u+0x00000000u; // 800C1E68
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C1E6C
  c->r[31]=c->r[3]|c->r[3]; // 800C1E70
  W32(c->r[1]+0x00000028u,c->r[30]); // 800C1E74
  c->r[30]=c->r[7]|c->r[7]; // 800C1E78
  W32(c->r[1]+0x00000024u,c->r[29]); // 800C1E7C
  c->r[29]=c->r[6]|c->r[6]; // 800C1E80
  W32(c->r[1]+0x00000020u,c->r[28]); // 800C1E84
  c->r[28]=c->r[4]|c->r[4]; // 800C1E88
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C1E8C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800C1E90
  W32(c->r[1]+0x00000010u,c->r[7]); // 800C1E94
  W32(c->r[1]+0x00000014u,c->r[5]); // 800C1E98
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C1E9C
  goto L_800C1EC8; // 800C1EA0
L_800C1EA4:;
  c->r[12]=c->r[28]|c->r[28]; // 800C1EA4
  c->r[3]=c->r[31]|c->r[31]; // 800C1EA8
  c->r[4]=0u+0x00000001u; // 800C1EAC
  c->ctr=c->r[12]; // 800C1EB0
  if (true) { c->lr=0x800C1EB8u; dispatch(c,c->ctr); } // 800C1EB4
  c->r[3]=R32(c->r[1]+0x00000018u); // 800C1EB8
  c->r[31]=c->r[31]+c->r[29]; // 800C1EBC
  c->r[0]=c->r[3]+0x00000001u; // 800C1EC0
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C1EC4
L_800C1EC8:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 800C1EC8
  cmpu(c,0,c->r[4],c->r[30]); // 800C1ECC
  if (crb(c,0)) { IRQCHK(c); goto L_800C1EA4; } // 800C1ED0
  c->r[0]=R32(c->r[1]+0x00000010u); // 800C1ED4
  cmpu(c,0,c->r[4],c->r[0]); // 800C1ED8
  if (!crb(c,0)) { goto L_800C1F34; } // 800C1EDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C1EE0
  cmps(c,0,(int32_t)c->r[0],0); // 800C1EE4
  if (crb(c,2)) { goto L_800C1F34; } // 800C1EE8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800C1EEC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800C1EF0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800C1EF4
  c->r[31]=c->r[3]+c->r[0]; // 800C1EF8
  goto L_800C1F28; // 800C1EFC
L_800C1F00:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800C1F00
  c->r[4]=0u+0xFFFFFFFFu; // 800C1F04
  c->r[12]=R32(c->r[1]+0x00000014u); // 800C1F08
  c->r[31]=c->r[31]-c->r[0]; // 800C1F0C
  c->r[3]=c->r[31]|c->r[31]; // 800C1F10
  c->ctr=c->r[12]; // 800C1F14
  if (true) { c->lr=0x800C1F1Cu; dispatch(c,c->ctr); } // 800C1F18
  c->r[3]=R32(c->r[1]+0x00000018u); // 800C1F1C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C1F20
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C1F24
L_800C1F28:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 800C1F28
  cmps(c,0,(int32_t)c->r[0],0); // 800C1F2C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C1F00; } // 800C1F30
L_800C1F34:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C1F34
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C1F38
  c->r[30]=R32(c->r[1]+0x00000028u); // 800C1F3C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800C1F40
  c->r[28]=R32(c->r[1]+0x00000020u); // 800C1F44
  c->lr=c->r[0]; // 800C1F48
  c->r[1]=c->r[1]+0x00000030u; // 800C1F4C
  return; // 800C1F50
}

// __destroy_arr
void f_800C1F54(Ctx* __restrict c) {
  trace_call(0x800C1F54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C1F54
  c->r[0]=c->lr; // 800C1F58
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C1F5C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800C1F60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C1F64
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C1F68
  c->r[30]=c->r[6]|c->r[6]; // 800C1F6C
  c->r[31]=c->r[3]+c->r[0]; // 800C1F70
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C1F74
  c->r[29]=c->r[5]|c->r[5]; // 800C1F78
  W32(c->r[1]+0x00000010u,c->r[28]); // 800C1F7C
  c->r[28]=c->r[4]|c->r[4]; // 800C1F80
  goto L_800C1FA4; // 800C1F84
L_800C1F88:;
  c->r[31]=c->r[31]-c->r[29]; // 800C1F88
  c->r[12]=c->r[28]|c->r[28]; // 800C1F8C
  c->r[3]=c->r[31]|c->r[31]; // 800C1F90
  c->r[4]=0u+0xFFFFFFFFu; // 800C1F94
  c->ctr=c->r[12]; // 800C1F98
  if (true) { c->lr=0x800C1FA0u; dispatch(c,c->ctr); } // 800C1F9C
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800C1FA0
L_800C1FA4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C1FA4
  if (!crb(c,2)) { IRQCHK(c); goto L_800C1F88; } // 800C1FA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C1FAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C1FB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C1FB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C1FB8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800C1FBC
  c->lr=c->r[0]; // 800C1FC0
  c->r[1]=c->r[1]+0x00000020u; // 800C1FC4
  return; // 800C1FC8
}

// __ptmf_cmpr
void f_800C1FCC(Ctx* __restrict c) {
  trace_call(0x800C1FCCu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800C1FCC
  c->r[6]=R32(c->r[4]+0x00000000u); // 800C1FD0
  c->r[7]=R32(c->r[3]+0x00000004u); // 800C1FD4
  c->r[8]=R32(c->r[4]+0x00000004u); // 800C1FD8
  c->r[9]=R32(c->r[3]+0x00000008u); // 800C1FDC
  c->r[10]=R32(c->r[4]+0x00000008u); // 800C1FE0
  c->r[3]=0u+0x00000001u; // 800C1FE4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 800C1FE8
  cmps(c,6,(int32_t)c->r[7],(int32_t)c->r[8]); // 800C1FEC
  cmps(c,7,(int32_t)c->r[9],(int32_t)c->r[10]); // 800C1FF0
  if (!crb(c,2)) return; // 800C1FF4
  if (!crb(c,26)) return; // 800C1FF8
  if (!crb(c,30)) return; // 800C1FFC
  c->r[3]=0u+0x00000000u; // 800C2000
  return; // 800C2004
}

// fn_800C2008
void f_800C2008(Ctx* __restrict c) {
  c->r[0]=R32(c->r[12]+0x00000000u); // 800C2008
  c->r[11]=R32(c->r[12]+0x00000004u); // 800C200C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800C2010
  c->r[3]=c->r[3]+c->r[0]; // 800C2014
  cmps(c,0,(int32_t)c->r[11],0); // 800C2018
  if (crb(c,0)) { goto L_800C2028; } // 800C201C
  c->r[12]=R32(c->r[3]+c->r[12]); // 800C2020
  c->r[12]=R32(c->r[12]+c->r[11]); // 800C2024
L_800C2028:;
  c->ctr=c->r[12]; // 800C2028
  if (true) { dispatch(c,c->ctr); return; } // 800C202C
}

// __cvt_fp2unsigned
void f_800C2030(Ctx* __restrict c) {
  trace_call(0x800C2030u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2030
  c->r[4]=0u+0x801F0000u; // 800C2034
  c->r[4]=c->r[4]+0x00003AD0u; // 800C2038
  c->r[3]=0u+0x00000000u; // 800C203C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 800C2040
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=RF64(ea);} // 800C2044
  {uint32_t ea=c->r[4]+0x00000010u; c->f[4]=RF64(ea);} // 800C2048
  fcmp(c,0,c->f[1],c->f[0]); // 800C204C
  fcmp(c,6,c->f[1],c->f[3]); // 800C2050
  if (crb(c,0)) { goto L_800C2084; } // 800C2054
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800C2058
  if (!crb(c,24)) { goto L_800C2084; } // 800C205C
  fcmp(c,7,c->f[1],c->f[4]); // 800C2060
  c->f[2]=c->f[1]; // 800C2064
  if (crb(c,28)) { goto L_800C2070; } // 800C2068
  c->f[2]=c->f[1]-c->f[4]; // 800C206C
L_800C2070:;
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800C2070
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[2]);} // 800C2074
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C2078
  if (crb(c,28)) { goto L_800C2084; } // 800C207C
  c->r[3]=c->r[3]+0x80000000u; // 800C2080
L_800C2084:;
  c->r[1]=c->r[1]+0x00000010u; // 800C2084
  return; // 800C2088
}

// __save_fpr
void f_800C208C(Ctx* __restrict c) {
  trace_call(0x800C208Cu);
  {uint32_t ea=c->r[11]+0xFFFFFF70u; WF64(ea,c->f[14]);} // 800C208C
  {uint32_t ea=c->r[11]+0xFFFFFF78u; WF64(ea,c->f[15]);} // 800C2090
  {uint32_t ea=c->r[11]+0xFFFFFF80u; WF64(ea,c->f[16]);} // 800C2094
  {uint32_t ea=c->r[11]+0xFFFFFF88u; WF64(ea,c->f[17]);} // 800C2098
  {uint32_t ea=c->r[11]+0xFFFFFF90u; WF64(ea,c->f[18]);} // 800C209C
  {uint32_t ea=c->r[11]+0xFFFFFF98u; WF64(ea,c->f[19]);} // 800C20A0
  {uint32_t ea=c->r[11]+0xFFFFFFA0u; WF64(ea,c->f[20]);} // 800C20A4
  {uint32_t ea=c->r[11]+0xFFFFFFA8u; WF64(ea,c->f[21]);} // 800C20A8
  {uint32_t ea=c->r[11]+0xFFFFFFB0u; WF64(ea,c->f[22]);} // 800C20AC
  {uint32_t ea=c->r[11]+0xFFFFFFB8u; WF64(ea,c->f[23]);} // 800C20B0
  {uint32_t ea=c->r[11]+0xFFFFFFC0u; WF64(ea,c->f[24]);} // 800C20B4
  {uint32_t ea=c->r[11]+0xFFFFFFC8u; WF64(ea,c->f[25]);} // 800C20B8
  {uint32_t ea=c->r[11]+0xFFFFFFD0u; WF64(ea,c->f[26]);} // 800C20BC
  {uint32_t ea=c->r[11]+0xFFFFFFD8u; WF64(ea,c->f[27]);} // 800C20C0
  {uint32_t ea=c->r[11]+0xFFFFFFE0u; WF64(ea,c->f[28]);} // 800C20C4
  {uint32_t ea=c->r[11]+0xFFFFFFE8u; WF64(ea,c->f[29]);} // 800C20C8
  {uint32_t ea=c->r[11]+0xFFFFFFF0u; WF64(ea,c->f[30]);} // 800C20CC
  {uint32_t ea=c->r[11]+0xFFFFFFF8u; WF64(ea,c->f[31]);} // 800C20D0
  return; // 800C20D4
}

// __restore_fpr
void f_800C20D8(Ctx* __restrict c) {
  trace_call(0x800C20D8u);
  {uint32_t ea=c->r[11]+0xFFFFFF70u; c->f[14]=RF64(ea);} // 800C20D8
  {uint32_t ea=c->r[11]+0xFFFFFF78u; c->f[15]=RF64(ea);} // 800C20DC
  {uint32_t ea=c->r[11]+0xFFFFFF80u; c->f[16]=RF64(ea);} // 800C20E0
  {uint32_t ea=c->r[11]+0xFFFFFF88u; c->f[17]=RF64(ea);} // 800C20E4
  {uint32_t ea=c->r[11]+0xFFFFFF90u; c->f[18]=RF64(ea);} // 800C20E8
  {uint32_t ea=c->r[11]+0xFFFFFF98u; c->f[19]=RF64(ea);} // 800C20EC
  {uint32_t ea=c->r[11]+0xFFFFFFA0u; c->f[20]=RF64(ea);} // 800C20F0
  {uint32_t ea=c->r[11]+0xFFFFFFA8u; c->f[21]=RF64(ea);} // 800C20F4
  {uint32_t ea=c->r[11]+0xFFFFFFB0u; c->f[22]=RF64(ea);} // 800C20F8
  {uint32_t ea=c->r[11]+0xFFFFFFB8u; c->f[23]=RF64(ea);} // 800C20FC
  {uint32_t ea=c->r[11]+0xFFFFFFC0u; c->f[24]=RF64(ea);} // 800C2100
  {uint32_t ea=c->r[11]+0xFFFFFFC8u; c->f[25]=RF64(ea);} // 800C2104
  {uint32_t ea=c->r[11]+0xFFFFFFD0u; c->f[26]=RF64(ea);} // 800C2108
  {uint32_t ea=c->r[11]+0xFFFFFFD8u; c->f[27]=RF64(ea);} // 800C210C
  {uint32_t ea=c->r[11]+0xFFFFFFE0u; c->f[28]=RF64(ea);} // 800C2110
  {uint32_t ea=c->r[11]+0xFFFFFFE8u; c->f[29]=RF64(ea);} // 800C2114
  {uint32_t ea=c->r[11]+0xFFFFFFF0u; c->f[30]=RF64(ea);} // 800C2118
  {uint32_t ea=c->r[11]+0xFFFFFFF8u; c->f[31]=RF64(ea);} // 800C211C
  return; // 800C2120
}

// __save_gpr
void f_800C2124(Ctx* __restrict c) {
  trace_call(0x800C2124u);
  W32(c->r[11]+0xFFFFFFB8u,c->r[14]); // 800C2124
  W32(c->r[11]+0xFFFFFFBCu,c->r[15]); // 800C2128
  W32(c->r[11]+0xFFFFFFC0u,c->r[16]); // 800C212C
  W32(c->r[11]+0xFFFFFFC4u,c->r[17]); // 800C2130
  W32(c->r[11]+0xFFFFFFC8u,c->r[18]); // 800C2134
  W32(c->r[11]+0xFFFFFFCCu,c->r[19]); // 800C2138
  W32(c->r[11]+0xFFFFFFD0u,c->r[20]); // 800C213C
  W32(c->r[11]+0xFFFFFFD4u,c->r[21]); // 800C2140
  W32(c->r[11]+0xFFFFFFD8u,c->r[22]); // 800C2144
  W32(c->r[11]+0xFFFFFFDCu,c->r[23]); // 800C2148
  W32(c->r[11]+0xFFFFFFE0u,c->r[24]); // 800C214C
  W32(c->r[11]+0xFFFFFFE4u,c->r[25]); // 800C2150
  W32(c->r[11]+0xFFFFFFE8u,c->r[26]); // 800C2154
  W32(c->r[11]+0xFFFFFFECu,c->r[27]); // 800C2158
  W32(c->r[11]+0xFFFFFFF0u,c->r[28]); // 800C215C
  W32(c->r[11]+0xFFFFFFF4u,c->r[29]); // 800C2160
  W32(c->r[11]+0xFFFFFFF8u,c->r[30]); // 800C2164
  W32(c->r[11]+0xFFFFFFFCu,c->r[31]); // 800C2168
  return; // 800C216C
}

// __restore_gpr
void f_800C2170(Ctx* __restrict c) {
  trace_call(0x800C2170u);
  c->r[14]=R32(c->r[11]+0xFFFFFFB8u); // 800C2170
  c->r[15]=R32(c->r[11]+0xFFFFFFBCu); // 800C2174
  c->r[16]=R32(c->r[11]+0xFFFFFFC0u); // 800C2178
  c->r[17]=R32(c->r[11]+0xFFFFFFC4u); // 800C217C
  c->r[18]=R32(c->r[11]+0xFFFFFFC8u); // 800C2180
  c->r[19]=R32(c->r[11]+0xFFFFFFCCu); // 800C2184
  c->r[20]=R32(c->r[11]+0xFFFFFFD0u); // 800C2188
  c->r[21]=R32(c->r[11]+0xFFFFFFD4u); // 800C218C
  c->r[22]=R32(c->r[11]+0xFFFFFFD8u); // 800C2190
  c->r[23]=R32(c->r[11]+0xFFFFFFDCu); // 800C2194
  c->r[24]=R32(c->r[11]+0xFFFFFFE0u); // 800C2198
  c->r[25]=R32(c->r[11]+0xFFFFFFE4u); // 800C219C
  c->r[26]=R32(c->r[11]+0xFFFFFFE8u); // 800C21A0
  c->r[27]=R32(c->r[11]+0xFFFFFFECu); // 800C21A4
  c->r[28]=R32(c->r[11]+0xFFFFFFF0u); // 800C21A8
  c->r[29]=R32(c->r[11]+0xFFFFFFF4u); // 800C21AC
  c->r[30]=R32(c->r[11]+0xFFFFFFF8u); // 800C21B0
  c->r[31]=R32(c->r[11]+0xFFFFFFFCu); // 800C21B4
  return; // 800C21B8
}

// __div2u
void f_800C21BC(Ctx* __restrict c) {
  trace_call(0x800C21BCu);
  cmps(c,0,(int32_t)c->r[3],0); // 800C21BC
  c->r[0]=cntlz(c->r[3]); // 800C21C0
  c->r[9]=cntlz(c->r[4]); // 800C21C4
  if (!crb(c,2)) { goto L_800C21D0; } // 800C21C8
  c->r[0]=c->r[9]+0x00000020u; // 800C21CC
L_800C21D0:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C21D0
  c->r[9]=cntlz(c->r[5]); // 800C21D4
  c->r[10]=cntlz(c->r[6]); // 800C21D8
  if (!crb(c,2)) { goto L_800C21E4; } // 800C21DC
  c->r[9]=c->r[10]+0x00000020u; // 800C21E0
L_800C21E4:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 800C21E4
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 800C21E8
  if (crb(c,1)) { goto L_800C229C; } // 800C21EC
  c->r[9]=c->r[9]+0x00000001u; // 800C21F0
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 800C21F4
  c->r[0]=c->r[0]+c->r[9]; // 800C21F8
  c->r[9]=c->r[10]-c->r[9]; // 800C21FC
  c->ctr=c->r[9]; // 800C2200
  cmps(c,0,(int32_t)c->r[9],32); // 800C2204
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 800C2208
  if (crb(c,0)) { goto L_800C221C; } // 800C220C
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 800C2210
  c->r[7]=0u+0x00000000u; // 800C2214
  goto L_800C2230; // 800C2218
L_800C221C:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 800C221C
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 800C2220
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 800C2224
  c->r[8]=c->r[8]|c->r[7]; // 800C2228
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 800C222C
L_800C2230:;
  cmps(c,0,(int32_t)c->r[0],32); // 800C2230
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 800C2234
  if (crb(c,0)) { goto L_800C2248; } // 800C2238
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 800C223C
  c->r[4]=0u+0x00000000u; // 800C2240
  goto L_800C225C; // 800C2244
L_800C2248:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800C2248
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 800C224C
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 800C2250
  c->r[3]=c->r[3]|c->r[9]; // 800C2254
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800C2258
L_800C225C:;
  c->r[10]=0u+0xFFFFFFFFu; // 800C225C
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 800C2260
L_800C2264:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 800C2264
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 800C2268
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 800C226C
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 800C2270
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 800C2274
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 800C2278
  if (crb(c,0)) { goto L_800C228C; } // 800C227C
  c->r[8]=c->r[0]|c->r[0]; // 800C2280
  c->r[7]=c->r[9]|c->r[9]; // 800C2284
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 800C2288
L_800C228C:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2264; } // 800C228C
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 800C2290
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 800C2294
  return; // 800C2298
L_800C229C:;
  c->r[4]=0u+0x00000000u; // 800C229C
  c->r[3]=0u+0x00000000u; // 800C22A0
  return; // 800C22A4
}

// __div2i
void f_800C22A8(Ctx* __restrict c) {
  trace_call(0x800C22A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C22A8
  c->r[9]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[9]); // 800C22AC
  if (crb(c,2)) { goto L_800C22BC; } // 800C22B0
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 800C22B4
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 800C22B8
L_800C22BC:;
  W32(c->r[1]+0x00000008u,c->r[9]); // 800C22BC
  c->r[10]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[10]); // 800C22C0
  if (crb(c,2)) { goto L_800C22D0; } // 800C22C4
  c->r[6]=addc(c,~c->r[6],0x00000000u,1); // 800C22C8
  c->r[5]=addc(c,~c->r[5],0,c->xer_ca); // 800C22CC
L_800C22D0:;
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 800C22D0
  cmps(c,0,(int32_t)c->r[3],0); // 800C22D4
  c->r[0]=cntlz(c->r[3]); // 800C22D8
  c->r[9]=cntlz(c->r[4]); // 800C22DC
  if (!crb(c,2)) { goto L_800C22E8; } // 800C22E0
  c->r[0]=c->r[9]+0x00000020u; // 800C22E4
L_800C22E8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C22E8
  c->r[9]=cntlz(c->r[5]); // 800C22EC
  c->r[10]=cntlz(c->r[6]); // 800C22F0
  if (!crb(c,2)) { goto L_800C22FC; } // 800C22F4
  c->r[9]=c->r[10]+0x00000020u; // 800C22F8
L_800C22FC:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 800C22FC
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 800C2300
  if (crb(c,1)) { goto L_800C23D0; } // 800C2304
  c->r[9]=c->r[9]+0x00000001u; // 800C2308
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 800C230C
  c->r[0]=c->r[0]+c->r[9]; // 800C2310
  c->r[9]=c->r[10]-c->r[9]; // 800C2314
  c->ctr=c->r[9]; // 800C2318
  cmps(c,0,(int32_t)c->r[9],32); // 800C231C
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 800C2320
  if (crb(c,0)) { goto L_800C2334; } // 800C2324
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 800C2328
  c->r[7]=0u+0x00000000u; // 800C232C
  goto L_800C2348; // 800C2330
L_800C2334:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 800C2334
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 800C2338
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 800C233C
  c->r[8]=c->r[8]|c->r[7]; // 800C2340
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 800C2344
L_800C2348:;
  cmps(c,0,(int32_t)c->r[0],32); // 800C2348
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 800C234C
  if (crb(c,0)) { goto L_800C2360; } // 800C2350
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 800C2354
  c->r[4]=0u+0x00000000u; // 800C2358
  goto L_800C2374; // 800C235C
L_800C2360:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800C2360
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 800C2364
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 800C2368
  c->r[3]=c->r[3]|c->r[9]; // 800C236C
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800C2370
L_800C2374:;
  c->r[10]=0u+0xFFFFFFFFu; // 800C2374
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 800C2378
L_800C237C:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 800C237C
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 800C2380
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 800C2384
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 800C2388
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 800C238C
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 800C2390
  if (crb(c,0)) { goto L_800C23A4; } // 800C2394
  c->r[8]=c->r[0]|c->r[0]; // 800C2398
  c->r[7]=c->r[9]|c->r[9]; // 800C239C
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 800C23A0
L_800C23A4:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C237C; } // 800C23A4
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 800C23A8
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 800C23AC
  c->r[9]=R32(c->r[1]+0x00000008u); // 800C23B0
  c->r[10]=R32(c->r[1]+0x0000000Cu); // 800C23B4
  c->r[7]=c->r[9]^c->r[10]; cr0(c,c->r[7]); // 800C23B8
  if (crb(c,2)) { goto L_800C23CC; } // 800C23BC
  cmps(c,0,(int32_t)c->r[9],0); // 800C23C0
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 800C23C4
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 800C23C8
L_800C23CC:;
  goto L_800C23D8; // 800C23CC
L_800C23D0:;
  c->r[4]=0u+0x00000000u; // 800C23D0
  c->r[3]=0u+0x00000000u; // 800C23D4
L_800C23D8:;
  c->r[1]=c->r[1]+0x00000010u; // 800C23D8
  return; // 800C23DC
}

// __mod2u
void f_800C23E0(Ctx* __restrict c) {
  trace_call(0x800C23E0u);
  cmps(c,0,(int32_t)c->r[3],0); // 800C23E0
  c->r[0]=cntlz(c->r[3]); // 800C23E4
  c->r[9]=cntlz(c->r[4]); // 800C23E8
  if (!crb(c,2)) { goto L_800C23F4; } // 800C23EC
  c->r[0]=c->r[9]+0x00000020u; // 800C23F0
L_800C23F4:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C23F4
  c->r[9]=cntlz(c->r[5]); // 800C23F8
  c->r[10]=cntlz(c->r[6]); // 800C23FC
  if (!crb(c,2)) { goto L_800C2408; } // 800C2400
  c->r[9]=c->r[10]+0x00000020u; // 800C2404
L_800C2408:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 800C2408
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 800C240C
  if (crb(c,1)) { goto L_800C24C0; } // 800C2410
  c->r[9]=c->r[9]+0x00000001u; // 800C2414
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 800C2418
  c->r[0]=c->r[0]+c->r[9]; // 800C241C
  c->r[9]=c->r[10]-c->r[9]; // 800C2420
  c->ctr=c->r[9]; // 800C2424
  cmps(c,0,(int32_t)c->r[9],32); // 800C2428
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 800C242C
  if (crb(c,0)) { goto L_800C2440; } // 800C2430
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 800C2434
  c->r[7]=0u+0x00000000u; // 800C2438
  goto L_800C2454; // 800C243C
L_800C2440:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 800C2440
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 800C2444
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 800C2448
  c->r[8]=c->r[8]|c->r[7]; // 800C244C
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 800C2450
L_800C2454:;
  cmps(c,0,(int32_t)c->r[0],32); // 800C2454
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 800C2458
  if (crb(c,0)) { goto L_800C246C; } // 800C245C
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 800C2460
  c->r[4]=0u+0x00000000u; // 800C2464
  goto L_800C2480; // 800C2468
L_800C246C:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800C246C
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 800C2470
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 800C2474
  c->r[3]=c->r[3]|c->r[9]; // 800C2478
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800C247C
L_800C2480:;
  c->r[10]=0u+0xFFFFFFFFu; // 800C2480
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 800C2484
L_800C2488:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 800C2488
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 800C248C
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 800C2490
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 800C2494
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 800C2498
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 800C249C
  if (crb(c,0)) { goto L_800C24B0; } // 800C24A0
  c->r[8]=c->r[0]|c->r[0]; // 800C24A4
  c->r[7]=c->r[9]|c->r[9]; // 800C24A8
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 800C24AC
L_800C24B0:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2488; } // 800C24B0
  c->r[4]=c->r[8]|c->r[8]; // 800C24B4
  c->r[3]=c->r[7]|c->r[7]; // 800C24B8
  return; // 800C24BC
L_800C24C0:;
  return; // 800C24C0
}

// __mod2i
void f_800C24C4(Ctx* __restrict c) {
  trace_call(0x800C24C4u);
  cmps(c,7,(int32_t)c->r[3],0); // 800C24C4
  if (!crb(c,28)) { goto L_800C24D4; } // 800C24C8
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 800C24CC
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 800C24D0
L_800C24D4:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C24D4
  if (!crb(c,0)) { goto L_800C24E4; } // 800C24D8
  c->r[6]=addc(c,~c->r[6],0x00000000u,1); // 800C24DC
  c->r[5]=addc(c,~c->r[5],0,c->xer_ca); // 800C24E0
L_800C24E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800C24E4
  c->r[0]=cntlz(c->r[3]); // 800C24E8
  c->r[9]=cntlz(c->r[4]); // 800C24EC
  if (!crb(c,2)) { goto L_800C24F8; } // 800C24F0
  c->r[0]=c->r[9]+0x00000020u; // 800C24F4
L_800C24F8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C24F8
  c->r[9]=cntlz(c->r[5]); // 800C24FC
  c->r[10]=cntlz(c->r[6]); // 800C2500
  if (!crb(c,2)) { goto L_800C250C; } // 800C2504
  c->r[9]=c->r[10]+0x00000020u; // 800C2508
L_800C250C:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[9]); // 800C250C
  c->r[10]=addc(c,~c->r[0],0x00000040u,1); // 800C2510
  if (crb(c,1)) { goto L_800C25C0; } // 800C2514
  c->r[9]=c->r[9]+0x00000001u; // 800C2518
  c->r[9]=addc(c,~c->r[9],0x00000040u,1); // 800C251C
  c->r[0]=c->r[0]+c->r[9]; // 800C2520
  c->r[9]=c->r[10]-c->r[9]; // 800C2524
  c->ctr=c->r[9]; // 800C2528
  cmps(c,0,(int32_t)c->r[9],32); // 800C252C
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 800C2530
  if (crb(c,0)) { goto L_800C2544; } // 800C2534
  c->r[8]=((c->r[7])&0x20)?0u:(c->r[3]>>((c->r[7])&31)); // 800C2538
  c->r[7]=0u+0x00000000u; // 800C253C
  goto L_800C2558; // 800C2540
L_800C2544:;
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 800C2544
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 800C2548
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[3]<<((c->r[7])&31)); // 800C254C
  c->r[8]=c->r[8]|c->r[7]; // 800C2550
  c->r[7]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 800C2554
L_800C2558:;
  cmps(c,0,(int32_t)c->r[0],32); // 800C2558
  c->r[9]=addc(c,c->r[0],0xFFFFFFE0u,0); // 800C255C
  if (crb(c,0)) { goto L_800C2570; } // 800C2560
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 800C2564
  c->r[4]=0u+0x00000000u; // 800C2568
  goto L_800C2584; // 800C256C
L_800C2570:;
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800C2570
  c->r[9]=addc(c,~c->r[0],0x00000020u,1); // 800C2574
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 800C2578
  c->r[3]=c->r[3]|c->r[9]; // 800C257C
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800C2580
L_800C2584:;
  c->r[10]=0u+0xFFFFFFFFu; // 800C2584
  c->r[7]=addc(c,c->r[7],0x00000000u,0); // 800C2588
L_800C258C:;
  c->r[4]=addc(c,c->r[4],c->r[4],c->xer_ca); // 800C258C
  c->r[3]=addc(c,c->r[3],c->r[3],c->xer_ca); // 800C2590
  c->r[8]=addc(c,c->r[8],c->r[8],c->xer_ca); // 800C2594
  c->r[7]=addc(c,c->r[7],c->r[7],c->xer_ca); // 800C2598
  c->r[0]=addc(c,~c->r[6],c->r[8],1); // 800C259C
  c->r[9]=addc(c,~c->r[5],c->r[7],c->xer_ca); cr0(c,c->r[9]); // 800C25A0
  if (crb(c,0)) { goto L_800C25B4; } // 800C25A4
  c->r[8]=c->r[0]|c->r[0]; // 800C25A8
  c->r[7]=c->r[9]|c->r[9]; // 800C25AC
  c->r[0]=addc(c,c->r[10],0x00000001u,0); // 800C25B0
L_800C25B4:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C258C; } // 800C25B4
  c->r[4]=c->r[8]|c->r[8]; // 800C25B8
  c->r[3]=c->r[7]|c->r[7]; // 800C25BC
L_800C25C0:;
  if (!crb(c,28)) { goto L_800C25CC; } // 800C25C0
  c->r[4]=addc(c,~c->r[4],0x00000000u,1); // 800C25C4
  c->r[3]=addc(c,~c->r[3],0,c->xer_ca); // 800C25C8
L_800C25CC:;
  return; // 800C25CC
}

// __shl2i
void f_800C25D0(Ctx* __restrict c) {
  trace_call(0x800C25D0u);
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 800C25D0
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 800C25D4
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 800C25D8
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 800C25DC
  c->r[3]=c->r[3]|c->r[10]; // 800C25E0
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 800C25E4
  c->r[3]=c->r[3]|c->r[10]; // 800C25E8
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 800C25EC
  return; // 800C25F0
}

// fn_800C25F4
void f_800C25F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C25F4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800C25F8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800C25FC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800C2600
  c->r[5]=rotl(c->r[3],12)&0x000007FFu; // 800C2604
  cmpu(c,0,c->r[5],0x000003FFu); // 800C2608
  if (!crb(c,0)) { goto L_800C261C; } // 800C260C
L_800C2610:;
  c->r[3]=0u+0x00000000u; // 800C2610
  c->r[4]=0u+0x00000000u; // 800C2614
  goto L_800C2694; // 800C2618
L_800C261C:;
  c->r[6]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[6]); // 800C261C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C2610; } // 800C2620
  c->r[3]=rotl(c->r[3],0)&0x000FFFFFu; // 800C2624
  c->r[3]=c->r[3]|0x00100000u; // 800C2628
  c->r[5]=c->r[5]+0xFFFFFBCDu; // 800C262C
  cmps(c,0,(int32_t)c->r[5],0); // 800C2630
  if (!crb(c,0)) { goto L_800C2660; } // 800C2634
  c->r[5]=0u-c->r[5]; // 800C2638
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 800C263C
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 800C2640
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]>>((c->r[5])&31)); // 800C2644
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 800C2648
  c->r[4]=c->r[4]|c->r[10]; // 800C264C
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[3]>>((c->r[9])&31)); // 800C2650
  c->r[4]=c->r[4]|c->r[10]; // 800C2654
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]>>((c->r[5])&31)); // 800C2658
  goto L_800C2694; // 800C265C
L_800C2660:;
  cmps(c,0,(int32_t)c->r[5],11); // 800C2660
  if (!crb(c,1)) { goto L_800C2674; } // 800C2664
  c->r[3]=0u+0xFFFFFFFFu; // 800C2668
  c->r[4]=0u+0xFFFFFFFFu; // 800C266C
  goto L_800C2694; // 800C2670
L_800C2674:;
  c->r[8]=addc(c,~c->r[5],0x00000020u,1); // 800C2674
  c->r[9]=addc(c,c->r[5],0xFFFFFFE0u,0); // 800C2678
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 800C267C
  c->r[10]=((c->r[8])&0x20)?0u:(c->r[4]>>((c->r[8])&31)); // 800C2680
  c->r[3]=c->r[3]|c->r[10]; // 800C2684
  c->r[10]=((c->r[9])&0x20)?0u:(c->r[4]<<((c->r[9])&31)); // 800C2688
  c->r[3]=c->r[3]|c->r[10]; // 800C268C
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[4]<<((c->r[5])&31)); // 800C2690
L_800C2694:;
  c->r[1]=c->r[1]+0x00000010u; // 800C2694
  return; // 800C2698
}

// __init_cpp_exceptions
void f_800C269C(Ctx* __restrict c) {
  trace_call(0x800C269Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C269C
  c->r[0]=c->lr; // 800C26A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C26A4
  c->r[0]=R32(c->r[13]+0xFFFF89E8u); // 800C26A8
  cmps(c,0,(int32_t)c->r[0],-2); // 800C26AC
  if (!crb(c,2)) { goto L_800C26C8; } // 800C26B0
  c->r[3]=0u+0x80010000u; // 800C26B4
  c->r[4]=c->r[2]|c->r[2]; // 800C26B8
  c->r[3]=c->r[3]+0xFFFFB9D0u; // 800C26BC
  c->lr=0x800C26C4u; f_800C270C(c); // 800C26C0
  W32(c->r[13]+0xFFFF89E8u,c->r[3]); // 800C26C4
L_800C26C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C26C8
  c->lr=c->r[0]; // 800C26CC
  c->r[1]=c->r[1]+0x00000010u; // 800C26D0
  return; // 800C26D4
}

// __fini_cpp_exceptions
void f_800C26D8(Ctx* __restrict c) {
  trace_call(0x800C26D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C26D8
  c->r[0]=c->lr; // 800C26DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C26E0
  c->r[3]=R32(c->r[13]+0xFFFF89E8u); // 800C26E4
  cmps(c,0,(int32_t)c->r[3],-2); // 800C26E8
  if (crb(c,2)) { goto L_800C26FC; } // 800C26EC
  c->lr=0x800C26F4u; f_800C2740(c); // 800C26F0
  c->r[0]=0u+0xFFFFFFFEu; // 800C26F4
  W32(c->r[13]+0xFFFF89E8u,c->r[0]); // 800C26F8
L_800C26FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C26FC
  c->lr=c->r[0]; // 800C2700
  c->r[1]=c->r[1]+0x00000010u; // 800C2704
  return; // 800C2708
}

// __register_fragment
void f_800C270C(Ctx* __restrict c) {
  trace_call(0x800C270Cu);
  c->r[5]=0u+0x802C0000u; // 800C270C
  c->r[5]=c->r[5]+0xFFFFCEA8u; // 800C2710
  c->r[0]=R32(c->r[5]+0x00000008u); // 800C2714
  cmps(c,0,(int32_t)c->r[0],0); // 800C2718
  if (!crb(c,2)) { goto L_800C2738; } // 800C271C
  W32(c->r[5]+0x00000000u,c->r[3]); // 800C2720
  c->r[0]=0u+0x00000001u; // 800C2724
  c->r[3]=0u+0x00000000u; // 800C2728
  W32(c->r[5]+0x00000004u,c->r[4]); // 800C272C
  W32(c->r[5]+0x00000008u,c->r[0]); // 800C2730
  return; // 800C2734
L_800C2738:;
  c->r[3]=0u+0xFFFFFFFFu; // 800C2738
  return; // 800C273C
}

// __unregister_fragment
void f_800C2740(Ctx* __restrict c) {
  trace_call(0x800C2740u);
  cmps(c,0,(int32_t)c->r[3],0); // 800C2740
  if (crb(c,0)) return; // 800C2744
  cmps(c,0,(int32_t)c->r[3],1); // 800C2748
  if (!crb(c,0)) return; // 800C274C
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800C2750
  c->r[3]=0u+0x802C0000u; // 800C2754
  c->r[0]=0u+0x00000000u; // 800C2758
  c->r[3]=c->r[3]+0xFFFFCEA8u; // 800C275C
  {uint32_t ea=c->r[3]+c->r[4]; W32(ea,c->r[0]); c->r[3]=ea;} // 800C2760
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C2764
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C2768
  return; // 800C276C
}

// fn_800C2770
void f_800C2770(Ctx* __restrict c) {
  c->r[6]=0u+0x802C0000u; // 800C2770
  c->r[6]=c->r[6]+0xFFFFCEA8u; // 800C2774
  c->r[0]=R32(c->r[6]+0x00000008u); // 800C2778
  cmps(c,0,(int32_t)c->r[0],0); // 800C277C
  if (crb(c,2)) { goto L_800C27F0; } // 800C2780
  c->r[7]=R32(c->r[6]+0x00000000u); // 800C2784
L_800C2788:;
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 800C2788
  cmps(c,0,(int32_t)c->r[0],0); // 800C278C
  if (crb(c,2)) { goto L_800C27F0; } // 800C2790
  c->r[5]=R32(c->r[7]+0x00000008u); // 800C2794
  cmpu(c,0,c->r[3],c->r[5]); // 800C2798
  if (crb(c,0)) { goto L_800C27E8; } // 800C279C
  c->r[0]=c->r[5]+c->r[0]; // 800C27A0
  cmpu(c,0,c->r[3],c->r[0]); // 800C27A4
  if (!crb(c,0)) { goto L_800C27E8; } // 800C27A8
  c->r[5]=R32(c->r[7]+0x00000000u); // 800C27AC
  c->r[0]=0u+0x00000000u; // 800C27B0
  c->r[3]=0u+0x00000001u; // 800C27B4
  W32(c->r[4]+0x00000000u,c->r[5]); // 800C27B8
  c->r[5]=R32(c->r[7]+0x00000004u); // 800C27BC
  W32(c->r[4]+0x00000004u,c->r[5]); // 800C27C0
  W32(c->r[4]+0x00000008u,c->r[0]); // 800C27C4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800C27C8
  W32(c->r[4]+0x00000010u,c->r[0]); // 800C27CC
  W32(c->r[4]+0x00000014u,c->r[0]); // 800C27D0
  c->r[0]=R32(c->r[6]+0x00000004u); // 800C27D4
  W32(c->r[4]+0x00000018u,c->r[0]); // 800C27D8
  c->r[0]=R32(c->r[6]+0x00000008u); // 800C27DC
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 800C27E0
  return; // 800C27E4
L_800C27E8:;
  c->r[7]=c->r[7]+0x00000010u; // 800C27E8
  IRQCHK(c); goto L_800C2788; // 800C27EC
L_800C27F0:;
  c->r[3]=0u+0x00000000u; // 800C27F0
  return; // 800C27F4
}

// fn_800C27F8
void f_800C27F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C27F8
  c->r[0]=c->lr; // 800C27FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C2800
  c->r[0]=0u+0x00000000u; // 800C2804
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C2808
  c->r[31]=c->r[4]|c->r[4]; // 800C280C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800C2810
  c->r[30]=c->r[3]|c->r[3]; // 800C2814
  W32(c->r[4]+0x00000000u,c->r[0]); // 800C2818
  W32(c->r[4]+0x00000008u,c->r[0]); // 800C281C
  c->r[4]=c->r[1]+0x00000008u; // 800C2820
  c->lr=0x800C2828u; f_800C2770(c); // 800C2824
  cmps(c,0,(int32_t)c->r[3],0); // 800C2828
  if (crb(c,2)) { goto L_800C2990; } // 800C282C
  c->r[0]=R32(c->r[1]+0x00000010u); // 800C2830
  c->r[3]=0u+0x2AAB0000u; // 800C2834
  c->r[3]=c->r[3]+0xFFFFAAABu; // 800C2838
  c->r[7]=0u+0x00000000u; // 800C283C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800C2840
  c->r[0]=R32(c->r[1]+0x00000018u); // 800C2844
  W32(c->r[31]+0x00000010u,c->r[0]); // 800C2848
  c->r[0]=R32(c->r[1]+0x00000020u); // 800C284C
  W32(c->r[31]+0x00000014u,c->r[0]); // 800C2850
  c->r[5]=R32(c->r[1]+0x00000008u); // 800C2854
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800C2858
  c->r[4]=R32(c->r[1]+0x00000010u); // 800C285C
  c->r[0]=c->r[0]-c->r[5]; // 800C2860
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 800C2864
  c->r[0]=c->r[30]-c->r[4]; // 800C2868
  c->r[3]=sraw(c,c->r[3],1); // 800C286C
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 800C2870
  c->r[9]=c->r[3]+c->r[4]; // 800C2874
L_800C2878:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[9]); // 800C2878
  if (crb(c,1)) { goto L_800C2990; } // 800C287C
  c->r[4]=c->r[7]+c->r[9]; // 800C2880
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 800C2884
  c->r[3]=c->r[3]+c->r[4]; // 800C2888
  c->r[8]=sraw(c,c->r[3],1); // 800C288C
  c->r[3]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 800C2890
  c->r[4]=R32(c->r[5]+c->r[3]); // 800C2894
  c->r[6]=c->r[5]+c->r[3]; // 800C2898
  cmpu(c,0,c->r[0],c->r[4]); // 800C289C
  if (!crb(c,0)) { goto L_800C28AC; } // 800C28A0
  c->r[9]=c->r[8]+0xFFFFFFFFu; // 800C28A4
  IRQCHK(c); goto L_800C2878; // 800C28A8
L_800C28AC:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 800C28AC
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 800C28B0
  c->r[3]=c->r[4]+c->r[3]; // 800C28B4
  cmpu(c,0,c->r[0],c->r[3]); // 800C28B8
  if (!crb(c,1)) { goto L_800C28C8; } // 800C28BC
  c->r[7]=c->r[8]+0x00000001u; // 800C28C0
  IRQCHK(c); goto L_800C2878; // 800C28C4
L_800C28C8:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800C28C8
  c->r[3]=c->r[3]+c->r[4]; // 800C28CC
  W32(c->r[31]+0x00000004u,c->r[3]); // 800C28D0
  c->r[3]=R32(c->r[6]+0x00000004u); // 800C28D4
  c->r[3]=rotl(c->r[3],1)&0x00000001u; cr0(c,c->r[3]); // 800C28D8
  if (crb(c,2)) { goto L_800C28E8; } // 800C28DC
  c->r[5]=c->r[6]+0x00000008u; // 800C28E0
  goto L_800C28F4; // 800C28E4
L_800C28E8:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 800C28E8
  c->r[3]=R32(c->r[6]+0x00000008u); // 800C28EC
  c->r[5]=c->r[4]+c->r[3]; // 800C28F0
L_800C28F4:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 800C28F4
  c->r[3]=R16(c->r[5]+0x00000000u); // 800C28F8
  c->r[4]=R32(c->r[6]+0x00000000u); // 800C28FC
  c->r[3]=rotl(c->r[3],29)&0x00000001u; cr0(c,c->r[3]); // 800C2900
  c->r[0]=c->r[0]-c->r[4]; // 800C2904
  if (crb(c,2)) { goto L_800C2954; } // 800C2908
  c->r[6]=c->r[5]+0x00000004u; // 800C290C
  goto L_800C2944; // 800C2910
L_800C2914:;
  c->r[3]=R16(c->r[6]+0x00000004u); // 800C2914
  cmpu(c,0,c->r[4],c->r[0]); // 800C2918
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800C291C
  c->r[3]=c->r[4]+c->r[3]; // 800C2920
  if (crb(c,1)) { goto L_800C2940; } // 800C2924
  cmpu(c,0,c->r[3],c->r[0]); // 800C2928
  if (crb(c,0)) { goto L_800C2940; } // 800C292C
  c->r[0]=R16(c->r[6]+0x00000006u); // 800C2930
  c->r[0]=c->r[5]+c->r[0]; // 800C2934
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2938
  goto L_800C2990; // 800C293C
L_800C2940:;
  c->r[6]=c->r[6]+0x00000008u; // 800C2940
L_800C2944:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 800C2944
  cmps(c,0,(int32_t)c->r[4],0); // 800C2948
  if (!crb(c,2)) { IRQCHK(c); goto L_800C2914; } // 800C294C
  goto L_800C2990; // 800C2950
L_800C2954:;
  c->r[4]=c->r[5]+0x00000002u; // 800C2954
  goto L_800C2984; // 800C2958
L_800C295C:;
  cmpu(c,0,c->r[3],c->r[0]); // 800C295C
  if (crb(c,1)) { goto L_800C2980; } // 800C2960
  c->r[3]=R16(c->r[4]+0x00000002u); // 800C2964
  cmpu(c,0,c->r[3],c->r[0]); // 800C2968
  if (crb(c,0)) { goto L_800C2980; } // 800C296C
  c->r[0]=R16(c->r[4]+0x00000004u); // 800C2970
  c->r[0]=c->r[5]+c->r[0]; // 800C2974
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2978
  goto L_800C2990; // 800C297C
L_800C2980:;
  c->r[4]=c->r[4]+0x00000006u; // 800C2980
L_800C2984:;
  c->r[3]=R16(c->r[4]+0x00000000u); // 800C2984
  cmps(c,0,(int32_t)c->r[3],0); // 800C2988
  if (!crb(c,2)) { IRQCHK(c); goto L_800C295C; } // 800C298C
L_800C2990:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C2990
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C2994
  c->r[30]=R32(c->r[1]+0x00000028u); // 800C2998
  c->lr=c->r[0]; // 800C299C
  c->r[1]=c->r[1]+0x00000030u; // 800C29A0
  return; // 800C29A4
}

// fn_800C29A8
void f_800C29A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C29A8
  c->r[0]=c->lr; // 800C29AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C29B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C29B4
  c->r[31]=c->r[3]|c->r[3]; // 800C29B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C29BC
L_800C29C0:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 800C29C0
  cmps(c,0,(int32_t)c->r[4],0); // 800C29C4
  if (crb(c,2)) { goto L_800C29D8; } // 800C29C8
  c->r[5]=R8(c->r[4]+0x00000000u); // 800C29CC
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 800C29D0
  if (crb(c,2)) { goto L_800C2A48; } // 800C29D4
L_800C29D8:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C29D8
  c->r[4]=R32(c->r[31]+0x00000018u); // 800C29DC
  c->r[3]=R16(c->r[3]+0x00000000u); // 800C29E0
  c->r[30]=R32(c->r[4]+0x00000000u); // 800C29E4
  c->r[0]=sraw(c,c->r[3],11); cr0(c,c->r[0]); // 800C29E8
  if (crb(c,2)) { goto L_800C2A00; } // 800C29EC
  c->r[0]=rotl(c->r[3],29)&0x000000F8u; // 800C29F0
  c->r[3]=c->r[30]-c->r[0]; // 800C29F4
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 800C29F8
  W32(c->r[31]+0x00000020u,c->r[0]); // 800C29FC
L_800C2A00:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 800C2A00
  c->r[4]=c->r[31]|c->r[31]; // 800C2A04
  c->lr=0x800C2A0Cu; f_800C27F8(c); // 800C2A08
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C2A0C
  cmps(c,0,(int32_t)c->r[0],0); // 800C2A10
  if (!crb(c,2)) { goto L_800C2A1C; } // 800C2A14
  c->lr=0x800C2A1Cu; f_800C1A48(c); // 800C2A18
L_800C2A1C:;
  W32(c->r[31]+0x00000018u,c->r[30]); // 800C2A1C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C2A20
  c->r[0]=R16(c->r[3]+0x00000000u); // 800C2A24
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 800C2A28
  if (crb(c,2)) { goto L_800C2A34; } // 800C2A2C
  c->r[30]=R32(c->r[31]+0x00000020u); // 800C2A30
L_800C2A34:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C2A34
  W32(c->r[31]+0x0000001Cu,c->r[30]); // 800C2A38
  cmps(c,0,(int32_t)c->r[0],0); // 800C2A3C
  if (!crb(c,2)) { goto L_800C2B14; } // 800C2A40
  IRQCHK(c); goto L_800C29C0; // 800C2A44
L_800C2A48:;
  cmpu(c,0,c->r[5],0x00000010u); // 800C2A48
  if (crb(c,1)) { goto L_800C2B10; } // 800C2A4C
  c->r[3]=0u+0x80220000u; // 800C2A50
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800C2A54
  c->r[3]=c->r[3]+0xFFFFB938u; // 800C2A58
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C2A5C
  c->ctr=c->r[3]; // 800C2A60
  if (true) { switch (c->ctr) { case 0x800C2A68u: goto L_800C2A68; case 0x800C2A74u: goto L_800C2A74; case 0x800C2A80u: goto L_800C2A80; case 0x800C2A8Cu: goto L_800C2A8C; case 0x800C2A98u: goto L_800C2A98; case 0x800C2AA4u: goto L_800C2AA4; case 0x800C2AB0u: goto L_800C2AB0; case 0x800C2ABCu: goto L_800C2ABC; case 0x800C2AC8u: goto L_800C2AC8; case 0x800C2AD4u: goto L_800C2AD4; case 0x800C2AE0u: goto L_800C2AE0; case 0x800C2AECu: goto L_800C2AEC; case 0x800C2AF8u: goto L_800C2AF8; case 0x800C2B10u: goto L_800C2B10; default: break; } dispatch(c,c->ctr); return; } // 800C2A64
L_800C2A68:;
  c->r[0]=c->r[4]+0x00000008u; // 800C2A68
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2A6C
  goto L_800C2B14; // 800C2A70
L_800C2A74:;
  c->r[0]=c->r[4]+0x0000000Cu; // 800C2A74
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2A78
  goto L_800C2B14; // 800C2A7C
L_800C2A80:;
  c->r[0]=c->r[4]+0x00000008u; // 800C2A80
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2A84
  goto L_800C2B14; // 800C2A88
L_800C2A8C:;
  c->r[0]=c->r[4]+0x0000000Cu; // 800C2A8C
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2A90
  goto L_800C2B14; // 800C2A94
L_800C2A98:;
  c->r[0]=c->r[4]+0x0000000Cu; // 800C2A98
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2A9C
  goto L_800C2B14; // 800C2AA0
L_800C2AA4:;
  c->r[0]=c->r[4]+0x00000010u; // 800C2AA4
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2AA8
  goto L_800C2B14; // 800C2AAC
L_800C2AB0:;
  c->r[0]=c->r[4]+0x00000014u; // 800C2AB0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2AB4
  goto L_800C2B14; // 800C2AB8
L_800C2ABC:;
  c->r[0]=c->r[4]+0x00000008u; // 800C2ABC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2AC0
  goto L_800C2B14; // 800C2AC4
L_800C2AC8:;
  c->r[0]=c->r[4]+0x0000000Cu; // 800C2AC8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2ACC
  goto L_800C2B14; // 800C2AD0
L_800C2AD4:;
  c->r[0]=c->r[4]+0x0000000Cu; // 800C2AD4
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2AD8
  goto L_800C2B14; // 800C2ADC
L_800C2AE0:;
  c->r[0]=c->r[4]+0x00000010u; // 800C2AE0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2AE4
  goto L_800C2B14; // 800C2AE8
L_800C2AEC:;
  c->r[0]=c->r[4]+0x00000004u; // 800C2AEC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2AF0
  goto L_800C2B14; // 800C2AF4
L_800C2AF8:;
  c->r[0]=R16(c->r[4]+0x00000002u); // 800C2AF8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C2AFC
  c->r[3]=c->r[0]+c->r[4]; // 800C2B00
  c->r[0]=c->r[3]+0x0000000Cu; // 800C2B04
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C2B08
  goto L_800C2B14; // 800C2B0C
L_800C2B10:;
  c->lr=0x800C2B14u; f_800C1A48(c); // 800C2B10
L_800C2B14:;
  c->r[4]=R32(c->r[31]+0x00000008u); // 800C2B14
  c->r[0]=R8(c->r[4]+0x00000000u); // 800C2B18
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 800C2B1C
  cmpu(c,0,c->r[3],0x00000001u); // 800C2B20
  if (!crb(c,2)) { goto L_800C2B40; } // 800C2B24
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C2B28
  c->r[0]=R16(c->r[4]+0x00000002u); // 800C2B2C
  c->r[3]=c->r[3]+c->r[0]; // 800C2B30
  W32(c->r[31]+0x00000008u,c->r[3]); // 800C2B34
  c->r[0]=R8(c->r[3]+0x00000000u); // 800C2B38
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 800C2B3C
L_800C2B40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C2B40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C2B44
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C2B48
  c->lr=c->r[0]; // 800C2B4C
  c->r[1]=c->r[1]+0x00000010u; // 800C2B50
  return; // 800C2B54
}

// fn_800C2B58
void f_800C2B58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C2B58
  c->r[0]=c->lr; // 800C2B5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C2B60
  c->r[11]=c->r[1]+0x00000020u; // 800C2B64
  c->lr=0x800C2B6Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C2B68
  c->r[5]=R32(c->r[4]+0x00000000u); // 800C2B6C
  c->r[6]=R32(c->r[3]+0x00000284u); // 800C2B70
  c->r[0]=R16(c->r[5]+0x00000000u); // 800C2B74
  c->r[7]=R32(c->r[6]+0x00000000u); // 800C2B78
  c->r[6]=rotl(c->r[0],31)&0x00000001u; cr0(c,c->r[6]); // 800C2B7C
  c->r[0]=rotl(c->r[0],26)&0x0000001Fu; // 800C2B80
  if (crb(c,2)) { goto L_800C2B94; } // 800C2B84
  c->r[5]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800C2B88
  c->r[8]=c->r[7]-c->r[5]; // 800C2B8C
  goto L_800C2B9C; // 800C2B90
L_800C2B94:;
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800C2B94
  c->r[8]=c->r[7]-c->r[5]; // 800C2B98
L_800C2B9C:;
  cmps(c,0,(int32_t)c->r[6],0); // 800C2B9C
  if (crb(c,2)) { goto L_800C2DC4; } // 800C2BA0
  c->r[5]=addc(c,~c->r[0],0x00000020u,1); // 800C2BA4
  c->r[6]=0u+0x00000000u; // 800C2BA8
  cmps(c,1,(int32_t)c->r[5],32); // 800C2BAC
  c->r[9]=0u+0x00000000u; // 800C2BB0
  if (!crb(c,4)) { goto L_800C2F30; } // 800C2BB4
  cmps(c,0,(int32_t)c->r[0],8); // 800C2BB8
  if (!crb(c,1)) { goto L_800C2D7C; } // 800C2BBC
  c->r[11]=0u+0x00000000u; // 800C2BC0
  c->r[12]=0u+0x00000000u; // 800C2BC4
  c->r[29]=0u+0x00000000u; // 800C2BC8
  if (crb(c,5)) { goto L_800C2BE4; } // 800C2BCC
  c->r[10]=0u+0x80000000u; // 800C2BD0
  c->r[10]=c->r[10]+0xFFFFFFFEu; // 800C2BD4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[10]); // 800C2BD8
  if (crb(c,1)) { goto L_800C2BE4; } // 800C2BDC
  c->r[29]=0u+0x00000001u; // 800C2BE0
L_800C2BE4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800C2BE4
  if (crb(c,2)) { goto L_800C2BFC; } // 800C2BE8
  c->r[10]=c->r[5]+0x80000000u; // 800C2BEC
  cmpu(c,0,c->r[10],0x00000000u); // 800C2BF0
  if (crb(c,2)) { goto L_800C2BFC; } // 800C2BF4
  c->r[12]=0u+0x00000001u; // 800C2BF8
L_800C2BFC:;
  cmps(c,0,(int32_t)c->r[12],0); // 800C2BFC
  if (crb(c,2)) { goto L_800C2C2C; } // 800C2C00
  c->r[10]=0u-c->r[5]; // 800C2C04
  c->r[12]=0u+0x00000001u; // 800C2C08
  c->r[10]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[10]); // 800C2C0C
  if (!crb(c,2)) { goto L_800C2C20; } // 800C2C10
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800C2C14
  if (crb(c,2)) { goto L_800C2C20; } // 800C2C18
  c->r[12]=0u+0x00000000u; // 800C2C1C
L_800C2C20:;
  cmps(c,0,(int32_t)c->r[12],0); // 800C2C20
  if (crb(c,2)) { goto L_800C2C2C; } // 800C2C24
  c->r[11]=0u+0x00000001u; // 800C2C28
L_800C2C2C:;
  cmps(c,0,(int32_t)c->r[11],0); // 800C2C2C
  if (crb(c,2)) { goto L_800C2D7C; } // 800C2C30
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 800C2C34
  c->r[10]=rotl(c->r[5],4)&0xFFFFFFF0u; // 800C2C38
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800C2C3C
  c->r[28]=c->r[3]+c->r[10]; // 800C2C40
  c->ctr=c->r[0]; // 800C2C44
  cmps(c,0,(int32_t)c->r[5],24); // 800C2C48
  if (!crb(c,0)) { goto L_800C2D7C; } // 800C2C4C
L_800C2C50:;
  c->r[27]=c->r[8]+c->r[9]; // 800C2C50
  c->r[0]=c->r[6]+0x00000001u; // 800C2C54
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2C58
  c->r[31]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800C2C5C
  c->r[10]=c->r[6]+0x00000002u; // 800C2C60
  c->r[0]=c->r[6]+0x00000003u; // 800C2C64
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 800C2C68
  c->r[30]=rotl(c->r[10],4)&0xFFFFFFF0u; // 800C2C6C
  c->r[29]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800C2C70
  c->r[0]=c->r[6]+0x00000004u; // 800C2C74
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2C78
  c->r[12]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800C2C7C
  c->r[11]=c->r[6]+0x00000005u; // 800C2C80
  c->r[10]=c->r[6]+0x00000006u; // 800C2C84
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C2C88
  c->r[0]=c->r[6]+0x00000007u; // 800C2C8C
  c->r[11]=rotl(c->r[11],4)&0xFFFFFFF0u; // 800C2C90
  c->r[10]=rotl(c->r[10],4)&0xFFFFFFF0u; // 800C2C94
  {uint32_t ea=c->r[8]+c->r[9]; c->f[0]=RF64(ea);} // 800C2C98
  c->r[27]=c->r[8]+c->r[31]; // 800C2C9C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800C2CA0
  c->r[30]=c->r[8]+c->r[30]; // 800C2CA4
  {uint32_t ea=c->r[28]+0x00000000u; WF64(ea,c->f[0]);} // 800C2CA8
  c->r[29]=c->r[8]+c->r[29]; // 800C2CAC
  c->r[12]=c->r[8]+c->r[12]; // 800C2CB0
  c->r[11]=c->r[8]+c->r[11]; // 800C2CB4
  {uint32_t ea=c->r[27]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2CB8
  c->r[10]=c->r[8]+c->r[10]; // 800C2CBC
  c->r[31]=c->r[8]+c->r[0]; // 800C2CC0
  c->r[6]=c->r[6]+0x00000008u; // 800C2CC4
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[0]);} // 800C2CC8
  c->r[9]=c->r[9]+0x00000080u; // 800C2CCC
  c->r[5]=c->r[5]+0x00000008u; // 800C2CD0
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2CD4
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 800C2CD8
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=RF64(ea);} // 800C2CDC
  {uint32_t ea=c->r[28]+0x00000010u; WF64(ea,c->f[0]);} // 800C2CE0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2CE4
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 800C2CE8
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2CEC
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[0]);} // 800C2CF0
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=RF64(ea);} // 800C2CF4
  {uint32_t ea=c->r[28]+0x00000020u; WF64(ea,c->f[0]);} // 800C2CF8
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2CFC
  {uint32_t ea=c->r[28]+0x00000038u; WF32(ea,c->f[0]);} // 800C2D00
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2D04
  {uint32_t ea=c->r[28]+0x0000003Cu; WF32(ea,c->f[0]);} // 800C2D08
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=RF64(ea);} // 800C2D0C
  {uint32_t ea=c->r[28]+0x00000030u; WF64(ea,c->f[0]);} // 800C2D10
  {uint32_t ea=c->r[12]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2D14
  {uint32_t ea=c->r[28]+0x00000048u; WF32(ea,c->f[0]);} // 800C2D18
  {uint32_t ea=c->r[12]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2D1C
  {uint32_t ea=c->r[28]+0x0000004Cu; WF32(ea,c->f[0]);} // 800C2D20
  {uint32_t ea=c->r[12]+0x00000000u; c->f[0]=RF64(ea);} // 800C2D24
  {uint32_t ea=c->r[28]+0x00000040u; WF64(ea,c->f[0]);} // 800C2D28
  {uint32_t ea=c->r[11]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2D2C
  {uint32_t ea=c->r[28]+0x00000058u; WF32(ea,c->f[0]);} // 800C2D30
  {uint32_t ea=c->r[11]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2D34
  {uint32_t ea=c->r[28]+0x0000005Cu; WF32(ea,c->f[0]);} // 800C2D38
  {uint32_t ea=c->r[11]+0x00000000u; c->f[0]=RF64(ea);} // 800C2D3C
  {uint32_t ea=c->r[28]+0x00000050u; WF64(ea,c->f[0]);} // 800C2D40
  {uint32_t ea=c->r[10]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2D44
  {uint32_t ea=c->r[28]+0x00000068u; WF32(ea,c->f[0]);} // 800C2D48
  {uint32_t ea=c->r[10]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2D4C
  {uint32_t ea=c->r[28]+0x0000006Cu; WF32(ea,c->f[0]);} // 800C2D50
  {uint32_t ea=c->r[10]+0x00000000u; c->f[0]=RF64(ea);} // 800C2D54
  {uint32_t ea=c->r[28]+0x00000060u; WF64(ea,c->f[0]);} // 800C2D58
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2D5C
  {uint32_t ea=c->r[28]+0x00000078u; WF32(ea,c->f[0]);} // 800C2D60
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2D64
  {uint32_t ea=c->r[28]+0x0000007Cu; WF32(ea,c->f[0]);} // 800C2D68
  {uint32_t ea=c->r[8]+c->r[0]; c->f[0]=RF64(ea);} // 800C2D6C
  {uint32_t ea=c->r[28]+0x00000070u; WF64(ea,c->f[0]);} // 800C2D70
  c->r[28]=c->r[28]+0x00000080u; // 800C2D74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2C50; } // 800C2D78
L_800C2D7C:;
  c->r[9]=rotl(c->r[6],4)&0xFFFFFFF0u; // 800C2D7C
  c->r[6]=rotl(c->r[5],4)&0xFFFFFFF0u; // 800C2D80
  c->r[0]=addc(c,~c->r[5],0x00000020u,1); // 800C2D84
  c->r[9]=c->r[8]+c->r[9]; // 800C2D88
  c->r[6]=c->r[3]+c->r[6]; // 800C2D8C
  c->ctr=c->r[0]; // 800C2D90
  cmps(c,0,(int32_t)c->r[5],32); // 800C2D94
  if (!crb(c,0)) { goto L_800C2F30; } // 800C2D98
L_800C2D9C:;
  {uint32_t ea=c->r[9]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2D9C
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 800C2DA0
  {uint32_t ea=c->r[9]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800C2DA4
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[0]);} // 800C2DA8
  {uint32_t ea=c->r[9]+0x00000000u; c->f[0]=RF64(ea);} // 800C2DAC
  c->r[9]=c->r[9]+0x00000010u; // 800C2DB0
  {uint32_t ea=c->r[6]+0x00000000u; WF64(ea,c->f[0]);} // 800C2DB4
  c->r[6]=c->r[6]+0x00000010u; // 800C2DB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2D9C; } // 800C2DBC
  goto L_800C2F30; // 800C2DC0
L_800C2DC4:;
  c->r[5]=addc(c,~c->r[0],0x00000020u,1); // 800C2DC4
  c->r[6]=0u+0x00000000u; // 800C2DC8
  cmps(c,1,(int32_t)c->r[5],32); // 800C2DCC
  c->r[9]=0u+0x00000000u; // 800C2DD0
  if (!crb(c,4)) { goto L_800C2F30; } // 800C2DD4
  cmps(c,0,(int32_t)c->r[0],8); // 800C2DD8
  if (!crb(c,1)) { goto L_800C2EFC; } // 800C2DDC
  c->r[11]=0u+0x00000000u; // 800C2DE0
  c->r[12]=0u+0x00000000u; // 800C2DE4
  c->r[29]=0u+0x00000000u; // 800C2DE8
  if (crb(c,5)) { goto L_800C2E04; } // 800C2DEC
  c->r[10]=0u+0x80000000u; // 800C2DF0
  c->r[10]=c->r[10]+0xFFFFFFFEu; // 800C2DF4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[10]); // 800C2DF8
  if (crb(c,1)) { goto L_800C2E04; } // 800C2DFC
  c->r[29]=0u+0x00000001u; // 800C2E00
L_800C2E04:;
  cmps(c,0,(int32_t)c->r[29],0); // 800C2E04
  if (crb(c,2)) { goto L_800C2E1C; } // 800C2E08
  c->r[10]=c->r[5]+0x80000000u; // 800C2E0C
  cmpu(c,0,c->r[10],0x00000000u); // 800C2E10
  if (crb(c,2)) { goto L_800C2E1C; } // 800C2E14
  c->r[12]=0u+0x00000001u; // 800C2E18
L_800C2E1C:;
  cmps(c,0,(int32_t)c->r[12],0); // 800C2E1C
  if (crb(c,2)) { goto L_800C2E4C; } // 800C2E20
  c->r[10]=0u-c->r[5]; // 800C2E24
  c->r[12]=0u+0x00000001u; // 800C2E28
  c->r[10]=rotl(c->r[10],0)&0x80000000u; cr0(c,c->r[10]); // 800C2E2C
  if (!crb(c,2)) { goto L_800C2E40; } // 800C2E30
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800C2E34
  if (crb(c,2)) { goto L_800C2E40; } // 800C2E38
  c->r[12]=0u+0x00000000u; // 800C2E3C
L_800C2E40:;
  cmps(c,0,(int32_t)c->r[12],0); // 800C2E40
  if (crb(c,2)) { goto L_800C2E4C; } // 800C2E44
  c->r[11]=0u+0x00000001u; // 800C2E48
L_800C2E4C:;
  cmps(c,0,(int32_t)c->r[11],0); // 800C2E4C
  if (crb(c,2)) { goto L_800C2EFC; } // 800C2E50
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 800C2E54
  c->r[10]=rotl(c->r[5],4)&0xFFFFFFF0u; // 800C2E58
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800C2E5C
  c->r[31]=c->r[3]+c->r[10]; // 800C2E60
  c->ctr=c->r[0]; // 800C2E64
  cmps(c,0,(int32_t)c->r[5],24); // 800C2E68
  if (!crb(c,0)) { goto L_800C2EFC; } // 800C2E6C
L_800C2E70:;
  {uint32_t ea=c->r[8]+c->r[9]; c->f[0]=RF64(ea);} // 800C2E70
  c->r[0]=c->r[6]+0x00000001u; // 800C2E74
  c->r[30]=c->r[6]+0x00000002u; // 800C2E78
  c->r[29]=c->r[6]+0x00000003u; // 800C2E7C
  {uint32_t ea=c->r[31]+0x00000000u; WF64(ea,c->f[0]);} // 800C2E80
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800C2E84
  c->r[12]=c->r[6]+0x00000004u; // 800C2E88
  c->r[11]=c->r[6]+0x00000005u; // 800C2E8C
  {uint32_t ea=c->r[8]+c->r[0]; c->f[0]=RF64(ea);} // 800C2E90
  c->r[10]=c->r[6]+0x00000006u; // 800C2E94
  c->r[0]=c->r[6]+0x00000007u; // 800C2E98
  c->r[30]=rotl(c->r[30],3)&0xFFFFFFF8u; // 800C2E9C
  {uint32_t ea=c->r[31]+0x00000010u; WF64(ea,c->f[0]);} // 800C2EA0
  c->r[29]=rotl(c->r[29],3)&0xFFFFFFF8u; // 800C2EA4
  c->r[12]=rotl(c->r[12],3)&0xFFFFFFF8u; // 800C2EA8
  c->r[11]=rotl(c->r[11],3)&0xFFFFFFF8u; // 800C2EAC
  {uint32_t ea=c->r[8]+c->r[30]; c->f[0]=RF64(ea);} // 800C2EB0
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFF8u; // 800C2EB4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800C2EB8
  c->r[6]=c->r[6]+0x00000008u; // 800C2EBC
  {uint32_t ea=c->r[31]+0x00000020u; WF64(ea,c->f[0]);} // 800C2EC0
  c->r[9]=c->r[9]+0x00000040u; // 800C2EC4
  c->r[5]=c->r[5]+0x00000008u; // 800C2EC8
  {uint32_t ea=c->r[8]+c->r[29]; c->f[0]=RF64(ea);} // 800C2ECC
  {uint32_t ea=c->r[31]+0x00000030u; WF64(ea,c->f[0]);} // 800C2ED0
  {uint32_t ea=c->r[8]+c->r[12]; c->f[0]=RF64(ea);} // 800C2ED4
  {uint32_t ea=c->r[31]+0x00000040u; WF64(ea,c->f[0]);} // 800C2ED8
  {uint32_t ea=c->r[8]+c->r[11]; c->f[0]=RF64(ea);} // 800C2EDC
  {uint32_t ea=c->r[31]+0x00000050u; WF64(ea,c->f[0]);} // 800C2EE0
  {uint32_t ea=c->r[8]+c->r[10]; c->f[0]=RF64(ea);} // 800C2EE4
  {uint32_t ea=c->r[31]+0x00000060u; WF64(ea,c->f[0]);} // 800C2EE8
  {uint32_t ea=c->r[8]+c->r[0]; c->f[0]=RF64(ea);} // 800C2EEC
  {uint32_t ea=c->r[31]+0x00000070u; WF64(ea,c->f[0]);} // 800C2EF0
  c->r[31]=c->r[31]+0x00000080u; // 800C2EF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2E70; } // 800C2EF8
L_800C2EFC:;
  c->r[9]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800C2EFC
  c->r[6]=rotl(c->r[5],4)&0xFFFFFFF0u; // 800C2F00
  c->r[0]=addc(c,~c->r[5],0x00000020u,1); // 800C2F04
  c->r[9]=c->r[8]+c->r[9]; // 800C2F08
  c->r[6]=c->r[3]+c->r[6]; // 800C2F0C
  c->ctr=c->r[0]; // 800C2F10
  cmps(c,0,(int32_t)c->r[5],32); // 800C2F14
  if (!crb(c,0)) { goto L_800C2F30; } // 800C2F18
L_800C2F1C:;
  {uint32_t ea=c->r[9]+0x00000000u; c->f[0]=RF64(ea);} // 800C2F1C
  c->r[9]=c->r[9]+0x00000008u; // 800C2F20
  {uint32_t ea=c->r[6]+0x00000000u; WF64(ea,c->f[0]);} // 800C2F24
  c->r[6]=c->r[6]+0x00000010u; // 800C2F28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2F1C; } // 800C2F2C
L_800C2F30:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 800C2F30
  c->r[6]=0u+0x00000000u; // 800C2F34
  c->r[9]=0u+0x00000000u; // 800C2F38
  c->r[0]=R16(c->r[4]+0x00000000u); // 800C2F3C
  c->r[27]=sraw(c,c->r[0],11); // 800C2F40
  c->r[5]=addc(c,~c->r[27],0x00000020u,1); // 800C2F44
  cmps(c,1,(int32_t)c->r[5],32); // 800C2F48
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800C2F4C
  c->r[8]=c->r[8]-c->r[0]; // 800C2F50
  if (!crb(c,4)) { goto L_800C30B0; } // 800C2F54
  cmps(c,0,(int32_t)c->r[27],8); // 800C2F58
  if (!crb(c,1)) { goto L_800C307C; } // 800C2F5C
  c->r[10]=0u+0x00000000u; // 800C2F60
  c->r[11]=0u+0x00000000u; // 800C2F64
  c->r[12]=0u+0x00000000u; // 800C2F68
  if (crb(c,5)) { goto L_800C2F84; } // 800C2F6C
  c->r[4]=0u+0x80000000u; // 800C2F70
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 800C2F74
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800C2F78
  if (crb(c,1)) { goto L_800C2F84; } // 800C2F7C
  c->r[12]=0u+0x00000001u; // 800C2F80
L_800C2F84:;
  cmps(c,0,(int32_t)c->r[12],0); // 800C2F84
  if (crb(c,2)) { goto L_800C2F9C; } // 800C2F88
  c->r[0]=c->r[5]+0x80000000u; // 800C2F8C
  cmpu(c,0,c->r[0],0x00000000u); // 800C2F90
  if (crb(c,2)) { goto L_800C2F9C; } // 800C2F94
  c->r[11]=0u+0x00000001u; // 800C2F98
L_800C2F9C:;
  cmps(c,0,(int32_t)c->r[11],0); // 800C2F9C
  if (crb(c,2)) { goto L_800C2FCC; } // 800C2FA0
  c->r[0]=0u-c->r[5]; // 800C2FA4
  c->r[4]=0u+0x00000001u; // 800C2FA8
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800C2FAC
  if (!crb(c,2)) { goto L_800C2FC0; } // 800C2FB0
  c->r[0]=rotl(c->r[27],0)&0x80000000u; cr0(c,c->r[0]); // 800C2FB4
  if (crb(c,2)) { goto L_800C2FC0; } // 800C2FB8
  c->r[4]=0u+0x00000000u; // 800C2FBC
L_800C2FC0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C2FC0
  if (crb(c,2)) { goto L_800C2FCC; } // 800C2FC4
  c->r[10]=0u+0x00000001u; // 800C2FC8
L_800C2FCC:;
  cmps(c,0,(int32_t)c->r[10],0); // 800C2FCC
  if (crb(c,2)) { goto L_800C307C; } // 800C2FD0
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 800C2FD4
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800C2FD8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800C2FDC
  c->r[4]=c->r[3]+c->r[4]; // 800C2FE0
  c->ctr=c->r[0]; // 800C2FE4
  cmps(c,0,(int32_t)c->r[5],24); // 800C2FE8
  if (!crb(c,0)) { goto L_800C307C; } // 800C2FEC
L_800C2FF0:;
  c->r[10]=R32(c->r[8]+c->r[9]); // 800C2FF0
  c->r[0]=c->r[6]+0x00000001u; // 800C2FF4
  c->r[30]=c->r[6]+0x00000002u; // 800C2FF8
  c->r[31]=c->r[6]+0x00000003u; // 800C2FFC
  W32(c->r[4]+0x00000200u,c->r[10]); // 800C3000
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C3004
  c->r[12]=c->r[6]+0x00000004u; // 800C3008
  c->r[11]=c->r[6]+0x00000005u; // 800C300C
  c->r[29]=R32(c->r[8]+c->r[0]); // 800C3010
  c->r[10]=c->r[6]+0x00000006u; // 800C3014
  c->r[0]=c->r[6]+0x00000007u; // 800C3018
  c->r[30]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800C301C
  W32(c->r[4]+0x00000204u,c->r[29]); // 800C3020
  c->r[31]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800C3024
  c->r[12]=rotl(c->r[12],2)&0xFFFFFFFCu; // 800C3028
  c->r[11]=rotl(c->r[11],2)&0xFFFFFFFCu; // 800C302C
  c->r[30]=R32(c->r[8]+c->r[30]); // 800C3030
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800C3034
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C3038
  c->r[6]=c->r[6]+0x00000008u; // 800C303C
  W32(c->r[4]+0x00000208u,c->r[30]); // 800C3040
  c->r[9]=c->r[9]+0x00000020u; // 800C3044
  c->r[5]=c->r[5]+0x00000008u; // 800C3048
  c->r[31]=R32(c->r[8]+c->r[31]); // 800C304C
  W32(c->r[4]+0x0000020Cu,c->r[31]); // 800C3050
  c->r[12]=R32(c->r[8]+c->r[12]); // 800C3054
  W32(c->r[4]+0x00000210u,c->r[12]); // 800C3058
  c->r[11]=R32(c->r[8]+c->r[11]); // 800C305C
  W32(c->r[4]+0x00000214u,c->r[11]); // 800C3060
  c->r[10]=R32(c->r[8]+c->r[10]); // 800C3064
  W32(c->r[4]+0x00000218u,c->r[10]); // 800C3068
  c->r[0]=R32(c->r[8]+c->r[0]); // 800C306C
  W32(c->r[4]+0x0000021Cu,c->r[0]); // 800C3070
  c->r[4]=c->r[4]+0x00000020u; // 800C3074
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C2FF0; } // 800C3078
L_800C307C:;
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800C307C
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800C3080
  c->r[0]=addc(c,~c->r[5],0x00000020u,1); // 800C3084
  c->r[6]=c->r[8]+c->r[6]; // 800C3088
  c->r[4]=c->r[3]+c->r[4]; // 800C308C
  c->ctr=c->r[0]; // 800C3090
  cmps(c,0,(int32_t)c->r[5],32); // 800C3094
  if (!crb(c,0)) { goto L_800C30B0; } // 800C3098
L_800C309C:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800C309C
  c->r[6]=c->r[6]+0x00000004u; // 800C30A0
  W32(c->r[4]+0x00000200u,c->r[0]); // 800C30A4
  c->r[4]=c->r[4]+0x00000004u; // 800C30A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C309C; } // 800C30AC
L_800C30B0:;
  W32(c->r[3]+0x00000284u,c->r[7]); // 800C30B0
  c->r[11]=c->r[1]+0x00000020u; // 800C30B4
  c->r[3]=R32(c->r[7]+0x00000004u); // 800C30B8
  c->lr=0x800C30C0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C30BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C30C0
  c->lr=c->r[0]; // 800C30C4
  c->r[1]=c->r[1]+0x00000020u; // 800C30C8
  return; // 800C30CC
}

// fn_800C30D0
void f_800C30D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C30D0
  c->r[0]=c->lr; // 800C30D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C30D8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C30DC
  c->r[31]=0u+0x00000000u; // 800C30E0
  c->r[25]=c->r[3]|c->r[3]; // 800C30E4
  c->r[26]=c->r[4]|c->r[4]; // 800C30E8
  c->r[27]=c->r[5]|c->r[5]; // 800C30EC
  c->r[30]=0u+0x80220000u; // 800C30F0
L_800C30F4:;
  c->r[29]=R32(c->r[26]+0x00000008u); // 800C30F4
  cmps(c,0,(int32_t)c->r[29],0); // 800C30F8
  if (!crb(c,2)) { goto L_800C3148; } // 800C30FC
  c->r[3]=c->r[25]|c->r[25]; // 800C3100
  c->r[4]=c->r[26]|c->r[26]; // 800C3104
  c->lr=0x800C310Cu; f_800C2B58(c); // 800C3108
  c->r[4]=c->r[26]|c->r[26]; // 800C310C
  c->lr=0x800C3114u; f_800C27F8(c); // 800C3110
  c->r[0]=R32(c->r[26]+0x00000000u); // 800C3114
  cmps(c,0,(int32_t)c->r[0],0); // 800C3118
  if (!crb(c,2)) { goto L_800C3124; } // 800C311C
  c->lr=0x800C3124u; f_800C1A48(c); // 800C3120
L_800C3124:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 800C3124
  c->r[0]=R16(c->r[3]+0x00000000u); // 800C3128
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 800C312C
  if (crb(c,2)) { goto L_800C313C; } // 800C3130
  c->r[0]=R32(c->r[25]+0x0000027Cu); // 800C3134
  goto L_800C3140; // 800C3138
L_800C313C:;
  c->r[0]=R32(c->r[25]+0x00000284u); // 800C313C
L_800C3140:;
  W32(c->r[25]+0x00000288u,c->r[0]); // 800C3140
  IRQCHK(c); goto L_800C30F4; // 800C3144
L_800C3148:;
  c->r[28]=R8(c->r[29]+0x00000000u); // 800C3148
  c->r[0]=rotl(c->r[28],0)&0x0000007Fu; // 800C314C
  cmpu(c,0,c->r[0],0x00000010u); // 800C3150
  if (crb(c,1)) { goto L_800C35B4; } // 800C3154
  c->r[3]=c->r[30]+0xFFFFB97Cu; // 800C3158
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C315C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C3160
  c->ctr=c->r[3]; // 800C3164
  if (true) { switch (c->ctr) { case 0x800C316Cu: goto L_800C316C; case 0x800C3180u: goto L_800C3180; case 0x800C31ACu: goto L_800C31AC; case 0x800C3210u: goto L_800C3210; case 0x800C325Cu: goto L_800C325C; case 0x800C32B0u: goto L_800C32B0; case 0x800C3304u: goto L_800C3304; case 0x800C3358u: goto L_800C3358; case 0x800C33E0u: goto L_800C33E0; case 0x800C345Cu: goto L_800C345C; case 0x800C34A4u: goto L_800C34A4; case 0x800C3520u: goto L_800C3520; case 0x800C3534u: goto L_800C3534; case 0x800C3548u: goto L_800C3548; case 0x800C3594u: goto L_800C3594; case 0x800C35B4u: goto L_800C35B4; default: break; } dispatch(c,c->ctr); return; } // 800C3168
L_800C316C:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 800C316C
  c->r[0]=R16(c->r[29]+0x00000002u); // 800C3170
  c->r[0]=c->r[3]+c->r[0]; // 800C3174
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C3178
  goto L_800C35B8; // 800C317C
L_800C3180:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 800C3180
  c->r[4]=0u+0xFFFFFFFFu; // 800C3184
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C3188
  c->r[12]=R32(c->r[29]+0x00000004u); // 800C318C
  c->r[3]=c->r[3]+c->r[0]; // 800C3190
  c->ctr=c->r[12]; // 800C3194
  if (true) { c->lr=0x800C319Cu; dispatch(c,c->ctr); } // 800C3198
  c->r[3]=R32(c->r[26]+0x00000008u); // 800C319C
  c->r[0]=c->r[3]+0x00000008u; // 800C31A0
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C31A4
  goto L_800C35B8; // 800C31A8
L_800C31AC:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 800C31AC
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 800C31B0
  if (crb(c,2)) { goto L_800C31D0; } // 800C31B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C31B8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C31BC
  c->r[3]=c->r[25]+c->r[0]; // 800C31C0
  c->r[0]=R32(c->r[3]+0x00000200u); // 800C31C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C31C8
  goto L_800C31DC; // 800C31CC
L_800C31D0:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 800C31D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C31D4
  c->r[0]=R8(c->r[3]+c->r[0]); // 800C31D8
L_800C31DC:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C31DC
  if (crb(c,2)) { goto L_800C3200; } // 800C31E0
  c->r[3]=R32(c->r[25]+0x00000288u); // 800C31E4
  c->r[4]=0u+0xFFFFFFFFu; // 800C31E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000004u); // 800C31EC
  c->r[12]=R32(c->r[29]+0x00000008u); // 800C31F0
  c->r[3]=c->r[3]+c->r[0]; // 800C31F4
  c->ctr=c->r[12]; // 800C31F8
  if (true) { c->lr=0x800C3200u; dispatch(c,c->ctr); } // 800C31FC
L_800C3200:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 800C3200
  c->r[0]=c->r[3]+0x0000000Cu; // 800C3204
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C3208
  goto L_800C35B8; // 800C320C
L_800C3210:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 800C3210
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 800C3214
  if (crb(c,2)) { goto L_800C3230; } // 800C3218
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C321C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C3220
  c->r[3]=c->r[25]+c->r[0]; // 800C3224
  c->r[3]=R32(c->r[3]+0x00000200u); // 800C3228
  goto L_800C323C; // 800C322C
L_800C3230:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 800C3230
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C3234
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C3238
L_800C323C:;
  c->r[12]=R32(c->r[29]+0x00000004u); // 800C323C
  c->r[4]=0u+0xFFFFFFFFu; // 800C3240
  c->ctr=c->r[12]; // 800C3244
  if (true) { c->lr=0x800C324Cu; dispatch(c,c->ctr); } // 800C3248
  c->r[3]=R32(c->r[26]+0x00000008u); // 800C324C
  c->r[0]=c->r[3]+0x00000008u; // 800C3250
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C3254
  goto L_800C35B8; // 800C3258
L_800C325C:;
  c->r[23]=R16(c->r[29]+0x00000004u); // 800C325C
  c->r[24]=R16(c->r[29]+0x00000006u); // 800C3260
  c->r[4]=R32(c->r[25]+0x00000288u); // 800C3264
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[23]); // 800C3268
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C326C
  c->r[22]=c->r[4]+c->r[3]; // 800C3270
  c->r[22]=c->r[22]+c->r[0]; // 800C3274
  goto L_800C3298; // 800C3278
L_800C327C:;
  c->r[12]=R32(c->r[29]+0x00000008u); // 800C327C
  c->r[22]=c->r[22]-c->r[24]; // 800C3280
  c->r[3]=c->r[22]|c->r[22]; // 800C3284
  c->r[4]=0u+0xFFFFFFFFu; // 800C3288
  c->ctr=c->r[12]; // 800C328C
  if (true) { c->lr=0x800C3294u; dispatch(c,c->ctr); } // 800C3290
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 800C3294
L_800C3298:;
  cmps(c,0,(int32_t)c->r[23],0); // 800C3298
  if (crb(c,1)) { IRQCHK(c); goto L_800C327C; } // 800C329C
  c->r[3]=R32(c->r[26]+0x00000008u); // 800C32A0
  c->r[0]=c->r[3]+0x0000000Cu; // 800C32A4
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C32A8
  goto L_800C35B8; // 800C32AC
L_800C32B0:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 800C32B0
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 800C32B4
  if (crb(c,2)) { goto L_800C32D0; } // 800C32B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C32BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C32C0
  c->r[3]=c->r[25]+c->r[0]; // 800C32C4
  c->r[3]=R32(c->r[3]+0x00000200u); // 800C32C8
  goto L_800C32DC; // 800C32CC
L_800C32D0:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 800C32D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C32D4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C32D8
L_800C32DC:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 800C32DC
  c->r[4]=0u+0x00000000u; // 800C32E0
  c->r[12]=R32(c->r[29]+0x00000008u); // 800C32E4
  c->r[3]=c->r[3]+c->r[0]; // 800C32E8
  c->ctr=c->r[12]; // 800C32EC
  if (true) { c->lr=0x800C32F4u; dispatch(c,c->ctr); } // 800C32F0
  c->r[3]=R32(c->r[26]+0x00000008u); // 800C32F4
  c->r[0]=c->r[3]+0x0000000Cu; // 800C32F8
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C32FC
  goto L_800C35B8; // 800C3300
L_800C3304:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 800C3304
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 800C3308
  if (crb(c,2)) { goto L_800C3324; } // 800C330C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C3310
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C3314
  c->r[3]=c->r[25]+c->r[0]; // 800C3318
  c->r[3]=R32(c->r[3]+0x00000200u); // 800C331C
  goto L_800C3330; // 800C3320
L_800C3324:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 800C3324
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C3328
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C332C
L_800C3330:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 800C3330
  c->r[4]=0u+0xFFFFFFFFu; // 800C3334
  c->r[12]=R32(c->r[29]+0x00000008u); // 800C3338
  c->r[3]=c->r[3]+c->r[0]; // 800C333C
  c->ctr=c->r[12]; // 800C3340
  if (true) { c->lr=0x800C3348u; dispatch(c,c->ctr); } // 800C3344
  c->r[3]=R32(c->r[26]+0x00000008u); // 800C3348
  c->r[0]=c->r[3]+0x0000000Cu; // 800C334C
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C3350
  goto L_800C35B8; // 800C3354
L_800C3358:;
  c->r[4]=R8(c->r[29]+0x00000001u); // 800C3358
  c->r[0]=rotl(c->r[4],26)&0x00000001u; cr0(c,c->r[0]); // 800C335C
  if (crb(c,2)) { goto L_800C3378; } // 800C3360
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000004u); // 800C3364
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C3368
  c->r[3]=c->r[25]+c->r[0]; // 800C336C
  c->r[5]=R32(c->r[3]+0x00000200u); // 800C3370
  goto L_800C3384; // 800C3374
L_800C3378:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 800C3378
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000004u); // 800C337C
  c->r[5]=R32(c->r[3]+c->r[0]); // 800C3380
L_800C3384:;
  c->r[0]=rotl(c->r[4],25)&0x00000001u; cr0(c,c->r[0]); // 800C3384
  if (crb(c,2)) { goto L_800C33A4; } // 800C3388
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C338C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C3390
  c->r[3]=c->r[25]+c->r[0]; // 800C3394
  c->r[0]=R32(c->r[3]+0x00000200u); // 800C3398
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800C339C
  goto L_800C33B0; // 800C33A0
L_800C33A4:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 800C33A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C33A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+c->r[0]); // 800C33AC
L_800C33B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C33B0
  if (crb(c,2)) { goto L_800C33D0; } // 800C33B4
  c->r[0]=R32(c->r[29]+0x00000008u); // 800C33B8
  c->r[4]=0u+0x00000000u; // 800C33BC
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 800C33C0
  c->r[3]=c->r[5]+c->r[0]; // 800C33C4
  c->ctr=c->r[12]; // 800C33C8
  if (true) { c->lr=0x800C33D0u; dispatch(c,c->ctr); } // 800C33CC
L_800C33D0:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 800C33D0
  c->r[0]=c->r[3]+0x00000010u; // 800C33D4
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C33D8
  goto L_800C35B8; // 800C33DC
L_800C33E0:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 800C33E0
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 800C33E4
  if (crb(c,2)) { goto L_800C3400; } // 800C33E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C33EC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C33F0
  c->r[3]=c->r[25]+c->r[0]; // 800C33F4
  c->r[24]=R32(c->r[3]+0x00000200u); // 800C33F8
  goto L_800C340C; // 800C33FC
L_800C3400:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 800C3400
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C3404
  c->r[24]=R32(c->r[3]+c->r[0]); // 800C3408
L_800C340C:;
  c->r[23]=R32(c->r[29]+0x00000008u); // 800C340C
  c->r[22]=R32(c->r[29]+0x0000000Cu); // 800C3410
  c->r[3]=R32(c->r[29]+0x00000004u); // 800C3414
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)c->r[23]); // 800C3418
  c->r[24]=c->r[24]+c->r[3]; // 800C341C
  c->r[24]=c->r[24]+c->r[0]; // 800C3420
  goto L_800C3444; // 800C3424
L_800C3428:;
  c->r[12]=R32(c->r[29]+0x00000010u); // 800C3428
  c->r[24]=c->r[24]-c->r[22]; // 800C342C
  c->r[3]=c->r[24]|c->r[24]; // 800C3430
  c->r[4]=0u+0xFFFFFFFFu; // 800C3434
  c->ctr=c->r[12]; // 800C3438
  if (true) { c->lr=0x800C3440u; dispatch(c,c->ctr); } // 800C343C
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 800C3440
L_800C3444:;
  cmps(c,0,(int32_t)c->r[23],0); // 800C3444
  if (crb(c,1)) { IRQCHK(c); goto L_800C3428; } // 800C3448
  c->r[3]=R32(c->r[26]+0x00000008u); // 800C344C
  c->r[0]=c->r[3]+0x00000014u; // 800C3450
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C3454
  goto L_800C35B8; // 800C3458
L_800C345C:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 800C345C
  c->r[0]=sraw(c,c->r[0],7); cr0(c,c->r[0]); // 800C3460
  if (crb(c,2)) { goto L_800C347C; } // 800C3464
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C3468
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C346C
  c->r[3]=c->r[25]+c->r[0]; // 800C3470
  c->r[3]=R32(c->r[3]+0x00000200u); // 800C3474
  goto L_800C3488; // 800C3478
L_800C347C:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 800C347C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C3480
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C3484
L_800C3488:;
  c->r[12]=R32(c->r[29]+0x00000004u); // 800C3488
  c->ctr=c->r[12]; // 800C348C
  if (true) { c->lr=0x800C3494u; dispatch(c,c->ctr); } // 800C3490
  c->r[3]=R32(c->r[26]+0x00000008u); // 800C3494
  c->r[0]=c->r[3]+0x00000008u; // 800C3498
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C349C
  goto L_800C35B8; // 800C34A0
L_800C34A4:;
  c->r[4]=R8(c->r[29]+0x00000001u); // 800C34A4
  c->r[0]=rotl(c->r[4],26)&0x00000001u; cr0(c,c->r[0]); // 800C34A8
  if (crb(c,2)) { goto L_800C34C4; } // 800C34AC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000004u); // 800C34B0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C34B4
  c->r[3]=c->r[25]+c->r[0]; // 800C34B8
  c->r[3]=R32(c->r[3]+0x00000200u); // 800C34BC
  goto L_800C34D0; // 800C34C0
L_800C34C4:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 800C34C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000004u); // 800C34C8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C34CC
L_800C34D0:;
  c->r[0]=rotl(c->r[4],25)&0x00000001u; cr0(c,c->r[0]); // 800C34D0
  if (crb(c,2)) { goto L_800C34F0; } // 800C34D4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C34D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C34DC
  c->r[4]=c->r[25]+c->r[0]; // 800C34E0
  c->r[0]=R32(c->r[4]+0x00000200u); // 800C34E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C34E8
  goto L_800C34FC; // 800C34EC
L_800C34F0:;
  c->r[4]=R32(c->r[25]+0x00000288u); // 800C34F0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C34F4
  c->r[0]=R8(c->r[4]+c->r[0]); // 800C34F8
L_800C34FC:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C34FC
  if (crb(c,2)) { goto L_800C3510; } // 800C3500
  c->r[12]=R32(c->r[29]+0x00000008u); // 800C3504
  c->ctr=c->r[12]; // 800C3508
  if (true) { c->lr=0x800C3510u; dispatch(c,c->ctr); } // 800C350C
L_800C3510:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 800C3510
  c->r[0]=c->r[3]+0x0000000Cu; // 800C3514
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C3518
  goto L_800C35B8; // 800C351C
L_800C3520:;
  cmpu(c,0,c->r[27],c->r[29]); // 800C3520
  if (crb(c,2)) { goto L_800C35C8; } // 800C3524
  c->r[0]=c->r[29]+0x0000000Cu; // 800C3528
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C352C
  goto L_800C35B8; // 800C3530
L_800C3534:;
  cmpu(c,0,c->r[27],c->r[29]); // 800C3534
  if (crb(c,2)) { goto L_800C35C8; } // 800C3538
  c->r[0]=c->r[29]+0x00000010u; // 800C353C
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C3540
  goto L_800C35B8; // 800C3544
L_800C3548:;
  c->r[3]=R32(c->r[25]+0x00000288u); // 800C3548
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 800C354C
  c->r[3]=c->r[3]+c->r[0]; // 800C3550
  c->r[12]=R32(c->r[3]+0x00000008u); // 800C3554
  cmps(c,0,(int32_t)c->r[12],0); // 800C3558
  if (crb(c,2)) { goto L_800C3584; } // 800C355C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C3560
  c->r[0]=R32(c->r[25]+0x00000298u); // 800C3564
  cmpu(c,0,c->r[0],c->r[3]); // 800C3568
  if (!crb(c,2)) { goto L_800C3578; } // 800C356C
  W32(c->r[25]+0x0000029Cu,c->r[12]); // 800C3570
  goto L_800C3584; // 800C3574
L_800C3578:;
  c->r[4]=0u+0xFFFFFFFFu; // 800C3578
  c->ctr=c->r[12]; // 800C357C
  if (true) { c->lr=0x800C3584u; dispatch(c,c->ctr); } // 800C3580
L_800C3584:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 800C3584
  c->r[0]=c->r[3]+0x00000004u; // 800C3588
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C358C
  goto L_800C35B8; // 800C3590
L_800C3594:;
  cmpu(c,0,c->r[27],c->r[29]); // 800C3594
  if (crb(c,2)) { goto L_800C35C8; } // 800C3598
  c->r[0]=R16(c->r[29]+0x00000002u); // 800C359C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C35A0
  c->r[3]=c->r[0]+c->r[29]; // 800C35A4
  c->r[0]=c->r[3]+0x0000000Cu; // 800C35A8
  W32(c->r[26]+0x00000008u,c->r[0]); // 800C35AC
  goto L_800C35B8; // 800C35B0
L_800C35B4:;
  c->lr=0x800C35B8u; f_800C1A48(c); // 800C35B4
L_800C35B8:;
  c->r[0]=rotl(c->r[28],0)&0x00000080u; cr0(c,c->r[0]); // 800C35B8
  if (crb(c,2)) { IRQCHK(c); goto L_800C30F4; } // 800C35BC
  W32(c->r[26]+0x00000008u,c->r[31]); // 800C35C0
  IRQCHK(c); goto L_800C30F4; // 800C35C4
L_800C35C8:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C35C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C35CC
  c->lr=c->r[0]; // 800C35D0
  c->r[1]=c->r[1]+0x00000030u; // 800C35D4
  return; // 800C35D8
}

// fn_800C35DC
void f_800C35DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C35DC
  c->r[0]=c->lr; // 800C35E0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C35E4
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C35E8
  c->r[31]=c->r[1]|c->r[1]; // 800C35EC
  c->r[30]=R32(c->r[3]+0x00000014u); // 800C35F0
  W32(c->r[1]+0x00000034u,c->r[1]); // 800C35F4
  c->lr=0x800C35FCu; f_800C1A54(c); // 800C35F8
  goto L_800C3774; // 800C35FC
  c->r[29]=R32(c->r[31]+0x00000024u); // 800C3600
  c->r[27]=c->r[30]|c->r[30]; // 800C3604
  c->r[28]=0u+0x00000000u; // 800C3608
  goto L_800C3638; // 800C360C
L_800C3610:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 800C3610
  c->r[3]=c->r[29]|c->r[29]; // 800C3614
  c->r[5]=c->r[31]+0x00000010u; // 800C3618
  c->lr=0x800C3620u; f_800C1A60(c); // 800C361C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800C3620
  if (crb(c,2)) { goto L_800C3630; } // 800C3624
  c->r[0]=0u+0x00000001u; // 800C3628
  goto L_800C3648; // 800C362C
L_800C3630:;
  c->r[27]=c->r[27]+0x00000004u; // 800C3630
  c->r[28]=c->r[28]+0x00000001u; // 800C3634
L_800C3638:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 800C3638
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 800C363C
  if (crb(c,0)) { IRQCHK(c); goto L_800C3610; } // 800C3640
  c->r[0]=0u+0x00000000u; // 800C3644
L_800C3648:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C3648
  if (crb(c,2)) { goto L_800C3660; } // 800C364C
  c->r[3]=0u+0x00000000u; // 800C3650
  c->r[4]=0u+0x00000000u; // 800C3654
  c->r[5]=0u+0x00000000u; // 800C3658
  c->lr=0x800C3660u; f_800C3CD8(c); // 800C365C
L_800C3660:;
  c->r[28]=0u+0x801F0000u; // 800C3660
  c->r[27]=c->r[30]|c->r[30]; // 800C3664
  c->r[28]=c->r[28]+0x00003AFCu; // 800C3668
  c->r[29]=0u+0x00000000u; // 800C366C
  goto L_800C369C; // 800C3670
L_800C3674:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 800C3674
  c->r[3]=c->r[28]|c->r[28]; // 800C3678
  c->r[5]=c->r[31]+0x0000000Cu; // 800C367C
  c->lr=0x800C3684u; f_800C1A60(c); // 800C3680
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800C3684
  if (crb(c,2)) { goto L_800C3694; } // 800C3688
  c->r[0]=0u+0x00000001u; // 800C368C
  goto L_800C36AC; // 800C3690
L_800C3694:;
  c->r[27]=c->r[27]+0x00000004u; // 800C3694
  c->r[29]=c->r[29]+0x00000001u; // 800C3698
L_800C369C:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 800C369C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800C36A0
  if (crb(c,0)) { IRQCHK(c); goto L_800C3674; } // 800C36A4
  c->r[0]=0u+0x00000000u; // 800C36A8
L_800C36AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C36AC
  if (crb(c,2)) { goto L_800C36DC; } // 800C36B0
  c->r[4]=0u+0x80220000u; // 800C36B4
  c->r[3]=0u+0x801F0000u; // 800C36B8
  c->r[4]=c->r[4]+0xFFFFBA08u; // 800C36BC
  c->r[5]=0u+0x800C0000u; // 800C36C0
  c->r[3]=c->r[3]+0x00003AFCu; // 800C36C4
  W32(c->r[31]+0x00000018u,c->r[4]); // 800C36C8
  c->r[3]=c->r[3]+0x00000011u; // 800C36CC
  c->r[4]=c->r[31]+0x00000018u; // 800C36D0
  c->r[5]=c->r[5]+0x00003794u; // 800C36D4
  c->lr=0x800C36DCu; f_800C3CD8(c); // 800C36D8
L_800C36DC:;
  c->r[3]=0u+0x801F0000u; // 800C36DC
  c->r[27]=c->r[30]|c->r[30]; // 800C36E0
  c->r[3]=c->r[3]+0x00003AFCu; // 800C36E4
  c->r[29]=0u+0x00000000u; // 800C36E8
  c->r[28]=c->r[3]+0x00000037u; // 800C36EC
  goto L_800C371C; // 800C36F0
L_800C36F4:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 800C36F4
  c->r[3]=c->r[28]|c->r[28]; // 800C36F8
  c->r[5]=c->r[31]+0x00000008u; // 800C36FC
  c->lr=0x800C3704u; f_800C1A60(c); // 800C3700
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800C3704
  if (crb(c,2)) { goto L_800C3714; } // 800C3708
  c->r[0]=0u+0x00000001u; // 800C370C
  goto L_800C372C; // 800C3710
L_800C3714:;
  c->r[27]=c->r[27]+0x00000004u; // 800C3714
  c->r[29]=c->r[29]+0x00000001u; // 800C3718
L_800C371C:;
  c->r[0]=R16(c->r[30]+0x00000002u); // 800C371C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800C3720
  if (crb(c,0)) { IRQCHK(c); goto L_800C36F4; } // 800C3724
  c->r[0]=0u+0x00000000u; // 800C3728
L_800C372C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C372C
  if (crb(c,2)) { goto L_800C375C; } // 800C3730
  c->r[4]=0u+0x80220000u; // 800C3734
  c->r[3]=0u+0x801F0000u; // 800C3738
  c->r[4]=c->r[4]+0xFFFFBA08u; // 800C373C
  c->r[5]=0u+0x800C0000u; // 800C3740
  c->r[3]=c->r[3]+0x00003AFCu; // 800C3744
  W32(c->r[31]+0x00000014u,c->r[4]); // 800C3748
  c->r[3]=c->r[3]+0x00000011u; // 800C374C
  c->r[4]=c->r[31]+0x00000014u; // 800C3750
  c->r[5]=c->r[5]+0x00003794u; // 800C3754
  c->lr=0x800C375Cu; f_800C3CD8(c); // 800C3758
L_800C375C:;
  c->r[3]=c->r[31]+0x00000020u; // 800C375C
  c->lr=0x800C3764u; f_800C3E1C(c); // 800C3760
  c->r[0]=c->r[0]|0x00000000u; // 800C3764
  c->r[0]=R32(c->r[1]+0x00000000u); // 800C3768
  c->r[1]=R32(c->r[31]+0x00000034u); // 800C376C
  W32(c->r[1]+0x00000000u,c->r[0]); // 800C3770
L_800C3774:;
  c->lr=0x800C3778u; f_800C1A48(c); // 800C3774
  c->r[10]=c->r[31]|c->r[31]; // 800C3778
  {uint32_t ea=c->r[10]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C377C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800C3780
  c->r[0]=R32(c->r[10]+0x00000004u); // 800C3784
  c->r[1]=c->r[10]|c->r[10]; // 800C3788
  c->lr=c->r[0]; // 800C378C
  return; // 800C3790
}

// fn_800C3794
void f_800C3794(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3794
  c->r[0]=c->lr; // 800C3798
  cmps(c,0,(int32_t)c->r[3],0); // 800C379C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C37A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C37A4
  c->r[31]=c->r[3]|c->r[3]; // 800C37A8
  if (crb(c,2)) { goto L_800C37BC; } // 800C37AC
  cmps(c,0,(int32_t)c->r[4],0); // 800C37B0
  if (!crb(c,1)) { goto L_800C37BC; } // 800C37B4
  c->lr=0x800C37BCu; f_800C1960(c); // 800C37B8
L_800C37BC:;
  c->r[3]=c->r[31]|c->r[31]; // 800C37BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C37C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C37C4
  c->lr=c->r[0]; // 800C37C8
  c->r[1]=c->r[1]+0x00000010u; // 800C37CC
  return; // 800C37D0
}

// fn_800C37D4
void f_800C37D4(Ctx* __restrict c) {
  c->r[8]=c->r[5]|c->r[5]; // 800C37D4
  c->r[2]=c->r[4]|c->r[4]; // 800C37D8
  c->r[0]=R32(c->r[3]+0x00000280u); // 800C37DC
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[0]&0xFFFFFFFFu); // 800C37E0
  {uint32_t ea=c->r[3]+0x00000234u; for(int i=13;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C37E4
  c->r[7]=c->r[3]+0x000000E8u; // 800C37E8
  {uint32_t ea=0u+c->r[7]; psq_load(c,14,ea,0,0);} // 800C37EC
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[14]=RF64(ea);} // 800C37F0
  c->r[7]=c->r[3]+0x000000F8u; // 800C37F4
  {uint32_t ea=0u+c->r[7]; psq_load(c,15,ea,0,0);} // 800C37F8
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[15]=RF64(ea);} // 800C37FC
  c->r[7]=c->r[3]+0x00000108u; // 800C3800
  {uint32_t ea=0u+c->r[7]; psq_load(c,16,ea,0,0);} // 800C3804
  {uint32_t ea=c->r[3]+0x00000100u; c->f[16]=RF64(ea);} // 800C3808
  c->r[7]=c->r[3]+0x00000118u; // 800C380C
  {uint32_t ea=0u+c->r[7]; psq_load(c,17,ea,0,0);} // 800C3810
  {uint32_t ea=c->r[3]+0x00000110u; c->f[17]=RF64(ea);} // 800C3814
  c->r[7]=c->r[3]+0x00000128u; // 800C3818
  {uint32_t ea=0u+c->r[7]; psq_load(c,18,ea,0,0);} // 800C381C
  {uint32_t ea=c->r[3]+0x00000120u; c->f[18]=RF64(ea);} // 800C3820
  c->r[7]=c->r[3]+0x00000138u; // 800C3824
  {uint32_t ea=0u+c->r[7]; psq_load(c,19,ea,0,0);} // 800C3828
  {uint32_t ea=c->r[3]+0x00000130u; c->f[19]=RF64(ea);} // 800C382C
  c->r[7]=c->r[3]+0x00000148u; // 800C3830
  {uint32_t ea=0u+c->r[7]; psq_load(c,20,ea,0,0);} // 800C3834
  {uint32_t ea=c->r[3]+0x00000140u; c->f[20]=RF64(ea);} // 800C3838
  c->r[7]=c->r[3]+0x00000158u; // 800C383C
  {uint32_t ea=0u+c->r[7]; psq_load(c,21,ea,0,0);} // 800C3840
  {uint32_t ea=c->r[3]+0x00000150u; c->f[21]=RF64(ea);} // 800C3844
  c->r[7]=c->r[3]+0x00000168u; // 800C3848
  {uint32_t ea=0u+c->r[7]; psq_load(c,22,ea,0,0);} // 800C384C
  {uint32_t ea=c->r[3]+0x00000160u; c->f[22]=RF64(ea);} // 800C3850
  c->r[7]=c->r[3]+0x00000178u; // 800C3854
  {uint32_t ea=0u+c->r[7]; psq_load(c,23,ea,0,0);} // 800C3858
  {uint32_t ea=c->r[3]+0x00000170u; c->f[23]=RF64(ea);} // 800C385C
  c->r[7]=c->r[3]+0x00000188u; // 800C3860
  {uint32_t ea=0u+c->r[7]; psq_load(c,24,ea,0,0);} // 800C3864
  {uint32_t ea=c->r[3]+0x00000180u; c->f[24]=RF64(ea);} // 800C3868
  c->r[7]=c->r[3]+0x00000198u; // 800C386C
  {uint32_t ea=0u+c->r[7]; psq_load(c,25,ea,0,0);} // 800C3870
  {uint32_t ea=c->r[3]+0x00000190u; c->f[25]=RF64(ea);} // 800C3874
  c->r[7]=c->r[3]+0x000001A8u; // 800C3878
  {uint32_t ea=0u+c->r[7]; psq_load(c,26,ea,0,0);} // 800C387C
  {uint32_t ea=c->r[3]+0x000001A0u; c->f[26]=RF64(ea);} // 800C3880
  c->r[7]=c->r[3]+0x000001B8u; // 800C3884
  {uint32_t ea=0u+c->r[7]; psq_load(c,27,ea,0,0);} // 800C3888
  {uint32_t ea=c->r[3]+0x000001B0u; c->f[27]=RF64(ea);} // 800C388C
  c->r[7]=c->r[3]+0x000001C8u; // 800C3890
  {uint32_t ea=0u+c->r[7]; psq_load(c,28,ea,0,0);} // 800C3894
  {uint32_t ea=c->r[3]+0x000001C0u; c->f[28]=RF64(ea);} // 800C3898
  c->r[7]=c->r[3]+0x000001D8u; // 800C389C
  {uint32_t ea=0u+c->r[7]; psq_load(c,29,ea,0,0);} // 800C38A0
  {uint32_t ea=c->r[3]+0x000001D0u; c->f[29]=RF64(ea);} // 800C38A4
  c->r[7]=c->r[3]+0x000001E8u; // 800C38A8
  {uint32_t ea=0u+c->r[7]; psq_load(c,30,ea,0,0);} // 800C38AC
  {uint32_t ea=c->r[3]+0x000001E0u; c->f[30]=RF64(ea);} // 800C38B0
  c->r[7]=c->r[3]+0x000001F8u; // 800C38B4
  {uint32_t ea=0u+c->r[7]; psq_load(c,31,ea,0,0);} // 800C38B8
  {uint32_t ea=c->r[3]+0x000001F0u; c->f[31]=RF64(ea);} // 800C38BC
  c->lr=c->r[8]; // 800C38C0
  c->r[1]=R32(c->r[3]+0x0000028Cu); // 800C38C4
  c->r[3]=R32(c->r[3]+0x00000284u); // 800C38C8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C38CC
  W32(c->r[1]+0x00000000u,c->r[3]); // 800C38D0
  return; // 800C38D4
}

// fn_800C38D8
void f_800C38D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C38D8
  c->r[0]=c->lr; // 800C38DC
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C38E0
  c->r[4]=c->r[1]+0x00000010u; // 800C38E4
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C38E8
  c->r[30]=c->r[3]|c->r[3]; // 800C38EC
  c->r[3]=R32(c->r[3]+0x00000290u); // 800C38F0
  c->lr=0x800C38F8u; f_800C27F8(c); // 800C38F4
  c->r[0]=R32(c->r[1]+0x00000010u); // 800C38F8
  cmps(c,0,(int32_t)c->r[0],0); // 800C38FC
  if (!crb(c,2)) { goto L_800C3908; } // 800C3900
  c->lr=0x800C3908u; f_800C1A48(c); // 800C3904
L_800C3908:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800C3908
  c->r[0]=R16(c->r[3]+0x00000000u); // 800C390C
  c->r[0]=rotl(c->r[0],28)&0x00000001u; cr0(c,c->r[0]); // 800C3910
  if (crb(c,2)) { goto L_800C3920; } // 800C3914
  c->r[3]=R32(c->r[30]+0x0000027Cu); // 800C3918
  goto L_800C3924; // 800C391C
L_800C3920:;
  c->r[3]=R32(c->r[30]+0x00000284u); // 800C3920
L_800C3924:;
  c->r[0]=R32(c->r[30]+0x00000294u); // 800C3924
  W32(c->r[30]+0x00000288u,c->r[3]); // 800C3928
  cmps(c,0,(int32_t)c->r[0],0); // 800C392C
  if (!crb(c,2)) { goto L_800C3A10; } // 800C3930
  c->r[5]=R32(c->r[1]+0x00000018u); // 800C3934
  c->r[7]=R32(c->r[1]+0x00000010u); // 800C3938
  c->r[6]=R32(c->r[1]+0x00000014u); // 800C393C
  cmps(c,0,(int32_t)c->r[5],0); // 800C3940
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 800C3944
  c->r[3]=R32(c->r[1]+0x00000020u); // 800C3948
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C394C
  W32(c->r[1]+0x00000028u,c->r[7]); // 800C3950
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800C3954
  W32(c->r[1]+0x00000030u,c->r[5]); // 800C3958
  W32(c->r[1]+0x00000034u,c->r[4]); // 800C395C
  W32(c->r[1]+0x00000038u,c->r[3]); // 800C3960
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800C3964
  c->r[0]=R32(c->r[30]+0x00000284u); // 800C3968
  W32(c->r[1]+0x00000040u,c->r[0]); // 800C396C
  c->r[0]=R32(c->r[30]+0x00000288u); // 800C3970
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C3974
  c->r[0]=R32(c->r[30]+0x0000027Cu); // 800C3978
  W32(c->r[1]+0x00000048u,c->r[0]); // 800C397C
  if (!crb(c,2)) { goto L_800C398C; } // 800C3980
  c->r[3]=0u+0x00000000u; // 800C3984
  goto L_800C3994; // 800C3988
L_800C398C:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 800C398C
  c->r[3]=rotl(c->r[0],0)&0x0000007Fu; // 800C3990
L_800C3994:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800C3994
  cmps(c,0,(int32_t)c->r[0],13); // 800C3998
  if (crb(c,2)) { goto L_800C39E0; } // 800C399C
  if (!crb(c,0)) { goto L_800C39BC; } // 800C39A0
  cmps(c,0,(int32_t)c->r[0],1); // 800C39A4
  if (crb(c,2)) { goto L_800C39CC; } // 800C39A8
  if (!crb(c,0)) { goto L_800C39D4; } // 800C39AC
  cmps(c,0,(int32_t)c->r[0],0); // 800C39B0
  if (!crb(c,0)) { goto L_800C39D4; } // 800C39B4
  goto L_800C39CC; // 800C39B8
L_800C39BC:;
  cmps(c,0,(int32_t)c->r[0],17); // 800C39BC
  if (!crb(c,0)) { goto L_800C39CC; } // 800C39C0
  cmps(c,0,(int32_t)c->r[0],15); // 800C39C4
  if (!crb(c,0)) { goto L_800C39D4; } // 800C39C8
L_800C39CC:;
  c->lr=0x800C39D0u; f_800C1A48(c); // 800C39CC
  goto L_800C39E0; // 800C39D0
L_800C39D4:;
  c->r[3]=c->r[1]+0x00000028u; // 800C39D4
  c->lr=0x800C39DCu; f_800C29A8(c); // 800C39D8
  IRQCHK(c); goto L_800C3994; // 800C39DC
L_800C39E0:;
  c->r[3]=R32(c->r[1]+0x00000030u); // 800C39E0
  c->r[0]=0u+0x00000000u; // 800C39E4
  c->r[4]=R32(c->r[1]+0x00000044u); // 800C39E8
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800C39EC
  c->r[4]=c->r[4]+c->r[3]; // 800C39F0
  c->r[3]=R32(c->r[4]+0x00000004u); // 800C39F4
  W32(c->r[30]+0x00000294u,c->r[3]); // 800C39F8
  c->r[3]=R32(c->r[4]+0x00000000u); // 800C39FC
  W32(c->r[30]+0x00000298u,c->r[3]); // 800C3A00
  W32(c->r[30]+0x0000029Cu,c->r[0]); // 800C3A04
  W32(c->r[30]+0x000002A0u,c->r[4]); // 800C3A08
  goto L_800C3A18; // 800C3A0C
L_800C3A10:;
  c->r[0]=0u+0x00000000u; // 800C3A10
  W32(c->r[30]+0x000002A0u,c->r[0]); // 800C3A14
L_800C3A18:;
  c->r[5]=R32(c->r[1]+0x00000018u); // 800C3A18
  c->r[7]=R32(c->r[1]+0x00000010u); // 800C3A1C
  c->r[6]=R32(c->r[1]+0x00000014u); // 800C3A20
  cmps(c,0,(int32_t)c->r[5],0); // 800C3A24
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 800C3A28
  c->r[3]=R32(c->r[1]+0x00000020u); // 800C3A2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C3A30
  W32(c->r[1]+0x00000028u,c->r[7]); // 800C3A34
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800C3A38
  W32(c->r[1]+0x00000030u,c->r[5]); // 800C3A3C
  W32(c->r[1]+0x00000034u,c->r[4]); // 800C3A40
  W32(c->r[1]+0x00000038u,c->r[3]); // 800C3A44
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800C3A48
  c->r[0]=R32(c->r[30]+0x00000284u); // 800C3A4C
  W32(c->r[1]+0x00000040u,c->r[0]); // 800C3A50
  c->r[0]=R32(c->r[30]+0x00000288u); // 800C3A54
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C3A58
  c->r[0]=R32(c->r[30]+0x0000027Cu); // 800C3A5C
  W32(c->r[1]+0x00000048u,c->r[0]); // 800C3A60
  if (!crb(c,2)) { goto L_800C3A70; } // 800C3A64
  c->r[26]=0u+0x00000000u; // 800C3A68
  goto L_800C3A78; // 800C3A6C
L_800C3A70:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 800C3A70
  c->r[26]=rotl(c->r[0],0)&0x0000007Fu; // 800C3A74
L_800C3A78:;
  c->r[31]=0u+0x80220000u; // 800C3A78
L_800C3A7C:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 800C3A7C
  cmpu(c,0,c->r[0],0x00000010u); // 800C3A80
  if (crb(c,1)) { goto L_800C3B84; } // 800C3A84
  c->r[3]=c->r[31]+0xFFFFB9C0u; // 800C3A88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C3A8C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C3A90
  c->ctr=c->r[3]; // 800C3A94
  if (true) { switch (c->ctr) { case 0x800C3A9Cu: goto L_800C3A9C; case 0x800C3ABCu: goto L_800C3ABC; case 0x800C3ADCu: goto L_800C3ADC; case 0x800C3B84u: goto L_800C3B84; case 0x800C3B8Cu: goto L_800C3B8C; default: break; } dispatch(c,c->ctr); return; } // 800C3A98
L_800C3A9C:;
  c->r[4]=R32(c->r[1]+0x00000030u); // 800C3A9C
  c->r[5]=c->r[1]+0x0000000Cu; // 800C3AA0
  c->r[3]=R32(c->r[30]+0x00000294u); // 800C3AA4
  c->r[4]=R32(c->r[4]+0x00000004u); // 800C3AA8
  c->lr=0x800C3AB0u; f_800C1A60(c); // 800C3AAC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800C3AB0
  if (!crb(c,2)) { goto L_800C3B9C; } // 800C3AB4
  goto L_800C3B8C; // 800C3AB8
L_800C3ABC:;
  c->r[4]=R32(c->r[1]+0x00000030u); // 800C3ABC
  c->r[5]=c->r[1]+0x0000000Cu; // 800C3AC0
  c->r[3]=R32(c->r[30]+0x00000294u); // 800C3AC4
  c->r[4]=R32(c->r[4]+0x00000004u); // 800C3AC8
  c->lr=0x800C3AD0u; f_800C1A60(c); // 800C3ACC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800C3AD0
  if (!crb(c,2)) { goto L_800C3B9C; } // 800C3AD4
  goto L_800C3B8C; // 800C3AD8
L_800C3ADC:;
  c->r[28]=R32(c->r[1]+0x00000030u); // 800C3ADC
  c->r[27]=0u+0x00000000u; // 800C3AE0
  c->r[29]=R32(c->r[30]+0x00000294u); // 800C3AE4
  c->r[26]=c->r[28]|c->r[28]; // 800C3AE8
  goto L_800C3B18; // 800C3AEC
L_800C3AF0:;
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 800C3AF0
  c->r[3]=c->r[29]|c->r[29]; // 800C3AF4
  c->r[5]=c->r[1]+0x00000008u; // 800C3AF8
  c->lr=0x800C3B00u; f_800C1A60(c); // 800C3AFC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800C3B00
  if (crb(c,2)) { goto L_800C3B10; } // 800C3B04
  c->r[0]=0u+0x00000001u; // 800C3B08
  goto L_800C3B28; // 800C3B0C
L_800C3B10:;
  c->r[26]=c->r[26]+0x00000004u; // 800C3B10
  c->r[27]=c->r[27]+0x00000001u; // 800C3B14
L_800C3B18:;
  c->r[0]=R16(c->r[28]+0x00000002u); // 800C3B18
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C3B1C
  if (crb(c,0)) { IRQCHK(c); goto L_800C3AF0; } // 800C3B20
  c->r[0]=0u+0x00000000u; // 800C3B24
L_800C3B28:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C3B28
  if (!crb(c,2)) { goto L_800C3B8C; } // 800C3B2C
  c->r[27]=R32(c->r[1]+0x00000030u); // 800C3B30
  c->r[3]=c->r[30]|c->r[30]; // 800C3B34
  c->r[4]=c->r[1]+0x00000010u; // 800C3B38
  c->r[5]=c->r[27]|c->r[27]; // 800C3B3C
  c->lr=0x800C3B44u; f_800C30D0(c); // 800C3B40
  c->r[5]=R32(c->r[30]+0x00000288u); // 800C3B44
  c->r[3]=c->r[30]|c->r[30]; // 800C3B48
  c->r[4]=R32(c->r[27]+0x00000008u); // 800C3B4C
  c->r[0]=R32(c->r[30]+0x00000298u); // 800C3B50
  {uint32_t ea=c->r[4]+c->r[5]; W32(ea,c->r[0]); c->r[4]=ea;} // 800C3B54
  c->r[0]=R32(c->r[30]+0x00000294u); // 800C3B58
  W32(c->r[4]+0x00000004u,c->r[0]); // 800C3B5C
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 800C3B60
  W32(c->r[4]+0x00000008u,c->r[0]); // 800C3B64
  W32(c->r[4]+0x00000014u,c->r[27]); // 800C3B68
  c->r[5]=R32(c->r[1]+0x00000014u); // 800C3B6C
  c->r[0]=R32(c->r[27]+0x00000004u); // 800C3B70
  c->r[4]=R32(c->r[1]+0x00000024u); // 800C3B74
  c->r[5]=c->r[5]+c->r[0]; // 800C3B78
  c->lr=0x800C3B80u; f_800C37D4(c); // 800C3B7C
  goto L_800C3B8C; // 800C3B80
L_800C3B84:;
  c->lr=0x800C3B88u; f_800C1A48(c); // 800C3B84
  goto L_800C3B9C; // 800C3B88
L_800C3B8C:;
  c->r[3]=c->r[1]+0x00000028u; // 800C3B8C
  c->lr=0x800C3B94u; f_800C29A8(c); // 800C3B90
  c->r[26]=c->r[3]|c->r[3]; // 800C3B94
  IRQCHK(c); goto L_800C3A7C; // 800C3B98
L_800C3B9C:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 800C3B9C
  cmpu(c,0,c->r[0],0x00000010u); // 800C3BA0
  if (!crb(c,2)) { goto L_800C3C38; } // 800C3BA4
  c->r[31]=R32(c->r[1]+0x00000030u); // 800C3BA8
  c->r[3]=c->r[30]|c->r[30]; // 800C3BAC
  c->r[4]=c->r[1]+0x00000010u; // 800C3BB0
  c->r[5]=c->r[31]|c->r[31]; // 800C3BB4
  c->lr=0x800C3BBCu; f_800C30D0(c); // 800C3BB8
  c->r[4]=R32(c->r[30]+0x00000288u); // 800C3BBC
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800C3BC0
  c->r[0]=R32(c->r[30]+0x00000298u); // 800C3BC4
  {uint32_t ea=c->r[4]+c->r[3]; W32(ea,c->r[0]); c->r[4]=ea;} // 800C3BC8
  c->r[0]=R32(c->r[30]+0x00000294u); // 800C3BCC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800C3BD0
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 800C3BD4
  W32(c->r[4]+0x00000008u,c->r[0]); // 800C3BD8
  c->r[3]=R32(c->r[30]+0x00000294u); // 800C3BDC
  c->r[0]=R8(c->r[3]+0x00000000u); // 800C3BE0
  cmps(c,0,(int32_t)c->r[0],42); // 800C3BE4
  if (!crb(c,2)) { goto L_800C3C0C; } // 800C3BE8
  c->r[0]=c->r[4]+0x00000010u; // 800C3BEC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800C3BF0
  c->r[3]=R32(c->r[30]+0x00000298u); // 800C3BF4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800C3BF8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C3BFC
  c->r[0]=c->r[3]+c->r[0]; // 800C3C00
  W32(c->r[4]+0x00000010u,c->r[0]); // 800C3C04
  goto L_800C3C1C; // 800C3C08
L_800C3C0C:;
  c->r[3]=R32(c->r[30]+0x00000298u); // 800C3C0C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800C3C10
  c->r[0]=c->r[3]+c->r[0]; // 800C3C14
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800C3C18
L_800C3C1C:;
  c->r[5]=R32(c->r[1]+0x00000014u); // 800C3C1C
  c->r[3]=c->r[30]|c->r[30]; // 800C3C20
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C3C24
  c->r[4]=R32(c->r[1]+0x00000024u); // 800C3C28
  c->r[5]=c->r[5]+c->r[0]; // 800C3C2C
  c->lr=0x800C3C34u; f_800C37D4(c); // 800C3C30
  goto L_800C3CC4; // 800C3C34
L_800C3C38:;
  c->r[31]=R32(c->r[1]+0x00000030u); // 800C3C38
  c->r[3]=c->r[30]|c->r[30]; // 800C3C3C
  c->r[4]=c->r[1]+0x00000010u; // 800C3C40
  c->r[5]=c->r[31]|c->r[31]; // 800C3C44
  c->lr=0x800C3C4Cu; f_800C30D0(c); // 800C3C48
  c->r[4]=R32(c->r[30]+0x00000288u); // 800C3C4C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000000Au); // 800C3C50
  c->r[0]=R32(c->r[30]+0x00000298u); // 800C3C54
  {uint32_t ea=c->r[4]+c->r[3]; W32(ea,c->r[0]); c->r[4]=ea;} // 800C3C58
  c->r[0]=R32(c->r[30]+0x00000294u); // 800C3C5C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800C3C60
  c->r[0]=R32(c->r[30]+0x0000029Cu); // 800C3C64
  W32(c->r[4]+0x00000008u,c->r[0]); // 800C3C68
  c->r[3]=R32(c->r[30]+0x00000294u); // 800C3C6C
  c->r[0]=R8(c->r[3]+0x00000000u); // 800C3C70
  cmps(c,0,(int32_t)c->r[0],42); // 800C3C74
  if (!crb(c,2)) { goto L_800C3C9C; } // 800C3C78
  c->r[0]=c->r[4]+0x00000010u; // 800C3C7C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800C3C80
  c->r[3]=R32(c->r[30]+0x00000298u); // 800C3C84
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800C3C88
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C3C8C
  c->r[0]=c->r[3]+c->r[0]; // 800C3C90
  W32(c->r[4]+0x00000010u,c->r[0]); // 800C3C94
  goto L_800C3CAC; // 800C3C98
L_800C3C9C:;
  c->r[3]=R32(c->r[30]+0x00000298u); // 800C3C9C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800C3CA0
  c->r[0]=c->r[3]+c->r[0]; // 800C3CA4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800C3CA8
L_800C3CAC:;
  c->r[5]=R32(c->r[1]+0x00000014u); // 800C3CAC
  c->r[3]=c->r[30]|c->r[30]; // 800C3CB0
  c->r[0]=R16(c->r[31]+0x00000008u); // 800C3CB4
  c->r[4]=R32(c->r[1]+0x00000024u); // 800C3CB8
  c->r[5]=c->r[5]+c->r[0]; // 800C3CBC
  c->lr=0x800C3CC4u; f_800C37D4(c); // 800C3CC0
L_800C3CC4:;
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C3CC4
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C3CC8
  c->lr=c->r[0]; // 800C3CCC
  c->r[1]=c->r[1]+0x00000070u; // 800C3CD0
  return; // 800C3CD4
}

// fn_800C3CD8
void f_800C3CD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3CD8
  c->r[0]=c->lr; // 800C3CDC
  W32(c->r[1]+0x000002C4u,c->r[0]); // 800C3CE0
  W32(c->r[1]+0x00000008u,c->r[3]); // 800C3CE4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800C3CE8
  W32(c->r[1]+0x00000010u,c->r[5]); // 800C3CEC
  {uint32_t ea=c->r[1]+0x0000024Cu; for(int i=13;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C3CF0
  {uint32_t ea=c->r[1]+0x000000F8u; WF64(ea,c->f[14]);} // 800C3CF4
  c->r[3]=c->r[1]+0x00000100u; // 800C3CF8
  {uint32_t ea=0u+c->r[3]; psq_store(c,14,ea,0,0);} // 800C3CFC
  {uint32_t ea=c->r[1]+0x00000108u; WF64(ea,c->f[15]);} // 800C3D00
  c->r[3]=c->r[1]+0x00000110u; // 800C3D04
  {uint32_t ea=0u+c->r[3]; psq_store(c,15,ea,0,0);} // 800C3D08
  {uint32_t ea=c->r[1]+0x00000118u; WF64(ea,c->f[16]);} // 800C3D0C
  c->r[3]=c->r[1]+0x00000120u; // 800C3D10
  {uint32_t ea=0u+c->r[3]; psq_store(c,16,ea,0,0);} // 800C3D14
  {uint32_t ea=c->r[1]+0x00000128u; WF64(ea,c->f[17]);} // 800C3D18
  c->r[3]=c->r[1]+0x00000130u; // 800C3D1C
  {uint32_t ea=0u+c->r[3]; psq_store(c,17,ea,0,0);} // 800C3D20
  {uint32_t ea=c->r[1]+0x00000138u; WF64(ea,c->f[18]);} // 800C3D24
  c->r[3]=c->r[1]+0x00000140u; // 800C3D28
  {uint32_t ea=0u+c->r[3]; psq_store(c,18,ea,0,0);} // 800C3D2C
  {uint32_t ea=c->r[1]+0x00000148u; WF64(ea,c->f[19]);} // 800C3D30
  c->r[3]=c->r[1]+0x00000150u; // 800C3D34
  {uint32_t ea=0u+c->r[3]; psq_store(c,19,ea,0,0);} // 800C3D38
  {uint32_t ea=c->r[1]+0x00000158u; WF64(ea,c->f[20]);} // 800C3D3C
  c->r[3]=c->r[1]+0x00000160u; // 800C3D40
  {uint32_t ea=0u+c->r[3]; psq_store(c,20,ea,0,0);} // 800C3D44
  {uint32_t ea=c->r[1]+0x00000168u; WF64(ea,c->f[21]);} // 800C3D48
  c->r[3]=c->r[1]+0x00000170u; // 800C3D4C
  {uint32_t ea=0u+c->r[3]; psq_store(c,21,ea,0,0);} // 800C3D50
  {uint32_t ea=c->r[1]+0x00000178u; WF64(ea,c->f[22]);} // 800C3D54
  c->r[3]=c->r[1]+0x00000180u; // 800C3D58
  {uint32_t ea=0u+c->r[3]; psq_store(c,22,ea,0,0);} // 800C3D5C
  {uint32_t ea=c->r[1]+0x00000188u; WF64(ea,c->f[23]);} // 800C3D60
  c->r[3]=c->r[1]+0x00000190u; // 800C3D64
  {uint32_t ea=0u+c->r[3]; psq_store(c,23,ea,0,0);} // 800C3D68
  {uint32_t ea=c->r[1]+0x00000198u; WF64(ea,c->f[24]);} // 800C3D6C
  c->r[3]=c->r[1]+0x000001A0u; // 800C3D70
  {uint32_t ea=0u+c->r[3]; psq_store(c,24,ea,0,0);} // 800C3D74
  {uint32_t ea=c->r[1]+0x000001A8u; WF64(ea,c->f[25]);} // 800C3D78
  c->r[3]=c->r[1]+0x000001B0u; // 800C3D7C
  {uint32_t ea=0u+c->r[3]; psq_store(c,25,ea,0,0);} // 800C3D80
  {uint32_t ea=c->r[1]+0x000001B8u; WF64(ea,c->f[26]);} // 800C3D84
  c->r[3]=c->r[1]+0x000001C0u; // 800C3D88
  {uint32_t ea=0u+c->r[3]; psq_store(c,26,ea,0,0);} // 800C3D8C
  {uint32_t ea=c->r[1]+0x000001C8u; WF64(ea,c->f[27]);} // 800C3D90
  c->r[3]=c->r[1]+0x000001D0u; // 800C3D94
  {uint32_t ea=0u+c->r[3]; psq_store(c,27,ea,0,0);} // 800C3D98
  {uint32_t ea=c->r[1]+0x000001D8u; WF64(ea,c->f[28]);} // 800C3D9C
  c->r[3]=c->r[1]+0x000001E0u; // 800C3DA0
  {uint32_t ea=0u+c->r[3]; psq_store(c,28,ea,0,0);} // 800C3DA4
  {uint32_t ea=c->r[1]+0x000001E8u; WF64(ea,c->f[29]);} // 800C3DA8
  c->r[3]=c->r[1]+0x000001F0u; // 800C3DAC
  {uint32_t ea=0u+c->r[3]; psq_store(c,29,ea,0,0);} // 800C3DB0
  {uint32_t ea=c->r[1]+0x000001F8u; WF64(ea,c->f[30]);} // 800C3DB4
  c->r[3]=c->r[1]+0x00000200u; // 800C3DB8
  {uint32_t ea=0u+c->r[3]; psq_store(c,30,ea,0,0);} // 800C3DBC
  {uint32_t ea=c->r[1]+0x00000208u; WF64(ea,c->f[31]);} // 800C3DC0
  c->r[3]=c->r[1]+0x00000210u; // 800C3DC4
  {uint32_t ea=0u+c->r[3]; psq_store(c,31,ea,0,0);} // 800C3DC8
  c->r[3]=c->cr; // 800C3DCC
  W32(c->r[1]+0x00000298u,c->r[3]); // 800C3DD0
  c->r[3]=R32(c->r[1]+0x00000000u); // 800C3DD4
  c->r[4]=R32(c->r[3]+0x00000004u); // 800C3DD8
  W32(c->r[1]+0x0000029Cu,c->r[3]); // 800C3DDC
  W32(c->r[1]+0x000002A4u,c->r[3]); // 800C3DE0
  W32(c->r[1]+0x000002A8u,c->r[4]); // 800C3DE4
  c->r[3]=R32(c->r[1]+0x00000008u); // 800C3DE8
  W32(c->r[1]+0x000002ACu,c->r[3]); // 800C3DEC
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C3DF0
  W32(c->r[1]+0x000002B0u,c->r[3]); // 800C3DF4
  c->r[3]=R32(c->r[1]+0x00000010u); // 800C3DF8
  W32(c->r[1]+0x000002B4u,c->r[3]); // 800C3DFC
  c->r[3]=c->r[1]+0x00000018u; // 800C3E00
  c->lr=0x800C3E08u; f_800C38D8(c); // 800C3E04
  c->r[0]=c->r[0]|0x00000000u; // 800C3E08
  c->r[0]=R32(c->r[1]+0x000002C4u); // 800C3E0C
  c->lr=c->r[0]; // 800C3E10
  c->r[1]=c->r[1]+0x000002C0u; // 800C3E14
  return; // 800C3E18
}

// fn_800C3E1C
void f_800C3E1C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C3E1C
  cmps(c,0,(int32_t)c->r[0],0); // 800C3E20
  if (crb(c,2)) return; // 800C3E24
  c->r[12]=R32(c->r[3]+0x00000008u); // 800C3E28
  cmps(c,0,(int32_t)c->r[12],0); // 800C3E2C
  if (crb(c,2)) return; // 800C3E30
  c->r[3]=c->r[0]|c->r[0]; // 800C3E34
  c->r[4]=0u+0xFFFFFFFFu; // 800C3E38
  c->ctr=c->r[12]; // 800C3E3C
  if (true) { dispatch(c,c->ctr); return; } // 800C3E40
  return; // 800C3E44
}

// fn_800C3E48
void f_800C3E48(Ctx* __restrict c) {
  c->r[3]=0u+0x80220000u; // 800C3E48
  c->r[3]=c->r[3]+0xFFFFBA24u; // 800C3E4C
  return; // 800C3E50
}

// fn_800C3E54
void f_800C3E54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3E54
  c->r[0]=c->lr; // 800C3E58
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C3E5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C3E60
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C3E64
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C3E68
  c->r[29]=c->r[3]|c->r[3]; // 800C3E6C
  c->r[0]=R32(c->r[13]+0xFFFF8880u); // 800C3E70
  cmps(c,0,(int32_t)c->r[0],-1); // 800C3E74
  if (!crb(c,2)) { goto L_800C3EE4; } // 800C3E78
  c->r[31]=0u+0x801F0000u; // 800C3E7C
  c->r[3]=c->r[31]+0x00003B50u; // 800C3E80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C3E84
  c->lr=0x800C3E8Cu; f_8009AC4C(c); // 800C3E88
  c->r[3]=c->r[31]+0x00003B50u; // 800C3E8C
  c->r[3]=c->r[3]+0x00000036u; // 800C3E90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C3E94
  c->lr=0x800C3E9Cu; f_8009AC4C(c); // 800C3E98
  c->lr=0x800C3EA0u; f_80099AAC(c); // 800C3E9C
  c->r[30]=c->r[3]|c->r[3]; // 800C3EA0
  c->lr=0x800C3EA8u; f_80099A94(c); // 800C3EA4
  c->r[31]=c->r[3]|c->r[3]; // 800C3EA8
  c->r[3]=c->r[30]|c->r[30]; // 800C3EAC
  c->r[4]=c->r[31]|c->r[31]; // 800C3EB0
  c->r[5]=0u+0x00000001u; // 800C3EB4
  c->lr=0x800C3EBCu; f_800999A8(c); // 800C3EB8
  c->r[30]=c->r[3]|c->r[3]; // 800C3EBC
  c->lr=0x800C3EC4u; f_80099ADC(c); // 800C3EC0
  c->r[0]=c->r[30]+0x0000001Fu; // 800C3EC4
  c->r[30]=rotl(c->r[31],0)&0xFFFFFFE0u; // 800C3EC8
  c->r[4]=c->r[30]|c->r[30]; // 800C3ECC
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800C3ED0
  c->lr=0x800C3ED8u; f_80099A18(c); // 800C3ED4
  c->lr=0x800C3EDCu; f_80099998(c); // 800C3ED8
  c->r[3]=c->r[30]|c->r[30]; // 800C3EDC
  c->lr=0x800C3EE4u; f_80099ADC(c); // 800C3EE0
L_800C3EE4:;
  c->r[3]=R32(c->r[13]+0xFFFF8880u); // 800C3EE4
  c->r[4]=c->r[29]|c->r[29]; // 800C3EE8
  c->lr=0x800C3EF0u; f_80099828(c); // 800C3EEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C3EF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C3EF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C3EF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C3EFC
  c->lr=c->r[0]; // 800C3F00
  c->r[1]=c->r[1]+0x00000020u; // 800C3F04
  return; // 800C3F08
}

// fn_800C3F0C
void f_800C3F0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C3F0C
  c->r[0]=c->lr; // 800C3F10
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C3F14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C3F18
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C3F1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C3F20
  c->r[29]=c->r[3]|c->r[3]; // 800C3F24
  c->r[0]=R32(c->r[13]+0xFFFF8880u); // 800C3F28
  cmps(c,0,(int32_t)c->r[0],-1); // 800C3F2C
  if (!crb(c,2)) { goto L_800C3F9C; } // 800C3F30
  c->r[31]=0u+0x801F0000u; // 800C3F34
  c->r[3]=c->r[31]+0x00003B50u; // 800C3F38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C3F3C
  c->lr=0x800C3F44u; f_8009AC4C(c); // 800C3F40
  c->r[3]=c->r[31]+0x00003B50u; // 800C3F44
  c->r[3]=c->r[3]+0x00000036u; // 800C3F48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800C3F4C
  c->lr=0x800C3F54u; f_8009AC4C(c); // 800C3F50
  c->lr=0x800C3F58u; f_80099AAC(c); // 800C3F54
  c->r[30]=c->r[3]|c->r[3]; // 800C3F58
  c->lr=0x800C3F60u; f_80099A94(c); // 800C3F5C
  c->r[31]=c->r[3]|c->r[3]; // 800C3F60
  c->r[3]=c->r[30]|c->r[30]; // 800C3F64
  c->r[4]=c->r[31]|c->r[31]; // 800C3F68
  c->r[5]=0u+0x00000001u; // 800C3F6C
  c->lr=0x800C3F74u; f_800999A8(c); // 800C3F70
  c->r[30]=c->r[3]|c->r[3]; // 800C3F74
  c->lr=0x800C3F7Cu; f_80099ADC(c); // 800C3F78
  c->r[0]=c->r[30]+0x0000001Fu; // 800C3F7C
  c->r[30]=rotl(c->r[31],0)&0xFFFFFFE0u; // 800C3F80
  c->r[4]=c->r[30]|c->r[30]; // 800C3F84
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800C3F88
  c->lr=0x800C3F90u; f_80099A18(c); // 800C3F8C
  c->lr=0x800C3F94u; f_80099998(c); // 800C3F90
  c->r[3]=c->r[30]|c->r[30]; // 800C3F94
  c->lr=0x800C3F9Cu; f_80099ADC(c); // 800C3F98
L_800C3F9C:;
  c->r[3]=R32(c->r[13]+0xFFFF8880u); // 800C3F9C
  c->r[4]=c->r[29]|c->r[29]; // 800C3FA0
  c->lr=0x800C3FA8u; f_80099920(c); // 800C3FA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C3FA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C3FAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C3FB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C3FB4
  c->lr=c->r[0]; // 800C3FB8
  c->r[1]=c->r[1]+0x00000020u; // 800C3FBC
  return; // 800C3FC0
}

// fn_800C3FC4
void f_800C3FC4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C3FC4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C3FC8
  c->r[6]=c->r[3]+c->r[0]; // 800C3FCC
  c->r[6]=R32(c->r[6]+0xFFFFFFFCu); // 800C3FD0
  cmps(c,0,(int32_t)c->r[6],0); // 800C3FD4
  if (!crb(c,2)) { goto L_800C3FEC; } // 800C3FD8
  c->r[0]=0u+0x00000000u; // 800C3FDC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C3FE0
  c->r[3]=0u+0x00000000u; // 800C3FE4
  return; // 800C3FE8
L_800C3FEC:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800C3FEC
  c->r[7]=c->r[6]|c->r[6]; // 800C3FF0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C3FF4
  c->r[8]=c->r[0]|c->r[0]; // 800C3FF8
  goto L_800C403C; // 800C3FFC
L_800C4000:;
  c->r[7]=R32(c->r[7]+0x0000000Cu); // 800C4000
  c->r[0]=R32(c->r[7]+0x00000000u); // 800C4004
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C4008
  cmpu(c,0,c->r[8],c->r[0]); // 800C400C
  if (!crb(c,0)) { goto L_800C4018; } // 800C4010
  c->r[8]=c->r[0]|c->r[0]; // 800C4014
L_800C4018:;
  cmpu(c,0,c->r[7],c->r[6]); // 800C4018
  if (!crb(c,2)) { goto L_800C403C; } // 800C401C
  cmps(c,0,(int32_t)c->r[5],0); // 800C4020
  W32(c->r[3]+0x00000008u,c->r[8]); // 800C4024
  if (crb(c,2)) { goto L_800C4034; } // 800C4028
  c->r[0]=c->r[8]+0xFFFFFFF8u; // 800C402C
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C4030
L_800C4034:;
  c->r[3]=0u+0x00000000u; // 800C4034
  return; // 800C4038
L_800C403C:;
  cmpu(c,0,c->r[0],c->r[4]); // 800C403C
  if (crb(c,0)) { IRQCHK(c); goto L_800C4000; } // 800C4040
  c->r[0]=c->r[0]-c->r[4]; // 800C4044
  cmpu(c,0,c->r[0],0x00000050u); // 800C4048
  if (crb(c,0)) { goto L_800C4124; } // 800C404C
  c->r[0]=R32(c->r[7]+0x00000004u); // 800C4050
  c->r[6]=c->r[7]+c->r[4]; // 800C4054
  c->r[8]=R32(c->r[7]+0x00000000u); // 800C4058
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800C405C
  c->r[11]=c->r[0]|0x00000001u; // 800C4060
  c->r[10]=rotl(c->r[8],0)&0xFFFFFFF8u; // 800C4064
  c->r[0]=rotl(c->r[8],0)&0x00000004u; cr0(c,c->r[0]); // 800C4068
  W32(c->r[7]+0x00000004u,c->r[11]); // 800C406C
  c->r[0]=rotl(c->r[8],0)&0x00000002u; // 800C4070
  W32(c->r[7]+0x00000000u,c->r[4]); // 800C4074
  c->r[0]=cntlz(c->r[0]); // 800C4078
  c->r[9]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C407C
  if (crb(c,2)) { goto L_800C4090; } // 800C4080
  c->r[0]=R32(c->r[7]+0x00000000u); // 800C4084
  c->r[0]=c->r[0]|0x00000004u; // 800C4088
  W32(c->r[7]+0x00000000u,c->r[0]); // 800C408C
L_800C4090:;
  c->r[0]=cntlz(c->r[9]); // 800C4090
  c->r[8]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[8]); // 800C4094
  if (crb(c,2)) { goto L_800C40B8; } // 800C4098
  c->r[0]=R32(c->r[7]+0x00000000u); // 800C409C
  c->r[0]=c->r[0]|0x00000002u; // 800C40A0
  W32(c->r[7]+0x00000000u,c->r[0]); // 800C40A4
  c->r[0]=R32(c->r[6]+0x00000000u); // 800C40A8
  c->r[0]=c->r[0]|0x00000004u; // 800C40AC
  W32(c->r[6]+0x00000000u,c->r[0]); // 800C40B0
  goto L_800C40BC; // 800C40B4
L_800C40B8:;
  W32(c->r[6]+0xFFFFFFFCu,c->r[4]); // 800C40B8
L_800C40BC:;
  W32(c->r[6]+0x00000004u,c->r[11]); // 800C40BC
  c->r[10]=c->r[10]-c->r[4]; // 800C40C0
  cmps(c,0,(int32_t)c->r[8],0); // 800C40C4
  W32(c->r[6]+0x00000000u,c->r[10]); // 800C40C8
  if (crb(c,2)) { goto L_800C40DC; } // 800C40CC
  c->r[0]=R32(c->r[6]+0x00000000u); // 800C40D0
  c->r[0]=c->r[0]|0x00000004u; // 800C40D4
  W32(c->r[6]+0x00000000u,c->r[0]); // 800C40D8
L_800C40DC:;
  cmps(c,0,(int32_t)c->r[8],0); // 800C40DC
  if (crb(c,2)) { goto L_800C4100; } // 800C40E0
  c->r[0]=R32(c->r[6]+0x00000000u); // 800C40E4
  c->r[0]=c->r[0]|0x00000002u; // 800C40E8
  W32(c->r[6]+0x00000000u,c->r[0]); // 800C40EC
  c->r[0]=R32(c->r[6]+c->r[10]); // 800C40F0
  c->r[0]=c->r[0]|0x00000004u; // 800C40F4
  W32(c->r[6]+c->r[10],c->r[0]); // 800C40F8
  goto L_800C4108; // 800C40FC
L_800C4100:;
  c->r[4]=c->r[6]+c->r[10]; // 800C4100
  W32(c->r[4]+0xFFFFFFFCu,c->r[10]); // 800C4104
L_800C4108:;
  cmps(c,0,(int32_t)c->r[9],0); // 800C4108
  if (crb(c,2)) { goto L_800C4124; } // 800C410C
  c->r[4]=R32(c->r[7]+0x0000000Cu); // 800C4110
  W32(c->r[6]+0x0000000Cu,c->r[4]); // 800C4114
  W32(c->r[4]+0x00000008u,c->r[6]); // 800C4118
  W32(c->r[6]+0x00000008u,c->r[7]); // 800C411C
  W32(c->r[7]+0x0000000Cu,c->r[6]); // 800C4120
L_800C4124:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C4124
  c->r[6]=R32(c->r[7]+0x0000000Cu); // 800C4128
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C412C
  c->r[4]=c->r[3]+c->r[0]; // 800C4130
  W32(c->r[4]+0xFFFFFFFCu,c->r[6]); // 800C4134
  c->r[4]=R32(c->r[7]+0x00000000u); // 800C4138
  c->r[0]=c->r[4]|0x00000002u; // 800C413C
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFF8u; // 800C4140
  W32(c->r[7]+0x00000000u,c->r[0]); // 800C4144
  c->r[0]=R32(c->r[7]+c->r[4]); // 800C4148
  c->r[0]=c->r[0]|0x00000004u; // 800C414C
  W32(c->r[7]+c->r[4],c->r[0]); // 800C4150
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C4154
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C4158
  c->r[4]=c->r[3]+c->r[0]; // 800C415C
  c->r[0]=R32(c->r[4]+0xFFFFFFFCu); // 800C4160
  cmpu(c,0,c->r[0],c->r[7]); // 800C4164
  if (!crb(c,2)) { goto L_800C4174; } // 800C4168
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 800C416C
  W32(c->r[4]+0xFFFFFFFCu,c->r[0]); // 800C4170
L_800C4174:;
  c->r[0]=R32(c->r[4]+0xFFFFFFFCu); // 800C4174
  cmpu(c,0,c->r[0],c->r[7]); // 800C4178
  if (!crb(c,2)) { goto L_800C4190; } // 800C417C
  c->r[0]=0u+0x00000000u; // 800C4180
  W32(c->r[4]+0xFFFFFFFCu,c->r[0]); // 800C4184
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C4188
  goto L_800C41A8; // 800C418C
L_800C4190:;
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C4190
  c->r[3]=R32(c->r[7]+0x0000000Cu); // 800C4194
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C4198
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 800C419C
  c->r[3]=R32(c->r[7]+0x00000008u); // 800C41A0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800C41A4
L_800C41A8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C41A8
  if (crb(c,2)) { goto L_800C41C0; } // 800C41AC
  c->r[0]=R32(c->r[7]+0x00000000u); // 800C41B0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C41B4
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 800C41B8
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C41BC
L_800C41C0:;
  c->r[3]=c->r[7]|c->r[7]; // 800C41C0
  return; // 800C41C4
}

// Block_link
void f_800C41C8(Ctx* __restrict c) {
  trace_call(0x800C41C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C41C8
  c->r[0]=c->lr; // 800C41CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C41D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C41D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C41D8
  c->r[30]=c->r[3]|c->r[3]; // 800C41DC
  c->r[5]=R32(c->r[4]+0x00000000u); // 800C41E0
  c->r[0]=rotl(c->r[5],0)&0xFFFFFFFDu; // 800C41E4
  c->r[6]=rotl(c->r[5],0)&0xFFFFFFF8u; // 800C41E8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800C41EC
  c->r[5]=c->r[4]+c->r[6]; // 800C41F0
  c->r[0]=R32(c->r[4]+c->r[6]); // 800C41F4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800C41F8
  W32(c->r[4]+c->r[6],c->r[0]); // 800C41FC
  W32(c->r[5]+0xFFFFFFFCu,c->r[6]); // 800C4200
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C4204
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C4208
  c->r[31]=c->r[3]+c->r[0]; // 800C420C
  {uint32_t ea=c->r[31]+0xFFFFFFFCu; c->r[3]=R32(ea); c->r[31]=ea;} // 800C4210
  cmps(c,0,(int32_t)c->r[3],0); // 800C4214
  if (crb(c,2)) { goto L_800C42D8; } // 800C4218
  c->r[5]=R32(c->r[3]+0x00000008u); // 800C421C
  c->r[3]=c->r[4]|c->r[4]; // 800C4220
  W32(c->r[4]+0x00000008u,c->r[5]); // 800C4224
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 800C4228
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C422C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800C4230
  c->r[5]=R32(c->r[31]+0x00000000u); // 800C4234
  W32(c->r[5]+0x00000008u,c->r[4]); // 800C4238
  W32(c->r[31]+0x00000000u,c->r[4]); // 800C423C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C4240
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800C4244
  if (!crb(c,2)) { goto L_800C42C8; } // 800C4248
  c->r[6]=R32(c->r[4]+0xFFFFFFFCu); // 800C424C
  c->r[0]=rotl(c->r[6],0)&0x00000002u; cr0(c,c->r[0]); // 800C4250
  if (crb(c,2)) { goto L_800C425C; } // 800C4254
  goto L_800C42C8; // 800C4258
L_800C425C:;
  c->r[3]=c->r[4]-c->r[6]; // 800C425C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C4260
  c->r[5]=rotl(c->r[0],0)&0x00000007u; // 800C4264
  W32(c->r[3]+0x00000000u,c->r[5]); // 800C4268
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C426C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C4270
  c->r[0]=c->r[6]+c->r[0]; // 800C4274
  c->r[5]=(rotl(c->r[0],0)&0xFFFFFFF8u)|(c->r[5]&~0xFFFFFFF8u); // 800C4278
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 800C427C
  W32(c->r[3]+0x00000000u,c->r[5]); // 800C4280
  if (!crb(c,2)) { goto L_800C429C; } // 800C4284
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C4288
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C428C
  c->r[0]=c->r[6]+c->r[0]; // 800C4290
  c->r[5]=c->r[3]+c->r[0]; // 800C4294
  W32(c->r[5]+0xFFFFFFFCu,c->r[0]); // 800C4298
L_800C429C:;
  c->r[5]=R32(c->r[31]+0x00000000u); // 800C429C
  cmpu(c,0,c->r[5],c->r[4]); // 800C42A0
  if (!crb(c,2)) { goto L_800C42B0; } // 800C42A4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800C42A8
  W32(c->r[31]+0x00000000u,c->r[0]); // 800C42AC
L_800C42B0:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 800C42B0
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 800C42B4
  W32(c->r[5]+0x00000008u,c->r[0]); // 800C42B8
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 800C42BC
  c->r[4]=R32(c->r[5]+0x00000008u); // 800C42C0
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 800C42C4
L_800C42C8:;
  W32(c->r[31]+0x00000000u,c->r[3]); // 800C42C8
  c->r[4]=c->r[31]|c->r[31]; // 800C42CC
  c->lr=0x800C42D4u; f_800C4318(c); // 800C42D0
  goto L_800C42E4; // 800C42D4
L_800C42D8:;
  W32(c->r[31]+0x00000000u,c->r[4]); // 800C42D8
  W32(c->r[4]+0x00000008u,c->r[4]); // 800C42DC
  W32(c->r[4]+0x0000000Cu,c->r[4]); // 800C42E0
L_800C42E4:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C42E4
  c->r[0]=R32(c->r[30]+0x00000008u); // 800C42E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C42EC
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFF8u; // 800C42F0
  cmpu(c,0,c->r[0],c->r[3]); // 800C42F4
  if (!crb(c,0)) { goto L_800C4300; } // 800C42F8
  W32(c->r[30]+0x00000008u,c->r[3]); // 800C42FC
L_800C4300:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4300
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4304
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C4308
  c->lr=c->r[0]; // 800C430C
  c->r[1]=c->r[1]+0x00000010u; // 800C4310
  return; // 800C4314
}

// SubBlock_merge_next
void f_800C4318(Ctx* __restrict c) {
  trace_call(0x800C4318u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800C4318
  c->r[7]=rotl(c->r[5],0)&0xFFFFFFF8u; // 800C431C
  c->r[6]=R32(c->r[3]+c->r[7]); // 800C4320
  c->r[8]=c->r[3]+c->r[7]; // 800C4324
  c->r[0]=rotl(c->r[6],0)&0x00000002u; cr0(c,c->r[0]); // 800C4328
  if (!crb(c,2)) return; // 800C432C
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFF8u; // 800C4330
  c->r[5]=rotl(c->r[5],0)&0x00000007u; // 800C4334
  c->r[6]=c->r[7]+c->r[0]; // 800C4338
  c->r[5]=(rotl(c->r[6],0)&0xFFFFFFF8u)|(c->r[5]&~0xFFFFFFF8u); // 800C433C
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 800C4340
  W32(c->r[3]+0x00000000u,c->r[5]); // 800C4344
  if (!crb(c,2)) { goto L_800C4354; } // 800C4348
  c->r[5]=c->r[3]+c->r[6]; // 800C434C
  W32(c->r[5]+0xFFFFFFFCu,c->r[6]); // 800C4350
L_800C4354:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C4354
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800C4358
  if (!crb(c,2)) { goto L_800C4370; } // 800C435C
  c->r[0]=R32(c->r[3]+c->r[6]); // 800C4360
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 800C4364
  W32(c->r[3]+c->r[6],c->r[0]); // 800C4368
  goto L_800C437C; // 800C436C
L_800C4370:;
  c->r[0]=R32(c->r[3]+c->r[6]); // 800C4370
  c->r[0]=c->r[0]|0x00000004u; // 800C4374
  W32(c->r[3]+c->r[6],c->r[0]); // 800C4378
L_800C437C:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800C437C
  cmpu(c,0,c->r[3],c->r[8]); // 800C4380
  if (!crb(c,2)) { goto L_800C4390; } // 800C4384
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C4388
  W32(c->r[4]+0x00000000u,c->r[0]); // 800C438C
L_800C4390:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C4390
  cmpu(c,0,c->r[0],c->r[8]); // 800C4394
  if (!crb(c,2)) { goto L_800C43A4; } // 800C4398
  c->r[0]=0u+0x00000000u; // 800C439C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800C43A0
L_800C43A4:;
  c->r[0]=R32(c->r[8]+0x00000008u); // 800C43A4
  c->r[3]=R32(c->r[8]+0x0000000Cu); // 800C43A8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C43AC
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 800C43B0
  c->r[3]=R32(c->r[8]+0x00000008u); // 800C43B4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800C43B8
  return; // 800C43BC
}

// fn_800C43C0
void f_800C43C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C43C0
  c->r[0]=c->lr; // 800C43C4
  cmps(c,0,(int32_t)c->r[5],0); // 800C43C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C43CC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C43D0
  c->r[28]=c->r[3]|c->r[3]; // 800C43D4
  c->r[30]=c->r[5]|c->r[5]; // 800C43D8
  if (crb(c,2)) { goto L_800C43E8; } // 800C43DC
  c->r[0]=0u+0x00000000u; // 800C43E0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C43E4
L_800C43E8:;
  c->r[0]=c->r[4]+0x0000000Fu; // 800C43E8
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C43EC
  cmpu(c,0,c->r[29],0x00000050u); // 800C43F0
  if (!crb(c,0)) { goto L_800C43FC; } // 800C43F4
  c->r[29]=0u+0x00000050u; // 800C43F8
L_800C43FC:;
  c->r[31]=R32(c->r[3]+0x00000000u); // 800C43FC
  cmps(c,0,(int32_t)c->r[31],0); // 800C4400
  if (crb(c,2)) { goto L_800C440C; } // 800C4404
  goto L_800C44C4; // 800C4408
L_800C440C:;
  c->r[3]=c->r[29]+0x0000001Fu; // 800C440C
  c->r[0]=0u+0x00010000u; // 800C4410
  c->r[27]=rotl(c->r[3],0)&0xFFFFFFF8u; // 800C4414
  cmpu(c,0,c->r[27],c->r[0]); // 800C4418
  if (!crb(c,0)) { goto L_800C4424; } // 800C441C
  c->r[27]=0u+0x00010000u; // 800C4420
L_800C4424:;
  c->r[3]=c->r[27]|c->r[27]; // 800C4424
  c->lr=0x800C442Cu; f_800C3E54(c); // 800C4428
  cmps(c,0,(int32_t)c->r[3],0); // 800C442C
  c->r[31]=c->r[3]|c->r[3]; // 800C4430
  if (!crb(c,2)) { goto L_800C4440; } // 800C4434
  c->r[31]=0u+0x00000000u; // 800C4438
  goto L_800C44C4; // 800C443C
L_800C4440:;
  c->r[6]=c->r[27]|0x00000003u; // 800C4440
  c->r[5]=c->r[3]+c->r[27]; // 800C4444
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 800C4448
  c->r[7]=c->r[3]|0x00000001u; // 800C444C
  c->r[0]=c->r[27]+0xFFFFFFE8u; // 800C4450
  c->r[4]=c->r[3]+0x00000010u; // 800C4454
  W32(c->r[5]+0xFFFFFFF8u,c->r[6]); // 800C4458
  c->r[5]=c->r[27]+c->r[4]; // 800C445C
  c->r[6]=0u+0x00000000u; // 800C4460
  W32(c->r[3]+0x00000014u,c->r[7]); // 800C4464
  W32(c->r[3]+0x00000010u,c->r[0]); // 800C4468
  W32(c->r[5]+0xFFFFFFE4u,c->r[0]); // 800C446C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C4470
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C4474
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C4478
  c->r[5]=c->r[3]+c->r[0]; // 800C447C
  W32(c->r[5]+0xFFFFFFFCu,c->r[6]); // 800C4480
  c->lr=0x800C4488u; f_800C41C8(c); // 800C4484
  c->r[3]=R32(c->r[28]+0x00000000u); // 800C4488
  cmps(c,0,(int32_t)c->r[3],0); // 800C448C
  if (crb(c,2)) { goto L_800C44B8; } // 800C4490
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C4494
  W32(c->r[31]+0x00000000u,c->r[3]); // 800C4498
  W32(c->r[3]+0x00000004u,c->r[31]); // 800C449C
  c->r[0]=R32(c->r[28]+0x00000000u); // 800C44A0
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C44A4
  c->r[3]=R32(c->r[28]+0x00000000u); // 800C44A8
  W32(c->r[3]+0x00000000u,c->r[31]); // 800C44AC
  W32(c->r[28]+0x00000000u,c->r[31]); // 800C44B0
  goto L_800C44C4; // 800C44B4
L_800C44B8:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 800C44B8
  W32(c->r[31]+0x00000000u,c->r[31]); // 800C44BC
  W32(c->r[31]+0x00000004u,c->r[31]); // 800C44C0
L_800C44C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C44C4
  if (!crb(c,2)) { goto L_800C44D4; } // 800C44C8
  c->r[3]=0u+0x00000000u; // 800C44CC
  goto L_800C45EC; // 800C44D0
L_800C44D4:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C44D4
  cmpu(c,0,c->r[29],c->r[0]); // 800C44D8
  if (crb(c,1)) { goto L_800C4500; } // 800C44DC
  c->r[3]=c->r[31]|c->r[31]; // 800C44E0
  c->r[4]=c->r[29]|c->r[29]; // 800C44E4
  c->r[5]=c->r[30]|c->r[30]; // 800C44E8
  c->lr=0x800C44F0u; f_800C3FC4(c); // 800C44EC
  cmps(c,0,(int32_t)c->r[3],0); // 800C44F0
  if (crb(c,2)) { goto L_800C4500; } // 800C44F4
  W32(c->r[28]+0x00000000u,c->r[31]); // 800C44F8
  goto L_800C45E8; // 800C44FC
L_800C4500:;
  c->r[31]=R32(c->r[31]+0x00000004u); // 800C4500
  c->r[0]=R32(c->r[28]+0x00000000u); // 800C4504
  cmpu(c,0,c->r[31],c->r[0]); // 800C4508
  if (!crb(c,2)) { IRQCHK(c); goto L_800C44D4; } // 800C450C
  c->r[3]=c->r[29]+0x0000001Fu; // 800C4510
  c->r[0]=0u+0x00010000u; // 800C4514
  c->r[27]=rotl(c->r[3],0)&0xFFFFFFF8u; // 800C4518
  cmpu(c,0,c->r[27],c->r[0]); // 800C451C
  if (!crb(c,0)) { goto L_800C4528; } // 800C4520
  c->r[27]=0u+0x00010000u; // 800C4524
L_800C4528:;
  c->r[3]=c->r[27]|c->r[27]; // 800C4528
  c->lr=0x800C4530u; f_800C3E54(c); // 800C452C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4530
  c->r[31]=c->r[3]|c->r[3]; // 800C4534
  if (!crb(c,2)) { goto L_800C4544; } // 800C4538
  c->r[31]=0u+0x00000000u; // 800C453C
  goto L_800C45C8; // 800C4540
L_800C4544:;
  c->r[6]=c->r[27]|0x00000003u; // 800C4544
  c->r[5]=c->r[3]+c->r[27]; // 800C4548
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 800C454C
  c->r[7]=c->r[3]|0x00000001u; // 800C4550
  c->r[0]=c->r[27]+0xFFFFFFE8u; // 800C4554
  c->r[4]=c->r[3]+0x00000010u; // 800C4558
  W32(c->r[5]+0xFFFFFFF8u,c->r[6]); // 800C455C
  c->r[5]=c->r[27]+c->r[4]; // 800C4560
  c->r[6]=0u+0x00000000u; // 800C4564
  W32(c->r[3]+0x00000014u,c->r[7]); // 800C4568
  W32(c->r[3]+0x00000010u,c->r[0]); // 800C456C
  W32(c->r[5]+0xFFFFFFE4u,c->r[0]); // 800C4570
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C4574
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C4578
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C457C
  c->r[5]=c->r[3]+c->r[0]; // 800C4580
  W32(c->r[5]+0xFFFFFFFCu,c->r[6]); // 800C4584
  c->lr=0x800C458Cu; f_800C41C8(c); // 800C4588
  c->r[3]=R32(c->r[28]+0x00000000u); // 800C458C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4590
  if (crb(c,2)) { goto L_800C45BC; } // 800C4594
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C4598
  W32(c->r[31]+0x00000000u,c->r[3]); // 800C459C
  W32(c->r[3]+0x00000004u,c->r[31]); // 800C45A0
  c->r[0]=R32(c->r[28]+0x00000000u); // 800C45A4
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C45A8
  c->r[3]=R32(c->r[28]+0x00000000u); // 800C45AC
  W32(c->r[3]+0x00000000u,c->r[31]); // 800C45B0
  W32(c->r[28]+0x00000000u,c->r[31]); // 800C45B4
  goto L_800C45C8; // 800C45B8
L_800C45BC:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 800C45BC
  W32(c->r[31]+0x00000000u,c->r[31]); // 800C45C0
  W32(c->r[31]+0x00000004u,c->r[31]); // 800C45C4
L_800C45C8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C45C8
  if (!crb(c,2)) { goto L_800C45D8; } // 800C45CC
  c->r[3]=0u+0x00000000u; // 800C45D0
  goto L_800C45EC; // 800C45D4
L_800C45D8:;
  c->r[3]=c->r[31]|c->r[31]; // 800C45D8
  c->r[4]=c->r[29]|c->r[29]; // 800C45DC
  c->r[5]=c->r[30]|c->r[30]; // 800C45E0
  c->lr=0x800C45E8u; f_800C3FC4(c); // 800C45E4
L_800C45E8:;
  c->r[3]=c->r[3]+0x00000008u; // 800C45E8
L_800C45EC:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C45EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C45F0
  c->lr=c->r[0]; // 800C45F4
  c->r[1]=c->r[1]+0x00000020u; // 800C45F8
  return; // 800C45FC
}

// fn_800C4600
void f_800C4600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4600
  c->r[0]=c->lr; // 800C4604
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C4608
  c->r[0]=c->r[4]+0x0000000Fu; // 800C460C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C4610
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C4614
  c->r[30]=c->r[5]|c->r[5]; // 800C4618
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C461C
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C4620
  cmpu(c,0,c->r[29],0x00000050u); // 800C4624
  W32(c->r[1]+0x00000010u,c->r[28]); // 800C4628
  c->r[28]=c->r[3]|c->r[3]; // 800C462C
  if (!crb(c,0)) { goto L_800C4638; } // 800C4630
  c->r[29]=0u+0x00000050u; // 800C4634
L_800C4638:;
  c->r[0]=0u+0x00000000u; // 800C4638
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C463C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800C4640
  cmps(c,0,(int32_t)c->r[31],0); // 800C4644
  if (!crb(c,2)) { goto L_800C4654; } // 800C4648
  c->r[3]=0u+0x00000000u; // 800C464C
  goto L_800C46BC; // 800C4650
L_800C4654:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C4654
  cmpu(c,0,c->r[29],c->r[0]); // 800C4658
  if (crb(c,1)) { goto L_800C4680; } // 800C465C
  c->r[3]=c->r[31]|c->r[31]; // 800C4660
  c->r[4]=c->r[29]|c->r[29]; // 800C4664
  c->r[5]=0u+0x00000000u; // 800C4668
  c->lr=0x800C4670u; f_800C3FC4(c); // 800C466C
  cmps(c,0,(int32_t)c->r[3],0); // 800C4670
  if (crb(c,2)) { goto L_800C4680; } // 800C4674
  W32(c->r[28]+0x00000000u,c->r[31]); // 800C4678
  goto L_800C46B8; // 800C467C
L_800C4680:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C4680
  cmpu(c,0,c->r[3],0x00000008u); // 800C4684
  if (!crb(c,1)) { goto L_800C46A0; } // 800C4688
  c->r[0]=R32(c->r[30]+0x00000000u); // 800C468C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800C4690
  cmpu(c,0,c->r[0],c->r[3]); // 800C4694
  if (!crb(c,0)) { goto L_800C46A0; } // 800C4698
  W32(c->r[30]+0x00000000u,c->r[3]); // 800C469C
L_800C46A0:;
  c->r[31]=R32(c->r[31]+0x00000004u); // 800C46A0
  c->r[0]=R32(c->r[28]+0x00000000u); // 800C46A4
  cmpu(c,0,c->r[31],c->r[0]); // 800C46A8
  if (!crb(c,2)) { IRQCHK(c); goto L_800C4654; } // 800C46AC
  c->r[3]=0u+0x00000000u; // 800C46B0
  goto L_800C46BC; // 800C46B4
L_800C46B8:;
  c->r[3]=c->r[3]+0x00000008u; // 800C46B8
L_800C46BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C46BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C46C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C46C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C46C8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800C46CC
  c->lr=c->r[0]; // 800C46D0
  c->r[1]=c->r[1]+0x00000020u; // 800C46D4
  return; // 800C46D8
}

// fn_800C46DC
void f_800C46DC(Ctx* __restrict c) {
  c->r[9]=0u+0x801F0000u; // 800C46DC
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800C46E0
  c->r[9]=c->r[9]+0x00003BC0u; // 800C46E4
  W32(c->r[3]+0x00000000u,c->r[4]); // 800C46E8
  c->r[6]=R32(c->r[9]+c->r[0]); // 800C46EC
  c->r[10]=c->r[7]|c->r[7]; // 800C46F0
  W32(c->r[3]+0x00000004u,c->r[5]); // 800C46F4
  c->r[11]=0u+0x00000000u; // 800C46F8
  c->r[9]=c->r[6]+0x00000004u; // 800C46FC
  c->r[8]=divwu(c->r[8],c->r[9]); // 800C4700
  W32(c->r[4]+0x00000004u,c->r[3]); // 800C4704
  W32(c->r[5]+0x00000000u,c->r[3]); // 800C4708
  W32(c->r[3]+0x00000008u,c->r[6]); // 800C470C
  c->r[0]=addc(c,c->r[8],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800C4710
  if (crb(c,2)) { goto L_800C47E8; } // 800C4714
  cmpu(c,0,c->r[0],0x00000008u); // 800C4718
  c->r[4]=c->r[8]+0xFFFFFFF7u; // 800C471C
  if (!crb(c,1)) { goto L_800C47C0; } // 800C4720
  c->r[0]=c->r[4]+0x00000007u; // 800C4724
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800C4728
  c->ctr=c->r[0]; // 800C472C
  cmpu(c,0,c->r[4],0x00000000u); // 800C4730
  if (!crb(c,1)) { goto L_800C47C0; } // 800C4734
L_800C4738:;
  W32(c->r[10]+0x00000000u,c->r[3]); // 800C4738
  c->r[0]=c->r[10]+c->r[9]; // 800C473C
  c->r[4]=c->r[0]|c->r[0]; // 800C4740
  c->r[11]=c->r[11]+0x00000008u; // 800C4744
  W32(c->r[10]+0x00000004u,c->r[0]); // 800C4748
  c->r[0]=c->r[0]+c->r[9]; // 800C474C
  c->r[5]=c->r[0]|c->r[0]; // 800C4750
  W32(c->r[4]+0x00000000u,c->r[3]); // 800C4754
  W32(c->r[4]+0x00000004u,c->r[0]); // 800C4758
  c->r[0]=c->r[0]+c->r[9]; // 800C475C
  c->r[4]=c->r[0]|c->r[0]; // 800C4760
  W32(c->r[5]+0x00000000u,c->r[3]); // 800C4764
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4768
  c->r[0]=c->r[0]+c->r[9]; // 800C476C
  c->r[5]=c->r[0]|c->r[0]; // 800C4770
  W32(c->r[4]+0x00000000u,c->r[3]); // 800C4774
  W32(c->r[4]+0x00000004u,c->r[0]); // 800C4778
  c->r[0]=c->r[0]+c->r[9]; // 800C477C
  c->r[4]=c->r[0]|c->r[0]; // 800C4780
  W32(c->r[5]+0x00000000u,c->r[3]); // 800C4784
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4788
  c->r[0]=c->r[0]+c->r[9]; // 800C478C
  c->r[5]=c->r[0]|c->r[0]; // 800C4790
  W32(c->r[4]+0x00000000u,c->r[3]); // 800C4794
  W32(c->r[4]+0x00000004u,c->r[0]); // 800C4798
  c->r[0]=c->r[0]+c->r[9]; // 800C479C
  c->r[4]=c->r[0]|c->r[0]; // 800C47A0
  W32(c->r[5]+0x00000000u,c->r[3]); // 800C47A4
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C47A8
  c->r[0]=c->r[0]+c->r[9]; // 800C47AC
  c->r[10]=c->r[0]|c->r[0]; // 800C47B0
  W32(c->r[4]+0x00000000u,c->r[3]); // 800C47B4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800C47B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C4738; } // 800C47BC
L_800C47C0:;
  c->r[4]=c->r[8]+0xFFFFFFFFu; // 800C47C0
  c->r[0]=c->r[4]-c->r[11]; // 800C47C4
  c->ctr=c->r[0]; // 800C47C8
  cmpu(c,0,c->r[11],c->r[4]); // 800C47CC
  if (!crb(c,0)) { goto L_800C47E8; } // 800C47D0
L_800C47D4:;
  W32(c->r[10]+0x00000000u,c->r[3]); // 800C47D4
  c->r[0]=c->r[10]+c->r[9]; // 800C47D8
  W32(c->r[10]+0x00000004u,c->r[0]); // 800C47DC
  c->r[10]=c->r[0]|c->r[0]; // 800C47E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C47D4; } // 800C47E4
L_800C47E8:;
  W32(c->r[10]+0x00000000u,c->r[3]); // 800C47E8
  c->r[0]=0u+0x00000000u; // 800C47EC
  W32(c->r[10]+0x00000004u,c->r[0]); // 800C47F0
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 800C47F4
  W32(c->r[3]+0x00000010u,c->r[0]); // 800C47F8
  return; // 800C47FC
}

// fn_800C4800
void f_800C4800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4800
  c->r[0]=c->lr; // 800C4804
  c->r[6]=0u+0x801F0000u; // 800C4808
  W32(c->r[1]+0x00000044u,c->r[0]); // 800C480C
  c->r[6]=c->r[6]+0x00003BC0u; // 800C4810
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C4814
  c->r[27]=c->r[3]|c->r[3]; // 800C4818
  c->r[28]=c->r[5]|c->r[5]; // 800C481C
  c->r[30]=0u+0x00000000u; // 800C4820
  goto L_800C4830; // 800C4824
L_800C4828:;
  c->r[6]=c->r[6]+0x00000004u; // 800C4828
  c->r[30]=c->r[30]+0x00000001u; // 800C482C
L_800C4830:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800C4830
  cmpu(c,0,c->r[4],c->r[0]); // 800C4834
  if (crb(c,1)) { IRQCHK(c); goto L_800C4828; } // 800C4838
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 800C483C
  c->r[31]=c->r[3]+c->r[0]; // 800C4840
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C4844
  cmps(c,0,(int32_t)c->r[3],0); // 800C4848
  if (crb(c,2)) { goto L_800C485C; } // 800C484C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C4850
  cmps(c,0,(int32_t)c->r[0],0); // 800C4854
  if (!crb(c,2)) { goto L_800C4990; } // 800C4858
L_800C485C:;
  c->r[3]=0u+0x801F0000u; // 800C485C
  c->r[24]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800C4860
  c->r[3]=c->r[3]+0x00003BC0u; // 800C4864
  c->r[4]=0u+0x00000FECu; // 800C4868
  c->r[3]=R32(c->r[3]+c->r[24]); // 800C486C
  c->r[0]=c->r[3]+0x00000004u; // 800C4870
  c->r[0]=divwu(c->r[4],c->r[0]); // 800C4874
  cmpu(c,0,c->r[0],0x00000100u); // 800C4878
  if (!crb(c,1)) { goto L_800C4884; } // 800C487C
  c->r[0]=0u+0x00000100u; // 800C4880
L_800C4884:;
  c->r[25]=0u+0x801F0000u; // 800C4884
  c->r[23]=c->r[0]|c->r[0]; // 800C4888
  c->r[25]=c->r[25]+0x00003BC0u; // 800C488C
  c->r[3]=R32(c->r[25]+c->r[24]); // 800C4890
  c->r[26]=c->r[3]+0x00000004u; // 800C4894
  goto L_800C48D8; // 800C4898
L_800C489C:;
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[26]); // 800C489C
  c->r[3]=c->r[27]|c->r[27]; // 800C48A0
  c->r[5]=c->r[1]+0x0000000Cu; // 800C48A4
  c->r[4]=c->r[4]+0x00000014u; // 800C48A8
  c->lr=0x800C48B0u; f_800C4600(c); // 800C48AC
  cmps(c,0,(int32_t)c->r[3],0); // 800C48B0
  c->r[29]=c->r[3]|c->r[3]; // 800C48B4
  if (!crb(c,2)) { goto L_800C48E0; } // 800C48B8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C48BC
  cmpu(c,0,c->r[3],0x00000014u); // 800C48C0
  if (!crb(c,1)) { goto L_800C48D4; } // 800C48C4
  c->r[0]=c->r[3]+0xFFFFFFECu; // 800C48C8
  c->r[0]=divwu(c->r[0],c->r[26]); // 800C48CC
  goto L_800C48D8; // 800C48D0
L_800C48D4:;
  c->r[0]=0u+0x00000000u; // 800C48D4
L_800C48D8:;
  cmpu(c,0,c->r[0],0x0000000Au); // 800C48D8
  if (!crb(c,0)) { IRQCHK(c); goto L_800C489C; } // 800C48DC
L_800C48E0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800C48E0
  if (!crb(c,2)) { goto L_800C493C; } // 800C48E4
  c->r[3]=R32(c->r[25]+c->r[24]); // 800C48E8
  c->r[25]=c->r[3]+0x00000004u; // 800C48EC
  c->r[26]=c->r[3]+0x00000018u; // 800C48F0
L_800C48F4:;
  c->r[4]=(uint32_t)((int32_t)c->r[23]*(int32_t)c->r[25]); // 800C48F4
  c->r[3]=c->r[27]|c->r[27]; // 800C48F8
  c->r[5]=c->r[1]+0x00000008u; // 800C48FC
  c->r[4]=c->r[4]+0x00000014u; // 800C4900
  c->lr=0x800C4908u; f_800C43C0(c); // 800C4904
  cmps(c,0,(int32_t)c->r[3],0); // 800C4908
  c->r[29]=c->r[3]|c->r[3]; // 800C490C
  if (!crb(c,2)) { goto L_800C493C; } // 800C4910
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C4914
  c->r[23]=divwu(c->r[0],c->r[26]); // 800C4918
  cmpu(c,0,c->r[23],0x0000000Au); // 800C491C
  if (!crb(c,0)) { IRQCHK(c); goto L_800C48F4; } // 800C4920
  cmps(c,0,(int32_t)c->r[28],0); // 800C4924
  if (crb(c,2)) { goto L_800C4934; } // 800C4928
  c->r[0]=0u+0x00000000u; // 800C492C
  W32(c->r[28]+0x00000000u,c->r[0]); // 800C4930
L_800C4934:;
  c->r[3]=0u+0x00000000u; // 800C4934
  goto L_800C49F4; // 800C4938
L_800C493C:;
  c->r[3]=R32(c->r[29]+0xFFFFFFFCu); // 800C493C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C4940
  if (!crb(c,2)) { goto L_800C4950; } // 800C4944
  c->r[8]=R32(c->r[3]+0x00000008u); // 800C4948
  goto L_800C495C; // 800C494C
L_800C4950:;
  c->r[0]=R32(c->r[29]+0xFFFFFFF8u); // 800C4950
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C4954
  c->r[8]=c->r[3]+0xFFFFFFF8u; // 800C4958
L_800C495C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C495C
  cmps(c,0,(int32_t)c->r[0],0); // 800C4960
  if (!crb(c,2)) { goto L_800C4970; } // 800C4964
  W32(c->r[31]+0x00000008u,c->r[29]); // 800C4968
  W32(c->r[31]+0x00000004u,c->r[29]); // 800C496C
L_800C4970:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 800C4970
  c->r[3]=c->r[29]|c->r[29]; // 800C4974
  c->r[5]=R32(c->r[31]+0x00000008u); // 800C4978
  c->r[6]=c->r[30]|c->r[30]; // 800C497C
  c->r[7]=c->r[29]+0x00000014u; // 800C4980
  c->r[8]=c->r[8]+0xFFFFFFECu; // 800C4984
  c->lr=0x800C498Cu; f_800C46DC(c); // 800C4988
  W32(c->r[31]+0x00000008u,c->r[29]); // 800C498C
L_800C4990:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C4990
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 800C4994
  c->r[0]=R32(c->r[5]+0x00000004u); // 800C4998
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800C499C
  c->r[4]=R32(c->r[31]+0x00000008u); // 800C49A0
  c->r[3]=R32(c->r[4]+0x00000010u); // 800C49A4
  c->r[0]=c->r[3]+0x00000001u; // 800C49A8
  W32(c->r[4]+0x00000010u,c->r[0]); // 800C49AC
  c->r[3]=R32(c->r[31]+0x00000008u); // 800C49B0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800C49B4
  cmps(c,0,(int32_t)c->r[0],0); // 800C49B8
  if (!crb(c,2)) { goto L_800C49D4; } // 800C49BC
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C49C0
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C49C4
  c->r[3]=R32(c->r[31]+0x00000004u); // 800C49C8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C49CC
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C49D0
L_800C49D4:;
  cmps(c,0,(int32_t)c->r[28],0); // 800C49D4
  if (crb(c,2)) { goto L_800C49F0; } // 800C49D8
  c->r[3]=0u+0x801F0000u; // 800C49DC
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 800C49E0
  c->r[3]=c->r[3]+0x00003BC0u; // 800C49E4
  c->r[0]=R32(c->r[3]+c->r[0]); // 800C49E8
  W32(c->r[28]+0x00000000u,c->r[0]); // 800C49EC
L_800C49F0:;
  c->r[3]=c->r[5]+0x00000004u; // 800C49F0
L_800C49F4:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C49F4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800C49F8
  c->lr=c->r[0]; // 800C49FC
  c->r[1]=c->r[1]+0x00000040u; // 800C4A00
  return; // 800C4A04
}

// deallocate_from_fixed_pools
void f_800C4A08(Ctx* __restrict c) {
  trace_call(0x800C4A08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4A08
  c->r[0]=c->lr; // 800C4A0C
  c->r[6]=0u+0x801F0000u; // 800C4A10
  c->r[7]=0u+0x00000000u; // 800C4A14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4A18
  c->r[6]=c->r[6]+0x00003BC0u; // 800C4A1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4A20
  c->r[31]=c->r[3]|c->r[3]; // 800C4A24
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C4A28
  goto L_800C4A38; // 800C4A2C
L_800C4A30:;
  c->r[6]=c->r[6]+0x00000004u; // 800C4A30
  c->r[7]=c->r[7]+0x00000001u; // 800C4A34
L_800C4A38:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800C4A38
  cmpu(c,0,c->r[5],c->r[0]); // 800C4A3C
  if (crb(c,1)) { IRQCHK(c); goto L_800C4A30; } // 800C4A40
  c->r[6]=c->r[4]+0xFFFFFFFCu; // 800C4A44
  c->r[4]=R32(c->r[4]+0xFFFFFFFCu); // 800C4A48
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800C4A4C
  c->r[3]=c->r[3]+c->r[0]; // 800C4A50
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800C4A54
  cmps(c,0,(int32_t)c->r[0],0); // 800C4A58
  if (!crb(c,2)) { goto L_800C4AC8; } // 800C4A5C
  c->r[5]=R32(c->r[3]+0x00000008u); // 800C4A60
  cmpu(c,0,c->r[5],c->r[4]); // 800C4A64
  if (crb(c,2)) { goto L_800C4AC8; } // 800C4A68
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C4A6C
  cmpu(c,0,c->r[0],c->r[4]); // 800C4A70
  if (!crb(c,2)) { goto L_800C4A90; } // 800C4A74
  c->r[0]=R32(c->r[5]+0x00000000u); // 800C4A78
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C4A7C
  c->r[5]=R32(c->r[3]+0x00000004u); // 800C4A80
  c->r[0]=R32(c->r[5]+0x00000000u); // 800C4A84
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C4A88
  goto L_800C4AC8; // 800C4A8C
L_800C4A90:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4A90
  c->r[5]=R32(c->r[4]+0x00000000u); // 800C4A94
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4A98
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C4A9C
  c->r[5]=R32(c->r[4]+0x00000004u); // 800C4AA0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C4AA4
  c->r[5]=R32(c->r[3]+0x00000008u); // 800C4AA8
  W32(c->r[4]+0x00000004u,c->r[5]); // 800C4AAC
  c->r[5]=R32(c->r[5]+0x00000000u); // 800C4AB0
  W32(c->r[4]+0x00000000u,c->r[5]); // 800C4AB4
  W32(c->r[5]+0x00000004u,c->r[4]); // 800C4AB8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800C4ABC
  W32(c->r[5]+0x00000000u,c->r[4]); // 800C4AC0
  W32(c->r[3]+0x00000008u,c->r[4]); // 800C4AC4
L_800C4AC8:;
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800C4AC8
  W32(c->r[6]+0x00000004u,c->r[0]); // 800C4ACC
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 800C4AD0
  c->r[0]=R32(c->r[4]+0x00000010u); // 800C4AD4
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 800C4AD8
  W32(c->r[4]+0x00000010u,c->r[0]); // 800C4ADC
  if (!crb(c,2)) { goto L_800C4BDC; } // 800C4AE0
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C4AE4
  cmpu(c,0,c->r[0],c->r[4]); // 800C4AE8
  if (!crb(c,2)) { goto L_800C4AF8; } // 800C4AEC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4AF0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C4AF4
L_800C4AF8:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C4AF8
  cmpu(c,0,c->r[0],c->r[4]); // 800C4AFC
  if (!crb(c,2)) { goto L_800C4B0C; } // 800C4B00
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C4B04
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C4B08
L_800C4B0C:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4B0C
  c->r[5]=R32(c->r[4]+0x00000000u); // 800C4B10
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C4B14
  c->r[0]=R32(c->r[4]+0x00000000u); // 800C4B18
  c->r[5]=R32(c->r[4]+0x00000004u); // 800C4B1C
  W32(c->r[5]+0x00000000u,c->r[0]); // 800C4B20
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C4B24
  cmpu(c,0,c->r[0],c->r[4]); // 800C4B28
  if (!crb(c,2)) { goto L_800C4B38; } // 800C4B2C
  c->r[0]=0u+0x00000000u; // 800C4B30
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C4B34
L_800C4B38:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C4B38
  cmpu(c,0,c->r[0],c->r[4]); // 800C4B3C
  if (!crb(c,2)) { goto L_800C4B4C; } // 800C4B40
  c->r[0]=0u+0x00000000u; // 800C4B44
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C4B48
L_800C4B4C:;
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 800C4B4C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800C4B50
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800C4B54
  c->r[3]=c->r[30]|c->r[30]; // 800C4B58
  c->lr=0x800C4B60u; f_800C41C8(c); // 800C4B5C
  c->r[3]=R32(c->r[30]+0x00000010u); // 800C4B60
  c->r[5]=0u+0x00000000u; // 800C4B64
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C4B68
  if (!crb(c,2)) { goto L_800C4B8C; } // 800C4B6C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800C4B70
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFF8u; // 800C4B74
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C4B78
  c->r[0]=c->r[3]+0xFFFFFFE8u; // 800C4B7C
  cmpu(c,0,c->r[4],c->r[0]); // 800C4B80
  if (!crb(c,2)) { goto L_800C4B8C; } // 800C4B84
  c->r[5]=0u+0x00000001u; // 800C4B88
L_800C4B8C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C4B8C
  if (crb(c,2)) { goto L_800C4BDC; } // 800C4B90
  c->r[4]=R32(c->r[30]+0x00000004u); // 800C4B94
  cmpu(c,0,c->r[4],c->r[30]); // 800C4B98
  if (!crb(c,2)) { goto L_800C4BA4; } // 800C4B9C
  c->r[4]=0u+0x00000000u; // 800C4BA0
L_800C4BA4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800C4BA4
  cmpu(c,0,c->r[0],c->r[30]); // 800C4BA8
  if (!crb(c,2)) { goto L_800C4BB4; } // 800C4BAC
  W32(c->r[31]+0x00000000u,c->r[4]); // 800C4BB0
L_800C4BB4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C4BB4
  if (crb(c,2)) { goto L_800C4BC8; } // 800C4BB8
  c->r[3]=R32(c->r[30]+0x00000000u); // 800C4BBC
  W32(c->r[4]+0x00000000u,c->r[3]); // 800C4BC0
  W32(c->r[3]+0x00000004u,c->r[4]); // 800C4BC4
L_800C4BC8:;
  c->r[0]=0u+0x00000000u; // 800C4BC8
  c->r[3]=c->r[30]|c->r[30]; // 800C4BCC
  W32(c->r[30]+0x00000004u,c->r[0]); // 800C4BD0
  W32(c->r[30]+0x00000000u,c->r[0]); // 800C4BD4
  c->lr=0x800C4BDCu; f_800C3F0C(c); // 800C4BD8
L_800C4BDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4BDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4BE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C4BE4
  c->lr=c->r[0]; // 800C4BE8
  c->r[1]=c->r[1]+0x00000010u; // 800C4BEC
  return; // 800C4BF0
}

// fn_800C4BF4
void f_800C4BF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4BF4
  c->r[0]=c->lr; // 800C4BF8
  cmps(c,0,(int32_t)c->r[3],0); // 800C4BFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4C00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4C04
  c->r[31]=c->r[3]|c->r[3]; // 800C4C08
  if (crb(c,2)) { goto L_800C4C7C; } // 800C4C0C
  c->r[0]=R8(c->r[13]+0xFFFFA4C8u); // 800C4C10
  cmps(c,0,(int32_t)c->r[0],0); // 800C4C14
  if (!crb(c,2)) { goto L_800C4C38; } // 800C4C18
  c->r[3]=0u+0x802C0000u; // 800C4C1C
  c->r[4]=0u+0x00000000u; // 800C4C20
  c->r[3]=c->r[3]+0xFFFFCEB8u; // 800C4C24
  c->r[5]=0u+0x00000034u; // 800C4C28
  c->lr=0x800C4C30u; f_8000443C(c); // 800C4C2C
  c->r[0]=0u+0x00000001u; // 800C4C30
  W8(c->r[13]+0xFFFFA4C8u,c->r[0]); // 800C4C34
L_800C4C38:;
  c->r[0]=0u+0xFFFFFFCFu; // 800C4C38
  c->r[3]=0u+0x802C0000u; // 800C4C3C
  cmpu(c,0,c->r[31],c->r[0]); // 800C4C40
  c->r[3]=c->r[3]+0xFFFFCEB8u; // 800C4C44
  if (!crb(c,1)) { goto L_800C4C54; } // 800C4C48
  c->r[3]=0u+0x00000000u; // 800C4C4C
  goto L_800C4C80; // 800C4C50
L_800C4C54:;
  cmpu(c,0,c->r[31],0x00000044u); // 800C4C54
  if (crb(c,1)) { goto L_800C4C6C; } // 800C4C58
  c->r[4]=c->r[31]|c->r[31]; // 800C4C5C
  c->r[5]=0u+0x00000000u; // 800C4C60
  c->lr=0x800C4C68u; f_800C4800(c); // 800C4C64
  goto L_800C4C80; // 800C4C68
L_800C4C6C:;
  c->r[4]=c->r[31]|c->r[31]; // 800C4C6C
  c->r[5]=0u+0x00000000u; // 800C4C70
  c->lr=0x800C4C78u; f_800C43C0(c); // 800C4C74
  goto L_800C4C80; // 800C4C78
L_800C4C7C:;
  c->r[3]=0u+0x00000000u; // 800C4C7C
L_800C4C80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4C80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4C84
  c->lr=c->r[0]; // 800C4C88
  c->r[1]=c->r[1]+0x00000010u; // 800C4C8C
  return; // 800C4C90
}

// free
void f_800C4C94(Ctx* __restrict c) {
  trace_call(0x800C4C94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4C94
  c->r[0]=c->lr; // 800C4C98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4C9C
  c->r[0]=R8(c->r[13]+0xFFFFA4C8u); // 800C4CA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4CA4
  c->r[31]=c->r[3]|c->r[3]; // 800C4CA8
  cmps(c,0,(int32_t)c->r[0],0); // 800C4CAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C4CB0
  if (!crb(c,2)) { goto L_800C4CD4; } // 800C4CB4
  c->r[3]=0u+0x802C0000u; // 800C4CB8
  c->r[4]=0u+0x00000000u; // 800C4CBC
  c->r[3]=c->r[3]+0xFFFFCEB8u; // 800C4CC0
  c->r[5]=0u+0x00000034u; // 800C4CC4
  c->lr=0x800C4CCCu; f_8000443C(c); // 800C4CC8
  c->r[0]=0u+0x00000001u; // 800C4CCC
  W8(c->r[13]+0xFFFFA4C8u,c->r[0]); // 800C4CD0
L_800C4CD4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C4CD4
  c->r[30]=0u+0x802C0000u; // 800C4CD8
  c->r[30]=c->r[30]+0xFFFFCEB8u; // 800C4CDC
  if (crb(c,2)) { goto L_800C4DAC; } // 800C4CE0
  c->r[3]=R32(c->r[31]+0xFFFFFFFCu); // 800C4CE4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800C4CE8
  if (!crb(c,2)) { goto L_800C4CF8; } // 800C4CEC
  c->r[5]=R32(c->r[3]+0x00000008u); // 800C4CF0
  goto L_800C4D04; // 800C4CF4
L_800C4CF8:;
  c->r[0]=R32(c->r[31]+0xFFFFFFF8u); // 800C4CF8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C4CFC
  c->r[5]=c->r[3]+0xFFFFFFF8u; // 800C4D00
L_800C4D04:;
  cmpu(c,0,c->r[5],0x00000044u); // 800C4D04
  if (crb(c,1)) { goto L_800C4D1C; } // 800C4D08
  c->r[3]=c->r[30]|c->r[30]; // 800C4D0C
  c->r[4]=c->r[31]|c->r[31]; // 800C4D10
  c->lr=0x800C4D18u; f_800C4A08(c); // 800C4D14
  goto L_800C4DAC; // 800C4D18
L_800C4D1C:;
  c->r[0]=R32(c->r[31]+0xFFFFFFFCu); // 800C4D1C
  c->r[4]=c->r[31]+0xFFFFFFF8u; // 800C4D20
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800C4D24
  c->r[3]=c->r[31]|c->r[31]; // 800C4D28
  c->lr=0x800C4D30u; f_800C41C8(c); // 800C4D2C
  c->r[3]=R32(c->r[31]+0x00000010u); // 800C4D30
  c->r[5]=0u+0x00000000u; // 800C4D34
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800C4D38
  if (!crb(c,2)) { goto L_800C4D5C; } // 800C4D3C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800C4D40
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFF8u; // 800C4D44
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C4D48
  c->r[0]=c->r[3]+0xFFFFFFE8u; // 800C4D4C
  cmpu(c,0,c->r[4],c->r[0]); // 800C4D50
  if (!crb(c,2)) { goto L_800C4D5C; } // 800C4D54
  c->r[5]=0u+0x00000001u; // 800C4D58
L_800C4D5C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C4D5C
  if (crb(c,2)) { goto L_800C4DAC; } // 800C4D60
  c->r[4]=R32(c->r[31]+0x00000004u); // 800C4D64
  cmpu(c,0,c->r[4],c->r[31]); // 800C4D68
  if (!crb(c,2)) { goto L_800C4D74; } // 800C4D6C
  c->r[4]=0u+0x00000000u; // 800C4D70
L_800C4D74:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 800C4D74
  cmpu(c,0,c->r[0],c->r[31]); // 800C4D78
  if (!crb(c,2)) { goto L_800C4D84; } // 800C4D7C
  W32(c->r[30]+0x00000000u,c->r[4]); // 800C4D80
L_800C4D84:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C4D84
  if (crb(c,2)) { goto L_800C4D98; } // 800C4D88
  c->r[3]=R32(c->r[31]+0x00000000u); // 800C4D8C
  W32(c->r[4]+0x00000000u,c->r[3]); // 800C4D90
  W32(c->r[3]+0x00000004u,c->r[4]); // 800C4D94
L_800C4D98:;
  c->r[0]=0u+0x00000000u; // 800C4D98
  c->r[3]=c->r[31]|c->r[31]; // 800C4D9C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800C4DA0
  W32(c->r[31]+0x00000000u,c->r[0]); // 800C4DA4
  c->lr=0x800C4DACu; f_800C3F0C(c); // 800C4DA8
L_800C4DAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4DAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4DB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C4DB4
  c->lr=c->r[0]; // 800C4DB8
  c->r[1]=c->r[1]+0x00000010u; // 800C4DBC
  return; // 800C4DC0
}

// __close_all
void f_800C4DC4(Ctx* __restrict c) {
  trace_call(0x800C4DC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4DC4
  c->r[0]=c->lr; // 800C4DC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C4DCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C4DD0
  c->r[31]=0u+0x00000000u; // 800C4DD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C4DD8
  c->r[30]=0u+0x00000003u; // 800C4DDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C4DE0
  c->r[29]=0u+0x80220000u; // 800C4DE4
  c->r[29]=c->r[29]+0xFFFFBA38u; // 800C4DE8
  goto L_800C4E44; // 800C4DEC
L_800C4DF0:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 800C4DF0
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 800C4DF4
  if (crb(c,2)) { goto L_800C4E04; } // 800C4DF8
  c->r[3]=c->r[29]|c->r[29]; // 800C4DFC
  c->lr=0x800C4E04u; f_800C71E0(c); // 800C4E00
L_800C4E04:;
  c->r[3]=c->r[29]|c->r[29]; // 800C4E04
  c->r[29]=R32(c->r[29]+0x0000004Cu); // 800C4E08
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800C4E0C
  cmps(c,0,(int32_t)c->r[0],0); // 800C4E10
  if (crb(c,2)) { goto L_800C4E20; } // 800C4E14
  c->lr=0x800C4E1Cu; f_800C4C94(c); // 800C4E18
  goto L_800C4E44; // 800C4E1C
L_800C4E20:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C4E20
  c->r[0]=(rotl(c->r[30],22)&0x01C00000u)|(c->r[0]&~0x01C00000u); // 800C4E24
  cmps(c,0,(int32_t)c->r[29],0); // 800C4E28
  W32(c->r[3]+0x00000004u,c->r[0]); // 800C4E2C
  if (crb(c,2)) { goto L_800C4E44; } // 800C4E30
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 800C4E34
  cmps(c,0,(int32_t)c->r[0],0); // 800C4E38
  if (crb(c,2)) { goto L_800C4E44; } // 800C4E3C
  W32(c->r[3]+0x0000004Cu,c->r[31]); // 800C4E40
L_800C4E44:;
  cmps(c,0,(int32_t)c->r[29],0); // 800C4E44
  if (!crb(c,2)) { IRQCHK(c); goto L_800C4DF0; } // 800C4E48
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C4E4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C4E50
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C4E54
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C4E58
  c->lr=c->r[0]; // 800C4E5C
  c->r[1]=c->r[1]+0x00000020u; // 800C4E60
  return; // 800C4E64
}

// __flush_line_buffered_output_files
void f_800C4E68(Ctx* __restrict c) {
  trace_call(0x800C4E68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4E68
  c->r[0]=c->lr; // 800C4E6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4E70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4E74
  c->r[31]=0u+0x00000000u; // 800C4E78
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C4E7C
  c->r[30]=0u+0x80220000u; // 800C4E80
  c->r[30]=c->r[30]+0xFFFFBA38u; // 800C4E84
  goto L_800C4EC8; // 800C4E88
L_800C4E8C:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 800C4E8C
  c->r[0]=rotl(c->r[3],10)&0x00000007u; cr0(c,c->r[0]); // 800C4E90
  if (crb(c,2)) { goto L_800C4EC4; } // 800C4E94
  c->r[0]=rotl(c->r[3],7)&0x00000001u; cr0(c,c->r[0]); // 800C4E98
  if (crb(c,2)) { goto L_800C4EC4; } // 800C4E9C
  c->r[0]=R32(c->r[30]+0x00000008u); // 800C4EA0
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 800C4EA4
  cmpu(c,0,c->r[0],0x00000001u); // 800C4EA8
  if (!crb(c,2)) { goto L_800C4EC4; } // 800C4EAC
  c->r[3]=c->r[30]|c->r[30]; // 800C4EB0
  c->lr=0x800C4EB8u; f_800C729C(c); // 800C4EB4
  cmps(c,0,(int32_t)c->r[3],0); // 800C4EB8
  if (crb(c,2)) { goto L_800C4EC4; } // 800C4EBC
  c->r[31]=0u+0xFFFFFFFFu; // 800C4EC0
L_800C4EC4:;
  c->r[30]=R32(c->r[30]+0x0000004Cu); // 800C4EC4
L_800C4EC8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C4EC8
  if (!crb(c,2)) { IRQCHK(c); goto L_800C4E8C; } // 800C4ECC
  c->r[3]=c->r[31]|c->r[31]; // 800C4ED0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4ED4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C4ED8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4EDC
  c->lr=c->r[0]; // 800C4EE0
  c->r[1]=c->r[1]+0x00000010u; // 800C4EE4
  return; // 800C4EE8
}

// __flush_all
void f_800C4EEC(Ctx* __restrict c) {
  trace_call(0x800C4EECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4EEC
  c->r[0]=c->lr; // 800C4EF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C4EF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C4EF8
  c->r[31]=0u+0x00000000u; // 800C4EFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C4F00
  c->r[30]=0u+0x80220000u; // 800C4F04
  c->r[30]=c->r[30]+0xFFFFBA38u; // 800C4F08
  goto L_800C4F34; // 800C4F0C
L_800C4F10:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 800C4F10
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 800C4F14
  if (crb(c,2)) { goto L_800C4F30; } // 800C4F18
  c->r[3]=c->r[30]|c->r[30]; // 800C4F1C
  c->lr=0x800C4F24u; f_800C729C(c); // 800C4F20
  cmps(c,0,(int32_t)c->r[3],0); // 800C4F24
  if (crb(c,2)) { goto L_800C4F30; } // 800C4F28
  c->r[31]=0u+0xFFFFFFFFu; // 800C4F2C
L_800C4F30:;
  c->r[30]=R32(c->r[30]+0x0000004Cu); // 800C4F30
L_800C4F34:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C4F34
  if (!crb(c,2)) { IRQCHK(c); goto L_800C4F10; } // 800C4F38
  c->r[3]=c->r[31]|c->r[31]; // 800C4F3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C4F40
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C4F44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C4F48
  c->lr=c->r[0]; // 800C4F4C
  c->r[1]=c->r[1]+0x00000010u; // 800C4F50
  return; // 800C4F54
}

// __ull2dec
void f_800C4F58(Ctx* __restrict c) {
  trace_call(0x800C4F58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C4F58
  c->r[0]=c->lr; // 800C4F5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C4F60
  c->r[0]=0u+0x00000000u; // 800C4F64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C4F68
  c->r[31]=c->r[5]|c->r[5]; // 800C4F6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C4F70
  c->r[30]=c->r[6]|c->r[6]; // 800C4F74
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C4F78
  c->r[29]=c->r[3]|c->r[3]; // 800C4F7C
  W8(c->r[3]+0x00000000u,c->r[0]); // 800C4F80
  W8(c->r[3]+0x00000004u,c->r[0]); // 800C4F84
  goto L_800C4FD0; // 800C4F88
L_800C4F8C:;
  c->r[3]=c->r[31]|c->r[31]; // 800C4F8C
  c->r[4]=c->r[30]|c->r[30]; // 800C4F90
  c->r[6]=0u+0x0000000Au; // 800C4F94
  c->r[5]=0u+0x00000000u; // 800C4F98
  c->lr=0x800C4FA0u; f_800C23E0(c); // 800C4F9C
  c->r[8]=R8(c->r[29]+0x00000004u); // 800C4FA0
  c->r[3]=c->r[31]|c->r[31]; // 800C4FA4
  c->r[6]=0u+0x0000000Au; // 800C4FA8
  c->r[5]=0u+0x00000000u; // 800C4FAC
  c->r[7]=c->r[29]+c->r[8]; // 800C4FB0
  c->r[0]=c->r[8]+0x00000001u; // 800C4FB4
  W8(c->r[7]+0x00000005u,c->r[4]); // 800C4FB8
  c->r[4]=c->r[30]|c->r[30]; // 800C4FBC
  W8(c->r[29]+0x00000004u,c->r[0]); // 800C4FC0
  c->lr=0x800C4FC8u; f_800C21BC(c); // 800C4FC4
  c->r[30]=c->r[4]|c->r[4]; // 800C4FC8
  c->r[31]=c->r[3]|c->r[3]; // 800C4FCC
L_800C4FD0:;
  c->r[0]=c->r[30]|c->r[31]; cr0(c,c->r[0]); // 800C4FD0
  if (!crb(c,2)) { IRQCHK(c); goto L_800C4F8C; } // 800C4FD4
  c->r[0]=R8(c->r[29]+0x00000004u); // 800C4FD8
  c->r[4]=c->r[29]+0x00000005u; // 800C4FDC
  c->r[3]=c->r[29]+c->r[0]; // 800C4FE0
  c->r[3]=c->r[3]+0x00000005u; // 800C4FE4
  goto L_800C5000; // 800C4FE8
L_800C4FEC:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 800C4FEC
  c->r[0]=R8(c->r[3]+0x00000000u); // 800C4FF0
  W8(c->r[4]+0x00000000u,c->r[0]); // 800C4FF4
  c->r[4]=c->r[4]+0x00000001u; // 800C4FF8
  W8(c->r[3]+0x00000000u,c->r[5]); // 800C4FFC
L_800C5000:;
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800C5000
  cmpu(c,0,c->r[4],c->r[3]); // 800C5004
  if (crb(c,0)) { IRQCHK(c); goto L_800C4FEC; } // 800C5008
  c->r[3]=R8(c->r[29]+0x00000004u); // 800C500C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C5010
  W16(c->r[29]+0x00000002u,c->r[0]); // 800C5014
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C5018
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C501C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C5020
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C5024
  c->lr=c->r[0]; // 800C5028
  c->r[1]=c->r[1]+0x00000020u; // 800C502C
  return; // 800C5030
}

// __timesdec
void f_800C5034(Ctx* __restrict c) {
  trace_call(0x800C5034u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5034
  c->r[6]=0u+0xCCCD0000u; // 800C5038
  c->r[8]=R8(c->r[4]+0x00000004u); // 800C503C
  c->r[11]=0u+0x00000000u; // 800C5040
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800C5044
  c->r[0]=c->r[1]+0x00000008u; // 800C5048
  c->r[7]=R8(c->r[5]+0x00000004u); // 800C504C
  c->r[9]=c->r[6]+0xFFFFCCCDu; // 800C5050
  W32(c->r[1]+0x00000058u,c->r[30]); // 800C5054
  c->r[12]=c->r[8]+c->r[7]; // 800C5058
  W32(c->r[1]+0x00000054u,c->r[29]); // 800C505C
  c->r[12]=c->r[12]+0xFFFFFFFFu; // 800C5060
  c->r[6]=c->r[0]+c->r[12]; // 800C5064
  c->r[6]=c->r[6]+0x00000001u; // 800C5068
  W8(c->r[3]+0x00000000u,c->r[11]); // 800C506C
  c->r[0]=c->r[6]|c->r[6]; // 800C5070
  goto L_800C51A4; // 800C5074
L_800C5078:;
  c->r[7]=R8(c->r[5]+0x00000004u); // 800C5078
  c->r[31]=c->r[7]+0xFFFFFFFFu; // 800C507C
  c->r[7]=c->r[12]-c->r[31]; // 800C5080
  c->r[30]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[30]); // 800C5084
  if (!crb(c,0)) { goto L_800C5094; } // 800C5088
  c->r[30]=0u+0x00000000u; // 800C508C
  c->r[31]=c->r[12]+0xFFFFFFFFu; // 800C5090
L_800C5094:;
  c->r[7]=R8(c->r[4]+0x00000004u); // 800C5094
  c->r[8]=c->r[5]+c->r[31]; // 800C5098
  c->r[31]=c->r[31]+0x00000001u; // 800C509C
  c->r[10]=c->r[4]+c->r[30]; // 800C50A0
  c->r[7]=c->r[7]-c->r[30]; // 800C50A4
  c->r[29]=c->r[8]+0x00000005u; // 800C50A8
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[7]); // 800C50AC
  c->r[30]=c->r[10]+0x00000005u; // 800C50B0
  if (!crb(c,1)) { goto L_800C50BC; } // 800C50B4
  c->r[31]=c->r[7]|c->r[7]; // 800C50B8
L_800C50BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C50BC
  if (!crb(c,1)) { goto L_800C5184; } // 800C50C0
  c->r[7]=rotl(c->r[31],29)&0x1FFFFFFFu; cr0(c,c->r[7]); // 800C50C4
  c->ctr=c->r[7]; // 800C50C8
  if (crb(c,2)) { goto L_800C5164; } // 800C50CC
L_800C50D0:;
  c->r[10]=R8(c->r[30]+0x00000000u); // 800C50D0
  c->r[8]=R8(c->r[29]+0x00000000u); // 800C50D4
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 800C50D8
  c->r[10]=R8(c->r[30]+0x00000001u); // 800C50DC
  c->r[8]=R8(c->r[29]+0xFFFFFFFFu); // 800C50E0
  c->r[11]=c->r[11]+c->r[7]; // 800C50E4
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 800C50E8
  c->r[10]=R8(c->r[30]+0x00000002u); // 800C50EC
  c->r[8]=R8(c->r[29]+0xFFFFFFFEu); // 800C50F0
  c->r[11]=c->r[11]+c->r[7]; // 800C50F4
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 800C50F8
  c->r[10]=R8(c->r[30]+0x00000003u); // 800C50FC
  c->r[8]=R8(c->r[29]+0xFFFFFFFDu); // 800C5100
  c->r[11]=c->r[11]+c->r[7]; // 800C5104
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 800C5108
  c->r[10]=R8(c->r[30]+0x00000004u); // 800C510C
  c->r[8]=R8(c->r[29]+0xFFFFFFFCu); // 800C5110
  c->r[11]=c->r[11]+c->r[7]; // 800C5114
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 800C5118
  c->r[10]=R8(c->r[30]+0x00000005u); // 800C511C
  c->r[8]=R8(c->r[29]+0xFFFFFFFBu); // 800C5120
  c->r[11]=c->r[11]+c->r[7]; // 800C5124
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 800C5128
  c->r[10]=R8(c->r[30]+0x00000006u); // 800C512C
  c->r[8]=R8(c->r[29]+0xFFFFFFFAu); // 800C5130
  c->r[11]=c->r[11]+c->r[7]; // 800C5134
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 800C5138
  c->r[10]=R8(c->r[30]+0x00000007u); // 800C513C
  c->r[8]=R8(c->r[29]+0xFFFFFFF9u); // 800C5140
  c->r[30]=c->r[30]+0x00000008u; // 800C5144
  c->r[29]=c->r[29]+0xFFFFFFF8u; // 800C5148
  c->r[11]=c->r[11]+c->r[7]; // 800C514C
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 800C5150
  c->r[11]=c->r[11]+c->r[7]; // 800C5154
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C50D0; } // 800C5158
  c->r[31]=c->r[31]&0x00000007u; cr0(c,c->r[31]); // 800C515C
  if (crb(c,2)) { goto L_800C5184; } // 800C5160
L_800C5164:;
  c->ctr=c->r[31]; // 800C5164
L_800C5168:;
  c->r[10]=R8(c->r[30]+0x00000000u); // 800C5168
  c->r[30]=c->r[30]+0x00000001u; // 800C516C
  c->r[8]=R8(c->r[29]+0x00000000u); // 800C5170
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 800C5174
  c->r[7]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[8]); // 800C5178
  c->r[11]=c->r[11]+c->r[7]; // 800C517C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5168; } // 800C5180
L_800C5184:;
  c->r[8]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[11])>>32); // 800C5184
  c->r[12]=c->r[12]+0xFFFFFFFFu; // 800C5188
  c->r[7]=c->r[8]|c->r[8]; // 800C518C
  c->r[8]=rotl(c->r[8],29)&0x1FFFFFFFu; // 800C5190
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)10); // 800C5194
  c->r[8]=c->r[11]-c->r[8]; // 800C5198
  c->r[11]=rotl(c->r[7],29)&0x1FFFFFFFu; // 800C519C
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[8]); c->r[6]=ea;} // 800C51A0
L_800C51A4:;
  cmps(c,0,(int32_t)c->r[12],0); // 800C51A4
  if (crb(c,1)) { IRQCHK(c); goto L_800C5078; } // 800C51A8
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 800C51AC
  cmps(c,0,(int32_t)c->r[11],0); // 800C51B0
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 800C51B4
  c->r[4]=c->r[7]+c->r[4]; // 800C51B8
  W16(c->r[3]+0x00000002u,c->r[4]); // 800C51BC
  if (crb(c,2)) { goto L_800C51D4; } // 800C51C0
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[11]); c->r[6]=ea;} // 800C51C4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800C51C8
  c->r[4]=c->r[4]+0x00000001u; // 800C51CC
  W16(c->r[3]+0x00000002u,c->r[4]); // 800C51D0
L_800C51D4:;
  c->r[7]=0u+0x00000000u; // 800C51D4
  goto L_800C51F0; // 800C51D8
L_800C51DC:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 800C51DC
  c->r[4]=c->r[3]+c->r[7]; // 800C51E0
  c->r[7]=c->r[7]+0x00000001u; // 800C51E4
  c->r[6]=c->r[6]+0x00000001u; // 800C51E8
  W8(c->r[4]+0x00000005u,c->r[5]); // 800C51EC
L_800C51F0:;
  cmps(c,0,(int32_t)c->r[7],36); // 800C51F0
  if (!crb(c,0)) { goto L_800C5200; } // 800C51F4
  cmpu(c,0,c->r[6],c->r[0]); // 800C51F8
  if (crb(c,0)) { IRQCHK(c); goto L_800C51DC; } // 800C51FC
L_800C5200:;
  cmpu(c,0,c->r[6],c->r[0]); // 800C5200
  W8(c->r[3]+0x00000004u,c->r[7]); // 800C5204
  if (!crb(c,0)) { goto L_800C52A8; } // 800C5208
  c->r[4]=R8(c->r[6]+0x00000000u); // 800C520C
  cmpu(c,0,c->r[4],0x00000005u); // 800C5210
  if (crb(c,0)) { goto L_800C52A8; } // 800C5214
  if (!crb(c,2)) { goto L_800C5250; } // 800C5218
  c->r[5]=c->r[6]+0x00000001u; // 800C521C
  c->r[4]=c->r[0]-c->r[5]; // 800C5220
  c->ctr=c->r[4]; // 800C5224
  cmpu(c,0,c->r[5],c->r[0]); // 800C5228
  if (!crb(c,0)) { goto L_800C5244; } // 800C522C
L_800C5230:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 800C5230
  cmps(c,0,(int32_t)c->r[0],0); // 800C5234
  if (!crb(c,2)) { goto L_800C5250; } // 800C5238
  c->r[5]=c->r[5]+0x00000001u; // 800C523C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5230; } // 800C5240
L_800C5244:;
  c->r[0]=R8(c->r[6]+0xFFFFFFFFu); // 800C5244
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800C5248
  if (crb(c,2)) { goto L_800C52A8; } // 800C524C
L_800C5250:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 800C5250
  c->r[6]=c->r[3]+0x00000005u; // 800C5254
  c->r[0]=0u+0x00000000u; // 800C5258
  c->r[5]=c->r[6]+c->r[4]; // 800C525C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800C5260
L_800C5264:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 800C5264
  cmpu(c,0,c->r[4],0x00000009u); // 800C5268
  if (!crb(c,0)) { goto L_800C527C; } // 800C526C
  c->r[0]=c->r[4]+0x00000001u; // 800C5270
  W8(c->r[5]+0x00000000u,c->r[0]); // 800C5274
  goto L_800C52A8; // 800C5278
L_800C527C:;
  cmpu(c,0,c->r[5],c->r[6]); // 800C527C
  if (!crb(c,2)) { goto L_800C529C; } // 800C5280
  c->r[0]=0u+0x00000001u; // 800C5284
  W8(c->r[5]+0x00000000u,c->r[0]); // 800C5288
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800C528C
  c->r[0]=c->r[4]+0x00000001u; // 800C5290
  W16(c->r[3]+0x00000002u,c->r[0]); // 800C5294
  goto L_800C52A8; // 800C5298
L_800C529C:;
  W8(c->r[5]+0x00000000u,c->r[0]); // 800C529C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800C52A0
  IRQCHK(c); goto L_800C5264; // 800C52A4
L_800C52A8:;
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800C52A8
  c->r[30]=R32(c->r[1]+0x00000058u); // 800C52AC
  c->r[29]=R32(c->r[1]+0x00000054u); // 800C52B0
  c->r[1]=c->r[1]+0x00000060u; // 800C52B4
  return; // 800C52B8
}

// __str2dec
void f_800C52BC(Ctx* __restrict c) {
  trace_call(0x800C52BCu);
  c->r[0]=0u+0x00000000u; // 800C52BC
  W16(c->r[3]+0x00000002u,c->r[5]); // 800C52C0
  c->r[7]=0u+0x00000000u; // 800C52C4
  W8(c->r[3]+0x00000000u,c->r[0]); // 800C52C8
  goto L_800C52E8; // 800C52CC
L_800C52D0:;
  c->r[6]=R8(c->r[4]+0x00000000u); // 800C52D0
  c->r[5]=c->r[3]+c->r[7]; // 800C52D4
  c->r[4]=c->r[4]+0x00000001u; // 800C52D8
  c->r[7]=c->r[7]+0x00000001u; // 800C52DC
  c->r[0]=c->r[6]+0xFFFFFFD0u; // 800C52E0
  W8(c->r[5]+0x00000005u,c->r[0]); // 800C52E4
L_800C52E8:;
  cmps(c,0,(int32_t)c->r[7],36); // 800C52E8
  if (!crb(c,0)) { goto L_800C52FC; } // 800C52EC
  c->r[0]=R8(c->r[4]+0x00000000u); // 800C52F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C52F4
  if (!crb(c,2)) { IRQCHK(c); goto L_800C52D0; } // 800C52F8
L_800C52FC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800C52FC
  W8(c->r[3]+0x00000004u,c->r[7]); // 800C5300
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C5304
  if (crb(c,2)) return; // 800C5308
  cmps(c,0,(int32_t)c->r[0],5); // 800C530C
  if (crb(c,0)) return; // 800C5310
  if (crb(c,1)) { goto L_800C534C; } // 800C5314
  c->r[5]=c->r[4]+0x00000001u; // 800C5318
  goto L_800C5330; // 800C531C
L_800C5320:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800C5320
  cmps(c,0,(int32_t)c->r[0],48); // 800C5324
  if (!crb(c,2)) { goto L_800C534C; } // 800C5328
  c->r[5]=c->r[5]+0x00000001u; // 800C532C
L_800C5330:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 800C5330
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 800C5334
  if (!crb(c,2)) { IRQCHK(c); goto L_800C5320; } // 800C5338
  c->r[4]=c->r[7]+c->r[3]; // 800C533C
  c->r[0]=R8(c->r[4]+0x00000004u); // 800C5340
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800C5344
  if (crb(c,2)) return; // 800C5348
L_800C534C:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 800C534C
  c->r[6]=c->r[3]+0x00000005u; // 800C5350
  c->r[0]=0u+0x00000000u; // 800C5354
  c->r[5]=c->r[6]+c->r[4]; // 800C5358
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800C535C
L_800C5360:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 800C5360
  cmpu(c,0,c->r[4],0x00000009u); // 800C5364
  if (!crb(c,0)) { goto L_800C5378; } // 800C5368
  c->r[0]=c->r[4]+0x00000001u; // 800C536C
  W8(c->r[5]+0x00000000u,c->r[0]); // 800C5370
  return; // 800C5374
L_800C5378:;
  cmpu(c,0,c->r[5],c->r[6]); // 800C5378
  if (!crb(c,2)) { goto L_800C5398; } // 800C537C
  c->r[0]=0u+0x00000001u; // 800C5380
  W8(c->r[5]+0x00000000u,c->r[0]); // 800C5384
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800C5388
  c->r[0]=c->r[4]+0x00000001u; // 800C538C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800C5390
  return; // 800C5394
L_800C5398:;
  W8(c->r[5]+0x00000000u,c->r[0]); // 800C5398
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800C539C
  IRQCHK(c); goto L_800C5360; // 800C53A0
  return; // 800C53A4
}

// __two_exp
void f_800C53A8(Ctx* __restrict c) {
  trace_call(0x800C53A8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C53A8
  c->r[0]=c->lr; // 800C53AC
  W32(c->r[1]+0x00000074u,c->r[0]); // 800C53B0
  c->r[0]=c->r[4]+0x00000040u; // 800C53B4
  cmpu(c,0,c->r[0],0x00000048u); // 800C53B8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800C53BC
  c->r[31]=c->r[3]|c->r[3]; // 800C53C0
  W32(c->r[1]+0x00000068u,c->r[30]); // 800C53C4
  c->r[30]=c->r[4]|c->r[4]; // 800C53C8
  if (crb(c,1)) { goto L_800C55DC; } // 800C53CC
  c->r[5]=0u+0x80220000u; // 800C53D0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C53D4
  c->r[5]=c->r[5]+0xFFFFBB78u; // 800C53D8
  c->r[5]=R32(c->r[5]+c->r[0]); // 800C53DC
  c->ctr=c->r[5]; // 800C53E0
  if (true) { switch (c->ctr) { case 0x800C53E8u: goto L_800C53E8; case 0x800C53FCu: goto L_800C53FC; case 0x800C5414u: goto L_800C5414; case 0x800C542Cu: goto L_800C542C; case 0x800C5444u: goto L_800C5444; case 0x800C545Cu: goto L_800C545C; case 0x800C5474u: goto L_800C5474; case 0x800C548Cu: goto L_800C548C; case 0x800C54A4u: goto L_800C54A4; case 0x800C54BCu: goto L_800C54BC; case 0x800C54D4u: goto L_800C54D4; case 0x800C54ECu: goto L_800C54EC; case 0x800C5504u: goto L_800C5504; case 0x800C551Cu: goto L_800C551C; case 0x800C5534u: goto L_800C5534; case 0x800C554Cu: goto L_800C554C; case 0x800C5564u: goto L_800C5564; case 0x800C557Cu: goto L_800C557C; case 0x800C5594u: goto L_800C5594; case 0x800C55ACu: goto L_800C55AC; case 0x800C55C4u: goto L_800C55C4; case 0x800C55DCu: goto L_800C55DC; default: break; } dispatch(c,c->ctr); return; } // 800C53E4
L_800C53E8:;
  c->r[4]=0u+0x801F0000u; // 800C53E8
  c->r[5]=0u+0xFFFFFFECu; // 800C53EC
  c->r[4]=c->r[4]+0x00003BD8u; // 800C53F0
  c->lr=0x800C53F8u; f_800C52BC(c); // 800C53F4
  goto L_800C56FC; // 800C53F8
L_800C53FC:;
  c->r[4]=0u+0x801F0000u; // 800C53FC
  c->r[5]=0u+0xFFFFFFF0u; // 800C5400
  c->r[4]=c->r[4]+0x00003BD8u; // 800C5404
  c->r[4]=c->r[4]+0x0000002Eu; // 800C5408
  c->lr=0x800C5410u; f_800C52BC(c); // 800C540C
  goto L_800C56FC; // 800C5410
L_800C5414:;
  c->r[4]=0u+0x801F0000u; // 800C5414
  c->r[5]=0u+0xFFFFFFF6u; // 800C5418
  c->r[4]=c->r[4]+0x00003BD8u; // 800C541C
  c->r[4]=c->r[4]+0x00000055u; // 800C5420
  c->lr=0x800C5428u; f_800C52BC(c); // 800C5424
  goto L_800C56FC; // 800C5428
L_800C542C:;
  c->r[4]=0u+0x801F0000u; // 800C542C
  c->r[5]=0u+0xFFFFFFFBu; // 800C5430
  c->r[4]=c->r[4]+0x00003BD8u; // 800C5434
  c->r[4]=c->r[4]+0x0000006Du; // 800C5438
  c->lr=0x800C5440u; f_800C52BC(c); // 800C543C
  goto L_800C56FC; // 800C5440
L_800C5444:;
  c->r[4]=0u+0x801F0000u; // 800C5444
  c->r[5]=0u+0xFFFFFFFDu; // 800C5448
  c->r[4]=c->r[4]+0x00003BD8u; // 800C544C
  c->r[4]=c->r[4]+0x0000007Au; // 800C5450
  c->lr=0x800C5458u; f_800C52BC(c); // 800C5454
  goto L_800C56FC; // 800C5458
L_800C545C:;
  c->r[4]=0u+0x801F0000u; // 800C545C
  c->r[5]=0u+0xFFFFFFFDu; // 800C5460
  c->r[4]=c->r[4]+0x00003BD8u; // 800C5464
  c->r[4]=c->r[4]+0x00000081u; // 800C5468
  c->lr=0x800C5470u; f_800C52BC(c); // 800C546C
  goto L_800C56FC; // 800C5470
L_800C5474:;
  c->r[4]=0u+0x801F0000u; // 800C5474
  c->r[5]=0u+0xFFFFFFFEu; // 800C5478
  c->r[4]=c->r[4]+0x00003BD8u; // 800C547C
  c->r[4]=c->r[4]+0x00000087u; // 800C5480
  c->lr=0x800C5488u; f_800C52BC(c); // 800C5484
  goto L_800C56FC; // 800C5488
L_800C548C:;
  c->r[4]=0u+0x801F0000u; // 800C548C
  c->r[5]=0u+0xFFFFFFFEu; // 800C5490
  c->r[4]=c->r[4]+0x00003BD8u; // 800C5494
  c->r[4]=c->r[4]+0x0000008Du; // 800C5498
  c->lr=0x800C54A0u; f_800C52BC(c); // 800C549C
  goto L_800C56FC; // 800C54A0
L_800C54A4:;
  c->r[4]=0u+0x801F0000u; // 800C54A4
  c->r[5]=0u+0xFFFFFFFEu; // 800C54A8
  c->r[4]=c->r[4]+0x00003BD8u; // 800C54AC
  c->r[4]=c->r[4]+0x00000092u; // 800C54B0
  c->lr=0x800C54B8u; f_800C52BC(c); // 800C54B4
  goto L_800C56FC; // 800C54B8
L_800C54BC:;
  c->r[4]=0u+0x801F0000u; // 800C54BC
  c->r[5]=0u+0xFFFFFFFFu; // 800C54C0
  c->r[4]=c->r[4]+0x00003BD8u; // 800C54C4
  c->r[4]=c->r[4]+0x00000096u; // 800C54C8
  c->lr=0x800C54D0u; f_800C52BC(c); // 800C54CC
  goto L_800C56FC; // 800C54D0
L_800C54D4:;
  c->r[4]=0u+0x801F0000u; // 800C54D4
  c->r[5]=0u+0xFFFFFFFFu; // 800C54D8
  c->r[4]=c->r[4]+0x00003BD8u; // 800C54DC
  c->r[4]=c->r[4]+0x0000009Au; // 800C54E0
  c->lr=0x800C54E8u; f_800C52BC(c); // 800C54E4
  goto L_800C56FC; // 800C54E8
L_800C54EC:;
  c->r[4]=0u+0x801F0000u; // 800C54EC
  c->r[5]=0u+0xFFFFFFFFu; // 800C54F0
  c->r[4]=c->r[4]+0x00003BD8u; // 800C54F4
  c->r[4]=c->r[4]+0x0000009Du; // 800C54F8
  c->lr=0x800C5500u; f_800C52BC(c); // 800C54FC
  goto L_800C56FC; // 800C5500
L_800C5504:;
  c->r[4]=0u+0x801F0000u; // 800C5504
  c->r[5]=0u+0x00000000u; // 800C5508
  c->r[4]=c->r[4]+0x00003BD8u; // 800C550C
  c->r[4]=c->r[4]+0x0000009Fu; // 800C5510
  c->lr=0x800C5518u; f_800C52BC(c); // 800C5514
  goto L_800C56FC; // 800C5518
L_800C551C:;
  c->r[4]=0u+0x801F0000u; // 800C551C
  c->r[5]=0u+0x00000000u; // 800C5520
  c->r[4]=c->r[4]+0x00003BD8u; // 800C5524
  c->r[4]=c->r[4]+0x000000A1u; // 800C5528
  c->lr=0x800C5530u; f_800C52BC(c); // 800C552C
  goto L_800C56FC; // 800C5530
L_800C5534:;
  c->r[4]=0u+0x801F0000u; // 800C5534
  c->r[5]=0u+0x00000000u; // 800C5538
  c->r[4]=c->r[4]+0x00003BD8u; // 800C553C
  c->r[4]=c->r[4]+0x000000A3u; // 800C5540
  c->lr=0x800C5548u; f_800C52BC(c); // 800C5544
  goto L_800C56FC; // 800C5548
L_800C554C:;
  c->r[4]=0u+0x801F0000u; // 800C554C
  c->r[5]=0u+0x00000000u; // 800C5550
  c->r[4]=c->r[4]+0x00003BD8u; // 800C5554
  c->r[4]=c->r[4]+0x000000A5u; // 800C5558
  c->lr=0x800C5560u; f_800C52BC(c); // 800C555C
  goto L_800C56FC; // 800C5560
L_800C5564:;
  c->r[4]=0u+0x801F0000u; // 800C5564
  c->r[5]=0u+0x00000001u; // 800C5568
  c->r[4]=c->r[4]+0x00003BD8u; // 800C556C
  c->r[4]=c->r[4]+0x000000A7u; // 800C5570
  c->lr=0x800C5578u; f_800C52BC(c); // 800C5574
  goto L_800C56FC; // 800C5578
L_800C557C:;
  c->r[4]=0u+0x801F0000u; // 800C557C
  c->r[5]=0u+0x00000001u; // 800C5580
  c->r[4]=c->r[4]+0x00003BD8u; // 800C5584
  c->r[4]=c->r[4]+0x000000AAu; // 800C5588
  c->lr=0x800C5590u; f_800C52BC(c); // 800C558C
  goto L_800C56FC; // 800C5590
L_800C5594:;
  c->r[4]=0u+0x801F0000u; // 800C5594
  c->r[5]=0u+0x00000001u; // 800C5598
  c->r[4]=c->r[4]+0x00003BD8u; // 800C559C
  c->r[4]=c->r[4]+0x000000ADu; // 800C55A0
  c->lr=0x800C55A8u; f_800C52BC(c); // 800C55A4
  goto L_800C56FC; // 800C55A8
L_800C55AC:;
  c->r[4]=0u+0x801F0000u; // 800C55AC
  c->r[5]=0u+0x00000002u; // 800C55B0
  c->r[4]=c->r[4]+0x00003BD8u; // 800C55B4
  c->r[4]=c->r[4]+0x000000B0u; // 800C55B8
  c->lr=0x800C55C0u; f_800C52BC(c); // 800C55BC
  goto L_800C56FC; // 800C55C0
L_800C55C4:;
  c->r[4]=0u+0x801F0000u; // 800C55C4
  c->r[5]=0u+0x00000002u; // 800C55C8
  c->r[4]=c->r[4]+0x00003BD8u; // 800C55CC
  c->r[4]=c->r[4]+0x000000B4u; // 800C55D0
  c->lr=0x800C55D8u; f_800C52BC(c); // 800C55D4
  goto L_800C56FC; // 800C55D8
L_800C55DC:;
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 800C55DC
  c->r[3]=c->r[1]+0x00000034u; // 800C55E0
  c->r[0]=c->r[0]+c->r[4]; // 800C55E4
  c->r[4]=sraw(c,c->r[0],1); // 800C55E8
  c->lr=0x800C55F0u; f_800C53A8(c); // 800C55EC
  c->r[4]=c->r[1]+0x00000034u; // 800C55F0
  c->r[3]=c->r[31]|c->r[31]; // 800C55F4
  c->r[5]=c->r[4]|c->r[4]; // 800C55F8
  c->lr=0x800C5600u; f_800C5034(c); // 800C55FC
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 800C5600
  if (crb(c,2)) { goto L_800C56FC; } // 800C5604
  c->r[3]=R16(c->r[31]+0x00000000u); // 800C5608
  cmps(c,0,(int32_t)c->r[30],0); // 800C560C
  c->r[0]=R16(c->r[31]+0x00000002u); // 800C5610
  W16(c->r[1]+0x00000008u,c->r[3]); // 800C5614
  W16(c->r[1]+0x0000000Au,c->r[0]); // 800C5618
  c->r[3]=R16(c->r[31]+0x00000004u); // 800C561C
  c->r[0]=R16(c->r[31]+0x00000006u); // 800C5620
  W16(c->r[1]+0x0000000Cu,c->r[3]); // 800C5624
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800C5628
  c->r[3]=R16(c->r[31]+0x00000008u); // 800C562C
  c->r[0]=R16(c->r[31]+0x0000000Au); // 800C5630
  W16(c->r[1]+0x00000010u,c->r[3]); // 800C5634
  W16(c->r[1]+0x00000012u,c->r[0]); // 800C5638
  c->r[3]=R16(c->r[31]+0x0000000Cu); // 800C563C
  c->r[0]=R16(c->r[31]+0x0000000Eu); // 800C5640
  W16(c->r[1]+0x00000014u,c->r[3]); // 800C5644
  W16(c->r[1]+0x00000016u,c->r[0]); // 800C5648
  c->r[3]=R16(c->r[31]+0x00000010u); // 800C564C
  c->r[0]=R16(c->r[31]+0x00000012u); // 800C5650
  W16(c->r[1]+0x00000018u,c->r[3]); // 800C5654
  W16(c->r[1]+0x0000001Au,c->r[0]); // 800C5658
  c->r[3]=R16(c->r[31]+0x00000014u); // 800C565C
  c->r[0]=R16(c->r[31]+0x00000016u); // 800C5660
  W16(c->r[1]+0x0000001Cu,c->r[3]); // 800C5664
  W16(c->r[1]+0x0000001Eu,c->r[0]); // 800C5668
  c->r[3]=R16(c->r[31]+0x00000018u); // 800C566C
  c->r[0]=R16(c->r[31]+0x0000001Au); // 800C5670
  W16(c->r[1]+0x00000020u,c->r[3]); // 800C5674
  W16(c->r[1]+0x00000022u,c->r[0]); // 800C5678
  c->r[3]=R16(c->r[31]+0x0000001Cu); // 800C567C
  c->r[0]=R16(c->r[31]+0x0000001Eu); // 800C5680
  W16(c->r[1]+0x00000024u,c->r[3]); // 800C5684
  W16(c->r[1]+0x00000026u,c->r[0]); // 800C5688
  c->r[3]=R16(c->r[31]+0x00000020u); // 800C568C
  c->r[0]=R16(c->r[31]+0x00000022u); // 800C5690
  W16(c->r[1]+0x00000028u,c->r[3]); // 800C5694
  W16(c->r[1]+0x0000002Au,c->r[0]); // 800C5698
  c->r[3]=R16(c->r[31]+0x00000024u); // 800C569C
  c->r[0]=R16(c->r[31]+0x00000026u); // 800C56A0
  W16(c->r[1]+0x0000002Cu,c->r[3]); // 800C56A4
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 800C56A8
  c->r[0]=R16(c->r[31]+0x00000028u); // 800C56AC
  W16(c->r[1]+0x00000030u,c->r[0]); // 800C56B0
  if (!crb(c,1)) { goto L_800C56D4; } // 800C56B4
  c->r[4]=0u+0x801F0000u; // 800C56B8
  c->r[3]=c->r[1]+0x00000034u; // 800C56BC
  c->r[4]=c->r[4]+0x00003BD8u; // 800C56C0
  c->r[5]=0u+0x00000000u; // 800C56C4
  c->r[4]=c->r[4]+0x000000A1u; // 800C56C8
  c->lr=0x800C56D0u; f_800C52BC(c); // 800C56CC
  goto L_800C56EC; // 800C56D0
L_800C56D4:;
  c->r[4]=0u+0x801F0000u; // 800C56D4
  c->r[3]=c->r[1]+0x00000034u; // 800C56D8
  c->r[4]=c->r[4]+0x00003BD8u; // 800C56DC
  c->r[5]=0u+0xFFFFFFFFu; // 800C56E0
  c->r[4]=c->r[4]+0x0000009Du; // 800C56E4
  c->lr=0x800C56ECu; f_800C52BC(c); // 800C56E8
L_800C56EC:;
  c->r[3]=c->r[31]|c->r[31]; // 800C56EC
  c->r[4]=c->r[1]+0x00000008u; // 800C56F0
  c->r[5]=c->r[1]+0x00000034u; // 800C56F4
  c->lr=0x800C56FCu; f_800C5034(c); // 800C56F8
L_800C56FC:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 800C56FC
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800C5700
  c->r[30]=R32(c->r[1]+0x00000068u); // 800C5704
  c->lr=c->r[0]; // 800C5708
  c->r[1]=c->r[1]+0x00000070u; // 800C570C
  return; // 800C5710
}

// __equals_dec
void f_800C5714(Ctx* __restrict c) {
  trace_call(0x800C5714u);
  c->r[5]=R8(c->r[3]+0x00000005u); // 800C5714
  cmps(c,0,(int32_t)c->r[5],0); // 800C5718
  if (!crb(c,2)) { goto L_800C5730; } // 800C571C
  c->r[0]=R8(c->r[4]+0x00000005u); // 800C5720
  c->r[0]=cntlz(c->r[0]); // 800C5724
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C5728
  return; // 800C572C
L_800C5730:;
  c->r[0]=R8(c->r[4]+0x00000005u); // 800C5730
  cmps(c,0,(int32_t)c->r[0],0); // 800C5734
  if (!crb(c,2)) { goto L_800C5748; } // 800C5738
  c->r[0]=cntlz(c->r[5]); // 800C573C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C5740
  return; // 800C5744
L_800C5748:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800C5748
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 800C574C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800C5750
  if (!crb(c,2)) { goto L_800C57F0; } // 800C5754
  c->r[7]=R8(c->r[3]+0x00000004u); // 800C5758
  c->r[0]=R8(c->r[4]+0x00000004u); // 800C575C
  c->r[9]=c->r[7]|c->r[7]; // 800C5760
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800C5764
  if (!crb(c,1)) { goto L_800C5770; } // 800C5768
  c->r[9]=c->r[0]|c->r[0]; // 800C576C
L_800C5770:;
  c->r[8]=0u+0x00000000u; // 800C5770
  c->ctr=c->r[9]; // 800C5774
  cmps(c,0,(int32_t)c->r[9],0); // 800C5778
  if (!crb(c,1)) { goto L_800C57A8; } // 800C577C
L_800C5780:;
  c->r[6]=c->r[3]+c->r[8]; // 800C5780
  c->r[5]=c->r[4]+c->r[8]; // 800C5784
  c->r[6]=R8(c->r[6]+0x00000005u); // 800C5788
  c->r[0]=R8(c->r[5]+0x00000005u); // 800C578C
  cmpu(c,0,c->r[6],c->r[0]); // 800C5790
  if (crb(c,2)) { goto L_800C57A0; } // 800C5794
  c->r[3]=0u+0x00000000u; // 800C5798
  return; // 800C579C
L_800C57A0:;
  c->r[8]=c->r[8]+0x00000001u; // 800C57A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5780; } // 800C57A4
L_800C57A8:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[7]); // 800C57A8
  if (!crb(c,2)) { goto L_800C57B4; } // 800C57AC
  c->r[3]=c->r[4]|c->r[4]; // 800C57B0
L_800C57B4:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 800C57B4
  c->r[0]=c->r[4]-c->r[8]; // 800C57B8
  c->ctr=c->r[0]; // 800C57BC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[4]); // 800C57C0
  if (!crb(c,0)) { goto L_800C57E8; } // 800C57C4
L_800C57C8:;
  c->r[4]=c->r[3]+c->r[8]; // 800C57C8
  c->r[0]=R8(c->r[4]+0x00000005u); // 800C57CC
  cmps(c,0,(int32_t)c->r[0],0); // 800C57D0
  if (crb(c,2)) { goto L_800C57E0; } // 800C57D4
  c->r[3]=0u+0x00000000u; // 800C57D8
  return; // 800C57DC
L_800C57E0:;
  c->r[8]=c->r[8]+0x00000001u; // 800C57E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C57C8; } // 800C57E4
L_800C57E8:;
  c->r[3]=0u+0x00000001u; // 800C57E8
  return; // 800C57EC
L_800C57F0:;
  c->r[3]=0u+0x00000000u; // 800C57F0
  return; // 800C57F4
}

// __less_dec
void f_800C57F8(Ctx* __restrict c) {
  trace_call(0x800C57F8u);
  c->r[0]=R8(c->r[3]+0x00000005u); // 800C57F8
  cmps(c,0,(int32_t)c->r[0],0); // 800C57FC
  if (!crb(c,2)) { goto L_800C5818; } // 800C5800
  c->r[3]=R8(c->r[4]+0x00000005u); // 800C5804
  c->r[0]=0u-c->r[3]; // 800C5808
  c->r[0]=c->r[0]|c->r[3]; // 800C580C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800C5810
  return; // 800C5814
L_800C5818:;
  c->r[0]=R8(c->r[4]+0x00000005u); // 800C5818
  cmps(c,0,(int32_t)c->r[0],0); // 800C581C
  if (!crb(c,2)) { goto L_800C582C; } // 800C5820
  c->r[3]=0u+0x00000000u; // 800C5824
  return; // 800C5828
L_800C582C:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000002u); // 800C582C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800C5830
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800C5834
  if (!crb(c,2)) { goto L_800C58E0; } // 800C5838
  c->r[7]=R8(c->r[3]+0x00000004u); // 800C583C
  c->r[0]=R8(c->r[4]+0x00000004u); // 800C5840
  c->r[9]=c->r[7]|c->r[7]; // 800C5844
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800C5848
  if (!crb(c,1)) { goto L_800C5854; } // 800C584C
  c->r[9]=c->r[0]|c->r[0]; // 800C5850
L_800C5854:;
  c->r[8]=0u+0x00000000u; // 800C5854
  c->ctr=c->r[9]; // 800C5858
  cmps(c,0,(int32_t)c->r[9],0); // 800C585C
  if (!crb(c,1)) { goto L_800C589C; } // 800C5860
L_800C5864:;
  c->r[6]=c->r[4]+c->r[8]; // 800C5864
  c->r[5]=c->r[3]+c->r[8]; // 800C5868
  c->r[6]=R8(c->r[6]+0x00000005u); // 800C586C
  c->r[0]=R8(c->r[5]+0x00000005u); // 800C5870
  cmpu(c,0,c->r[0],c->r[6]); // 800C5874
  if (!crb(c,0)) { goto L_800C5884; } // 800C5878
  c->r[3]=0u+0x00000001u; // 800C587C
  return; // 800C5880
L_800C5884:;
  cmpu(c,0,c->r[6],c->r[0]); // 800C5884
  if (!crb(c,0)) { goto L_800C5894; } // 800C5888
  c->r[3]=0u+0x00000000u; // 800C588C
  return; // 800C5890
L_800C5894:;
  c->r[8]=c->r[8]+0x00000001u; // 800C5894
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5864; } // 800C5898
L_800C589C:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[7]); // 800C589C
  if (!crb(c,2)) { goto L_800C58D8; } // 800C58A0
  c->r[3]=R8(c->r[4]+0x00000004u); // 800C58A4
  c->r[0]=c->r[3]-c->r[8]; // 800C58A8
  c->ctr=c->r[0]; // 800C58AC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 800C58B0
  if (!crb(c,0)) { goto L_800C58D8; } // 800C58B4
L_800C58B8:;
  c->r[3]=c->r[4]+c->r[8]; // 800C58B8
  c->r[0]=R8(c->r[3]+0x00000005u); // 800C58BC
  cmps(c,0,(int32_t)c->r[0],0); // 800C58C0
  if (crb(c,2)) { goto L_800C58D0; } // 800C58C4
  c->r[3]=0u+0x00000001u; // 800C58C8
  return; // 800C58CC
L_800C58D0:;
  c->r[8]=c->r[8]+0x00000001u; // 800C58D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C58B8; } // 800C58D4
L_800C58D8:;
  c->r[3]=0u+0x00000000u; // 800C58D8
  return; // 800C58DC
L_800C58E0:;
  c->r[0]=c->r[5]^c->r[0]; // 800C58E0
  c->r[3]=sraw(c,c->r[0],1); // 800C58E4
  c->r[0]=c->r[0]&c->r[5]; // 800C58E8
  c->r[0]=c->r[3]-c->r[0]; // 800C58EC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800C58F0
  return; // 800C58F4
}

// __minus_dec
void f_800C58F8(Ctx* __restrict c) {
  trace_call(0x800C58F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C58F8
  c->r[12]=R16(c->r[4]+0x0000001Au); // 800C58FC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=19;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C5900
  c->r[19]=R16(c->r[4]+0x00000000u); // 800C5904
  c->r[20]=R16(c->r[4]+0x00000002u); // 800C5908
  c->r[21]=R16(c->r[4]+0x00000004u); // 800C590C
  c->r[22]=R16(c->r[4]+0x00000006u); // 800C5910
  c->r[23]=R16(c->r[4]+0x00000008u); // 800C5914
  c->r[24]=R16(c->r[4]+0x0000000Au); // 800C5918
  c->r[25]=R16(c->r[4]+0x0000000Cu); // 800C591C
  c->r[26]=R16(c->r[4]+0x0000000Eu); // 800C5920
  c->r[27]=R16(c->r[4]+0x00000010u); // 800C5924
  c->r[28]=R16(c->r[4]+0x00000012u); // 800C5928
  c->r[29]=R16(c->r[4]+0x00000014u); // 800C592C
  c->r[30]=R16(c->r[4]+0x00000016u); // 800C5930
  c->r[31]=R16(c->r[4]+0x00000018u); // 800C5934
  c->r[11]=R16(c->r[4]+0x0000001Cu); // 800C5938
  c->r[10]=R16(c->r[4]+0x0000001Eu); // 800C593C
  c->r[9]=R16(c->r[4]+0x00000020u); // 800C5940
  c->r[8]=R16(c->r[4]+0x00000022u); // 800C5944
  c->r[7]=R16(c->r[4]+0x00000024u); // 800C5948
  c->r[6]=R16(c->r[4]+0x00000026u); // 800C594C
  c->r[0]=R16(c->r[4]+0x00000028u); // 800C5950
  W16(c->r[3]+0x00000000u,c->r[19]); // 800C5954
  W16(c->r[3]+0x00000002u,c->r[20]); // 800C5958
  W16(c->r[3]+0x00000004u,c->r[21]); // 800C595C
  W16(c->r[3]+0x00000006u,c->r[22]); // 800C5960
  W16(c->r[3]+0x00000008u,c->r[23]); // 800C5964
  W16(c->r[3]+0x0000000Au,c->r[24]); // 800C5968
  W16(c->r[3]+0x0000000Cu,c->r[25]); // 800C596C
  W16(c->r[3]+0x0000000Eu,c->r[26]); // 800C5970
  W16(c->r[3]+0x00000010u,c->r[27]); // 800C5974
  W16(c->r[3]+0x00000012u,c->r[28]); // 800C5978
  W16(c->r[3]+0x00000014u,c->r[29]); // 800C597C
  W16(c->r[3]+0x00000016u,c->r[30]); // 800C5980
  W16(c->r[3]+0x00000018u,c->r[31]); // 800C5984
  W16(c->r[3]+0x0000001Au,c->r[12]); // 800C5988
  W16(c->r[3]+0x0000001Cu,c->r[11]); // 800C598C
  W16(c->r[3]+0x0000001Eu,c->r[10]); // 800C5990
  W16(c->r[3]+0x00000020u,c->r[9]); // 800C5994
  W16(c->r[3]+0x00000022u,c->r[8]); // 800C5998
  W16(c->r[3]+0x00000024u,c->r[7]); // 800C599C
  W16(c->r[3]+0x00000026u,c->r[6]); // 800C59A0
  W16(c->r[3]+0x00000028u,c->r[0]); // 800C59A4
  c->r[0]=R8(c->r[5]+0x00000005u); // 800C59A8
  cmps(c,0,(int32_t)c->r[0],0); // 800C59AC
  if (crb(c,2)) { goto L_800C5E08; } // 800C59B0
  c->r[8]=R8(c->r[3]+0x00000004u); // 800C59B4
  c->r[0]=R8(c->r[5]+0x00000004u); // 800C59B8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800C59BC
  if (!crb(c,0)) { goto L_800C59C8; } // 800C59C0
  c->r[8]=c->r[0]|c->r[0]; // 800C59C4
L_800C59C8:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000002u); // 800C59C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800C59CC
  c->r[0]=c->r[0]-c->r[4]; // 800C59D0
  c->r[8]=c->r[8]+c->r[0]; // 800C59D4
  cmps(c,0,(int32_t)c->r[8],36); // 800C59D8
  if (!crb(c,1)) { goto L_800C59E4; } // 800C59DC
  c->r[8]=0u+0x00000024u; // 800C59E0
L_800C59E4:;
  c->r[7]=0u+0x00000000u; // 800C59E4
  goto L_800C5A00; // 800C59E8
L_800C59EC:;
  c->r[6]=R8(c->r[3]+0x00000004u); // 800C59EC
  c->r[4]=c->r[3]+c->r[6]; // 800C59F0
  c->r[6]=c->r[6]+0x00000001u; // 800C59F4
  W8(c->r[4]+0x00000005u,c->r[7]); // 800C59F8
  W8(c->r[3]+0x00000004u,c->r[6]); // 800C59FC
L_800C5A00:;
  c->r[4]=R8(c->r[3]+0x00000004u); // 800C5A00
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[8]); // 800C5A04
  if (crb(c,0)) { IRQCHK(c); goto L_800C59EC; } // 800C5A08
  c->r[7]=R8(c->r[5]+0x00000004u); // 800C5A0C
  c->r[4]=c->r[3]+0x00000005u; // 800C5A10
  c->r[6]=c->r[4]+c->r[8]; // 800C5A14
  c->r[7]=c->r[7]+c->r[0]; // 800C5A18
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[8]); // 800C5A1C
  if (!crb(c,0)) { goto L_800C5A28; } // 800C5A20
  c->r[6]=c->r[4]+c->r[7]; // 800C5A24
L_800C5A28:;
  c->r[7]=c->r[6]-c->r[4]; // 800C5A28
  c->r[9]=c->r[5]+0x00000005u; // 800C5A2C
  c->r[7]=c->r[7]-c->r[0]; // 800C5A30
  c->r[10]=c->r[9]+c->r[7]; // 800C5A34
  c->r[11]=c->r[10]|c->r[10]; // 800C5A38
  goto L_800C5B60; // 800C5A3C
L_800C5A40:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[8]=R8(ea); c->r[6]=ea;} // 800C5A40
  {uint32_t ea=c->r[10]+0xFFFFFFFFu; c->r[7]=R8(ea); c->r[10]=ea;} // 800C5A44
  cmpu(c,0,c->r[8],c->r[7]); // 800C5A48
  if (!crb(c,0)) { goto L_800C5B50; } // 800C5A4C
  c->r[12]=c->r[6]+0xFFFFFFFFu; // 800C5A50
  goto L_800C5A5C; // 800C5A54
L_800C5A58:;
  c->r[12]=c->r[12]+0xFFFFFFFFu; // 800C5A58
L_800C5A5C:;
  c->r[7]=R8(c->r[12]+0x00000000u); // 800C5A5C
  cmps(c,0,(int32_t)c->r[7],0); // 800C5A60
  if (crb(c,2)) { IRQCHK(c); goto L_800C5A58; } // 800C5A64
  cmpu(c,0,c->r[12],c->r[6]); // 800C5A68
  c->r[8]=c->r[6]-c->r[12]; // 800C5A6C
  if (crb(c,2)) { goto L_800C5B50; } // 800C5A70
  c->r[7]=rotl(c->r[8],29)&0x1FFFFFFFu; cr0(c,c->r[7]); // 800C5A74
  c->ctr=c->r[7]; // 800C5A78
  if (crb(c,2)) { goto L_800C5B30; } // 800C5A7C
L_800C5A80:;
  c->r[7]=R8(c->r[12]+0x00000000u); // 800C5A80
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800C5A84
  W8(c->r[12]+0x00000000u,c->r[7]); // 800C5A88
  c->r[7]=R8(c->r[12]+0x00000001u); // 800C5A8C
  c->r[7]=c->r[7]+0x0000000Au; // 800C5A90
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 800C5A94
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800C5A98
  W8(c->r[12]+0x00000001u,c->r[7]); // 800C5A9C
  c->r[7]=R8(c->r[12]+0x00000002u); // 800C5AA0
  c->r[7]=c->r[7]+0x0000000Au; // 800C5AA4
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 800C5AA8
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800C5AAC
  W8(c->r[12]+0x00000002u,c->r[7]); // 800C5AB0
  c->r[7]=R8(c->r[12]+0x00000003u); // 800C5AB4
  c->r[7]=c->r[7]+0x0000000Au; // 800C5AB8
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 800C5ABC
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800C5AC0
  W8(c->r[12]+0x00000003u,c->r[7]); // 800C5AC4
  c->r[7]=R8(c->r[12]+0x00000004u); // 800C5AC8
  c->r[7]=c->r[7]+0x0000000Au; // 800C5ACC
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 800C5AD0
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800C5AD4
  W8(c->r[12]+0x00000004u,c->r[7]); // 800C5AD8
  c->r[7]=R8(c->r[12]+0x00000005u); // 800C5ADC
  c->r[7]=c->r[7]+0x0000000Au; // 800C5AE0
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 800C5AE4
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800C5AE8
  W8(c->r[12]+0x00000005u,c->r[7]); // 800C5AEC
  c->r[7]=R8(c->r[12]+0x00000006u); // 800C5AF0
  c->r[7]=c->r[7]+0x0000000Au; // 800C5AF4
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 800C5AF8
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800C5AFC
  W8(c->r[12]+0x00000006u,c->r[7]); // 800C5B00
  c->r[7]=R8(c->r[12]+0x00000007u); // 800C5B04
  c->r[7]=c->r[7]+0x0000000Au; // 800C5B08
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 800C5B0C
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800C5B10
  W8(c->r[12]+0x00000007u,c->r[7]); // 800C5B14
  c->r[7]=R8(c->r[12]+0x00000008u); // 800C5B18
  c->r[7]=c->r[7]+0x0000000Au; // 800C5B1C
  {uint32_t ea=c->r[12]+0x00000008u; W8(ea,c->r[7]); c->r[12]=ea;} // 800C5B20
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5A80; } // 800C5B24
  c->r[8]=c->r[8]&0x00000007u; cr0(c,c->r[8]); // 800C5B28
  if (crb(c,2)) { goto L_800C5B50; } // 800C5B2C
L_800C5B30:;
  c->ctr=c->r[8]; // 800C5B30
L_800C5B34:;
  c->r[7]=R8(c->r[12]+0x00000000u); // 800C5B34
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800C5B38
  W8(c->r[12]+0x00000000u,c->r[7]); // 800C5B3C
  c->r[7]=R8(c->r[12]+0x00000001u); // 800C5B40
  c->r[7]=c->r[7]+0x0000000Au; // 800C5B44
  {uint32_t ea=c->r[12]+0x00000001u; W8(ea,c->r[7]); c->r[12]=ea;} // 800C5B48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5B34; } // 800C5B4C
L_800C5B50:;
  c->r[8]=R8(c->r[10]+0x00000000u); // 800C5B50
  c->r[7]=R8(c->r[6]+0x00000000u); // 800C5B54
  c->r[7]=c->r[7]-c->r[8]; // 800C5B58
  W8(c->r[6]+0x00000000u,c->r[7]); // 800C5B5C
L_800C5B60:;
  cmpu(c,0,c->r[6],c->r[4]); // 800C5B60
  if (!crb(c,1)) { goto L_800C5B70; } // 800C5B64
  cmpu(c,0,c->r[10],c->r[9]); // 800C5B68
  if (crb(c,1)) { IRQCHK(c); goto L_800C5A40; } // 800C5B6C
L_800C5B70:;
  c->r[8]=R8(c->r[5]+0x00000004u); // 800C5B70
  c->r[9]=c->r[11]-c->r[9]; // 800C5B74
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[8]); // 800C5B78
  if (!crb(c,0)) { goto L_800C5D04; } // 800C5B7C
  c->r[7]=R8(c->r[11]+0x00000000u); // 800C5B80
  c->r[10]=0u+0x00000000u; // 800C5B84
  cmpu(c,0,c->r[7],0x00000005u); // 800C5B88
  if (!crb(c,0)) { goto L_800C5B98; } // 800C5B8C
  c->r[10]=0u+0x00000001u; // 800C5B90
  goto L_800C5BE4; // 800C5B94
L_800C5B98:;
  if (!crb(c,2)) { goto L_800C5BE4; } // 800C5B98
  c->r[5]=c->r[5]+c->r[8]; // 800C5B9C
  c->r[6]=c->r[11]+0x00000001u; // 800C5BA0
  c->r[7]=c->r[5]+0x00000005u; // 800C5BA4
  c->r[5]=c->r[7]-c->r[6]; // 800C5BA8
  c->ctr=c->r[5]; // 800C5BAC
  cmpu(c,0,c->r[6],c->r[7]); // 800C5BB0
  if (!crb(c,0)) { goto L_800C5BCC; } // 800C5BB4
L_800C5BB8:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 800C5BB8
  cmps(c,0,(int32_t)c->r[5],0); // 800C5BBC
  if (!crb(c,2)) { goto L_800C5D04; } // 800C5BC0
  c->r[6]=c->r[6]+0x00000001u; // 800C5BC4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5BB8; } // 800C5BC8
L_800C5BCC:;
  c->r[5]=c->r[4]+c->r[9]; // 800C5BCC
  c->r[6]=c->r[0]+c->r[5]; // 800C5BD0
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 800C5BD4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800C5BD8
  if (crb(c,2)) { goto L_800C5BE4; } // 800C5BDC
  c->r[10]=0u+0x00000001u; // 800C5BE0
L_800C5BE4:;
  cmps(c,0,(int32_t)c->r[10],0); // 800C5BE4
  if (crb(c,2)) { goto L_800C5D04; } // 800C5BE8
  c->r[0]=R8(c->r[6]+0x00000000u); // 800C5BEC
  cmpu(c,0,c->r[0],0x00000001u); // 800C5BF0
  if (!crb(c,0)) { goto L_800C5CF8; } // 800C5BF4
  c->r[8]=c->r[6]+0xFFFFFFFFu; // 800C5BF8
  goto L_800C5C04; // 800C5BFC
L_800C5C00:;
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 800C5C00
L_800C5C04:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 800C5C04
  cmps(c,0,(int32_t)c->r[0],0); // 800C5C08
  if (crb(c,2)) { IRQCHK(c); goto L_800C5C00; } // 800C5C0C
  cmpu(c,0,c->r[8],c->r[6]); // 800C5C10
  c->r[5]=c->r[6]-c->r[8]; // 800C5C14
  if (crb(c,2)) { goto L_800C5CF8; } // 800C5C18
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800C5C1C
  c->ctr=c->r[0]; // 800C5C20
  if (crb(c,2)) { goto L_800C5CD8; } // 800C5C24
L_800C5C28:;
  c->r[7]=R8(c->r[8]+0x00000000u); // 800C5C28
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800C5C2C
  W8(c->r[8]+0x00000000u,c->r[0]); // 800C5C30
  c->r[7]=R8(c->r[8]+0x00000001u); // 800C5C34
  c->r[0]=c->r[7]+0x0000000Au; // 800C5C38
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 800C5C3C
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800C5C40
  W8(c->r[8]+0x00000001u,c->r[0]); // 800C5C44
  c->r[7]=R8(c->r[8]+0x00000002u); // 800C5C48
  c->r[0]=c->r[7]+0x0000000Au; // 800C5C4C
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 800C5C50
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800C5C54
  W8(c->r[8]+0x00000002u,c->r[0]); // 800C5C58
  c->r[7]=R8(c->r[8]+0x00000003u); // 800C5C5C
  c->r[0]=c->r[7]+0x0000000Au; // 800C5C60
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 800C5C64
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800C5C68
  W8(c->r[8]+0x00000003u,c->r[0]); // 800C5C6C
  c->r[7]=R8(c->r[8]+0x00000004u); // 800C5C70
  c->r[0]=c->r[7]+0x0000000Au; // 800C5C74
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 800C5C78
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800C5C7C
  W8(c->r[8]+0x00000004u,c->r[0]); // 800C5C80
  c->r[7]=R8(c->r[8]+0x00000005u); // 800C5C84
  c->r[0]=c->r[7]+0x0000000Au; // 800C5C88
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 800C5C8C
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800C5C90
  W8(c->r[8]+0x00000005u,c->r[0]); // 800C5C94
  c->r[7]=R8(c->r[8]+0x00000006u); // 800C5C98
  c->r[0]=c->r[7]+0x0000000Au; // 800C5C9C
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 800C5CA0
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800C5CA4
  W8(c->r[8]+0x00000006u,c->r[0]); // 800C5CA8
  c->r[7]=R8(c->r[8]+0x00000007u); // 800C5CAC
  c->r[0]=c->r[7]+0x0000000Au; // 800C5CB0
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 800C5CB4
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800C5CB8
  W8(c->r[8]+0x00000007u,c->r[0]); // 800C5CBC
  c->r[7]=R8(c->r[8]+0x00000008u); // 800C5CC0
  c->r[0]=c->r[7]+0x0000000Au; // 800C5CC4
  {uint32_t ea=c->r[8]+0x00000008u; W8(ea,c->r[0]); c->r[8]=ea;} // 800C5CC8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5C28; } // 800C5CCC
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 800C5CD0
  if (crb(c,2)) { goto L_800C5CF8; } // 800C5CD4
L_800C5CD8:;
  c->ctr=c->r[5]; // 800C5CD8
L_800C5CDC:;
  c->r[7]=R8(c->r[8]+0x00000000u); // 800C5CDC
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800C5CE0
  W8(c->r[8]+0x00000000u,c->r[0]); // 800C5CE4
  c->r[7]=R8(c->r[8]+0x00000001u); // 800C5CE8
  c->r[0]=c->r[7]+0x0000000Au; // 800C5CEC
  {uint32_t ea=c->r[8]+0x00000001u; W8(ea,c->r[0]); c->r[8]=ea;} // 800C5CF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5CDC; } // 800C5CF4
L_800C5CF8:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 800C5CF8
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800C5CFC
  W8(c->r[6]+0x00000000u,c->r[0]); // 800C5D00
L_800C5D04:;
  c->r[7]=c->r[4]|c->r[4]; // 800C5D04
  goto L_800C5D10; // 800C5D08
L_800C5D0C:;
  c->r[7]=c->r[7]+0x00000001u; // 800C5D0C
L_800C5D10:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800C5D10
  cmps(c,0,(int32_t)c->r[0],0); // 800C5D14
  if (crb(c,2)) { IRQCHK(c); goto L_800C5D0C; } // 800C5D18
  cmpu(c,0,c->r[7],c->r[4]); // 800C5D1C
  if (!crb(c,1)) { goto L_800C5DD0; } // 800C5D20
  c->r[0]=R8(c->r[3]+0x00000004u); // 800C5D24
  c->r[6]=c->r[7]-c->r[4]; // 800C5D28
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800C5D2C
  c->r[8]=rotl(c->r[6],0)&0x000000FFu; // 800C5D30
  c->r[6]=c->r[4]+c->r[0]; // 800C5D34
  c->r[0]=c->r[5]-c->r[8]; // 800C5D38
  cmpu(c,0,c->r[7],c->r[6]); // 800C5D3C
  W16(c->r[3]+0x00000002u,c->r[0]); // 800C5D40
  c->r[5]=c->r[6]-c->r[7]; // 800C5D44
  if (!crb(c,0)) { goto L_800C5DC4; } // 800C5D48
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800C5D4C
  c->ctr=c->r[0]; // 800C5D50
  if (crb(c,2)) { goto L_800C5DAC; } // 800C5D54
L_800C5D58:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800C5D58
  W8(c->r[4]+0x00000000u,c->r[0]); // 800C5D5C
  c->r[0]=R8(c->r[7]+0x00000001u); // 800C5D60
  W8(c->r[4]+0x00000001u,c->r[0]); // 800C5D64
  c->r[0]=R8(c->r[7]+0x00000002u); // 800C5D68
  W8(c->r[4]+0x00000002u,c->r[0]); // 800C5D6C
  c->r[0]=R8(c->r[7]+0x00000003u); // 800C5D70
  W8(c->r[4]+0x00000003u,c->r[0]); // 800C5D74
  c->r[0]=R8(c->r[7]+0x00000004u); // 800C5D78
  W8(c->r[4]+0x00000004u,c->r[0]); // 800C5D7C
  c->r[0]=R8(c->r[7]+0x00000005u); // 800C5D80
  W8(c->r[4]+0x00000005u,c->r[0]); // 800C5D84
  c->r[0]=R8(c->r[7]+0x00000006u); // 800C5D88
  W8(c->r[4]+0x00000006u,c->r[0]); // 800C5D8C
  c->r[0]=R8(c->r[7]+0x00000007u); // 800C5D90
  c->r[7]=c->r[7]+0x00000008u; // 800C5D94
  W8(c->r[4]+0x00000007u,c->r[0]); // 800C5D98
  c->r[4]=c->r[4]+0x00000008u; // 800C5D9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5D58; } // 800C5DA0
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 800C5DA4
  if (crb(c,2)) { goto L_800C5DC4; } // 800C5DA8
L_800C5DAC:;
  c->ctr=c->r[5]; // 800C5DAC
L_800C5DB0:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 800C5DB0
  c->r[7]=c->r[7]+0x00000001u; // 800C5DB4
  W8(c->r[4]+0x00000000u,c->r[0]); // 800C5DB8
  c->r[4]=c->r[4]+0x00000001u; // 800C5DBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5DB0; } // 800C5DC0
L_800C5DC4:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 800C5DC4
  c->r[0]=c->r[0]-c->r[8]; // 800C5DC8
  W8(c->r[3]+0x00000004u,c->r[0]); // 800C5DCC
L_800C5DD0:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 800C5DD0
  c->r[4]=c->r[3]+0x00000005u; // 800C5DD4
  c->r[5]=c->r[4]+c->r[0]; // 800C5DD8
  c->r[0]=c->r[5]-c->r[4]; // 800C5DDC
  c->ctr=c->r[0]; // 800C5DE0
  cmpu(c,0,c->r[5],c->r[4]); // 800C5DE4
  if (!crb(c,1)) { goto L_800C5DFC; } // 800C5DE8
L_800C5DEC:;
  {uint32_t ea=c->r[5]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[5]=ea;} // 800C5DEC
  cmps(c,0,(int32_t)c->r[0],0); // 800C5DF0
  if (!crb(c,2)) { goto L_800C5DFC; } // 800C5DF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C5DEC; } // 800C5DF8
L_800C5DFC:;
  c->r[4]=c->r[5]-c->r[4]; // 800C5DFC
  c->r[0]=c->r[4]+0x00000001u; // 800C5E00
  W8(c->r[3]+0x00000004u,c->r[0]); // 800C5E04
L_800C5E08:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C5E08
  c->r[1]=c->r[1]+0x00000040u; // 800C5E0C
  return; // 800C5E10
}

// __num2dec_internal
void f_800C5E14(Ctx* __restrict c) {
  trace_call(0x800C5E14u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5E14
  c->r[0]=c->lr; // 800C5E18
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C5E1C
  {uint32_t ea=c->r[1]+0x00000088u; WF64(ea,c->f[31]);} // 800C5E20
  c->f[31]=c->f[1]; // 800C5E24
  W32(c->r[1]+0x00000084u,c->r[31]); // 800C5E28
  W32(c->r[1]+0x00000080u,c->r[30]); // 800C5E2C
  c->r[30]=c->r[3]|c->r[3]; // 800C5E30
  W32(c->r[1]+0x0000007Cu,c->r[29]); // 800C5E34
  c->lr=0x800C5E3Cu; f_800C7E74(c); // 800C5E38
  {uint32_t ea=c->r[2]+0xFFFF9170u; c->f[0]=RF64(ea);} // 800C5E3C
  c->r[0]=0u-c->r[3]; // 800C5E40
  c->r[0]=c->r[0]|c->r[3]; // 800C5E44
  fcmp(c,0,c->f[0],c->f[31]); // 800C5E48
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800C5E4C
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C5E50
  if (!crb(c,2)) { goto L_800C5E74; } // 800C5E54
  c->r[3]=0u+0x00000000u; // 800C5E58
  c->r[0]=0u+0x00000001u; // 800C5E5C
  W8(c->r[30]+0x00000000u,c->r[31]); // 800C5E60
  W16(c->r[30]+0x00000002u,c->r[3]); // 800C5E64
  W8(c->r[30]+0x00000004u,c->r[0]); // 800C5E68
  W8(c->r[30]+0x00000005u,c->r[3]); // 800C5E6C
  goto L_800C5F58; // 800C5E70
L_800C5E74:;
  c->f[1]=c->f[31]; // 800C5E74
  c->lr=0x800C5E7Cu; f_800C7E8C(c); // 800C5E78
  cmps(c,0,(int32_t)c->r[3],2); // 800C5E7C
  if (crb(c,1)) { goto L_800C5EB8; } // 800C5E80
  c->r[3]=0u+0x00000000u; // 800C5E84
  c->r[0]=0u+0x00000001u; // 800C5E88
  c->f[1]=c->f[31]; // 800C5E8C
  W8(c->r[30]+0x00000000u,c->r[31]); // 800C5E90
  W16(c->r[30]+0x00000002u,c->r[3]); // 800C5E94
  W8(c->r[30]+0x00000004u,c->r[0]); // 800C5E98
  c->lr=0x800C5EA0u; f_800C7E8C(c); // 800C5E9C
  cmps(c,0,(int32_t)c->r[3],1); // 800C5EA0
  c->r[0]=0u+0x00000049u; // 800C5EA4
  if (!crb(c,2)) { goto L_800C5EB0; } // 800C5EA8
  c->r[0]=0u+0x0000004Eu; // 800C5EAC
L_800C5EB0:;
  W8(c->r[30]+0x00000005u,c->r[0]); // 800C5EB0
  goto L_800C5F58; // 800C5EB4
L_800C5EB8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C5EB8
  if (crb(c,2)) { goto L_800C5EC4; } // 800C5EBC
  c->f[31]=-c->f[31]; // 800C5EC0
L_800C5EC4:;
  c->f[1]=c->f[31]; // 800C5EC4
  c->r[3]=c->r[1]+0x00000008u; // 800C5EC8
  c->lr=0x800C5ED0u; f_800D3564(c); // 800C5ECC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 800C5ED0
  c->f[31]=c->f[1]; // 800C5ED4
  c->r[4]=R32(c->r[1]+0x00000014u); // 800C5ED8
  c->r[3]=R32(c->r[1]+0x00000010u); // 800C5EDC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800C5EE0
  cmps(c,0,(int32_t)c->r[4],0); // 800C5EE4
  c->r[0]=c->r[0]&~c->r[4]; // 800C5EE8
  c->r[3]=c->r[3]|0x00100000u; // 800C5EEC
  c->r[0]=cntlz(c->r[0]); // 800C5EF0
  c->r[4]=addc(c,~c->r[0],0x00000020u,1); // 800C5EF4
  if (!crb(c,2)) { goto L_800C5F10; } // 800C5EF8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C5EFC
  c->r[0]=c->r[0]&~c->r[3]; // 800C5F00
  c->r[0]=cntlz(c->r[0]); // 800C5F04
  c->r[3]=addc(c,~c->r[0],0x00000020u,1); // 800C5F08
  c->r[4]=c->r[3]+0x00000020u; // 800C5F0C
L_800C5F10:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C5F10
  c->r[29]=addc(c,~c->r[4],0x00000035u,1); // 800C5F14
  c->r[3]=c->r[1]+0x00000018u; // 800C5F18
  c->r[4]=c->r[0]-c->r[29]; // 800C5F1C
  c->lr=0x800C5F24u; f_800C53A8(c); // 800C5F20
  c->f[1]=c->f[31]; // 800C5F24
  c->r[3]=c->r[29]|c->r[29]; // 800C5F28
  c->lr=0x800C5F30u; f_800D35EC(c); // 800C5F2C
  c->lr=0x800C5F34u; f_800C25F4(c); // 800C5F30
  c->r[5]=c->r[3]|c->r[3]; // 800C5F34
  c->r[6]=c->r[4]|c->r[4]; // 800C5F38
  c->r[3]=c->r[1]+0x00000044u; // 800C5F3C
  c->lr=0x800C5F44u; f_800C4F58(c); // 800C5F40
  c->r[3]=c->r[30]|c->r[30]; // 800C5F44
  c->r[4]=c->r[1]+0x00000044u; // 800C5F48
  c->r[5]=c->r[1]+0x00000018u; // 800C5F4C
  c->lr=0x800C5F54u; f_800C5034(c); // 800C5F50
  W8(c->r[30]+0x00000000u,c->r[31]); // 800C5F54
L_800C5F58:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C5F58
  {uint32_t ea=c->r[1]+0x00000088u; c->f[31]=RF64(ea);} // 800C5F5C
  c->r[31]=R32(c->r[1]+0x00000084u); // 800C5F60
  c->r[30]=R32(c->r[1]+0x00000080u); // 800C5F64
  c->r[29]=R32(c->r[1]+0x0000007Cu); // 800C5F68
  c->lr=c->r[0]; // 800C5F6C
  c->r[1]=c->r[1]+0x00000090u; // 800C5F70
  return; // 800C5F74
}

// __num2dec
void f_800C5F78(Ctx* __restrict c) {
  trace_call(0x800C5F78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C5F78
  c->r[0]=c->lr; // 800C5F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C5F80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C5F84
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800C5F88
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C5F8C
  c->r[30]=c->r[4]|c->r[4]; // 800C5F90
  c->r[3]=c->r[30]|c->r[30]; // 800C5F94
  c->lr=0x800C5F9Cu; f_800C5E14(c); // 800C5F98
  c->r[0]=R8(c->r[30]+0x00000005u); // 800C5F9C
  cmpu(c,0,c->r[0],0x00000009u); // 800C5FA0
  if (crb(c,1)) { goto L_800C6100; } // 800C5FA4
  cmps(c,0,(int32_t)c->r[31],36); // 800C5FA8
  if (!crb(c,1)) { goto L_800C5FB4; } // 800C5FAC
  c->r[31]=0u+0x00000024u; // 800C5FB0
L_800C5FB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800C5FB4
  if (!crb(c,1)) { goto L_800C60A0; } // 800C5FB8
  c->r[0]=R8(c->r[30]+0x00000004u); // 800C5FBC
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800C5FC0
  if (!crb(c,0)) { goto L_800C60A0; } // 800C5FC4
  c->r[4]=c->r[30]+0x00000005u; // 800C5FC8
  c->r[0]=R8(c->r[4]+c->r[31]); // 800C5FCC
  c->r[3]=c->r[4]+c->r[31]; // 800C5FD0
  cmpu(c,0,c->r[0],0x00000005u); // 800C5FD4
  if (!crb(c,1)) { goto L_800C5FE4; } // 800C5FD8
  c->r[4]=0u+0x00000001u; // 800C5FDC
  goto L_800C6040; // 800C5FE0
L_800C5FE4:;
  if (!crb(c,0)) { goto L_800C5FF0; } // 800C5FE4
  c->r[4]=0u+0xFFFFFFFFu; // 800C5FE8
  goto L_800C6040; // 800C5FEC
L_800C5FF0:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 800C5FF0
  c->r[3]=c->r[3]+0x00000001u; // 800C5FF4
  c->r[4]=c->r[4]+c->r[0]; // 800C5FF8
  c->r[0]=c->r[4]-c->r[3]; // 800C5FFC
  c->ctr=c->r[0]; // 800C6000
  cmpu(c,0,c->r[3],c->r[4]); // 800C6004
  if (!crb(c,0)) { goto L_800C6028; } // 800C6008
L_800C600C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800C600C
  cmps(c,0,(int32_t)c->r[0],0); // 800C6010
  if (crb(c,2)) { goto L_800C6020; } // 800C6014
  c->r[4]=0u+0x00000001u; // 800C6018
  goto L_800C6040; // 800C601C
L_800C6020:;
  c->r[3]=c->r[3]+0x00000001u; // 800C6020
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C600C; } // 800C6024
L_800C6028:;
  c->r[3]=c->r[31]+c->r[30]; // 800C6028
  c->r[4]=0u+0xFFFFFFFFu; // 800C602C
  c->r[0]=R8(c->r[3]+0x00000004u); // 800C6030
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800C6034
  if (crb(c,2)) { goto L_800C6040; } // 800C6038
  c->r[4]=0u+0x00000001u; // 800C603C
L_800C6040:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C6040
  W8(c->r[30]+0x00000004u,c->r[31]); // 800C6044
  if (crb(c,0)) { goto L_800C60A0; } // 800C6048
  c->r[4]=c->r[30]+0x00000005u; // 800C604C
  c->r[0]=0u+0x00000000u; // 800C6050
  c->r[5]=c->r[4]+c->r[31]; // 800C6054
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800C6058
L_800C605C:;
  c->r[3]=R8(c->r[5]+0x00000000u); // 800C605C
  cmpu(c,0,c->r[3],0x00000009u); // 800C6060
  if (!crb(c,0)) { goto L_800C6074; } // 800C6064
  c->r[0]=c->r[3]+0x00000001u; // 800C6068
  W8(c->r[5]+0x00000000u,c->r[0]); // 800C606C
  goto L_800C60A0; // 800C6070
L_800C6074:;
  cmpu(c,0,c->r[5],c->r[4]); // 800C6074
  if (!crb(c,2)) { goto L_800C6094; } // 800C6078
  c->r[0]=0u+0x00000001u; // 800C607C
  W8(c->r[5]+0x00000000u,c->r[0]); // 800C6080
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 800C6084
  c->r[0]=c->r[3]+0x00000001u; // 800C6088
  W16(c->r[30]+0x00000002u,c->r[0]); // 800C608C
  goto L_800C60A0; // 800C6090
L_800C6094:;
  W8(c->r[5]+0x00000000u,c->r[0]); // 800C6094
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800C6098
  IRQCHK(c); goto L_800C605C; // 800C609C
L_800C60A0:;
  c->r[5]=0u+0x00000000u; // 800C60A0
  goto L_800C60BC; // 800C60A4
L_800C60A8:;
  c->r[4]=R8(c->r[30]+0x00000004u); // 800C60A8
  c->r[3]=c->r[30]+c->r[4]; // 800C60AC
  c->r[0]=c->r[4]+0x00000001u; // 800C60B0
  W8(c->r[3]+0x00000005u,c->r[5]); // 800C60B4
  W8(c->r[30]+0x00000004u,c->r[0]); // 800C60B8
L_800C60BC:;
  c->r[3]=R8(c->r[30]+0x00000004u); // 800C60BC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[31]); // 800C60C0
  if (crb(c,0)) { IRQCHK(c); goto L_800C60A8; } // 800C60C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 800C60C8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800C60CC
  c->r[5]=0u+0x00000000u; // 800C60D0
  c->r[0]=c->r[0]-c->r[3]; // 800C60D4
  W16(c->r[30]+0x00000002u,c->r[0]); // 800C60D8
  goto L_800C60F4; // 800C60DC
L_800C60E0:;
  c->r[4]=c->r[30]+c->r[5]; // 800C60E0
  c->r[5]=c->r[5]+0x00000001u; // 800C60E4
  c->r[3]=R8(c->r[4]+0x00000005u); // 800C60E8
  c->r[0]=c->r[3]+0x00000030u; // 800C60EC
  W8(c->r[4]+0x00000005u,c->r[0]); // 800C60F0
L_800C60F4:;
  c->r[0]=R8(c->r[30]+0x00000004u); // 800C60F4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800C60F8
  if (crb(c,0)) { IRQCHK(c); goto L_800C60E0; } // 800C60FC
L_800C6100:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6100
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C6104
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C6108
  c->lr=c->r[0]; // 800C610C
  c->r[1]=c->r[1]+0x00000010u; // 800C6110
  return; // 800C6114
}

// __dec2num
void f_800C6118(Ctx* __restrict c) {
  trace_call(0x800C6118u);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6118
  c->r[0]=c->lr; // 800C611C
  W32(c->r[1]+0x00000184u,c->r[0]); // 800C6120
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[31]);} // 800C6124
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,31,ea,0,0);} // 800C6128
  c->r[11]=c->r[1]+0x00000170u; // 800C612C
  c->lr=0x800C6134u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800C6130
  c->r[0]=R8(c->r[3]+0x00000004u); // 800C6134
  c->r[4]=0u+0x43300000u; // 800C6138
  W32(c->r[1]+0x00000128u,c->r[4]); // 800C613C
  c->r[27]=c->r[3]|c->r[3]; // 800C6140
  cmps(c,0,(int32_t)c->r[0],0); // 800C6144
  W32(c->r[1]+0x00000130u,c->r[4]); // 800C6148
  if (!crb(c,2)) { goto L_800C6174; } // 800C614C
  c->r[0]=R8(c->r[3]+0x00000000u); // 800C6150
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C6154
  if (!crb(c,2)) { goto L_800C6164; } // 800C6158
  {uint32_t ea=c->r[2]+0xFFFF9178u; c->f[2]=RF64(ea);} // 800C615C
  goto L_800C6168; // 800C6160
L_800C6164:;
  {uint32_t ea=c->r[2]+0xFFFF9180u; c->f[2]=RF64(ea);} // 800C6164
L_800C6168:;
  {uint32_t ea=c->r[2]+0xFFFF9170u; c->f[1]=RF64(ea);} // 800C6168
  c->lr=0x800C6170u; f_800D3320(c); // 800C616C
  goto L_800C68A8; // 800C6170
L_800C6174:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 800C6174
  cmps(c,0,(int32_t)c->r[0],73); // 800C6178
  if (crb(c,2)) { goto L_800C61C0; } // 800C617C
  if (!crb(c,0)) { goto L_800C6190; } // 800C6180
  cmps(c,0,(int32_t)c->r[0],48); // 800C6184
  if (crb(c,2)) { goto L_800C619C; } // 800C6188
  goto L_800C622C; // 800C618C
L_800C6190:;
  cmps(c,0,(int32_t)c->r[0],78); // 800C6190
  if (crb(c,2)) { goto L_800C61E8; } // 800C6194
  goto L_800C622C; // 800C6198
L_800C619C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800C619C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C61A0
  if (!crb(c,2)) { goto L_800C61B0; } // 800C61A4
  {uint32_t ea=c->r[2]+0xFFFF9178u; c->f[2]=RF64(ea);} // 800C61A8
  goto L_800C61B4; // 800C61AC
L_800C61B0:;
  {uint32_t ea=c->r[2]+0xFFFF9180u; c->f[2]=RF64(ea);} // 800C61B0
L_800C61B4:;
  {uint32_t ea=c->r[2]+0xFFFF9170u; c->f[1]=RF64(ea);} // 800C61B4
  c->lr=0x800C61BCu; f_800D3320(c); // 800C61B8
  goto L_800C68A8; // 800C61BC
L_800C61C0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800C61C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C61C4
  if (!crb(c,2)) { goto L_800C61D4; } // 800C61C8
  {uint32_t ea=c->r[2]+0xFFFF9178u; c->f[2]=RF64(ea);} // 800C61CC
  goto L_800C61D8; // 800C61D0
L_800C61D4:;
  {uint32_t ea=c->r[2]+0xFFFF9180u; c->f[2]=RF64(ea);} // 800C61D4
L_800C61D8:;
  c->r[3]=0u+0x803C0000u; // 800C61D8
  {uint32_t ea=c->r[3]+0x00007714u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C61DC
  c->lr=0x800C61E4u; f_800D3320(c); // 800C61E0
  goto L_800C68A8; // 800C61E4
L_800C61E8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800C61E8
  c->r[4]=0u+0x00000000u; // 800C61EC
  c->r[3]=0u+0x7FF00000u; // 800C61F0
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800C61F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C61F8
  W32(c->r[1]+0x00000018u,c->r[3]); // 800C61FC
  if (crb(c,2)) { goto L_800C6218; } // 800C6200
  c->r[0]=0u+0x80000000u; // 800C6204
  c->r[3]=0u+0x00000000u; // 800C6208
  c->r[0]=c->r[0]|0x7FF00000u; // 800C620C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800C6210
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C6214
L_800C6218:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 800C6218
  c->r[0]=c->r[0]|0x00080000u; // 800C621C
  W32(c->r[1]+0x00000018u,c->r[0]); // 800C6220
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 800C6224
  goto L_800C68A8; // 800C6228
L_800C622C:;
  c->r[0]=R16(c->r[3]+0x00000004u); // 800C622C
  c->r[4]=c->r[1]+0x00000101u; // 800C6230
  c->r[19]=R16(c->r[3]+0x00000000u); // 800C6234
  W16(c->r[1]+0x00000100u,c->r[0]); // 800C6238
  c->r[20]=R16(c->r[3]+0x00000002u); // 800C623C
  c->r[0]=R8(c->r[1]+0x00000100u); // 800C6240
  c->r[31]=R16(c->r[3]+0x00000006u); // 800C6244
  c->r[28]=c->r[4]+c->r[0]; // 800C6248
  c->r[30]=R16(c->r[3]+0x00000008u); // 800C624C
  c->r[29]=R16(c->r[3]+0x0000000Au); // 800C6250
  cmpu(c,1,c->r[4],c->r[28]); // 800C6254
  c->r[26]=R16(c->r[3]+0x0000000Cu); // 800C6258
  c->r[25]=R16(c->r[3]+0x0000000Eu); // 800C625C
  c->r[24]=R16(c->r[3]+0x00000010u); // 800C6260
  c->r[23]=R16(c->r[3]+0x00000012u); // 800C6264
  c->r[22]=R16(c->r[3]+0x00000014u); // 800C6268
  c->r[21]=R16(c->r[3]+0x00000016u); // 800C626C
  c->r[12]=R16(c->r[3]+0x00000018u); // 800C6270
  c->r[11]=R16(c->r[3]+0x0000001Au); // 800C6274
  c->r[10]=R16(c->r[3]+0x0000001Cu); // 800C6278
  c->r[9]=R16(c->r[3]+0x0000001Eu); // 800C627C
  c->r[8]=R16(c->r[3]+0x00000020u); // 800C6280
  c->r[7]=R16(c->r[3]+0x00000022u); // 800C6284
  c->r[6]=R16(c->r[3]+0x00000024u); // 800C6288
  c->r[5]=R16(c->r[3]+0x00000026u); // 800C628C
  c->r[0]=R16(c->r[3]+0x00000028u); // 800C6290
  W16(c->r[1]+0x000000FCu,c->r[19]); // 800C6294
  W16(c->r[1]+0x000000FEu,c->r[20]); // 800C6298
  W16(c->r[1]+0x00000102u,c->r[31]); // 800C629C
  W16(c->r[1]+0x00000104u,c->r[30]); // 800C62A0
  W16(c->r[1]+0x00000106u,c->r[29]); // 800C62A4
  W16(c->r[1]+0x00000108u,c->r[26]); // 800C62A8
  W16(c->r[1]+0x0000010Au,c->r[25]); // 800C62AC
  W16(c->r[1]+0x0000010Cu,c->r[24]); // 800C62B0
  W16(c->r[1]+0x0000010Eu,c->r[23]); // 800C62B4
  W16(c->r[1]+0x00000110u,c->r[22]); // 800C62B8
  W16(c->r[1]+0x00000112u,c->r[21]); // 800C62BC
  W16(c->r[1]+0x00000114u,c->r[12]); // 800C62C0
  W16(c->r[1]+0x00000116u,c->r[11]); // 800C62C4
  W16(c->r[1]+0x00000118u,c->r[10]); // 800C62C8
  W16(c->r[1]+0x0000011Au,c->r[9]); // 800C62CC
  W16(c->r[1]+0x0000011Cu,c->r[8]); // 800C62D0
  W16(c->r[1]+0x0000011Eu,c->r[7]); // 800C62D4
  W16(c->r[1]+0x00000120u,c->r[6]); // 800C62D8
  W16(c->r[1]+0x00000122u,c->r[5]); // 800C62DC
  W16(c->r[1]+0x00000124u,c->r[0]); // 800C62E0
  if (!crb(c,4)) { goto L_800C63A0; } // 800C62E4
  c->r[0]=c->r[28]-c->r[4]; // 800C62E8
  c->r[3]=c->r[28]+0xFFFFFFF8u; // 800C62EC
  cmps(c,0,(int32_t)c->r[0],8); // 800C62F0
  if (!crb(c,1)) { goto L_800C637C; } // 800C62F4
  if (crb(c,5)) { goto L_800C637C; } // 800C62F8
  c->r[0]=c->r[3]+0x00000007u; // 800C62FC
  c->r[0]=c->r[0]-c->r[4]; // 800C6300
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800C6304
  c->ctr=c->r[0]; // 800C6308
  cmpu(c,0,c->r[4],c->r[3]); // 800C630C
  if (!crb(c,0)) { goto L_800C637C; } // 800C6310
L_800C6314:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 800C6314
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 800C6318
  W8(c->r[4]+0x00000000u,c->r[0]); // 800C631C
  c->r[3]=R8(c->r[4]+0x00000001u); // 800C6320
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 800C6324
  W8(c->r[4]+0x00000001u,c->r[0]); // 800C6328
  c->r[3]=R8(c->r[4]+0x00000002u); // 800C632C
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 800C6330
  W8(c->r[4]+0x00000002u,c->r[0]); // 800C6334
  c->r[3]=R8(c->r[4]+0x00000003u); // 800C6338
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 800C633C
  W8(c->r[4]+0x00000003u,c->r[0]); // 800C6340
  c->r[3]=R8(c->r[4]+0x00000004u); // 800C6344
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 800C6348
  W8(c->r[4]+0x00000004u,c->r[0]); // 800C634C
  c->r[3]=R8(c->r[4]+0x00000005u); // 800C6350
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 800C6354
  W8(c->r[4]+0x00000005u,c->r[0]); // 800C6358
  c->r[3]=R8(c->r[4]+0x00000006u); // 800C635C
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 800C6360
  W8(c->r[4]+0x00000006u,c->r[0]); // 800C6364
  c->r[3]=R8(c->r[4]+0x00000007u); // 800C6368
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 800C636C
  W8(c->r[4]+0x00000007u,c->r[0]); // 800C6370
  c->r[4]=c->r[4]+0x00000008u; // 800C6374
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C6314; } // 800C6378
L_800C637C:;
  c->r[0]=c->r[28]-c->r[4]; // 800C637C
  c->ctr=c->r[0]; // 800C6380
  cmpu(c,0,c->r[4],c->r[28]); // 800C6384
  if (!crb(c,0)) { goto L_800C63A0; } // 800C6388
L_800C638C:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 800C638C
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 800C6390
  W8(c->r[4]+0x00000000u,c->r[0]); // 800C6394
  c->r[4]=c->r[4]+0x00000001u; // 800C6398
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C638C; } // 800C639C
L_800C63A0:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x000000FEu); // 800C63A0
  c->r[4]=0u+0x801F0000u; // 800C63A4
  c->r[0]=R8(c->r[1]+0x00000100u); // 800C63A8
  c->r[4]=c->r[4]+0x00003BD8u; // 800C63AC
  c->r[3]=c->r[1]+0x000000D0u; // 800C63B0
  c->r[5]=c->r[0]+c->r[5]; // 800C63B4
  c->r[4]=c->r[4]+0x000000B8u; // 800C63B8
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800C63BC
  W16(c->r[1]+0x000000FEu,c->r[0]); // 800C63C0
  c->r[5]=0u+0x00000134u; // 800C63C4
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800C63C8
  c->lr=0x800C63D0u; f_800C52BC(c); // 800C63CC
  c->r[3]=c->r[1]+0x000000D0u; // 800C63D0
  c->r[4]=c->r[1]+0x000000FCu; // 800C63D4
  c->lr=0x800C63DCu; f_800C57F8(c); // 800C63D8
  cmps(c,0,(int32_t)c->r[3],0); // 800C63DC
  if (crb(c,2)) { goto L_800C640C; } // 800C63E0
  c->r[0]=R8(c->r[27]+0x00000000u); // 800C63E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C63E8
  if (!crb(c,2)) { goto L_800C63F8; } // 800C63EC
  {uint32_t ea=c->r[2]+0xFFFF9178u; c->f[2]=RF64(ea);} // 800C63F0
  goto L_800C63FC; // 800C63F4
L_800C63F8:;
  {uint32_t ea=c->r[2]+0xFFFF9180u; c->f[2]=RF64(ea);} // 800C63F8
L_800C63FC:;
  c->r[3]=0u+0x803C0000u; // 800C63FC
  {uint32_t ea=c->r[3]+0x00007714u; c->f[1]=c->ps1[1]=RF32(ea);} // 800C6400
  c->lr=0x800C6408u; f_800D3320(c); // 800C6404
  goto L_800C68A8; // 800C6408
L_800C640C:;
  c->r[0]=R8(c->r[1]+0x00000101u); // 800C640C
  c->r[7]=0u+0x80220000u; // 800C6410
  {uint32_t ea=c->r[2]+0xFFFF9198u; c->f[2]=RF64(ea);} // 800C6414
  c->r[4]=c->r[1]+0x00000102u; // 800C6418
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 800C641C
  c->r[7]=c->r[7]+0xFFFFBCA0u; // 800C6420
  c->r[3]=0u+0x80000000u; // 800C6424
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=RF64(ea);} // 800C6428
  c->f[31]=c->f[0]-c->f[2]; // 800C642C
  goto L_800C6570; // 800C6430
L_800C6434:;
  c->r[5]=c->r[28]-c->r[4]; // 800C6434
  c->r[10]=0u+0x00000000u; // 800C6438
  c->r[0]=rotl(c->r[5],29)&0xE0000000u; // 800C643C
  c->r[5]=rotl(c->r[5],1)&0x00000001u; // 800C6440
  c->r[0]=c->r[0]-c->r[5]; // 800C6444
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 800C6448
  c->r[6]=c->r[0]+c->r[5]; cr0(c,c->r[6]); // 800C644C
  if (!crb(c,2)) { goto L_800C6458; } // 800C6450
  c->r[6]=0u+0x00000008u; // 800C6454
L_800C6458:;
  cmps(c,1,(int32_t)c->r[6],0); // 800C6458
  c->r[5]=0u+0x00000000u; // 800C645C
  if (!crb(c,5)) { goto L_800C6538; } // 800C6460
  cmps(c,0,(int32_t)c->r[6],8); // 800C6464
  c->r[8]=c->r[6]+0xFFFFFFF8u; // 800C6468
  if (!crb(c,1)) { goto L_800C6510; } // 800C646C
  c->r[9]=0u+0x00000000u; // 800C6470
  if (crb(c,4)) { goto L_800C6488; } // 800C6474
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800C6478
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800C647C
  if (crb(c,1)) { goto L_800C6488; } // 800C6480
  c->r[9]=0u+0x00000001u; // 800C6484
L_800C6488:;
  cmps(c,0,(int32_t)c->r[9],0); // 800C6488
  if (crb(c,2)) { goto L_800C6510; } // 800C648C
  c->r[0]=c->r[8]+0x00000007u; // 800C6490
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800C6494
  c->ctr=c->r[0]; // 800C6498
  cmps(c,0,(int32_t)c->r[8],0); // 800C649C
  if (!crb(c,1)) { goto L_800C6510; } // 800C64A0
L_800C64A4:;
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)10); // 800C64A4
  c->r[9]=R8(c->r[4]+0x00000000u); // 800C64A8
  c->r[8]=R8(c->r[4]+0x00000001u); // 800C64AC
  c->r[5]=c->r[5]+0x00000008u; // 800C64B0
  c->r[21]=R8(c->r[4]+0x00000002u); // 800C64B4
  c->r[0]=c->r[9]+c->r[0]; // 800C64B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800C64BC
  c->r[12]=R8(c->r[4]+0x00000003u); // 800C64C0
  c->r[11]=R8(c->r[4]+0x00000004u); // 800C64C4
  c->r[10]=R8(c->r[4]+0x00000005u); // 800C64C8
  c->r[0]=c->r[8]+c->r[0]; // 800C64CC
  c->r[9]=R8(c->r[4]+0x00000006u); // 800C64D0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800C64D4
  c->r[8]=R8(c->r[4]+0x00000007u); // 800C64D8
  c->r[4]=c->r[4]+0x00000008u; // 800C64DC
  c->r[0]=c->r[21]+c->r[0]; // 800C64E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800C64E4
  c->r[0]=c->r[12]+c->r[0]; // 800C64E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800C64EC
  c->r[0]=c->r[11]+c->r[0]; // 800C64F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800C64F4
  c->r[0]=c->r[10]+c->r[0]; // 800C64F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800C64FC
  c->r[0]=c->r[9]+c->r[0]; // 800C6500
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800C6504
  c->r[10]=c->r[8]+c->r[0]; // 800C6508
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C64A4; } // 800C650C
L_800C6510:;
  c->r[0]=c->r[6]-c->r[5]; // 800C6510
  c->ctr=c->r[0]; // 800C6514
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 800C6518
  if (!crb(c,0)) { goto L_800C6538; } // 800C651C
L_800C6520:;
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)10); // 800C6520
  c->r[8]=R8(c->r[4]+0x00000000u); // 800C6524
  c->r[5]=c->r[5]+0x00000001u; // 800C6528
  c->r[4]=c->r[4]+0x00000001u; // 800C652C
  c->r[10]=c->r[8]+c->r[0]; // 800C6530
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C6520; } // 800C6534
L_800C6538:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800C6538
  W32(c->r[1]+0x00000134u,c->r[10]); // 800C653C
  c->r[5]=c->r[7]+c->r[0]; // 800C6540
  cmps(c,0,(int32_t)c->r[10],0); // 800C6544
  {uint32_t ea=c->r[5]+0xFFFFFFF8u; c->f[1]=RF64(ea);} // 800C6548
  {uint32_t ea=c->r[1]+0x00000130u; c->f[0]=RF64(ea);} // 800C654C
  c->f[1]=c->f[31]*c->f[1]; // 800C6550
  c->f[0]=c->f[0]-c->f[2]; // 800C6554
  c->f[0]=c->f[1]+c->f[0]; // 800C6558
  if (crb(c,2)) { goto L_800C6568; } // 800C655C
  fcmp(c,0,c->f[1],c->f[0]); // 800C6560
  if (crb(c,2)) { goto L_800C6578; } // 800C6564
L_800C6568:;
  c->f[31]=c->f[0]; // 800C6568
  c->r[29]=c->r[29]-c->r[6]; // 800C656C
L_800C6570:;
  cmpu(c,0,c->r[4],c->r[28]); // 800C6570
  if (crb(c,0)) { IRQCHK(c); goto L_800C6434; } // 800C6574
L_800C6578:;
  cmps(c,0,(int32_t)c->r[29],0); // 800C6578
  if (!crb(c,0)) { goto L_800C65A8; } // 800C657C
  c->r[0]=0u-c->r[29]; // 800C6580
  {uint32_t ea=c->r[2]+0xFFFF91A0u; c->f[2]=RF64(ea);} // 800C6584
  c->r[0]=c->r[0]^0x80000000u; // 800C6588
  {uint32_t ea=c->r[2]+0xFFFF9188u; c->f[1]=RF64(ea);} // 800C658C
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 800C6590
  {uint32_t ea=c->r[1]+0x00000128u; c->f[0]=RF64(ea);} // 800C6594
  c->f[2]=c->f[0]-c->f[2]; // 800C6598
  c->lr=0x800C65A0u; f_800D3838(c); // 800C659C
  c->f[31]=c->f[31]/c->f[1]; // 800C65A0
  goto L_800C65C8; // 800C65A4
L_800C65A8:;
  c->r[0]=c->r[29]^0x80000000u; // 800C65A8
  {uint32_t ea=c->r[2]+0xFFFF91A0u; c->f[2]=RF64(ea);} // 800C65AC
  W32(c->r[1]+0x00000134u,c->r[0]); // 800C65B0
  {uint32_t ea=c->r[2]+0xFFFF9188u; c->f[1]=RF64(ea);} // 800C65B4
  {uint32_t ea=c->r[1]+0x00000130u; c->f[0]=RF64(ea);} // 800C65B8
  c->f[2]=c->f[0]-c->f[2]; // 800C65BC
  c->lr=0x800C65C4u; f_800D3838(c); // 800C65C0
  c->f[31]=c->f[31]*c->f[1]; // 800C65C4
L_800C65C8:;
  c->f[1]=c->f[31]; // 800C65C8
  c->r[3]=c->r[29]|c->r[29]; // 800C65CC
  c->lr=0x800C65D4u; f_800D35EC(c); // 800C65D0
  c->f[31]=c->f[1]; // 800C65D4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 800C65D8
  c->lr=0x800C65E0u; f_800C7E8C(c); // 800C65DC
  cmps(c,0,(int32_t)c->r[3],2); // 800C65E0
  if (!crb(c,2)) { goto L_800C65F0; } // 800C65E4
  {uint32_t ea=c->r[2]+0xFFFF9190u; c->f[31]=RF64(ea);} // 800C65E8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800C65EC
L_800C65F0:;
  c->f[1]=c->f[31]; // 800C65F0
  c->r[3]=c->r[1]+0x000000A4u; // 800C65F4
  c->r[27]=0u+0x00000000u; // 800C65F8
  c->lr=0x800C6600u; f_800C5E14(c); // 800C65FC
  c->r[3]=c->r[1]+0x000000A4u; // 800C6600
  c->r[4]=c->r[1]+0x000000FCu; // 800C6604
  c->lr=0x800C660Cu; f_800C5714(c); // 800C6608
  cmps(c,0,(int32_t)c->r[3],0); // 800C660C
  if (!crb(c,2)) { goto L_800C6890; } // 800C6610
  c->r[3]=c->r[1]+0x000000A4u; // 800C6614
  c->r[4]=c->r[1]+0x000000FCu; // 800C6618
  c->lr=0x800C6620u; f_800C57F8(c); // 800C661C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6620
  if (crb(c,2)) { goto L_800C662C; } // 800C6624
  c->r[27]=0u+0x00000001u; // 800C6628
L_800C662C:;
  c->r[0]=cntlz(c->r[27]); // 800C662C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 800C6630
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; // 800C6634
  c->r[29]=0u+0x00000001u; // 800C6638
  c->r[30]=0u+0x00000000u; // 800C663C
  c->r[31]=0u+0xFFFFFFFFu; // 800C6640
L_800C6644:;
  cmps(c,0,(int32_t)c->r[28],0); // 800C6644
  if (!crb(c,2)) { goto L_800C6678; } // 800C6648
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C664C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C6650
  c->r[3]=addc(c,c->r[3],c->r[29],0); // 800C6654
  c->r[0]=addc(c,c->r[0],c->r[30],c->xer_ca); // 800C6658
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C665C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C6660
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800C6664
  c->lr=0x800C666Cu; f_800C7E8C(c); // 800C6668
  cmps(c,0,(int32_t)c->r[3],2); // 800C666C
  if (crb(c,2)) { goto L_800C6890; } // 800C6670
  goto L_800C6690; // 800C6674
L_800C6678:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800C6678
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C667C
  c->r[3]=addc(c,c->r[3],c->r[31],0); // 800C6680
  c->r[0]=addc(c,c->r[0],c->r[31],c->xer_ca); // 800C6684
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800C6688
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C668C
L_800C6690:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800C6690
  c->r[3]=c->r[1]+0x00000078u; // 800C6694
  c->lr=0x800C669Cu; f_800C5E14(c); // 800C6698
  cmps(c,0,(int32_t)c->r[27],0); // 800C669C
  if (crb(c,2)) { goto L_800C66B8; } // 800C66A0
  c->r[3]=c->r[1]+0x00000078u; // 800C66A4
  c->r[4]=c->r[1]+0x000000FCu; // 800C66A8
  c->lr=0x800C66B0u; f_800C57F8(c); // 800C66AC
  cmps(c,0,(int32_t)c->r[3],0); // 800C66B0
  if (crb(c,2)) { goto L_800C6828; } // 800C66B4
L_800C66B8:;
  cmps(c,0,(int32_t)c->r[27],0); // 800C66B8
  if (!crb(c,2)) { goto L_800C67C4; } // 800C66BC
  c->r[3]=c->r[1]+0x000000FCu; // 800C66C0
  c->r[4]=c->r[1]+0x00000078u; // 800C66C4
  c->lr=0x800C66CCu; f_800C57F8(c); // 800C66C8
  cmps(c,0,(int32_t)c->r[3],0); // 800C66CC
  if (!crb(c,2)) { goto L_800C67C4; } // 800C66D0
  c->f[0]=c->f[31]; // 800C66D4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 800C66D8
  c->r[21]=R32(c->r[1]+0x000000A4u); // 800C66DC
  c->r[12]=R32(c->r[1]+0x00000078u); // 800C66E0
  c->r[22]=R32(c->r[1]+0x000000A8u); // 800C66E4
  c->r[11]=R32(c->r[1]+0x0000007Cu); // 800C66E8
  c->r[23]=R32(c->r[1]+0x000000ACu); // 800C66EC
  c->r[10]=R32(c->r[1]+0x00000080u); // 800C66F0
  c->r[24]=R32(c->r[1]+0x000000B0u); // 800C66F4
  c->r[9]=R32(c->r[1]+0x00000084u); // 800C66F8
  c->r[25]=R32(c->r[1]+0x000000B4u); // 800C66FC
  c->r[8]=R32(c->r[1]+0x00000088u); // 800C6700
  c->r[26]=R32(c->r[1]+0x000000B8u); // 800C6704
  c->r[7]=R32(c->r[1]+0x0000008Cu); // 800C6708
  c->r[31]=R32(c->r[1]+0x000000BCu); // 800C670C
  c->r[6]=R32(c->r[1]+0x00000090u); // 800C6710
  c->r[30]=R32(c->r[1]+0x000000C0u); // 800C6714
  c->r[5]=R32(c->r[1]+0x00000094u); // 800C6718
  c->r[29]=R32(c->r[1]+0x000000C4u); // 800C671C
  c->r[4]=R32(c->r[1]+0x00000098u); // 800C6720
  c->r[28]=R32(c->r[1]+0x000000C8u); // 800C6724
  c->r[3]=R32(c->r[1]+0x0000009Cu); // 800C6728
  c->r[27]=R16(c->r[1]+0x000000CCu); // 800C672C
  c->r[0]=R16(c->r[1]+0x000000A0u); // 800C6730
  W32(c->r[1]+0x0000004Cu,c->r[21]); // 800C6734
  W32(c->r[1]+0x00000050u,c->r[22]); // 800C6738
  W32(c->r[1]+0x00000054u,c->r[23]); // 800C673C
  W32(c->r[1]+0x00000058u,c->r[24]); // 800C6740
  W32(c->r[1]+0x0000005Cu,c->r[25]); // 800C6744
  W32(c->r[1]+0x00000060u,c->r[26]); // 800C6748
  W32(c->r[1]+0x00000064u,c->r[31]); // 800C674C
  W32(c->r[1]+0x00000068u,c->r[30]); // 800C6750
  W32(c->r[1]+0x0000006Cu,c->r[29]); // 800C6754
  W32(c->r[1]+0x00000070u,c->r[28]); // 800C6758
  W16(c->r[1]+0x00000074u,c->r[27]); // 800C675C
  W32(c->r[1]+0x000000A4u,c->r[12]); // 800C6760
  W32(c->r[1]+0x000000A8u,c->r[11]); // 800C6764
  W32(c->r[1]+0x000000ACu,c->r[10]); // 800C6768
  W32(c->r[1]+0x000000B0u,c->r[9]); // 800C676C
  W32(c->r[1]+0x000000B4u,c->r[8]); // 800C6770
  W32(c->r[1]+0x000000B8u,c->r[7]); // 800C6774
  W32(c->r[1]+0x000000BCu,c->r[6]); // 800C6778
  W32(c->r[1]+0x000000C0u,c->r[5]); // 800C677C
  W32(c->r[1]+0x000000C4u,c->r[4]); // 800C6780
  W32(c->r[1]+0x000000C8u,c->r[3]); // 800C6784
  W16(c->r[1]+0x000000CCu,c->r[0]); // 800C6788
  W32(c->r[1]+0x00000078u,c->r[21]); // 800C678C
  W32(c->r[1]+0x0000007Cu,c->r[22]); // 800C6790
  W32(c->r[1]+0x00000080u,c->r[23]); // 800C6794
  W32(c->r[1]+0x00000084u,c->r[24]); // 800C6798
  W32(c->r[1]+0x00000088u,c->r[25]); // 800C679C
  W32(c->r[1]+0x0000008Cu,c->r[26]); // 800C67A0
  W32(c->r[1]+0x00000090u,c->r[31]); // 800C67A4
  W32(c->r[1]+0x00000094u,c->r[30]); // 800C67A8
  W32(c->r[1]+0x00000098u,c->r[29]); // 800C67AC
  W32(c->r[1]+0x0000009Cu,c->r[28]); // 800C67B0
  W16(c->r[1]+0x000000A0u,c->r[27]); // 800C67B4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800C67B8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800C67BC
  goto L_800C6828; // 800C67C0
L_800C67C4:;
  c->r[12]=R32(c->r[1]+0x00000078u); // 800C67C4
  c->r[11]=R32(c->r[1]+0x0000007Cu); // 800C67C8
  c->r[10]=R32(c->r[1]+0x00000080u); // 800C67CC
  c->r[9]=R32(c->r[1]+0x00000084u); // 800C67D0
  c->r[8]=R32(c->r[1]+0x00000088u); // 800C67D4
  c->r[7]=R32(c->r[1]+0x0000008Cu); // 800C67D8
  c->r[6]=R32(c->r[1]+0x00000090u); // 800C67DC
  c->r[5]=R32(c->r[1]+0x00000094u); // 800C67E0
  c->r[4]=R32(c->r[1]+0x00000098u); // 800C67E4
  c->r[3]=R32(c->r[1]+0x0000009Cu); // 800C67E8
  c->r[0]=R16(c->r[1]+0x000000A0u); // 800C67EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 800C67F0
  W32(c->r[1]+0x000000A4u,c->r[12]); // 800C67F4
  W32(c->r[1]+0x000000A8u,c->r[11]); // 800C67F8
  W32(c->r[1]+0x000000ACu,c->r[10]); // 800C67FC
  W32(c->r[1]+0x000000B0u,c->r[9]); // 800C6800
  W32(c->r[1]+0x000000B4u,c->r[8]); // 800C6804
  W32(c->r[1]+0x000000B8u,c->r[7]); // 800C6808
  W32(c->r[1]+0x000000BCu,c->r[6]); // 800C680C
  W32(c->r[1]+0x000000C0u,c->r[5]); // 800C6810
  W32(c->r[1]+0x000000C4u,c->r[4]); // 800C6814
  W32(c->r[1]+0x000000C8u,c->r[3]); // 800C6818
  W16(c->r[1]+0x000000CCu,c->r[0]); // 800C681C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800C6820
  IRQCHK(c); goto L_800C6644; // 800C6824
L_800C6828:;
  c->r[3]=c->r[1]+0x0000004Cu; // 800C6828
  c->r[4]=c->r[1]+0x000000FCu; // 800C682C
  c->r[5]=c->r[1]+0x000000A4u; // 800C6830
  c->lr=0x800C6838u; f_800C58F8(c); // 800C6834
  c->r[3]=c->r[1]+0x00000020u; // 800C6838
  c->r[4]=c->r[1]+0x00000078u; // 800C683C
  c->r[5]=c->r[1]+0x000000FCu; // 800C6840
  c->lr=0x800C6848u; f_800C58F8(c); // 800C6844
  c->r[3]=c->r[1]+0x0000004Cu; // 800C6848
  c->r[4]=c->r[1]+0x00000020u; // 800C684C
  c->lr=0x800C6854u; f_800C5714(c); // 800C6850
  cmps(c,0,(int32_t)c->r[3],0); // 800C6854
  if (crb(c,2)) { goto L_800C6874; } // 800C6858
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C685C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800C6860
  if (crb(c,2)) { goto L_800C6890; } // 800C6864
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 800C6868
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800C686C
  goto L_800C6890; // 800C6870
L_800C6874:;
  c->r[3]=c->r[1]+0x0000004Cu; // 800C6874
  c->r[4]=c->r[1]+0x00000020u; // 800C6878
  c->lr=0x800C6880u; f_800C57F8(c); // 800C687C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6880
  if (!crb(c,2)) { goto L_800C6890; } // 800C6884
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 800C6888
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800C688C
L_800C6890:;
  c->r[0]=R8(c->r[1]+0x000000FCu); // 800C6890
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C6894
  if (crb(c,2)) { goto L_800C68A4; } // 800C6898
  c->f[31]=-c->f[31]; // 800C689C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800C68A0
L_800C68A4:;
  c->f[1]=c->f[31]; // 800C68A4
L_800C68A8:;
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,31,ea,0,0);} // 800C68A8
  c->r[11]=c->r[1]+0x00000170u; // 800C68AC
  {uint32_t ea=c->r[1]+0x00000170u; c->f[31]=RF64(ea);} // 800C68B0
  c->lr=0x800C68B8u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800C68B4
  c->r[0]=R32(c->r[1]+0x00000184u); // 800C68B8
  c->lr=c->r[0]; // 800C68BC
  c->r[1]=c->r[1]+0x00000180u; // 800C68C0
  return; // 800C68C4
}

// fn_800C68C8
void f_800C68C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C68C8
  c->r[0]=c->lr; // 800C68CC
  cmps(c,0,(int32_t)c->r[3],0); // 800C68D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C68D4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C68D8
  c->r[24]=c->r[3]|c->r[3]; // 800C68DC
  c->r[25]=c->r[4]|c->r[4]; // 800C68E0
  c->r[28]=c->r[5]|c->r[5]; // 800C68E4
  c->r[26]=c->r[6]|c->r[6]; // 800C68E8
  c->r[27]=c->r[7]|c->r[7]; // 800C68EC
  if (crb(c,2)) { goto L_800C6914; } // 800C68F0
  cmps(c,0,(int32_t)c->r[4],0); // 800C68F4
  if (crb(c,2)) { goto L_800C6914; } // 800C68F8
  cmps(c,0,(int32_t)c->r[5],0); // 800C68FC
  if (crb(c,2)) { goto L_800C6914; } // 800C6900
  cmps(c,0,(int32_t)c->r[6],0); // 800C6904
  if (crb(c,2)) { goto L_800C6914; } // 800C6908
  cmps(c,0,(int32_t)c->r[7],0); // 800C690C
  if (!crb(c,2)) { goto L_800C691C; } // 800C6910
L_800C6914:;
  c->r[3]=0u+0x00000000u; // 800C6914
  goto L_800C69A4; // 800C6918
L_800C691C:;
  c->r[12]=c->r[27]|c->r[27]; // 800C691C
  c->ctr=c->r[12]; // 800C6920
  if (true) { c->lr=0x800C6928u; dispatch(c,c->ctr); } // 800C6924
  cmps(c,0,(int32_t)c->r[3],0); // 800C6928
  if (!crb(c,2)) { goto L_800C6938; } // 800C692C
  c->r[3]=c->r[25]|c->r[25]; // 800C6930
  goto L_800C69A4; // 800C6934
L_800C6938:;
  if (!crb(c,0)) { goto L_800C6944; } // 800C6938
  c->r[3]=0u+0x00000000u; // 800C693C
  goto L_800C69A4; // 800C6940
L_800C6944:;
  c->r[29]=c->r[28]+0xFFFFFFFFu; // 800C6944
  c->r[30]=0u+0x00000001u; // 800C6948
  goto L_800C6998; // 800C694C
L_800C6950:;
  c->r[0]=c->r[30]+c->r[29]; // 800C6950
  c->r[12]=c->r[27]|c->r[27]; // 800C6954
  c->r[28]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800C6958
  c->r[3]=c->r[24]|c->r[24]; // 800C695C
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[28]); // 800C6960
  c->r[31]=c->r[25]+c->r[0]; // 800C6964
  c->r[4]=c->r[31]|c->r[31]; // 800C6968
  c->ctr=c->r[12]; // 800C696C
  if (true) { c->lr=0x800C6974u; dispatch(c,c->ctr); } // 800C6970
  cmps(c,0,(int32_t)c->r[3],0); // 800C6974
  if (!crb(c,2)) { goto L_800C6984; } // 800C6978
  c->r[3]=c->r[31]|c->r[31]; // 800C697C
  goto L_800C69A4; // 800C6980
L_800C6984:;
  if (!crb(c,0)) { goto L_800C698C; } // 800C6984
  c->r[29]=c->r[28]+0xFFFFFFFFu; // 800C6988
L_800C698C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800C698C
  if (crb(c,0)) { goto L_800C6998; } // 800C6990
  c->r[30]=c->r[28]+0x00000001u; // 800C6994
L_800C6998:;
  cmpu(c,0,c->r[30],c->r[29]); // 800C6998
  if (!crb(c,1)) { IRQCHK(c); goto L_800C6950; } // 800C699C
  c->r[3]=0u+0x00000000u; // 800C69A0
L_800C69A4:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C69A4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C69A8
  c->lr=c->r[0]; // 800C69AC
  c->r[1]=c->r[1]+0x00000030u; // 800C69B0
  return; // 800C69B4
}

// __prep_buffer
void f_800C69B8(Ctx* __restrict c) {
  trace_call(0x800C69B8u);
  c->r[4]=R32(c->r[3]+0x00000018u); // 800C69B8
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800C69BC
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 800C69C0
  c->r[5]=R32(c->r[3]+0x00000020u); // 800C69C4
  c->r[0]=c->r[4]&c->r[0]; // 800C69C8
  W32(c->r[3]+0x00000024u,c->r[6]); // 800C69CC
  c->r[0]=c->r[5]-c->r[0]; // 800C69D0
  W32(c->r[3]+0x00000028u,c->r[0]); // 800C69D4
  W32(c->r[3]+0x00000034u,c->r[4]); // 800C69D8
  return; // 800C69DC
}

// fn_800C69E0
void f_800C69E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C69E0
  c->r[0]=c->lr; // 800C69E4
  cmps(c,0,(int32_t)c->r[5],1); // 800C69E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C69EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C69F0
  c->r[31]=c->r[3]|c->r[3]; // 800C69F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C69F8
  c->r[30]=c->r[4]|c->r[4]; // 800C69FC
  c->r[6]=R32(c->r[3]+0x00000018u); // 800C6A00
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 800C6A04
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 800C6A08
  c->r[4]=R32(c->r[3]+0x00000020u); // 800C6A0C
  c->r[0]=c->r[6]&c->r[0]; // 800C6A10
  W32(c->r[3]+0x00000024u,c->r[5]); // 800C6A14
  c->r[0]=c->r[4]-c->r[0]; // 800C6A18
  W32(c->r[3]+0x00000028u,c->r[0]); // 800C6A1C
  W32(c->r[3]+0x00000034u,c->r[6]); // 800C6A20
  if (!crb(c,2)) { goto L_800C6A2C; } // 800C6A24
  W32(c->r[3]+0x00000028u,c->r[4]); // 800C6A28
L_800C6A2C:;
  c->r[12]=R32(c->r[31]+0x0000003Cu); // 800C6A2C
  c->r[5]=c->r[31]+0x00000028u; // 800C6A30
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C6A34
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800C6A38
  c->r[6]=R32(c->r[31]+0x00000048u); // 800C6A3C
  c->ctr=c->r[12]; // 800C6A40
  if (true) { c->lr=0x800C6A48u; dispatch(c,c->ctr); } // 800C6A44
  cmps(c,0,(int32_t)c->r[3],2); // 800C6A48
  if (!crb(c,2)) { goto L_800C6A58; } // 800C6A4C
  c->r[0]=0u+0x00000000u; // 800C6A50
  W32(c->r[31]+0x00000028u,c->r[0]); // 800C6A54
L_800C6A58:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C6A58
  if (crb(c,2)) { goto L_800C6A68; } // 800C6A5C
  c->r[0]=R32(c->r[31]+0x00000028u); // 800C6A60
  W32(c->r[30]+0x00000000u,c->r[0]); // 800C6A64
L_800C6A68:;
  cmps(c,0,(int32_t)c->r[3],0); // 800C6A68
  if (crb(c,2)) { goto L_800C6A74; } // 800C6A6C
  goto L_800C6AC4; // 800C6A70
L_800C6A74:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 800C6A74
  c->r[4]=R32(c->r[31]+0x00000018u); // 800C6A78
  c->r[3]=R32(c->r[31]+0x00000028u); // 800C6A7C
  c->r[0]=rotl(c->r[0],13)&0x00000001u; cr0(c,c->r[0]); // 800C6A80
  c->r[0]=c->r[4]+c->r[3]; // 800C6A84
  W32(c->r[31]+0x00000018u,c->r[0]); // 800C6A88
  if (!crb(c,2)) { goto L_800C6AC0; } // 800C6A8C
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 800C6A90
  c->ctr=c->r[3]; // 800C6A94
  cmps(c,0,(int32_t)c->r[3],0); // 800C6A98
  if (crb(c,2)) { goto L_800C6AC0; } // 800C6A9C
L_800C6AA0:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800C6AA0
  c->r[4]=c->r[4]+0x00000001u; // 800C6AA4
  cmpu(c,0,c->r[0],0x0000000Au); // 800C6AA8
  if (!crb(c,2)) { goto L_800C6ABC; } // 800C6AAC
  c->r[3]=R32(c->r[31]+0x00000018u); // 800C6AB0
  c->r[0]=c->r[3]+0x00000001u; // 800C6AB4
  W32(c->r[31]+0x00000018u,c->r[0]); // 800C6AB8
L_800C6ABC:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C6AA0; } // 800C6ABC
L_800C6AC0:;
  c->r[3]=0u+0x00000000u; // 800C6AC0
L_800C6AC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6AC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C6AC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C6ACC
  c->lr=c->r[0]; // 800C6AD0
  c->r[1]=c->r[1]+0x00000010u; // 800C6AD4
  return; // 800C6AD8
}

// __flush_buffer
void f_800C6ADC(Ctx* __restrict c) {
  trace_call(0x800C6ADCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6ADC
  c->r[0]=c->lr; // 800C6AE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C6AE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C6AE8
  c->r[31]=c->r[4]|c->r[4]; // 800C6AEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C6AF0
  c->r[30]=c->r[3]|c->r[3]; // 800C6AF4
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 800C6AF8
  c->r[0]=R32(c->r[3]+0x00000024u); // 800C6AFC
  c->r[0]=c->r[0]-c->r[5]; cr0(c,c->r[0]); // 800C6B00
  if (crb(c,2)) { goto L_800C6B54; } // 800C6B04
  c->r[12]=R32(c->r[30]+0x00000040u); // 800C6B08
  c->r[4]=c->r[5]|c->r[5]; // 800C6B0C
  W32(c->r[3]+0x00000028u,c->r[0]); // 800C6B10
  c->r[5]=c->r[30]+0x00000028u; // 800C6B14
  c->r[3]=R32(c->r[3]+0x00000000u); // 800C6B18
  c->r[6]=R32(c->r[30]+0x00000048u); // 800C6B1C
  c->ctr=c->r[12]; // 800C6B20
  if (true) { c->lr=0x800C6B28u; dispatch(c,c->ctr); } // 800C6B24
  cmps(c,0,(int32_t)c->r[31],0); // 800C6B28
  if (crb(c,2)) { goto L_800C6B38; } // 800C6B2C
  c->r[0]=R32(c->r[30]+0x00000028u); // 800C6B30
  W32(c->r[31]+0x00000000u,c->r[0]); // 800C6B34
L_800C6B38:;
  cmps(c,0,(int32_t)c->r[3],0); // 800C6B38
  if (crb(c,2)) { goto L_800C6B44; } // 800C6B3C
  goto L_800C6B7C; // 800C6B40
L_800C6B44:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 800C6B44
  c->r[0]=R32(c->r[30]+0x00000028u); // 800C6B48
  c->r[0]=c->r[3]+c->r[0]; // 800C6B4C
  W32(c->r[30]+0x00000018u,c->r[0]); // 800C6B50
L_800C6B54:;
  c->r[4]=R32(c->r[30]+0x00000018u); // 800C6B54
  c->r[3]=0u+0x00000000u; // 800C6B58
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 800C6B5C
  c->r[6]=R32(c->r[30]+0x0000001Cu); // 800C6B60
  c->r[5]=R32(c->r[30]+0x00000020u); // 800C6B64
  c->r[0]=c->r[4]&c->r[0]; // 800C6B68
  W32(c->r[30]+0x00000024u,c->r[6]); // 800C6B6C
  c->r[0]=c->r[5]-c->r[0]; // 800C6B70
  W32(c->r[30]+0x00000028u,c->r[0]); // 800C6B74
  W32(c->r[30]+0x00000034u,c->r[4]); // 800C6B78
L_800C6B7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C6B7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C6B80
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C6B84
  c->lr=c->r[0]; // 800C6B88
  c->r[1]=c->r[1]+0x00000010u; // 800C6B8C
  return; // 800C6B90
}

// fn_800C6B94
void f_800C6B94(Ctx* __restrict c) {
  f_800C6B98(c); return; // 800C6B94
}

// fn_800C6B98
void f_800C6B98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6B98
  c->r[0]=c->lr; // 800C6B9C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C6BA0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C6BA4
  c->r[27]=c->r[4]|c->r[4]; // 800C6BA8
  c->r[28]=c->r[6]|c->r[6]; // 800C6BAC
  c->r[26]=c->r[3]|c->r[3]; // 800C6BB0
  c->r[25]=c->r[5]|c->r[5]; // 800C6BB4
  c->r[4]=0u+0x00000000u; // 800C6BB8
  c->r[3]=c->r[28]|c->r[28]; // 800C6BBC
  c->lr=0x800C6BC4u; f_800D02F0(c); // 800C6BC0
  cmps(c,0,(int32_t)c->r[3],0); // 800C6BC4
  if (!crb(c,2)) { goto L_800C6BD8; } // 800C6BC8
  c->r[3]=c->r[28]|c->r[28]; // 800C6BCC
  c->r[4]=0u+0xFFFFFFFFu; // 800C6BD0
  c->lr=0x800C6BD8u; f_800D02F0(c); // 800C6BD4
L_800C6BD8:;
  c->r[30]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[25]); cr0(c,c->r[30]); // 800C6BD8
  if (crb(c,2)) { goto L_800C6BF8; } // 800C6BDC
  c->r[0]=R8(c->r[28]+0x0000000Au); // 800C6BE0
  cmps(c,0,(int32_t)c->r[0],0); // 800C6BE4
  if (!crb(c,2)) { goto L_800C6BF8; } // 800C6BE8
  c->r[3]=R32(c->r[28]+0x00000004u); // 800C6BEC
  c->r[0]=rotl(c->r[3],10)&0x00000007u; cr0(c,c->r[0]); // 800C6BF0
  if (!crb(c,2)) { goto L_800C6C00; } // 800C6BF4
L_800C6BF8:;
  c->r[3]=0u+0x00000000u; // 800C6BF8
  goto L_800C6EC4; // 800C6BFC
L_800C6C00:;
  c->r[0]=rotl(c->r[3],13)&0x00000001u; cr0(c,c->r[0]); // 800C6C00
  c->r[31]=0u+0x00000001u; // 800C6C04
  if (crb(c,2)) { goto L_800C6C1C; } // 800C6C08
  c->r[0]=rotl(c->r[3],7)&0x00000003u; // 800C6C0C
  cmpu(c,0,c->r[0],0x00000002u); // 800C6C10
  if (crb(c,2)) { goto L_800C6C1C; } // 800C6C14
  c->r[31]=0u+0x00000000u; // 800C6C18
L_800C6C1C:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 800C6C1C
  c->r[0]=rotl(c->r[3],3)&0x00000007u; cr0(c,c->r[0]); // 800C6C20
  if (!crb(c,2)) { goto L_800C6C48; } // 800C6C24
  c->r[0]=R32(c->r[28]+0x00000004u); // 800C6C28
  c->r[0]=rotl(c->r[0],5)&0x00000001u; cr0(c,c->r[0]); // 800C6C2C
  if (crb(c,2)) { goto L_800C6C48; } // 800C6C30
  c->r[0]=0u+0x00000002u; // 800C6C34
  c->r[3]=(rotl(c->r[0],29)&0xE0000000u)|(c->r[3]&~0xE0000000u); // 800C6C38
  c->r[0]=0u+0x00000000u; // 800C6C3C
  W32(c->r[28]+0x00000008u,c->r[3]); // 800C6C40
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C6C44
L_800C6C48:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800C6C48
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 800C6C4C
  cmpu(c,0,c->r[0],0x00000002u); // 800C6C50
  if (!crb(c,0)) { goto L_800C6C70; } // 800C6C54
  c->r[3]=0u+0x00000001u; // 800C6C58
  c->r[0]=0u+0x00000000u; // 800C6C5C
  W8(c->r[28]+0x0000000Au,c->r[3]); // 800C6C60
  c->r[3]=0u+0x00000000u; // 800C6C64
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C6C68
  goto L_800C6EC4; // 800C6C6C
L_800C6C70:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 800C6C70
  c->r[0]=rotl(c->r[0],7)&0x00000001u; cr0(c,c->r[0]); // 800C6C74
  if (crb(c,2)) { goto L_800C6CA0; } // 800C6C78
  c->lr=0x800C6C80u; f_800C4E68(c); // 800C6C7C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6C80
  if (crb(c,2)) { goto L_800C6CA0; } // 800C6C84
  c->r[3]=0u+0x00000001u; // 800C6C88
  c->r[0]=0u+0x00000000u; // 800C6C8C
  W8(c->r[28]+0x0000000Au,c->r[3]); // 800C6C90
  c->r[3]=0u+0x00000000u; // 800C6C94
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C6C98
  goto L_800C6EC4; // 800C6C9C
L_800C6CA0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C6CA0
  c->r[29]=0u+0x00000000u; // 800C6CA4
  if (crb(c,2)) { goto L_800C6D54; } // 800C6CA8
  c->r[0]=R32(c->r[28]+0x00000008u); // 800C6CAC
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 800C6CB0
  cmpu(c,0,c->r[0],0x00000003u); // 800C6CB4
  if (crb(c,0)) { goto L_800C6D54; } // 800C6CB8
L_800C6CBC:;
  c->r[3]=c->r[28]|c->r[28]; // 800C6CBC
  c->r[4]=0u+0x00000000u; // 800C6CC0
  c->lr=0x800C6CC8u; f_800D02F0(c); // 800C6CC4
  cmps(c,0,(int32_t)c->r[3],1); // 800C6CC8
  if (!crb(c,2)) { goto L_800C6CF4; } // 800C6CCC
  c->r[0]=R32(c->r[28]+0x00000008u); // 800C6CD0
  c->r[29]=c->r[29]+0x00000002u; // 800C6CD4
  c->r[30]=c->r[30]+0xFFFFFFFEu; // 800C6CD8
  c->r[0]=rotl(c->r[0],4)&0x0000000Eu; // 800C6CDC
  c->r[3]=c->r[28]+c->r[0]; // 800C6CE0
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 800C6CE4
  W16(c->r[26]+0x00000000u,c->r[0]); // 800C6CE8
  c->r[26]=c->r[26]+0x00000002u; // 800C6CEC
  goto L_800C6D14; // 800C6CF0
L_800C6CF4:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800C6CF4
  c->r[29]=c->r[29]+0x00000001u; // 800C6CF8
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800C6CFC
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 800C6D00
  c->r[3]=c->r[28]+c->r[0]; // 800C6D04
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800C6D08
  W8(c->r[26]+0x00000000u,c->r[0]); // 800C6D0C
  c->r[26]=c->r[26]+0x00000001u; // 800C6D10
L_800C6D14:;
  c->r[4]=R32(c->r[28]+0x00000008u); // 800C6D14
  cmps(c,0,(int32_t)c->r[30],0); // 800C6D18
  c->r[3]=rotl(c->r[4],3)&0x00000007u; // 800C6D1C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C6D20
  c->r[4]=(rotl(c->r[0],29)&0xE0000000u)|(c->r[4]&~0xE0000000u); // 800C6D24
  W32(c->r[28]+0x00000008u,c->r[4]); // 800C6D28
  if (crb(c,2)) { goto L_800C6D3C; } // 800C6D2C
  c->r[0]=rotl(c->r[4],3)&0x00000007u; // 800C6D30
  cmpu(c,0,c->r[0],0x00000003u); // 800C6D34
  if (!crb(c,0)) { IRQCHK(c); goto L_800C6CBC; } // 800C6D38
L_800C6D3C:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800C6D3C
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 800C6D40
  cmpu(c,0,c->r[0],0x00000002u); // 800C6D44
  if (!crb(c,2)) { goto L_800C6D54; } // 800C6D48
  c->r[0]=R32(c->r[28]+0x00000030u); // 800C6D4C
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C6D50
L_800C6D54:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C6D54
  if (crb(c,2)) { goto L_800C6E30; } // 800C6D58
  c->r[0]=R32(c->r[28]+0x00000028u); // 800C6D5C
  cmps(c,0,(int32_t)c->r[0],0); // 800C6D60
  if (!crb(c,2)) { goto L_800C6D70; } // 800C6D64
  cmps(c,0,(int32_t)c->r[31],0); // 800C6D68
  if (crb(c,2)) { goto L_800C6E30; } // 800C6D6C
L_800C6D70:;
  c->r[0]=R32(c->r[28]+0x00000028u); // 800C6D70
  cmps(c,0,(int32_t)c->r[0],0); // 800C6D74
  if (!crb(c,2)) { goto L_800C6DD4; } // 800C6D78
  c->r[3]=c->r[28]|c->r[28]; // 800C6D7C
  c->r[4]=0u+0x00000000u; // 800C6D80
  c->r[5]=0u+0x00000000u; // 800C6D84
  c->lr=0x800C6D8Cu; f_800C69E0(c); // 800C6D88
  cmps(c,0,(int32_t)c->r[3],0); // 800C6D8C
  if (crb(c,2)) { goto L_800C6DD4; } // 800C6D90
  cmps(c,0,(int32_t)c->r[3],1); // 800C6D94
  if (!crb(c,2)) { goto L_800C6DB0; } // 800C6D98
  c->r[3]=0u+0x00000001u; // 800C6D9C
  c->r[0]=0u+0x00000000u; // 800C6DA0
  W8(c->r[28]+0x0000000Au,c->r[3]); // 800C6DA4
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C6DA8
  goto L_800C6DCC; // 800C6DAC
L_800C6DB0:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 800C6DB0
  c->r[4]=0u+0x00000000u; // 800C6DB4
  c->r[0]=0u+0x00000001u; // 800C6DB8
  W32(c->r[28]+0x00000028u,c->r[4]); // 800C6DBC
  c->r[3]=rotl(c->r[3],0)&0x1FFFFFFFu; // 800C6DC0
  W32(c->r[28]+0x00000008u,c->r[3]); // 800C6DC4
  W8(c->r[28]+0x00000009u,c->r[0]); // 800C6DC8
L_800C6DCC:;
  c->r[30]=0u+0x00000000u; // 800C6DCC
  goto L_800C6E30; // 800C6DD0
L_800C6DD4:;
  c->r[5]=R32(c->r[28]+0x00000028u); // 800C6DD4
  cmpu(c,0,c->r[5],c->r[30]); // 800C6DD8
  W32(c->r[1]+0x00000008u,c->r[5]); // 800C6DDC
  if (!crb(c,1)) { goto L_800C6DEC; } // 800C6DE0
  c->r[5]=c->r[30]|c->r[30]; // 800C6DE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C6DE8
L_800C6DEC:;
  c->r[4]=R32(c->r[28]+0x00000024u); // 800C6DEC
  c->r[3]=c->r[26]|c->r[26]; // 800C6DF0
  c->lr=0x800C6DF8u; f_80004338(c); // 800C6DF4
  c->r[4]=R32(c->r[1]+0x00000008u); // 800C6DF8
  c->r[3]=R32(c->r[28]+0x00000024u); // 800C6DFC
  c->r[0]=R32(c->r[28]+0x00000028u); // 800C6E00
  c->r[30]=c->r[30]-c->r[4]; cr0(c,c->r[30]); // 800C6E04
  c->r[3]=c->r[3]+c->r[4]; // 800C6E08
  c->r[26]=c->r[26]+c->r[4]; // 800C6E0C
  W32(c->r[28]+0x00000024u,c->r[3]); // 800C6E10
  c->r[29]=c->r[29]+c->r[4]; // 800C6E14
  c->r[3]=R32(c->r[1]+0x00000008u); // 800C6E18
  c->r[0]=c->r[0]-c->r[3]; // 800C6E1C
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C6E20
  if (crb(c,2)) { goto L_800C6E30; } // 800C6E24
  cmps(c,0,(int32_t)c->r[31],0); // 800C6E28
  if (!crb(c,2)) { IRQCHK(c); goto L_800C6D70; } // 800C6E2C
L_800C6E30:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C6E30
  if (crb(c,2)) { goto L_800C6EC0; } // 800C6E34
  cmps(c,0,(int32_t)c->r[31],0); // 800C6E38
  if (!crb(c,2)) { goto L_800C6EC0; } // 800C6E3C
  c->r[31]=R32(c->r[28]+0x0000001Cu); // 800C6E40
  c->r[3]=c->r[28]|c->r[28]; // 800C6E44
  c->r[25]=R32(c->r[28]+0x00000020u); // 800C6E48
  c->r[4]=c->r[1]+0x00000008u; // 800C6E4C
  W32(c->r[28]+0x0000001Cu,c->r[26]); // 800C6E50
  c->r[5]=0u+0x00000001u; // 800C6E54
  W32(c->r[28]+0x00000020u,c->r[30]); // 800C6E58
  c->lr=0x800C6E60u; f_800C69E0(c); // 800C6E5C
  cmps(c,0,(int32_t)c->r[3],0); // 800C6E60
  if (crb(c,2)) { goto L_800C6EA0; } // 800C6E64
  cmps(c,0,(int32_t)c->r[3],1); // 800C6E68
  if (!crb(c,2)) { goto L_800C6E84; } // 800C6E6C
  c->r[3]=0u+0x00000001u; // 800C6E70
  c->r[0]=0u+0x00000000u; // 800C6E74
  W8(c->r[28]+0x0000000Au,c->r[3]); // 800C6E78
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C6E7C
  goto L_800C6EA0; // 800C6E80
L_800C6E84:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 800C6E84
  c->r[4]=0u+0x00000000u; // 800C6E88
  c->r[0]=0u+0x00000001u; // 800C6E8C
  W32(c->r[28]+0x00000028u,c->r[4]); // 800C6E90
  c->r[3]=rotl(c->r[3],0)&0x1FFFFFFFu; // 800C6E94
  W32(c->r[28]+0x00000008u,c->r[3]); // 800C6E98
  W8(c->r[28]+0x00000009u,c->r[0]); // 800C6E9C
L_800C6EA0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C6EA0
  c->r[3]=c->r[28]|c->r[28]; // 800C6EA4
  W32(c->r[28]+0x0000001Cu,c->r[31]); // 800C6EA8
  c->r[29]=c->r[29]+c->r[0]; // 800C6EAC
  W32(c->r[28]+0x00000020u,c->r[25]); // 800C6EB0
  c->lr=0x800C6EB8u; f_800C69B8(c); // 800C6EB4
  c->r[0]=0u+0x00000000u; // 800C6EB8
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C6EBC
L_800C6EC0:;
  c->r[3]=divwu(c->r[29],c->r[27]); // 800C6EC0
L_800C6EC4:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C6EC4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C6EC8
  c->lr=c->r[0]; // 800C6ECC
  c->r[1]=c->r[1]+0x00000030u; // 800C6ED0
  return; // 800C6ED4
}

// __fwrite
void f_800C6ED8(Ctx* __restrict c) {
  trace_call(0x800C6ED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C6ED8
  c->r[0]=c->lr; // 800C6EDC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C6EE0
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C6EE4
  c->r[27]=c->r[4]|c->r[4]; // 800C6EE8
  c->r[28]=c->r[6]|c->r[6]; // 800C6EEC
  c->r[26]=c->r[3]|c->r[3]; // 800C6EF0
  c->r[25]=c->r[5]|c->r[5]; // 800C6EF4
  c->r[4]=0u+0x00000000u; // 800C6EF8
  c->r[3]=c->r[28]|c->r[28]; // 800C6EFC
  c->lr=0x800C6F04u; f_800D02F0(c); // 800C6F00
  cmps(c,0,(int32_t)c->r[3],0); // 800C6F04
  if (!crb(c,2)) { goto L_800C6F18; } // 800C6F08
  c->r[3]=c->r[28]|c->r[28]; // 800C6F0C
  c->r[4]=0u+0xFFFFFFFFu; // 800C6F10
  c->lr=0x800C6F18u; f_800D02F0(c); // 800C6F14
L_800C6F18:;
  c->r[30]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[25]); cr0(c,c->r[30]); // 800C6F18
  if (crb(c,2)) { goto L_800C6F38; } // 800C6F1C
  c->r[0]=R8(c->r[28]+0x0000000Au); // 800C6F20
  cmps(c,0,(int32_t)c->r[0],0); // 800C6F24
  if (!crb(c,2)) { goto L_800C6F38; } // 800C6F28
  c->r[0]=R32(c->r[28]+0x00000004u); // 800C6F2C
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 800C6F30
  if (!crb(c,2)) { goto L_800C6F40; } // 800C6F34
L_800C6F38:;
  c->r[3]=0u+0x00000000u; // 800C6F38
  goto L_800C71CC; // 800C6F3C
L_800C6F40:;
  cmpu(c,0,c->r[0],0x00000002u); // 800C6F40
  if (!crb(c,2)) { goto L_800C6F4C; } // 800C6F44
  c->lr=0x800C6F4Cu; f_800C7F0C(c); // 800C6F48
L_800C6F4C:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 800C6F4C
  c->r[31]=0u+0x00000001u; // 800C6F50
  c->r[4]=0u+0x00000000u; // 800C6F54
  c->r[0]=rotl(c->r[3],13)&0x00000001u; cr0(c,c->r[0]); // 800C6F58
  if (crb(c,2)) { goto L_800C6F6C; } // 800C6F5C
  c->r[0]=rotl(c->r[3],7)&0x00000003u; // 800C6F60
  cmpu(c,0,c->r[0],0x00000002u); // 800C6F64
  if (!crb(c,2)) { goto L_800C6F70; } // 800C6F68
L_800C6F6C:;
  c->r[4]=0u+0x00000001u; // 800C6F6C
L_800C6F70:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C6F70
  if (!crb(c,2)) { goto L_800C6F8C; } // 800C6F74
  c->r[0]=R32(c->r[28]+0x00000004u); // 800C6F78
  c->r[0]=rotl(c->r[0],7)&0x00000003u; // 800C6F7C
  cmpu(c,0,c->r[0],0x00000001u); // 800C6F80
  if (crb(c,2)) { goto L_800C6F8C; } // 800C6F84
  c->r[31]=0u+0x00000000u; // 800C6F88
L_800C6F8C:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800C6F8C
  c->r[0]=rotl(c->r[0],3)&0x00000007u; cr0(c,c->r[0]); // 800C6F90
  if (!crb(c,2)) { goto L_800C6FE8; } // 800C6F94
  c->r[3]=R32(c->r[28]+0x00000004u); // 800C6F98
  c->r[0]=rotl(c->r[3],5)&0x00000002u; cr0(c,c->r[0]); // 800C6F9C
  c->r[0]=rotl(c->r[3],5)&0x00000007u; // 800C6FA0
  if (crb(c,2)) { goto L_800C6FE8; } // 800C6FA4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800C6FA8
  if (crb(c,2)) { goto L_800C6FD0; } // 800C6FAC
  c->r[3]=c->r[28]|c->r[28]; // 800C6FB0
  c->r[4]=0u+0x00000000u; // 800C6FB4
  c->r[5]=0u+0x00000002u; // 800C6FB8
  c->lr=0x800C6FC0u; f_800C762C(c); // 800C6FBC
  cmps(c,0,(int32_t)c->r[3],0); // 800C6FC0
  if (crb(c,2)) { goto L_800C6FD0; } // 800C6FC4
  c->r[3]=0u+0x00000000u; // 800C6FC8
  goto L_800C71CC; // 800C6FCC
L_800C6FD0:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800C6FD0
  c->r[3]=0u+0x00000001u; // 800C6FD4
  c->r[0]=(rotl(c->r[3],29)&0xE0000000u)|(c->r[0]&~0xE0000000u); // 800C6FD8
  W32(c->r[28]+0x00000008u,c->r[0]); // 800C6FDC
  c->r[3]=c->r[28]|c->r[28]; // 800C6FE0
  c->lr=0x800C6FE8u; f_800C69B8(c); // 800C6FE4
L_800C6FE8:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 800C6FE8
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 800C6FEC
  cmpu(c,0,c->r[0],0x00000001u); // 800C6FF0
  if (crb(c,2)) { goto L_800C7010; } // 800C6FF4
  c->r[3]=0u+0x00000001u; // 800C6FF8
  c->r[0]=0u+0x00000000u; // 800C6FFC
  W8(c->r[28]+0x0000000Au,c->r[3]); // 800C7000
  c->r[3]=0u+0x00000000u; // 800C7004
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C7008
  goto L_800C71CC; // 800C700C
L_800C7010:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C7010
  c->r[29]=0u+0x00000000u; // 800C7014
  if (crb(c,2)) { goto L_800C7140; } // 800C7018
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 800C701C
  c->r[4]=R32(c->r[28]+0x00000024u); // 800C7020
  cmpu(c,0,c->r[4],c->r[3]); // 800C7024
  if (!crb(c,2)) { goto L_800C7034; } // 800C7028
  cmps(c,0,(int32_t)c->r[31],0); // 800C702C
  if (crb(c,2)) { goto L_800C7140; } // 800C7030
L_800C7034:;
  c->r[0]=R32(c->r[28]+0x00000020u); // 800C7034
  c->r[3]=c->r[4]-c->r[3]; // 800C7038
  c->r[0]=c->r[0]-c->r[3]; // 800C703C
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C7040
L_800C7044:;
  c->r[5]=R32(c->r[28]+0x00000028u); // 800C7044
  c->r[25]=0u+0x00000000u; // 800C7048
  cmpu(c,0,c->r[5],c->r[30]); // 800C704C
  W32(c->r[1]+0x00000008u,c->r[5]); // 800C7050
  if (!crb(c,1)) { goto L_800C7060; } // 800C7054
  c->r[5]=c->r[30]|c->r[30]; // 800C7058
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C705C
L_800C7060:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 800C7060
  c->r[0]=rotl(c->r[0],7)&0x00000003u; // 800C7064
  cmpu(c,0,c->r[0],0x00000001u); // 800C7068
  if (!crb(c,2)) { goto L_800C709C; } // 800C706C
  cmps(c,0,(int32_t)c->r[5],0); // 800C7070
  if (crb(c,2)) { goto L_800C709C; } // 800C7074
  c->r[3]=c->r[26]|c->r[26]; // 800C7078
  c->r[4]=0u+0x0000000Au; // 800C707C
  c->lr=0x800C7084u; f_800C7B2C(c); // 800C7080
  cmps(c,0,(int32_t)c->r[3],0); // 800C7084
  c->r[25]=c->r[3]|c->r[3]; // 800C7088
  if (crb(c,2)) { goto L_800C709C; } // 800C708C
  c->r[0]=c->r[3]+0x00000001u; // 800C7090
  c->r[5]=c->r[0]-c->r[26]; // 800C7094
  W32(c->r[1]+0x00000008u,c->r[5]); // 800C7098
L_800C709C:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 800C709C
  cmps(c,0,(int32_t)c->r[5],0); // 800C70A0
  if (crb(c,2)) { goto L_800C70DC; } // 800C70A4
  c->r[3]=R32(c->r[28]+0x00000024u); // 800C70A8
  c->r[4]=c->r[26]|c->r[26]; // 800C70AC
  c->lr=0x800C70B4u; f_80004338(c); // 800C70B0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800C70B4
  c->r[3]=R32(c->r[28]+0x00000024u); // 800C70B8
  c->r[0]=R32(c->r[28]+0x00000028u); // 800C70BC
  c->r[26]=c->r[26]+c->r[4]; // 800C70C0
  c->r[3]=c->r[3]+c->r[4]; // 800C70C4
  c->r[30]=c->r[30]-c->r[4]; // 800C70C8
  W32(c->r[28]+0x00000024u,c->r[3]); // 800C70CC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800C70D0
  c->r[0]=c->r[0]-c->r[3]; // 800C70D4
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C70D8
L_800C70DC:;
  c->r[0]=R32(c->r[28]+0x00000028u); // 800C70DC
  cmps(c,0,(int32_t)c->r[0],0); // 800C70E0
  if (crb(c,2)) { goto L_800C70FC; } // 800C70E4
  cmps(c,0,(int32_t)c->r[25],0); // 800C70E8
  if (!crb(c,2)) { goto L_800C70FC; } // 800C70EC
  c->r[0]=R32(c->r[28]+0x00000004u); // 800C70F0
  c->r[0]=rotl(c->r[0],7)&0x00000003u; cr0(c,c->r[0]); // 800C70F4
  if (!crb(c,2)) { goto L_800C7128; } // 800C70F8
L_800C70FC:;
  c->r[3]=c->r[28]|c->r[28]; // 800C70FC
  c->r[4]=0u+0x00000000u; // 800C7100
  c->lr=0x800C7108u; f_800C6ADC(c); // 800C7104
  cmps(c,0,(int32_t)c->r[3],0); // 800C7108
  if (crb(c,2)) { goto L_800C7128; } // 800C710C
  c->r[3]=0u+0x00000001u; // 800C7110
  c->r[0]=0u+0x00000000u; // 800C7114
  W8(c->r[28]+0x0000000Au,c->r[3]); // 800C7118
  c->r[30]=0u+0x00000000u; // 800C711C
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C7120
  goto L_800C7140; // 800C7124
L_800C7128:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C7128
  cmps(c,0,(int32_t)c->r[30],0); // 800C712C
  c->r[29]=c->r[29]+c->r[0]; // 800C7130
  if (crb(c,2)) { goto L_800C7140; } // 800C7134
  cmps(c,0,(int32_t)c->r[31],0); // 800C7138
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7044; } // 800C713C
L_800C7140:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C7140
  if (crb(c,2)) { goto L_800C71B0; } // 800C7144
  cmps(c,0,(int32_t)c->r[31],0); // 800C7148
  if (!crb(c,2)) { goto L_800C71B0; } // 800C714C
  c->r[25]=R32(c->r[28]+0x0000001Cu); // 800C7150
  c->r[0]=c->r[26]+c->r[30]; // 800C7154
  c->r[31]=R32(c->r[28]+0x00000020u); // 800C7158
  c->r[3]=c->r[28]|c->r[28]; // 800C715C
  W32(c->r[28]+0x0000001Cu,c->r[26]); // 800C7160
  c->r[4]=c->r[1]+0x00000008u; // 800C7164
  W32(c->r[28]+0x00000020u,c->r[30]); // 800C7168
  W32(c->r[28]+0x00000024u,c->r[0]); // 800C716C
  c->lr=0x800C7174u; f_800C6ADC(c); // 800C7170
  cmps(c,0,(int32_t)c->r[3],0); // 800C7174
  if (crb(c,2)) { goto L_800C7190; } // 800C7178
  c->r[3]=0u+0x00000001u; // 800C717C
  c->r[0]=0u+0x00000000u; // 800C7180
  W8(c->r[28]+0x0000000Au,c->r[3]); // 800C7184
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C7188
  goto L_800C7198; // 800C718C
L_800C7190:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C7190
  c->r[29]=c->r[29]+c->r[0]; // 800C7194
L_800C7198:;
  W32(c->r[28]+0x0000001Cu,c->r[25]); // 800C7198
  c->r[3]=c->r[28]|c->r[28]; // 800C719C
  W32(c->r[28]+0x00000020u,c->r[31]); // 800C71A0
  c->lr=0x800C71A8u; f_800C69B8(c); // 800C71A4
  c->r[0]=0u+0x00000000u; // 800C71A8
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C71AC
L_800C71B0:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 800C71B0
  c->r[0]=rotl(c->r[0],7)&0x00000003u; // 800C71B4
  cmpu(c,0,c->r[0],0x00000002u); // 800C71B8
  if (crb(c,2)) { goto L_800C71C8; } // 800C71BC
  c->r[0]=0u+0x00000000u; // 800C71C0
  W32(c->r[28]+0x00000028u,c->r[0]); // 800C71C4
L_800C71C8:;
  c->r[3]=divwu(c->r[29],c->r[27]); // 800C71C8
L_800C71CC:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C71CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C71D0
  c->lr=c->r[0]; // 800C71D4
  c->r[1]=c->r[1]+0x00000030u; // 800C71D8
  return; // 800C71DC
}

// fclose
void f_800C71E0(Ctx* __restrict c) {
  trace_call(0x800C71E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C71E0
  c->r[0]=c->lr; // 800C71E4
  cmps(c,0,(int32_t)c->r[3],0); // 800C71E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C71EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C71F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C71F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800C71F8
  c->r[29]=c->r[3]|c->r[3]; // 800C71FC
  if (!crb(c,2)) { goto L_800C720C; } // 800C7200
  c->r[3]=0u+0xFFFFFFFFu; // 800C7204
  goto L_800C7280; // 800C7208
L_800C720C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C720C
  c->r[0]=rotl(c->r[0],10)&0x00000007u; cr0(c,c->r[0]); // 800C7210
  if (!crb(c,2)) { goto L_800C7220; } // 800C7214
  c->r[3]=0u+0x00000000u; // 800C7218
  goto L_800C7280; // 800C721C
L_800C7220:;
  c->lr=0x800C7224u; f_800C729C(c); // 800C7220
  c->r[12]=R32(c->r[29]+0x00000044u); // 800C7224
  c->r[30]=c->r[3]|c->r[3]; // 800C7228
  c->r[3]=R32(c->r[29]+0x00000000u); // 800C722C
  c->ctr=c->r[12]; // 800C7230
  if (true) { c->lr=0x800C7238u; dispatch(c,c->ctr); } // 800C7234
  c->r[0]=R32(c->r[29]+0x00000008u); // 800C7238
  c->r[5]=0u+0x00000000u; // 800C723C
  c->r[4]=R32(c->r[29]+0x00000004u); // 800C7240
  c->r[31]=c->r[3]|c->r[3]; // 800C7244
  c->r[0]=rotl(c->r[0],4)&0x00000001u; cr0(c,c->r[0]); // 800C7248
  W32(c->r[29]+0x00000000u,c->r[5]); // 800C724C
  c->r[4]=rotl(c->r[4],0)&0xFE3FFFFFu; // 800C7250
  W32(c->r[29]+0x00000004u,c->r[4]); // 800C7254
  if (crb(c,2)) { goto L_800C7264; } // 800C7258
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 800C725C
  c->lr=0x800C7264u; f_800C4C94(c); // 800C7260
L_800C7264:;
  cmps(c,0,(int32_t)c->r[30],0); // 800C7264
  c->r[0]=0u+0x00000000u; // 800C7268
  if (!crb(c,2)) { goto L_800C7278; } // 800C726C
  cmps(c,0,(int32_t)c->r[31],0); // 800C7270
  if (crb(c,2)) { goto L_800C727C; } // 800C7274
L_800C7278:;
  c->r[0]=0u+0x00000001u; // 800C7278
L_800C727C:;
  c->r[3]=0u-c->r[0]; // 800C727C
L_800C7280:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C7280
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C7284
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C7288
  c->r[29]=R32(c->r[1]+0x00000014u); // 800C728C
  c->lr=c->r[0]; // 800C7290
  c->r[1]=c->r[1]+0x00000020u; // 800C7294
  return; // 800C7298
}

// fflush
void f_800C729C(Ctx* __restrict c) {
  trace_call(0x800C729Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C729C
  c->r[0]=c->lr; // 800C72A0
  cmps(c,0,(int32_t)c->r[3],0); // 800C72A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C72A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C72AC
  c->r[31]=c->r[3]|c->r[3]; // 800C72B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C72B4
  if (!crb(c,2)) { goto L_800C72C4; } // 800C72B8
  c->lr=0x800C72C0u; f_800C4EEC(c); // 800C72BC
  goto L_800C73B8; // 800C72C0
L_800C72C4:;
  c->r[0]=R8(c->r[3]+0x0000000Au); // 800C72C4
  cmps(c,0,(int32_t)c->r[0],0); // 800C72C8
  if (!crb(c,2)) { goto L_800C72DC; } // 800C72CC
  c->r[4]=R32(c->r[3]+0x00000004u); // 800C72D0
  c->r[0]=rotl(c->r[4],10)&0x00000007u; cr0(c,c->r[0]); // 800C72D4
  if (!crb(c,2)) { goto L_800C72E4; } // 800C72D8
L_800C72DC:;
  c->r[3]=0u+0xFFFFFFFFu; // 800C72DC
  goto L_800C73B8; // 800C72E0
L_800C72E4:;
  c->r[0]=rotl(c->r[4],5)&0x00000007u; // 800C72E4
  cmpu(c,0,c->r[0],0x00000001u); // 800C72E8
  if (!crb(c,2)) { goto L_800C72F8; } // 800C72EC
  c->r[3]=0u+0x00000000u; // 800C72F0
  goto L_800C73B8; // 800C72F4
L_800C72F8:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 800C72F8
  c->r[0]=rotl(c->r[4],3)&0x00000007u; // 800C72FC
  cmpu(c,0,c->r[0],0x00000003u); // 800C7300
  if (crb(c,0)) { goto L_800C7314; } // 800C7304
  c->r[0]=0u+0x00000002u; // 800C7308
  c->r[4]=(rotl(c->r[0],29)&0xE0000000u)|(c->r[4]&~0xE0000000u); // 800C730C
  W32(c->r[3]+0x00000008u,c->r[4]); // 800C7310
L_800C7314:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C7314
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 800C7318
  cmpu(c,0,c->r[0],0x00000002u); // 800C731C
  if (!crb(c,2)) { goto L_800C732C; } // 800C7320
  c->r[0]=0u+0x00000000u; // 800C7324
  W32(c->r[3]+0x00000028u,c->r[0]); // 800C7328
L_800C732C:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 800C732C
  c->r[0]=rotl(c->r[4],3)&0x00000007u; // 800C7330
  cmpu(c,0,c->r[0],0x00000001u); // 800C7334
  if (crb(c,2)) { goto L_800C734C; } // 800C7338
  c->r[0]=rotl(c->r[4],0)&0x1FFFFFFFu; // 800C733C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800C7340
  c->r[3]=0u+0x00000000u; // 800C7344
  goto L_800C73B8; // 800C7348
L_800C734C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C734C
  c->r[0]=rotl(c->r[0],10)&0x00000007u; // 800C7350
  cmpu(c,0,c->r[0],0x00000001u); // 800C7354
  if (crb(c,2)) { goto L_800C7364; } // 800C7358
  c->r[30]=0u+0x00000000u; // 800C735C
  goto L_800C7370; // 800C7360
L_800C7364:;
  c->r[3]=c->r[31]|c->r[31]; // 800C7364
  c->lr=0x800C736Cu; f_800C7628(c); // 800C7368
  c->r[30]=c->r[3]|c->r[3]; // 800C736C
L_800C7370:;
  c->r[3]=c->r[31]|c->r[31]; // 800C7370
  c->r[4]=0u+0x00000000u; // 800C7374
  c->lr=0x800C737Cu; f_800C6ADC(c); // 800C7378
  cmps(c,0,(int32_t)c->r[3],0); // 800C737C
  if (crb(c,2)) { goto L_800C739C; } // 800C7380
  c->r[3]=0u+0x00000001u; // 800C7384
  c->r[0]=0u+0x00000000u; // 800C7388
  W8(c->r[31]+0x0000000Au,c->r[3]); // 800C738C
  c->r[3]=0u+0xFFFFFFFFu; // 800C7390
  W32(c->r[31]+0x00000028u,c->r[0]); // 800C7394
  goto L_800C73B8; // 800C7398
L_800C739C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800C739C
  c->r[4]=0u+0x00000000u; // 800C73A0
  W32(c->r[31]+0x00000018u,c->r[30]); // 800C73A4
  c->r[3]=0u+0x00000000u; // 800C73A8
  c->r[0]=rotl(c->r[0],0)&0x1FFFFFFFu; // 800C73AC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800C73B0
  W32(c->r[31]+0x00000028u,c->r[4]); // 800C73B4
L_800C73B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C73B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C73BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C73C0
  c->lr=c->r[0]; // 800C73C4
  c->r[1]=c->r[1]+0x00000010u; // 800C73C8
  return; // 800C73CC
}

// fn_800C73D0
void f_800C73D0(Ctx* __restrict c) {
  c->r[6]=0u+0x80220000u; // 800C73D0
  c->r[6]=c->r[6]+0xFFFFBE90u; // 800C73D4
  c->r[6]=R32(c->r[6]+0x00000038u); // 800C73D8
  c->ctr=c->r[5]; // 800C73DC
  cmps(c,0,(int32_t)c->r[5],0); // 800C73E0
  if (!crb(c,1)) { goto L_800C7488; } // 800C73E4
L_800C73E8:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 800C73E8
  c->r[0]=0u+0x00000000u; // 800C73EC
  c->r[3]=c->r[3]+0x00000001u; // 800C73F0
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[7]); // 800C73F4
  if (crb(c,0)) { goto L_800C7404; } // 800C73F8
  cmps(c,0,(int32_t)c->r[7],256); // 800C73FC
  if (crb(c,0)) { goto L_800C7408; } // 800C7400
L_800C7404:;
  c->r[0]=0u+0x00000001u; // 800C7404
L_800C7408:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C7408
  if (crb(c,2)) { goto L_800C7414; } // 800C740C
  goto L_800C741C; // 800C7410
L_800C7414:;
  c->r[5]=R32(c->r[6]+0x00000010u); // 800C7414
  c->r[7]=R8(c->r[5]+c->r[7]); // 800C7418
L_800C741C:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 800C741C
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800C7420
  c->r[0]=0u+0x00000000u; // 800C7424
  c->r[4]=c->r[4]+0x00000001u; // 800C7428
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[7]); // 800C742C
  if (crb(c,0)) { goto L_800C743C; } // 800C7430
  cmps(c,0,(int32_t)c->r[7],256); // 800C7434
  if (crb(c,0)) { goto L_800C7440; } // 800C7438
L_800C743C:;
  c->r[0]=0u+0x00000001u; // 800C743C
L_800C7440:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C7440
  if (crb(c,2)) { goto L_800C744C; } // 800C7444
  goto L_800C7454; // 800C7448
L_800C744C:;
  c->r[5]=R32(c->r[6]+0x00000010u); // 800C744C
  c->r[7]=R8(c->r[5]+c->r[7]); // 800C7450
L_800C7454:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800C7454
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800C7458
  if (!crb(c,0)) { goto L_800C7468; } // 800C745C
  c->r[3]=0u+0xFFFFFFFFu; // 800C7460
  return; // 800C7464
L_800C7468:;
  if (!crb(c,1)) { goto L_800C7474; } // 800C7468
  c->r[3]=0u+0x00000001u; // 800C746C
  return; // 800C7470
L_800C7474:;
  cmps(c,0,(int32_t)c->r[8],0); // 800C7474
  if (!crb(c,2)) { goto L_800C7484; } // 800C7478
  c->r[3]=0u+0x00000000u; // 800C747C
  return; // 800C7480
L_800C7484:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C73E8; } // 800C7484
L_800C7488:;
  c->r[3]=0u+0x00000000u; // 800C7488
  return; // 800C748C
}

// fn_800C7490
void f_800C7490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7490
  c->r[0]=c->lr; // 800C7494
  cmps(c,0,(int32_t)c->r[3],0); // 800C7498
  c->r[7]=0u+0x00000000u; // 800C749C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C74A0
  c->r[8]=0u+0x00000000u; // 800C74A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C74A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C74AC
  c->r[30]=c->r[4]|c->r[4]; // 800C74B0
  if (!crb(c,0)) { goto L_800C74C0; } // 800C74B4
  c->r[3]=0u-c->r[3]; // 800C74B8
  c->r[7]=0u+0x00000001u; // 800C74BC
L_800C74C0:;
  c->r[6]=c->r[4]|c->r[4]; // 800C74C0
L_800C74C4:;
  c->r[0]=divwu(c->r[3],c->r[5]); // 800C74C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[5]); // 800C74C8
  c->r[9]=c->r[3]-c->r[0]; // 800C74CC
  cmps(c,0,(int32_t)c->r[9],9); // 800C74D0
  if (!crb(c,1)) { goto L_800C74EC; } // 800C74D4
  c->r[0]=c->r[9]+0x00000037u; // 800C74D8
  c->r[8]=c->r[8]+0x00000001u; // 800C74DC
  W8(c->r[6]+0x00000000u,c->r[0]); // 800C74E0
  c->r[6]=c->r[6]+0x00000001u; // 800C74E4
  goto L_800C74FC; // 800C74E8
L_800C74EC:;
  c->r[0]=c->r[9]+0x00000030u; // 800C74EC
  c->r[8]=c->r[8]+0x00000001u; // 800C74F0
  W8(c->r[6]+0x00000000u,c->r[0]); // 800C74F4
  c->r[6]=c->r[6]+0x00000001u; // 800C74F8
L_800C74FC:;
  c->r[3]=divwu(c->r[3],c->r[5]); cr0(c,c->r[3]); // 800C74FC
  if (!crb(c,2)) { IRQCHK(c); goto L_800C74C4; } // 800C7500
  cmps(c,0,(int32_t)c->r[7],0); // 800C7504
  if (crb(c,2)) { goto L_800C7518; } // 800C7508
  c->r[0]=0u+0x0000002Du; // 800C750C
  W8(c->r[4]+c->r[8],c->r[0]); // 800C7510
  c->r[8]=c->r[8]+0x00000001u; // 800C7514
L_800C7518:;
  c->r[0]=0u+0x00000000u; // 800C7518
  c->r[3]=c->r[30]|c->r[30]; // 800C751C
  W8(c->r[4]+c->r[8],c->r[0]); // 800C7520
  c->r[31]=0u+0x00000000u; // 800C7524
  c->lr=0x800C752Cu; f_800C1734(c); // 800C7528
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 800C752C
  c->r[3]=c->r[30]|c->r[30]; // 800C7530
  c->r[4]=c->r[30]+c->r[6]; // 800C7534
  goto L_800C755C; // 800C7538
L_800C753C:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 800C753C
  c->r[31]=c->r[31]+0x00000001u; // 800C7540
  c->r[0]=R8(c->r[4]+0x00000000u); // 800C7544
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800C7548
  W8(c->r[3]+0x00000000u,c->r[0]); // 800C754C
  c->r[3]=c->r[3]+0x00000001u; // 800C7550
  W8(c->r[4]+0x00000000u,c->r[5]); // 800C7554
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800C7558
L_800C755C:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[6]); // 800C755C
  if (crb(c,0)) { IRQCHK(c); goto L_800C753C; } // 800C7560
  c->r[3]=c->r[30]|c->r[30]; // 800C7564
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C7568
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C756C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C7570
  c->lr=c->r[0]; // 800C7574
  c->r[1]=c->r[1]+0x00000010u; // 800C7578
  return; // 800C757C
}

// fn_800C7580
void f_800C7580(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C7580
  c->r[6]=0u+0x00000000u; // 800C7584
  c->r[4]=rotl(c->r[0],10)&0x00000007u; // 800C7588
  c->r[0]=c->r[4]+0x000000FFu; // 800C758C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800C7590
  cmpu(c,0,c->r[0],0x00000001u); // 800C7594
  if (crb(c,1)) { goto L_800C75A8; } // 800C7598
  c->r[0]=R8(c->r[3]+0x0000000Au); // 800C759C
  cmps(c,0,(int32_t)c->r[0],0); // 800C75A0
  if (crb(c,2)) { goto L_800C75B8; } // 800C75A4
L_800C75A8:;
  c->r[0]=0u+0x00000028u; // 800C75A8
  c->r[3]=0u+0xFFFFFFFFu; // 800C75AC
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 800C75B0
  return; // 800C75B4
L_800C75B8:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C75B8
  c->r[5]=rotl(c->r[0],3)&0x00000007u; cr0(c,c->r[5]); // 800C75BC
  if (!crb(c,2)) { goto L_800C75CC; } // 800C75C0
  c->r[3]=R32(c->r[3]+0x00000018u); // 800C75C4
  return; // 800C75C8
L_800C75CC:;
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 800C75CC
  cmpu(c,0,c->r[5],0x00000003u); // 800C75D0
  c->r[4]=R32(c->r[3]+0x00000024u); // 800C75D4
  c->r[0]=R32(c->r[3]+0x00000034u); // 800C75D8
  c->r[4]=c->r[4]-c->r[8]; // 800C75DC
  c->r[7]=c->r[0]+c->r[4]; // 800C75E0
  if (crb(c,0)) { goto L_800C75F0; } // 800C75E4
  c->r[6]=c->r[5]+0xFFFFFFFEu; // 800C75E8
  c->r[7]=c->r[7]-c->r[6]; // 800C75EC
L_800C75F0:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C75F0
  c->r[0]=rotl(c->r[0],13)&0x00000001u; cr0(c,c->r[0]); // 800C75F4
  if (!crb(c,2)) { goto L_800C7620; } // 800C75F8
  c->r[0]=c->r[4]-c->r[6]; cr0(c,c->r[0]); // 800C75FC
  c->ctr=c->r[0]; // 800C7600
  if (crb(c,2)) { goto L_800C7620; } // 800C7604
L_800C7608:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 800C7608
  c->r[8]=c->r[8]+0x00000001u; // 800C760C
  cmpu(c,0,c->r[0],0x0000000Au); // 800C7610
  if (!crb(c,2)) { goto L_800C761C; } // 800C7614
  c->r[7]=c->r[7]+0x00000001u; // 800C7618
L_800C761C:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C7608; } // 800C761C
L_800C7620:;
  c->r[3]=c->r[7]|c->r[7]; // 800C7620
  return; // 800C7624
}

// fn_800C7628
void f_800C7628(Ctx* __restrict c) {
  f_800C7580(c); return; // 800C7628
}

// _fseek
void f_800C762C(Ctx* __restrict c) {
  trace_call(0x800C762Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C762C
  c->r[0]=c->lr; // 800C7630
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C7634
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800C7638
  c->r[31]=c->r[5]|c->r[5]; // 800C763C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800C7640
  c->r[30]=c->r[3]|c->r[3]; // 800C7644
  W32(c->r[1]+0x00000008u,c->r[4]); // 800C7648
  c->r[0]=R32(c->r[3]+0x00000004u); // 800C764C
  c->r[0]=rotl(c->r[0],10)&0x00000007u; // 800C7650
  cmpu(c,0,c->r[0],0x00000001u); // 800C7654
  if (!crb(c,2)) { goto L_800C7668; } // 800C7658
  c->r[0]=R8(c->r[3]+0x0000000Au); // 800C765C
  cmps(c,0,(int32_t)c->r[0],0); // 800C7660
  if (crb(c,2)) { goto L_800C7678; } // 800C7664
L_800C7668:;
  c->r[0]=0u+0x00000028u; // 800C7668
  c->r[3]=0u+0xFFFFFFFFu; // 800C766C
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 800C7670
  goto L_800C77D8; // 800C7674
L_800C7678:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800C7678
  c->r[0]=rotl(c->r[0],3)&0x00000007u; // 800C767C
  cmpu(c,0,c->r[0],0x00000001u); // 800C7680
  if (!crb(c,2)) { goto L_800C76B8; } // 800C7684
  c->r[4]=0u+0x00000000u; // 800C7688
  c->lr=0x800C7690u; f_800C6ADC(c); // 800C768C
  cmps(c,0,(int32_t)c->r[3],0); // 800C7690
  if (crb(c,2)) { goto L_800C76B8; } // 800C7694
  c->r[0]=0u+0x00000001u; // 800C7698
  c->r[4]=0u+0x00000000u; // 800C769C
  W8(c->r[30]+0x0000000Au,c->r[0]); // 800C76A0
  c->r[0]=0u+0x00000028u; // 800C76A4
  c->r[3]=0u+0xFFFFFFFFu; // 800C76A8
  W32(c->r[30]+0x00000028u,c->r[4]); // 800C76AC
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 800C76B0
  goto L_800C77D8; // 800C76B4
L_800C76B8:;
  cmps(c,0,(int32_t)c->r[31],1); // 800C76B8
  if (!crb(c,2)) { goto L_800C76D8; } // 800C76BC
  c->r[3]=c->r[30]|c->r[30]; // 800C76C0
  c->r[31]=0u+0x00000000u; // 800C76C4
  c->lr=0x800C76CCu; f_800C7580(c); // 800C76C8
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C76CC
  c->r[0]=c->r[0]+c->r[3]; // 800C76D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800C76D4
L_800C76D8:;
  cmps(c,0,(int32_t)c->r[31],2); // 800C76D8
  if (crb(c,2)) { goto L_800C775C; } // 800C76DC
  c->r[0]=R32(c->r[30]+0x00000004u); // 800C76E0
  c->r[0]=rotl(c->r[0],5)&0x00000007u; // 800C76E4
  cmpu(c,0,c->r[0],0x00000003u); // 800C76E8
  if (crb(c,2)) { goto L_800C775C; } // 800C76EC
  c->r[6]=R32(c->r[30]+0x00000008u); // 800C76F0
  c->r[3]=rotl(c->r[6],3)&0x00000007u; // 800C76F4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800C76F8
  cmpu(c,0,c->r[0],0x00000001u); // 800C76FC
  if (crb(c,1)) { goto L_800C775C; } // 800C7700
  c->r[3]=R32(c->r[1]+0x00000008u); // 800C7704
  c->r[5]=R32(c->r[30]+0x00000018u); // 800C7708
  cmpu(c,0,c->r[3],c->r[5]); // 800C770C
  if (!crb(c,0)) { goto L_800C7720; } // 800C7710
  c->r[0]=R32(c->r[30]+0x00000034u); // 800C7714
  cmpu(c,0,c->r[3],c->r[0]); // 800C7718
  if (!crb(c,0)) { goto L_800C7730; } // 800C771C
L_800C7720:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 800C7720
  c->r[0]=rotl(c->r[0],0)&0x1FFFFFFFu; // 800C7724
  W32(c->r[30]+0x00000008u,c->r[0]); // 800C7728
  goto L_800C7768; // 800C772C
L_800C7730:;
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 800C7730
  c->r[3]=c->r[3]-c->r[0]; // 800C7734
  c->r[0]=0u+0x00000002u; // 800C7738
  c->r[3]=c->r[4]+c->r[3]; // 800C773C
  W32(c->r[30]+0x00000024u,c->r[3]); // 800C7740
  c->r[6]=(rotl(c->r[0],29)&0xE0000000u)|(c->r[6]&~0xE0000000u); // 800C7744
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C7748
  c->r[0]=c->r[5]-c->r[0]; // 800C774C
  W32(c->r[30]+0x00000008u,c->r[6]); // 800C7750
  W32(c->r[30]+0x00000028u,c->r[0]); // 800C7754
  goto L_800C7768; // 800C7758
L_800C775C:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 800C775C
  c->r[0]=rotl(c->r[0],0)&0x1FFFFFFFu; // 800C7760
  W32(c->r[30]+0x00000008u,c->r[0]); // 800C7764
L_800C7768:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 800C7768
  c->r[0]=rotl(c->r[0],3)&0x00000007u; cr0(c,c->r[0]); // 800C776C
  if (!crb(c,2)) { goto L_800C77D4; } // 800C7770
  c->r[12]=R32(c->r[30]+0x00000038u); // 800C7774
  cmps(c,0,(int32_t)c->r[12],0); // 800C7778
  if (crb(c,2)) { goto L_800C77C0; } // 800C777C
  c->r[5]=c->r[31]|c->r[31]; // 800C7780
  c->r[4]=c->r[1]+0x00000008u; // 800C7784
  c->r[3]=R32(c->r[30]+0x00000000u); // 800C7788
  c->r[6]=R32(c->r[30]+0x00000048u); // 800C778C
  c->ctr=c->r[12]; // 800C7790
  if (true) { c->lr=0x800C7798u; dispatch(c,c->ctr); } // 800C7794
  cmps(c,0,(int32_t)c->r[3],0); // 800C7798
  if (crb(c,2)) { goto L_800C77C0; } // 800C779C
  c->r[0]=0u+0x00000001u; // 800C77A0
  c->r[4]=0u+0x00000000u; // 800C77A4
  W8(c->r[30]+0x0000000Au,c->r[0]); // 800C77A8
  c->r[0]=0u+0x00000028u; // 800C77AC
  c->r[3]=0u+0xFFFFFFFFu; // 800C77B0
  W32(c->r[30]+0x00000028u,c->r[4]); // 800C77B4
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 800C77B8
  goto L_800C77D8; // 800C77BC
L_800C77C0:;
  c->r[3]=0u+0x00000000u; // 800C77C0
  W8(c->r[30]+0x00000009u,c->r[3]); // 800C77C4
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C77C8
  W32(c->r[30]+0x00000018u,c->r[0]); // 800C77CC
  W32(c->r[30]+0x00000028u,c->r[3]); // 800C77D0
L_800C77D4:;
  c->r[3]=0u+0x00000000u; // 800C77D4
L_800C77D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C77D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800C77DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800C77E0
  c->lr=c->r[0]; // 800C77E4
  c->r[1]=c->r[1]+0x00000020u; // 800C77E8
  return; // 800C77EC
}

// fn_800C77F0
void f_800C77F0(Ctx* __restrict c) {
  f_800C762C(c); return; // 800C77F0
}

// fn_800C77F4
void f_800C77F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C77F4
  c->r[0]=c->lr; // 800C77F8
  c->r[4]=0u+0x00000000u; // 800C77FC
  c->r[5]=0u+0x00000000u; // 800C7800
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C7804
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C7808
  c->r[31]=0u+0x00000000u; // 800C780C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C7810
  c->r[30]=c->r[3]|c->r[3]; // 800C7814
  W8(c->r[3]+0x0000000Au,c->r[31]); // 800C7818
  c->lr=0x800C7820u; f_800C762C(c); // 800C781C
  W8(c->r[30]+0x0000000Au,c->r[31]); // 800C7820
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C7824
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C7828
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C782C
  c->lr=c->r[0]; // 800C7830
  c->r[1]=c->r[1]+0x00000010u; // 800C7834
  return; // 800C7838
}

// fn_800C783C
void f_800C783C(Ctx* __restrict c) {
  c->r[6]=0u+0x80220000u; // 800C783C
  c->r[6]=c->r[6]+0xFFFFBE90u; // 800C7840
  c->r[6]=R32(c->r[6]+0x00000038u); // 800C7844
  c->r[12]=R32(c->r[6]+0x00000020u); // 800C7848
  c->ctr=c->r[12]; // 800C784C
  if (true) { dispatch(c,c->ctr); return; } // 800C7850
}

// fn_800C7854
void f_800C7854(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800C7854
  if (!crb(c,2)) { goto L_800C7864; } // 800C7858
  c->r[3]=0u+0x00000000u; // 800C785C
  return; // 800C7860
L_800C7864:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C7864
  if (!crb(c,2)) { goto L_800C7874; } // 800C7868
  c->r[3]=0u+0xFFFFFFFFu; // 800C786C
  return; // 800C7870
L_800C7874:;
  cmps(c,0,(int32_t)c->r[3],0); // 800C7874
  if (crb(c,2)) { goto L_800C7884; } // 800C7878
  c->r[0]=R8(c->r[4]+0x00000000u); // 800C787C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800C7880
L_800C7884:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800C7884
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C7888
  if (!crb(c,2)) { goto L_800C7898; } // 800C788C
  c->r[3]=0u+0x00000000u; // 800C7890
  return; // 800C7894
L_800C7898:;
  c->r[3]=0u+0x00000001u; // 800C7898
  return; // 800C789C
}

// fn_800C78A0
void f_800C78A0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 800C78A0
  if (!crb(c,2)) { goto L_800C78B0; } // 800C78A4
  c->r[3]=0u+0x00000000u; // 800C78A8
  return; // 800C78AC
L_800C78B0:;
  W8(c->r[3]+0x00000000u,c->r[4]); // 800C78B0
  c->r[3]=0u+0x00000001u; // 800C78B4
  return; // 800C78B8
}

// mbstowcs
void f_800C78BC(Ctx* __restrict c) {
  trace_call(0x800C78BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C78BC
  c->r[0]=c->lr; // 800C78C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800C78C4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C78C8
  c->r[27]=c->r[4]|c->r[4]; // 800C78CC
  c->r[26]=c->r[3]|c->r[3]; // 800C78D0
  c->r[28]=c->r[5]|c->r[5]; // 800C78D4
  c->r[3]=c->r[27]|c->r[27]; // 800C78D8
  c->lr=0x800C78E0u; f_800C1734(c); // 800C78DC
  cmps(c,0,(int32_t)c->r[26],0); // 800C78E0
  c->r[29]=c->r[3]|c->r[3]; // 800C78E4
  if (crb(c,2)) { goto L_800C7960; } // 800C78E8
  c->r[31]=0u+0x80220000u; // 800C78EC
  c->r[30]=0u+0x00000000u; // 800C78F0
  c->r[31]=c->r[31]+0xFFFFBE90u; // 800C78F4
  goto L_800C7954; // 800C78F8
L_800C78FC:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 800C78FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C7900
  if (crb(c,2)) { goto L_800C7944; } // 800C7904
  c->r[6]=R32(c->r[31]+0x00000038u); // 800C7908
  c->r[3]=c->r[26]|c->r[26]; // 800C790C
  c->r[4]=c->r[27]|c->r[27]; // 800C7910
  c->r[5]=c->r[29]|c->r[29]; // 800C7914
  c->r[12]=R32(c->r[6]+0x00000020u); // 800C7918
  c->ctr=c->r[12]; // 800C791C
  c->r[26]=c->r[26]+0x00000002u; // 800C7920
  if (true) { c->lr=0x800C7928u; dispatch(c,c->ctr); } // 800C7924
  cmps(c,0,(int32_t)c->r[3],0); // 800C7928
  if (!crb(c,1)) { goto L_800C793C; } // 800C792C
  c->r[27]=c->r[27]+c->r[3]; // 800C7930
  c->r[29]=c->r[29]-c->r[3]; // 800C7934
  goto L_800C7950; // 800C7938
L_800C793C:;
  c->r[3]=0u+0xFFFFFFFFu; // 800C793C
  goto L_800C7968; // 800C7940
L_800C7944:;
  c->r[0]=0u+0x00000000u; // 800C7944
  W16(c->r[26]+0x00000000u,c->r[0]); // 800C7948
  goto L_800C7964; // 800C794C
L_800C7950:;
  c->r[30]=c->r[30]+0x00000001u; // 800C7950
L_800C7954:;
  cmpu(c,0,c->r[30],c->r[28]); // 800C7954
  if (crb(c,0)) { IRQCHK(c); goto L_800C78FC; } // 800C7958
  goto L_800C7964; // 800C795C
L_800C7960:;
  c->r[30]=0u+0x00000000u; // 800C7960
L_800C7964:;
  c->r[3]=c->r[30]|c->r[30]; // 800C7964
L_800C7968:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C7968
  c->r[0]=R32(c->r[1]+0x00000024u); // 800C796C
  c->lr=c->r[0]; // 800C7970
  c->r[1]=c->r[1]+0x00000020u; // 800C7974
  return; // 800C7978
}

// wcstombs
void f_800C797C(Ctx* __restrict c) {
  trace_call(0x800C797Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C797C
  c->r[0]=c->lr; // 800C7980
  cmps(c,0,(int32_t)c->r[3],0); // 800C7984
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C7988
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C798C
  c->r[26]=c->r[3]|c->r[3]; // 800C7990
  c->r[27]=c->r[5]|c->r[5]; // 800C7994
  c->r[29]=0u+0x00000000u; // 800C7998
  if (crb(c,2)) { goto L_800C79A8; } // 800C799C
  cmps(c,0,(int32_t)c->r[4],0); // 800C79A0
  if (!crb(c,2)) { goto L_800C79B0; } // 800C79A4
L_800C79A8:;
  c->r[3]=0u+0x00000000u; // 800C79A8
  goto L_800C7A20; // 800C79AC
L_800C79B0:;
  c->r[31]=0u+0x80220000u; // 800C79B0
  c->r[28]=c->r[4]|c->r[4]; // 800C79B4
  c->r[31]=c->r[31]+0xFFFFBE90u; // 800C79B8
  goto L_800C7A14; // 800C79BC
L_800C79C0:;
  c->r[4]=R16(c->r[28]+0x00000000u); // 800C79C0
  cmps(c,0,(int32_t)c->r[4],0); // 800C79C4
  if (!crb(c,2)) { goto L_800C79D8; } // 800C79C8
  c->r[0]=0u+0x00000000u; // 800C79CC
  W8(c->r[26]+c->r[29],c->r[0]); // 800C79D0
  goto L_800C7A1C; // 800C79D4
L_800C79D8:;
  c->r[5]=R32(c->r[31]+0x00000038u); // 800C79D8
  c->r[3]=c->r[1]+0x00000008u; // 800C79DC
  c->r[12]=R32(c->r[5]+0x00000024u); // 800C79E0
  c->ctr=c->r[12]; // 800C79E4
  c->r[28]=c->r[28]+0x00000002u; // 800C79E8
  if (true) { c->lr=0x800C79F0u; dispatch(c,c->ctr); } // 800C79EC
  c->r[0]=c->r[29]+c->r[3]; // 800C79F0
  c->r[30]=c->r[3]|c->r[3]; // 800C79F4
  cmpu(c,0,c->r[0],c->r[27]); // 800C79F8
  if (crb(c,1)) { goto L_800C7A1C; } // 800C79FC
  c->r[5]=c->r[30]|c->r[30]; // 800C7A00
  c->r[3]=c->r[26]+c->r[29]; // 800C7A04
  c->r[4]=c->r[1]+0x00000008u; // 800C7A08
  c->lr=0x800C7A10u; f_800CBAB0(c); // 800C7A0C
  c->r[29]=c->r[29]+c->r[30]; // 800C7A10
L_800C7A14:;
  cmpu(c,0,c->r[29],c->r[27]); // 800C7A14
  if (!crb(c,1)) { IRQCHK(c); goto L_800C79C0; } // 800C7A18
L_800C7A1C:;
  c->r[3]=c->r[29]|c->r[29]; // 800C7A1C
L_800C7A20:;
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C7A20
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C7A24
  c->lr=c->r[0]; // 800C7A28
  c->r[1]=c->r[1]+0x00000030u; // 800C7A2C
  return; // 800C7A30
}

// memmove
void f_800C7A34(Ctx* __restrict c) {
  trace_call(0x800C7A34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7A34
  c->r[0]=c->lr; // 800C7A38
  c->r[6]=c->r[3]^c->r[4]; // 800C7A3C
  cmpu(c,0,c->r[5],0x00000020u); // 800C7A40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C7A44
  c->r[0]=cntlz(c->r[6]); // 800C7A48
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800C7A4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C7A50
  c->r[31]=c->r[3]|c->r[3]; // 800C7A54
  c->r[7]=rotl(c->r[0],1)&0x00000001u; // 800C7A58
  if (crb(c,0)) { goto L_800C7A9C; } // 800C7A5C
  c->r[0]=rotl(c->r[6],0)&0x00000003u; cr0(c,c->r[0]); // 800C7A60
  if (crb(c,2)) { goto L_800C7A80; } // 800C7A64
  cmps(c,0,(int32_t)c->r[7],0); // 800C7A68
  if (!crb(c,2)) { goto L_800C7A78; } // 800C7A6C
  c->lr=0x800C7A74u; f_800C7D08(c); // 800C7A70
  goto L_800C7A94; // 800C7A74
L_800C7A78:;
  c->lr=0x800C7A7Cu; f_800C7DC8(c); // 800C7A78
  goto L_800C7A94; // 800C7A7C
L_800C7A80:;
  cmps(c,0,(int32_t)c->r[7],0); // 800C7A80
  if (!crb(c,2)) { goto L_800C7A90; } // 800C7A84
  c->lr=0x800C7A8Cu; f_800C7BA4(c); // 800C7A88
  goto L_800C7A94; // 800C7A8C
L_800C7A90:;
  c->lr=0x800C7A94u; f_800C7C60(c); // 800C7A90
L_800C7A94:;
  c->r[3]=c->r[31]|c->r[31]; // 800C7A94
  goto L_800C7AEC; // 800C7A98
L_800C7A9C:;
  cmps(c,0,(int32_t)c->r[7],0); // 800C7A9C
  if (!crb(c,2)) { goto L_800C7AC8; } // 800C7AA0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800C7AA4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800C7AA8
  c->r[5]=c->r[5]+0x00000001u; // 800C7AAC
  goto L_800C7ABC; // 800C7AB0
L_800C7AB4:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800C7AB4
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 800C7AB8
L_800C7ABC:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800C7ABC
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7AB4; } // 800C7AC0
  goto L_800C7AE8; // 800C7AC4
L_800C7AC8:;
  c->r[4]=c->r[4]+c->r[5]; // 800C7AC8
  c->r[3]=c->r[3]+c->r[5]; // 800C7ACC
  c->r[5]=c->r[5]+0x00000001u; // 800C7AD0
  goto L_800C7AE0; // 800C7AD4
L_800C7AD8:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 800C7AD8
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[3]=ea;} // 800C7ADC
L_800C7AE0:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800C7AE0
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7AD8; } // 800C7AE4
L_800C7AE8:;
  c->r[3]=c->r[31]|c->r[31]; // 800C7AE8
L_800C7AEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C7AEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C7AF0
  c->lr=c->r[0]; // 800C7AF4
  c->r[1]=c->r[1]+0x00000010u; // 800C7AF8
  return; // 800C7AFC
}

// memchr
void f_800C7B00(Ctx* __restrict c) {
  trace_call(0x800C7B00u);
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800C7B00
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800C7B04
  c->r[5]=c->r[5]+0x00000001u; // 800C7B08
  goto L_800C7B1C; // 800C7B0C
L_800C7B10:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[0]=R8(ea); c->r[3]=ea;} // 800C7B10
  cmpu(c,0,c->r[0],c->r[4]); // 800C7B14
  if (crb(c,2)) return; // 800C7B18
L_800C7B1C:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800C7B1C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7B10; } // 800C7B20
  c->r[3]=0u+0x00000000u; // 800C7B24
  return; // 800C7B28
}

// __memrchr
void f_800C7B2C(Ctx* __restrict c) {
  trace_call(0x800C7B2Cu);
  c->r[3]=c->r[3]+c->r[5]; // 800C7B2C
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800C7B30
  c->r[5]=c->r[5]+0x00000001u; // 800C7B34
  goto L_800C7B48; // 800C7B38
L_800C7B3C:;
  {uint32_t ea=c->r[3]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[3]=ea;} // 800C7B3C
  cmpu(c,0,c->r[0],c->r[4]); // 800C7B40
  if (crb(c,2)) return; // 800C7B44
L_800C7B48:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800C7B48
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7B3C; } // 800C7B4C
  c->r[3]=0u+0x00000000u; // 800C7B50
  return; // 800C7B54
}

// fn_800C7B58
void f_800C7B58(Ctx* __restrict c) {
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 800C7B58
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 800C7B5C
  c->r[4]=c->r[5]+0x00000001u; // 800C7B60
  goto L_800C7B94; // 800C7B64
L_800C7B68:;
  {uint32_t ea=c->r[6]+0x00000001u; c->r[3]=R8(ea); c->r[6]=ea;} // 800C7B68
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 800C7B6C
  cmpu(c,0,c->r[3],c->r[0]); // 800C7B70
  if (crb(c,2)) { goto L_800C7B94; } // 800C7B74
  c->r[4]=R8(c->r[6]+0x00000000u); // 800C7B78
  c->r[3]=0u+0x00000001u; // 800C7B7C
  c->r[0]=R8(c->r[7]+0x00000000u); // 800C7B80
  cmpu(c,0,c->r[4],c->r[0]); // 800C7B84
  if (!crb(c,0)) return; // 800C7B88
  c->r[3]=0u+0xFFFFFFFFu; // 800C7B8C
  return; // 800C7B90
L_800C7B94:;
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 800C7B94
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7B68; } // 800C7B98
  c->r[3]=0u+0x00000000u; // 800C7B9C
  return; // 800C7BA0
}

// fn_800C7BA4
void f_800C7BA4(Ctx* __restrict c) {
  c->r[0]=0u-c->r[3]; // 800C7BA4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800C7BA8
  c->r[6]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[6]); // 800C7BAC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800C7BB0
  if (crb(c,2)) { goto L_800C7BCC; } // 800C7BB4
  c->r[5]=c->r[5]-c->r[6]; // 800C7BB8
L_800C7BBC:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800C7BBC
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800C7BC0
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 800C7BC4
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7BBC; } // 800C7BC8
L_800C7BCC:;
  c->r[6]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[6]); // 800C7BCC
  c->r[7]=c->r[4]+0xFFFFFFFDu; // 800C7BD0
  c->r[4]=c->r[3]+0xFFFFFFFDu; // 800C7BD4
  if (crb(c,2)) { goto L_800C7C24; } // 800C7BD8
L_800C7BDC:;
  c->r[3]=R32(c->r[7]+0x00000004u); // 800C7BDC
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800C7BE0
  c->r[0]=R32(c->r[7]+0x00000008u); // 800C7BE4
  W32(c->r[4]+0x00000004u,c->r[3]); // 800C7BE8
  c->r[3]=R32(c->r[7]+0x0000000Cu); // 800C7BEC
  W32(c->r[4]+0x00000008u,c->r[0]); // 800C7BF0
  c->r[0]=R32(c->r[7]+0x00000010u); // 800C7BF4
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 800C7BF8
  c->r[3]=R32(c->r[7]+0x00000014u); // 800C7BFC
  W32(c->r[4]+0x00000010u,c->r[0]); // 800C7C00
  c->r[0]=R32(c->r[7]+0x00000018u); // 800C7C04
  W32(c->r[4]+0x00000014u,c->r[3]); // 800C7C08
  c->r[3]=R32(c->r[7]+0x0000001Cu); // 800C7C0C
  W32(c->r[4]+0x00000018u,c->r[0]); // 800C7C10
  {uint32_t ea=c->r[7]+0x00000020u; c->r[0]=R32(ea); c->r[7]=ea;} // 800C7C14
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 800C7C18
  {uint32_t ea=c->r[4]+0x00000020u; W32(ea,c->r[0]); c->r[4]=ea;} // 800C7C1C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7BDC; } // 800C7C20
L_800C7C24:;
  c->r[3]=rotl(c->r[5],30)&0x00000007u; cr0(c,c->r[3]); // 800C7C24
  if (crb(c,2)) { goto L_800C7C3C; } // 800C7C28
L_800C7C2C:;
  {uint32_t ea=c->r[7]+0x00000004u; c->r[0]=R32(ea); c->r[7]=ea;} // 800C7C2C
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 800C7C30
  {uint32_t ea=c->r[4]+0x00000004u; W32(ea,c->r[0]); c->r[4]=ea;} // 800C7C34
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7C2C; } // 800C7C38
L_800C7C3C:;
  c->r[5]=rotl(c->r[5],0)&0x00000003u; cr0(c,c->r[5]); // 800C7C3C
  c->r[6]=c->r[7]+0x00000003u; // 800C7C40
  c->r[3]=c->r[4]+0x00000003u; // 800C7C44
  if (crb(c,2)) return; // 800C7C48
L_800C7C4C:;
  {uint32_t ea=c->r[6]+0x00000001u; c->r[0]=R8(ea); c->r[6]=ea;} // 800C7C4C
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800C7C50
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 800C7C54
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7C4C; } // 800C7C58
  return; // 800C7C5C
}

// fn_800C7C60
void f_800C7C60(Ctx* __restrict c) {
  c->r[7]=c->r[3]+c->r[5]; // 800C7C60
  c->r[6]=c->r[4]+c->r[5]; // 800C7C64
  c->r[3]=rotl(c->r[7],0)&0x00000003u; cr0(c,c->r[3]); // 800C7C68
  if (crb(c,2)) { goto L_800C7C84; } // 800C7C6C
  c->r[5]=c->r[5]-c->r[3]; // 800C7C70
L_800C7C74:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 800C7C74
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 800C7C78
  {uint32_t ea=c->r[7]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[7]=ea;} // 800C7C7C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7C74; } // 800C7C80
L_800C7C84:;
  c->r[4]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[4]); // 800C7C84
  if (crb(c,2)) { goto L_800C7CD4; } // 800C7C88
L_800C7C8C:;
  c->r[3]=R32(c->r[6]+0xFFFFFFFCu); // 800C7C8C
  c->r[4]=addc(c,c->r[4],0xFFFFFFFFu,0); cr0(c,c->r[4]); // 800C7C90
  c->r[0]=R32(c->r[6]+0xFFFFFFF8u); // 800C7C94
  W32(c->r[7]+0xFFFFFFFCu,c->r[3]); // 800C7C98
  c->r[3]=R32(c->r[6]+0xFFFFFFF4u); // 800C7C9C
  W32(c->r[7]+0xFFFFFFF8u,c->r[0]); // 800C7CA0
  c->r[0]=R32(c->r[6]+0xFFFFFFF0u); // 800C7CA4
  W32(c->r[7]+0xFFFFFFF4u,c->r[3]); // 800C7CA8
  c->r[3]=R32(c->r[6]+0xFFFFFFECu); // 800C7CAC
  W32(c->r[7]+0xFFFFFFF0u,c->r[0]); // 800C7CB0
  c->r[0]=R32(c->r[6]+0xFFFFFFE8u); // 800C7CB4
  W32(c->r[7]+0xFFFFFFECu,c->r[3]); // 800C7CB8
  c->r[3]=R32(c->r[6]+0xFFFFFFE4u); // 800C7CBC
  W32(c->r[7]+0xFFFFFFE8u,c->r[0]); // 800C7CC0
  {uint32_t ea=c->r[6]+0xFFFFFFE0u; c->r[0]=R32(ea); c->r[6]=ea;} // 800C7CC4
  W32(c->r[7]+0xFFFFFFE4u,c->r[3]); // 800C7CC8
  {uint32_t ea=c->r[7]+0xFFFFFFE0u; W32(ea,c->r[0]); c->r[7]=ea;} // 800C7CCC
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7C8C; } // 800C7CD0
L_800C7CD4:;
  c->r[3]=rotl(c->r[5],30)&0x00000007u; cr0(c,c->r[3]); // 800C7CD4
  if (crb(c,2)) { goto L_800C7CEC; } // 800C7CD8
L_800C7CDC:;
  {uint32_t ea=c->r[6]+0xFFFFFFFCu; c->r[0]=R32(ea); c->r[6]=ea;} // 800C7CDC
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 800C7CE0
  {uint32_t ea=c->r[7]+0xFFFFFFFCu; W32(ea,c->r[0]); c->r[7]=ea;} // 800C7CE4
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7CDC; } // 800C7CE8
L_800C7CEC:;
  c->r[5]=rotl(c->r[5],0)&0x00000003u; cr0(c,c->r[5]); // 800C7CEC
  if (crb(c,2)) return; // 800C7CF0
L_800C7CF4:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 800C7CF4
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800C7CF8
  {uint32_t ea=c->r[7]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[7]=ea;} // 800C7CFC
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7CF4; } // 800C7D00
  return; // 800C7D04
}

// fn_800C7D08
void f_800C7D08(Ctx* __restrict c) {
  c->r[0]=0u-c->r[3]; // 800C7D08
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800C7D0C
  c->r[6]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[6]); // 800C7D10
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800C7D14
  if (crb(c,2)) { goto L_800C7D30; } // 800C7D18
  c->r[5]=c->r[5]-c->r[6]; // 800C7D1C
L_800C7D20:;
  {uint32_t ea=c->r[8]+0x00000001u; c->r[0]=R8(ea); c->r[8]=ea;} // 800C7D20
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800C7D24
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 800C7D28
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7D20; } // 800C7D2C
L_800C7D30:;
  c->r[0]=c->r[8]+0x00000001u; // 800C7D30
  c->r[6]=c->r[3]+0xFFFFFFFDu; // 800C7D34
  c->r[9]=rotl(c->r[0],0)&0x00000003u; // 800C7D38
  c->r[7]=rotl(c->r[5],29)&0x1FFFFFFFu; // 800C7D3C
  c->r[8]=c->r[8]-c->r[9]; // 800C7D40
  c->r[10]=rotl(c->r[0],3)&0x00000018u; // 800C7D44
  {uint32_t ea=c->r[8]+0x00000001u; c->r[4]=R32(ea); c->r[8]=ea;} // 800C7D48
  c->r[11]=addc(c,~c->r[10],0x00000020u,1); // 800C7D4C
L_800C7D50:;
  c->r[3]=R32(c->r[8]+0x00000004u); // 800C7D50
  c->r[4]=((c->r[10])&0x20)?0u:(c->r[4]<<((c->r[10])&31)); // 800C7D54
  c->r[7]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[7]); // 800C7D58
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[3]>>((c->r[11])&31)); // 800C7D5C
  c->r[3]=((c->r[10])&0x20)?0u:(c->r[3]<<((c->r[10])&31)); // 800C7D60
  c->r[0]=c->r[4]|c->r[0]; // 800C7D64
  W32(c->r[6]+0x00000004u,c->r[0]); // 800C7D68
  {uint32_t ea=c->r[8]+0x00000008u; c->r[4]=R32(ea); c->r[8]=ea;} // 800C7D6C
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[4]>>((c->r[11])&31)); // 800C7D70
  c->r[0]=c->r[3]|c->r[0]; // 800C7D74
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 800C7D78
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7D50; } // 800C7D7C
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 800C7D80
  if (crb(c,2)) { goto L_800C7D9C; } // 800C7D84
  {uint32_t ea=c->r[8]+0x00000004u; c->r[0]=R32(ea); c->r[8]=ea;} // 800C7D88
  c->r[3]=((c->r[10])&0x20)?0u:(c->r[4]<<((c->r[10])&31)); // 800C7D8C
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[0]>>((c->r[11])&31)); // 800C7D90
  c->r[0]=c->r[3]|c->r[0]; // 800C7D94
  {uint32_t ea=c->r[6]+0x00000004u; W32(ea,c->r[0]); c->r[6]=ea;} // 800C7D98
L_800C7D9C:;
  c->r[5]=rotl(c->r[5],0)&0x00000003u; cr0(c,c->r[5]); // 800C7D9C
  c->r[4]=c->r[8]+0x00000003u; // 800C7DA0
  c->r[3]=c->r[6]+0x00000003u; // 800C7DA4
  if (crb(c,2)) return; // 800C7DA8
  c->r[0]=addc(c,~c->r[9],0x00000004u,1); // 800C7DAC
  c->r[4]=c->r[4]-c->r[0]; // 800C7DB0
L_800C7DB4:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800C7DB4
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800C7DB8
  {uint32_t ea=c->r[3]+0x00000001u; W8(ea,c->r[0]); c->r[3]=ea;} // 800C7DBC
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7DB4; } // 800C7DC0
  return; // 800C7DC4
}

// fn_800C7DC8
void f_800C7DC8(Ctx* __restrict c) {
  c->r[11]=c->r[3]+c->r[5]; // 800C7DC8
  c->r[10]=c->r[4]+c->r[5]; // 800C7DCC
  c->r[3]=rotl(c->r[11],0)&0x00000003u; cr0(c,c->r[3]); // 800C7DD0
  if (crb(c,2)) { goto L_800C7DEC; } // 800C7DD4
  c->r[5]=c->r[5]-c->r[3]; // 800C7DD8
L_800C7DDC:;
  {uint32_t ea=c->r[10]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[10]=ea;} // 800C7DDC
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 800C7DE0
  {uint32_t ea=c->r[11]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[11]=ea;} // 800C7DE4
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7DDC; } // 800C7DE8
L_800C7DEC:;
  c->r[8]=rotl(c->r[10],3)&0x00000018u; // 800C7DEC
  c->r[7]=rotl(c->r[10],0)&0x00000003u; // 800C7DF0
  c->r[9]=addc(c,~c->r[8],0x00000020u,1); // 800C7DF4
  c->r[6]=rotl(c->r[5],29)&0x1FFFFFFFu; // 800C7DF8
  c->r[0]=addc(c,~c->r[7],0x00000004u,1); // 800C7DFC
  c->r[10]=c->r[10]+c->r[0]; // 800C7E00
  {uint32_t ea=c->r[10]+0xFFFFFFFCu; c->r[4]=R32(ea); c->r[10]=ea;} // 800C7E04
L_800C7E08:;
  c->r[0]=R32(c->r[10]+0xFFFFFFFCu); // 800C7E08
  c->r[3]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 800C7E0C
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800C7E10
  c->r[4]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 800C7E14
  c->r[0]=((c->r[9])&0x20)?0u:(c->r[0]>>((c->r[9])&31)); // 800C7E18
  c->r[3]=c->r[4]|c->r[3]; // 800C7E1C
  W32(c->r[11]+0xFFFFFFFCu,c->r[3]); // 800C7E20
  {uint32_t ea=c->r[10]+0xFFFFFFF8u; c->r[4]=R32(ea); c->r[10]=ea;} // 800C7E24
  c->r[3]=((c->r[8])&0x20)?0u:(c->r[4]<<((c->r[8])&31)); // 800C7E28
  c->r[0]=c->r[3]|c->r[0]; // 800C7E2C
  {uint32_t ea=c->r[11]+0xFFFFFFF8u; W32(ea,c->r[0]); c->r[11]=ea;} // 800C7E30
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7E08; } // 800C7E34
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 800C7E38
  if (crb(c,2)) { goto L_800C7E54; } // 800C7E3C
  {uint32_t ea=c->r[10]+0xFFFFFFFCu; c->r[3]=R32(ea); c->r[10]=ea;} // 800C7E40
  c->r[0]=((c->r[9])&0x20)?0u:(c->r[4]>>((c->r[9])&31)); // 800C7E44
  c->r[3]=((c->r[8])&0x20)?0u:(c->r[3]<<((c->r[8])&31)); // 800C7E48
  c->r[0]=c->r[3]|c->r[0]; // 800C7E4C
  {uint32_t ea=c->r[11]+0xFFFFFFFCu; W32(ea,c->r[0]); c->r[11]=ea;} // 800C7E50
L_800C7E54:;
  c->r[5]=rotl(c->r[5],0)&0x00000003u; cr0(c,c->r[5]); // 800C7E54
  if (crb(c,2)) return; // 800C7E58
  c->r[10]=c->r[10]+c->r[7]; // 800C7E5C
L_800C7E60:;
  {uint32_t ea=c->r[10]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[10]=ea;} // 800C7E60
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800C7E64
  {uint32_t ea=c->r[11]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[11]=ea;} // 800C7E68
  if (!crb(c,2)) { IRQCHK(c); goto L_800C7E60; } // 800C7E6C
  return; // 800C7E70
}

// fn_800C7E74
void f_800C7E74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7E74
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800C7E78
  c->r[0]=R32(c->r[1]+0x00000008u); // 800C7E7C
  c->r[3]=rotl(c->r[0],0)&0x80000000u; // 800C7E80
  c->r[1]=c->r[1]+0x00000010u; // 800C7E84
  return; // 800C7E88
}

// fn_800C7E8C
void f_800C7E8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7E8C
  c->r[0]=0u+0x7FF00000u; // 800C7E90
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800C7E94
  c->r[4]=R32(c->r[1]+0x00000008u); // 800C7E98
  c->r[3]=rotl(c->r[4],0)&0x7FF00000u; // 800C7E9C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800C7EA0
  if (crb(c,2)) { goto L_800C7EB8; } // 800C7EA4
  if (!crb(c,0)) { goto L_800C7F00; } // 800C7EA8
  cmps(c,0,(int32_t)c->r[3],0); // 800C7EAC
  if (crb(c,2)) { goto L_800C7EDC; } // 800C7EB0
  goto L_800C7F00; // 800C7EB4
L_800C7EB8:;
  c->r[0]=rotl(c->r[4],0)&0x000FFFFFu; cr0(c,c->r[0]); // 800C7EB8
  if (!crb(c,2)) { goto L_800C7ECC; } // 800C7EBC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800C7EC0
  cmps(c,0,(int32_t)c->r[0],0); // 800C7EC4
  if (crb(c,2)) { goto L_800C7ED4; } // 800C7EC8
L_800C7ECC:;
  c->r[3]=0u+0x00000001u; // 800C7ECC
  goto L_800C7F04; // 800C7ED0
L_800C7ED4:;
  c->r[3]=0u+0x00000002u; // 800C7ED4
  goto L_800C7F04; // 800C7ED8
L_800C7EDC:;
  c->r[0]=rotl(c->r[4],0)&0x000FFFFFu; cr0(c,c->r[0]); // 800C7EDC
  if (!crb(c,2)) { goto L_800C7EF0; } // 800C7EE0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800C7EE4
  cmps(c,0,(int32_t)c->r[0],0); // 800C7EE8
  if (crb(c,2)) { goto L_800C7EF8; } // 800C7EEC
L_800C7EF0:;
  c->r[3]=0u+0x00000005u; // 800C7EF0
  goto L_800C7F04; // 800C7EF4
L_800C7EF8:;
  c->r[3]=0u+0x00000003u; // 800C7EF8
  goto L_800C7F04; // 800C7EFC
L_800C7F00:;
  c->r[3]=0u+0x00000004u; // 800C7F00
L_800C7F04:;
  c->r[1]=c->r[1]+0x00000010u; // 800C7F04
  return; // 800C7F08
}

// __stdio_atexit
void f_800C7F0C(Ctx* __restrict c) {
  trace_call(0x800C7F0Cu);
  c->r[3]=0u+0x800C0000u; // 800C7F0C
  c->r[3]=c->r[3]+0x00004DC4u; // 800C7F10
  W32(c->r[13]+0xFFFFA4E4u,c->r[3]); // 800C7F14
  return; // 800C7F18
}

// parse_format
void f_800C7F1C(Ctx* __restrict c) {
  trace_call(0x800C7F1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C7F1C
  c->r[0]=c->lr; // 800C7F20
  c->r[7]=0u+0x00000000u; // 800C7F24
  c->r[6]=R8(c->r[3]+0x00000001u); // 800C7F28
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C7F2C
  c->r[8]=0u+0x00000001u; // 800C7F30
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800C7F34
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800C7F38
  cmps(c,0,(int32_t)c->r[6],37); // 800C7F3C
  c->r[31]=c->r[3]+0x00000001u; // 800C7F40
  W32(c->r[1]+0x00000028u,c->r[30]); // 800C7F44
  c->r[30]=c->r[5]|c->r[5]; // 800C7F48
  W32(c->r[1]+0x00000024u,c->r[29]); // 800C7F4C
  c->r[29]=c->r[4]|c->r[4]; // 800C7F50
  W8(c->r[1]+0x00000009u,c->r[7]); // 800C7F54
  W8(c->r[1]+0x00000008u,c->r[8]); // 800C7F58
  W8(c->r[1]+0x0000000Au,c->r[7]); // 800C7F5C
  W8(c->r[1]+0x0000000Bu,c->r[7]); // 800C7F60
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 800C7F64
  W32(c->r[1]+0x00000010u,c->r[7]); // 800C7F68
  W32(c->r[1]+0x00000014u,c->r[7]); // 800C7F6C
  if (!crb(c,2)) { goto L_800C7F98; } // 800C7F70
  W8(c->r[1]+0x0000000Du,c->r[6]); // 800C7F74
  c->r[3]=c->r[31]+0x00000001u; // 800C7F78
  c->r[4]=R32(c->r[1]+0x00000008u); // 800C7F7C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800C7F80
  W32(c->r[5]+0x00000000u,c->r[4]); // 800C7F84
  W32(c->r[5]+0x00000004u,c->r[0]); // 800C7F88
  W32(c->r[5]+0x00000008u,c->r[7]); // 800C7F8C
  W32(c->r[5]+0x0000000Cu,c->r[7]); // 800C7F90
  goto L_800C84FC; // 800C7F94
L_800C7F98:;
  c->r[4]=0u+0x80220000u; // 800C7F98
  c->r[0]=0u+0x00000002u; // 800C7F9C
L_800C7FA0:;
  c->r[5]=c->r[6]+0xFFFFFFE0u; // 800C7FA0
  c->r[9]=0u+0x00000001u; // 800C7FA4
  cmpu(c,0,c->r[5],0x00000010u); // 800C7FA8
  if (crb(c,1)) { goto L_800C8004; } // 800C7FAC
  c->r[3]=c->r[4]+0xFFFFBFB8u; // 800C7FB0
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800C7FB4
  c->r[3]=R32(c->r[3]+c->r[5]); // 800C7FB8
  c->ctr=c->r[3]; // 800C7FBC
  if (true) { switch (c->ctr) { case 0x800C7FC4u: goto L_800C7FC4; case 0x800C7FCCu: goto L_800C7FCC; case 0x800C7FD4u: goto L_800C7FD4; case 0x800C7FE8u: goto L_800C7FE8; case 0x800C7FF0u: goto L_800C7FF0; case 0x800C8004u: goto L_800C8004; case 0x800C82D8u: goto L_800C82D8; case 0x800C8320u: goto L_800C8320; case 0x800C8370u: goto L_800C8370; case 0x800C83C4u: goto L_800C83C4; case 0x800C83D8u: goto L_800C83D8; case 0x800C8430u: goto L_800C8430; case 0x800C8454u: goto L_800C8454; case 0x800C848Cu: goto L_800C848C; case 0x800C84B8u: goto L_800C84B8; case 0x800C84D0u: goto L_800C84D0; default: break; } dispatch(c,c->ctr); return; } // 800C7FC0
L_800C7FC4:;
  W8(c->r[1]+0x00000008u,c->r[7]); // 800C7FC4
  goto L_800C8008; // 800C7FC8
L_800C7FCC:;
  W8(c->r[1]+0x00000009u,c->r[8]); // 800C7FCC
  goto L_800C8008; // 800C7FD0
L_800C7FD4:;
  c->r[3]=R8(c->r[1]+0x00000009u); // 800C7FD4
  cmpu(c,0,c->r[3],0x00000001u); // 800C7FD8
  if (crb(c,2)) { goto L_800C8008; } // 800C7FDC
  W8(c->r[1]+0x00000009u,c->r[0]); // 800C7FE0
  goto L_800C8008; // 800C7FE4
L_800C7FE8:;
  W8(c->r[1]+0x0000000Bu,c->r[8]); // 800C7FE8
  goto L_800C8008; // 800C7FEC
L_800C7FF0:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 800C7FF0
  cmps(c,0,(int32_t)c->r[3],0); // 800C7FF4
  if (crb(c,2)) { goto L_800C8008; } // 800C7FF8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C7FFC
  goto L_800C8008; // 800C8000
L_800C8004:;
  c->r[9]=0u+0x00000000u; // 800C8004
L_800C8008:;
  cmps(c,0,(int32_t)c->r[9],0); // 800C8008
  if (crb(c,2)) { goto L_800C801C; } // 800C800C
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 800C8010
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800C8014
  IRQCHK(c); goto L_800C7FA0; // 800C8018
L_800C801C:;
  cmps(c,0,(int32_t)c->r[6],42); // 800C801C
  if (!crb(c,2)) { goto L_800C805C; } // 800C8020
  c->r[3]=c->r[29]|c->r[29]; // 800C8024
  c->r[4]=0u+0x00000001u; // 800C8028
  c->lr=0x800C8030u; f_800C1750(c); // 800C802C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C8030
  cmps(c,0,(int32_t)c->r[0],0); // 800C8034
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C8038
  if (!crb(c,0)) { goto L_800C8050; } // 800C803C
  c->r[0]=0u-c->r[0]; // 800C8040
  c->r[3]=0u+0x00000000u; // 800C8044
  W8(c->r[1]+0x00000008u,c->r[3]); // 800C8048
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C804C
L_800C8050:;
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 800C8050
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800C8054
  goto L_800C80C8; // 800C8058
L_800C805C:;
  c->r[3]=0u+0x80220000u; // 800C805C
  c->r[3]=c->r[3]+0xFFFFBE90u; // 800C8060
  c->r[4]=R32(c->r[3]+0x00000038u); // 800C8064
  goto L_800C8088; // 800C8068
L_800C806C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 800C806C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800C8070
  c->r[3]=c->r[6]+c->r[0]; // 800C8074
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 800C8078
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 800C807C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800C8080
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800C8084
L_800C8088:;
  cmps(c,0,(int32_t)c->r[6],0); // 800C8088
  c->r[0]=0u+0x00000000u; // 800C808C
  if (crb(c,0)) { goto L_800C809C; } // 800C8090
  cmps(c,0,(int32_t)c->r[6],256); // 800C8094
  if (crb(c,0)) { goto L_800C80A0; } // 800C8098
L_800C809C:;
  c->r[0]=0u+0x00000001u; // 800C809C
L_800C80A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C80A0
  if (crb(c,2)) { goto L_800C80B0; } // 800C80A4
  c->r[0]=0u+0x00000000u; // 800C80A8
  goto L_800C80C0; // 800C80AC
L_800C80B0:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 800C80B0
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800C80B4
  c->r[0]=R16(c->r[3]+c->r[0]); // 800C80B8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800C80BC
L_800C80C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C80C0
  if (!crb(c,2)) { IRQCHK(c); goto L_800C806C; } // 800C80C4
L_800C80C8:;
  c->r[7]=R32(c->r[1]+0x00000010u); // 800C80C8
  cmps(c,0,(int32_t)c->r[7],509); // 800C80CC
  if (!crb(c,1)) { goto L_800C8100; } // 800C80D0
  c->r[0]=0u+0x000000FFu; // 800C80D4
  c->r[5]=R32(c->r[1]+0x00000008u); // 800C80D8
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800C80DC
  c->r[3]=c->r[31]+0x00000001u; // 800C80E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C80E4
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800C80E8
  W32(c->r[30]+0x00000000u,c->r[5]); // 800C80EC
  W32(c->r[30]+0x00000004u,c->r[4]); // 800C80F0
  W32(c->r[30]+0x00000008u,c->r[7]); // 800C80F4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800C80F8
  goto L_800C84FC; // 800C80FC
L_800C8100:;
  cmps(c,0,(int32_t)c->r[6],46); // 800C8100
  if (!crb(c,2)) { goto L_800C81BC; } // 800C8104
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 800C8108
  c->r[0]=0u+0x00000001u; // 800C810C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800C8110
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800C8114
  cmps(c,0,(int32_t)c->r[6],42); // 800C8118
  if (!crb(c,2)) { goto L_800C8150; } // 800C811C
  c->r[3]=c->r[29]|c->r[29]; // 800C8120
  c->r[4]=0u+0x00000001u; // 800C8124
  c->lr=0x800C812Cu; f_800C1750(c); // 800C8128
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C812C
  cmps(c,0,(int32_t)c->r[0],0); // 800C8130
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8134
  if (!crb(c,0)) { goto L_800C8144; } // 800C8138
  c->r[0]=0u+0x00000000u; // 800C813C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800C8140
L_800C8144:;
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 800C8144
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800C8148
  goto L_800C81BC; // 800C814C
L_800C8150:;
  c->r[3]=0u+0x80220000u; // 800C8150
  c->r[3]=c->r[3]+0xFFFFBE90u; // 800C8154
  c->r[4]=R32(c->r[3]+0x00000038u); // 800C8158
  goto L_800C817C; // 800C815C
L_800C8160:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C8160
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800C8164
  c->r[3]=c->r[6]+c->r[0]; // 800C8168
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 800C816C
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 800C8170
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8174
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800C8178
L_800C817C:;
  cmps(c,0,(int32_t)c->r[6],0); // 800C817C
  c->r[0]=0u+0x00000000u; // 800C8180
  if (crb(c,0)) { goto L_800C8190; } // 800C8184
  cmps(c,0,(int32_t)c->r[6],256); // 800C8188
  if (crb(c,0)) { goto L_800C8194; } // 800C818C
L_800C8190:;
  c->r[0]=0u+0x00000001u; // 800C8190
L_800C8194:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C8194
  if (crb(c,2)) { goto L_800C81A4; } // 800C8198
  c->r[0]=0u+0x00000000u; // 800C819C
  goto L_800C81B4; // 800C81A0
L_800C81A4:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 800C81A4
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800C81A8
  c->r[0]=R16(c->r[3]+c->r[0]); // 800C81AC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800C81B0
L_800C81B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C81B4
  if (!crb(c,2)) { IRQCHK(c); goto L_800C8160; } // 800C81B8
L_800C81BC:;
  cmps(c,0,(int32_t)c->r[6],107); // 800C81BC
  c->r[4]=0u+0x00000001u; // 800C81C0
  if (crb(c,2)) { goto L_800C829C; } // 800C81C4
  if (!crb(c,0)) { goto L_800C81F0; } // 800C81C8
  cmps(c,0,(int32_t)c->r[6],104); // 800C81CC
  if (crb(c,2)) { goto L_800C8214; } // 800C81D0
  if (!crb(c,0)) { goto L_800C81E4; } // 800C81D4
  cmps(c,0,(int32_t)c->r[6],76); // 800C81D8
  if (crb(c,2)) { goto L_800C826C; } // 800C81DC
  goto L_800C829C; // 800C81E0
L_800C81E4:;
  cmps(c,0,(int32_t)c->r[6],106); // 800C81E4
  if (!crb(c,0)) { goto L_800C8278; } // 800C81E8
  goto L_800C829C; // 800C81EC
L_800C81F0:;
  cmps(c,0,(int32_t)c->r[6],116); // 800C81F0
  if (crb(c,2)) { goto L_800C8284; } // 800C81F4
  if (!crb(c,0)) { goto L_800C8208; } // 800C81F8
  cmps(c,0,(int32_t)c->r[6],109); // 800C81FC
  if (!crb(c,0)) { goto L_800C829C; } // 800C8200
  goto L_800C8240; // 800C8204
L_800C8208:;
  cmps(c,0,(int32_t)c->r[6],122); // 800C8208
  if (crb(c,2)) { goto L_800C8290; } // 800C820C
  goto L_800C829C; // 800C8210
L_800C8214:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 800C8214
  c->r[3]=0u+0x00000002u; // 800C8218
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800C821C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C8220
  cmps(c,0,(int32_t)c->r[3],104); // 800C8224
  if (!crb(c,2)) { goto L_800C82A0; } // 800C8228
  c->r[0]=0u+0x00000001u; // 800C822C
  c->r[6]=c->r[3]|c->r[3]; // 800C8230
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800C8234
  c->r[31]=c->r[31]+0x00000001u; // 800C8238
  goto L_800C82A0; // 800C823C
L_800C8240:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 800C8240
  c->r[3]=0u+0x00000003u; // 800C8244
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800C8248
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C824C
  cmps(c,0,(int32_t)c->r[3],108); // 800C8250
  if (!crb(c,2)) { goto L_800C82A0; } // 800C8254
  c->r[0]=0u+0x00000004u; // 800C8258
  c->r[6]=c->r[3]|c->r[3]; // 800C825C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800C8260
  c->r[31]=c->r[31]+0x00000001u; // 800C8264
  goto L_800C82A0; // 800C8268
L_800C826C:;
  c->r[0]=0u+0x00000009u; // 800C826C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800C8270
  goto L_800C82A0; // 800C8274
L_800C8278:;
  c->r[0]=0u+0x00000006u; // 800C8278
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800C827C
  goto L_800C82A0; // 800C8280
L_800C8284:;
  c->r[0]=0u+0x00000008u; // 800C8284
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800C8288
  goto L_800C82A0; // 800C828C
L_800C8290:;
  c->r[0]=0u+0x00000007u; // 800C8290
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800C8294
  goto L_800C82A0; // 800C8298
L_800C829C:;
  c->r[4]=0u+0x00000000u; // 800C829C
L_800C82A0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C82A0
  if (crb(c,2)) { goto L_800C82B0; } // 800C82A4
  {uint32_t ea=c->r[31]+0x00000001u; c->r[6]=R8(ea); c->r[31]=ea;} // 800C82A8
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 800C82AC
L_800C82B0:;
  c->r[0]=c->r[6]+0xFFFFFFBFu; // 800C82B0
  W8(c->r[1]+0x0000000Du,c->r[6]); // 800C82B4
  cmpu(c,0,c->r[0],0x00000037u); // 800C82B8
  if (crb(c,1)) { goto L_800C84D0; } // 800C82BC
  c->r[3]=0u+0x80220000u; // 800C82C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C82C4
  c->r[3]=c->r[3]+0xFFFFBED8u; // 800C82C8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C82CC
  c->ctr=c->r[3]; // 800C82D0
  if (true) { switch (c->ctr) { case 0x800C7FC4u: goto L_800C7FC4; case 0x800C7FCCu: goto L_800C7FCC; case 0x800C7FD4u: goto L_800C7FD4; case 0x800C7FE8u: goto L_800C7FE8; case 0x800C7FF0u: goto L_800C7FF0; case 0x800C8004u: goto L_800C8004; case 0x800C82D8u: goto L_800C82D8; case 0x800C8320u: goto L_800C8320; case 0x800C8370u: goto L_800C8370; case 0x800C83C4u: goto L_800C83C4; case 0x800C83D8u: goto L_800C83D8; case 0x800C8430u: goto L_800C8430; case 0x800C8454u: goto L_800C8454; case 0x800C848Cu: goto L_800C848C; case 0x800C84B8u: goto L_800C84B8; case 0x800C84D0u: goto L_800C84D0; default: break; } dispatch(c,c->ctr); return; } // 800C82D4
L_800C82D8:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C82D8
  cmpu(c,0,c->r[0],0x00000009u); // 800C82DC
  if (!crb(c,2)) { goto L_800C82F0; } // 800C82E0
  c->r[0]=0u+0x000000FFu; // 800C82E4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800C82E8
  goto L_800C84D8; // 800C82EC
L_800C82F0:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800C82F0
  cmps(c,0,(int32_t)c->r[0],0); // 800C82F4
  if (!crb(c,2)) { goto L_800C8308; } // 800C82F8
  c->r[0]=0u+0x00000001u; // 800C82FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8300
  goto L_800C84D8; // 800C8304
L_800C8308:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800C8308
  cmpu(c,0,c->r[0],0x00000002u); // 800C830C
  if (!crb(c,2)) { goto L_800C84D8; } // 800C8310
  c->r[0]=0u+0x00000001u; // 800C8314
  W8(c->r[1]+0x00000008u,c->r[0]); // 800C8318
  goto L_800C84D8; // 800C831C
L_800C8320:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C8320
  cmpu(c,0,c->r[0],0x00000002u); // 800C8324
  if (crb(c,2)) { goto L_800C834C; } // 800C8328
  cmpu(c,0,c->r[0],0x00000006u); // 800C832C
  if (crb(c,2)) { goto L_800C834C; } // 800C8330
  cmpu(c,0,c->r[0],0x00000007u); // 800C8334
  if (crb(c,2)) { goto L_800C834C; } // 800C8338
  cmpu(c,0,c->r[0],0x00000008u); // 800C833C
  if (crb(c,2)) { goto L_800C834C; } // 800C8340
  cmpu(c,0,c->r[0],0x00000004u); // 800C8344
  if (!crb(c,2)) { goto L_800C8358; } // 800C8348
L_800C834C:;
  c->r[0]=0u+0x000000FFu; // 800C834C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800C8350
  goto L_800C84D8; // 800C8354
L_800C8358:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800C8358
  cmps(c,0,(int32_t)c->r[0],0); // 800C835C
  if (!crb(c,2)) { goto L_800C84D8; } // 800C8360
  c->r[0]=0u+0x00000006u; // 800C8364
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8368
  goto L_800C84D8; // 800C836C
L_800C8370:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800C8370
  cmps(c,0,(int32_t)c->r[0],0); // 800C8374
  if (!crb(c,2)) { goto L_800C8384; } // 800C8378
  c->r[0]=0u+0x0000000Du; // 800C837C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8380
L_800C8384:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C8384
  cmpu(c,0,c->r[0],0x00000002u); // 800C8388
  if (crb(c,2)) { goto L_800C83B8; } // 800C838C
  cmpu(c,0,c->r[0],0x00000006u); // 800C8390
  if (crb(c,2)) { goto L_800C83B8; } // 800C8394
  cmpu(c,0,c->r[0],0x00000007u); // 800C8398
  if (crb(c,2)) { goto L_800C83B8; } // 800C839C
  cmpu(c,0,c->r[0],0x00000008u); // 800C83A0
  if (crb(c,2)) { goto L_800C83B8; } // 800C83A4
  cmpu(c,0,c->r[0],0x00000004u); // 800C83A8
  if (crb(c,2)) { goto L_800C83B8; } // 800C83AC
  cmpu(c,0,c->r[0],0x00000001u); // 800C83B0
  if (!crb(c,2)) { goto L_800C84D8; } // 800C83B4
L_800C83B8:;
  c->r[0]=0u+0x000000FFu; // 800C83B8
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800C83BC
  goto L_800C84D8; // 800C83C0
L_800C83C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C83C4
  cmps(c,0,(int32_t)c->r[0],0); // 800C83C8
  if (!crb(c,2)) { goto L_800C83D8; } // 800C83CC
  c->r[0]=0u+0x00000001u; // 800C83D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C83D4
L_800C83D8:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C83D8
  cmpu(c,0,c->r[0],0x00000002u); // 800C83DC
  if (crb(c,2)) { goto L_800C840C; } // 800C83E0
  cmpu(c,0,c->r[0],0x00000006u); // 800C83E4
  if (crb(c,2)) { goto L_800C840C; } // 800C83E8
  cmpu(c,0,c->r[0],0x00000007u); // 800C83EC
  if (crb(c,2)) { goto L_800C840C; } // 800C83F0
  cmpu(c,0,c->r[0],0x00000008u); // 800C83F4
  if (crb(c,2)) { goto L_800C840C; } // 800C83F8
  cmpu(c,0,c->r[0],0x00000004u); // 800C83FC
  if (crb(c,2)) { goto L_800C840C; } // 800C8400
  cmpu(c,0,c->r[0],0x00000001u); // 800C8404
  if (!crb(c,2)) { goto L_800C8418; } // 800C8408
L_800C840C:;
  c->r[0]=0u+0x000000FFu; // 800C840C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800C8410
  goto L_800C84D8; // 800C8414
L_800C8418:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800C8418
  cmps(c,0,(int32_t)c->r[0],0); // 800C841C
  if (!crb(c,2)) { goto L_800C84D8; } // 800C8420
  c->r[0]=0u+0x00000006u; // 800C8424
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C8428
  goto L_800C84D8; // 800C842C
L_800C8430:;
  c->r[5]=0u+0x00000078u; // 800C8430
  c->r[4]=0u+0x00000001u; // 800C8434
  c->r[3]=0u+0x00000003u; // 800C8438
  c->r[0]=0u+0x00000008u; // 800C843C
  W8(c->r[1]+0x0000000Du,c->r[5]); // 800C8440
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 800C8444
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800C8448
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C844C
  goto L_800C84D8; // 800C8450
L_800C8454:;
  c->r[3]=R8(c->r[1]+0x0000000Cu); // 800C8454
  cmpu(c,0,c->r[3],0x00000003u); // 800C8458
  if (!crb(c,2)) { goto L_800C846C; } // 800C845C
  c->r[0]=0u+0x00000005u; // 800C8460
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800C8464
  goto L_800C84D8; // 800C8468
L_800C846C:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800C846C
  cmps(c,0,(int32_t)c->r[0],0); // 800C8470
  if (!crb(c,2)) { goto L_800C8480; } // 800C8474
  cmps(c,0,(int32_t)c->r[3],0); // 800C8478
  if (crb(c,2)) { goto L_800C84D8; } // 800C847C
L_800C8480:;
  c->r[0]=0u+0x000000FFu; // 800C8480
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800C8484
  goto L_800C84D8; // 800C8488
L_800C848C:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C848C
  cmpu(c,0,c->r[0],0x00000003u); // 800C8490
  if (!crb(c,2)) { goto L_800C84A4; } // 800C8494
  c->r[0]=0u+0x00000005u; // 800C8498
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800C849C
  goto L_800C84D8; // 800C84A0
L_800C84A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C84A4
  if (crb(c,2)) { goto L_800C84D8; } // 800C84A8
  c->r[0]=0u+0x000000FFu; // 800C84AC
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800C84B0
  goto L_800C84D8; // 800C84B4
L_800C84B8:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C84B8
  cmpu(c,0,c->r[0],0x00000009u); // 800C84BC
  if (!crb(c,2)) { goto L_800C84D8; } // 800C84C0
  c->r[0]=0u+0x000000FFu; // 800C84C4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800C84C8
  goto L_800C84D8; // 800C84CC
L_800C84D0:;
  c->r[0]=0u+0x000000FFu; // 800C84D0
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800C84D4
L_800C84D8:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 800C84D8
  c->r[3]=c->r[31]+0x00000001u; // 800C84DC
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800C84E0
  c->r[4]=R32(c->r[1]+0x00000010u); // 800C84E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C84E8
  W32(c->r[30]+0x00000000u,c->r[6]); // 800C84EC
  W32(c->r[30]+0x00000004u,c->r[5]); // 800C84F0
  W32(c->r[30]+0x00000008u,c->r[4]); // 800C84F4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800C84F8
L_800C84FC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C84FC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800C8500
  c->r[30]=R32(c->r[1]+0x00000028u); // 800C8504
  c->r[29]=R32(c->r[1]+0x00000024u); // 800C8508
  c->lr=c->r[0]; // 800C850C
  c->r[1]=c->r[1]+0x00000030u; // 800C8510
  return; // 800C8514
}

// long2str
void f_800C8518(Ctx* __restrict c) {
  trace_call(0x800C8518u);
  c->r[8]=0u+0x00000000u; // 800C8518
  cmps(c,0,(int32_t)c->r[3],0); // 800C851C
  W8(c->r[4]+0xFFFFFFFFu,c->r[8]); // 800C8520
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 800C8524
  c->r[7]=0u+0x00000000u; // 800C8528
  if (!crb(c,2)) { goto L_800C855C; } // 800C852C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800C8530
  cmps(c,0,(int32_t)c->r[0],0); // 800C8534
  if (!crb(c,2)) { goto L_800C855C; } // 800C8538
  c->r[0]=R8(c->r[5]+0x00000003u); // 800C853C
  cmps(c,0,(int32_t)c->r[0],0); // 800C8540
  if (crb(c,2)) { goto L_800C8554; } // 800C8544
  c->r[0]=R8(c->r[5]+0x00000005u); // 800C8548
  cmpu(c,0,c->r[0],0x0000006Fu); // 800C854C
  if (crb(c,2)) { goto L_800C855C; } // 800C8550
L_800C8554:;
  c->r[3]=c->r[6]|c->r[6]; // 800C8554
  return; // 800C8558
L_800C855C:;
  c->r[9]=R8(c->r[5]+0x00000005u); // 800C855C
  c->r[10]=c->r[9]+0xFFFFFFA8u; // 800C8560
  cmpu(c,0,c->r[10],0x00000020u); // 800C8564
  if (crb(c,1)) { goto L_800C85D4; } // 800C8568
  c->r[9]=0u+0x80220000u; // 800C856C
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800C8570
  c->r[9]=c->r[9]+0xFFFFBFFCu; // 800C8574
  c->r[9]=R32(c->r[9]+c->r[10]); // 800C8578
  c->ctr=c->r[9]; // 800C857C
  if (true) { switch (c->ctr) { case 0x800C8584u: goto L_800C8584; case 0x800C85A8u: goto L_800C85A8; case 0x800C85B8u: goto L_800C85B8; case 0x800C85C8u: goto L_800C85C8; case 0x800C85D4u: goto L_800C85D4; default: break; } dispatch(c,c->ctr); return; } // 800C8580
L_800C8584:;
  cmps(c,0,(int32_t)c->r[3],0); // 800C8584
  c->r[0]=0u+0x0000000Au; // 800C8588
  if (!crb(c,0)) { goto L_800C85D4; } // 800C858C
  c->r[8]=c->r[3]+0x80000000u; // 800C8590
  cmpu(c,0,c->r[8],0x00000000u); // 800C8594
  if (crb(c,2)) { goto L_800C85A0; } // 800C8598
  c->r[3]=0u-c->r[3]; // 800C859C
L_800C85A0:;
  c->r[8]=0u+0x00000001u; // 800C85A0
  goto L_800C85D4; // 800C85A4
L_800C85A8:;
  c->r[9]=0u+0x00000000u; // 800C85A8
  c->r[0]=0u+0x00000008u; // 800C85AC
  W8(c->r[5]+0x00000001u,c->r[9]); // 800C85B0
  goto L_800C85D4; // 800C85B4
L_800C85B8:;
  c->r[9]=0u+0x00000000u; // 800C85B8
  c->r[0]=0u+0x0000000Au; // 800C85BC
  W8(c->r[5]+0x00000001u,c->r[9]); // 800C85C0
  goto L_800C85D4; // 800C85C4
L_800C85C8:;
  c->r[9]=0u+0x00000000u; // 800C85C8
  c->r[0]=0u+0x00000010u; // 800C85CC
  W8(c->r[5]+0x00000001u,c->r[9]); // 800C85D0
L_800C85D4:;
  c->r[9]=divwu(c->r[3],c->r[0]); // 800C85D4
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 800C85D8
  c->r[11]=c->r[3]-c->r[9]; // 800C85DC
  c->r[3]=divwu(c->r[3],c->r[0]); // 800C85E0
  cmps(c,0,(int32_t)c->r[11],10); // 800C85E4
  if (!crb(c,0)) { goto L_800C85F4; } // 800C85E8
  c->r[11]=c->r[11]+0x00000030u; // 800C85EC
  goto L_800C860C; // 800C85F0
L_800C85F4:;
  c->r[9]=R8(c->r[5]+0x00000005u); // 800C85F4
  c->r[10]=c->r[11]+0x00000037u; // 800C85F8
  cmpu(c,0,c->r[9],0x00000078u); // 800C85FC
  if (!crb(c,2)) { goto L_800C8608; } // 800C8600
  c->r[10]=c->r[11]+0x00000057u; // 800C8604
L_800C8608:;
  c->r[11]=c->r[10]|c->r[10]; // 800C8608
L_800C860C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800C860C
  W8(c->r[6]+0xFFFFFFFFu,c->r[11]); // 800C8610
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800C8614
  c->r[7]=c->r[7]+0x00000001u; // 800C8618
  if (!crb(c,2)) { IRQCHK(c); goto L_800C85D4; } // 800C861C
  cmpu(c,0,c->r[0],0x00000008u); // 800C8620
  if (!crb(c,2)) { goto L_800C864C; } // 800C8624
  c->r[3]=R8(c->r[5]+0x00000003u); // 800C8628
  cmps(c,0,(int32_t)c->r[3],0); // 800C862C
  if (crb(c,2)) { goto L_800C864C; } // 800C8630
  c->r[3]=R8(c->r[6]+0x00000000u); // 800C8634
  cmps(c,0,(int32_t)c->r[3],48); // 800C8638
  if (crb(c,2)) { goto L_800C864C; } // 800C863C
  c->r[3]=0u+0x00000030u; // 800C8640
  c->r[7]=c->r[7]+0x00000001u; // 800C8644
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[6]=ea;} // 800C8648
L_800C864C:;
  c->r[3]=R8(c->r[5]+0x00000000u); // 800C864C
  cmpu(c,0,c->r[3],0x00000002u); // 800C8650
  if (!crb(c,2)) { goto L_800C86A0; } // 800C8654
  c->r[3]=R32(c->r[5]+0x00000008u); // 800C8658
  cmps(c,0,(int32_t)c->r[8],0); // 800C865C
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800C8660
  if (!crb(c,2)) { goto L_800C8674; } // 800C8664
  c->r[3]=R8(c->r[5]+0x00000001u); // 800C8668
  cmps(c,0,(int32_t)c->r[3],0); // 800C866C
  if (crb(c,2)) { goto L_800C8680; } // 800C8670
L_800C8674:;
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 800C8674
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800C8678
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800C867C
L_800C8680:;
  cmpu(c,0,c->r[0],0x00000010u); // 800C8680
  if (!crb(c,2)) { goto L_800C86A0; } // 800C8684
  c->r[3]=R8(c->r[5]+0x00000003u); // 800C8688
  cmps(c,0,(int32_t)c->r[3],0); // 800C868C
  if (crb(c,2)) { goto L_800C86A0; } // 800C8690
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 800C8694
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 800C8698
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800C869C
L_800C86A0:;
  c->r[9]=R32(c->r[5]+0x0000000Cu); // 800C86A0
  c->r[3]=c->r[4]-c->r[6]; // 800C86A4
  c->r[3]=c->r[9]+c->r[3]; // 800C86A8
  cmps(c,0,(int32_t)c->r[3],509); // 800C86AC
  if (!crb(c,1)) { goto L_800C86BC; } // 800C86B0
  c->r[3]=0u+0x00000000u; // 800C86B4
  return; // 800C86B8
L_800C86BC:;
  c->r[4]=0u+0x00000030u; // 800C86BC
  goto L_800C86CC; // 800C86C0
L_800C86C4:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[4]); c->r[6]=ea;} // 800C86C4
  c->r[7]=c->r[7]+0x00000001u; // 800C86C8
L_800C86CC:;
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 800C86CC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[3]); // 800C86D0
  if (crb(c,0)) { IRQCHK(c); goto L_800C86C4; } // 800C86D4
  cmpu(c,0,c->r[0],0x00000010u); // 800C86D8
  if (!crb(c,2)) { goto L_800C86FC; } // 800C86DC
  c->r[0]=R8(c->r[5]+0x00000003u); // 800C86E0
  cmps(c,0,(int32_t)c->r[0],0); // 800C86E4
  if (crb(c,2)) { goto L_800C86FC; } // 800C86E8
  c->r[3]=R8(c->r[5]+0x00000005u); // 800C86EC
  c->r[0]=0u+0x00000030u; // 800C86F0
  W8(c->r[6]+0xFFFFFFFFu,c->r[3]); // 800C86F4
  {uint32_t ea=c->r[6]+0xFFFFFFFEu; W8(ea,c->r[0]); c->r[6]=ea;} // 800C86F8
L_800C86FC:;
  cmps(c,0,(int32_t)c->r[8],0); // 800C86FC
  if (crb(c,2)) { goto L_800C8710; } // 800C8700
  c->r[0]=0u+0x0000002Du; // 800C8704
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[6]=ea;} // 800C8708
  goto L_800C8738; // 800C870C
L_800C8710:;
  c->r[0]=R8(c->r[5]+0x00000001u); // 800C8710
  cmpu(c,0,c->r[0],0x00000001u); // 800C8714
  if (!crb(c,2)) { goto L_800C8728; } // 800C8718
  c->r[0]=0u+0x0000002Bu; // 800C871C
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[6]=ea;} // 800C8720
  goto L_800C8738; // 800C8724
L_800C8728:;
  cmpu(c,0,c->r[0],0x00000002u); // 800C8728
  if (!crb(c,2)) { goto L_800C8738; } // 800C872C
  c->r[0]=0u+0x00000020u; // 800C8730
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[6]=ea;} // 800C8734
L_800C8738:;
  c->r[3]=c->r[6]|c->r[6]; // 800C8738
  return; // 800C873C
}

// longlong2str
void f_800C8740(Ctx* __restrict c) {
  trace_call(0x800C8740u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8740
  c->r[0]=c->lr; // 800C8744
  W32(c->r[1]+0x00000034u,c->r[0]); // 800C8748
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 800C874C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C8750
  c->r[25]=0u+0x00000000u; // 800C8754
  c->r[31]=c->r[3]|c->r[3]; // 800C8758
  c->r[30]=c->r[4]|c->r[4]; // 800C875C
  c->r[23]=c->r[5]|c->r[5]; // 800C8760
  c->r[24]=c->r[6]|c->r[6]; // 800C8764
  c->r[27]=c->r[5]+0xFFFFFFFFu; // 800C8768
  c->r[26]=0u+0x00000000u; // 800C876C
  W8(c->r[5]+0xFFFFFFFFu,c->r[25]); // 800C8770
  if (!crb(c,2)) { goto L_800C87A4; } // 800C8774
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800C8778
  cmps(c,0,(int32_t)c->r[0],0); // 800C877C
  if (!crb(c,2)) { goto L_800C87A4; } // 800C8780
  c->r[0]=R8(c->r[6]+0x00000003u); // 800C8784
  cmps(c,0,(int32_t)c->r[0],0); // 800C8788
  if (crb(c,2)) { goto L_800C879C; } // 800C878C
  c->r[0]=R8(c->r[6]+0x00000005u); // 800C8790
  cmpu(c,0,c->r[0],0x0000006Fu); // 800C8794
  if (crb(c,2)) { goto L_800C87A4; } // 800C8798
L_800C879C:;
  c->r[3]=c->r[27]|c->r[27]; // 800C879C
  goto L_800C89CC; // 800C87A0
L_800C87A4:;
  c->r[5]=R8(c->r[6]+0x00000005u); // 800C87A4
  c->r[0]=c->r[5]+0xFFFFFFA8u; // 800C87A8
  cmpu(c,0,c->r[0],0x00000020u); // 800C87AC
  if (crb(c,1)) { goto L_800C883C; } // 800C87B0
  c->r[5]=0u+0x80220000u; // 800C87B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C87B8
  c->r[5]=c->r[5]+0xFFFFC080u; // 800C87BC
  c->r[5]=R32(c->r[5]+c->r[0]); // 800C87C0
  c->ctr=c->r[5]; // 800C87C4
  if (true) { switch (c->ctr) { case 0x800C87CCu: goto L_800C87CC; case 0x800C8810u: goto L_800C8810; case 0x800C8820u: goto L_800C8820; case 0x800C8830u: goto L_800C8830; case 0x800C883Cu: goto L_800C883C; default: break; } dispatch(c,c->ctr); return; } // 800C87C8
L_800C87CC:;
  c->r[29]=0u+0x00000000u; // 800C87CC
  c->r[0]=c->r[3]^0x80000000u; // 800C87D0
  c->r[6]=c->r[29]^0x80000000u; // 800C87D4
  c->r[28]=0u+0x0000000Au; // 800C87D8
  c->r[5]=addc(c,~c->r[29],c->r[4],1); // 800C87DC
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 800C87E0
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 800C87E4
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 800C87E8
  if (crb(c,2)) { goto L_800C883C; } // 800C87EC
  c->r[0]=0u+0x80000000u; // 800C87F0
  c->r[0]=c->r[3]^c->r[0]; // 800C87F4
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 800C87F8
  if (crb(c,2)) { goto L_800C8808; } // 800C87FC
  c->r[30]=addc(c,~c->r[4],0x00000000u,1); // 800C8800
  c->r[31]=addc(c,~c->r[3],0,c->xer_ca); // 800C8804
L_800C8808:;
  c->r[25]=0u+0x00000001u; // 800C8808
  goto L_800C883C; // 800C880C
L_800C8810:;
  c->r[29]=0u+0x00000000u; // 800C8810
  c->r[28]=0u+0x00000008u; // 800C8814
  W8(c->r[6]+0x00000001u,c->r[29]); // 800C8818
  goto L_800C883C; // 800C881C
L_800C8820:;
  c->r[29]=0u+0x00000000u; // 800C8820
  c->r[28]=0u+0x0000000Au; // 800C8824
  W8(c->r[6]+0x00000001u,c->r[29]); // 800C8828
  goto L_800C883C; // 800C882C
L_800C8830:;
  c->r[29]=0u+0x00000000u; // 800C8830
  c->r[28]=0u+0x00000010u; // 800C8834
  W8(c->r[6]+0x00000001u,c->r[29]); // 800C8838
L_800C883C:;
  c->r[3]=c->r[31]|c->r[31]; // 800C883C
  c->r[4]=c->r[30]|c->r[30]; // 800C8840
  c->r[5]=c->r[29]|c->r[29]; // 800C8844
  c->r[6]=c->r[28]|c->r[28]; // 800C8848
  c->lr=0x800C8850u; f_800C23E0(c); // 800C884C
  c->r[22]=c->r[4]|c->r[4]; // 800C8850
  c->r[3]=c->r[31]|c->r[31]; // 800C8854
  c->r[4]=c->r[30]|c->r[30]; // 800C8858
  c->r[5]=c->r[29]|c->r[29]; // 800C885C
  c->r[6]=c->r[28]|c->r[28]; // 800C8860
  c->lr=0x800C8868u; f_800C21BC(c); // 800C8864
  cmps(c,0,(int32_t)c->r[22],10); // 800C8868
  c->r[30]=c->r[4]|c->r[4]; // 800C886C
  c->r[31]=c->r[3]|c->r[3]; // 800C8870
  if (!crb(c,0)) { goto L_800C8880; } // 800C8874
  c->r[5]=c->r[22]+0x00000030u; // 800C8878
  goto L_800C8894; // 800C887C
L_800C8880:;
  c->r[0]=R8(c->r[24]+0x00000005u); // 800C8880
  c->r[5]=c->r[22]+0x00000037u; // 800C8884
  cmpu(c,0,c->r[0],0x00000078u); // 800C8888
  if (!crb(c,2)) { goto L_800C8894; } // 800C888C
  c->r[5]=c->r[22]+0x00000057u; // 800C8890
L_800C8894:;
  c->r[0]=c->r[4]|c->r[3]; cr0(c,c->r[0]); // 800C8894
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[5]); c->r[27]=ea;} // 800C8898
  c->r[26]=c->r[26]+0x00000001u; // 800C889C
  if (!crb(c,2)) { IRQCHK(c); goto L_800C883C; } // 800C88A0
  c->r[0]=c->r[28]^0x00000008u; // 800C88A4
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 800C88A8
  if (!crb(c,2)) { goto L_800C88D4; } // 800C88AC
  c->r[0]=R8(c->r[24]+0x00000003u); // 800C88B0
  cmps(c,0,(int32_t)c->r[0],0); // 800C88B4
  if (crb(c,2)) { goto L_800C88D4; } // 800C88B8
  c->r[0]=R8(c->r[27]+0x00000000u); // 800C88BC
  cmps(c,0,(int32_t)c->r[0],48); // 800C88C0
  if (crb(c,2)) { goto L_800C88D4; } // 800C88C4
  c->r[0]=0u+0x00000030u; // 800C88C8
  c->r[26]=c->r[26]+0x00000001u; // 800C88CC
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[27]=ea;} // 800C88D0
L_800C88D4:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 800C88D4
  cmpu(c,0,c->r[0],0x00000002u); // 800C88D8
  if (!crb(c,2)) { goto L_800C892C; } // 800C88DC
  c->r[0]=R32(c->r[24]+0x00000008u); // 800C88E0
  cmps(c,0,(int32_t)c->r[25],0); // 800C88E4
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 800C88E8
  if (!crb(c,2)) { goto L_800C88FC; } // 800C88EC
  c->r[0]=R8(c->r[24]+0x00000001u); // 800C88F0
  cmps(c,0,(int32_t)c->r[0],0); // 800C88F4
  if (crb(c,2)) { goto L_800C8908; } // 800C88F8
L_800C88FC:;
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 800C88FC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C8900
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 800C8904
L_800C8908:;
  c->r[0]=c->r[28]^0x00000010u; // 800C8908
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 800C890C
  if (!crb(c,2)) { goto L_800C892C; } // 800C8910
  c->r[0]=R8(c->r[24]+0x00000003u); // 800C8914
  cmps(c,0,(int32_t)c->r[0],0); // 800C8918
  if (crb(c,2)) { goto L_800C892C; } // 800C891C
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 800C8920
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800C8924
  W32(c->r[24]+0x0000000Cu,c->r[0]); // 800C8928
L_800C892C:;
  c->r[3]=R32(c->r[24]+0x0000000Cu); // 800C892C
  c->r[0]=c->r[23]-c->r[27]; // 800C8930
  c->r[0]=c->r[3]+c->r[0]; // 800C8934
  cmps(c,0,(int32_t)c->r[0],509); // 800C8938
  if (!crb(c,1)) { goto L_800C8948; } // 800C893C
  c->r[3]=0u+0x00000000u; // 800C8940
  goto L_800C89CC; // 800C8944
L_800C8948:;
  c->r[3]=0u+0x00000030u; // 800C8948
  goto L_800C8958; // 800C894C
L_800C8950:;
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[27]=ea;} // 800C8950
  c->r[26]=c->r[26]+0x00000001u; // 800C8954
L_800C8958:;
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 800C8958
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800C895C
  if (crb(c,0)) { IRQCHK(c); goto L_800C8950; } // 800C8960
  c->r[0]=c->r[28]^0x00000010u; // 800C8964
  c->r[0]=c->r[0]|c->r[29]; cr0(c,c->r[0]); // 800C8968
  if (!crb(c,2)) { goto L_800C898C; } // 800C896C
  c->r[0]=R8(c->r[24]+0x00000003u); // 800C8970
  cmps(c,0,(int32_t)c->r[0],0); // 800C8974
  if (crb(c,2)) { goto L_800C898C; } // 800C8978
  c->r[3]=R8(c->r[24]+0x00000005u); // 800C897C
  c->r[0]=0u+0x00000030u; // 800C8980
  W8(c->r[27]+0xFFFFFFFFu,c->r[3]); // 800C8984
  {uint32_t ea=c->r[27]+0xFFFFFFFEu; W8(ea,c->r[0]); c->r[27]=ea;} // 800C8988
L_800C898C:;
  cmps(c,0,(int32_t)c->r[25],0); // 800C898C
  if (crb(c,2)) { goto L_800C89A0; } // 800C8990
  c->r[0]=0u+0x0000002Du; // 800C8994
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[27]=ea;} // 800C8998
  goto L_800C89C8; // 800C899C
L_800C89A0:;
  c->r[0]=R8(c->r[24]+0x00000001u); // 800C89A0
  cmpu(c,0,c->r[0],0x00000001u); // 800C89A4
  if (!crb(c,2)) { goto L_800C89B8; } // 800C89A8
  c->r[0]=0u+0x0000002Bu; // 800C89AC
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[27]=ea;} // 800C89B0
  goto L_800C89C8; // 800C89B4
L_800C89B8:;
  cmpu(c,0,c->r[0],0x00000002u); // 800C89B8
  if (!crb(c,2)) { goto L_800C89C8; } // 800C89BC
  c->r[0]=0u+0x00000020u; // 800C89C0
  {uint32_t ea=c->r[27]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[27]=ea;} // 800C89C4
L_800C89C8:;
  c->r[3]=c->r[27]|c->r[27]; // 800C89C8
L_800C89CC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C89CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800C89D0
  c->lr=c->r[0]; // 800C89D4
  c->r[1]=c->r[1]+0x00000030u; // 800C89D8
  return; // 800C89DC
}

// double2hex
void f_800C89E0(Ctx* __restrict c) {
  trace_call(0x800C89E0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C89E0
  c->r[0]=c->lr; // 800C89E4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800C89E8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800C89EC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800C89F0
  c->r[5]=0u+0x80220000u; // 800C89F4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800C89F8
  c->f[31]=c->f[1]; // 800C89FC
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800C8A00
  cmps(c,0,(int32_t)c->r[0],509); // 800C8A04
  W32(c->r[1]+0x00000078u,c->r[30]); // 800C8A08
  c->r[30]=c->r[4]|c->r[4]; // 800C8A0C
  W32(c->r[1]+0x00000074u,c->r[29]); // 800C8A10
  W32(c->r[1]+0x00000070u,c->r[28]); // 800C8A14
  c->r[28]=c->r[3]|c->r[3]; // 800C8A18
  c->r[5]=R32(c->r[5]+0xFFFFBCE0u); // 800C8A1C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800C8A20
  c->r[31]=R8(c->r[5]+0x00000000u); // 800C8A24
  if (!crb(c,1)) { goto L_800C8A34; } // 800C8A28
  c->r[3]=0u+0x00000000u; // 800C8A2C
  goto L_800C8D80; // 800C8A30
L_800C8A34:;
  c->r[29]=0u+0x00000000u; // 800C8A34
  c->r[0]=0u+0x00000020u; // 800C8A38
  W8(c->r[1]+0x00000010u,c->r[29]); // 800C8A3C
  c->r[3]=c->r[1]+0x00000010u; // 800C8A40
  c->r[4]=c->r[1]+0x00000038u; // 800C8A44
  W16(c->r[1]+0x00000012u,c->r[0]); // 800C8A48
  c->lr=0x800C8A50u; f_800C5F78(c); // 800C8A4C
  c->f[1]=std::fabs(c->f[31]); // 800C8A50
  {uint32_t ea=c->r[2]+0xFFFF91C0u; c->f[0]=RF64(ea);} // 800C8A54
  fcmp(c,0,c->f[0],c->f[1]); // 800C8A58
  if (!crb(c,2)) { goto L_800C8A7C; } // 800C8A5C
  c->r[29]=c->r[28]+0xFFFFFFFAu; // 800C8A60
  c->r[4]=0u+0x801F0000u; // 800C8A64
  c->r[3]=c->r[29]|c->r[29]; // 800C8A68
  c->r[4]=c->r[4]+0x000041C0u; // 800C8A6C
  c->lr=0x800C8A74u; f_800CB9F0(c); // 800C8A70
  c->r[3]=c->r[29]|c->r[29]; // 800C8A74
  goto L_800C8D80; // 800C8A78
L_800C8A7C:;
  c->r[0]=R8(c->r[1]+0x0000003Du); // 800C8A7C
  cmpu(c,0,c->r[0],0x00000049u); // 800C8A80
  if (!crb(c,2)) { goto L_800C8B18; } // 800C8A84
  c->r[0]=R8(c->r[1]+0x00000038u); // 800C8A88
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C8A8C
  if (crb(c,2)) { goto L_800C8AD4; } // 800C8A90
  c->r[0]=R8(c->r[30]+0x00000005u); // 800C8A94
  c->r[29]=c->r[28]+0xFFFFFFFBu; // 800C8A98
  cmpu(c,0,c->r[0],0x00000041u); // 800C8A9C
  if (!crb(c,2)) { goto L_800C8ABC; } // 800C8AA0
  c->r[4]=0u+0x801F0000u; // 800C8AA4
  c->r[3]=c->r[29]|c->r[29]; // 800C8AA8
  c->r[4]=c->r[4]+0x000041C0u; // 800C8AAC
  c->r[4]=c->r[4]+0x00000006u; // 800C8AB0
  c->lr=0x800C8AB8u; f_800CB9F0(c); // 800C8AB4
  goto L_800C8B10; // 800C8AB8
L_800C8ABC:;
  c->r[4]=0u+0x801F0000u; // 800C8ABC
  c->r[3]=c->r[29]|c->r[29]; // 800C8AC0
  c->r[4]=c->r[4]+0x000041C0u; // 800C8AC4
  c->r[4]=c->r[4]+0x0000000Bu; // 800C8AC8
  c->lr=0x800C8AD0u; f_800CB9F0(c); // 800C8ACC
  goto L_800C8B10; // 800C8AD0
L_800C8AD4:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 800C8AD4
  c->r[29]=c->r[28]+0xFFFFFFFCu; // 800C8AD8
  cmpu(c,0,c->r[0],0x00000041u); // 800C8ADC
  if (!crb(c,2)) { goto L_800C8AFC; } // 800C8AE0
  c->r[4]=0u+0x801F0000u; // 800C8AE4
  c->r[3]=c->r[29]|c->r[29]; // 800C8AE8
  c->r[4]=c->r[4]+0x000041C0u; // 800C8AEC
  c->r[4]=c->r[4]+0x00000010u; // 800C8AF0
  c->lr=0x800C8AF8u; f_800CB9F0(c); // 800C8AF4
  goto L_800C8B10; // 800C8AF8
L_800C8AFC:;
  c->r[4]=0u+0x801F0000u; // 800C8AFC
  c->r[3]=c->r[29]|c->r[29]; // 800C8B00
  c->r[4]=c->r[4]+0x000041C0u; // 800C8B04
  c->r[4]=c->r[4]+0x00000014u; // 800C8B08
  c->lr=0x800C8B10u; f_800CB9F0(c); // 800C8B0C
L_800C8B10:;
  c->r[3]=c->r[29]|c->r[29]; // 800C8B10
  goto L_800C8D80; // 800C8B14
L_800C8B18:;
  cmpu(c,0,c->r[0],0x0000004Eu); // 800C8B18
  if (!crb(c,2)) { goto L_800C8BB0; } // 800C8B1C
  c->r[0]=R8(c->r[1]+0x00000038u); // 800C8B20
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C8B24
  if (crb(c,2)) { goto L_800C8B6C; } // 800C8B28
  c->r[0]=R8(c->r[30]+0x00000005u); // 800C8B2C
  c->r[29]=c->r[28]+0xFFFFFFFBu; // 800C8B30
  cmpu(c,0,c->r[0],0x00000041u); // 800C8B34
  if (!crb(c,2)) { goto L_800C8B54; } // 800C8B38
  c->r[4]=0u+0x801F0000u; // 800C8B3C
  c->r[3]=c->r[29]|c->r[29]; // 800C8B40
  c->r[4]=c->r[4]+0x000041C0u; // 800C8B44
  c->r[4]=c->r[4]+0x00000018u; // 800C8B48
  c->lr=0x800C8B50u; f_800CB9F0(c); // 800C8B4C
  goto L_800C8BA8; // 800C8B50
L_800C8B54:;
  c->r[4]=0u+0x801F0000u; // 800C8B54
  c->r[3]=c->r[29]|c->r[29]; // 800C8B58
  c->r[4]=c->r[4]+0x000041C0u; // 800C8B5C
  c->r[4]=c->r[4]+0x0000001Du; // 800C8B60
  c->lr=0x800C8B68u; f_800CB9F0(c); // 800C8B64
  goto L_800C8BA8; // 800C8B68
L_800C8B6C:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 800C8B6C
  c->r[29]=c->r[28]+0xFFFFFFFCu; // 800C8B70
  cmpu(c,0,c->r[0],0x00000041u); // 800C8B74
  if (!crb(c,2)) { goto L_800C8B94; } // 800C8B78
  c->r[4]=0u+0x801F0000u; // 800C8B7C
  c->r[3]=c->r[29]|c->r[29]; // 800C8B80
  c->r[4]=c->r[4]+0x000041C0u; // 800C8B84
  c->r[4]=c->r[4]+0x00000022u; // 800C8B88
  c->lr=0x800C8B90u; f_800CB9F0(c); // 800C8B8C
  goto L_800C8BA8; // 800C8B90
L_800C8B94:;
  c->r[4]=0u+0x801F0000u; // 800C8B94
  c->r[3]=c->r[29]|c->r[29]; // 800C8B98
  c->r[4]=c->r[4]+0x000041C0u; // 800C8B9C
  c->r[4]=c->r[4]+0x00000026u; // 800C8BA0
  c->lr=0x800C8BA8u; f_800CB9F0(c); // 800C8BA4
L_800C8BA8:;
  c->r[3]=c->r[29]|c->r[29]; // 800C8BA8
  goto L_800C8D80; // 800C8BAC
L_800C8BB0:;
  c->r[8]=0u+0x00000001u; // 800C8BB0
  c->r[7]=0u+0x00000064u; // 800C8BB4
  c->r[0]=R8(c->r[1]+0x00000009u); // 800C8BB8
  c->r[4]=c->r[28]|c->r[28]; // 800C8BBC
  c->r[3]=R8(c->r[1]+0x00000008u); // 800C8BC0
  c->r[5]=c->r[1]+0x00000018u; // 800C8BC4
  c->r[0]=rotl(c->r[0],17)&0xFFFE0000u; // 800C8BC8
  W8(c->r[1]+0x00000028u,c->r[8]); // 800C8BCC
  c->r[0]=(rotl(c->r[3],25)&0xFE000000u)|(c->r[0]&~0xFE000000u); // 800C8BD0
  c->r[3]=rotl(c->r[0],11)&0x000007FFu; // 800C8BD4
  W8(c->r[1]+0x00000029u,c->r[8]); // 800C8BD8
  c->r[3]=c->r[3]+0xFFFFFC01u; // 800C8BDC
  W8(c->r[1]+0x0000002Au,c->r[29]); // 800C8BE0
  W8(c->r[1]+0x0000002Bu,c->r[29]); // 800C8BE4
  c->r[6]=R32(c->r[1]+0x00000028u); // 800C8BE8
  W8(c->r[1]+0x0000002Cu,c->r[29]); // 800C8BEC
  W8(c->r[1]+0x0000002Du,c->r[7]); // 800C8BF0
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800C8BF4
  W32(c->r[1]+0x00000030u,c->r[29]); // 800C8BF8
  W32(c->r[1]+0x00000034u,c->r[8]); // 800C8BFC
  W32(c->r[1]+0x00000018u,c->r[6]); // 800C8C00
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C8C04
  W32(c->r[1]+0x00000020u,c->r[29]); // 800C8C08
  W32(c->r[1]+0x00000024u,c->r[8]); // 800C8C0C
  c->lr=0x800C8C14u; f_800C8518(c); // 800C8C10
  c->r[0]=R8(c->r[30]+0x00000005u); // 800C8C14
  cmpu(c,0,c->r[0],0x00000061u); // 800C8C18
  if (!crb(c,2)) { goto L_800C8C30; } // 800C8C1C
  c->r[0]=0u+0x00000070u; // 800C8C20
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 800C8C24
  W8(c->r[3]+0xFFFFFFFFu,c->r[0]); // 800C8C28
  goto L_800C8C3C; // 800C8C2C
L_800C8C30:;
  c->r[0]=0u+0x00000050u; // 800C8C30
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 800C8C34
  W8(c->r[3]+0xFFFFFFFFu,c->r[0]); // 800C8C38
L_800C8C3C:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800C8C3C
  c->r[8]=c->r[1]+0x00000008u; // 800C8C40
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C8C44
  c->r[9]=c->r[3]+0x0000000Bu; // 800C8C48
  c->ctr=c->r[0]; // 800C8C4C
  cmps(c,0,(int32_t)c->r[0],1); // 800C8C50
  if (crb(c,0)) { goto L_800C8CF0; } // 800C8C54
L_800C8C58:;
  cmps(c,0,(int32_t)c->r[9],64); // 800C8C58
  if (!crb(c,0)) { goto L_800C8CE0; } // 800C8C5C
  c->r[3]=sraw(c,c->r[9],3); // 800C8C60
  c->r[0]=c->r[9]+0xFFFFFFFCu; // 800C8C64
  c->r[7]=c->r[8]+c->r[3]; // 800C8C68
  c->r[6]=rotl(c->r[9],0)&0x00000007u; // 800C8C6C
  c->r[3]=rotl(c->r[9],0)&0xFFFFFFF8u; // 800C8C70
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 800C8C74
  c->r[5]=R8(c->r[7]+0x00000000u); // 800C8C78
  c->r[6]=addc(c,~c->r[6],0x00000007u,1); // 800C8C7C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800C8C80
  c->r[0]=sraw(c,c->r[5],(c->r[6])&63); // 800C8C84
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800C8C88
  if (crb(c,2)) { goto L_800C8CA4; } // 800C8C8C
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 800C8C90
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 800C8C94
  c->r[0]=sraw(c,c->r[0],(c->r[6])&63); // 800C8C98
  c->r[0]=c->r[3]|c->r[0]; // 800C8C9C
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800C8CA0
L_800C8CA4:;
  c->r[3]=rotl(c->r[3],0)&0x0000000Fu; // 800C8CA4
  cmpu(c,0,c->r[3],0x0000000Au); // 800C8CA8
  if (!crb(c,0)) { goto L_800C8CBC; } // 800C8CAC
  c->r[0]=c->r[3]+0x00000030u; // 800C8CB0
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800C8CB4
  goto L_800C8CE4; // 800C8CB8
L_800C8CBC:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 800C8CBC
  cmpu(c,0,c->r[0],0x00000061u); // 800C8CC0
  if (!crb(c,2)) { goto L_800C8CD4; } // 800C8CC4
  c->r[0]=c->r[3]+0x00000057u; // 800C8CC8
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800C8CCC
  goto L_800C8CE4; // 800C8CD0
L_800C8CD4:;
  c->r[0]=c->r[3]+0x00000037u; // 800C8CD4
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800C8CD8
  goto L_800C8CE4; // 800C8CDC
L_800C8CE0:;
  c->r[3]=0u+0x00000030u; // 800C8CE0
L_800C8CE4:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[4]=ea;} // 800C8CE4
  c->r[9]=c->r[9]+0xFFFFFFFCu; // 800C8CE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8C58; } // 800C8CEC
L_800C8CF0:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800C8CF0
  cmps(c,0,(int32_t)c->r[0],0); // 800C8CF4
  if (!crb(c,2)) { goto L_800C8D08; } // 800C8CF8
  c->r[0]=R8(c->r[30]+0x00000003u); // 800C8CFC
  cmps(c,0,(int32_t)c->r[0],0); // 800C8D00
  if (crb(c,2)) { goto L_800C8D0C; } // 800C8D04
L_800C8D08:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; W8(ea,c->r[31]); c->r[4]=ea;} // 800C8D08
L_800C8D0C:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 800C8D0C
  c->r[3]=0u+0x00000031u; // 800C8D10
  W8(c->r[4]+0xFFFFFFFFu,c->r[3]); // 800C8D14
  cmpu(c,0,c->r[0],0x00000061u); // 800C8D18
  if (!crb(c,2)) { goto L_800C8D2C; } // 800C8D1C
  c->r[0]=0u+0x00000078u; // 800C8D20
  {uint32_t ea=c->r[4]+0xFFFFFFFEu; W8(ea,c->r[0]); c->r[4]=ea;} // 800C8D24
  goto L_800C8D34; // 800C8D28
L_800C8D2C:;
  c->r[0]=0u+0x00000058u; // 800C8D2C
  {uint32_t ea=c->r[4]+0xFFFFFFFEu; W8(ea,c->r[0]); c->r[4]=ea;} // 800C8D30
L_800C8D34:;
  c->r[0]=0u+0x00000030u; // 800C8D34
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[4]=ea;} // 800C8D38
  c->r[0]=R8(c->r[1]+0x00000038u); // 800C8D3C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C8D40
  if (crb(c,2)) { goto L_800C8D54; } // 800C8D44
  c->r[0]=0u+0x0000002Du; // 800C8D48
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[4]=ea;} // 800C8D4C
  goto L_800C8D7C; // 800C8D50
L_800C8D54:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 800C8D54
  cmpu(c,0,c->r[0],0x00000001u); // 800C8D58
  if (!crb(c,2)) { goto L_800C8D6C; } // 800C8D5C
  c->r[0]=0u+0x0000002Bu; // 800C8D60
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[4]=ea;} // 800C8D64
  goto L_800C8D7C; // 800C8D68
L_800C8D6C:;
  cmpu(c,0,c->r[0],0x00000002u); // 800C8D6C
  if (!crb(c,2)) { goto L_800C8D7C; } // 800C8D70
  c->r[0]=0u+0x00000020u; // 800C8D74
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[4]=ea;} // 800C8D78
L_800C8D7C:;
  c->r[3]=c->r[4]|c->r[4]; // 800C8D7C
L_800C8D80:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 800C8D80
  c->r[0]=R32(c->r[1]+0x00000094u); // 800C8D84
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800C8D88
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800C8D8C
  c->r[30]=R32(c->r[1]+0x00000078u); // 800C8D90
  c->r[29]=R32(c->r[1]+0x00000074u); // 800C8D94
  c->r[28]=R32(c->r[1]+0x00000070u); // 800C8D98
  c->lr=c->r[0]; // 800C8D9C
  c->r[1]=c->r[1]+0x00000090u; // 800C8DA0
  return; // 800C8DA4
}

// fn_800C8DA8
void f_800C8DA8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800C8DA8
  if (!crb(c,0)) { goto L_800C8DCC; } // 800C8DAC
L_800C8DB0:;
  c->r[5]=0u+0x00000000u; // 800C8DB0
  c->r[4]=0u+0x00000001u; // 800C8DB4
  c->r[0]=0u+0x00000030u; // 800C8DB8
  W16(c->r[3]+0x00000002u,c->r[5]); // 800C8DBC
  W8(c->r[3]+0x00000004u,c->r[4]); // 800C8DC0
  W8(c->r[3]+0x00000005u,c->r[0]); // 800C8DC4
  return; // 800C8DC8
L_800C8DCC:;
  c->r[7]=R8(c->r[3]+0x00000004u); // 800C8DCC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 800C8DD0
  if (!crb(c,0)) return; // 800C8DD4
  c->r[6]=c->r[3]+c->r[4]; // 800C8DD8
  c->r[5]=R8(c->r[6]+0x00000005u); // 800C8DDC
  c->r[8]=c->r[6]+0x00000005u; // 800C8DE0
  c->r[0]=c->r[5]+0xFFFFFFD0u; // 800C8DE4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C8DE8
  cmps(c,0,(int32_t)c->r[6],5); // 800C8DEC
  if (!crb(c,2)) { goto L_800C8E30; } // 800C8DF0
  c->r[5]=c->r[3]+c->r[7]; // 800C8DF4
  c->r[5]=c->r[5]+0x00000005u; // 800C8DF8
L_800C8DFC:;
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800C8DFC
  cmpu(c,0,c->r[5],c->r[8]); // 800C8E00
  if (!crb(c,1)) { goto L_800C8E14; } // 800C8E04
  c->r[0]=R8(c->r[5]+0x00000000u); // 800C8E08
  cmps(c,0,(int32_t)c->r[0],48); // 800C8E0C
  if (crb(c,2)) { IRQCHK(c); goto L_800C8DFC; } // 800C8E10
L_800C8E14:;
  cmpu(c,0,c->r[5],c->r[8]); // 800C8E14
  if (!crb(c,2)) { goto L_800C8E28; } // 800C8E18
  c->r[0]=R8(c->r[8]+0xFFFFFFFFu); // 800C8E1C
  c->r[5]=rotl(c->r[0],0)&0x00000001u; // 800C8E20
  goto L_800C8E44; // 800C8E24
L_800C8E28:;
  c->r[5]=0u+0x00000001u; // 800C8E28
  goto L_800C8E44; // 800C8E2C
L_800C8E30:;
  c->r[0]=c->r[6]^0x00000005u; // 800C8E30
  c->r[5]=sraw(c,c->r[0],1); // 800C8E34
  c->r[0]=c->r[0]&c->r[6]; // 800C8E38
  c->r[0]=c->r[5]-c->r[0]; // 800C8E3C
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800C8E40
L_800C8E44:;
  c->ctr=c->r[4]; // 800C8E44
  cmps(c,0,(int32_t)c->r[4],0); // 800C8E48
  if (crb(c,2)) { goto L_800C8E98; } // 800C8E4C
L_800C8E50:;
  {uint32_t ea=c->r[8]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[8]=ea;} // 800C8E50
  c->r[5]=c->r[0]+c->r[5]; // 800C8E54
  c->r[0]=c->r[5]+0xFFFFFFD0u; // 800C8E58
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C8E5C
  c->r[0]=c->r[6]^0x00000009u; // 800C8E60
  c->r[5]=sraw(c,c->r[0],1); // 800C8E64
  c->r[0]=c->r[0]&c->r[6]; // 800C8E68
  c->r[0]=c->r[5]-c->r[0]; // 800C8E6C
  c->r[5]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[5]); // 800C8E70
  if (!crb(c,2)) { goto L_800C8E80; } // 800C8E74
  cmps(c,0,(int32_t)c->r[6],0); // 800C8E78
  if (!crb(c,2)) { goto L_800C8E88; } // 800C8E7C
L_800C8E80:;
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800C8E80
  goto L_800C8E94; // 800C8E84
L_800C8E88:;
  c->r[0]=c->r[6]+0x00000030u; // 800C8E88
  W8(c->r[8]+0x00000000u,c->r[0]); // 800C8E8C
  goto L_800C8E98; // 800C8E90
L_800C8E94:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C8E50; } // 800C8E94
L_800C8E98:;
  cmps(c,0,(int32_t)c->r[5],0); // 800C8E98
  if (crb(c,2)) { goto L_800C8EC0; } // 800C8E9C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 800C8EA0
  c->r[4]=0u+0x00000001u; // 800C8EA4
  c->r[0]=0u+0x00000031u; // 800C8EA8
  W8(c->r[3]+0x00000004u,c->r[4]); // 800C8EAC
  c->r[4]=c->r[5]+0x00000001u; // 800C8EB0
  W16(c->r[3]+0x00000002u,c->r[4]); // 800C8EB4
  W8(c->r[3]+0x00000005u,c->r[0]); // 800C8EB8
  return; // 800C8EBC
L_800C8EC0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800C8EC0
  if (crb(c,2)) { IRQCHK(c); goto L_800C8DB0; } // 800C8EC4
  W8(c->r[3]+0x00000004u,c->r[4]); // 800C8EC8
  return; // 800C8ECC
}

// float2str
void f_800C8ED0(Ctx* __restrict c) {
  trace_call(0x800C8ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C8ED0
  c->r[0]=c->lr; // 800C8ED4
  c->r[5]=0u+0x80220000u; // 800C8ED8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800C8EDC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800C8EE0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[31]);} // 800C8EE4
  c->f[31]=c->f[1]; // 800C8EE8
  cmps(c,0,(int32_t)c->r[0],509); // 800C8EEC
  W32(c->r[1]+0x00000044u,c->r[31]); // 800C8EF0
  W32(c->r[1]+0x00000040u,c->r[30]); // 800C8EF4
  W32(c->r[1]+0x0000003Cu,c->r[29]); // 800C8EF8
  c->r[29]=c->r[4]|c->r[4]; // 800C8EFC
  W32(c->r[1]+0x00000038u,c->r[28]); // 800C8F00
  c->r[28]=c->r[3]|c->r[3]; // 800C8F04
  c->r[5]=R32(c->r[5]+0xFFFFBCE0u); // 800C8F08
  c->r[30]=R8(c->r[5]+0x00000000u); // 800C8F0C
  if (!crb(c,1)) { goto L_800C8F1C; } // 800C8F10
  c->r[3]=0u+0x00000000u; // 800C8F14
  goto L_800C967C; // 800C8F18
L_800C8F1C:;
  c->r[3]=0u+0x00000000u; // 800C8F1C
  c->r[0]=0u+0x00000020u; // 800C8F20
  W8(c->r[1]+0x00000008u,c->r[3]); // 800C8F24
  c->r[3]=c->r[1]+0x00000008u; // 800C8F28
  c->r[4]=c->r[1]+0x0000000Cu; // 800C8F2C
  W16(c->r[1]+0x0000000Au,c->r[0]); // 800C8F30
  c->lr=0x800C8F38u; f_800C5F78(c); // 800C8F34
  c->r[0]=R8(c->r[1]+0x00000010u); // 800C8F38
  c->r[5]=c->r[1]+0x00000011u; // 800C8F3C
  c->r[5]=c->r[5]+c->r[0]; // 800C8F40
  goto L_800C8F60; // 800C8F44
L_800C8F48:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 800C8F48
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 800C8F4C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800C8F50
  c->r[0]=c->r[3]+0x00000001u; // 800C8F54
  W8(c->r[1]+0x00000010u,c->r[4]); // 800C8F58
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800C8F5C
L_800C8F60:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 800C8F60
  cmpu(c,0,c->r[0],0x00000001u); // 800C8F64
  if (!crb(c,1)) { goto L_800C8F78; } // 800C8F68
  {uint32_t ea=c->r[5]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[5]=ea;} // 800C8F6C
  cmps(c,0,(int32_t)c->r[0],48); // 800C8F70
  if (crb(c,2)) { IRQCHK(c); goto L_800C8F48; } // 800C8F74
L_800C8F78:;
  c->r[0]=R8(c->r[1]+0x00000011u); // 800C8F78
  cmps(c,0,(int32_t)c->r[0],73); // 800C8F7C
  if (crb(c,2)) { goto L_800C8FAC; } // 800C8F80
  if (!crb(c,0)) { goto L_800C8F94; } // 800C8F84
  cmps(c,0,(int32_t)c->r[0],48); // 800C8F88
  if (crb(c,2)) { goto L_800C8FA0; } // 800C8F8C
  goto L_800C91DC; // 800C8F90
L_800C8F94:;
  cmps(c,0,(int32_t)c->r[0],78); // 800C8F94
  if (crb(c,2)) { goto L_800C90C4; } // 800C8F98
  goto L_800C91DC; // 800C8F9C
L_800C8FA0:;
  c->r[0]=0u+0x00000000u; // 800C8FA0
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800C8FA4
  goto L_800C91DC; // 800C8FA8
L_800C8FAC:;
  {uint32_t ea=c->r[2]+0xFFFF91C0u; c->f[0]=RF64(ea);} // 800C8FAC
  fcmp(c,0,c->f[31],c->f[0]); // 800C8FB0
  if (!crb(c,0)) { goto L_800C903C; } // 800C8FB4
  c->r[4]=R8(c->r[29]+0x00000005u); // 800C8FB8
  c->r[31]=c->r[28]+0xFFFFFFFBu; // 800C8FBC
  c->r[0]=0u+0x00000000u; // 800C8FC0
  cmps(c,0,(int32_t)c->r[4],0); // 800C8FC4
  if (crb(c,0)) { goto L_800C8FD4; } // 800C8FC8
  cmps(c,0,(int32_t)c->r[4],256); // 800C8FCC
  if (crb(c,0)) { goto L_800C8FD8; } // 800C8FD0
L_800C8FD4:;
  c->r[0]=0u+0x00000001u; // 800C8FD4
L_800C8FD8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C8FD8
  if (crb(c,2)) { goto L_800C8FE8; } // 800C8FDC
  c->r[0]=0u+0x00000000u; // 800C8FE0
  goto L_800C9004; // 800C8FE4
L_800C8FE8:;
  c->r[3]=0u+0x80220000u; // 800C8FE8
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800C8FEC
  c->r[3]=c->r[3]+0xFFFFBE90u; // 800C8FF0
  c->r[3]=R32(c->r[3]+0x00000038u); // 800C8FF4
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C8FF8
  c->r[0]=R16(c->r[3]+c->r[0]); // 800C8FFC
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 800C9000
L_800C9004:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C9004
  if (crb(c,2)) { goto L_800C9024; } // 800C9008
  c->r[4]=0u+0x801F0000u; // 800C900C
  c->r[3]=c->r[31]|c->r[31]; // 800C9010
  c->r[4]=c->r[4]+0x000041C0u; // 800C9014
  c->r[4]=c->r[4]+0x00000006u; // 800C9018
  c->lr=0x800C9020u; f_800CB9F0(c); // 800C901C
  goto L_800C90BC; // 800C9020
L_800C9024:;
  c->r[4]=0u+0x801F0000u; // 800C9024
  c->r[3]=c->r[31]|c->r[31]; // 800C9028
  c->r[4]=c->r[4]+0x000041C0u; // 800C902C
  c->r[4]=c->r[4]+0x0000000Bu; // 800C9030
  c->lr=0x800C9038u; f_800CB9F0(c); // 800C9034
  goto L_800C90BC; // 800C9038
L_800C903C:;
  c->r[4]=R8(c->r[29]+0x00000005u); // 800C903C
  c->r[31]=c->r[28]+0xFFFFFFFCu; // 800C9040
  c->r[0]=0u+0x00000000u; // 800C9044
  cmps(c,0,(int32_t)c->r[4],0); // 800C9048
  if (crb(c,0)) { goto L_800C9058; } // 800C904C
  cmps(c,0,(int32_t)c->r[4],256); // 800C9050
  if (crb(c,0)) { goto L_800C905C; } // 800C9054
L_800C9058:;
  c->r[0]=0u+0x00000001u; // 800C9058
L_800C905C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C905C
  if (crb(c,2)) { goto L_800C906C; } // 800C9060
  c->r[0]=0u+0x00000000u; // 800C9064
  goto L_800C9088; // 800C9068
L_800C906C:;
  c->r[3]=0u+0x80220000u; // 800C906C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800C9070
  c->r[3]=c->r[3]+0xFFFFBE90u; // 800C9074
  c->r[3]=R32(c->r[3]+0x00000038u); // 800C9078
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C907C
  c->r[0]=R16(c->r[3]+c->r[0]); // 800C9080
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 800C9084
L_800C9088:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C9088
  if (crb(c,2)) { goto L_800C90A8; } // 800C908C
  c->r[4]=0u+0x801F0000u; // 800C9090
  c->r[3]=c->r[31]|c->r[31]; // 800C9094
  c->r[4]=c->r[4]+0x000041C0u; // 800C9098
  c->r[4]=c->r[4]+0x00000010u; // 800C909C
  c->lr=0x800C90A4u; f_800CB9F0(c); // 800C90A0
  goto L_800C90BC; // 800C90A4
L_800C90A8:;
  c->r[4]=0u+0x801F0000u; // 800C90A8
  c->r[3]=c->r[31]|c->r[31]; // 800C90AC
  c->r[4]=c->r[4]+0x000041C0u; // 800C90B0
  c->r[4]=c->r[4]+0x00000014u; // 800C90B4
  c->lr=0x800C90BCu; f_800CB9F0(c); // 800C90B8
L_800C90BC:;
  c->r[3]=c->r[31]|c->r[31]; // 800C90BC
  goto L_800C967C; // 800C90C0
L_800C90C4:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C90C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C90C8
  if (crb(c,2)) { goto L_800C9154; } // 800C90CC
  c->r[4]=R8(c->r[29]+0x00000005u); // 800C90D0
  c->r[31]=c->r[28]+0xFFFFFFFBu; // 800C90D4
  c->r[0]=0u+0x00000000u; // 800C90D8
  cmps(c,0,(int32_t)c->r[4],0); // 800C90DC
  if (crb(c,0)) { goto L_800C90EC; } // 800C90E0
  cmps(c,0,(int32_t)c->r[4],256); // 800C90E4
  if (crb(c,0)) { goto L_800C90F0; } // 800C90E8
L_800C90EC:;
  c->r[0]=0u+0x00000001u; // 800C90EC
L_800C90F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C90F0
  if (crb(c,2)) { goto L_800C9100; } // 800C90F4
  c->r[0]=0u+0x00000000u; // 800C90F8
  goto L_800C911C; // 800C90FC
L_800C9100:;
  c->r[3]=0u+0x80220000u; // 800C9100
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800C9104
  c->r[3]=c->r[3]+0xFFFFBE90u; // 800C9108
  c->r[3]=R32(c->r[3]+0x00000038u); // 800C910C
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C9110
  c->r[0]=R16(c->r[3]+c->r[0]); // 800C9114
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 800C9118
L_800C911C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C911C
  if (crb(c,2)) { goto L_800C913C; } // 800C9120
  c->r[4]=0u+0x801F0000u; // 800C9124
  c->r[3]=c->r[31]|c->r[31]; // 800C9128
  c->r[4]=c->r[4]+0x000041C0u; // 800C912C
  c->r[4]=c->r[4]+0x00000018u; // 800C9130
  c->lr=0x800C9138u; f_800CB9F0(c); // 800C9134
  goto L_800C91D4; // 800C9138
L_800C913C:;
  c->r[4]=0u+0x801F0000u; // 800C913C
  c->r[3]=c->r[31]|c->r[31]; // 800C9140
  c->r[4]=c->r[4]+0x000041C0u; // 800C9144
  c->r[4]=c->r[4]+0x0000001Du; // 800C9148
  c->lr=0x800C9150u; f_800CB9F0(c); // 800C914C
  goto L_800C91D4; // 800C9150
L_800C9154:;
  c->r[4]=R8(c->r[29]+0x00000005u); // 800C9154
  c->r[31]=c->r[28]+0xFFFFFFFCu; // 800C9158
  c->r[0]=0u+0x00000000u; // 800C915C
  cmps(c,0,(int32_t)c->r[4],0); // 800C9160
  if (crb(c,0)) { goto L_800C9170; } // 800C9164
  cmps(c,0,(int32_t)c->r[4],256); // 800C9168
  if (crb(c,0)) { goto L_800C9174; } // 800C916C
L_800C9170:;
  c->r[0]=0u+0x00000001u; // 800C9170
L_800C9174:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C9174
  if (crb(c,2)) { goto L_800C9184; } // 800C9178
  c->r[0]=0u+0x00000000u; // 800C917C
  goto L_800C91A0; // 800C9180
L_800C9184:;
  c->r[3]=0u+0x80220000u; // 800C9184
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800C9188
  c->r[3]=c->r[3]+0xFFFFBE90u; // 800C918C
  c->r[3]=R32(c->r[3]+0x00000038u); // 800C9190
  c->r[3]=R32(c->r[3]+0x00000008u); // 800C9194
  c->r[0]=R16(c->r[3]+c->r[0]); // 800C9198
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 800C919C
L_800C91A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800C91A0
  if (crb(c,2)) { goto L_800C91C0; } // 800C91A4
  c->r[4]=0u+0x801F0000u; // 800C91A8
  c->r[3]=c->r[31]|c->r[31]; // 800C91AC
  c->r[4]=c->r[4]+0x000041C0u; // 800C91B0
  c->r[4]=c->r[4]+0x00000022u; // 800C91B4
  c->lr=0x800C91BCu; f_800CB9F0(c); // 800C91B8
  goto L_800C91D4; // 800C91BC
L_800C91C0:;
  c->r[4]=0u+0x801F0000u; // 800C91C0
  c->r[3]=c->r[31]|c->r[31]; // 800C91C4
  c->r[4]=c->r[4]+0x000041C0u; // 800C91C8
  c->r[4]=c->r[4]+0x00000026u; // 800C91CC
  c->lr=0x800C91D4u; f_800CB9F0(c); // 800C91D0
L_800C91D4:;
  c->r[3]=c->r[31]|c->r[31]; // 800C91D4
  goto L_800C967C; // 800C91D8
L_800C91DC:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 800C91DC
  c->r[3]=0u+0x00000000u; // 800C91E0
  c->r[4]=R8(c->r[1]+0x00000010u); // 800C91E4
  c->r[31]=c->r[28]+0xFFFFFFFFu; // 800C91E8
  c->r[0]=R8(c->r[29]+0x00000005u); // 800C91EC
  c->r[4]=c->r[4]+c->r[5]; // 800C91F0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800C91F4
  cmps(c,0,(int32_t)c->r[0],101); // 800C91F8
  W16(c->r[1]+0x0000000Eu,c->r[4]); // 800C91FC
  W8(c->r[28]+0xFFFFFFFFu,c->r[3]); // 800C9200
  if (crb(c,2)) { goto L_800C92F8; } // 800C9204
  if (!crb(c,0)) { goto L_800C9230; } // 800C9208
  cmps(c,0,(int32_t)c->r[0],70); // 800C920C
  if (crb(c,2)) { goto L_800C945C; } // 800C9210
  if (!crb(c,0)) { goto L_800C9224; } // 800C9214
  cmps(c,0,(int32_t)c->r[0],69); // 800C9218
  if (!crb(c,0)) { goto L_800C92F8; } // 800C921C
  goto L_800C9678; // 800C9220
L_800C9224:;
  cmps(c,0,(int32_t)c->r[0],72); // 800C9224
  if (!crb(c,0)) { goto L_800C9678; } // 800C9228
  goto L_800C9240; // 800C922C
L_800C9230:;
  cmps(c,0,(int32_t)c->r[0],103); // 800C9230
  if (crb(c,2)) { goto L_800C9240; } // 800C9234
  if (!crb(c,0)) { goto L_800C9678; } // 800C9238
  goto L_800C945C; // 800C923C
L_800C9240:;
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800C9240
  c->r[0]=R8(c->r[1]+0x00000010u); // 800C9244
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800C9248
  if (!crb(c,1)) { goto L_800C9258; } // 800C924C
  c->r[3]=c->r[1]+0x0000000Cu; // 800C9250
  c->lr=0x800C9258u; f_800C8DA8(c); // 800C9254
L_800C9258:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 800C9258
  cmps(c,0,(int32_t)c->r[4],-4); // 800C925C
  if (crb(c,0)) { goto L_800C9270; } // 800C9260
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800C9264
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 800C9268
  if (crb(c,0)) { goto L_800C92BC; } // 800C926C
L_800C9270:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 800C9270
  cmps(c,0,(int32_t)c->r[0],0); // 800C9274
  if (crb(c,2)) { goto L_800C928C; } // 800C9278
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800C927C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C9280
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800C9284
  goto L_800C9298; // 800C9288
L_800C928C:;
  c->r[3]=R8(c->r[1]+0x00000010u); // 800C928C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800C9290
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800C9294
L_800C9298:;
  c->r[0]=R8(c->r[29]+0x00000005u); // 800C9298
  cmpu(c,0,c->r[0],0x00000067u); // 800C929C
  if (!crb(c,2)) { goto L_800C92B0; } // 800C92A0
  c->r[0]=0u+0x00000065u; // 800C92A4
  W8(c->r[29]+0x00000005u,c->r[0]); // 800C92A8
  goto L_800C92F8; // 800C92AC
L_800C92B0:;
  c->r[0]=0u+0x00000045u; // 800C92B0
  W8(c->r[29]+0x00000005u,c->r[0]); // 800C92B4
  goto L_800C92F8; // 800C92B8
L_800C92BC:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 800C92BC
  cmps(c,0,(int32_t)c->r[0],0); // 800C92C0
  if (crb(c,2)) { goto L_800C92D8; } // 800C92C4
  c->r[0]=c->r[4]+0x00000001u; // 800C92C8
  c->r[0]=c->r[3]-c->r[0]; // 800C92CC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800C92D0
  goto L_800C945C; // 800C92D4
L_800C92D8:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 800C92D8
  c->r[3]=c->r[4]+0x00000001u; // 800C92DC
  c->r[0]=c->r[0]-c->r[3]; cr0(c,c->r[0]); // 800C92E0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800C92E4
  if (!crb(c,0)) { goto L_800C945C; } // 800C92E8
  c->r[0]=0u+0x00000000u; // 800C92EC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800C92F0
  goto L_800C945C; // 800C92F4
L_800C92F8:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800C92F8
  c->r[0]=R8(c->r[1]+0x00000010u); // 800C92FC
  c->r[4]=c->r[3]+0x00000001u; // 800C9300
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800C9304
  if (!crb(c,1)) { goto L_800C9314; } // 800C9308
  c->r[3]=c->r[1]+0x0000000Cu; // 800C930C
  c->lr=0x800C9314u; f_800C8DA8(c); // 800C9310
L_800C9314:;
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 800C9314
  c->r[8]=0u+0x0000002Bu; // 800C9318
  cmps(c,0,(int32_t)c->r[6],0); // 800C931C
  if (!crb(c,0)) { goto L_800C932C; } // 800C9320
  c->r[6]=0u-c->r[6]; // 800C9324
  c->r[8]=0u+0x0000002Du; // 800C9328
L_800C932C:;
  c->r[3]=0u+0x66660000u; // 800C932C
  c->r[7]=0u+0x00000000u; // 800C9330
  c->r[5]=c->r[3]+0x00006667u; // 800C9334
  goto L_800C9370; // 800C9338
L_800C933C:;
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[6])>>32); // 800C933C
  c->r[7]=c->r[7]+0x00000001u; // 800C9340
  c->r[3]=sraw(c,c->r[0],2); // 800C9344
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 800C9348
  c->r[0]=sraw(c,c->r[0],2); // 800C934C
  c->r[3]=c->r[3]+c->r[4]; // 800C9350
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)10); // 800C9354
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800C9358
  c->r[4]=c->r[6]-c->r[4]; // 800C935C
  c->r[6]=c->r[0]+c->r[3]; // 800C9360
  c->r[0]=c->r[4]+0x00000030u; // 800C9364
  W8(c->r[31]+0xFFFFFFFFu,c->r[0]); // 800C9368
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 800C936C
L_800C9370:;
  cmps(c,0,(int32_t)c->r[6],0); // 800C9370
  if (!crb(c,2)) { IRQCHK(c); goto L_800C933C; } // 800C9374
  cmps(c,0,(int32_t)c->r[7],2); // 800C9378
  if (crb(c,0)) { IRQCHK(c); goto L_800C933C; } // 800C937C
  W8(c->r[31]+0xFFFFFFFFu,c->r[8]); // 800C9380
  c->r[0]=R8(c->r[29]+0x00000005u); // 800C9384
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 800C9388
  {uint32_t ea=c->r[31]+0xFFFFFFFEu; W8(ea,c->r[0]); c->r[31]=ea;} // 800C938C
  c->r[0]=c->r[28]-c->r[31]; // 800C9390
  c->r[0]=c->r[3]+c->r[0]; // 800C9394
  cmps(c,0,(int32_t)c->r[0],509); // 800C9398
  if (!crb(c,1)) { goto L_800C93A8; } // 800C939C
  c->r[3]=0u+0x00000000u; // 800C93A0
  goto L_800C967C; // 800C93A4
L_800C93A8:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 800C93A8
  c->r[0]=c->r[3]+0x00000001u; // 800C93AC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800C93B0
  if (!crb(c,0)) { goto L_800C93D4; } // 800C93B4
  c->r[3]=c->r[3]+0x00000002u; // 800C93B8
  c->r[0]=0u+0x00000030u; // 800C93BC
  c->r[3]=c->r[3]-c->r[4]; // 800C93C0
  goto L_800C93CC; // 800C93C4
L_800C93C8:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800C93C8
L_800C93CC:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 800C93CC
  if (!crb(c,2)) { IRQCHK(c); goto L_800C93C8; } // 800C93D0
L_800C93D4:;
  c->r[3]=R8(c->r[1]+0x00000010u); // 800C93D4
  c->r[4]=c->r[1]+0x00000011u; // 800C93D8
  c->r[4]=c->r[4]+c->r[3]; // 800C93DC
  goto L_800C93EC; // 800C93E0
L_800C93E4:;
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 800C93E4
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800C93E8
L_800C93EC:;
  c->r[3]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[3]); // 800C93EC
  if (!crb(c,2)) { IRQCHK(c); goto L_800C93E4; } // 800C93F0
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800C93F4
  cmps(c,0,(int32_t)c->r[0],0); // 800C93F8
  if (!crb(c,2)) { goto L_800C940C; } // 800C93FC
  c->r[0]=R8(c->r[29]+0x00000003u); // 800C9400
  cmps(c,0,(int32_t)c->r[0],0); // 800C9404
  if (crb(c,2)) { goto L_800C9410; } // 800C9408
L_800C940C:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[30]); c->r[31]=ea;} // 800C940C
L_800C9410:;
  c->r[0]=R8(c->r[1]+0x00000011u); // 800C9410
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800C9414
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C9418
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C941C
  if (crb(c,2)) { goto L_800C9430; } // 800C9420
  c->r[0]=0u+0x0000002Du; // 800C9424
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800C9428
  goto L_800C9678; // 800C942C
L_800C9430:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 800C9430
  cmpu(c,0,c->r[0],0x00000001u); // 800C9434
  if (!crb(c,2)) { goto L_800C9448; } // 800C9438
  c->r[0]=0u+0x0000002Bu; // 800C943C
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800C9440
  goto L_800C9678; // 800C9444
L_800C9448:;
  cmpu(c,0,c->r[0],0x00000002u); // 800C9448
  if (!crb(c,2)) { goto L_800C9678; } // 800C944C
  c->r[0]=0u+0x00000020u; // 800C9450
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800C9454
  goto L_800C9678; // 800C9458
L_800C945C:;
  c->r[4]=R8(c->r[1]+0x00000010u); // 800C945C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 800C9460
  c->r[3]=c->r[4]-c->r[5]; // 800C9464
  c->r[8]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800C9468
  if (!crb(c,0)) { goto L_800C9474; } // 800C946C
  c->r[8]=0u+0x00000000u; // 800C9470
L_800C9474:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800C9474
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800C9478
  if (!crb(c,1)) { goto L_800C94A8; } // 800C947C
  c->r[0]=c->r[8]-c->r[0]; // 800C9480
  c->r[3]=c->r[1]+0x0000000Cu; // 800C9484
  c->r[4]=c->r[4]-c->r[0]; // 800C9488
  c->lr=0x800C9490u; f_800C8DA8(c); // 800C948C
  c->r[4]=R8(c->r[1]+0x00000010u); // 800C9490
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Eu); // 800C9494
  c->r[3]=c->r[4]-c->r[5]; // 800C9498
  c->r[8]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 800C949C
  if (!crb(c,0)) { goto L_800C94A8; } // 800C94A0
  c->r[8]=0u+0x00000000u; // 800C94A4
L_800C94A8:;
  c->r[7]=addc(c,c->r[5],0x00000001u,0); cr0(c,c->r[7]); // 800C94A8
  if (!crb(c,0)) { goto L_800C94B4; } // 800C94AC
  c->r[7]=0u+0x00000000u; // 800C94B0
L_800C94B4:;
  c->r[0]=c->r[7]+c->r[8]; // 800C94B4
  cmps(c,0,(int32_t)c->r[0],509); // 800C94B8
  if (!crb(c,1)) { goto L_800C94C8; } // 800C94BC
  c->r[3]=0u+0x00000000u; // 800C94C0
  goto L_800C967C; // 800C94C4
L_800C94C8:;
  c->r[6]=c->r[1]+0x00000011u; // 800C94C8
  c->r[5]=0u+0x00000000u; // 800C94CC
  c->r[6]=c->r[6]+c->r[4]; // 800C94D0
  c->r[3]=0u+0x00000030u; // 800C94D4
  goto L_800C94E4; // 800C94D8
L_800C94DC:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[31]=ea;} // 800C94DC
  c->r[5]=c->r[5]+0x00000001u; // 800C94E0
L_800C94E4:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800C94E4
  c->r[0]=c->r[0]-c->r[8]; // 800C94E8
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800C94EC
  if (crb(c,0)) { IRQCHK(c); goto L_800C94DC; } // 800C94F0
  c->r[3]=0u+0x00000000u; // 800C94F4
  goto L_800C9508; // 800C94F8
L_800C94FC:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 800C94FC
  c->r[3]=c->r[3]+0x00000001u; // 800C9500
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800C9504
L_800C9508:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 800C9508
  if (!crb(c,0)) { goto L_800C951C; } // 800C950C
  c->r[0]=R8(c->r[1]+0x00000010u); // 800C9510
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800C9514
  if (crb(c,0)) { IRQCHK(c); goto L_800C94FC; } // 800C9518
L_800C951C:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 800C951C
  c->r[3]=c->r[8]-c->r[3]; // 800C9520
  c->r[4]=0u+0x00000030u; // 800C9524
  if (!crb(c,0)) { goto L_800C9570; } // 800C9528
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800C952C
  c->ctr=c->r[0]; // 800C9530
  if (crb(c,2)) { goto L_800C9564; } // 800C9534
L_800C9538:;
  W8(c->r[31]+0xFFFFFFFFu,c->r[4]); // 800C9538
  W8(c->r[31]+0xFFFFFFFEu,c->r[4]); // 800C953C
  W8(c->r[31]+0xFFFFFFFDu,c->r[4]); // 800C9540
  W8(c->r[31]+0xFFFFFFFCu,c->r[4]); // 800C9544
  W8(c->r[31]+0xFFFFFFFBu,c->r[4]); // 800C9548
  W8(c->r[31]+0xFFFFFFFAu,c->r[4]); // 800C954C
  W8(c->r[31]+0xFFFFFFF9u,c->r[4]); // 800C9550
  {uint32_t ea=c->r[31]+0xFFFFFFF8u; W8(ea,c->r[4]); c->r[31]=ea;} // 800C9554
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9538; } // 800C9558
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 800C955C
  if (crb(c,2)) { goto L_800C9570; } // 800C9560
L_800C9564:;
  c->ctr=c->r[3]; // 800C9564
L_800C9568:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[4]); c->r[31]=ea;} // 800C9568
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9568; } // 800C956C
L_800C9570:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800C9570
  cmps(c,0,(int32_t)c->r[0],0); // 800C9574
  if (!crb(c,2)) { goto L_800C9588; } // 800C9578
  c->r[0]=R8(c->r[29]+0x00000003u); // 800C957C
  cmps(c,0,(int32_t)c->r[0],0); // 800C9580
  if (crb(c,2)) { goto L_800C958C; } // 800C9584
L_800C9588:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[30]); c->r[31]=ea;} // 800C9588
L_800C958C:;
  cmps(c,0,(int32_t)c->r[7],0); // 800C958C
  if (crb(c,2)) { goto L_800C9630; } // 800C9590
  c->r[4]=0u+0x00000000u; // 800C9594
  c->r[3]=0u+0x00000030u; // 800C9598
  goto L_800C95A8; // 800C959C
L_800C95A0:;
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[3]); c->r[31]=ea;} // 800C95A0
  c->r[4]=c->r[4]+0x00000001u; // 800C95A4
L_800C95A8:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 800C95A8
  c->r[0]=c->r[7]-c->r[0]; // 800C95AC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800C95B0
  if (crb(c,0)) { IRQCHK(c); goto L_800C95A0; } // 800C95B4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[7]); // 800C95B8
  c->r[3]=c->r[7]-c->r[4]; // 800C95BC
  if (!crb(c,0)) { goto L_800C9638; } // 800C95C0
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 800C95C4
  c->ctr=c->r[0]; // 800C95C8
  if (crb(c,2)) { goto L_800C961C; } // 800C95CC
L_800C95D0:;
  c->r[0]=R8(c->r[6]+0xFFFFFFFFu); // 800C95D0
  W8(c->r[31]+0xFFFFFFFFu,c->r[0]); // 800C95D4
  c->r[0]=R8(c->r[6]+0xFFFFFFFEu); // 800C95D8
  W8(c->r[31]+0xFFFFFFFEu,c->r[0]); // 800C95DC
  c->r[0]=R8(c->r[6]+0xFFFFFFFDu); // 800C95E0
  W8(c->r[31]+0xFFFFFFFDu,c->r[0]); // 800C95E4
  c->r[0]=R8(c->r[6]+0xFFFFFFFCu); // 800C95E8
  W8(c->r[31]+0xFFFFFFFCu,c->r[0]); // 800C95EC
  c->r[0]=R8(c->r[6]+0xFFFFFFFBu); // 800C95F0
  W8(c->r[31]+0xFFFFFFFBu,c->r[0]); // 800C95F4
  c->r[0]=R8(c->r[6]+0xFFFFFFFAu); // 800C95F8
  W8(c->r[31]+0xFFFFFFFAu,c->r[0]); // 800C95FC
  c->r[0]=R8(c->r[6]+0xFFFFFFF9u); // 800C9600
  W8(c->r[31]+0xFFFFFFF9u,c->r[0]); // 800C9604
  {uint32_t ea=c->r[6]+0xFFFFFFF8u; c->r[0]=R8(ea); c->r[6]=ea;} // 800C9608
  {uint32_t ea=c->r[31]+0xFFFFFFF8u; W8(ea,c->r[0]); c->r[31]=ea;} // 800C960C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C95D0; } // 800C9610
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 800C9614
  if (crb(c,2)) { goto L_800C9638; } // 800C9618
L_800C961C:;
  c->ctr=c->r[3]; // 800C961C
L_800C9620:;
  {uint32_t ea=c->r[6]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[6]=ea;} // 800C9620
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800C9624
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800C9620; } // 800C9628
  goto L_800C9638; // 800C962C
L_800C9630:;
  c->r[0]=0u+0x00000030u; // 800C9630
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800C9634
L_800C9638:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800C9638
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C963C
  if (crb(c,2)) { goto L_800C9650; } // 800C9640
  c->r[0]=0u+0x0000002Du; // 800C9644
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800C9648
  goto L_800C9678; // 800C964C
L_800C9650:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 800C9650
  cmpu(c,0,c->r[0],0x00000001u); // 800C9654
  if (!crb(c,2)) { goto L_800C9668; } // 800C9658
  c->r[0]=0u+0x0000002Bu; // 800C965C
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800C9660
  goto L_800C9678; // 800C9664
L_800C9668:;
  cmpu(c,0,c->r[0],0x00000002u); // 800C9668
  if (!crb(c,2)) { goto L_800C9678; } // 800C966C
  c->r[0]=0u+0x00000020u; // 800C9670
  {uint32_t ea=c->r[31]+0xFFFFFFFFu; W8(ea,c->r[0]); c->r[31]=ea;} // 800C9674
L_800C9678:;
  c->r[3]=c->r[31]|c->r[31]; // 800C9678
L_800C967C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800C967C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[31]=RF64(ea);} // 800C9680
  c->r[31]=R32(c->r[1]+0x00000044u); // 800C9684
  c->r[30]=R32(c->r[1]+0x00000040u); // 800C9688
  c->r[29]=R32(c->r[1]+0x0000003Cu); // 800C968C
  c->r[28]=R32(c->r[1]+0x00000038u); // 800C9690
  c->lr=c->r[0]; // 800C9694
  c->r[1]=c->r[1]+0x00000050u; // 800C9698
  return; // 800C969C
}

// __pformatter
void f_800C96A0(Ctx* __restrict c) {
  trace_call(0x800C96A0u);
  {uint32_t ea=c->r[1]+0xFFFFFD40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C96A0
  c->r[0]=c->lr; // 800C96A4
  W32(c->r[1]+0x000002C4u,c->r[0]); // 800C96A8
  {uint32_t ea=c->r[1]+0x00000280u; for(int i=16;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800C96AC
  c->r[16]=0u+0x00000020u; // 800C96B0
  c->r[29]=0u+0x801F0000u; // 800C96B4
  c->r[17]=c->r[3]|c->r[3]; // 800C96B8
  c->r[18]=c->r[4]|c->r[4]; // 800C96BC
  c->r[23]=c->r[5]|c->r[5]; // 800C96C0
  c->r[19]=c->r[6]|c->r[6]; // 800C96C4
  c->r[29]=c->r[29]+0x000041C0u; // 800C96C8
  c->r[28]=c->r[1]+0x0000027Fu; // 800C96CC
  c->r[25]=0u+0x00000000u; // 800C96D0
  c->r[31]=0u+0x00000025u; // 800C96D4
  c->r[30]=0u+0x80220000u; // 800C96D8
  W8(c->r[1]+0x00000009u,c->r[16]); // 800C96DC
  goto L_800C9ED8; // 800C96E0
L_800C96E4:;
  c->r[3]=c->r[23]|c->r[23]; // 800C96E4
  c->r[4]=0u+0x00000025u; // 800C96E8
  c->lr=0x800C96F0u; f_800CBCC8(c); // 800C96EC
  cmps(c,0,(int32_t)c->r[3],0); // 800C96F0
  c->r[24]=c->r[3]|c->r[3]; // 800C96F4
  if (!crb(c,2)) { goto L_800C9738; } // 800C96F8
  c->r[3]=c->r[23]|c->r[23]; // 800C96FC
  c->lr=0x800C9704u; f_800C1734(c); // 800C9700
  cmps(c,0,(int32_t)c->r[3],0); // 800C9704
  c->r[5]=c->r[3]|c->r[3]; // 800C9708
  c->r[25]=c->r[25]+c->r[3]; // 800C970C
  if (crb(c,2)) { goto L_800C9EE4; } // 800C9710
  c->r[12]=c->r[17]|c->r[17]; // 800C9714
  c->r[3]=c->r[18]|c->r[18]; // 800C9718
  c->r[4]=c->r[23]|c->r[23]; // 800C971C
  c->ctr=c->r[12]; // 800C9720
  if (true) { c->lr=0x800C9728u; dispatch(c,c->ctr); } // 800C9724
  cmps(c,0,(int32_t)c->r[3],0); // 800C9728
  if (!crb(c,2)) { goto L_800C9EE4; } // 800C972C
  c->r[3]=0u+0xFFFFFFFFu; // 800C9730
  goto L_800C9EE8; // 800C9734
L_800C9738:;
  c->r[5]=c->r[3]-c->r[23]; cr0(c,c->r[5]); // 800C9738
  c->r[25]=c->r[25]+c->r[5]; // 800C973C
  if (crb(c,2)) { goto L_800C9768; } // 800C9740
  c->r[12]=c->r[17]|c->r[17]; // 800C9744
  c->r[3]=c->r[18]|c->r[18]; // 800C9748
  c->r[4]=c->r[23]|c->r[23]; // 800C974C
  c->ctr=c->r[12]; // 800C9750
  if (true) { c->lr=0x800C9758u; dispatch(c,c->ctr); } // 800C9754
  cmps(c,0,(int32_t)c->r[3],0); // 800C9758
  if (!crb(c,2)) { goto L_800C9768; } // 800C975C
  c->r[3]=0u+0xFFFFFFFFu; // 800C9760
  goto L_800C9EE8; // 800C9764
L_800C9768:;
  c->r[3]=c->r[24]|c->r[24]; // 800C9768
  c->r[4]=c->r[19]|c->r[19]; // 800C976C
  c->r[5]=c->r[1]+0x00000070u; // 800C9770
  c->lr=0x800C9778u; f_800C7F1C(c); // 800C9774
  c->r[0]=R8(c->r[1]+0x00000075u); // 800C9778
  c->r[23]=c->r[3]|c->r[3]; // 800C977C
  cmps(c,0,(int32_t)c->r[0],104); // 800C9780
  if (crb(c,2)) { goto L_800C9D58; } // 800C9784
  if (!crb(c,0)) { goto L_800C97E8; } // 800C9788
  cmps(c,0,(int32_t)c->r[0],88); // 800C978C
  if (crb(c,2)) { goto L_800C99A0; } // 800C9790
  if (!crb(c,0)) { goto L_800C97C4; } // 800C9794
  cmps(c,0,(int32_t)c->r[0],65); // 800C9798
  if (crb(c,2)) { goto L_800C9B6C; } // 800C979C
  if (!crb(c,0)) { goto L_800C97B0; } // 800C97A0
  cmps(c,0,(int32_t)c->r[0],37); // 800C97A4
  if (crb(c,2)) { goto L_800C9D48; } // 800C97A8
  goto L_800C9D58; // 800C97AC
L_800C97B0:;
  cmps(c,0,(int32_t)c->r[0],72); // 800C97B0
  if (!crb(c,0)) { goto L_800C9D58; } // 800C97B4
  cmps(c,0,(int32_t)c->r[0],69); // 800C97B8
  if (!crb(c,0)) { goto L_800C9AFC; } // 800C97BC
  goto L_800C9D58; // 800C97C0
L_800C97C4:;
  cmps(c,0,(int32_t)c->r[0],99); // 800C97C4
  if (crb(c,2)) { goto L_800C9D28; } // 800C97C8
  if (!crb(c,0)) { goto L_800C97DC; } // 800C97CC
  cmps(c,0,(int32_t)c->r[0],97); // 800C97D0
  if (crb(c,2)) { goto L_800C9B6C; } // 800C97D4
  goto L_800C9D58; // 800C97D8
L_800C97DC:;
  cmps(c,0,(int32_t)c->r[0],101); // 800C97DC
  if (!crb(c,0)) { goto L_800C9AFC; } // 800C97E0
  goto L_800C9844; // 800C97E4
L_800C97E8:;
  cmps(c,0,(int32_t)c->r[0],116); // 800C97E8
  if (crb(c,2)) { goto L_800C9D58; } // 800C97EC
  if (!crb(c,0)) { goto L_800C9820; } // 800C97F0
  cmps(c,0,(int32_t)c->r[0],111); // 800C97F4
  if (crb(c,2)) { goto L_800C99A0; } // 800C97F8
  if (!crb(c,0)) { goto L_800C9814; } // 800C97FC
  cmps(c,0,(int32_t)c->r[0],110); // 800C9800
  if (!crb(c,0)) { goto L_800C9CB0; } // 800C9804
  cmps(c,0,(int32_t)c->r[0],106); // 800C9808
  if (!crb(c,0)) { goto L_800C9D58; } // 800C980C
  goto L_800C9844; // 800C9810
L_800C9814:;
  cmps(c,0,(int32_t)c->r[0],115); // 800C9814
  if (!crb(c,0)) { goto L_800C9BDC; } // 800C9818
  goto L_800C9D58; // 800C981C
L_800C9820:;
  cmps(c,0,(int32_t)c->r[0],120); // 800C9820
  if (crb(c,2)) { goto L_800C99A0; } // 800C9824
  if (!crb(c,0)) { goto L_800C9838; } // 800C9828
  cmps(c,0,(int32_t)c->r[0],118); // 800C982C
  if (!crb(c,0)) { goto L_800C9D58; } // 800C9830
  goto L_800C99A0; // 800C9834
L_800C9838:;
  cmps(c,0,(int32_t)c->r[0],255); // 800C9838
  if (crb(c,2)) { goto L_800C9D58; } // 800C983C
  goto L_800C9D58; // 800C9840
L_800C9844:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800C9844
  cmpu(c,0,c->r[0],0x00000003u); // 800C9848
  if (!crb(c,2)) { goto L_800C9864; } // 800C984C
  c->r[3]=c->r[19]|c->r[19]; // 800C9850
  c->r[4]=0u+0x00000001u; // 800C9854
  c->lr=0x800C985Cu; f_800C1750(c); // 800C9858
  c->r[22]=R32(c->r[3]+0x00000000u); // 800C985C
  goto L_800C98EC; // 800C9860
L_800C9864:;
  cmpu(c,0,c->r[0],0x00000004u); // 800C9864
  if (!crb(c,2)) { goto L_800C9884; } // 800C9868
  c->r[3]=c->r[19]|c->r[19]; // 800C986C
  c->r[4]=0u+0x00000002u; // 800C9870
  c->lr=0x800C9878u; f_800C1750(c); // 800C9874
  c->r[21]=R32(c->r[3]+0x00000000u); // 800C9878
  c->r[20]=R32(c->r[3]+0x00000004u); // 800C987C
  goto L_800C98EC; // 800C9880
L_800C9884:;
  cmpu(c,0,c->r[0],0x00000006u); // 800C9884
  if (!crb(c,2)) { goto L_800C98A4; } // 800C9888
  c->r[3]=c->r[19]|c->r[19]; // 800C988C
  c->r[4]=0u+0x00000002u; // 800C9890
  c->lr=0x800C9898u; f_800C1750(c); // 800C9894
  c->r[21]=R32(c->r[3]+0x00000000u); // 800C9898
  c->r[20]=R32(c->r[3]+0x00000004u); // 800C989C
  goto L_800C98EC; // 800C98A0
L_800C98A4:;
  cmpu(c,0,c->r[0],0x00000007u); // 800C98A4
  if (!crb(c,2)) { goto L_800C98C0; } // 800C98A8
  c->r[3]=c->r[19]|c->r[19]; // 800C98AC
  c->r[4]=0u+0x00000001u; // 800C98B0
  c->lr=0x800C98B8u; f_800C1750(c); // 800C98B4
  c->r[22]=R32(c->r[3]+0x00000000u); // 800C98B8
  goto L_800C98EC; // 800C98BC
L_800C98C0:;
  cmpu(c,0,c->r[0],0x00000008u); // 800C98C0
  if (!crb(c,2)) { goto L_800C98DC; } // 800C98C4
  c->r[3]=c->r[19]|c->r[19]; // 800C98C8
  c->r[4]=0u+0x00000001u; // 800C98CC
  c->lr=0x800C98D4u; f_800C1750(c); // 800C98D0
  c->r[22]=R32(c->r[3]+0x00000000u); // 800C98D4
  goto L_800C98EC; // 800C98D8
L_800C98DC:;
  c->r[3]=c->r[19]|c->r[19]; // 800C98DC
  c->r[4]=0u+0x00000001u; // 800C98E0
  c->lr=0x800C98E8u; f_800C1750(c); // 800C98E4
  c->r[22]=R32(c->r[3]+0x00000000u); // 800C98E8
L_800C98EC:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800C98EC
  cmpu(c,0,c->r[0],0x00000002u); // 800C98F0
  if (!crb(c,2)) { goto L_800C98FC; } // 800C98F4
  c->r[22]=(uint32_t)(int32_t)(int16_t)c->r[22]; // 800C98F8
L_800C98FC:;
  cmpu(c,0,c->r[0],0x00000001u); // 800C98FC
  if (!crb(c,2)) { goto L_800C9908; } // 800C9900
  c->r[22]=(uint32_t)(int32_t)(int8_t)c->r[22]; // 800C9904
L_800C9908:;
  cmpu(c,0,c->r[0],0x00000004u); // 800C9908
  if (crb(c,2)) { goto L_800C9918; } // 800C990C
  cmpu(c,0,c->r[0],0x00000006u); // 800C9910
  if (!crb(c,2)) { goto L_800C995C; } // 800C9914
L_800C9918:;
  c->r[9]=R32(c->r[1]+0x00000070u); // 800C9918
  c->r[4]=c->r[20]|c->r[20]; // 800C991C
  c->r[8]=R32(c->r[1]+0x00000074u); // 800C9920
  c->r[3]=c->r[21]|c->r[21]; // 800C9924
  c->r[7]=R32(c->r[1]+0x00000078u); // 800C9928
  c->r[5]=c->r[1]+0x00000280u; // 800C992C
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800C9930
  c->r[6]=c->r[1]+0x00000060u; // 800C9934
  W32(c->r[1]+0x00000060u,c->r[9]); // 800C9938
  W32(c->r[1]+0x00000064u,c->r[8]); // 800C993C
  W32(c->r[1]+0x00000068u,c->r[7]); // 800C9940
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800C9944
  c->lr=0x800C994Cu; f_800C8740(c); // 800C9948
  cmps(c,0,(int32_t)c->r[3],0); // 800C994C
  c->r[26]=c->r[3]|c->r[3]; // 800C9950
  if (crb(c,2)) { goto L_800C9D58; } // 800C9954
  goto L_800C9998; // 800C9958
L_800C995C:;
  c->r[8]=R32(c->r[1]+0x00000070u); // 800C995C
  c->r[3]=c->r[22]|c->r[22]; // 800C9960
  c->r[7]=R32(c->r[1]+0x00000074u); // 800C9964
  c->r[4]=c->r[1]+0x00000280u; // 800C9968
  c->r[6]=R32(c->r[1]+0x00000078u); // 800C996C
  c->r[5]=c->r[1]+0x00000050u; // 800C9970
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800C9974
  W32(c->r[1]+0x00000050u,c->r[8]); // 800C9978
  W32(c->r[1]+0x00000054u,c->r[7]); // 800C997C
  W32(c->r[1]+0x00000058u,c->r[6]); // 800C9980
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800C9984
  c->lr=0x800C998Cu; f_800C8518(c); // 800C9988
  cmps(c,0,(int32_t)c->r[3],0); // 800C998C
  c->r[26]=c->r[3]|c->r[3]; // 800C9990
  if (crb(c,2)) { goto L_800C9D58; } // 800C9994
L_800C9998:;
  c->r[27]=c->r[28]-c->r[26]; // 800C9998
  goto L_800C9D9C; // 800C999C
L_800C99A0:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800C99A0
  cmpu(c,0,c->r[0],0x00000003u); // 800C99A4
  if (!crb(c,2)) { goto L_800C99C0; } // 800C99A8
  c->r[3]=c->r[19]|c->r[19]; // 800C99AC
  c->r[4]=0u+0x00000001u; // 800C99B0
  c->lr=0x800C99B8u; f_800C1750(c); // 800C99B4
  c->r[22]=R32(c->r[3]+0x00000000u); // 800C99B8
  goto L_800C9A48; // 800C99BC
L_800C99C0:;
  cmpu(c,0,c->r[0],0x00000004u); // 800C99C0
  if (!crb(c,2)) { goto L_800C99E0; } // 800C99C4
  c->r[3]=c->r[19]|c->r[19]; // 800C99C8
  c->r[4]=0u+0x00000002u; // 800C99CC
  c->lr=0x800C99D4u; f_800C1750(c); // 800C99D0
  c->r[21]=R32(c->r[3]+0x00000000u); // 800C99D4
  c->r[20]=R32(c->r[3]+0x00000004u); // 800C99D8
  goto L_800C9A48; // 800C99DC
L_800C99E0:;
  cmpu(c,0,c->r[0],0x00000006u); // 800C99E0
  if (!crb(c,2)) { goto L_800C9A00; } // 800C99E4
  c->r[3]=c->r[19]|c->r[19]; // 800C99E8
  c->r[4]=0u+0x00000002u; // 800C99EC
  c->lr=0x800C99F4u; f_800C1750(c); // 800C99F0
  c->r[21]=R32(c->r[3]+0x00000000u); // 800C99F4
  c->r[20]=R32(c->r[3]+0x00000004u); // 800C99F8
  goto L_800C9A48; // 800C99FC
L_800C9A00:;
  cmpu(c,0,c->r[0],0x00000007u); // 800C9A00
  if (!crb(c,2)) { goto L_800C9A1C; } // 800C9A04
  c->r[3]=c->r[19]|c->r[19]; // 800C9A08
  c->r[4]=0u+0x00000001u; // 800C9A0C
  c->lr=0x800C9A14u; f_800C1750(c); // 800C9A10
  c->r[22]=R32(c->r[3]+0x00000000u); // 800C9A14
  goto L_800C9A48; // 800C9A18
L_800C9A1C:;
  cmpu(c,0,c->r[0],0x00000008u); // 800C9A1C
  if (!crb(c,2)) { goto L_800C9A38; } // 800C9A20
  c->r[3]=c->r[19]|c->r[19]; // 800C9A24
  c->r[4]=0u+0x00000001u; // 800C9A28
  c->lr=0x800C9A30u; f_800C1750(c); // 800C9A2C
  c->r[22]=R32(c->r[3]+0x00000000u); // 800C9A30
  goto L_800C9A48; // 800C9A34
L_800C9A38:;
  c->r[3]=c->r[19]|c->r[19]; // 800C9A38
  c->r[4]=0u+0x00000001u; // 800C9A3C
  c->lr=0x800C9A44u; f_800C1750(c); // 800C9A40
  c->r[22]=R32(c->r[3]+0x00000000u); // 800C9A44
L_800C9A48:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800C9A48
  cmpu(c,0,c->r[0],0x00000002u); // 800C9A4C
  if (!crb(c,2)) { goto L_800C9A58; } // 800C9A50
  c->r[22]=rotl(c->r[22],0)&0x0000FFFFu; // 800C9A54
L_800C9A58:;
  cmpu(c,0,c->r[0],0x00000001u); // 800C9A58
  if (!crb(c,2)) { goto L_800C9A64; } // 800C9A5C
  c->r[22]=rotl(c->r[22],0)&0x000000FFu; // 800C9A60
L_800C9A64:;
  cmpu(c,0,c->r[0],0x00000004u); // 800C9A64
  if (crb(c,2)) { goto L_800C9A74; } // 800C9A68
  cmpu(c,0,c->r[0],0x00000006u); // 800C9A6C
  if (!crb(c,2)) { goto L_800C9AB8; } // 800C9A70
L_800C9A74:;
  c->r[9]=R32(c->r[1]+0x00000070u); // 800C9A74
  c->r[4]=c->r[20]|c->r[20]; // 800C9A78
  c->r[8]=R32(c->r[1]+0x00000074u); // 800C9A7C
  c->r[3]=c->r[21]|c->r[21]; // 800C9A80
  c->r[7]=R32(c->r[1]+0x00000078u); // 800C9A84
  c->r[5]=c->r[1]+0x00000280u; // 800C9A88
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800C9A8C
  c->r[6]=c->r[1]+0x00000040u; // 800C9A90
  W32(c->r[1]+0x00000040u,c->r[9]); // 800C9A94
  W32(c->r[1]+0x00000044u,c->r[8]); // 800C9A98
  W32(c->r[1]+0x00000048u,c->r[7]); // 800C9A9C
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800C9AA0
  c->lr=0x800C9AA8u; f_800C8740(c); // 800C9AA4
  cmps(c,0,(int32_t)c->r[3],0); // 800C9AA8
  c->r[26]=c->r[3]|c->r[3]; // 800C9AAC
  if (crb(c,2)) { goto L_800C9D58; } // 800C9AB0
  goto L_800C9AF4; // 800C9AB4
L_800C9AB8:;
  c->r[8]=R32(c->r[1]+0x00000070u); // 800C9AB8
  c->r[3]=c->r[22]|c->r[22]; // 800C9ABC
  c->r[7]=R32(c->r[1]+0x00000074u); // 800C9AC0
  c->r[4]=c->r[1]+0x00000280u; // 800C9AC4
  c->r[6]=R32(c->r[1]+0x00000078u); // 800C9AC8
  c->r[5]=c->r[1]+0x00000030u; // 800C9ACC
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800C9AD0
  W32(c->r[1]+0x00000030u,c->r[8]); // 800C9AD4
  W32(c->r[1]+0x00000034u,c->r[7]); // 800C9AD8
  W32(c->r[1]+0x00000038u,c->r[6]); // 800C9ADC
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800C9AE0
  c->lr=0x800C9AE8u; f_800C8518(c); // 800C9AE4
  cmps(c,0,(int32_t)c->r[3],0); // 800C9AE8
  c->r[26]=c->r[3]|c->r[3]; // 800C9AEC
  if (crb(c,2)) { goto L_800C9D58; } // 800C9AF0
L_800C9AF4:;
  c->r[27]=c->r[28]-c->r[26]; // 800C9AF4
  goto L_800C9D9C; // 800C9AF8
L_800C9AFC:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800C9AFC
  cmpu(c,0,c->r[0],0x00000009u); // 800C9B00
  if (!crb(c,2)) { goto L_800C9B1C; } // 800C9B04
  c->r[3]=c->r[19]|c->r[19]; // 800C9B08
  c->r[4]=0u+0x00000003u; // 800C9B0C
  c->lr=0x800C9B14u; f_800C1750(c); // 800C9B10
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800C9B14
  goto L_800C9B2C; // 800C9B18
L_800C9B1C:;
  c->r[3]=c->r[19]|c->r[19]; // 800C9B1C
  c->r[4]=0u+0x00000003u; // 800C9B20
  c->lr=0x800C9B28u; f_800C1750(c); // 800C9B24
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800C9B28
L_800C9B2C:;
  c->r[7]=R32(c->r[1]+0x00000070u); // 800C9B2C
  c->r[3]=c->r[1]+0x00000280u; // 800C9B30
  c->r[6]=R32(c->r[1]+0x00000074u); // 800C9B34
  c->r[4]=c->r[1]+0x00000020u; // 800C9B38
  c->r[5]=R32(c->r[1]+0x00000078u); // 800C9B3C
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800C9B40
  W32(c->r[1]+0x00000020u,c->r[7]); // 800C9B44
  W32(c->r[1]+0x00000024u,c->r[6]); // 800C9B48
  W32(c->r[1]+0x00000028u,c->r[5]); // 800C9B4C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800C9B50
  c->lr=0x800C9B58u; f_800C8ED0(c); // 800C9B54
  cmps(c,0,(int32_t)c->r[3],0); // 800C9B58
  c->r[26]=c->r[3]|c->r[3]; // 800C9B5C
  if (crb(c,2)) { goto L_800C9D58; } // 800C9B60
  c->r[27]=c->r[28]-c->r[3]; // 800C9B64
  goto L_800C9D9C; // 800C9B68
L_800C9B6C:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800C9B6C
  cmpu(c,0,c->r[0],0x00000009u); // 800C9B70
  if (!crb(c,2)) { goto L_800C9B8C; } // 800C9B74
  c->r[3]=c->r[19]|c->r[19]; // 800C9B78
  c->r[4]=0u+0x00000003u; // 800C9B7C
  c->lr=0x800C9B84u; f_800C1750(c); // 800C9B80
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800C9B84
  goto L_800C9B9C; // 800C9B88
L_800C9B8C:;
  c->r[3]=c->r[19]|c->r[19]; // 800C9B8C
  c->r[4]=0u+0x00000003u; // 800C9B90
  c->lr=0x800C9B98u; f_800C1750(c); // 800C9B94
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800C9B98
L_800C9B9C:;
  c->r[7]=R32(c->r[1]+0x00000070u); // 800C9B9C
  c->r[3]=c->r[1]+0x00000280u; // 800C9BA0
  c->r[6]=R32(c->r[1]+0x00000074u); // 800C9BA4
  c->r[4]=c->r[1]+0x00000010u; // 800C9BA8
  c->r[5]=R32(c->r[1]+0x00000078u); // 800C9BAC
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800C9BB0
  W32(c->r[1]+0x00000010u,c->r[7]); // 800C9BB4
  W32(c->r[1]+0x00000014u,c->r[6]); // 800C9BB8
  W32(c->r[1]+0x00000018u,c->r[5]); // 800C9BBC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800C9BC0
  c->lr=0x800C9BC8u; f_800C89E0(c); // 800C9BC4
  cmps(c,0,(int32_t)c->r[3],0); // 800C9BC8
  c->r[26]=c->r[3]|c->r[3]; // 800C9BCC
  if (crb(c,2)) { goto L_800C9D58; } // 800C9BD0
  c->r[27]=c->r[28]-c->r[3]; // 800C9BD4
  goto L_800C9D9C; // 800C9BD8
L_800C9BDC:;
  c->r[0]=R8(c->r[1]+0x00000074u); // 800C9BDC
  cmpu(c,0,c->r[0],0x00000005u); // 800C9BE0
  if (!crb(c,2)) { goto L_800C9C20; } // 800C9BE4
  c->r[3]=c->r[19]|c->r[19]; // 800C9BE8
  c->r[4]=0u+0x00000001u; // 800C9BEC
  c->lr=0x800C9BF4u; f_800C1750(c); // 800C9BF0
  c->r[4]=R32(c->r[3]+0x00000000u); // 800C9BF4
  cmps(c,0,(int32_t)c->r[4],0); // 800C9BF8
  if (!crb(c,2)) { goto L_800C9C04; } // 800C9BFC
  c->r[4]=c->r[13]+0xFFFF89F8u; // 800C9C00
L_800C9C04:;
  c->r[3]=c->r[1]+0x00000080u; // 800C9C04
  c->r[5]=0u+0x00000200u; // 800C9C08
  c->lr=0x800C9C10u; f_800C797C(c); // 800C9C0C
  cmps(c,0,(int32_t)c->r[3],0); // 800C9C10
  if (crb(c,0)) { goto L_800C9D58; } // 800C9C14
  c->r[26]=c->r[1]+0x00000080u; // 800C9C18
  goto L_800C9C30; // 800C9C1C
L_800C9C20:;
  c->r[3]=c->r[19]|c->r[19]; // 800C9C20
  c->r[4]=0u+0x00000001u; // 800C9C24
  c->lr=0x800C9C2Cu; f_800C1750(c); // 800C9C28
  c->r[26]=R32(c->r[3]+0x00000000u); // 800C9C2C
L_800C9C30:;
  cmps(c,0,(int32_t)c->r[26],0); // 800C9C30
  if (!crb(c,2)) { goto L_800C9C3C; } // 800C9C34
  c->r[26]=c->r[29]+0x0000002Au; // 800C9C38
L_800C9C3C:;
  c->r[0]=R8(c->r[1]+0x00000073u); // 800C9C3C
  cmps(c,0,(int32_t)c->r[0],0); // 800C9C40
  if (crb(c,2)) { goto L_800C9C70; } // 800C9C44
  c->r[0]=R8(c->r[1]+0x00000072u); // 800C9C48
  c->r[27]=R8(c->r[26]+0x00000000u); // 800C9C4C
  c->r[26]=c->r[26]+0x00000001u; // 800C9C50
  cmps(c,0,(int32_t)c->r[0],0); // 800C9C54
  if (crb(c,2)) { goto L_800C9D9C; } // 800C9C58
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 800C9C5C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800C9C60
  if (!crb(c,1)) { goto L_800C9D9C; } // 800C9C64
  c->r[27]=c->r[0]|c->r[0]; // 800C9C68
  goto L_800C9D9C; // 800C9C6C
L_800C9C70:;
  c->r[0]=R8(c->r[1]+0x00000072u); // 800C9C70
  cmps(c,0,(int32_t)c->r[0],0); // 800C9C74
  if (crb(c,2)) { goto L_800C9CA0; } // 800C9C78
  c->r[27]=R32(c->r[1]+0x0000007Cu); // 800C9C7C
  c->r[3]=c->r[26]|c->r[26]; // 800C9C80
  c->r[4]=0u+0x00000000u; // 800C9C84
  c->r[5]=c->r[27]|c->r[27]; // 800C9C88
  c->lr=0x800C9C90u; f_800C7B00(c); // 800C9C8C
  cmps(c,0,(int32_t)c->r[3],0); // 800C9C90
  if (crb(c,2)) { goto L_800C9D9C; } // 800C9C94
  c->r[27]=c->r[3]-c->r[26]; // 800C9C98
  goto L_800C9D9C; // 800C9C9C
L_800C9CA0:;
  c->r[3]=c->r[26]|c->r[26]; // 800C9CA0
  c->lr=0x800C9CA8u; f_800C1734(c); // 800C9CA4
  c->r[27]=c->r[3]|c->r[3]; // 800C9CA8
  goto L_800C9D9C; // 800C9CAC
L_800C9CB0:;
  c->r[3]=c->r[19]|c->r[19]; // 800C9CB0
  c->r[4]=0u+0x00000001u; // 800C9CB4
  c->lr=0x800C9CBCu; f_800C1750(c); // 800C9CB8
  c->r[0]=R8(c->r[1]+0x00000074u); // 800C9CBC
  c->r[4]=R32(c->r[3]+0x00000000u); // 800C9CC0
  cmpu(c,0,c->r[0],0x00000008u); // 800C9CC4
  if (crb(c,1)) { goto L_800C9ED8; } // 800C9CC8
  c->r[3]=c->r[30]+0xFFFFC104u; // 800C9CCC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800C9CD0
  c->r[3]=R32(c->r[3]+c->r[0]); // 800C9CD4
  c->ctr=c->r[3]; // 800C9CD8
  if (true) { switch (c->ctr) { case 0x800C9CE0u: goto L_800C9CE0; case 0x800C9CE8u: goto L_800C9CE8; case 0x800C9CF0u: goto L_800C9CF0; case 0x800C9CF8u: goto L_800C9CF8; case 0x800C9D08u: goto L_800C9D08; case 0x800C9D10u: goto L_800C9D10; case 0x800C9D18u: goto L_800C9D18; case 0x800C9ED8u: goto L_800C9ED8; default: break; } dispatch(c,c->ctr); return; } // 800C9CDC
L_800C9CE0:;
  W32(c->r[4]+0x00000000u,c->r[25]); // 800C9CE0
  goto L_800C9ED8; // 800C9CE4
L_800C9CE8:;
  W16(c->r[4]+0x00000000u,c->r[25]); // 800C9CE8
  goto L_800C9ED8; // 800C9CEC
L_800C9CF0:;
  W32(c->r[4]+0x00000000u,c->r[25]); // 800C9CF0
  goto L_800C9ED8; // 800C9CF4
L_800C9CF8:;
  W32(c->r[4]+0x00000004u,c->r[25]); // 800C9CF8
  c->r[0]=sraw(c,c->r[25],31); // 800C9CFC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800C9D00
  goto L_800C9ED8; // 800C9D04
L_800C9D08:;
  W32(c->r[4]+0x00000000u,c->r[25]); // 800C9D08
  goto L_800C9ED8; // 800C9D0C
L_800C9D10:;
  W32(c->r[4]+0x00000000u,c->r[25]); // 800C9D10
  goto L_800C9ED8; // 800C9D14
L_800C9D18:;
  W32(c->r[4]+0x00000004u,c->r[25]); // 800C9D18
  c->r[0]=sraw(c,c->r[25],31); // 800C9D1C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800C9D20
  goto L_800C9ED8; // 800C9D24
L_800C9D28:;
  c->r[3]=c->r[19]|c->r[19]; // 800C9D28
  c->r[26]=c->r[1]+0x00000080u; // 800C9D2C
  c->r[4]=0u+0x00000001u; // 800C9D30
  c->lr=0x800C9D38u; f_800C1750(c); // 800C9D34
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C9D38
  c->r[27]=0u+0x00000001u; // 800C9D3C
  W8(c->r[1]+0x00000080u,c->r[0]); // 800C9D40
  goto L_800C9D9C; // 800C9D44
L_800C9D48:;
  W8(c->r[1]+0x00000080u,c->r[31]); // 800C9D48
  c->r[26]=c->r[1]+0x00000080u; // 800C9D4C
  c->r[27]=0u+0x00000001u; // 800C9D50
  goto L_800C9D9C; // 800C9D54
L_800C9D58:;
  c->r[3]=c->r[24]|c->r[24]; // 800C9D58
  c->lr=0x800C9D60u; f_800C1734(c); // 800C9D5C
  cmps(c,0,(int32_t)c->r[3],0); // 800C9D60
  c->r[5]=c->r[3]|c->r[3]; // 800C9D64
  c->r[25]=c->r[25]+c->r[3]; // 800C9D68
  if (crb(c,2)) { goto L_800C9D94; } // 800C9D6C
  c->r[12]=c->r[17]|c->r[17]; // 800C9D70
  c->r[3]=c->r[18]|c->r[18]; // 800C9D74
  c->r[4]=c->r[24]|c->r[24]; // 800C9D78
  c->ctr=c->r[12]; // 800C9D7C
  if (true) { c->lr=0x800C9D84u; dispatch(c,c->ctr); } // 800C9D80
  cmps(c,0,(int32_t)c->r[3],0); // 800C9D84
  if (!crb(c,2)) { goto L_800C9D94; } // 800C9D88
  c->r[3]=0u+0xFFFFFFFFu; // 800C9D8C
  goto L_800C9EE8; // 800C9D90
L_800C9D94:;
  c->r[3]=c->r[25]|c->r[25]; // 800C9D94
  goto L_800C9EE8; // 800C9D98
L_800C9D9C:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 800C9D9C
  c->r[24]=c->r[27]|c->r[27]; // 800C9DA0
  cmps(c,0,(int32_t)c->r[0],0); // 800C9DA4
  if (crb(c,2)) { goto L_800C9E58; } // 800C9DA8
  cmpu(c,0,c->r[0],0x00000002u); // 800C9DAC
  c->r[3]=0u+0x00000020u; // 800C9DB0
  if (!crb(c,2)) { goto L_800C9DBC; } // 800C9DB4
  c->r[3]=0u+0x00000030u; // 800C9DB8
L_800C9DBC:;
  W8(c->r[1]+0x00000009u,c->r[3]); // 800C9DBC
  c->r[0]=R8(c->r[26]+0x00000000u); // 800C9DC0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800C9DC4
  cmps(c,0,(int32_t)c->r[0],43); // 800C9DC8
  if (crb(c,2)) { goto L_800C9DE0; } // 800C9DCC
  cmps(c,0,(int32_t)c->r[0],45); // 800C9DD0
  if (crb(c,2)) { goto L_800C9DE0; } // 800C9DD4
  cmps(c,0,(int32_t)c->r[0],32); // 800C9DD8
  if (!crb(c,2)) { goto L_800C9E4C; } // 800C9DDC
L_800C9DE0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800C9DE0
  cmps(c,0,(int32_t)c->r[0],48); // 800C9DE4
  if (!crb(c,2)) { goto L_800C9E4C; } // 800C9DE8
  c->r[12]=c->r[17]|c->r[17]; // 800C9DEC
  c->r[3]=c->r[18]|c->r[18]; // 800C9DF0
  c->r[4]=c->r[26]|c->r[26]; // 800C9DF4
  c->r[5]=0u+0x00000001u; // 800C9DF8
  c->ctr=c->r[12]; // 800C9DFC
  if (true) { c->lr=0x800C9E04u; dispatch(c,c->ctr); } // 800C9E00
  cmps(c,0,(int32_t)c->r[3],0); // 800C9E04
  if (!crb(c,2)) { goto L_800C9E14; } // 800C9E08
  c->r[3]=0u+0xFFFFFFFFu; // 800C9E0C
  goto L_800C9EE8; // 800C9E10
L_800C9E14:;
  c->r[26]=c->r[26]+0x00000001u; // 800C9E14
  c->r[27]=c->r[27]+0xFFFFFFFFu; // 800C9E18
  goto L_800C9E4C; // 800C9E1C
L_800C9E20:;
  c->r[12]=c->r[17]|c->r[17]; // 800C9E20
  c->r[3]=c->r[18]|c->r[18]; // 800C9E24
  c->r[4]=c->r[1]+0x00000009u; // 800C9E28
  c->r[5]=0u+0x00000001u; // 800C9E2C
  c->ctr=c->r[12]; // 800C9E30
  if (true) { c->lr=0x800C9E38u; dispatch(c,c->ctr); } // 800C9E34
  cmps(c,0,(int32_t)c->r[3],0); // 800C9E38
  if (!crb(c,2)) { goto L_800C9E48; } // 800C9E3C
  c->r[3]=0u+0xFFFFFFFFu; // 800C9E40
  goto L_800C9EE8; // 800C9E44
L_800C9E48:;
  c->r[24]=c->r[24]+0x00000001u; // 800C9E48
L_800C9E4C:;
  c->r[0]=R32(c->r[1]+0x00000078u); // 800C9E4C
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 800C9E50
  if (crb(c,0)) { IRQCHK(c); goto L_800C9E20; } // 800C9E54
L_800C9E58:;
  cmps(c,0,(int32_t)c->r[27],0); // 800C9E58
  if (crb(c,2)) { goto L_800C9E88; } // 800C9E5C
  c->r[12]=c->r[17]|c->r[17]; // 800C9E60
  c->r[3]=c->r[18]|c->r[18]; // 800C9E64
  c->r[4]=c->r[26]|c->r[26]; // 800C9E68
  c->r[5]=c->r[27]|c->r[27]; // 800C9E6C
  c->ctr=c->r[12]; // 800C9E70
  if (true) { c->lr=0x800C9E78u; dispatch(c,c->ctr); } // 800C9E74
  cmps(c,0,(int32_t)c->r[3],0); // 800C9E78
  if (!crb(c,2)) { goto L_800C9E88; } // 800C9E7C
  c->r[3]=0u+0xFFFFFFFFu; // 800C9E80
  goto L_800C9EE8; // 800C9E84
L_800C9E88:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 800C9E88
  cmps(c,0,(int32_t)c->r[0],0); // 800C9E8C
  if (!crb(c,2)) { goto L_800C9ED4; } // 800C9E90
  goto L_800C9EC8; // 800C9E94
L_800C9E98:;
  c->r[12]=c->r[17]|c->r[17]; // 800C9E98
  c->r[3]=c->r[18]|c->r[18]; // 800C9E9C
  W8(c->r[1]+0x00000008u,c->r[16]); // 800C9EA0
  c->r[4]=c->r[1]+0x00000008u; // 800C9EA4
  c->r[5]=0u+0x00000001u; // 800C9EA8
  c->ctr=c->r[12]; // 800C9EAC
  if (true) { c->lr=0x800C9EB4u; dispatch(c,c->ctr); } // 800C9EB0
  cmps(c,0,(int32_t)c->r[3],0); // 800C9EB4
  if (!crb(c,2)) { goto L_800C9EC4; } // 800C9EB8
  c->r[3]=0u+0xFFFFFFFFu; // 800C9EBC
  goto L_800C9EE8; // 800C9EC0
L_800C9EC4:;
  c->r[24]=c->r[24]+0x00000001u; // 800C9EC4
L_800C9EC8:;
  c->r[0]=R32(c->r[1]+0x00000078u); // 800C9EC8
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 800C9ECC
  if (crb(c,0)) { IRQCHK(c); goto L_800C9E98; } // 800C9ED0
L_800C9ED4:;
  c->r[25]=c->r[25]+c->r[24]; // 800C9ED4
L_800C9ED8:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 800C9ED8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800C9EDC
  if (!crb(c,2)) { IRQCHK(c); goto L_800C96E4; } // 800C9EE0
L_800C9EE4:;
  c->r[3]=c->r[25]|c->r[25]; // 800C9EE4
L_800C9EE8:;
  {uint32_t ea=c->r[1]+0x00000280u; for(int i=16;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800C9EE8
  c->r[0]=R32(c->r[1]+0x000002C4u); // 800C9EEC
  c->lr=c->r[0]; // 800C9EF0
  c->r[1]=c->r[1]+0x000002C0u; // 800C9EF4
  return; // 800C9EF8
}

// __FileWrite
void f_800C9EFC(Ctx* __restrict c) {
  trace_call(0x800C9EFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9EFC
  c->r[0]=c->lr; // 800C9F00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9F04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9F08
  c->r[31]=c->r[5]|c->r[5]; // 800C9F0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C9F10
  c->r[30]=c->r[3]|c->r[3]; // 800C9F14
  c->r[3]=c->r[4]|c->r[4]; // 800C9F18
  c->r[4]=0u+0x00000001u; // 800C9F1C
  c->r[6]=c->r[30]|c->r[30]; // 800C9F20
  c->lr=0x800C9F28u; f_800C6ED8(c); // 800C9F24
  cmpu(c,0,c->r[31],c->r[3]); // 800C9F28
  if (!crb(c,2)) { goto L_800C9F34; } // 800C9F2C
  goto L_800C9F38; // 800C9F30
L_800C9F34:;
  c->r[30]=0u+0x00000000u; // 800C9F34
L_800C9F38:;
  c->r[3]=c->r[30]|c->r[30]; // 800C9F38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9F3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C9F40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9F44
  c->lr=c->r[0]; // 800C9F48
  c->r[1]=c->r[1]+0x00000010u; // 800C9F4C
  return; // 800C9F50
}

// __StringWrite
void f_800C9F54(Ctx* __restrict c) {
  trace_call(0x800C9F54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9F54
  c->r[0]=c->lr; // 800C9F58
  W32(c->r[1]+0x00000014u,c->r[0]); // 800C9F5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800C9F60
  W32(c->r[1]+0x00000008u,c->r[30]); // 800C9F64
  c->r[30]=c->r[3]|c->r[3]; // 800C9F68
  c->r[6]=R32(c->r[3]+0x00000008u); // 800C9F6C
  c->r[7]=R32(c->r[3]+0x00000004u); // 800C9F70
  c->r[0]=c->r[6]+c->r[5]; // 800C9F74
  cmpu(c,0,c->r[0],c->r[7]); // 800C9F78
  c->r[31]=c->r[7]-c->r[6]; // 800C9F7C
  if (crb(c,1)) { goto L_800C9F88; } // 800C9F80
  c->r[31]=c->r[5]|c->r[5]; // 800C9F84
L_800C9F88:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800C9F88
  c->r[5]=c->r[31]|c->r[31]; // 800C9F8C
  c->r[3]=c->r[0]+c->r[6]; // 800C9F90
  c->lr=0x800C9F98u; f_80004338(c); // 800C9F94
  c->r[0]=R32(c->r[30]+0x00000008u); // 800C9F98
  c->r[3]=0u+0x00000001u; // 800C9F9C
  c->r[0]=c->r[0]+c->r[31]; // 800C9FA0
  W32(c->r[30]+0x00000008u,c->r[0]); // 800C9FA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800C9FA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800C9FAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800C9FB0
  c->lr=c->r[0]; // 800C9FB4
  c->r[1]=c->r[1]+0x00000010u; // 800C9FB8
  return; // 800C9FBC
}

// fn_800C9FC0
void f_800C9FC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800C9FC0
  c->r[0]=c->lr; // 800C9FC4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800C9FC8
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800C9FCC
  W32(c->r[1]+0x00000078u,c->r[30]); // 800C9FD0
  c->r[30]=c->r[3]|c->r[3]; // 800C9FD4
  if (!crb(c,6)) { goto L_800C9FFC; } // 800C9FD8
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800C9FDC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800C9FE0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800C9FE4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800C9FE8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800C9FEC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800C9FF0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800C9FF4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800C9FF8
L_800C9FFC:;
  c->r[31]=0u+0x80220000u; // 800C9FFC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800CA000
  c->r[31]=c->r[31]+0xFFFFBA38u; // 800CA004
  c->r[4]=0u+0xFFFFFFFFu; // 800CA008
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CA00C
  c->r[3]=c->r[31]+0x00000050u; // 800CA010
  W32(c->r[1]+0x00000010u,c->r[5]); // 800CA014
  W32(c->r[1]+0x00000014u,c->r[6]); // 800CA018
  W32(c->r[1]+0x00000018u,c->r[7]); // 800CA01C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800CA020
  W32(c->r[1]+0x00000020u,c->r[9]); // 800CA024
  W32(c->r[1]+0x00000024u,c->r[10]); // 800CA028
  c->lr=0x800CA030u; f_800D02F0(c); // 800CA02C
  cmps(c,0,(int32_t)c->r[3],0); // 800CA030
  if (crb(c,0)) { goto L_800CA040; } // 800CA034
  c->r[3]=0u+0xFFFFFFFFu; // 800CA038
  goto L_800CA070; // 800CA03C
L_800CA040:;
  c->r[4]=c->r[1]+0x00000088u; // 800CA040
  c->r[0]=c->r[1]+0x00000008u; // 800CA044
  c->r[5]=0u+0x01000000u; // 800CA048
  c->r[3]=0u+0x800D0000u; // 800CA04C
  W32(c->r[1]+0x00000068u,c->r[5]); // 800CA050
  c->r[6]=c->r[1]+0x00000068u; // 800CA054
  c->r[5]=c->r[30]|c->r[30]; // 800CA058
  c->r[3]=c->r[3]+0xFFFF9EFCu; // 800CA05C
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 800CA060
  c->r[4]=c->r[31]+0x00000050u; // 800CA064
  W32(c->r[1]+0x00000070u,c->r[0]); // 800CA068
  c->lr=0x800CA070u; f_800C96A0(c); // 800CA06C
L_800CA070:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800CA070
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800CA074
  c->r[30]=R32(c->r[1]+0x00000078u); // 800CA078
  c->lr=c->r[0]; // 800CA07C
  c->r[1]=c->r[1]+0x00000080u; // 800CA080
  return; // 800CA084
}

// vprintf
void f_800CA088(Ctx* __restrict c) {
  trace_call(0x800CA088u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA088
  c->r[0]=c->lr; // 800CA08C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CA090
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CA094
  c->r[31]=0u+0x80220000u; // 800CA098
  c->r[31]=c->r[31]+0xFFFFBA38u; // 800CA09C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CA0A0
  c->r[30]=c->r[4]|c->r[4]; // 800CA0A4
  c->r[4]=0u+0xFFFFFFFFu; // 800CA0A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CA0AC
  c->r[29]=c->r[3]|c->r[3]; // 800CA0B0
  c->r[3]=c->r[31]+0x00000050u; // 800CA0B4
  c->lr=0x800CA0BCu; f_800D02F0(c); // 800CA0B8
  cmps(c,0,(int32_t)c->r[3],0); // 800CA0BC
  if (crb(c,0)) { goto L_800CA0CC; } // 800CA0C0
  c->r[3]=0u+0xFFFFFFFFu; // 800CA0C4
  goto L_800CA0E4; // 800CA0C8
L_800CA0CC:;
  c->r[3]=0u+0x800D0000u; // 800CA0CC
  c->r[5]=c->r[29]|c->r[29]; // 800CA0D0
  c->r[6]=c->r[30]|c->r[30]; // 800CA0D4
  c->r[4]=c->r[31]+0x00000050u; // 800CA0D8
  c->r[3]=c->r[3]+0xFFFF9EFCu; // 800CA0DC
  c->lr=0x800CA0E4u; f_800C96A0(c); // 800CA0E0
L_800CA0E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CA0E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CA0E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CA0EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CA0F0
  c->lr=c->r[0]; // 800CA0F4
  c->r[1]=c->r[1]+0x00000020u; // 800CA0F8
  return; // 800CA0FC
}

// vsnprintf
void f_800CA100(Ctx* __restrict c) {
  trace_call(0x800CA100u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA100
  c->r[0]=c->lr; // 800CA104
  c->r[7]=0u+0x800D0000u; // 800CA108
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CA10C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CA110
  c->r[31]=0u+0x00000000u; // 800CA114
  W32(c->r[1]+0x00000028u,c->r[30]); // 800CA118
  c->r[30]=c->r[4]|c->r[4]; // 800CA11C
  W32(c->r[1]+0x00000024u,c->r[29]); // 800CA120
  c->r[29]=c->r[3]|c->r[3]; // 800CA124
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CA128
  c->r[3]=c->r[7]+0xFFFF9F54u; // 800CA12C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800CA130
  c->r[4]=c->r[1]+0x00000008u; // 800CA134
  W32(c->r[1]+0x00000010u,c->r[31]); // 800CA138
  c->lr=0x800CA140u; f_800C96A0(c); // 800CA13C
  cmps(c,0,(int32_t)c->r[29],0); // 800CA140
  if (crb(c,2)) { goto L_800CA168; } // 800CA144
  cmpu(c,0,c->r[3],c->r[30]); // 800CA148
  if (!crb(c,0)) { goto L_800CA158; } // 800CA14C
  W8(c->r[29]+c->r[3],c->r[31]); // 800CA150
  goto L_800CA168; // 800CA154
L_800CA158:;
  cmps(c,0,(int32_t)c->r[30],0); // 800CA158
  if (crb(c,2)) { goto L_800CA168; } // 800CA15C
  c->r[4]=c->r[29]+c->r[30]; // 800CA160
  W8(c->r[4]+0xFFFFFFFFu,c->r[31]); // 800CA164
L_800CA168:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CA168
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CA16C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800CA170
  c->r[29]=R32(c->r[1]+0x00000024u); // 800CA174
  c->lr=c->r[0]; // 800CA178
  c->r[1]=c->r[1]+0x00000030u; // 800CA17C
  return; // 800CA180
}

// fn_800CA184
void f_800CA184(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA184
  c->r[0]=c->lr; // 800CA188
  c->r[6]=c->r[5]|c->r[5]; // 800CA18C
  c->r[5]=c->r[4]|c->r[4]; // 800CA190
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CA194
  c->r[7]=0u+0x800D0000u; // 800CA198
  c->r[4]=c->r[1]+0x00000008u; // 800CA19C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CA1A0
  c->r[31]=0u+0x00000000u; // 800CA1A4
  W32(c->r[1]+0x00000028u,c->r[30]); // 800CA1A8
  c->r[30]=0u+0xFFFFFFFFu; // 800CA1AC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800CA1B0
  c->r[29]=c->r[3]|c->r[3]; // 800CA1B4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CA1B8
  c->r[3]=c->r[7]+0xFFFF9F54u; // 800CA1BC
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800CA1C0
  W32(c->r[1]+0x00000010u,c->r[31]); // 800CA1C4
  c->lr=0x800CA1CCu; f_800C96A0(c); // 800CA1C8
  cmps(c,0,(int32_t)c->r[29],0); // 800CA1CC
  if (crb(c,2)) { goto L_800CA1E8; } // 800CA1D0
  cmpu(c,0,c->r[3],c->r[30]); // 800CA1D4
  if (!crb(c,0)) { goto L_800CA1E4; } // 800CA1D8
  W8(c->r[29]+c->r[3],c->r[31]); // 800CA1DC
  goto L_800CA1E8; // 800CA1E0
L_800CA1E4:;
  W8(c->r[29]+0xFFFFFFFEu,c->r[31]); // 800CA1E4
L_800CA1E8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CA1E8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CA1EC
  c->r[30]=R32(c->r[1]+0x00000028u); // 800CA1F0
  c->r[29]=R32(c->r[1]+0x00000024u); // 800CA1F4
  c->lr=c->r[0]; // 800CA1F8
  c->r[1]=c->r[1]+0x00000030u; // 800CA1FC
  return; // 800CA200
}

// snprintf
void f_800CA204(Ctx* __restrict c) {
  trace_call(0x800CA204u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA204
  c->r[0]=c->lr; // 800CA208
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800CA20C
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CA210
  c->r[27]=c->r[3]|c->r[3]; // 800CA214
  c->r[28]=c->r[4]|c->r[4]; // 800CA218
  if (!crb(c,6)) { goto L_800CA240; } // 800CA21C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800CA220
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800CA224
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800CA228
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800CA22C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800CA230
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800CA234
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800CA238
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800CA23C
L_800CA240:;
  c->r[12]=c->r[1]+0x000000A8u; // 800CA240
  c->r[0]=c->r[1]+0x00000008u; // 800CA244
  c->r[30]=0u+0x03000000u; // 800CA248
  c->r[31]=0u+0x00000000u; // 800CA24C
  W32(c->r[1]+0x00000010u,c->r[5]); // 800CA250
  c->r[29]=c->r[1]+0x00000074u; // 800CA254
  c->r[11]=0u+0x800D0000u; // 800CA258
  W32(c->r[1]+0x00000014u,c->r[6]); // 800CA25C
  c->r[6]=c->r[29]|c->r[29]; // 800CA260
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CA264
  W32(c->r[1]+0x00000068u,c->r[3]); // 800CA268
  c->r[3]=c->r[11]+0xFFFF9F54u; // 800CA26C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800CA270
  W32(c->r[1]+0x0000006Cu,c->r[4]); // 800CA274
  c->r[4]=c->r[1]+0x00000068u; // 800CA278
  W32(c->r[1]+0x00000018u,c->r[7]); // 800CA27C
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800CA280
  W32(c->r[1]+0x00000020u,c->r[9]); // 800CA284
  W32(c->r[1]+0x00000024u,c->r[10]); // 800CA288
  W32(c->r[1]+0x00000074u,c->r[30]); // 800CA28C
  W32(c->r[1]+0x00000078u,c->r[12]); // 800CA290
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800CA294
  W32(c->r[1]+0x00000070u,c->r[31]); // 800CA298
  c->lr=0x800CA2A0u; f_800C96A0(c); // 800CA29C
  cmps(c,0,(int32_t)c->r[27],0); // 800CA2A0
  if (crb(c,2)) { goto L_800CA2C8; } // 800CA2A4
  cmpu(c,0,c->r[3],c->r[28]); // 800CA2A8
  if (!crb(c,0)) { goto L_800CA2B8; } // 800CA2AC
  W8(c->r[27]+c->r[3],c->r[31]); // 800CA2B0
  goto L_800CA2C8; // 800CA2B4
L_800CA2B8:;
  cmps(c,0,(int32_t)c->r[28],0); // 800CA2B8
  if (crb(c,2)) { goto L_800CA2C8; } // 800CA2BC
  c->r[4]=c->r[27]+c->r[28]; // 800CA2C0
  W8(c->r[4]+0xFFFFFFFFu,c->r[31]); // 800CA2C4
L_800CA2C8:;
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CA2C8
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800CA2CC
  c->lr=c->r[0]; // 800CA2D0
  c->r[1]=c->r[1]+0x000000A0u; // 800CA2D4
  return; // 800CA2D8
}

// sprintf
void f_800CA2DC(Ctx* __restrict c) {
  trace_call(0x800CA2DCu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA2DC
  c->r[0]=c->lr; // 800CA2E0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800CA2E4
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CA2E8
  c->r[27]=c->r[3]|c->r[3]; // 800CA2EC
  if (!crb(c,6)) { goto L_800CA314; } // 800CA2F0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800CA2F4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800CA2F8
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800CA2FC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800CA300
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800CA304
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800CA308
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800CA30C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800CA310
L_800CA314:;
  c->r[12]=c->r[1]+0x000000A8u; // 800CA314
  c->r[0]=c->r[1]+0x00000008u; // 800CA318
  c->r[29]=0u+0x02000000u; // 800CA31C
  c->r[30]=0u+0xFFFFFFFFu; // 800CA320
  c->r[31]=0u+0x00000000u; // 800CA324
  W32(c->r[1]+0x00000010u,c->r[5]); // 800CA328
  c->r[28]=c->r[1]+0x00000074u; // 800CA32C
  c->r[11]=0u+0x800D0000u; // 800CA330
  W32(c->r[1]+0x00000014u,c->r[6]); // 800CA334
  c->r[5]=c->r[4]|c->r[4]; // 800CA338
  c->r[6]=c->r[28]|c->r[28]; // 800CA33C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800CA340
  c->r[4]=c->r[1]+0x00000068u; // 800CA344
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CA348
  W32(c->r[1]+0x00000068u,c->r[3]); // 800CA34C
  c->r[3]=c->r[11]+0xFFFF9F54u; // 800CA350
  W32(c->r[1]+0x00000018u,c->r[7]); // 800CA354
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800CA358
  W32(c->r[1]+0x00000020u,c->r[9]); // 800CA35C
  W32(c->r[1]+0x00000024u,c->r[10]); // 800CA360
  W32(c->r[1]+0x00000074u,c->r[29]); // 800CA364
  W32(c->r[1]+0x00000078u,c->r[12]); // 800CA368
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 800CA36C
  W32(c->r[1]+0x0000006Cu,c->r[30]); // 800CA370
  W32(c->r[1]+0x00000070u,c->r[31]); // 800CA374
  c->lr=0x800CA37Cu; f_800C96A0(c); // 800CA378
  cmps(c,0,(int32_t)c->r[27],0); // 800CA37C
  if (crb(c,2)) { goto L_800CA398; } // 800CA380
  cmpu(c,0,c->r[3],c->r[30]); // 800CA384
  if (!crb(c,0)) { goto L_800CA394; } // 800CA388
  W8(c->r[27]+c->r[3],c->r[31]); // 800CA38C
  goto L_800CA398; // 800CA390
L_800CA394:;
  W8(c->r[27]+0xFFFFFFFEu,c->r[31]); // 800CA394
L_800CA398:;
  {uint32_t ea=c->r[1]+0x0000008Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CA398
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800CA39C
  c->lr=c->r[0]; // 800CA3A0
  c->r[1]=c->r[1]+0x000000A0u; // 800CA3A4
  return; // 800CA3A8
}

// rand
void f_800CA3AC(Ctx* __restrict c) {
  trace_call(0x800CA3ACu);
  c->r[3]=0u+0x41C60000u; // 800CA3AC
  c->r[4]=R32(c->r[13]+0xFFFF8A00u); // 800CA3B0
  c->r[0]=c->r[3]+0x00004E6Du; // 800CA3B4
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800CA3B8
  c->r[0]=c->r[3]+0x00003039u; // 800CA3BC
  W32(c->r[13]+0xFFFF8A00u,c->r[0]); // 800CA3C0
  c->r[3]=rotl(c->r[0],16)&0x00007FFFu; // 800CA3C4
  return; // 800CA3C8
}

// fn_800CA3CC
void f_800CA3CC(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFF8A00u,c->r[3]); // 800CA3CC
  return; // 800CA3D0
}

// fn_800CA3D4
void f_800CA3D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA3D4
  c->r[6]=0u+0x801F0000u; // 800CA3D8
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 800CA3DC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800CA3E0
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800CA3E4
  W32(c->r[1]+0x00000038u,c->r[30]); // 800CA3E8
  cmps(c,0,(int32_t)c->r[5],37); // 800CA3EC
  {uint32_t ea=c->r[6]+0x000041F0u; c->r[0]=R32(ea); c->r[6]=ea;} // 800CA3F0
  c->r[30]=R32(c->r[6]+0x00000004u); // 800CA3F4
  c->r[31]=R32(c->r[6]+0x00000008u); // 800CA3F8
  c->r[12]=R32(c->r[6]+0x0000000Cu); // 800CA3FC
  c->r[11]=R32(c->r[6]+0x00000010u); // 800CA400
  c->r[10]=R32(c->r[6]+0x00000014u); // 800CA404
  c->r[9]=R32(c->r[6]+0x00000018u); // 800CA408
  c->r[8]=R32(c->r[6]+0x0000001Cu); // 800CA40C
  c->r[7]=R32(c->r[6]+0x00000020u); // 800CA410
  c->r[6]=R32(c->r[6]+0x00000024u); // 800CA414
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CA418
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800CA41C
  W32(c->r[1]+0x00000010u,c->r[31]); // 800CA420
  W32(c->r[1]+0x00000014u,c->r[12]); // 800CA424
  W32(c->r[1]+0x00000018u,c->r[11]); // 800CA428
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 800CA42C
  W32(c->r[1]+0x00000020u,c->r[9]); // 800CA430
  W32(c->r[1]+0x00000024u,c->r[8]); // 800CA434
  W32(c->r[1]+0x00000028u,c->r[7]); // 800CA438
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800CA43C
  if (!crb(c,2)) { goto L_800CA47C; } // 800CA440
  W8(c->r[1]+0x0000000Bu,c->r[5]); // 800CA444
  c->r[3]=c->r[3]+0x00000001u; // 800CA448
  c->r[0]=R32(c->r[1]+0x00000008u); // 800CA44C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800CA450
  W32(c->r[4]+0x00000004u,c->r[30]); // 800CA454
  W32(c->r[4]+0x00000008u,c->r[31]); // 800CA458
  W32(c->r[4]+0x0000000Cu,c->r[12]); // 800CA45C
  W32(c->r[4]+0x00000010u,c->r[11]); // 800CA460
  W32(c->r[4]+0x00000014u,c->r[10]); // 800CA464
  W32(c->r[4]+0x00000018u,c->r[9]); // 800CA468
  W32(c->r[4]+0x0000001Cu,c->r[8]); // 800CA46C
  W32(c->r[4]+0x00000020u,c->r[7]); // 800CA470
  W32(c->r[4]+0x00000024u,c->r[6]); // 800CA474
  goto L_800CAA78; // 800CA478
L_800CA47C:;
  cmps(c,0,(int32_t)c->r[5],42); // 800CA47C
  if (!crb(c,2)) { goto L_800CA494; } // 800CA480
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 800CA484
  c->r[0]=0u+0x00000001u; // 800CA488
  W8(c->r[1]+0x00000008u,c->r[0]); // 800CA48C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800CA490
L_800CA494:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CA494
  c->r[0]=0u+0x00000000u; // 800CA498
  if (crb(c,0)) { goto L_800CA4A8; } // 800CA49C
  cmps(c,0,(int32_t)c->r[5],256); // 800CA4A0
  if (crb(c,0)) { goto L_800CA4AC; } // 800CA4A4
L_800CA4A8:;
  c->r[0]=0u+0x00000001u; // 800CA4A8
L_800CA4AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CA4AC
  if (crb(c,2)) { goto L_800CA4BC; } // 800CA4B0
  c->r[0]=0u+0x00000000u; // 800CA4B4
  goto L_800CA4D8; // 800CA4B8
L_800CA4BC:;
  c->r[6]=0u+0x80220000u; // 800CA4BC
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800CA4C0
  c->r[6]=c->r[6]+0xFFFFBE90u; // 800CA4C4
  c->r[6]=R32(c->r[6]+0x00000038u); // 800CA4C8
  c->r[6]=R32(c->r[6]+0x00000008u); // 800CA4CC
  c->r[0]=R16(c->r[6]+c->r[0]); // 800CA4D0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CA4D4
L_800CA4D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CA4D8
  if (crb(c,2)) { goto L_800CA5BC; } // 800CA4DC
  c->r[6]=0u+0x80220000u; // 800CA4E0
  c->r[0]=0u+0x00000000u; // 800CA4E4
  c->r[6]=c->r[6]+0xFFFFBE90u; // 800CA4E8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CA4EC
  c->r[7]=R32(c->r[6]+0x00000038u); // 800CA4F0
L_800CA4F4:;
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800CA4F4
  c->r[0]=0u+0x00000000u; // 800CA4F8
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)10); // 800CA4FC
  c->r[6]=c->r[5]+c->r[6]; // 800CA500
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 800CA504
  c->r[6]=c->r[6]+0xFFFFFFD0u; // 800CA508
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[5]); // 800CA50C
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800CA510
  if (crb(c,0)) { goto L_800CA520; } // 800CA514
  cmps(c,0,(int32_t)c->r[5],256); // 800CA518
  if (crb(c,0)) { goto L_800CA524; } // 800CA51C
L_800CA520:;
  c->r[0]=0u+0x00000001u; // 800CA520
L_800CA524:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CA524
  if (crb(c,2)) { goto L_800CA534; } // 800CA528
  c->r[0]=0u+0x00000000u; // 800CA52C
  goto L_800CA544; // 800CA530
L_800CA534:;
  c->r[6]=R32(c->r[7]+0x00000008u); // 800CA534
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800CA538
  c->r[0]=R16(c->r[6]+c->r[0]); // 800CA53C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CA540
L_800CA544:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CA544
  if (!crb(c,2)) { IRQCHK(c); goto L_800CA4F4; } // 800CA548
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800CA54C
  cmps(c,0,(int32_t)c->r[6],0); // 800CA550
  if (!crb(c,2)) { goto L_800CA5B4; } // 800CA554
  c->r[0]=0u+0x000000FFu; // 800CA558
  c->r[3]=c->r[3]+0x00000001u; // 800CA55C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800CA560
  c->r[0]=R32(c->r[1]+0x00000008u); // 800CA564
  W32(c->r[4]+0x00000000u,c->r[0]); // 800CA568
  W32(c->r[4]+0x00000004u,c->r[6]); // 800CA56C
  c->r[5]=R32(c->r[1]+0x00000010u); // 800CA570
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA574
  W32(c->r[4]+0x00000008u,c->r[5]); // 800CA578
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800CA57C
  c->r[5]=R32(c->r[1]+0x00000018u); // 800CA580
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800CA584
  W32(c->r[4]+0x00000010u,c->r[5]); // 800CA588
  W32(c->r[4]+0x00000014u,c->r[0]); // 800CA58C
  c->r[5]=R32(c->r[1]+0x00000020u); // 800CA590
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CA594
  W32(c->r[4]+0x00000018u,c->r[5]); // 800CA598
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 800CA59C
  c->r[5]=R32(c->r[1]+0x00000028u); // 800CA5A0
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800CA5A4
  W32(c->r[4]+0x00000020u,c->r[5]); // 800CA5A8
  W32(c->r[4]+0x00000024u,c->r[0]); // 800CA5AC
  goto L_800CAA78; // 800CA5B0
L_800CA5B4:;
  c->r[0]=0u+0x00000001u; // 800CA5B4
  W8(c->r[1]+0x00000009u,c->r[0]); // 800CA5B8
L_800CA5BC:;
  cmps(c,0,(int32_t)c->r[5],107); // 800CA5BC
  c->r[7]=0u+0x00000001u; // 800CA5C0
  if (crb(c,2)) { goto L_800CA69C; } // 800CA5C4
  if (!crb(c,0)) { goto L_800CA5F0; } // 800CA5C8
  cmps(c,0,(int32_t)c->r[5],104); // 800CA5CC
  if (crb(c,2)) { goto L_800CA614; } // 800CA5D0
  if (!crb(c,0)) { goto L_800CA5E4; } // 800CA5D4
  cmps(c,0,(int32_t)c->r[5],76); // 800CA5D8
  if (crb(c,2)) { goto L_800CA66C; } // 800CA5DC
  goto L_800CA69C; // 800CA5E0
L_800CA5E4:;
  cmps(c,0,(int32_t)c->r[5],106); // 800CA5E4
  if (!crb(c,0)) { goto L_800CA678; } // 800CA5E8
  goto L_800CA69C; // 800CA5EC
L_800CA5F0:;
  cmps(c,0,(int32_t)c->r[5],116); // 800CA5F0
  if (crb(c,2)) { goto L_800CA690; } // 800CA5F4
  if (!crb(c,0)) { goto L_800CA608; } // 800CA5F8
  cmps(c,0,(int32_t)c->r[5],109); // 800CA5FC
  if (!crb(c,0)) { goto L_800CA69C; } // 800CA600
  goto L_800CA640; // 800CA604
L_800CA608:;
  cmps(c,0,(int32_t)c->r[5],122); // 800CA608
  if (crb(c,2)) { goto L_800CA684; } // 800CA60C
  goto L_800CA69C; // 800CA610
L_800CA614:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 800CA614
  c->r[6]=0u+0x00000002u; // 800CA618
  W8(c->r[1]+0x0000000Au,c->r[6]); // 800CA61C
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800CA620
  cmps(c,0,(int32_t)c->r[6],104); // 800CA624
  if (!crb(c,2)) { goto L_800CA6A0; } // 800CA628
  c->r[0]=0u+0x00000001u; // 800CA62C
  c->r[5]=c->r[6]|c->r[6]; // 800CA630
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CA634
  c->r[3]=c->r[3]+0x00000001u; // 800CA638
  goto L_800CA6A0; // 800CA63C
L_800CA640:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 800CA640
  c->r[6]=0u+0x00000003u; // 800CA644
  W8(c->r[1]+0x0000000Au,c->r[6]); // 800CA648
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800CA64C
  cmps(c,0,(int32_t)c->r[6],108); // 800CA650
  if (!crb(c,2)) { goto L_800CA6A0; } // 800CA654
  c->r[0]=0u+0x00000007u; // 800CA658
  c->r[5]=c->r[6]|c->r[6]; // 800CA65C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CA660
  c->r[3]=c->r[3]+0x00000001u; // 800CA664
  goto L_800CA6A0; // 800CA668
L_800CA66C:;
  c->r[0]=0u+0x00000009u; // 800CA66C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CA670
  goto L_800CA6A0; // 800CA674
L_800CA678:;
  c->r[0]=0u+0x00000004u; // 800CA678
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CA67C
  goto L_800CA6A0; // 800CA680
L_800CA684:;
  c->r[0]=0u+0x00000005u; // 800CA684
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CA688
  goto L_800CA6A0; // 800CA68C
L_800CA690:;
  c->r[0]=0u+0x00000006u; // 800CA690
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CA694
  goto L_800CA6A0; // 800CA698
L_800CA69C:;
  c->r[7]=0u+0x00000000u; // 800CA69C
L_800CA6A0:;
  cmps(c,0,(int32_t)c->r[7],0); // 800CA6A0
  if (crb(c,2)) { goto L_800CA6B0; } // 800CA6A4
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 800CA6A8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800CA6AC
L_800CA6B0:;
  c->r[0]=c->r[5]+0xFFFFFFBFu; // 800CA6B0
  W8(c->r[1]+0x0000000Bu,c->r[5]); // 800CA6B4
  cmpu(c,0,c->r[0],0x00000037u); // 800CA6B8
  if (crb(c,1)) { goto L_800CAA1C; } // 800CA6BC
  c->r[5]=0u+0x80220000u; // 800CA6C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CA6C4
  c->r[5]=c->r[5]+0xFFFFC128u; // 800CA6C8
  c->r[5]=R32(c->r[5]+c->r[0]); // 800CA6CC
  c->ctr=c->r[5]; // 800CA6D0
  if (true) { switch (c->ctr) { case 0x800CA6D8u: goto L_800CA6D8; case 0x800CA6F0u: goto L_800CA6F0; case 0x800CA734u: goto L_800CA734; case 0x800CA748u: goto L_800CA748; case 0x800CA774u: goto L_800CA774; case 0x800CA82Cu: goto L_800CA82C; case 0x800CAA1Cu: goto L_800CAA1C; case 0x800CAA24u: goto L_800CAA24; default: break; } dispatch(c,c->ctr); return; } // 800CA6D4
L_800CA6D8:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800CA6D8
  cmpu(c,0,c->r[0],0x00000009u); // 800CA6DC
  if (!crb(c,2)) { goto L_800CAA24; } // 800CA6E0
  c->r[0]=0u+0x000000FFu; // 800CA6E4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800CA6E8
  goto L_800CAA24; // 800CA6EC
L_800CA6F0:;
  c->r[5]=R8(c->r[1]+0x0000000Au); // 800CA6F0
  cmpu(c,0,c->r[5],0x00000001u); // 800CA6F4
  if (crb(c,2)) { goto L_800CA714; } // 800CA6F8
  cmpu(c,0,c->r[5],0x00000002u); // 800CA6FC
  if (crb(c,2)) { goto L_800CA714; } // 800CA700
  c->r[0]=c->r[5]+0x000000FCu; // 800CA704
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800CA708
  cmpu(c,0,c->r[0],0x00000003u); // 800CA70C
  if (crb(c,1)) { goto L_800CA720; } // 800CA710
L_800CA714:;
  c->r[0]=0u+0x000000FFu; // 800CA714
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800CA718
  goto L_800CAA24; // 800CA71C
L_800CA720:;
  cmpu(c,0,c->r[5],0x00000003u); // 800CA720
  if (!crb(c,2)) { goto L_800CAA24; } // 800CA724
  c->r[0]=0u+0x00000008u; // 800CA728
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CA72C
  goto L_800CAA24; // 800CA730
L_800CA734:;
  c->r[5]=0u+0x00000003u; // 800CA734
  c->r[0]=0u+0x00000078u; // 800CA738
  W8(c->r[1]+0x0000000Au,c->r[5]); // 800CA73C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800CA740
  goto L_800CAA24; // 800CA744
L_800CA748:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800CA748
  cmpu(c,0,c->r[0],0x00000003u); // 800CA74C
  if (!crb(c,2)) { goto L_800CA760; } // 800CA750
  c->r[0]=0u+0x0000000Au; // 800CA754
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CA758
  goto L_800CAA24; // 800CA75C
L_800CA760:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CA760
  if (crb(c,2)) { goto L_800CAA24; } // 800CA764
  c->r[0]=0u+0x000000FFu; // 800CA768
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800CA76C
  goto L_800CAA24; // 800CA770
L_800CA774:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800CA774
  cmpu(c,0,c->r[0],0x00000003u); // 800CA778
  if (!crb(c,2)) { goto L_800CA78C; } // 800CA77C
  c->r[0]=0u+0x0000000Au; // 800CA780
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CA784
  goto L_800CA79C; // 800CA788
L_800CA78C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CA78C
  if (crb(c,2)) { goto L_800CA79C; } // 800CA790
  c->r[0]=0u+0x000000FFu; // 800CA794
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800CA798
L_800CA79C:;
  c->r[6]=0u+0x000000FFu; // 800CA79C
  c->r[5]=0u+0x000000C1u; // 800CA7A0
  c->r[0]=0u+0x000000FEu; // 800CA7A4
  W8(c->r[1]+0x00000010u,c->r[6]); // 800CA7A8
  W8(c->r[1]+0x00000012u,c->r[6]); // 800CA7AC
  W8(c->r[1]+0x00000013u,c->r[6]); // 800CA7B0
  W8(c->r[1]+0x00000015u,c->r[6]); // 800CA7B4
  W8(c->r[1]+0x00000016u,c->r[6]); // 800CA7B8
  W8(c->r[1]+0x00000017u,c->r[6]); // 800CA7BC
  W8(c->r[1]+0x00000018u,c->r[6]); // 800CA7C0
  W8(c->r[1]+0x00000019u,c->r[6]); // 800CA7C4
  W8(c->r[1]+0x0000001Au,c->r[6]); // 800CA7C8
  W8(c->r[1]+0x0000001Bu,c->r[6]); // 800CA7CC
  W8(c->r[1]+0x0000001Cu,c->r[6]); // 800CA7D0
  W8(c->r[1]+0x0000001Du,c->r[6]); // 800CA7D4
  W8(c->r[1]+0x0000001Eu,c->r[6]); // 800CA7D8
  W8(c->r[1]+0x0000001Fu,c->r[6]); // 800CA7DC
  W8(c->r[1]+0x00000020u,c->r[6]); // 800CA7E0
  W8(c->r[1]+0x00000021u,c->r[6]); // 800CA7E4
  W8(c->r[1]+0x00000022u,c->r[6]); // 800CA7E8
  W8(c->r[1]+0x00000023u,c->r[6]); // 800CA7EC
  W8(c->r[1]+0x00000024u,c->r[6]); // 800CA7F0
  W8(c->r[1]+0x00000025u,c->r[6]); // 800CA7F4
  W8(c->r[1]+0x00000026u,c->r[6]); // 800CA7F8
  W8(c->r[1]+0x00000027u,c->r[6]); // 800CA7FC
  W8(c->r[1]+0x00000028u,c->r[6]); // 800CA800
  W8(c->r[1]+0x00000029u,c->r[6]); // 800CA804
  W8(c->r[1]+0x0000002Au,c->r[6]); // 800CA808
  W8(c->r[1]+0x0000002Bu,c->r[6]); // 800CA80C
  W8(c->r[1]+0x0000002Cu,c->r[6]); // 800CA810
  W8(c->r[1]+0x0000002Du,c->r[6]); // 800CA814
  W8(c->r[1]+0x0000002Eu,c->r[6]); // 800CA818
  W8(c->r[1]+0x0000002Fu,c->r[6]); // 800CA81C
  W8(c->r[1]+0x00000011u,c->r[5]); // 800CA820
  W8(c->r[1]+0x00000014u,c->r[0]); // 800CA824
  goto L_800CAA24; // 800CA828
L_800CA82C:;
  c->r[0]=R8(c->r[1]+0x0000000Au); // 800CA82C
  cmpu(c,0,c->r[0],0x00000003u); // 800CA830
  if (!crb(c,2)) { goto L_800CA844; } // 800CA834
  c->r[0]=0u+0x0000000Au; // 800CA838
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800CA83C
  goto L_800CA854; // 800CA840
L_800CA844:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CA844
  if (crb(c,2)) { goto L_800CA854; } // 800CA848
  c->r[0]=0u+0x000000FFu; // 800CA84C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800CA850
L_800CA854:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[10]=R8(ea); c->r[3]=ea;} // 800CA854
  c->r[11]=0u+0x00000000u; // 800CA858
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 800CA85C
  cmps(c,0,(int32_t)c->r[10],94); // 800CA860
  if (!crb(c,2)) { goto L_800CA874; } // 800CA864
  {uint32_t ea=c->r[3]+0x00000001u; c->r[10]=R8(ea); c->r[3]=ea;} // 800CA868
  c->r[11]=0u+0x00000001u; // 800CA86C
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 800CA870
L_800CA874:;
  cmps(c,0,(int32_t)c->r[10],93); // 800CA874
  if (!crb(c,2)) { goto L_800CA890; } // 800CA878
  c->r[0]=R8(c->r[1]+0x0000001Bu); // 800CA87C
  {uint32_t ea=c->r[3]+0x00000001u; c->r[10]=R8(ea); c->r[3]=ea;} // 800CA880
  c->r[0]=c->r[0]|0x00000020u; // 800CA884
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 800CA888
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 800CA88C
L_800CA890:;
  c->r[8]=c->r[1]+0x00000008u; // 800CA890
  c->r[5]=0u+0x00000001u; // 800CA894
  goto L_800CA918; // 800CA898
L_800CA89C:;
  c->r[6]=rotl(c->r[10],29)&0x0000001Fu; // 800CA89C
  c->r[0]=R8(c->r[3]+0x00000001u); // 800CA8A0
  c->r[9]=c->r[8]+c->r[6]; // 800CA8A4
  c->r[6]=rotl(c->r[10],0)&0x00000007u; // 800CA8A8
  c->r[7]=R8(c->r[9]+0x00000008u); // 800CA8AC
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[5]<<((c->r[6])&31)); // 800CA8B0
  cmps(c,0,(int32_t)c->r[0],45); // 800CA8B4
  c->r[6]=c->r[7]|c->r[6]; // 800CA8B8
  W8(c->r[9]+0x00000008u,c->r[6]); // 800CA8BC
  if (!crb(c,2)) { goto L_800CA910; } // 800CA8C0
  c->r[9]=R8(c->r[3]+0x00000002u); // 800CA8C4
  c->r[9]=(uint32_t)(int32_t)(int8_t)c->r[9]; cr0(c,c->r[9]); // 800CA8C8
  if (crb(c,2)) { goto L_800CA910; } // 800CA8CC
  cmps(c,0,(int32_t)c->r[9],93); // 800CA8D0
  if (crb(c,2)) { goto L_800CA910; } // 800CA8D4
  goto L_800CA8F8; // 800CA8D8
L_800CA8DC:;
  c->r[6]=rotl(c->r[10],29)&0x0000001Fu; // 800CA8DC
  c->r[0]=rotl(c->r[10],0)&0x00000007u; // 800CA8E0
  c->r[7]=c->r[8]+c->r[6]; // 800CA8E4
  c->r[6]=R8(c->r[7]+0x00000008u); // 800CA8E8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800CA8EC
  c->r[0]=c->r[6]|c->r[0]; // 800CA8F0
  W8(c->r[7]+0x00000008u,c->r[0]); // 800CA8F4
L_800CA8F8:;
  c->r[10]=c->r[10]+0x00000001u; // 800CA8F8
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[9]); // 800CA8FC
  if (!crb(c,1)) { IRQCHK(c); goto L_800CA8DC; } // 800CA900
  {uint32_t ea=c->r[3]+0x00000003u; c->r[10]=R8(ea); c->r[3]=ea;} // 800CA904
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 800CA908
  goto L_800CA918; // 800CA90C
L_800CA910:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[10]=R8(ea); c->r[3]=ea;} // 800CA910
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 800CA914
L_800CA918:;
  cmps(c,0,(int32_t)c->r[10],0); // 800CA918
  if (crb(c,2)) { goto L_800CA928; } // 800CA91C
  cmps(c,0,(int32_t)c->r[10],93); // 800CA920
  if (!crb(c,2)) { IRQCHK(c); goto L_800CA89C; } // 800CA924
L_800CA928:;
  cmps(c,0,(int32_t)c->r[10],0); // 800CA928
  if (!crb(c,2)) { goto L_800CA93C; } // 800CA92C
  c->r[0]=0u+0x000000FFu; // 800CA930
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800CA934
  goto L_800CAA24; // 800CA938
L_800CA93C:;
  cmps(c,0,(int32_t)c->r[11],0); // 800CA93C
  if (crb(c,2)) { goto L_800CAA24; } // 800CA940
  c->r[0]=0u+0x00000002u; // 800CA944
  c->r[5]=c->r[1]+0x00000010u; // 800CA948
  c->ctr=c->r[0]; // 800CA94C
L_800CA950:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 800CA950
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA954
  W8(c->r[5]+0x00000000u,c->r[0]); // 800CA958
  c->r[0]=R8(c->r[5]+0x00000001u); // 800CA95C
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA960
  W8(c->r[5]+0x00000001u,c->r[0]); // 800CA964
  c->r[0]=R8(c->r[5]+0x00000002u); // 800CA968
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA96C
  W8(c->r[5]+0x00000002u,c->r[0]); // 800CA970
  c->r[0]=R8(c->r[5]+0x00000003u); // 800CA974
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA978
  W8(c->r[5]+0x00000003u,c->r[0]); // 800CA97C
  c->r[0]=R8(c->r[5]+0x00000004u); // 800CA980
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA984
  W8(c->r[5]+0x00000004u,c->r[0]); // 800CA988
  c->r[0]=R8(c->r[5]+0x00000005u); // 800CA98C
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA990
  W8(c->r[5]+0x00000005u,c->r[0]); // 800CA994
  c->r[0]=R8(c->r[5]+0x00000006u); // 800CA998
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA99C
  W8(c->r[5]+0x00000006u,c->r[0]); // 800CA9A0
  c->r[0]=R8(c->r[5]+0x00000007u); // 800CA9A4
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA9A8
  W8(c->r[5]+0x00000007u,c->r[0]); // 800CA9AC
  c->r[0]=R8(c->r[5]+0x00000008u); // 800CA9B0
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA9B4
  W8(c->r[5]+0x00000008u,c->r[0]); // 800CA9B8
  c->r[0]=R8(c->r[5]+0x00000009u); // 800CA9BC
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA9C0
  W8(c->r[5]+0x00000009u,c->r[0]); // 800CA9C4
  c->r[0]=R8(c->r[5]+0x0000000Au); // 800CA9C8
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA9CC
  W8(c->r[5]+0x0000000Au,c->r[0]); // 800CA9D0
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 800CA9D4
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA9D8
  W8(c->r[5]+0x0000000Bu,c->r[0]); // 800CA9DC
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 800CA9E0
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA9E4
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 800CA9E8
  c->r[0]=R8(c->r[5]+0x0000000Du); // 800CA9EC
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA9F0
  W8(c->r[5]+0x0000000Du,c->r[0]); // 800CA9F4
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 800CA9F8
  c->r[0]=~(c->r[0]|c->r[0]); // 800CA9FC
  W8(c->r[5]+0x0000000Eu,c->r[0]); // 800CAA00
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 800CAA04
  c->r[0]=~(c->r[0]|c->r[0]); // 800CAA08
  W8(c->r[5]+0x0000000Fu,c->r[0]); // 800CAA0C
  c->r[5]=c->r[5]+0x00000010u; // 800CAA10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CA950; } // 800CAA14
  goto L_800CAA24; // 800CAA18
L_800CAA1C:;
  c->r[0]=0u+0x000000FFu; // 800CAA1C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800CAA20
L_800CAA24:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 800CAA24
  c->r[3]=c->r[3]+0x00000001u; // 800CAA28
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CAA2C
  W32(c->r[4]+0x00000000u,c->r[5]); // 800CAA30
  W32(c->r[4]+0x00000004u,c->r[0]); // 800CAA34
  c->r[5]=R32(c->r[1]+0x00000010u); // 800CAA38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAA3C
  W32(c->r[4]+0x00000008u,c->r[5]); // 800CAA40
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800CAA44
  c->r[5]=R32(c->r[1]+0x00000018u); // 800CAA48
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800CAA4C
  W32(c->r[4]+0x00000010u,c->r[5]); // 800CAA50
  W32(c->r[4]+0x00000014u,c->r[0]); // 800CAA54
  c->r[5]=R32(c->r[1]+0x00000020u); // 800CAA58
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CAA5C
  W32(c->r[4]+0x00000018u,c->r[5]); // 800CAA60
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 800CAA64
  c->r[5]=R32(c->r[1]+0x00000028u); // 800CAA68
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800CAA6C
  W32(c->r[4]+0x00000020u,c->r[5]); // 800CAA70
  W32(c->r[4]+0x00000024u,c->r[0]); // 800CAA74
L_800CAA78:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800CAA78
  c->r[30]=R32(c->r[1]+0x00000038u); // 800CAA7C
  c->r[1]=c->r[1]+0x00000040u; // 800CAA80
  return; // 800CAA84
}

// fn_800CAA88
void f_800CAA88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAA88
  c->r[0]=c->lr; // 800CAA8C
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800CAA90
  c->r[11]=c->r[1]+0x000000B0u; // 800CAA94
  c->lr=0x800CAA9Cu; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CAA98
  c->r[0]=0u+0x00000000u; // 800CAA9C
  c->r[8]=0u+0x80220000u; // 800CAAA0
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800CAAA4
  c->r[0]=0u+0x00000000u; // 800CAAA8
  c->r[26]=c->r[3]|c->r[3]; // 800CAAAC
  c->r[27]=c->r[4]|c->r[4]; // 800CAAB0
  W32(c->r[1]+0x00000008u,c->r[6]); // 800CAAB4
  c->r[17]=c->r[5]|c->r[5]; // 800CAAB8
  c->r[28]=c->r[7]|c->r[7]; // 800CAABC
  c->r[25]=c->r[1]+0x00000020u; // 800CAAC0
  W32(c->r[1]+0x00000058u,c->r[0]); // 800CAAC4
  c->r[23]=c->r[8]+0xFFFFBE90u; // 800CAAC8
  c->r[29]=0u+0x00000000u; // 800CAACC
  c->r[21]=0u+0x00000000u; // 800CAAD0
  c->r[20]=0u+0x00000000u; // 800CAAD4
  c->r[19]=0u+0x00000000u; // 800CAAD8
  c->r[24]=0u+0x00000001u; // 800CAADC
  goto L_800CB790; // 800CAAE0
L_800CAAE4:;
  cmps(c,0,(int32_t)c->r[22],0); // 800CAAE4
  c->r[0]=0u+0x00000000u; // 800CAAE8
  if (crb(c,0)) { goto L_800CAAF8; } // 800CAAEC
  cmps(c,0,(int32_t)c->r[22],256); // 800CAAF0
  if (crb(c,0)) { goto L_800CAAFC; } // 800CAAF4
L_800CAAF8:;
  c->r[0]=0u+0x00000001u; // 800CAAF8
L_800CAAFC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CAAFC
  if (crb(c,2)) { goto L_800CAB0C; } // 800CAB00
  c->r[0]=0u+0x00000000u; // 800CAB04
  goto L_800CAB20; // 800CAB08
L_800CAB0C:;
  c->r[3]=R32(c->r[23]+0x00000038u); // 800CAB0C
  c->r[0]=rotl(c->r[22],1)&0xFFFFFFFEu; // 800CAB10
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CAB14
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CAB18
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 800CAB1C
L_800CAB20:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CAB20
  if (crb(c,2)) { goto L_800CAC00; } // 800CAB24
  c->r[4]=R32(c->r[23]+0x00000038u); // 800CAB28
L_800CAB2C:;
  {uint32_t ea=c->r[17]+0x00000001u; c->r[3]=R8(ea); c->r[17]=ea;} // 800CAB2C
  c->r[0]=0u+0x00000000u; // 800CAB30
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[5]); // 800CAB34
  if (crb(c,0)) { goto L_800CAB44; } // 800CAB38
  cmps(c,0,(int32_t)c->r[5],256); // 800CAB3C
  if (crb(c,0)) { goto L_800CAB48; } // 800CAB40
L_800CAB44:;
  c->r[0]=0u+0x00000001u; // 800CAB44
L_800CAB48:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CAB48
  if (crb(c,2)) { goto L_800CAB58; } // 800CAB4C
  c->r[0]=0u+0x00000000u; // 800CAB50
  goto L_800CAB68; // 800CAB54
L_800CAB58:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 800CAB58
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800CAB5C
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CAB60
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 800CAB64
L_800CAB68:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CAB68
  if (!crb(c,2)) { IRQCHK(c); goto L_800CAB2C; } // 800CAB6C
  cmps(c,0,(int32_t)c->r[29],0); // 800CAB70
  if (!crb(c,2)) { goto L_800CB790; } // 800CAB74
  goto L_800CAB80; // 800CAB78
L_800CAB7C:;
  c->r[21]=c->r[21]+0x00000001u; // 800CAB7C
L_800CAB80:;
  c->r[12]=c->r[26]|c->r[26]; // 800CAB80
  c->r[3]=c->r[27]|c->r[27]; // 800CAB84
  c->r[4]=0u+0x00000000u; // 800CAB88
  c->r[5]=0u+0x00000000u; // 800CAB8C
  c->ctr=c->r[12]; // 800CAB90
  if (true) { c->lr=0x800CAB98u; dispatch(c,c->ctr); } // 800CAB94
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[5]); // 800CAB98
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800CAB9C
  c->r[0]=0u+0x00000000u; // 800CABA0
  if (crb(c,0)) { goto L_800CABB0; } // 800CABA4
  cmps(c,0,(int32_t)c->r[5],256); // 800CABA8
  if (crb(c,0)) { goto L_800CABB4; } // 800CABAC
L_800CABB0:;
  c->r[0]=0u+0x00000001u; // 800CABB0
L_800CABB4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CABB4
  if (crb(c,2)) { goto L_800CABC4; } // 800CABB8
  c->r[0]=0u+0x00000000u; // 800CABBC
  goto L_800CABD8; // 800CABC0
L_800CABC4:;
  c->r[4]=R32(c->r[23]+0x00000038u); // 800CABC4
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800CABC8
  c->r[4]=R32(c->r[4]+0x00000008u); // 800CABCC
  c->r[0]=R16(c->r[4]+c->r[0]); // 800CABD0
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 800CABD4
L_800CABD8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CABD8
  if (!crb(c,2)) { IRQCHK(c); goto L_800CAB7C; } // 800CABDC
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800CABE0
  c->r[12]=c->r[26]|c->r[26]; // 800CABE4
  c->r[3]=c->r[27]|c->r[27]; // 800CABE8
  c->r[5]=0u+0x00000001u; // 800CABEC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800CABF0
  c->ctr=c->r[12]; // 800CABF4
  if (true) { c->lr=0x800CABFCu; dispatch(c,c->ctr); } // 800CABF8
  goto L_800CB790; // 800CABFC
L_800CAC00:;
  cmps(c,0,(int32_t)c->r[22],37); // 800CAC00
  if (crb(c,2)) { goto L_800CAC78; } // 800CAC04
  cmps(c,0,(int32_t)c->r[29],0); // 800CAC08
  if (!crb(c,2)) { goto L_800CAC78; } // 800CAC0C
  c->r[12]=c->r[26]|c->r[26]; // 800CAC10
  c->r[3]=c->r[27]|c->r[27]; // 800CAC14
  c->r[4]=0u+0x00000000u; // 800CAC18
  c->r[5]=0u+0x00000000u; // 800CAC1C
  c->ctr=c->r[12]; // 800CAC20
  if (true) { c->lr=0x800CAC28u; dispatch(c,c->ctr); } // 800CAC24
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800CAC28
  c->r[0]=rotl(c->r[22],0)&0x000000FFu; // 800CAC2C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800CAC30
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800CAC34
  if (crb(c,2)) { goto L_800CAC6C; } // 800CAC38
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800CAC3C
  c->r[12]=c->r[26]|c->r[26]; // 800CAC40
  c->r[3]=c->r[27]|c->r[27]; // 800CAC44
  c->r[5]=0u+0x00000001u; // 800CAC48
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800CAC4C
  c->ctr=c->r[12]; // 800CAC50
  if (true) { c->lr=0x800CAC58u; dispatch(c,c->ctr); } // 800CAC54
  cmps(c,0,(int32_t)c->r[28],0); // 800CAC58
  if (crb(c,2)) { goto L_800CB79C; } // 800CAC5C
  c->r[29]=0u+0x00000001u; // 800CAC60
  c->r[17]=c->r[17]+0x00000001u; // 800CAC64
  goto L_800CB790; // 800CAC68
L_800CAC6C:;
  c->r[21]=c->r[21]+0x00000001u; // 800CAC6C
  c->r[17]=c->r[17]+0x00000001u; // 800CAC70
  goto L_800CB790; // 800CAC74
L_800CAC78:;
  c->r[3]=c->r[17]|c->r[17]; // 800CAC78
  c->r[4]=c->r[1]+0x00000020u; // 800CAC7C
  c->lr=0x800CAC84u; f_800CA3D4(c); // 800CAC80
  c->r[0]=R8(c->r[1]+0x00000020u); // 800CAC84
  c->r[17]=c->r[3]|c->r[3]; // 800CAC88
  cmps(c,0,(int32_t)c->r[0],0); // 800CAC8C
  if (!crb(c,2)) { goto L_800CACB4; } // 800CAC90
  c->r[0]=R8(c->r[1]+0x00000023u); // 800CAC94
  cmpu(c,0,c->r[0],0x00000025u); // 800CAC98
  if (crb(c,2)) { goto L_800CACB4; } // 800CAC9C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CACA0
  c->r[4]=0u+0x00000001u; // 800CACA4
  c->lr=0x800CACACu; f_800C1750(c); // 800CACA8
  c->r[22]=R32(c->r[3]+0x00000000u); // 800CACAC
  goto L_800CACB8; // 800CACB0
L_800CACB4:;
  c->r[22]=0u+0x00000000u; // 800CACB4
L_800CACB8:;
  c->r[0]=R8(c->r[1]+0x00000023u); // 800CACB8
  cmpu(c,0,c->r[0],0x0000006Eu); // 800CACBC
  if (crb(c,2)) { goto L_800CACF8; } // 800CACC0
  cmps(c,0,(int32_t)c->r[29],0); // 800CACC4
  if (!crb(c,2)) { goto L_800CACF8; } // 800CACC8
  c->r[12]=c->r[26]|c->r[26]; // 800CACCC
  c->r[3]=c->r[27]|c->r[27]; // 800CACD0
  c->r[4]=0u+0x00000000u; // 800CACD4
  c->r[5]=0u+0x00000002u; // 800CACD8
  c->ctr=c->r[12]; // 800CACDC
  if (true) { c->lr=0x800CACE4u; dispatch(c,c->ctr); } // 800CACE0
  cmps(c,0,(int32_t)c->r[3],0); // 800CACE4
  if (crb(c,2)) { goto L_800CACF8; } // 800CACE8
  cmps(c,0,(int32_t)c->r[28],0); // 800CACEC
  if (crb(c,2)) { goto L_800CB79C; } // 800CACF0
  c->r[29]=0u+0x00000001u; // 800CACF4
L_800CACF8:;
  c->r[0]=R8(c->r[1]+0x00000023u); // 800CACF8
  cmps(c,0,(int32_t)c->r[0],100); // 800CACFC
  if (crb(c,2)) { goto L_800CADC4; } // 800CAD00
  if (!crb(c,0)) { goto L_800CAD64; } // 800CAD04
  cmps(c,0,(int32_t)c->r[0],88); // 800CAD08
  if (crb(c,2)) { goto L_800CAF88; } // 800CAD0C
  if (!crb(c,0)) { goto L_800CAD40; } // 800CAD10
  cmps(c,0,(int32_t)c->r[0],65); // 800CAD14
  if (crb(c,2)) { goto L_800CB110; } // 800CAD18
  if (!crb(c,0)) { goto L_800CAD2C; } // 800CAD1C
  cmps(c,0,(int32_t)c->r[0],37); // 800CAD20
  if (crb(c,2)) { goto L_800CB36C; } // 800CAD24
  goto L_800CB79C; // 800CAD28
L_800CAD2C:;
  cmps(c,0,(int32_t)c->r[0],72); // 800CAD2C
  if (!crb(c,0)) { goto L_800CB79C; } // 800CAD30
  cmps(c,0,(int32_t)c->r[0],69); // 800CAD34
  if (!crb(c,0)) { goto L_800CB110; } // 800CAD38
  goto L_800CB79C; // 800CAD3C
L_800CAD40:;
  cmps(c,0,(int32_t)c->r[0],97); // 800CAD40
  if (crb(c,2)) { goto L_800CB110; } // 800CAD44
  if (!crb(c,0)) { goto L_800CAD58; } // 800CAD48
  cmps(c,0,(int32_t)c->r[0],91); // 800CAD4C
  if (crb(c,2)) { goto L_800CB4C0; } // 800CAD50
  goto L_800CB79C; // 800CAD54
L_800CAD58:;
  cmps(c,0,(int32_t)c->r[0],99); // 800CAD58
  if (!crb(c,0)) { goto L_800CB1C0; } // 800CAD5C
  goto L_800CB79C; // 800CAD60
L_800CAD64:;
  cmps(c,0,(int32_t)c->r[0],115); // 800CAD64
  if (crb(c,2)) { goto L_800CB418; } // 800CAD68
  if (!crb(c,0)) { goto L_800CADA0; } // 800CAD6C
  cmps(c,0,(int32_t)c->r[0],110); // 800CAD70
  if (crb(c,2)) { goto L_800CB728; } // 800CAD74
  if (!crb(c,0)) { goto L_800CAD94; } // 800CAD78
  cmps(c,0,(int32_t)c->r[0],105); // 800CAD7C
  if (crb(c,2)) { goto L_800CADCC; } // 800CAD80
  if (!crb(c,0)) { goto L_800CB79C; } // 800CAD84
  cmps(c,0,(int32_t)c->r[0],104); // 800CAD88
  if (!crb(c,0)) { goto L_800CB79C; } // 800CAD8C
  goto L_800CB110; // 800CAD90
L_800CAD94:;
  cmps(c,0,(int32_t)c->r[0],112); // 800CAD94
  if (!crb(c,0)) { goto L_800CB79C; } // 800CAD98
  goto L_800CAF78; // 800CAD9C
L_800CADA0:;
  cmps(c,0,(int32_t)c->r[0],120); // 800CADA0
  if (crb(c,2)) { goto L_800CAF88; } // 800CADA4
  if (!crb(c,0)) { goto L_800CADB8; } // 800CADA8
  cmps(c,0,(int32_t)c->r[0],117); // 800CADAC
  if (crb(c,2)) { goto L_800CAF80; } // 800CADB0
  goto L_800CB79C; // 800CADB4
L_800CADB8:;
  cmps(c,0,(int32_t)c->r[0],255); // 800CADB8
  if (crb(c,2)) { goto L_800CB79C; } // 800CADBC
  goto L_800CB79C; // 800CADC0
L_800CADC4:;
  c->r[3]=0u+0x0000000Au; // 800CADC4
  goto L_800CADD0; // 800CADC8
L_800CADCC:;
  c->r[3]=0u+0x00000000u; // 800CADCC
L_800CADD0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800CADD0
  if (crb(c,2)) { goto L_800CADF0; } // 800CADD4
  c->r[0]=0u+0x00000000u; // 800CADD8
  c->r[16]=0u+0x00000000u; // 800CADDC
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800CADE0
  c->r[0]=0u+0x00000000u; // 800CADE4
  W32(c->r[1]+0x00000058u,c->r[0]); // 800CADE8
  goto L_800CAEE4; // 800CADEC
L_800CADF0:;
  c->r[0]=R8(c->r[1]+0x00000022u); // 800CADF0
  cmpu(c,0,c->r[0],0x00000007u); // 800CADF4
  if (crb(c,2)) { goto L_800CAE04; } // 800CADF8
  cmpu(c,0,c->r[0],0x00000004u); // 800CADFC
  if (!crb(c,2)) { goto L_800CAE2C; } // 800CAE00
L_800CAE04:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 800CAE04
  c->r[5]=c->r[26]|c->r[26]; // 800CAE08
  c->r[6]=c->r[27]|c->r[27]; // 800CAE0C
  c->r[7]=c->r[1]+0x00000018u; // 800CAE10
  c->r[8]=c->r[1]+0x00000014u; // 800CAE14
  c->r[9]=c->r[1]+0x00000010u; // 800CAE18
  c->lr=0x800CAE20u; f_800CD7D4(c); // 800CAE1C
  W32(c->r[1]+0x00000054u,c->r[4]); // 800CAE20
  W32(c->r[1]+0x00000050u,c->r[3]); // 800CAE24
  goto L_800CAE4C; // 800CAE28
L_800CAE2C:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 800CAE2C
  c->r[5]=c->r[26]|c->r[26]; // 800CAE30
  c->r[6]=c->r[27]|c->r[27]; // 800CAE34
  c->r[7]=c->r[1]+0x00000018u; // 800CAE38
  c->r[8]=c->r[1]+0x00000014u; // 800CAE3C
  c->r[9]=c->r[1]+0x00000010u; // 800CAE40
  c->lr=0x800CAE48u; f_800CD3A4(c); // 800CAE44
  c->r[15]=c->r[3]|c->r[3]; // 800CAE48
L_800CAE4C:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 800CAE4C
  cmps(c,0,(int32_t)c->r[3],0); // 800CAE50
  if (!crb(c,2)) { goto L_800CAE7C; } // 800CAE54
  cmps(c,0,(int32_t)c->r[28],0); // 800CAE58
  if (crb(c,2)) { goto L_800CB79C; } // 800CAE5C
  c->r[0]=0u+0x00000000u; // 800CAE60
  c->r[29]=0u+0x00000001u; // 800CAE64
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800CAE68
  c->r[0]=0u+0x00000000u; // 800CAE6C
  c->r[16]=0u+0x00000000u; // 800CAE70
  W32(c->r[1]+0x00000058u,c->r[0]); // 800CAE74
  goto L_800CAEE4; // 800CAE78
L_800CAE7C:;
  c->r[0]=R8(c->r[1]+0x00000022u); // 800CAE7C
  c->r[21]=c->r[21]+c->r[3]; // 800CAE80
  cmpu(c,0,c->r[0],0x00000007u); // 800CAE84
  if (crb(c,2)) { goto L_800CAE94; } // 800CAE88
  cmpu(c,0,c->r[0],0x00000004u); // 800CAE8C
  if (!crb(c,2)) { goto L_800CAED0; } // 800CAE90
L_800CAE94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAE94
  cmps(c,0,(int32_t)c->r[0],0); // 800CAE98
  if (crb(c,2)) { goto L_800CAEBC; } // 800CAE9C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CAEA0
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 800CAEA4
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800CAEA8
  c->r[0]=R32(c->r[1]+0x00000050u); // 800CAEAC
  c->r[0]=addc(c,~c->r[0],0,c->xer_ca); // 800CAEB0
  W32(c->r[1]+0x00000058u,c->r[0]); // 800CAEB4
  goto L_800CAEE4; // 800CAEB8
L_800CAEBC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CAEBC
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800CAEC0
  c->r[0]=R32(c->r[1]+0x00000050u); // 800CAEC4
  W32(c->r[1]+0x00000058u,c->r[0]); // 800CAEC8
  goto L_800CAEE4; // 800CAECC
L_800CAED0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAED0
  c->r[16]=c->r[15]|c->r[15]; // 800CAED4
  cmps(c,0,(int32_t)c->r[0],0); // 800CAED8
  if (crb(c,2)) { goto L_800CAEE4; } // 800CAEDC
  c->r[16]=0u-c->r[15]; // 800CAEE0
L_800CAEE4:;
  cmps(c,0,(int32_t)c->r[22],0); // 800CAEE4
  if (crb(c,2)) { goto L_800CAF70; } // 800CAEE8
  c->r[0]=R8(c->r[1]+0x00000022u); // 800CAEEC
  cmpu(c,0,c->r[0],0x00000007u); // 800CAEF0
  if (crb(c,1)) { goto L_800CAF64; } // 800CAEF4
  c->r[3]=0u+0x80220000u; // 800CAEF8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CAEFC
  c->r[3]=c->r[3]+0xFFFFC228u; // 800CAF00
  c->r[3]=R32(c->r[3]+c->r[0]); // 800CAF04
  c->ctr=c->r[3]; // 800CAF08
  if (true) { switch (c->ctr) { case 0x800CAF10u: goto L_800CAF10; case 0x800CAF18u: goto L_800CAF18; case 0x800CAF20u: goto L_800CAF20; case 0x800CAF28u: goto L_800CAF28; case 0x800CAF30u: goto L_800CAF30; case 0x800CAF44u: goto L_800CAF44; case 0x800CAF4Cu: goto L_800CAF4C; case 0x800CAF54u: goto L_800CAF54; case 0x800CB0A8u: goto L_800CB0A8; case 0x800CB0B0u: goto L_800CB0B0; case 0x800CB0B8u: goto L_800CB0B8; case 0x800CB0C0u: goto L_800CB0C0; case 0x800CB0C8u: goto L_800CB0C8; case 0x800CB0DCu: goto L_800CB0DC; case 0x800CB0E4u: goto L_800CB0E4; case 0x800CB0ECu: goto L_800CB0EC; default: break; } dispatch(c,c->ctr); return; } // 800CAF0C
L_800CAF10:;
  W32(c->r[22]+0x00000000u,c->r[16]); // 800CAF10
  goto L_800CAF64; // 800CAF14
L_800CAF18:;
  W8(c->r[22]+0x00000000u,c->r[16]); // 800CAF18
  goto L_800CAF64; // 800CAF1C
L_800CAF20:;
  W16(c->r[22]+0x00000000u,c->r[16]); // 800CAF20
  goto L_800CAF64; // 800CAF24
L_800CAF28:;
  W32(c->r[22]+0x00000000u,c->r[16]); // 800CAF28
  goto L_800CAF64; // 800CAF2C
L_800CAF30:;
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800CAF30
  W32(c->r[22]+0x00000004u,c->r[0]); // 800CAF34
  c->r[0]=R32(c->r[1]+0x00000058u); // 800CAF38
  W32(c->r[22]+0x00000000u,c->r[0]); // 800CAF3C
  goto L_800CAF64; // 800CAF40
L_800CAF44:;
  W32(c->r[22]+0x00000000u,c->r[16]); // 800CAF44
  goto L_800CAF64; // 800CAF48
L_800CAF4C:;
  W32(c->r[22]+0x00000000u,c->r[16]); // 800CAF4C
  goto L_800CAF64; // 800CAF50
L_800CAF54:;
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 800CAF54
  W32(c->r[22]+0x00000004u,c->r[0]); // 800CAF58
  c->r[0]=R32(c->r[1]+0x00000058u); // 800CAF5C
  W32(c->r[22]+0x00000000u,c->r[0]); // 800CAF60
L_800CAF64:;
  cmps(c,0,(int32_t)c->r[29],0); // 800CAF64
  if (!crb(c,2)) { goto L_800CAF70; } // 800CAF68
  c->r[20]=c->r[20]+0x00000001u; // 800CAF6C
L_800CAF70:;
  c->r[19]=c->r[19]+0x00000001u; // 800CAF70
  goto L_800CB790; // 800CAF74
L_800CAF78:;
  c->r[3]=0u+0x00000008u; // 800CAF78
  goto L_800CAF8C; // 800CAF7C
L_800CAF80:;
  c->r[3]=0u+0x0000000Au; // 800CAF80
  goto L_800CAF8C; // 800CAF84
L_800CAF88:;
  c->r[3]=0u+0x00000010u; // 800CAF88
L_800CAF8C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800CAF8C
  if (crb(c,2)) { goto L_800CAFAC; } // 800CAF90
  c->r[0]=0u+0x00000000u; // 800CAF94
  c->r[15]=0u+0x00000000u; // 800CAF98
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CAF9C
  c->r[0]=0u+0x00000000u; // 800CAFA0
  W32(c->r[1]+0x00000050u,c->r[0]); // 800CAFA4
  goto L_800CB07C; // 800CAFA8
L_800CAFAC:;
  c->r[0]=R8(c->r[1]+0x00000022u); // 800CAFAC
  cmpu(c,0,c->r[0],0x00000007u); // 800CAFB0
  if (crb(c,2)) { goto L_800CAFC0; } // 800CAFB4
  cmpu(c,0,c->r[0],0x00000004u); // 800CAFB8
  if (!crb(c,2)) { goto L_800CAFE8; } // 800CAFBC
L_800CAFC0:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 800CAFC0
  c->r[5]=c->r[26]|c->r[26]; // 800CAFC4
  c->r[6]=c->r[27]|c->r[27]; // 800CAFC8
  c->r[7]=c->r[1]+0x00000018u; // 800CAFCC
  c->r[8]=c->r[1]+0x00000014u; // 800CAFD0
  c->r[9]=c->r[1]+0x00000010u; // 800CAFD4
  c->lr=0x800CAFDCu; f_800CD7D4(c); // 800CAFD8
  W32(c->r[1]+0x00000054u,c->r[4]); // 800CAFDC
  W32(c->r[1]+0x00000050u,c->r[3]); // 800CAFE0
  goto L_800CB008; // 800CAFE4
L_800CAFE8:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 800CAFE8
  c->r[5]=c->r[26]|c->r[26]; // 800CAFEC
  c->r[6]=c->r[27]|c->r[27]; // 800CAFF0
  c->r[7]=c->r[1]+0x00000018u; // 800CAFF4
  c->r[8]=c->r[1]+0x00000014u; // 800CAFF8
  c->r[9]=c->r[1]+0x00000010u; // 800CAFFC
  c->lr=0x800CB004u; f_800CD3A4(c); // 800CB000
  c->r[15]=c->r[3]|c->r[3]; // 800CB004
L_800CB008:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 800CB008
  cmps(c,0,(int32_t)c->r[3],0); // 800CB00C
  if (!crb(c,2)) { goto L_800CB038; } // 800CB010
  cmps(c,0,(int32_t)c->r[28],0); // 800CB014
  if (crb(c,2)) { goto L_800CB79C; } // 800CB018
  c->r[0]=0u+0x00000000u; // 800CB01C
  c->r[29]=0u+0x00000001u; // 800CB020
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CB024
  c->r[0]=0u+0x00000000u; // 800CB028
  c->r[15]=0u+0x00000000u; // 800CB02C
  W32(c->r[1]+0x00000050u,c->r[0]); // 800CB030
  goto L_800CB07C; // 800CB034
L_800CB038:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB038
  c->r[21]=c->r[21]+c->r[3]; // 800CB03C
  cmps(c,0,(int32_t)c->r[0],0); // 800CB040
  if (crb(c,2)) { goto L_800CB07C; } // 800CB044
  c->r[0]=R8(c->r[1]+0x00000022u); // 800CB048
  cmpu(c,0,c->r[0],0x00000007u); // 800CB04C
  if (!crb(c,2)) { goto L_800CB06C; } // 800CB050
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CB054
  c->r[0]=addc(c,~c->r[0],0x00000000u,1); // 800CB058
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CB05C
  c->r[0]=R32(c->r[1]+0x00000050u); // 800CB060
  c->r[0]=addc(c,~c->r[0],0,c->xer_ca); // 800CB064
  W32(c->r[1]+0x00000050u,c->r[0]); // 800CB068
L_800CB06C:;
  c->r[0]=R8(c->r[1]+0x00000022u); // 800CB06C
  cmpu(c,0,c->r[0],0x00000007u); // 800CB070
  if (crb(c,2)) { goto L_800CB07C; } // 800CB074
  c->r[15]=0u-c->r[15]; // 800CB078
L_800CB07C:;
  cmps(c,0,(int32_t)c->r[22],0); // 800CB07C
  if (crb(c,2)) { goto L_800CB108; } // 800CB080
  c->r[0]=R8(c->r[1]+0x00000022u); // 800CB084
  cmpu(c,0,c->r[0],0x00000007u); // 800CB088
  if (crb(c,1)) { goto L_800CB0FC; } // 800CB08C
  c->r[3]=0u+0x80220000u; // 800CB090
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CB094
  c->r[3]=c->r[3]+0xFFFFC208u; // 800CB098
  c->r[3]=R32(c->r[3]+c->r[0]); // 800CB09C
  c->ctr=c->r[3]; // 800CB0A0
  if (true) { switch (c->ctr) { case 0x800CAF10u: goto L_800CAF10; case 0x800CAF18u: goto L_800CAF18; case 0x800CAF20u: goto L_800CAF20; case 0x800CAF28u: goto L_800CAF28; case 0x800CAF30u: goto L_800CAF30; case 0x800CAF44u: goto L_800CAF44; case 0x800CAF4Cu: goto L_800CAF4C; case 0x800CAF54u: goto L_800CAF54; case 0x800CB0A8u: goto L_800CB0A8; case 0x800CB0B0u: goto L_800CB0B0; case 0x800CB0B8u: goto L_800CB0B8; case 0x800CB0C0u: goto L_800CB0C0; case 0x800CB0C8u: goto L_800CB0C8; case 0x800CB0DCu: goto L_800CB0DC; case 0x800CB0E4u: goto L_800CB0E4; case 0x800CB0ECu: goto L_800CB0EC; default: break; } dispatch(c,c->ctr); return; } // 800CB0A4
L_800CB0A8:;
  W32(c->r[22]+0x00000000u,c->r[15]); // 800CB0A8
  goto L_800CB0FC; // 800CB0AC
L_800CB0B0:;
  W8(c->r[22]+0x00000000u,c->r[15]); // 800CB0B0
  goto L_800CB0FC; // 800CB0B4
L_800CB0B8:;
  W16(c->r[22]+0x00000000u,c->r[15]); // 800CB0B8
  goto L_800CB0FC; // 800CB0BC
L_800CB0C0:;
  W32(c->r[22]+0x00000000u,c->r[15]); // 800CB0C0
  goto L_800CB0FC; // 800CB0C4
L_800CB0C8:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CB0C8
  W32(c->r[22]+0x00000004u,c->r[0]); // 800CB0CC
  c->r[0]=R32(c->r[1]+0x00000050u); // 800CB0D0
  W32(c->r[22]+0x00000000u,c->r[0]); // 800CB0D4
  goto L_800CB0FC; // 800CB0D8
L_800CB0DC:;
  W32(c->r[22]+0x00000000u,c->r[15]); // 800CB0DC
  goto L_800CB0FC; // 800CB0E0
L_800CB0E4:;
  W32(c->r[22]+0x00000000u,c->r[15]); // 800CB0E4
  goto L_800CB0FC; // 800CB0E8
L_800CB0EC:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CB0EC
  W32(c->r[22]+0x00000004u,c->r[0]); // 800CB0F0
  c->r[0]=R32(c->r[1]+0x00000050u); // 800CB0F4
  W32(c->r[22]+0x00000000u,c->r[0]); // 800CB0F8
L_800CB0FC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800CB0FC
  if (!crb(c,2)) { goto L_800CB108; } // 800CB100
  c->r[20]=c->r[20]+0x00000001u; // 800CB104
L_800CB108:;
  c->r[19]=c->r[19]+0x00000001u; // 800CB108
  goto L_800CB790; // 800CB10C
L_800CB110:;
  cmps(c,0,(int32_t)c->r[29],0); // 800CB110
  if (crb(c,2)) { goto L_800CB124; } // 800CB114
  c->r[3]=0u+0x803C0000u; // 800CB118
  {uint32_t ea=c->r[3]+0x00007710u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB11C
  goto L_800CB164; // 800CB120
L_800CB124:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 800CB124
  c->r[4]=c->r[26]|c->r[26]; // 800CB128
  c->r[5]=c->r[27]|c->r[27]; // 800CB12C
  c->r[6]=c->r[1]+0x00000018u; // 800CB130
  c->r[7]=c->r[1]+0x00000010u; // 800CB134
  c->lr=0x800CB13Cu; f_800CBF2C(c); // 800CB138
  c->r[0]=R32(c->r[1]+0x00000018u); // 800CB13C
  cmps(c,0,(int32_t)c->r[0],0); // 800CB140
  if (!crb(c,2)) { goto L_800CB160; } // 800CB144
  cmps(c,0,(int32_t)c->r[28],0); // 800CB148
  if (crb(c,2)) { goto L_800CB79C; } // 800CB14C
  c->r[3]=0u+0x803C0000u; // 800CB150
  c->r[29]=0u+0x00000001u; // 800CB154
  {uint32_t ea=c->r[3]+0x00007710u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB158
  goto L_800CB164; // 800CB15C
L_800CB160:;
  c->r[21]=c->r[21]+c->r[0]; // 800CB160
L_800CB164:;
  cmps(c,0,(int32_t)c->r[22],0); // 800CB164
  if (crb(c,2)) { goto L_800CB1B8; } // 800CB168
  c->r[0]=R8(c->r[1]+0x00000022u); // 800CB16C
  cmps(c,0,(int32_t)c->r[0],8); // 800CB170
  if (crb(c,2)) { goto L_800CB1A0; } // 800CB174
  if (!crb(c,0)) { goto L_800CB188; } // 800CB178
  cmps(c,0,(int32_t)c->r[0],0); // 800CB17C
  if (crb(c,2)) { goto L_800CB194; } // 800CB180
  goto L_800CB1AC; // 800CB184
L_800CB188:;
  cmps(c,0,(int32_t)c->r[0],10); // 800CB188
  if (!crb(c,0)) { goto L_800CB1AC; } // 800CB18C
  goto L_800CB1A8; // 800CB190
L_800CB194:;
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800CB194
  {uint32_t ea=c->r[22]+0x00000000u; WF32(ea,c->f[0]);} // 800CB198
  goto L_800CB1AC; // 800CB19C
L_800CB1A0:;
  {uint32_t ea=c->r[22]+0x00000000u; WF64(ea,c->f[1]);} // 800CB1A0
  goto L_800CB1AC; // 800CB1A4
L_800CB1A8:;
  {uint32_t ea=c->r[22]+0x00000000u; WF64(ea,c->f[1]);} // 800CB1A8
L_800CB1AC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800CB1AC
  if (!crb(c,2)) { goto L_800CB1B8; } // 800CB1B0
  c->r[20]=c->r[20]+0x00000001u; // 800CB1B4
L_800CB1B8:;
  c->r[19]=c->r[19]+0x00000001u; // 800CB1B8
  goto L_800CB790; // 800CB1BC
L_800CB1C0:;
  c->r[0]=R8(c->r[1]+0x00000021u); // 800CB1C0
  cmps(c,0,(int32_t)c->r[0],0); // 800CB1C4
  if (!crb(c,2)) { goto L_800CB1D0; } // 800CB1C8
  W32(c->r[1]+0x00000024u,c->r[24]); // 800CB1CC
L_800CB1D0:;
  cmps(c,0,(int32_t)c->r[22],0); // 800CB1D0
  if (crb(c,2)) { goto L_800CB300; } // 800CB1D4
  cmps(c,0,(int32_t)c->r[28],0); // 800CB1D8
  if (crb(c,2)) { goto L_800CB1F4; } // 800CB1DC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CB1E0
  c->r[31]=0u+0x00000001u; // 800CB1E4
  c->r[4]=0u+0x00000001u; // 800CB1E8
  c->lr=0x800CB1F0u; f_800C1750(c); // 800CB1EC
  c->r[30]=R32(c->r[3]+0x00000000u); // 800CB1F0
L_800CB1F4:;
  c->r[0]=0u+0x00000000u; // 800CB1F4
  cmps(c,0,(int32_t)c->r[29],0); // 800CB1F8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CB1FC
  if (crb(c,2)) { goto L_800CB218; } // 800CB200
  cmps(c,0,(int32_t)c->r[30],0); // 800CB204
  if (crb(c,2)) { goto L_800CB790; } // 800CB208
  c->r[0]=0u+0x00000000u; // 800CB20C
  W8(c->r[22]+0x00000000u,c->r[0]); // 800CB210
  goto L_800CB790; // 800CB214
L_800CB218:;
  W32(c->r[1]+0x0000004Cu,c->r[22]); // 800CB218
  goto L_800CB25C; // 800CB21C
L_800CB220:;
  c->r[0]=R8(c->r[1]+0x00000022u); // 800CB220
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800CB224
  cmpu(c,0,c->r[0],0x0000000Au); // 800CB228
  if (!crb(c,2)) { goto L_800CB248; } // 800CB22C
  c->r[3]=c->r[22]|c->r[22]; // 800CB230
  c->r[4]=c->r[1]+0x0000000Cu; // 800CB234
  c->r[5]=0u+0x00000001u; // 800CB238
  c->lr=0x800CB240u; f_800C783C(c); // 800CB23C
  c->r[22]=c->r[22]+0x00000001u; // 800CB240
  goto L_800CB250; // 800CB244
L_800CB248:;
  W8(c->r[22]+0x00000000u,c->r[3]); // 800CB248
  c->r[22]=c->r[22]+0x00000001u; // 800CB24C
L_800CB250:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 800CB250
  c->r[0]=c->r[3]+0x00000001u; // 800CB254
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CB258
L_800CB25C:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 800CB25C
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800CB260
  cmps(c,0,(int32_t)c->r[4],0); // 800CB264
  W32(c->r[1]+0x00000024u,c->r[3]); // 800CB268
  if (crb(c,2)) { goto L_800CB2B0; } // 800CB26C
  cmps(c,0,(int32_t)c->r[28],0); // 800CB270
  if (crb(c,2)) { goto L_800CB28C; } // 800CB274
  c->r[0]=c->r[30]^c->r[0]; // 800CB278
  c->r[0]=cntlz(c->r[0]); // 800CB27C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[30]<<((c->r[0])&31)); // 800CB280
  c->r[31]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[31]); // 800CB284
  if (crb(c,2)) { goto L_800CB2B0; } // 800CB288
L_800CB28C:;
  c->r[12]=c->r[26]|c->r[26]; // 800CB28C
  c->r[3]=c->r[27]|c->r[27]; // 800CB290
  c->r[4]=0u+0x00000000u; // 800CB294
  c->r[5]=0u+0x00000000u; // 800CB298
  c->ctr=c->r[12]; // 800CB29C
  if (true) { c->lr=0x800CB2A4u; dispatch(c,c->ctr); } // 800CB2A0
  cmps(c,0,(int32_t)c->r[3],-1); // 800CB2A4
  c->r[18]=c->r[3]|c->r[3]; // 800CB2A8
  if (!crb(c,2)) { IRQCHK(c); goto L_800CB220; } // 800CB2AC
L_800CB2B0:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 800CB2B0
  W8(c->r[1]+0x0000000Cu,c->r[18]); // 800CB2B4
  cmps(c,0,(int32_t)c->r[0],0); // 800CB2B8
  if (crb(c,2)) { goto L_800CB2D0; } // 800CB2BC
  cmps(c,0,(int32_t)c->r[28],0); // 800CB2C0
  if (crb(c,2)) { goto L_800CB2F4; } // 800CB2C4
  cmps(c,0,(int32_t)c->r[31],0); // 800CB2C8
  if (!crb(c,2)) { goto L_800CB2F4; } // 800CB2CC
L_800CB2D0:;
  cmps(c,0,(int32_t)c->r[28],0); // 800CB2D0
  if (crb(c,2)) { goto L_800CB79C; } // 800CB2D4
  cmps(c,0,(int32_t)c->r[30],0); // 800CB2D8
  c->r[29]=0u+0x00000001u; // 800CB2DC
  if (crb(c,2)) { goto L_800CB790; } // 800CB2E0
  c->r[3]=R32(c->r[1]+0x0000004Cu); // 800CB2E4
  c->r[0]=0u+0x00000000u; // 800CB2E8
  W8(c->r[3]+0x00000000u,c->r[0]); // 800CB2EC
  goto L_800CB790; // 800CB2F0
L_800CB2F4:;
  c->r[21]=c->r[21]+c->r[0]; // 800CB2F4
  c->r[20]=c->r[20]+0x00000001u; // 800CB2F8
  goto L_800CB364; // 800CB2FC
L_800CB300:;
  c->r[0]=0u+0x00000000u; // 800CB300
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CB304
  goto L_800CB31C; // 800CB308
L_800CB30C:;
  c->r[4]=R32(c->r[1]+0x00000018u); // 800CB30C
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800CB310
  c->r[0]=c->r[4]+0x00000001u; // 800CB314
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CB318
L_800CB31C:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 800CB31C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CB320
  cmps(c,0,(int32_t)c->r[3],0); // 800CB324
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB328
  if (crb(c,2)) { goto L_800CB354; } // 800CB32C
  c->r[12]=c->r[26]|c->r[26]; // 800CB330
  c->r[3]=c->r[27]|c->r[27]; // 800CB334
  c->r[4]=0u+0x00000000u; // 800CB338
  c->r[5]=0u+0x00000000u; // 800CB33C
  c->ctr=c->r[12]; // 800CB340
  if (true) { c->lr=0x800CB348u; dispatch(c,c->ctr); } // 800CB344
  cmps(c,0,(int32_t)c->r[3],-1); // 800CB348
  c->r[18]=c->r[3]|c->r[3]; // 800CB34C
  if (!crb(c,2)) { IRQCHK(c); goto L_800CB30C; } // 800CB350
L_800CB354:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 800CB354
  W8(c->r[1]+0x0000000Cu,c->r[18]); // 800CB358
  cmps(c,0,(int32_t)c->r[0],0); // 800CB35C
  if (crb(c,2)) { goto L_800CB79C; } // 800CB360
L_800CB364:;
  c->r[19]=c->r[19]+0x00000001u; // 800CB364
  goto L_800CB790; // 800CB368
L_800CB36C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800CB36C
  if (!crb(c,2)) { goto L_800CB790; } // 800CB370
  goto L_800CB37C; // 800CB374
L_800CB378:;
  c->r[21]=c->r[21]+0x00000001u; // 800CB378
L_800CB37C:;
  c->r[12]=c->r[26]|c->r[26]; // 800CB37C
  c->r[3]=c->r[27]|c->r[27]; // 800CB380
  c->r[4]=0u+0x00000000u; // 800CB384
  c->r[5]=0u+0x00000000u; // 800CB388
  c->ctr=c->r[12]; // 800CB38C
  if (true) { c->lr=0x800CB394u; dispatch(c,c->ctr); } // 800CB390
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[5]); // 800CB394
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800CB398
  c->r[0]=0u+0x00000000u; // 800CB39C
  if (crb(c,0)) { goto L_800CB3AC; } // 800CB3A0
  cmps(c,0,(int32_t)c->r[5],256); // 800CB3A4
  if (crb(c,0)) { goto L_800CB3B0; } // 800CB3A8
L_800CB3AC:;
  c->r[0]=0u+0x00000001u; // 800CB3AC
L_800CB3B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CB3B0
  if (crb(c,2)) { goto L_800CB3C0; } // 800CB3B4
  c->r[0]=0u+0x00000000u; // 800CB3B8
  goto L_800CB3D4; // 800CB3BC
L_800CB3C0:;
  c->r[4]=R32(c->r[23]+0x00000038u); // 800CB3C0
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 800CB3C4
  c->r[4]=R32(c->r[4]+0x00000008u); // 800CB3C8
  c->r[0]=R16(c->r[4]+c->r[0]); // 800CB3CC
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 800CB3D0
L_800CB3D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CB3D4
  if (!crb(c,2)) { IRQCHK(c); goto L_800CB378; } // 800CB3D8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800CB3DC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800CB3E0
  cmps(c,0,(int32_t)c->r[4],37); // 800CB3E4
  if (crb(c,2)) { goto L_800CB410; } // 800CB3E8
  c->r[12]=c->r[26]|c->r[26]; // 800CB3EC
  c->r[3]=c->r[27]|c->r[27]; // 800CB3F0
  c->r[5]=0u+0x00000001u; // 800CB3F4
  c->ctr=c->r[12]; // 800CB3F8
  if (true) { c->lr=0x800CB400u; dispatch(c,c->ctr); } // 800CB3FC
  cmps(c,0,(int32_t)c->r[28],0); // 800CB400
  if (crb(c,2)) { goto L_800CB79C; } // 800CB404
  c->r[29]=0u+0x00000001u; // 800CB408
  goto L_800CB790; // 800CB40C
L_800CB410:;
  c->r[21]=c->r[21]+0x00000001u; // 800CB410
  goto L_800CB790; // 800CB414
L_800CB418:;
  cmps(c,0,(int32_t)c->r[29],0); // 800CB418
  if (!crb(c,2)) { goto L_800CB4C0; } // 800CB41C
  c->r[12]=c->r[26]|c->r[26]; // 800CB420
  c->r[3]=c->r[27]|c->r[27]; // 800CB424
  c->r[4]=0u+0x00000000u; // 800CB428
  c->r[5]=0u+0x00000000u; // 800CB42C
  c->ctr=c->r[12]; // 800CB430
  if (true) { c->lr=0x800CB438u; dispatch(c,c->ctr); } // 800CB434
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800CB438
  goto L_800CB460; // 800CB43C
L_800CB440:;
  c->r[12]=c->r[26]|c->r[26]; // 800CB440
  c->r[3]=c->r[27]|c->r[27]; // 800CB444
  c->r[4]=0u+0x00000000u; // 800CB448
  c->r[5]=0u+0x00000000u; // 800CB44C
  c->ctr=c->r[12]; // 800CB450
  c->r[21]=c->r[21]+0x00000001u; // 800CB454
  if (true) { c->lr=0x800CB45Cu; dispatch(c,c->ctr); } // 800CB458
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800CB45C
L_800CB460:;
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 800CB460
  c->r[0]=0u+0x00000000u; // 800CB464
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[4]); // 800CB468
  if (crb(c,0)) { goto L_800CB478; } // 800CB46C
  cmps(c,0,(int32_t)c->r[4],256); // 800CB470
  if (crb(c,0)) { goto L_800CB47C; } // 800CB474
L_800CB478:;
  c->r[0]=0u+0x00000001u; // 800CB478
L_800CB47C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CB47C
  if (crb(c,2)) { goto L_800CB48C; } // 800CB480
  c->r[0]=0u+0x00000000u; // 800CB484
  goto L_800CB4A0; // 800CB488
L_800CB48C:;
  c->r[3]=R32(c->r[23]+0x00000038u); // 800CB48C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CB490
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CB494
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CB498
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 800CB49C
L_800CB4A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CB4A0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CB440; } // 800CB4A4
  c->r[12]=c->r[26]|c->r[26]; // 800CB4A8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800CB4AC
  c->r[3]=c->r[27]|c->r[27]; // 800CB4B0
  c->r[5]=0u+0x00000001u; // 800CB4B4
  c->ctr=c->r[12]; // 800CB4B8
  if (true) { c->lr=0x800CB4C0u; dispatch(c,c->ctr); } // 800CB4BC
L_800CB4C0:;
  cmps(c,0,(int32_t)c->r[22],0); // 800CB4C0
  if (crb(c,2)) { goto L_800CB654; } // 800CB4C4
  cmps(c,0,(int32_t)c->r[28],0); // 800CB4C8
  if (crb(c,2)) { goto L_800CB4E8; } // 800CB4CC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CB4D0
  c->r[31]=0u+0x00000001u; // 800CB4D4
  c->r[4]=0u+0x00000001u; // 800CB4D8
  c->lr=0x800CB4E0u; f_800C1750(c); // 800CB4DC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800CB4E0
  c->r[30]=c->r[3]+0xFFFFFFFFu; // 800CB4E4
L_800CB4E8:;
  c->r[0]=0u+0x00000000u; // 800CB4E8
  cmps(c,0,(int32_t)c->r[29],0); // 800CB4EC
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CB4F0
  if (crb(c,2)) { goto L_800CB50C; } // 800CB4F4
  cmps(c,0,(int32_t)c->r[30],0); // 800CB4F8
  if (crb(c,2)) { goto L_800CB790; } // 800CB4FC
  c->r[0]=0u+0x00000000u; // 800CB500
  W8(c->r[22]+0x00000000u,c->r[0]); // 800CB504
  goto L_800CB790; // 800CB508
L_800CB50C:;
  W32(c->r[1]+0x00000048u,c->r[22]); // 800CB50C
  goto L_800CB570; // 800CB510
L_800CB514:;
  c->r[0]=rotl(c->r[3],29)&0x0000001Fu; // 800CB514
  c->r[5]=rotl(c->r[3],0)&0x00000007u; // 800CB518
  c->r[4]=c->r[25]+c->r[0]; // 800CB51C
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800CB520
  c->r[0]=R8(c->r[4]+0x00000008u); // 800CB524
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[24]<<((c->r[5])&31)); // 800CB528
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 800CB52C
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800CB530
  if (crb(c,2)) { goto L_800CB5C8; } // 800CB534
  c->r[0]=R8(c->r[1]+0x00000022u); // 800CB538
  cmpu(c,0,c->r[0],0x0000000Au); // 800CB53C
  if (!crb(c,2)) { goto L_800CB55C; } // 800CB540
  c->r[3]=c->r[22]|c->r[22]; // 800CB544
  c->r[4]=c->r[1]+0x0000000Cu; // 800CB548
  c->r[5]=0u+0x00000001u; // 800CB54C
  c->lr=0x800CB554u; f_800C783C(c); // 800CB550
  c->r[22]=c->r[22]+0x00000002u; // 800CB554
  goto L_800CB564; // 800CB558
L_800CB55C:;
  W8(c->r[22]+0x00000000u,c->r[3]); // 800CB55C
  c->r[22]=c->r[22]+0x00000001u; // 800CB560
L_800CB564:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 800CB564
  c->r[0]=c->r[3]+0x00000001u; // 800CB568
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CB56C
L_800CB570:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 800CB570
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800CB574
  cmps(c,0,(int32_t)c->r[4],0); // 800CB578
  W32(c->r[1]+0x00000024u,c->r[3]); // 800CB57C
  if (crb(c,2)) { goto L_800CB5C8; } // 800CB580
  cmps(c,0,(int32_t)c->r[28],0); // 800CB584
  if (crb(c,2)) { goto L_800CB5A4; } // 800CB588
  c->r[4]=c->r[30]-c->r[0]; // 800CB58C
  c->r[3]=c->r[30]|~c->r[0]; // 800CB590
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800CB594
  c->r[0]=c->r[3]-c->r[0]; // 800CB598
  c->r[31]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[31]); // 800CB59C
  if (crb(c,2)) { goto L_800CB5C8; } // 800CB5A0
L_800CB5A4:;
  c->r[12]=c->r[26]|c->r[26]; // 800CB5A4
  c->r[3]=c->r[27]|c->r[27]; // 800CB5A8
  c->r[4]=0u+0x00000000u; // 800CB5AC
  c->r[5]=0u+0x00000000u; // 800CB5B0
  c->ctr=c->r[12]; // 800CB5B4
  if (true) { c->lr=0x800CB5BCu; dispatch(c,c->ctr); } // 800CB5B8
  cmps(c,0,(int32_t)c->r[3],-1); // 800CB5BC
  c->r[18]=c->r[3]|c->r[3]; // 800CB5C0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CB514; } // 800CB5C4
L_800CB5C8:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 800CB5C8
  W8(c->r[1]+0x0000000Cu,c->r[18]); // 800CB5CC
  cmps(c,0,(int32_t)c->r[3],0); // 800CB5D0
  if (crb(c,2)) { goto L_800CB5E8; } // 800CB5D4
  cmps(c,0,(int32_t)c->r[28],0); // 800CB5D8
  if (crb(c,2)) { goto L_800CB628; } // 800CB5DC
  cmps(c,0,(int32_t)c->r[31],0); // 800CB5E0
  if (!crb(c,2)) { goto L_800CB628; } // 800CB5E4
L_800CB5E8:;
  c->r[4]=rotl(c->r[18],0)&0x000000FFu; // 800CB5E8
  c->r[12]=c->r[26]|c->r[26]; // 800CB5EC
  c->r[3]=c->r[27]|c->r[27]; // 800CB5F0
  c->r[5]=0u+0x00000001u; // 800CB5F4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800CB5F8
  c->ctr=c->r[12]; // 800CB5FC
  if (true) { c->lr=0x800CB604u; dispatch(c,c->ctr); } // 800CB600
  cmps(c,0,(int32_t)c->r[28],0); // 800CB604
  if (crb(c,2)) { goto L_800CB79C; } // 800CB608
  cmps(c,0,(int32_t)c->r[30],0); // 800CB60C
  c->r[29]=0u+0x00000001u; // 800CB610
  if (crb(c,2)) { goto L_800CB790; } // 800CB614
  c->r[3]=R32(c->r[1]+0x00000048u); // 800CB618
  c->r[0]=0u+0x00000000u; // 800CB61C
  W8(c->r[3]+0x00000000u,c->r[0]); // 800CB620
  goto L_800CB790; // 800CB624
L_800CB628:;
  c->r[0]=R8(c->r[1]+0x00000022u); // 800CB628
  c->r[21]=c->r[21]+c->r[3]; // 800CB62C
  cmpu(c,0,c->r[0],0x0000000Au); // 800CB630
  if (!crb(c,2)) { goto L_800CB644; } // 800CB634
  c->r[0]=0u+0x00000000u; // 800CB638
  W16(c->r[22]+0x00000000u,c->r[0]); // 800CB63C
  goto L_800CB64C; // 800CB640
L_800CB644:;
  c->r[0]=0u+0x00000000u; // 800CB644
  W8(c->r[22]+0x00000000u,c->r[0]); // 800CB648
L_800CB64C:;
  c->r[20]=c->r[20]+0x00000001u; // 800CB64C
  goto L_800CB6F8; // 800CB650
L_800CB654:;
  c->r[0]=0u+0x00000000u; // 800CB654
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CB658
  goto L_800CB68C; // 800CB65C
L_800CB660:;
  c->r[0]=rotl(c->r[3],29)&0x0000001Fu; // 800CB660
  c->r[5]=rotl(c->r[3],0)&0x00000007u; // 800CB664
  c->r[4]=c->r[25]+c->r[0]; // 800CB668
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 800CB66C
  c->r[0]=R8(c->r[4]+0x00000008u); // 800CB670
  c->r[3]=((c->r[5])&0x20)?0u:(c->r[24]<<((c->r[5])&31)); // 800CB674
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800CB678
  if (crb(c,2)) { goto L_800CB6C4; } // 800CB67C
  c->r[3]=R32(c->r[1]+0x00000018u); // 800CB680
  c->r[0]=c->r[3]+0x00000001u; // 800CB684
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CB688
L_800CB68C:;
  c->r[3]=R32(c->r[1]+0x00000024u); // 800CB68C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CB690
  cmps(c,0,(int32_t)c->r[3],0); // 800CB694
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB698
  if (crb(c,2)) { goto L_800CB6C4; } // 800CB69C
  c->r[12]=c->r[26]|c->r[26]; // 800CB6A0
  c->r[3]=c->r[27]|c->r[27]; // 800CB6A4
  c->r[4]=0u+0x00000000u; // 800CB6A8
  c->r[5]=0u+0x00000000u; // 800CB6AC
  c->ctr=c->r[12]; // 800CB6B0
  if (true) { c->lr=0x800CB6B8u; dispatch(c,c->ctr); } // 800CB6B4
  cmps(c,0,(int32_t)c->r[3],-1); // 800CB6B8
  c->r[18]=c->r[3]|c->r[3]; // 800CB6BC
  if (!crb(c,2)) { IRQCHK(c); goto L_800CB660; } // 800CB6C0
L_800CB6C4:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 800CB6C4
  W8(c->r[1]+0x0000000Cu,c->r[18]); // 800CB6C8
  cmps(c,0,(int32_t)c->r[0],0); // 800CB6CC
  if (!crb(c,2)) { goto L_800CB6F4; } // 800CB6D0
  c->r[4]=rotl(c->r[18],0)&0x000000FFu; // 800CB6D4
  c->r[12]=c->r[26]|c->r[26]; // 800CB6D8
  c->r[3]=c->r[27]|c->r[27]; // 800CB6DC
  c->r[5]=0u+0x00000001u; // 800CB6E0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800CB6E4
  c->ctr=c->r[12]; // 800CB6E8
  if (true) { c->lr=0x800CB6F0u; dispatch(c,c->ctr); } // 800CB6EC
  goto L_800CB790; // 800CB6F0
L_800CB6F4:;
  c->r[21]=c->r[21]+c->r[0]; // 800CB6F4
L_800CB6F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB6F8
  cmps(c,0,(int32_t)c->r[0],0); // 800CB6FC
  if (crb(c,0)) { goto L_800CB720; } // 800CB700
  c->r[4]=R8(c->r[1]+0x0000000Cu); // 800CB704
  c->r[12]=c->r[26]|c->r[26]; // 800CB708
  c->r[3]=c->r[27]|c->r[27]; // 800CB70C
  c->r[5]=0u+0x00000001u; // 800CB710
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800CB714
  c->ctr=c->r[12]; // 800CB718
  if (true) { c->lr=0x800CB720u; dispatch(c,c->ctr); } // 800CB71C
L_800CB720:;
  c->r[19]=c->r[19]+0x00000001u; // 800CB720
  goto L_800CB790; // 800CB724
L_800CB728:;
  cmps(c,0,(int32_t)c->r[22],0); // 800CB728
  if (crb(c,2)) { goto L_800CB790; } // 800CB72C
  c->r[0]=R8(c->r[1]+0x00000022u); // 800CB730
  cmps(c,0,(int32_t)c->r[0],3); // 800CB734
  if (crb(c,2)) { goto L_800CB774; } // 800CB738
  if (!crb(c,0)) { goto L_800CB758; } // 800CB73C
  cmps(c,0,(int32_t)c->r[0],1); // 800CB740
  if (crb(c,2)) { goto L_800CB77C; } // 800CB744
  if (!crb(c,0)) { goto L_800CB76C; } // 800CB748
  cmps(c,0,(int32_t)c->r[0],0); // 800CB74C
  if (!crb(c,0)) { goto L_800CB764; } // 800CB750
  goto L_800CB790; // 800CB754
L_800CB758:;
  cmps(c,0,(int32_t)c->r[0],7); // 800CB758
  if (crb(c,2)) { goto L_800CB784; } // 800CB75C
  goto L_800CB790; // 800CB760
L_800CB764:;
  W32(c->r[22]+0x00000000u,c->r[21]); // 800CB764
  goto L_800CB790; // 800CB768
L_800CB76C:;
  W16(c->r[22]+0x00000000u,c->r[21]); // 800CB76C
  goto L_800CB790; // 800CB770
L_800CB774:;
  W32(c->r[22]+0x00000000u,c->r[21]); // 800CB774
  goto L_800CB790; // 800CB778
L_800CB77C:;
  W8(c->r[22]+0x00000000u,c->r[21]); // 800CB77C
  goto L_800CB790; // 800CB780
L_800CB784:;
  W32(c->r[22]+0x00000004u,c->r[21]); // 800CB784
  c->r[0]=sraw(c,c->r[21],31); // 800CB788
  W32(c->r[22]+0x00000000u,c->r[0]); // 800CB78C
L_800CB790:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 800CB790
  c->r[22]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[22]); // 800CB794
  if (!crb(c,2)) { IRQCHK(c); goto L_800CAAE4; } // 800CB798
L_800CB79C:;
  c->r[12]=c->r[26]|c->r[26]; // 800CB79C
  c->r[3]=c->r[27]|c->r[27]; // 800CB7A0
  c->r[4]=0u+0x00000000u; // 800CB7A4
  c->r[5]=0u+0x00000002u; // 800CB7A8
  c->ctr=c->r[12]; // 800CB7AC
  if (true) { c->lr=0x800CB7B4u; dispatch(c,c->ctr); } // 800CB7B0
  cmps(c,0,(int32_t)c->r[3],0); // 800CB7B4
  if (crb(c,2)) { goto L_800CB7CC; } // 800CB7B8
  cmps(c,0,(int32_t)c->r[19],0); // 800CB7BC
  if (!crb(c,2)) { goto L_800CB7CC; } // 800CB7C0
  c->r[3]=0u+0xFFFFFFFFu; // 800CB7C4
  goto L_800CB7D0; // 800CB7C8
L_800CB7CC:;
  c->r[3]=c->r[20]|c->r[20]; // 800CB7CC
L_800CB7D0:;
  c->r[11]=c->r[1]+0x000000B0u; // 800CB7D0
  c->lr=0x800CB7D8u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CB7D4
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800CB7D8
  c->lr=c->r[0]; // 800CB7DC
  c->r[1]=c->r[1]+0x000000B0u; // 800CB7E0
  return; // 800CB7E4
}

// fn_800CB7E8
void f_800CB7E8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[5],1); // 800CB7E8
  if (crb(c,2)) { goto L_800CB83C; } // 800CB7EC
  if (!crb(c,0)) { goto L_800CB800; } // 800CB7F0
  cmps(c,0,(int32_t)c->r[5],0); // 800CB7F4
  if (!crb(c,0)) { goto L_800CB80C; } // 800CB7F8
  goto L_800CB870; // 800CB7FC
L_800CB800:;
  cmps(c,0,(int32_t)c->r[5],3); // 800CB800
  if (!crb(c,0)) { goto L_800CB870; } // 800CB804
  goto L_800CB868; // 800CB808
L_800CB80C:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800CB80C
  c->r[5]=R8(c->r[4]+0x00000000u); // 800CB810
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 800CB814
  if (!crb(c,2)) { goto L_800CB82C; } // 800CB818
  c->r[0]=0u+0x00000001u; // 800CB81C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CB820
  c->r[3]=0u+0xFFFFFFFFu; // 800CB824
  return; // 800CB828
L_800CB82C:;
  c->r[0]=c->r[4]+0x00000001u; // 800CB82C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CB830
  c->r[3]=c->r[5]|c->r[5]; // 800CB834
  return; // 800CB838
L_800CB83C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800CB83C
  cmps(c,0,(int32_t)c->r[0],0); // 800CB840
  if (!crb(c,2)) { goto L_800CB858; } // 800CB844
  c->r[5]=R32(c->r[3]+0x00000000u); // 800CB848
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800CB84C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CB850
  goto L_800CB860; // 800CB854
L_800CB858:;
  c->r[0]=0u+0x00000000u; // 800CB858
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CB85C
L_800CB860:;
  c->r[3]=c->r[4]|c->r[4]; // 800CB860
  return; // 800CB864
L_800CB868:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800CB868
  return; // 800CB86C
L_800CB870:;
  c->r[3]=0u+0x00000000u; // 800CB870
  return; // 800CB874
}

// sscanf
void f_800CB878(Ctx* __restrict c) {
  trace_call(0x800CB878u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB878
  c->r[0]=c->lr; // 800CB87C
  W32(c->r[1]+0x00000094u,c->r[0]); // 800CB880
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800CB884
  if (!crb(c,6)) { goto L_800CB8AC; } // 800CB888
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800CB88C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800CB890
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800CB894
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800CB898
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800CB89C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800CB8A0
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800CB8A4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800CB8A8
L_800CB8AC:;
  c->r[11]=c->r[1]+0x00000098u; // 800CB8AC
  c->r[0]=c->r[1]+0x00000008u; // 800CB8B0
  c->r[12]=0u+0x02000000u; // 800CB8B4
  cmps(c,0,(int32_t)c->r[3],0); // 800CB8B8
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CB8BC
  c->r[31]=c->r[1]+0x00000070u; // 800CB8C0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800CB8C4
  W32(c->r[1]+0x00000010u,c->r[5]); // 800CB8C8
  W32(c->r[1]+0x00000014u,c->r[6]); // 800CB8CC
  W32(c->r[1]+0x00000018u,c->r[7]); // 800CB8D0
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800CB8D4
  W32(c->r[1]+0x00000020u,c->r[9]); // 800CB8D8
  W32(c->r[1]+0x00000024u,c->r[10]); // 800CB8DC
  W32(c->r[1]+0x00000070u,c->r[12]); // 800CB8E0
  W32(c->r[1]+0x00000074u,c->r[11]); // 800CB8E4
  W32(c->r[1]+0x00000078u,c->r[0]); // 800CB8E8
  W32(c->r[1]+0x00000068u,c->r[3]); // 800CB8EC
  if (crb(c,2)) { goto L_800CB900; } // 800CB8F0
  c->r[0]=R8(c->r[3]+0x00000000u); // 800CB8F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800CB8F8
  if (!crb(c,2)) { goto L_800CB908; } // 800CB8FC
L_800CB900:;
  c->r[3]=0u+0xFFFFFFFFu; // 800CB900
  goto L_800CB92C; // 800CB904
L_800CB908:;
  c->r[0]=0u+0x00000000u; // 800CB908
  c->r[3]=0u+0x800D0000u; // 800CB90C
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800CB910
  c->r[5]=c->r[4]|c->r[4]; // 800CB914
  c->r[6]=c->r[31]|c->r[31]; // 800CB918
  c->r[3]=c->r[3]+0xFFFFB7E8u; // 800CB91C
  c->r[4]=c->r[1]+0x00000068u; // 800CB920
  c->r[7]=0u+0x00000000u; // 800CB924
  c->lr=0x800CB92Cu; f_800CAA88(c); // 800CB928
L_800CB92C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800CB92C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800CB930
  c->lr=c->r[0]; // 800CB934
  c->r[1]=c->r[1]+0x00000090u; // 800CB938
  return; // 800CB93C
}

// fn_800CB940
void f_800CB940(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB940
  c->r[0]=c->lr; // 800CB944
  cmps(c,0,(int32_t)c->r[3],1); // 800CB948
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB94C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB950
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CB954
  c->r[30]=c->r[3]|c->r[3]; // 800CB958
  if (crb(c,0)) { goto L_800CB968; } // 800CB95C
  cmps(c,0,(int32_t)c->r[3],7); // 800CB960
  if (!crb(c,1)) { goto L_800CB970; } // 800CB964
L_800CB968:;
  c->r[3]=0u+0xFFFFFFFFu; // 800CB968
  goto L_800CB9D8; // 800CB96C
L_800CB970:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CB970
  c->r[4]=0u+0x802C0000u; // 800CB974
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CB978
  c->r[4]=c->r[4]+0xFFFFD1F0u; // 800CB97C
  c->r[31]=R32(c->r[4]+c->r[5]); // 800CB980
  cmpu(c,0,c->r[31],0x00000001u); // 800CB984
  if (crb(c,2)) { goto L_800CB994; } // 800CB988
  c->r[0]=0u+0x00000000u; // 800CB98C
  W32(c->r[4]+c->r[5],c->r[0]); // 800CB990
L_800CB994:;
  cmpu(c,0,c->r[31],0x00000001u); // 800CB994
  if (crb(c,2)) { goto L_800CB9AC; } // 800CB998
  cmps(c,0,(int32_t)c->r[31],0); // 800CB99C
  if (!crb(c,2)) { goto L_800CB9B4; } // 800CB9A0
  cmps(c,0,(int32_t)c->r[3],1); // 800CB9A4
  if (!crb(c,2)) { goto L_800CB9B4; } // 800CB9A8
L_800CB9AC:;
  c->r[3]=0u+0x00000000u; // 800CB9AC
  goto L_800CB9D8; // 800CB9B0
L_800CB9B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CB9B4
  if (!crb(c,2)) { goto L_800CB9C4; } // 800CB9B8
  c->r[3]=0u+0x00000000u; // 800CB9BC
  c->lr=0x800CB9C4u; f_800A3A18(c); // 800CB9C0
L_800CB9C4:;
  c->r[12]=c->r[31]|c->r[31]; // 800CB9C4
  c->r[3]=c->r[30]|c->r[30]; // 800CB9C8
  c->ctr=c->r[12]; // 800CB9CC
  if (true) { c->lr=0x800CB9D4u; dispatch(c,c->ctr); } // 800CB9D0
  c->r[3]=0u+0x00000000u; // 800CB9D4
L_800CB9D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB9D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB9DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CB9E0
  c->lr=c->r[0]; // 800CB9E4
  c->r[1]=c->r[1]+0x00000010u; // 800CB9E8
  return; // 800CB9EC
}

// strcpy
void f_800CB9F0(Ctx* __restrict c) {
  trace_call(0x800CB9F0u);
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 800CB9F0
  c->r[5]=rotl(c->r[4],0)&0x00000003u; // 800CB9F4
  cmpu(c,0,c->r[0],c->r[5]); // 800CB9F8
  c->r[7]=c->r[3]|c->r[3]; // 800CB9FC
  if (!crb(c,2)) { goto L_800CBA8C; } // 800CBA00
  cmps(c,0,(int32_t)c->r[5],0); // 800CBA04
  if (crb(c,2)) { goto L_800CBA48; } // 800CBA08
  c->r[0]=R8(c->r[4]+0x00000000u); // 800CBA0C
  cmps(c,0,(int32_t)c->r[0],0); // 800CBA10
  W8(c->r[3]+0x00000000u,c->r[0]); // 800CBA14
  if (crb(c,2)) return; // 800CBA18
  c->r[0]=addc(c,~c->r[5],0x00000003u,1); // 800CBA1C
  c->ctr=c->r[0]; // 800CBA20
  cmps(c,0,(int32_t)c->r[0],0); // 800CBA24
  if (crb(c,2)) { goto L_800CBA40; } // 800CBA28
L_800CBA2C:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800CBA2C
  cmps(c,0,(int32_t)c->r[0],0); // 800CBA30
  {uint32_t ea=c->r[7]+0x00000001u; W8(ea,c->r[0]); c->r[7]=ea;} // 800CBA34
  if (crb(c,2)) return; // 800CBA38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CBA2C; } // 800CBA3C
L_800CBA40:;
  c->r[7]=c->r[7]+0x00000001u; // 800CBA40
  c->r[4]=c->r[4]+0x00000001u; // 800CBA44
L_800CBA48:;
  c->r[8]=R32(c->r[4]+0x00000000u); // 800CBA48
  c->r[5]=0u+0x80810000u; // 800CBA4C
  c->r[5]=c->r[5]+0xFFFF8080u; // 800CBA50
  c->r[6]=c->r[8]+0xFEFF0000u; // 800CBA54
  c->r[6]=c->r[6]+0xFFFFFEFFu; // 800CBA58
  c->r[6]=c->r[6]&~c->r[8]; // 800CBA5C
  c->r[0]=c->r[6]&c->r[5]; cr0(c,c->r[0]); // 800CBA60
  if (!crb(c,2)) { goto L_800CBA8C; } // 800CBA64
  c->r[7]=c->r[7]+0xFFFFFFFCu; // 800CBA68
L_800CBA6C:;
  {uint32_t ea=c->r[7]+0x00000004u; W32(ea,c->r[8]); c->r[7]=ea;} // 800CBA6C
  {uint32_t ea=c->r[4]+0x00000004u; c->r[8]=R32(ea); c->r[4]=ea;} // 800CBA70
  c->r[6]=c->r[8]+0xFEFF0000u; // 800CBA74
  c->r[6]=c->r[6]+0xFFFFFEFFu; // 800CBA78
  c->r[6]=c->r[6]&~c->r[8]; // 800CBA7C
  c->r[0]=c->r[6]&c->r[5]; cr0(c,c->r[0]); // 800CBA80
  if (crb(c,2)) { IRQCHK(c); goto L_800CBA6C; } // 800CBA84
  c->r[7]=c->r[7]+0x00000004u; // 800CBA88
L_800CBA8C:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800CBA8C
  cmps(c,0,(int32_t)c->r[0],0); // 800CBA90
  W8(c->r[7]+0x00000000u,c->r[0]); // 800CBA94
  if (crb(c,2)) return; // 800CBA98
L_800CBA9C:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800CBA9C
  cmps(c,0,(int32_t)c->r[0],0); // 800CBAA0
  {uint32_t ea=c->r[7]+0x00000001u; W8(ea,c->r[0]); c->r[7]=ea;} // 800CBAA4
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBA9C; } // 800CBAA8
  return; // 800CBAAC
}

// strncpy
void f_800CBAB0(Ctx* __restrict c) {
  trace_call(0x800CBAB0u);
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800CBAB0
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 800CBAB4
  c->r[5]=c->r[5]+0x00000001u; // 800CBAB8
  goto L_800CBAE8; // 800CBABC
L_800CBAC0:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800CBAC0
  cmps(c,0,(int32_t)c->r[0],0); // 800CBAC4
  {uint32_t ea=c->r[6]+0x00000001u; W8(ea,c->r[0]); c->r[6]=ea;} // 800CBAC8
  if (!crb(c,2)) { goto L_800CBAE8; } // 800CBACC
  c->r[0]=0u+0x00000000u; // 800CBAD0
  goto L_800CBADC; // 800CBAD4
L_800CBAD8:;
  {uint32_t ea=c->r[6]+0x00000001u; W8(ea,c->r[0]); c->r[6]=ea;} // 800CBAD8
L_800CBADC:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800CBADC
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBAD8; } // 800CBAE0
  return; // 800CBAE4
L_800CBAE8:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800CBAE8
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBAC0; } // 800CBAEC
  return; // 800CBAF0
}

// strcat
void f_800CBAF4(Ctx* __restrict c) {
  trace_call(0x800CBAF4u);
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800CBAF4
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 800CBAF8
L_800CBAFC:;
  {uint32_t ea=c->r[5]+0x00000001u; c->r[0]=R8(ea); c->r[5]=ea;} // 800CBAFC
  cmps(c,0,(int32_t)c->r[0],0); // 800CBB00
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBAFC; } // 800CBB04
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800CBB08
L_800CBB0C:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800CBB0C
  cmps(c,0,(int32_t)c->r[0],0); // 800CBB10
  {uint32_t ea=c->r[5]+0x00000001u; W8(ea,c->r[0]); c->r[5]=ea;} // 800CBB14
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBB0C; } // 800CBB18
  return; // 800CBB1C
}

// strncat
void f_800CBB20(Ctx* __restrict c) {
  trace_call(0x800CBB20u);
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800CBB20
  c->r[6]=c->r[3]+0xFFFFFFFFu; // 800CBB24
L_800CBB28:;
  {uint32_t ea=c->r[6]+0x00000001u; c->r[0]=R8(ea); c->r[6]=ea;} // 800CBB28
  cmps(c,0,(int32_t)c->r[0],0); // 800CBB2C
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBB28; } // 800CBB30
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800CBB34
  c->r[5]=c->r[5]+0x00000001u; // 800CBB38
  goto L_800CBB58; // 800CBB3C
L_800CBB40:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800CBB40
  cmps(c,0,(int32_t)c->r[0],0); // 800CBB44
  {uint32_t ea=c->r[6]+0x00000001u; W8(ea,c->r[0]); c->r[6]=ea;} // 800CBB48
  if (!crb(c,2)) { goto L_800CBB58; } // 800CBB4C
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800CBB50
  goto L_800CBB60; // 800CBB54
L_800CBB58:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800CBB58
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBB40; } // 800CBB5C
L_800CBB60:;
  c->r[0]=0u+0x00000000u; // 800CBB60
  W8(c->r[6]+0x00000001u,c->r[0]); // 800CBB64
  return; // 800CBB68
}

// strcmp
void f_800CBB6C(Ctx* __restrict c) {
  trace_call(0x800CBB6Cu);
  c->r[5]=R8(c->r[3]+0x00000000u); // 800CBB6C
  c->r[0]=R8(c->r[4]+0x00000000u); // 800CBB70
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 800CBB74
  if (crb(c,2)) { goto L_800CBB84; } // 800CBB78
  c->r[3]=c->r[0]|c->r[0]; // 800CBB7C
  return; // 800CBB80
L_800CBB84:;
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 800CBB84
  c->r[6]=rotl(c->r[3],0)&0x00000003u; // 800CBB88
  cmpu(c,0,c->r[0],c->r[6]); // 800CBB8C
  if (!crb(c,2)) { goto L_800CBC50; } // 800CBB90
  cmps(c,0,(int32_t)c->r[6],0); // 800CBB94
  if (crb(c,2)) { goto L_800CBBF0; } // 800CBB98
  cmps(c,0,(int32_t)c->r[5],0); // 800CBB9C
  if (!crb(c,2)) { goto L_800CBBAC; } // 800CBBA0
  c->r[3]=0u+0x00000000u; // 800CBBA4
  return; // 800CBBA8
L_800CBBAC:;
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 800CBBAC
  c->ctr=c->r[0]; // 800CBBB0
  cmps(c,0,(int32_t)c->r[0],0); // 800CBBB4
  if (crb(c,2)) { goto L_800CBBE8; } // 800CBBB8
L_800CBBBC:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 800CBBBC
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800CBBC0
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 800CBBC4
  if (crb(c,2)) { goto L_800CBBD4; } // 800CBBC8
  c->r[3]=c->r[0]|c->r[0]; // 800CBBCC
  return; // 800CBBD0
L_800CBBD4:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CBBD4
  if (!crb(c,2)) { goto L_800CBBE4; } // 800CBBD8
  c->r[3]=0u+0x00000000u; // 800CBBDC
  return; // 800CBBE0
L_800CBBE4:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CBBBC; } // 800CBBE4
L_800CBBE8:;
  c->r[3]=c->r[3]+0x00000001u; // 800CBBE8
  c->r[4]=c->r[4]+0x00000001u; // 800CBBEC
L_800CBBF0:;
  c->r[7]=R32(c->r[3]+0x00000000u); // 800CBBF0
  c->r[5]=0u+0x80810000u; // 800CBBF4
  c->r[6]=c->r[5]+0xFFFF8080u; // 800CBBF8
  c->r[8]=R32(c->r[4]+0x00000000u); // 800CBBFC
  c->r[5]=c->r[7]+0xFEFF0000u; // 800CBC00
  c->r[5]=c->r[5]+0xFFFFFEFFu; // 800CBC04
  c->r[5]=c->r[5]&~c->r[7]; // 800CBC08
  c->r[0]=c->r[5]&c->r[6]; cr0(c,c->r[0]); // 800CBC0C
  if (!crb(c,2)) { goto L_800CBC38; } // 800CBC10
  goto L_800CBC30; // 800CBC14
L_800CBC18:;
  {uint32_t ea=c->r[3]+0x00000004u; c->r[7]=R32(ea); c->r[3]=ea;} // 800CBC18
  {uint32_t ea=c->r[4]+0x00000004u; c->r[8]=R32(ea); c->r[4]=ea;} // 800CBC1C
  c->r[5]=c->r[7]+0xFEFF0000u; // 800CBC20
  c->r[0]=c->r[5]+0xFFFFFEFFu; // 800CBC24
  c->r[0]=c->r[0]&c->r[6]; cr0(c,c->r[0]); // 800CBC28
  if (!crb(c,2)) { goto L_800CBC38; } // 800CBC2C
L_800CBC30:;
  cmpu(c,0,c->r[7],c->r[8]); // 800CBC30
  if (crb(c,2)) { IRQCHK(c); goto L_800CBC18; } // 800CBC34
L_800CBC38:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 800CBC38
  c->r[0]=R8(c->r[4]+0x00000000u); // 800CBC3C
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 800CBC40
  if (crb(c,2)) { goto L_800CBC50; } // 800CBC44
  c->r[3]=c->r[0]|c->r[0]; // 800CBC48
  return; // 800CBC4C
L_800CBC50:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CBC50
  if (!crb(c,2)) { goto L_800CBC60; } // 800CBC54
  c->r[3]=0u+0x00000000u; // 800CBC58
  return; // 800CBC5C
L_800CBC60:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 800CBC60
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800CBC64
  c->r[0]=c->r[5]-c->r[0]; cr0(c,c->r[0]); // 800CBC68
  if (crb(c,2)) { goto L_800CBC78; } // 800CBC6C
  c->r[3]=c->r[0]|c->r[0]; // 800CBC70
  return; // 800CBC74
L_800CBC78:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CBC78
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBC60; } // 800CBC7C
  c->r[3]=0u+0x00000000u; // 800CBC80
  return; // 800CBC84
}

// strncmp
void f_800CBC88(Ctx* __restrict c) {
  trace_call(0x800CBC88u);
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800CBC88
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800CBC8C
  c->r[6]=c->r[5]+0x00000001u; // 800CBC90
  goto L_800CBCB8; // 800CBC94
L_800CBC98:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[0]=R8(ea); c->r[3]=ea;} // 800CBC98
  {uint32_t ea=c->r[4]+0x00000001u; c->r[5]=R8(ea); c->r[4]=ea;} // 800CBC9C
  cmpu(c,0,c->r[0],c->r[5]); // 800CBCA0
  if (crb(c,2)) { goto L_800CBCB0; } // 800CBCA4
  c->r[3]=c->r[0]-c->r[5]; // 800CBCA8
  return; // 800CBCAC
L_800CBCB0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CBCB0
  if (crb(c,2)) { goto L_800CBCC0; } // 800CBCB4
L_800CBCB8:;
  c->r[6]=addc(c,c->r[6],0xFFFFFFFFu,0); cr0(c,c->r[6]); // 800CBCB8
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBC98; } // 800CBCBC
L_800CBCC0:;
  c->r[3]=0u+0x00000000u; // 800CBCC0
  return; // 800CBCC4
}

// strchr
void f_800CBCC8(Ctx* __restrict c) {
  trace_call(0x800CBCC8u);
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800CBCC8
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 800CBCCC
  goto L_800CBCDC; // 800CBCD0
L_800CBCD4:;
  cmpu(c,0,c->r[4],c->r[0]); // 800CBCD4
  if (crb(c,2)) return; // 800CBCD8
L_800CBCDC:;
  {uint32_t ea=c->r[3]+0x00000001u; c->r[4]=R8(ea); c->r[3]=ea;} // 800CBCDC
  cmps(c,0,(int32_t)c->r[4],0); // 800CBCE0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBCD4; } // 800CBCE4
  cmps(c,0,(int32_t)c->r[0],0); // 800CBCE8
  if (crb(c,2)) return; // 800CBCEC
  c->r[3]=0u+0x00000000u; // 800CBCF0
  return; // 800CBCF4
}

// strcspn
void f_800CBCF8(Ctx* __restrict c) {
  trace_call(0x800CBCF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBCF8
  c->r[0]=0u+0x00000000u; // 800CBCFC
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800CBD00
  c->r[4]=0u+0x00000001u; // 800CBD04
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CBD08
  c->r[6]=c->r[1]+0x00000008u; // 800CBD0C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CBD10
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CBD14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBD18
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CBD1C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CBD20
  W32(c->r[1]+0x00000020u,c->r[0]); // 800CBD24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CBD28
  goto L_800CBD4C; // 800CBD2C
L_800CBD30:;
  c->r[7]=rotl(c->r[0],29)&0x0000001Fu; // 800CBD30
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 800CBD34
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800CBD38
  c->r[5]=R8(c->r[6]+c->r[7]); // 800CBD3C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800CBD40
  c->r[0]=c->r[5]|c->r[0]; // 800CBD44
  W8(c->r[6]+c->r[7],c->r[0]); // 800CBD48
L_800CBD4C:;
  {uint32_t ea=c->r[8]+0x00000001u; c->r[0]=R8(ea); c->r[8]=ea;} // 800CBD4C
  cmps(c,0,(int32_t)c->r[0],0); // 800CBD50
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBD30; } // 800CBD54
  c->r[7]=c->r[3]+0xFFFFFFFFu; // 800CBD58
  c->r[6]=c->r[1]+0x00000008u; // 800CBD5C
  c->r[4]=0u+0x00000001u; // 800CBD60
  goto L_800CBD84; // 800CBD64
L_800CBD68:;
  c->r[5]=rotl(c->r[0],29)&0x0000001Fu; // 800CBD68
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 800CBD6C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800CBD70
  c->r[5]=R8(c->r[6]+c->r[5]); // 800CBD74
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800CBD78
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 800CBD7C
  if (!crb(c,2)) { goto L_800CBD90; } // 800CBD80
L_800CBD84:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 800CBD84
  cmps(c,0,(int32_t)c->r[0],0); // 800CBD88
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBD68; } // 800CBD8C
L_800CBD90:;
  c->r[3]=c->r[7]-c->r[3]; // 800CBD90
  c->r[1]=c->r[1]+0x00000030u; // 800CBD94
  return; // 800CBD98
}

// strtok
void f_800CBD9C(Ctx* __restrict c) {
  trace_call(0x800CBD9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBD9C
  c->r[0]=0u+0x00000000u; // 800CBDA0
  cmps(c,0,(int32_t)c->r[3],0); // 800CBDA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CBDA8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CBDAC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CBDB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBDB4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CBDB8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CBDBC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800CBDC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CBDC4
  if (crb(c,2)) { goto L_800CBDD0; } // 800CBDC8
  W32(c->r[13]+0xFFFF8A0Cu,c->r[3]); // 800CBDCC
L_800CBDD0:;
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 800CBDD0
  c->r[5]=c->r[1]+0x00000008u; // 800CBDD4
  c->r[3]=0u+0x00000001u; // 800CBDD8
  goto L_800CBDFC; // 800CBDDC
L_800CBDE0:;
  c->r[6]=rotl(c->r[0],29)&0x0000001Fu; // 800CBDE0
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 800CBDE4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800CBDE8
  c->r[4]=R8(c->r[5]+c->r[6]); // 800CBDEC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800CBDF0
  c->r[0]=c->r[4]|c->r[0]; // 800CBDF4
  W8(c->r[5]+c->r[6],c->r[0]); // 800CBDF8
L_800CBDFC:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 800CBDFC
  cmps(c,0,(int32_t)c->r[0],0); // 800CBE00
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBDE0; } // 800CBE04
  c->r[4]=R32(c->r[13]+0xFFFF8A0Cu); // 800CBE08
  c->r[5]=c->r[1]+0x00000008u; // 800CBE0C
  c->r[3]=0u+0x00000001u; // 800CBE10
  c->r[7]=c->r[4]+0xFFFFFFFFu; // 800CBE14
  goto L_800CBE38; // 800CBE18
L_800CBE1C:;
  c->r[4]=rotl(c->r[6],29)&0x0000001Fu; // 800CBE1C
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 800CBE20
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800CBE24
  c->r[4]=R8(c->r[5]+c->r[4]); // 800CBE28
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800CBE2C
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800CBE30
  if (crb(c,2)) { goto L_800CBE44; } // 800CBE34
L_800CBE38:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[6]=R8(ea); c->r[7]=ea;} // 800CBE38
  cmps(c,0,(int32_t)c->r[6],0); // 800CBE3C
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBE1C; } // 800CBE40
L_800CBE44:;
  cmps(c,0,(int32_t)c->r[6],0); // 800CBE44
  if (!crb(c,2)) { goto L_800CBE5C; } // 800CBE48
  c->r[0]=R32(c->r[13]+0xFFFF8A08u); // 800CBE4C
  c->r[3]=0u+0x00000000u; // 800CBE50
  W32(c->r[13]+0xFFFF8A0Cu,c->r[0]); // 800CBE54
  goto L_800CBEB8; // 800CBE58
L_800CBE5C:;
  c->r[3]=c->r[7]|c->r[7]; // 800CBE5C
  c->r[6]=c->r[1]+0x00000008u; // 800CBE60
  c->r[4]=0u+0x00000001u; // 800CBE64
  goto L_800CBE88; // 800CBE68
L_800CBE6C:;
  c->r[5]=rotl(c->r[8],29)&0x0000001Fu; // 800CBE6C
  c->r[0]=rotl(c->r[8],0)&0x00000007u; // 800CBE70
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800CBE74
  c->r[5]=R8(c->r[6]+c->r[5]); // 800CBE78
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800CBE7C
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 800CBE80
  if (!crb(c,2)) { goto L_800CBE94; } // 800CBE84
L_800CBE88:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[8]=R8(ea); c->r[7]=ea;} // 800CBE88
  cmps(c,0,(int32_t)c->r[8],0); // 800CBE8C
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBE6C; } // 800CBE90
L_800CBE94:;
  cmps(c,0,(int32_t)c->r[8],0); // 800CBE94
  if (!crb(c,2)) { goto L_800CBEA8; } // 800CBE98
  c->r[0]=R32(c->r[13]+0xFFFF8A08u); // 800CBE9C
  W32(c->r[13]+0xFFFF8A0Cu,c->r[0]); // 800CBEA0
  goto L_800CBEB8; // 800CBEA4
L_800CBEA8:;
  c->r[4]=c->r[7]+0x00000001u; // 800CBEA8
  c->r[0]=0u+0x00000000u; // 800CBEAC
  W32(c->r[13]+0xFFFF8A0Cu,c->r[4]); // 800CBEB0
  W8(c->r[7]+0x00000000u,c->r[0]); // 800CBEB4
L_800CBEB8:;
  c->r[1]=c->r[1]+0x00000030u; // 800CBEB8
  return; // 800CBEBC
}

// strstr
void f_800CBEC0(Ctx* __restrict c) {
  trace_call(0x800CBEC0u);
  cmps(c,0,(int32_t)c->r[4],0); // 800CBEC0
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 800CBEC4
  if (crb(c,2)) return; // 800CBEC8
  c->r[6]=R8(c->r[4]+0x00000000u); // 800CBECC
  cmps(c,0,(int32_t)c->r[6],0); // 800CBED0
  if (!crb(c,2)) { goto L_800CBF18; } // 800CBED4
  return; // 800CBED8
  goto L_800CBF18; // 800CBEDC
L_800CBEE0:;
  cmpu(c,0,c->r[0],c->r[6]); // 800CBEE0
  if (!crb(c,2)) { goto L_800CBF18; } // 800CBEE4
  c->r[7]=c->r[5]+0xFFFFFFFFu; // 800CBEE8
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 800CBEEC
L_800CBEF0:;
  {uint32_t ea=c->r[7]+0x00000001u; c->r[0]=R8(ea); c->r[7]=ea;} // 800CBEF0
  {uint32_t ea=c->r[8]+0x00000001u; c->r[3]=R8(ea); c->r[8]=ea;} // 800CBEF4
  cmpu(c,0,c->r[0],c->r[3]); // 800CBEF8
  if (!crb(c,2)) { goto L_800CBF08; } // 800CBEFC
  cmps(c,0,(int32_t)c->r[0],0); // 800CBF00
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBEF0; } // 800CBF04
L_800CBF08:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CBF08
  if (!crb(c,2)) { goto L_800CBF18; } // 800CBF0C
  c->r[3]=c->r[5]|c->r[5]; // 800CBF10
  return; // 800CBF14
L_800CBF18:;
  {uint32_t ea=c->r[5]+0x00000001u; c->r[0]=R8(ea); c->r[5]=ea;} // 800CBF18
  cmps(c,0,(int32_t)c->r[0],0); // 800CBF1C
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBEE0; } // 800CBF20
  c->r[3]=0u+0x00000000u; // 800CBF24
  return; // 800CBF28
}

// fn_800CBF2C
void f_800CBF2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBF2C
  c->r[0]=c->lr; // 800CBF30
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800CBF34
  c->r[11]=c->r[1]+0x000000E0u; // 800CBF38
  c->lr=0x800CBF40u; f_800C2124(c); // 800CBF3C
  c->r[31]=0u+0x00000000u; // 800CBF40
  c->r[8]=0u+0x80220000u; // 800CBF44
  c->r[0]=0u+0x00000000u; // 800CBF48
  W32(c->r[1]+0x00000058u,c->r[31]); // 800CBF4C
  c->r[8]=R32(c->r[8]+0xFFFFBCE0u); // 800CBF50
  c->r[18]=c->r[4]|c->r[4]; // 800CBF54
  W32(c->r[1]+0x00000090u,c->r[0]); // 800CBF58
  c->r[0]=0u+0x00000000u; // 800CBF5C
  c->r[19]=c->r[5]|c->r[5]; // 800CBF60
  c->r[12]=c->r[18]|c->r[18]; // 800CBF64
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 800CBF68
  c->r[0]=0u+0x00000000u; // 800CBF6C
  c->r[20]=c->r[7]|c->r[7]; // 800CBF70
  c->r[17]=0u+0x00000001u; // 800CBF74
  W32(c->r[1]+0x00000088u,c->r[0]); // 800CBF78
  c->r[0]=0u+0x00000000u; // 800CBF7C
  c->r[14]=0u+0x00000000u; // 800CBF80
  c->r[29]=0u+0x00000000u; // 800CBF84
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CBF88
  c->r[3]=c->r[19]|c->r[19]; // 800CBF8C
  c->r[28]=0u+0x00000000u; // 800CBF90
  c->r[25]=0u+0x00000000u; // 800CBF94
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800CBF98
  c->r[23]=0u+0x00000000u; // 800CBF9C
  c->r[30]=0u+0x00000001u; // 800CBFA0
  c->r[4]=0u+0x00000000u; // 800CBFA4
  W32(c->r[1]+0x00000060u,c->r[31]); // 800CBFA8
  c->r[5]=0u+0x00000000u; // 800CBFAC
  W32(c->r[1]+0x00000064u,c->r[31]); // 800CBFB0
  W32(c->r[1]+0x00000068u,c->r[31]); // 800CBFB4
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800CBFB8
  W32(c->r[1]+0x00000070u,c->r[31]); // 800CBFBC
  W32(c->r[1]+0x00000074u,c->r[31]); // 800CBFC0
  W32(c->r[1]+0x00000078u,c->r[31]); // 800CBFC4
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800CBFC8
  W16(c->r[1]+0x00000080u,c->r[31]); // 800CBFCC
  c->r[27]=R8(c->r[8]+0x00000000u); // 800CBFD0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800CBFD4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800CBFD8
  W32(c->r[7]+0x00000000u,c->r[31]); // 800CBFDC
  c->ctr=c->r[12]; // 800CBFE0
  if (true) { c->lr=0x800CBFE8u; dispatch(c,c->ctr); } // 800CBFE4
  c->r[16]=0u+0x80220000u; // 800CBFE8
  c->r[15]=0u+0x801F0000u; // 800CBFEC
  c->r[4]=c->r[3]|c->r[3]; // 800CBFF0
  c->r[16]=c->r[16]+0xFFFFBE90u; // 800CBFF4
  c->r[15]=c->r[15]+0x00004218u; // 800CBFF8
  goto L_800CCFCC; // 800CBFFC
L_800CC000:;
  cmps(c,0,(int32_t)c->r[17],128); // 800CC000
  if (crb(c,2)) { goto L_800CC8A4; } // 800CC004
  if (!crb(c,0)) { goto L_800CC064; } // 800CC008
  cmps(c,0,(int32_t)c->r[17],8); // 800CC00C
  if (crb(c,2)) { goto L_800CC674; } // 800CC010
  if (!crb(c,0)) { goto L_800CC040; } // 800CC014
  cmps(c,0,(int32_t)c->r[17],3); // 800CC018
  if (crb(c,2)) { goto L_800CCFCC; } // 800CC01C
  if (!crb(c,0)) { goto L_800CC034; } // 800CC020
  cmps(c,0,(int32_t)c->r[17],1); // 800CC024
  if (crb(c,2)) { goto L_800CC0B4; } // 800CC028
  if (!crb(c,0)) { goto L_800CC544; } // 800CC02C
  goto L_800CCFCC; // 800CC030
L_800CC034:;
  cmps(c,0,(int32_t)c->r[17],5); // 800CC034
  if (!crb(c,0)) { goto L_800CCFCC; } // 800CC038
  goto L_800CC640; // 800CC03C
L_800CC040:;
  cmps(c,0,(int32_t)c->r[17],32); // 800CC040
  if (crb(c,2)) { goto L_800CC790; } // 800CC044
  if (!crb(c,0)) { goto L_800CC058; } // 800CC048
  cmps(c,0,(int32_t)c->r[17],16); // 800CC04C
  if (crb(c,2)) { goto L_800CC73C; } // 800CC050
  goto L_800CCFCC; // 800CC054
L_800CC058:;
  cmps(c,0,(int32_t)c->r[17],64); // 800CC058
  if (crb(c,2)) { goto L_800CC838; } // 800CC05C
  goto L_800CCFCC; // 800CC060
L_800CC064:;
  cmps(c,0,(int32_t)c->r[17],8192); // 800CC064
  if (crb(c,2)) { goto L_800CC338; } // 800CC068
  if (!crb(c,0)) { goto L_800CC094; } // 800CC06C
  cmps(c,0,(int32_t)c->r[17],512); // 800CC070
  if (crb(c,2)) { goto L_800CC98C; } // 800CC074
  if (!crb(c,0)) { goto L_800CC088; } // 800CC078
  cmps(c,0,(int32_t)c->r[17],256); // 800CC07C
  if (crb(c,2)) { goto L_800CC908; } // 800CC080
  goto L_800CCFCC; // 800CC084
L_800CC088:;
  cmps(c,0,(int32_t)c->r[17],1024); // 800CC088
  if (crb(c,2)) { goto L_800CC9C0; } // 800CC08C
  goto L_800CCFCC; // 800CC090
L_800CC094:;
  c->r[3]=0u+0x00010000u; // 800CC094
  c->r[0]=c->r[3]+0xFFFF8000u; // 800CC098
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[0]); // 800CC09C
  if (crb(c,2)) { goto L_800CCA4C; } // 800CC0A0
  if (!crb(c,0)) { goto L_800CCFCC; } // 800CC0A4
  cmps(c,0,(int32_t)c->r[17],16384); // 800CC0A8
  if (crb(c,2)) { goto L_800CC218; } // 800CC0AC
  goto L_800CCFCC; // 800CC0B0
L_800CC0B4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CC0B4
  c->r[0]=0u+0x00000000u; // 800CC0B8
  if (crb(c,0)) { goto L_800CC0C8; } // 800CC0BC
  cmps(c,0,(int32_t)c->r[4],256); // 800CC0C0
  if (crb(c,0)) { goto L_800CC0CC; } // 800CC0C4
L_800CC0C8:;
  c->r[0]=0u+0x00000001u; // 800CC0C8
L_800CC0CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC0CC
  if (crb(c,2)) { goto L_800CC0DC; } // 800CC0D0
  c->r[0]=0u+0x00000000u; // 800CC0D4
  goto L_800CC0F0; // 800CC0D8
L_800CC0DC:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CC0DC
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CC0E0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CC0E4
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CC0E8
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 800CC0EC
L_800CC0F0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC0F0
  if (crb(c,2)) { goto L_800CC11C; } // 800CC0F4
  c->r[12]=c->r[18]|c->r[18]; // 800CC0F8
  c->r[3]=c->r[19]|c->r[19]; // 800CC0FC
  c->r[4]=0u+0x00000000u; // 800CC100
  c->r[5]=0u+0x00000000u; // 800CC104
  c->ctr=c->r[12]; // 800CC108
  if (true) { c->lr=0x800CC110u; dispatch(c,c->ctr); } // 800CC10C
  c->r[4]=c->r[3]|c->r[3]; // 800CC110
  c->r[14]=c->r[14]+0x00000001u; // 800CC114
  goto L_800CCFCC; // 800CC118
L_800CC11C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CC11C
  c->r[0]=0u+0x00000000u; // 800CC120
  if (crb(c,0)) { goto L_800CC130; } // 800CC124
  cmps(c,0,(int32_t)c->r[4],256); // 800CC128
  if (crb(c,0)) { goto L_800CC134; } // 800CC12C
L_800CC130:;
  c->r[0]=0u+0x00000001u; // 800CC130
L_800CC134:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC134
  if (crb(c,2)) { goto L_800CC144; } // 800CC138
  c->r[0]=c->r[4]|c->r[4]; // 800CC13C
  goto L_800CC150; // 800CC140
L_800CC144:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CC144
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CC148
  c->r[0]=R8(c->r[3]+c->r[4]); // 800CC14C
L_800CC150:;
  cmps(c,0,(int32_t)c->r[0],73); // 800CC150
  if (crb(c,2)) { goto L_800CC1C0; } // 800CC154
  if (!crb(c,0)) { goto L_800CC180; } // 800CC158
  cmps(c,0,(int32_t)c->r[0],44); // 800CC15C
  if (crb(c,2)) { goto L_800CC210; } // 800CC160
  if (!crb(c,0)) { goto L_800CC174; } // 800CC164
  cmps(c,0,(int32_t)c->r[0],43); // 800CC168
  if (!crb(c,0)) { goto L_800CC194; } // 800CC16C
  goto L_800CC210; // 800CC170
L_800CC174:;
  cmps(c,0,(int32_t)c->r[0],46); // 800CC174
  if (!crb(c,0)) { goto L_800CC210; } // 800CC178
  goto L_800CC18C; // 800CC17C
L_800CC180:;
  cmps(c,0,(int32_t)c->r[0],78); // 800CC180
  if (crb(c,2)) { goto L_800CC1E8; } // 800CC184
  goto L_800CC210; // 800CC188
L_800CC18C:;
  c->r[0]=0u+0x00000001u; // 800CC18C
  W32(c->r[1]+0x00000090u,c->r[0]); // 800CC190
L_800CC194:;
  c->r[12]=c->r[18]|c->r[18]; // 800CC194
  c->r[3]=c->r[19]|c->r[19]; // 800CC198
  c->r[4]=0u+0x00000000u; // 800CC19C
  c->r[5]=0u+0x00000000u; // 800CC1A0
  c->ctr=c->r[12]; // 800CC1A4
  c->r[30]=c->r[30]+0x00000001u; // 800CC1A8
  if (true) { c->lr=0x800CC1B0u; dispatch(c,c->ctr); } // 800CC1AC
  c->r[0]=0u+0x00000001u; // 800CC1B0
  c->r[4]=c->r[3]|c->r[3]; // 800CC1B4
  W32(c->r[1]+0x00000088u,c->r[0]); // 800CC1B8
  goto L_800CCFCC; // 800CC1BC
L_800CC1C0:;
  c->r[12]=c->r[18]|c->r[18]; // 800CC1C0
  c->r[3]=c->r[19]|c->r[19]; // 800CC1C4
  c->r[4]=0u+0x00000000u; // 800CC1C8
  c->r[5]=0u+0x00000000u; // 800CC1CC
  c->ctr=c->r[12]; // 800CC1D0
  c->r[30]=c->r[30]+0x00000001u; // 800CC1D4
  if (true) { c->lr=0x800CC1DCu; dispatch(c,c->ctr); } // 800CC1D8
  c->r[4]=c->r[3]|c->r[3]; // 800CC1DC
  c->r[17]=0u+0x00004000u; // 800CC1E0
  goto L_800CCFCC; // 800CC1E4
L_800CC1E8:;
  c->r[12]=c->r[18]|c->r[18]; // 800CC1E8
  c->r[3]=c->r[19]|c->r[19]; // 800CC1EC
  c->r[4]=0u+0x00000000u; // 800CC1F0
  c->r[5]=0u+0x00000000u; // 800CC1F4
  c->ctr=c->r[12]; // 800CC1F8
  c->r[30]=c->r[30]+0x00000001u; // 800CC1FC
  if (true) { c->lr=0x800CC204u; dispatch(c,c->ctr); } // 800CC200
  c->r[4]=c->r[3]|c->r[3]; // 800CC204
  c->r[17]=0u+0x00002000u; // 800CC208
  goto L_800CCFCC; // 800CC20C
L_800CC210:;
  c->r[17]=0u+0x00000002u; // 800CC210
  goto L_800CCFCC; // 800CC214
L_800CC218:;
  c->r[11]=R8(c->r[15]+0x00000000u); // 800CC218
  c->r[17]=c->r[1]+0x00000029u; // 800CC21C
  c->r[10]=R8(c->r[15]+0x00000001u); // 800CC220
  c->r[21]=0u+0x00000001u; // 800CC224
  c->r[9]=R8(c->r[15]+0x00000002u); // 800CC228
  c->r[8]=R8(c->r[15]+0x00000003u); // 800CC22C
  c->r[7]=R8(c->r[15]+0x00000004u); // 800CC230
  c->r[6]=R8(c->r[15]+0x00000005u); // 800CC234
  c->r[5]=R8(c->r[15]+0x00000006u); // 800CC238
  c->r[3]=R8(c->r[15]+0x00000007u); // 800CC23C
  c->r[0]=R8(c->r[15]+0x00000008u); // 800CC240
  W8(c->r[1]+0x00000028u,c->r[11]); // 800CC244
  W8(c->r[1]+0x00000029u,c->r[10]); // 800CC248
  W8(c->r[1]+0x0000002Au,c->r[9]); // 800CC24C
  W8(c->r[1]+0x0000002Bu,c->r[8]); // 800CC250
  W8(c->r[1]+0x0000002Cu,c->r[7]); // 800CC254
  W8(c->r[1]+0x0000002Du,c->r[6]); // 800CC258
  W8(c->r[1]+0x0000002Eu,c->r[5]); // 800CC25C
  W8(c->r[1]+0x0000002Fu,c->r[3]); // 800CC260
  W8(c->r[1]+0x00000030u,c->r[0]); // 800CC264
  goto L_800CC294; // 800CC268
L_800CC26C:;
  c->r[12]=c->r[18]|c->r[18]; // 800CC26C
  c->r[3]=c->r[19]|c->r[19]; // 800CC270
  c->r[4]=0u+0x00000000u; // 800CC274
  c->r[5]=0u+0x00000000u; // 800CC278
  c->ctr=c->r[12]; // 800CC27C
  c->r[17]=c->r[17]+0x00000001u; // 800CC280
  c->r[21]=c->r[21]+0x00000001u; // 800CC284
  c->r[30]=c->r[30]+0x00000001u; // 800CC288
  if (true) { c->lr=0x800CC290u; dispatch(c,c->ctr); } // 800CC28C
  c->r[4]=c->r[3]|c->r[3]; // 800CC290
L_800CC294:;
  cmps(c,0,(int32_t)c->r[21],8); // 800CC294
  if (!crb(c,0)) { goto L_800CC2E0; } // 800CC298
  c->r[3]=R8(c->r[17]+0x00000000u); // 800CC29C
  cmps(c,0,(int32_t)c->r[4],0); // 800CC2A0
  c->r[0]=0u+0x00000000u; // 800CC2A4
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800CC2A8
  if (crb(c,0)) { goto L_800CC2B8; } // 800CC2AC
  cmps(c,0,(int32_t)c->r[4],256); // 800CC2B0
  if (crb(c,0)) { goto L_800CC2BC; } // 800CC2B4
L_800CC2B8:;
  c->r[0]=0u+0x00000001u; // 800CC2B8
L_800CC2BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC2BC
  if (crb(c,2)) { goto L_800CC2CC; } // 800CC2C0
  c->r[0]=c->r[4]|c->r[4]; // 800CC2C4
  goto L_800CC2D8; // 800CC2C8
L_800CC2CC:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CC2CC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CC2D0
  c->r[0]=R8(c->r[3]+c->r[4]); // 800CC2D4
L_800CC2D8:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800CC2D8
  if (crb(c,2)) { IRQCHK(c); goto L_800CC26C; } // 800CC2DC
L_800CC2E0:;
  cmps(c,0,(int32_t)c->r[21],3); // 800CC2E0
  if (crb(c,2)) { goto L_800CC2F0; } // 800CC2E4
  cmps(c,0,(int32_t)c->r[21],8); // 800CC2E8
  if (!crb(c,2)) { goto L_800CC330; } // 800CC2EC
L_800CC2F0:;
  c->r[0]=R32(c->r[1]+0x00000090u); // 800CC2F0
  cmps(c,0,(int32_t)c->r[0],0); // 800CC2F4
  if (crb(c,2)) { goto L_800CC310; } // 800CC2F8
  c->r[3]=0u+0x803C0000u; // 800CC2FC
  {uint32_t ea=c->r[3]+0x00007714u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC300
  c->f[1]=-c->f[0]; // 800CC304
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800CC308
  goto L_800CC318; // 800CC30C
L_800CC310:;
  c->r[3]=0u+0x803C0000u; // 800CC310
  {uint32_t ea=c->r[3]+0x00007714u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC314
L_800CC318:;
  c->r[0]=R32(c->r[1]+0x00000088u); // 800CC318
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800CC31C
  c->r[0]=c->r[0]+c->r[14]; // 800CC320
  c->r[0]=c->r[21]+c->r[0]; // 800CC324
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CC328
  goto L_800CD308; // 800CC32C
L_800CC330:;
  c->r[17]=0u+0x00001000u; // 800CC330
  goto L_800CCFCC; // 800CC334
L_800CC338:;
  c->r[7]=R8(c->r[2]+0xFFFF91D0u); // 800CC338
  c->r[21]=0u+0x00000000u; // 800CC33C
  c->r[6]=R8(c->r[2]+0xFFFF91D1u); // 800CC340
  c->r[17]=c->r[1]+0x00000019u; // 800CC344
  c->r[5]=R8(c->r[2]+0xFFFF91D2u); // 800CC348
  c->r[22]=0u+0x00000001u; // 800CC34C
  c->r[3]=R8(c->r[2]+0xFFFF91D3u); // 800CC350
  c->r[0]=R8(c->r[2]+0xFFFF91D4u); // 800CC354
  W8(c->r[1]+0x00000018u,c->r[7]); // 800CC358
  W8(c->r[1]+0x00000019u,c->r[6]); // 800CC35C
  W8(c->r[1]+0x0000001Au,c->r[5]); // 800CC360
  W8(c->r[1]+0x0000001Bu,c->r[3]); // 800CC364
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 800CC368
  W32(c->r[1]+0x00000038u,c->r[21]); // 800CC36C
  W32(c->r[1]+0x0000003Cu,c->r[21]); // 800CC370
  W32(c->r[1]+0x00000040u,c->r[21]); // 800CC374
  W32(c->r[1]+0x00000044u,c->r[21]); // 800CC378
  W32(c->r[1]+0x00000048u,c->r[21]); // 800CC37C
  W32(c->r[1]+0x0000004Cu,c->r[21]); // 800CC380
  W32(c->r[1]+0x00000050u,c->r[21]); // 800CC384
  W32(c->r[1]+0x00000054u,c->r[21]); // 800CC388
  goto L_800CC3B8; // 800CC38C
L_800CC390:;
  c->r[12]=c->r[18]|c->r[18]; // 800CC390
  c->r[3]=c->r[19]|c->r[19]; // 800CC394
  c->r[4]=0u+0x00000000u; // 800CC398
  c->r[5]=0u+0x00000000u; // 800CC39C
  c->ctr=c->r[12]; // 800CC3A0
  c->r[17]=c->r[17]+0x00000001u; // 800CC3A4
  c->r[22]=c->r[22]+0x00000001u; // 800CC3A8
  c->r[30]=c->r[30]+0x00000001u; // 800CC3AC
  if (true) { c->lr=0x800CC3B4u; dispatch(c,c->ctr); } // 800CC3B0
  c->r[4]=c->r[3]|c->r[3]; // 800CC3B4
L_800CC3B8:;
  cmps(c,0,(int32_t)c->r[22],4); // 800CC3B8
  if (!crb(c,0)) { goto L_800CC404; } // 800CC3BC
  c->r[3]=R8(c->r[17]+0x00000000u); // 800CC3C0
  cmps(c,0,(int32_t)c->r[4],0); // 800CC3C4
  c->r[0]=0u+0x00000000u; // 800CC3C8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 800CC3CC
  if (crb(c,0)) { goto L_800CC3DC; } // 800CC3D0
  cmps(c,0,(int32_t)c->r[4],256); // 800CC3D4
  if (crb(c,0)) { goto L_800CC3E0; } // 800CC3D8
L_800CC3DC:;
  c->r[0]=0u+0x00000001u; // 800CC3DC
L_800CC3E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC3E0
  if (crb(c,2)) { goto L_800CC3F0; } // 800CC3E4
  c->r[0]=c->r[4]|c->r[4]; // 800CC3E8
  goto L_800CC3FC; // 800CC3EC
L_800CC3F0:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CC3F0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CC3F4
  c->r[0]=R8(c->r[3]+c->r[4]); // 800CC3F8
L_800CC3FC:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800CC3FC
  if (crb(c,2)) { IRQCHK(c); goto L_800CC390; } // 800CC400
L_800CC404:;
  c->r[0]=c->r[22]+0xFFFFFFFDu; // 800CC404
  cmpu(c,0,c->r[0],0x00000001u); // 800CC408
  if (crb(c,1)) { goto L_800CC53C; } // 800CC40C
  cmps(c,0,(int32_t)c->r[22],4); // 800CC410
  if (!crb(c,2)) { goto L_800CC4F8; } // 800CC414
  c->r[17]=c->r[1]+0x00000038u; // 800CC418
  goto L_800CC44C; // 800CC41C
L_800CC420:;
  c->r[12]=c->r[18]|c->r[18]; // 800CC420
  W8(c->r[17]+0x00000000u,c->r[4]); // 800CC424
  c->r[3]=c->r[19]|c->r[19]; // 800CC428
  c->r[4]=0u+0x00000000u; // 800CC42C
  c->r[5]=0u+0x00000000u; // 800CC430
  c->ctr=c->r[12]; // 800CC434
  c->r[21]=c->r[21]+0x00000001u; // 800CC438
  c->r[17]=c->r[17]+0x00000001u; // 800CC43C
  c->r[30]=c->r[30]+0x00000001u; // 800CC440
  if (true) { c->lr=0x800CC448u; dispatch(c,c->ctr); } // 800CC444
  c->r[4]=c->r[3]|c->r[3]; // 800CC448
L_800CC44C:;
  cmps(c,0,(int32_t)c->r[21],32); // 800CC44C
  if (!crb(c,0)) { goto L_800CC4E4; } // 800CC450
  cmps(c,0,(int32_t)c->r[4],0); // 800CC454
  c->r[0]=0u+0x00000000u; // 800CC458
  if (crb(c,0)) { goto L_800CC468; } // 800CC45C
  cmps(c,0,(int32_t)c->r[4],256); // 800CC460
  if (crb(c,0)) { goto L_800CC46C; } // 800CC464
L_800CC468:;
  c->r[0]=0u+0x00000001u; // 800CC468
L_800CC46C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC46C
  if (crb(c,2)) { goto L_800CC47C; } // 800CC470
  c->r[0]=0u+0x00000000u; // 800CC474
  goto L_800CC490; // 800CC478
L_800CC47C:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CC47C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CC480
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CC484
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CC488
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CC48C
L_800CC490:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC490
  if (!crb(c,2)) { IRQCHK(c); goto L_800CC420; } // 800CC494
  cmps(c,0,(int32_t)c->r[4],0); // 800CC498
  c->r[0]=0u+0x00000000u; // 800CC49C
  if (crb(c,0)) { goto L_800CC4AC; } // 800CC4A0
  cmps(c,0,(int32_t)c->r[4],256); // 800CC4A4
  if (crb(c,0)) { goto L_800CC4B0; } // 800CC4A8
L_800CC4AC:;
  c->r[0]=0u+0x00000001u; // 800CC4AC
L_800CC4B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC4B0
  if (crb(c,2)) { goto L_800CC4C0; } // 800CC4B4
  c->r[0]=0u+0x00000000u; // 800CC4B8
  goto L_800CC4D4; // 800CC4BC
L_800CC4C0:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CC4C0
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CC4C4
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CC4C8
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CC4CC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800CC4D0
L_800CC4D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC4D4
  if (!crb(c,2)) { IRQCHK(c); goto L_800CC420; } // 800CC4D8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[27]); // 800CC4DC
  if (crb(c,2)) { IRQCHK(c); goto L_800CC420; } // 800CC4E0
L_800CC4E4:;
  cmps(c,0,(int32_t)c->r[4],41); // 800CC4E4
  if (crb(c,2)) { goto L_800CC4F4; } // 800CC4E8
  c->r[17]=0u+0x00001000u; // 800CC4EC
  goto L_800CCFCC; // 800CC4F0
L_800CC4F4:;
  c->r[21]=c->r[21]+0x00000001u; // 800CC4F4
L_800CC4F8:;
  c->r[0]=R32(c->r[1]+0x00000090u); // 800CC4F8
  c->r[3]=c->r[1]+0x00000038u; // 800CC4FC
  cmps(c,0,(int32_t)c->r[0],0); // 800CC500
  c->r[0]=0u+0x00000000u; // 800CC504
  W8(c->r[3]+c->r[21],c->r[0]); // 800CC508
  if (crb(c,2)) { goto L_800CC51C; } // 800CC50C
  c->lr=0x800CC514u; f_800D3A84(c); // 800CC510
  c->f[1]=-c->f[1]; // 800CC514
  goto L_800CC520; // 800CC518
L_800CC51C:;
  c->lr=0x800CC520u; f_800D3A84(c); // 800CC51C
L_800CC520:;
  c->r[0]=R32(c->r[1]+0x00000088u); // 800CC520
  c->r[3]=c->r[0]+c->r[22]; // 800CC524
  c->r[0]=c->r[21]+c->r[14]; // 800CC528
  c->r[0]=c->r[3]+c->r[0]; // 800CC52C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800CC530
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CC534
  goto L_800CD308; // 800CC538
L_800CC53C:;
  c->r[17]=0u+0x00001000u; // 800CC53C
  goto L_800CCFCC; // 800CC540
L_800CC544:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[27]); // 800CC544
  if (!crb(c,2)) { goto L_800CC574; } // 800CC548
  c->r[12]=c->r[18]|c->r[18]; // 800CC54C
  c->r[3]=c->r[19]|c->r[19]; // 800CC550
  c->r[17]=0u+0x00000010u; // 800CC554
  c->r[4]=0u+0x00000000u; // 800CC558
  c->r[5]=0u+0x00000000u; // 800CC55C
  c->ctr=c->r[12]; // 800CC560
  c->r[30]=c->r[30]+0x00000001u; // 800CC564
  if (true) { c->lr=0x800CC56Cu; dispatch(c,c->ctr); } // 800CC568
  c->r[4]=c->r[3]|c->r[3]; // 800CC56C
  goto L_800CCFCC; // 800CC570
L_800CC574:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CC574
  c->r[0]=0u+0x00000000u; // 800CC578
  if (crb(c,0)) { goto L_800CC588; } // 800CC57C
  cmps(c,0,(int32_t)c->r[4],256); // 800CC580
  if (crb(c,0)) { goto L_800CC58C; } // 800CC584
L_800CC588:;
  c->r[0]=0u+0x00000001u; // 800CC588
L_800CC58C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC58C
  if (crb(c,2)) { goto L_800CC59C; } // 800CC590
  c->r[0]=0u+0x00000000u; // 800CC594
  goto L_800CC5B0; // 800CC598
L_800CC59C:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CC59C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CC5A0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CC5A4
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CC5A8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CC5AC
L_800CC5B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC5B0
  if (!crb(c,2)) { goto L_800CC5C0; } // 800CC5B4
  c->r[17]=0u+0x00001000u; // 800CC5B8
  goto L_800CCFCC; // 800CC5BC
L_800CC5C0:;
  cmps(c,0,(int32_t)c->r[4],48); // 800CC5C0
  if (!crb(c,2)) { goto L_800CC638; } // 800CC5C4
  c->r[12]=c->r[18]|c->r[18]; // 800CC5C8
  c->r[3]=c->r[19]|c->r[19]; // 800CC5CC
  c->r[4]=0u+0x00000000u; // 800CC5D0
  c->r[5]=0u+0x00000000u; // 800CC5D4
  c->ctr=c->r[12]; // 800CC5D8
  c->r[30]=c->r[30]+0x00000001u; // 800CC5DC
  if (true) { c->lr=0x800CC5E4u; dispatch(c,c->ctr); } // 800CC5E0
  cmps(c,0,(int32_t)c->r[3],0); // 800CC5E4
  c->r[4]=c->r[3]|c->r[3]; // 800CC5E8
  c->r[0]=0u+0x00000000u; // 800CC5EC
  if (crb(c,0)) { goto L_800CC5FC; } // 800CC5F0
  cmps(c,0,(int32_t)c->r[3],256); // 800CC5F4
  if (crb(c,0)) { goto L_800CC600; } // 800CC5F8
L_800CC5FC:;
  c->r[0]=0u+0x00000001u; // 800CC5FC
L_800CC600:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC600
  if (crb(c,2)) { goto L_800CC60C; } // 800CC604
  goto L_800CC618; // 800CC608
L_800CC60C:;
  c->r[5]=R32(c->r[16]+0x00000038u); // 800CC60C
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 800CC610
  c->r[3]=R8(c->r[5]+c->r[3]); // 800CC614
L_800CC618:;
  cmps(c,0,(int32_t)c->r[3],88); // 800CC618
  if (!crb(c,2)) { goto L_800CC630; } // 800CC61C
  c->r[3]=0u+0x00010000u; // 800CC620
  c->r[31]=0u+0x00000001u; // 800CC624
  c->r[17]=c->r[3]+0xFFFF8000u; // 800CC628
  goto L_800CCFCC; // 800CC62C
L_800CC630:;
  c->r[17]=0u+0x00000004u; // 800CC630
  goto L_800CCFCC; // 800CC634
L_800CC638:;
  c->r[17]=0u+0x00000008u; // 800CC638
  goto L_800CCFCC; // 800CC63C
L_800CC640:;
  cmps(c,0,(int32_t)c->r[4],48); // 800CC640
  if (!crb(c,2)) { goto L_800CC66C; } // 800CC644
  c->r[12]=c->r[18]|c->r[18]; // 800CC648
  c->r[3]=c->r[19]|c->r[19]; // 800CC64C
  c->r[4]=0u+0x00000000u; // 800CC650
  c->r[5]=0u+0x00000000u; // 800CC654
  c->ctr=c->r[12]; // 800CC658
  c->r[30]=c->r[30]+0x00000001u; // 800CC65C
  if (true) { c->lr=0x800CC664u; dispatch(c,c->ctr); } // 800CC660
  c->r[4]=c->r[3]|c->r[3]; // 800CC664
  goto L_800CCFCC; // 800CC668
L_800CC66C:;
  c->r[17]=0u+0x00000008u; // 800CC66C
  goto L_800CCFCC; // 800CC670
L_800CC674:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CC674
  c->r[0]=0u+0x00000000u; // 800CC678
  if (crb(c,0)) { goto L_800CC688; } // 800CC67C
  cmps(c,0,(int32_t)c->r[4],256); // 800CC680
  if (crb(c,0)) { goto L_800CC68C; } // 800CC684
L_800CC688:;
  c->r[0]=0u+0x00000001u; // 800CC688
L_800CC68C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC68C
  if (crb(c,2)) { goto L_800CC69C; } // 800CC690
  c->r[0]=0u+0x00000000u; // 800CC694
  goto L_800CC6B0; // 800CC698
L_800CC69C:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CC69C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CC6A0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CC6A4
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CC6A8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CC6AC
L_800CC6B0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC6B0
  if (!crb(c,2)) { goto L_800CC6F0; } // 800CC6B4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[27]); // 800CC6B8
  if (!crb(c,2)) { goto L_800CC6E8; } // 800CC6BC
  c->r[12]=c->r[18]|c->r[18]; // 800CC6C0
  c->r[3]=c->r[19]|c->r[19]; // 800CC6C4
  c->r[17]=0u+0x00000020u; // 800CC6C8
  c->r[4]=0u+0x00000000u; // 800CC6CC
  c->r[5]=0u+0x00000000u; // 800CC6D0
  c->ctr=c->r[12]; // 800CC6D4
  c->r[30]=c->r[30]+0x00000001u; // 800CC6D8
  if (true) { c->lr=0x800CC6E0u; dispatch(c,c->ctr); } // 800CC6DC
  c->r[4]=c->r[3]|c->r[3]; // 800CC6E0
  goto L_800CCFCC; // 800CC6E4
L_800CC6E8:;
  c->r[17]=0u+0x00000040u; // 800CC6E8
  goto L_800CCFCC; // 800CC6EC
L_800CC6F0:;
  c->r[5]=R8(c->r[1]+0x0000005Cu); // 800CC6F0
  cmpu(c,0,c->r[5],0x00000014u); // 800CC6F4
  if (!crb(c,0)) { goto L_800CC714; } // 800CC6F8
  c->r[0]=c->r[1]+0x00000058u; // 800CC6FC
  c->r[3]=c->r[0]+c->r[5]; // 800CC700
  W8(c->r[3]+0x00000005u,c->r[4]); // 800CC704
  c->r[0]=c->r[5]+0x00000001u; // 800CC708
  W8(c->r[1]+0x0000005Cu,c->r[0]); // 800CC70C
  goto L_800CC718; // 800CC710
L_800CC714:;
  c->r[28]=c->r[28]+0x00000001u; // 800CC714
L_800CC718:;
  c->r[12]=c->r[18]|c->r[18]; // 800CC718
  c->r[3]=c->r[19]|c->r[19]; // 800CC71C
  c->r[4]=0u+0x00000000u; // 800CC720
  c->r[5]=0u+0x00000000u; // 800CC724
  c->ctr=c->r[12]; // 800CC728
  c->r[30]=c->r[30]+0x00000001u; // 800CC72C
  if (true) { c->lr=0x800CC734u; dispatch(c,c->ctr); } // 800CC730
  c->r[4]=c->r[3]|c->r[3]; // 800CC734
  goto L_800CCFCC; // 800CC738
L_800CC73C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CC73C
  c->r[0]=0u+0x00000000u; // 800CC740
  if (crb(c,0)) { goto L_800CC750; } // 800CC744
  cmps(c,0,(int32_t)c->r[4],256); // 800CC748
  if (crb(c,0)) { goto L_800CC754; } // 800CC74C
L_800CC750:;
  c->r[0]=0u+0x00000001u; // 800CC750
L_800CC754:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC754
  if (crb(c,2)) { goto L_800CC764; } // 800CC758
  c->r[0]=0u+0x00000000u; // 800CC75C
  goto L_800CC778; // 800CC760
L_800CC764:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CC764
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CC768
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CC76C
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CC770
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CC774
L_800CC778:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC778
  if (!crb(c,2)) { goto L_800CC788; } // 800CC77C
  c->r[17]=0u+0x00001000u; // 800CC780
  goto L_800CCFCC; // 800CC784
L_800CC788:;
  c->r[17]=0u+0x00000020u; // 800CC788
  goto L_800CCFCC; // 800CC78C
L_800CC790:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CC790
  c->r[0]=0u+0x00000000u; // 800CC794
  if (crb(c,0)) { goto L_800CC7A4; } // 800CC798
  cmps(c,0,(int32_t)c->r[4],256); // 800CC79C
  if (crb(c,0)) { goto L_800CC7A8; } // 800CC7A0
L_800CC7A4:;
  c->r[0]=0u+0x00000001u; // 800CC7A4
L_800CC7A8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC7A8
  if (crb(c,2)) { goto L_800CC7B8; } // 800CC7AC
  c->r[0]=0u+0x00000000u; // 800CC7B0
  goto L_800CC7CC; // 800CC7B4
L_800CC7B8:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CC7B8
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CC7BC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CC7C0
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CC7C4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CC7C8
L_800CC7CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC7CC
  if (!crb(c,2)) { goto L_800CC7DC; } // 800CC7D0
  c->r[17]=0u+0x00000040u; // 800CC7D4
  goto L_800CCFCC; // 800CC7D8
L_800CC7DC:;
  c->r[0]=R8(c->r[1]+0x0000005Cu); // 800CC7DC
  cmpu(c,0,c->r[0],0x00000014u); // 800CC7E0
  if (!crb(c,0)) { goto L_800CC814; } // 800CC7E4
  cmps(c,0,(int32_t)c->r[4],48); // 800CC7E8
  if (!crb(c,2)) { goto L_800CC7F8; } // 800CC7EC
  cmps(c,0,(int32_t)c->r[0],0); // 800CC7F0
  if (crb(c,2)) { goto L_800CC810; } // 800CC7F4
L_800CC7F8:;
  c->r[5]=R8(c->r[1]+0x0000005Cu); // 800CC7F8
  c->r[0]=c->r[1]+0x00000058u; // 800CC7FC
  c->r[3]=c->r[0]+c->r[5]; // 800CC800
  c->r[0]=c->r[5]+0x00000001u; // 800CC804
  W8(c->r[3]+0x00000005u,c->r[4]); // 800CC808
  W8(c->r[1]+0x0000005Cu,c->r[0]); // 800CC80C
L_800CC810:;
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 800CC810
L_800CC814:;
  c->r[12]=c->r[18]|c->r[18]; // 800CC814
  c->r[3]=c->r[19]|c->r[19]; // 800CC818
  c->r[4]=0u+0x00000000u; // 800CC81C
  c->r[5]=0u+0x00000000u; // 800CC820
  c->ctr=c->r[12]; // 800CC824
  c->r[30]=c->r[30]+0x00000001u; // 800CC828
  if (true) { c->lr=0x800CC830u; dispatch(c,c->ctr); } // 800CC82C
  c->r[4]=c->r[3]|c->r[3]; // 800CC830
  goto L_800CCFCC; // 800CC834
L_800CC838:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CC838
  c->r[0]=0u+0x00000000u; // 800CC83C
  if (crb(c,0)) { goto L_800CC84C; } // 800CC840
  cmps(c,0,(int32_t)c->r[4],256); // 800CC844
  if (crb(c,0)) { goto L_800CC850; } // 800CC848
L_800CC84C:;
  c->r[0]=0u+0x00000001u; // 800CC84C
L_800CC850:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC850
  if (crb(c,2)) { goto L_800CC860; } // 800CC854
  c->r[0]=c->r[4]|c->r[4]; // 800CC858
  goto L_800CC86C; // 800CC85C
L_800CC860:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CC860
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CC864
  c->r[0]=R8(c->r[3]+c->r[4]); // 800CC868
L_800CC86C:;
  cmps(c,0,(int32_t)c->r[0],69); // 800CC86C
  if (!crb(c,2)) { goto L_800CC89C; } // 800CC870
  c->r[12]=c->r[18]|c->r[18]; // 800CC874
  c->r[3]=c->r[19]|c->r[19]; // 800CC878
  c->r[17]=0u+0x00000080u; // 800CC87C
  c->r[4]=0u+0x00000000u; // 800CC880
  c->r[5]=0u+0x00000000u; // 800CC884
  c->ctr=c->r[12]; // 800CC888
  c->r[30]=c->r[30]+0x00000001u; // 800CC88C
  if (true) { c->lr=0x800CC894u; dispatch(c,c->ctr); } // 800CC890
  c->r[4]=c->r[3]|c->r[3]; // 800CC894
  goto L_800CCFCC; // 800CC898
L_800CC89C:;
  c->r[17]=0u+0x00000800u; // 800CC89C
  goto L_800CCFCC; // 800CC8A0
L_800CC8A4:;
  cmps(c,0,(int32_t)c->r[4],43); // 800CC8A4
  if (!crb(c,2)) { goto L_800CC8D0; } // 800CC8A8
  c->r[12]=c->r[18]|c->r[18]; // 800CC8AC
  c->r[3]=c->r[19]|c->r[19]; // 800CC8B0
  c->r[4]=0u+0x00000000u; // 800CC8B4
  c->r[5]=0u+0x00000000u; // 800CC8B8
  c->ctr=c->r[12]; // 800CC8BC
  c->r[30]=c->r[30]+0x00000001u; // 800CC8C0
  if (true) { c->lr=0x800CC8C8u; dispatch(c,c->ctr); } // 800CC8C4
  c->r[4]=c->r[3]|c->r[3]; // 800CC8C8
  goto L_800CC900; // 800CC8CC
L_800CC8D0:;
  cmps(c,0,(int32_t)c->r[4],45); // 800CC8D0
  if (!crb(c,2)) { goto L_800CC900; } // 800CC8D4
  c->r[12]=c->r[18]|c->r[18]; // 800CC8D8
  c->r[3]=c->r[19]|c->r[19]; // 800CC8DC
  c->r[4]=0u+0x00000000u; // 800CC8E0
  c->r[5]=0u+0x00000000u; // 800CC8E4
  c->ctr=c->r[12]; // 800CC8E8
  c->r[30]=c->r[30]+0x00000001u; // 800CC8EC
  if (true) { c->lr=0x800CC8F4u; dispatch(c,c->ctr); } // 800CC8F0
  c->r[0]=0u+0x00000001u; // 800CC8F4
  c->r[4]=c->r[3]|c->r[3]; // 800CC8F8
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 800CC8FC
L_800CC900:;
  c->r[17]=0u+0x00000100u; // 800CC900
  goto L_800CCFCC; // 800CC904
L_800CC908:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CC908
  c->r[0]=0u+0x00000000u; // 800CC90C
  if (crb(c,0)) { goto L_800CC91C; } // 800CC910
  cmps(c,0,(int32_t)c->r[4],256); // 800CC914
  if (crb(c,0)) { goto L_800CC920; } // 800CC918
L_800CC91C:;
  c->r[0]=0u+0x00000001u; // 800CC91C
L_800CC920:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC920
  if (crb(c,2)) { goto L_800CC930; } // 800CC924
  c->r[0]=0u+0x00000000u; // 800CC928
  goto L_800CC944; // 800CC92C
L_800CC930:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CC930
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CC934
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CC938
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CC93C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CC940
L_800CC944:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC944
  if (!crb(c,2)) { goto L_800CC954; } // 800CC948
  c->r[17]=0u+0x00001000u; // 800CC94C
  goto L_800CCFCC; // 800CC950
L_800CC954:;
  cmps(c,0,(int32_t)c->r[4],48); // 800CC954
  if (!crb(c,2)) { goto L_800CC984; } // 800CC958
  c->r[12]=c->r[18]|c->r[18]; // 800CC95C
  c->r[3]=c->r[19]|c->r[19]; // 800CC960
  c->r[17]=0u+0x00000200u; // 800CC964
  c->r[4]=0u+0x00000000u; // 800CC968
  c->r[5]=0u+0x00000000u; // 800CC96C
  c->ctr=c->r[12]; // 800CC970
  c->r[30]=c->r[30]+0x00000001u; // 800CC974
  if (true) { c->lr=0x800CC97Cu; dispatch(c,c->ctr); } // 800CC978
  c->r[4]=c->r[3]|c->r[3]; // 800CC97C
  goto L_800CCFCC; // 800CC980
L_800CC984:;
  c->r[17]=0u+0x00000400u; // 800CC984
  goto L_800CCFCC; // 800CC988
L_800CC98C:;
  cmps(c,0,(int32_t)c->r[4],48); // 800CC98C
  if (!crb(c,2)) { goto L_800CC9B8; } // 800CC990
  c->r[12]=c->r[18]|c->r[18]; // 800CC994
  c->r[3]=c->r[19]|c->r[19]; // 800CC998
  c->r[4]=0u+0x00000000u; // 800CC99C
  c->r[5]=0u+0x00000000u; // 800CC9A0
  c->ctr=c->r[12]; // 800CC9A4
  c->r[30]=c->r[30]+0x00000001u; // 800CC9A8
  if (true) { c->lr=0x800CC9B0u; dispatch(c,c->ctr); } // 800CC9AC
  c->r[4]=c->r[3]|c->r[3]; // 800CC9B0
  goto L_800CCFCC; // 800CC9B4
L_800CC9B8:;
  c->r[17]=0u+0x00000400u; // 800CC9B8
  goto L_800CCFCC; // 800CC9BC
L_800CC9C0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CC9C0
  c->r[0]=0u+0x00000000u; // 800CC9C4
  if (crb(c,0)) { goto L_800CC9D4; } // 800CC9C8
  cmps(c,0,(int32_t)c->r[4],256); // 800CC9CC
  if (crb(c,0)) { goto L_800CC9D8; } // 800CC9D0
L_800CC9D4:;
  c->r[0]=0u+0x00000001u; // 800CC9D4
L_800CC9D8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC9D8
  if (crb(c,2)) { goto L_800CC9E8; } // 800CC9DC
  c->r[0]=0u+0x00000000u; // 800CC9E0
  goto L_800CC9FC; // 800CC9E4
L_800CC9E8:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CC9E8
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CC9EC
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CC9F0
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CC9F4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CC9F8
L_800CC9FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CC9FC
  if (!crb(c,2)) { goto L_800CCA0C; } // 800CCA00
  c->r[17]=0u+0x00000800u; // 800CCA04
  goto L_800CCFCC; // 800CCA08
L_800CCA0C:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)10); // 800CCA0C
  c->r[3]=c->r[4]+c->r[0]; // 800CCA10
  c->r[29]=c->r[3]+0xFFFFFFD0u; // 800CCA14
  cmps(c,0,(int32_t)c->r[29],32767); // 800CCA18
  if (!crb(c,1)) { goto L_800CCA28; } // 800CCA1C
  c->r[0]=0u+0x00000001u; // 800CCA20
  W32(c->r[20]+0x00000000u,c->r[0]); // 800CCA24
L_800CCA28:;
  c->r[12]=c->r[18]|c->r[18]; // 800CCA28
  c->r[3]=c->r[19]|c->r[19]; // 800CCA2C
  c->r[4]=0u+0x00000000u; // 800CCA30
  c->r[5]=0u+0x00000000u; // 800CCA34
  c->ctr=c->r[12]; // 800CCA38
  c->r[30]=c->r[30]+0x00000001u; // 800CCA3C
  if (true) { c->lr=0x800CCA44u; dispatch(c,c->ctr); } // 800CCA40
  c->r[4]=c->r[3]|c->r[3]; // 800CCA44
  goto L_800CCFCC; // 800CCA48
L_800CCA4C:;
  cmps(c,0,(int32_t)c->r[31],16); // 800CCA4C
  if (crb(c,2)) { goto L_800CCDC4; } // 800CCA50
  if (!crb(c,0)) { goto L_800CCA88; } // 800CCA54
  cmps(c,0,(int32_t)c->r[31],4); // 800CCA58
  if (crb(c,2)) { goto L_800CCB30; } // 800CCA5C
  if (!crb(c,0)) { goto L_800CCA7C; } // 800CCA60
  cmps(c,0,(int32_t)c->r[31],2); // 800CCA64
  if (crb(c,2)) { goto L_800CCAFC; } // 800CCA68
  if (!crb(c,0)) { goto L_800CCFCC; } // 800CCA6C
  cmps(c,0,(int32_t)c->r[31],1); // 800CCA70
  if (!crb(c,0)) { goto L_800CCAB8; } // 800CCA74
  goto L_800CCFCC; // 800CCA78
L_800CCA7C:;
  cmps(c,0,(int32_t)c->r[31],8); // 800CCA7C
  if (crb(c,2)) { goto L_800CCC94; } // 800CCA80
  goto L_800CCFCC; // 800CCA84
L_800CCA88:;
  cmps(c,0,(int32_t)c->r[31],128); // 800CCA88
  if (crb(c,2)) { goto L_800CCF10; } // 800CCA8C
  if (!crb(c,0)) { goto L_800CCAAC; } // 800CCA90
  cmps(c,0,(int32_t)c->r[31],64); // 800CCA94
  if (crb(c,2)) { goto L_800CCE8C; } // 800CCA98
  if (!crb(c,0)) { goto L_800CCFCC; } // 800CCA9C
  cmps(c,0,(int32_t)c->r[31],32); // 800CCAA0
  if (crb(c,2)) { goto L_800CCE30; } // 800CCAA4
  goto L_800CCFCC; // 800CCAA8
L_800CCAAC:;
  cmps(c,0,(int32_t)c->r[31],256); // 800CCAAC
  if (crb(c,2)) { goto L_800CCF44; } // 800CCAB0
  goto L_800CCFCC; // 800CCAB4
L_800CCAB8:;
  c->r[3]=c->r[1]+0x00000020u; // 800CCAB8
  c->r[4]=0u+0x00000000u; // 800CCABC
  c->r[5]=0u+0x00000008u; // 800CCAC0
  c->lr=0x800CCAC8u; f_8000443C(c); // 800CCAC4
  c->r[12]=c->r[18]|c->r[18]; // 800CCAC8
  c->r[3]=c->r[19]|c->r[19]; // 800CCACC
  c->r[26]=c->r[1]+0x00000020u; // 800CCAD0
  c->r[23]=0u+0x00000000u; // 800CCAD4
  c->r[24]=0u+0x00000000u; // 800CCAD8
  c->r[31]=0u+0x00000002u; // 800CCADC
  c->r[4]=0u+0x00000000u; // 800CCAE0
  c->r[5]=0u+0x00000000u; // 800CCAE4
  c->ctr=c->r[12]; // 800CCAE8
  c->r[30]=c->r[30]+0x00000001u; // 800CCAEC
  if (true) { c->lr=0x800CCAF4u; dispatch(c,c->ctr); } // 800CCAF0
  c->r[4]=c->r[3]|c->r[3]; // 800CCAF4
  goto L_800CCFCC; // 800CCAF8
L_800CCAFC:;
  cmps(c,0,(int32_t)c->r[4],48); // 800CCAFC
  if (!crb(c,2)) { goto L_800CCB28; } // 800CCB00
  c->r[12]=c->r[18]|c->r[18]; // 800CCB04
  c->r[3]=c->r[19]|c->r[19]; // 800CCB08
  c->r[4]=0u+0x00000000u; // 800CCB0C
  c->r[5]=0u+0x00000000u; // 800CCB10
  c->ctr=c->r[12]; // 800CCB14
  c->r[30]=c->r[30]+0x00000001u; // 800CCB18
  if (true) { c->lr=0x800CCB20u; dispatch(c,c->ctr); } // 800CCB1C
  c->r[4]=c->r[3]|c->r[3]; // 800CCB20
  goto L_800CCFCC; // 800CCB24
L_800CCB28:;
  c->r[31]=0u+0x00000004u; // 800CCB28
  goto L_800CCFCC; // 800CCB2C
L_800CCB30:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CCB30
  c->r[0]=0u+0x00000000u; // 800CCB34
  if (crb(c,0)) { goto L_800CCB44; } // 800CCB38
  cmps(c,0,(int32_t)c->r[4],256); // 800CCB3C
  if (crb(c,0)) { goto L_800CCB48; } // 800CCB40
L_800CCB44:;
  c->r[0]=0u+0x00000001u; // 800CCB44
L_800CCB48:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CCB48
  if (crb(c,2)) { goto L_800CCB58; } // 800CCB4C
  c->r[0]=0u+0x00000000u; // 800CCB50
  goto L_800CCB6C; // 800CCB54
L_800CCB58:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CCB58
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CCB5C
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CCB60
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CCB64
  c->r[0]=rotl(c->r[0],0)&0x00000400u; // 800CCB68
L_800CCB6C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CCB6C
  if (!crb(c,2)) { goto L_800CCBAC; } // 800CCB70
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[27]); // 800CCB74
  if (!crb(c,2)) { goto L_800CCBA4; } // 800CCB78
  c->r[12]=c->r[18]|c->r[18]; // 800CCB7C
  c->r[3]=c->r[19]|c->r[19]; // 800CCB80
  c->r[31]=0u+0x00000008u; // 800CCB84
  c->r[4]=0u+0x00000000u; // 800CCB88
  c->r[5]=0u+0x00000000u; // 800CCB8C
  c->ctr=c->r[12]; // 800CCB90
  c->r[30]=c->r[30]+0x00000001u; // 800CCB94
  if (true) { c->lr=0x800CCB9Cu; dispatch(c,c->ctr); } // 800CCB98
  c->r[4]=c->r[3]|c->r[3]; // 800CCB9C
  goto L_800CCFCC; // 800CCBA0
L_800CCBA4:;
  c->r[31]=0u+0x00000010u; // 800CCBA4
  goto L_800CCFCC; // 800CCBA8
L_800CCBAC:;
  c->r[0]=0u+0x0000000Eu; // 800CCBAC
  cmpu(c,0,c->r[23],c->r[0]); // 800CCBB0
  if (!crb(c,0)) { goto L_800CCC70; } // 800CCBB4
  c->r[0]=rotl(c->r[24],1)&0x00000001u; // 800CCBB8
  cmps(c,0,(int32_t)c->r[4],0); // 800CCBBC
  c->r[0]=c->r[0]+c->r[24]; // 800CCBC0
  c->r[3]=0u+0x00000000u; // 800CCBC4
  c->r[0]=sraw(c,c->r[0],1); // 800CCBC8
  c->r[23]=c->r[23]+0x00000001u; // 800CCBCC
  c->r[0]=R8(c->r[26]+c->r[0]); // 800CCBD0
  if (crb(c,0)) { goto L_800CCBE0; } // 800CCBD4
  cmps(c,0,(int32_t)c->r[4],256); // 800CCBD8
  if (crb(c,0)) { goto L_800CCBE4; } // 800CCBDC
L_800CCBE0:;
  c->r[3]=0u+0x00000001u; // 800CCBE0
L_800CCBE4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CCBE4
  if (crb(c,2)) { goto L_800CCBF0; } // 800CCBE8
  goto L_800CCBFC; // 800CCBEC
L_800CCBF0:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CCBF0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CCBF4
  c->r[4]=R8(c->r[3]+c->r[4]); // 800CCBF8
L_800CCBFC:;
  cmps(c,0,(int32_t)c->r[4],65); // 800CCBFC
  c->r[6]=c->r[4]+0xFFFFFFD0u; // 800CCC00
  if (crb(c,0)) { goto L_800CCC0C; } // 800CCC04
  c->r[6]=c->r[4]+0xFFFFFFC9u; // 800CCC08
L_800CCC0C:;
  c->r[5]=rotl(c->r[24],1)&0x00000001u; // 800CCC0C
  c->r[3]=rotl(c->r[24],0)&0x00000001u; // 800CCC10
  c->r[4]=c->r[3]^c->r[5]; // 800CCC14
  c->r[3]=rotl(c->r[6],4)&0x000000F0u; // 800CCC18
  c->r[4]=c->r[4]-c->r[5]; cr0(c,c->r[4]); // 800CCC1C
  c->r[3]=c->r[0]|c->r[3]; // 800CCC20
  c->r[4]=rotl(c->r[6],0)&0x000000FFu; // 800CCC24
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 800CCC28
  if (crb(c,2)) { goto L_800CCC38; } // 800CCC2C
  c->r[0]=c->r[0]|c->r[4]; // 800CCC30
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800CCC34
L_800CCC38:;
  c->r[0]=rotl(c->r[24],1)&0x00000001u; // 800CCC38
  c->r[12]=c->r[18]|c->r[18]; // 800CCC3C
  c->r[0]=c->r[0]+c->r[24]; // 800CCC40
  c->r[3]=c->r[19]|c->r[19]; // 800CCC44
  c->r[0]=sraw(c,c->r[0],1); // 800CCC48
  c->r[4]=0u+0x00000000u; // 800CCC4C
  W8(c->r[26]+c->r[0],c->r[5]); // 800CCC50
  c->r[5]=0u+0x00000000u; // 800CCC54
  c->ctr=c->r[12]; // 800CCC58
  c->r[24]=c->r[24]+0x00000001u; // 800CCC5C
  c->r[30]=c->r[30]+0x00000001u; // 800CCC60
  if (true) { c->lr=0x800CCC68u; dispatch(c,c->ctr); } // 800CCC64
  c->r[4]=c->r[3]|c->r[3]; // 800CCC68
  goto L_800CCFCC; // 800CCC6C
L_800CCC70:;
  c->r[12]=c->r[18]|c->r[18]; // 800CCC70
  c->r[3]=c->r[19]|c->r[19]; // 800CCC74
  c->r[4]=0u+0x00000000u; // 800CCC78
  c->r[5]=0u+0x00000000u; // 800CCC7C
  c->ctr=c->r[12]; // 800CCC80
  c->r[30]=c->r[30]+0x00000001u; // 800CCC84
  if (true) { c->lr=0x800CCC8Cu; dispatch(c,c->ctr); } // 800CCC88
  c->r[4]=c->r[3]|c->r[3]; // 800CCC8C
  goto L_800CCFCC; // 800CCC90
L_800CCC94:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CCC94
  c->r[0]=0u+0x00000000u; // 800CCC98
  if (crb(c,0)) { goto L_800CCCA8; } // 800CCC9C
  cmps(c,0,(int32_t)c->r[4],256); // 800CCCA0
  if (crb(c,0)) { goto L_800CCCAC; } // 800CCCA4
L_800CCCA8:;
  c->r[0]=0u+0x00000001u; // 800CCCA8
L_800CCCAC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CCCAC
  if (crb(c,2)) { goto L_800CCCBC; } // 800CCCB0
  c->r[0]=0u+0x00000000u; // 800CCCB4
  goto L_800CCCD0; // 800CCCB8
L_800CCCBC:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CCCBC
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CCCC0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CCCC4
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CCCC8
  c->r[0]=rotl(c->r[0],0)&0x00000400u; // 800CCCCC
L_800CCCD0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CCCD0
  if (!crb(c,2)) { goto L_800CCCE0; } // 800CCCD4
  c->r[31]=0u+0x00000010u; // 800CCCD8
  goto L_800CCFCC; // 800CCCDC
L_800CCCE0:;
  c->r[0]=0u+0x0000000Eu; // 800CCCE0
  cmpu(c,0,c->r[23],c->r[0]); // 800CCCE4
  if (!crb(c,0)) { goto L_800CCDA0; } // 800CCCE8
  c->r[0]=rotl(c->r[24],1)&0x00000001u; // 800CCCEC
  cmps(c,0,(int32_t)c->r[4],0); // 800CCCF0
  c->r[0]=c->r[0]+c->r[24]; // 800CCCF4
  c->r[3]=0u+0x00000000u; // 800CCCF8
  c->r[0]=sraw(c,c->r[0],1); // 800CCCFC
  c->r[0]=R8(c->r[26]+c->r[0]); // 800CCD00
  if (crb(c,0)) { goto L_800CCD10; } // 800CCD04
  cmps(c,0,(int32_t)c->r[4],256); // 800CCD08
  if (crb(c,0)) { goto L_800CCD14; } // 800CCD0C
L_800CCD10:;
  c->r[3]=0u+0x00000001u; // 800CCD10
L_800CCD14:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CCD14
  if (crb(c,2)) { goto L_800CCD20; } // 800CCD18
  goto L_800CCD2C; // 800CCD1C
L_800CCD20:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CCD20
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CCD24
  c->r[4]=R8(c->r[3]+c->r[4]); // 800CCD28
L_800CCD2C:;
  cmps(c,0,(int32_t)c->r[4],65); // 800CCD2C
  c->r[6]=c->r[4]+0xFFFFFFD0u; // 800CCD30
  if (crb(c,0)) { goto L_800CCD3C; } // 800CCD34
  c->r[6]=c->r[4]+0xFFFFFFC9u; // 800CCD38
L_800CCD3C:;
  c->r[5]=rotl(c->r[24],1)&0x00000001u; // 800CCD3C
  c->r[3]=rotl(c->r[24],0)&0x00000001u; // 800CCD40
  c->r[4]=c->r[3]^c->r[5]; // 800CCD44
  c->r[3]=rotl(c->r[6],4)&0x000000F0u; // 800CCD48
  c->r[4]=c->r[4]-c->r[5]; cr0(c,c->r[4]); // 800CCD4C
  c->r[3]=c->r[0]|c->r[3]; // 800CCD50
  c->r[4]=rotl(c->r[6],0)&0x000000FFu; // 800CCD54
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 800CCD58
  if (crb(c,2)) { goto L_800CCD68; } // 800CCD5C
  c->r[0]=c->r[0]|c->r[4]; // 800CCD60
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800CCD64
L_800CCD68:;
  c->r[0]=rotl(c->r[24],1)&0x00000001u; // 800CCD68
  c->r[12]=c->r[18]|c->r[18]; // 800CCD6C
  c->r[0]=c->r[0]+c->r[24]; // 800CCD70
  c->r[3]=c->r[19]|c->r[19]; // 800CCD74
  c->r[0]=sraw(c,c->r[0],1); // 800CCD78
  c->r[4]=0u+0x00000000u; // 800CCD7C
  W8(c->r[26]+c->r[0],c->r[5]); // 800CCD80
  c->r[5]=0u+0x00000000u; // 800CCD84
  c->ctr=c->r[12]; // 800CCD88
  c->r[24]=c->r[24]+0x00000001u; // 800CCD8C
  c->r[30]=c->r[30]+0x00000001u; // 800CCD90
  if (true) { c->lr=0x800CCD98u; dispatch(c,c->ctr); } // 800CCD94
  c->r[4]=c->r[3]|c->r[3]; // 800CCD98
  goto L_800CCFCC; // 800CCD9C
L_800CCDA0:;
  c->r[12]=c->r[18]|c->r[18]; // 800CCDA0
  c->r[3]=c->r[19]|c->r[19]; // 800CCDA4
  c->r[4]=0u+0x00000000u; // 800CCDA8
  c->r[5]=0u+0x00000000u; // 800CCDAC
  c->ctr=c->r[12]; // 800CCDB0
  c->r[30]=c->r[30]+0x00000001u; // 800CCDB4
  if (true) { c->lr=0x800CCDBCu; dispatch(c,c->ctr); } // 800CCDB8
  c->r[4]=c->r[3]|c->r[3]; // 800CCDBC
  goto L_800CCFCC; // 800CCDC0
L_800CCDC4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CCDC4
  c->r[0]=0u+0x00000000u; // 800CCDC8
  if (crb(c,0)) { goto L_800CCDD8; } // 800CCDCC
  cmps(c,0,(int32_t)c->r[4],256); // 800CCDD0
  if (crb(c,0)) { goto L_800CCDDC; } // 800CCDD4
L_800CCDD8:;
  c->r[0]=0u+0x00000001u; // 800CCDD8
L_800CCDDC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CCDDC
  if (crb(c,2)) { goto L_800CCDEC; } // 800CCDE0
  c->r[0]=c->r[4]|c->r[4]; // 800CCDE4
  goto L_800CCDF8; // 800CCDE8
L_800CCDEC:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CCDEC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CCDF0
  c->r[0]=R8(c->r[3]+c->r[4]); // 800CCDF4
L_800CCDF8:;
  cmps(c,0,(int32_t)c->r[0],80); // 800CCDF8
  if (!crb(c,2)) { goto L_800CCE28; } // 800CCDFC
  c->r[12]=c->r[18]|c->r[18]; // 800CCE00
  c->r[3]=c->r[19]|c->r[19]; // 800CCE04
  c->r[31]=0u+0x00000020u; // 800CCE08
  c->r[4]=0u+0x00000000u; // 800CCE0C
  c->r[5]=0u+0x00000000u; // 800CCE10
  c->ctr=c->r[12]; // 800CCE14
  c->r[30]=c->r[30]+0x00000001u; // 800CCE18
  if (true) { c->lr=0x800CCE20u; dispatch(c,c->ctr); } // 800CCE1C
  c->r[4]=c->r[3]|c->r[3]; // 800CCE20
  goto L_800CCFCC; // 800CCE24
L_800CCE28:;
  c->r[17]=0u+0x00000800u; // 800CCE28
  goto L_800CCFCC; // 800CCE2C
L_800CCE30:;
  cmps(c,0,(int32_t)c->r[4],45); // 800CCE30
  if (!crb(c,2)) { goto L_800CCE44; } // 800CCE34
  c->r[0]=0u+0x00000001u; // 800CCE38
  W32(c->r[1]+0x00000084u,c->r[0]); // 800CCE3C
  goto L_800CCE64; // 800CCE40
L_800CCE44:;
  cmps(c,0,(int32_t)c->r[4],43); // 800CCE44
  if (crb(c,2)) { goto L_800CCE64; } // 800CCE48
  c->r[12]=c->r[18]|c->r[18]; // 800CCE4C
  c->r[3]=c->r[19]|c->r[19]; // 800CCE50
  c->r[5]=0u+0x00000001u; // 800CCE54
  c->ctr=c->r[12]; // 800CCE58
  if (true) { c->lr=0x800CCE60u; dispatch(c,c->ctr); } // 800CCE5C
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 800CCE60
L_800CCE64:;
  c->r[12]=c->r[18]|c->r[18]; // 800CCE64
  c->r[3]=c->r[19]|c->r[19]; // 800CCE68
  c->r[31]=0u+0x00000040u; // 800CCE6C
  c->r[4]=0u+0x00000000u; // 800CCE70
  c->r[5]=0u+0x00000000u; // 800CCE74
  c->ctr=c->r[12]; // 800CCE78
  c->r[30]=c->r[30]+0x00000001u; // 800CCE7C
  if (true) { c->lr=0x800CCE84u; dispatch(c,c->ctr); } // 800CCE80
  c->r[4]=c->r[3]|c->r[3]; // 800CCE84
  goto L_800CCFCC; // 800CCE88
L_800CCE8C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CCE8C
  c->r[0]=0u+0x00000000u; // 800CCE90
  if (crb(c,0)) { goto L_800CCEA0; } // 800CCE94
  cmps(c,0,(int32_t)c->r[4],256); // 800CCE98
  if (crb(c,0)) { goto L_800CCEA4; } // 800CCE9C
L_800CCEA0:;
  c->r[0]=0u+0x00000001u; // 800CCEA0
L_800CCEA4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CCEA4
  if (crb(c,2)) { goto L_800CCEB4; } // 800CCEA8
  c->r[0]=0u+0x00000000u; // 800CCEAC
  goto L_800CCEC8; // 800CCEB0
L_800CCEB4:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CCEB4
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CCEB8
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CCEBC
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CCEC0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CCEC4
L_800CCEC8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CCEC8
  if (!crb(c,2)) { goto L_800CCED8; } // 800CCECC
  c->r[17]=0u+0x00001000u; // 800CCED0
  goto L_800CCFCC; // 800CCED4
L_800CCED8:;
  cmps(c,0,(int32_t)c->r[4],48); // 800CCED8
  if (!crb(c,2)) { goto L_800CCF08; } // 800CCEDC
  c->r[12]=c->r[18]|c->r[18]; // 800CCEE0
  c->r[3]=c->r[19]|c->r[19]; // 800CCEE4
  c->r[31]=0u+0x00000080u; // 800CCEE8
  c->r[4]=0u+0x00000000u; // 800CCEEC
  c->r[5]=0u+0x00000000u; // 800CCEF0
  c->ctr=c->r[12]; // 800CCEF4
  c->r[30]=c->r[30]+0x00000001u; // 800CCEF8
  if (true) { c->lr=0x800CCF00u; dispatch(c,c->ctr); } // 800CCEFC
  c->r[4]=c->r[3]|c->r[3]; // 800CCF00
  goto L_800CCFCC; // 800CCF04
L_800CCF08:;
  c->r[31]=0u+0x00000100u; // 800CCF08
  goto L_800CCFCC; // 800CCF0C
L_800CCF10:;
  cmps(c,0,(int32_t)c->r[4],48); // 800CCF10
  if (!crb(c,2)) { goto L_800CCF3C; } // 800CCF14
  c->r[12]=c->r[18]|c->r[18]; // 800CCF18
  c->r[3]=c->r[19]|c->r[19]; // 800CCF1C
  c->r[4]=0u+0x00000000u; // 800CCF20
  c->r[5]=0u+0x00000000u; // 800CCF24
  c->ctr=c->r[12]; // 800CCF28
  c->r[30]=c->r[30]+0x00000001u; // 800CCF2C
  if (true) { c->lr=0x800CCF34u; dispatch(c,c->ctr); } // 800CCF30
  c->r[4]=c->r[3]|c->r[3]; // 800CCF34
  goto L_800CCFCC; // 800CCF38
L_800CCF3C:;
  c->r[31]=0u+0x00000100u; // 800CCF3C
  goto L_800CCFCC; // 800CCF40
L_800CCF44:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CCF44
  c->r[0]=0u+0x00000000u; // 800CCF48
  if (crb(c,0)) { goto L_800CCF58; } // 800CCF4C
  cmps(c,0,(int32_t)c->r[4],256); // 800CCF50
  if (crb(c,0)) { goto L_800CCF5C; } // 800CCF54
L_800CCF58:;
  c->r[0]=0u+0x00000001u; // 800CCF58
L_800CCF5C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CCF5C
  if (crb(c,2)) { goto L_800CCF6C; } // 800CCF60
  c->r[0]=0u+0x00000000u; // 800CCF64
  goto L_800CCF80; // 800CCF68
L_800CCF6C:;
  c->r[3]=R32(c->r[16]+0x00000038u); // 800CCF6C
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CCF70
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CCF74
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CCF78
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CCF7C
L_800CCF80:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CCF80
  if (!crb(c,2)) { goto L_800CCF90; } // 800CCF84
  c->r[17]=0u+0x00000800u; // 800CCF88
  goto L_800CCFCC; // 800CCF8C
L_800CCF90:;
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)10); // 800CCF90
  cmps(c,0,(int32_t)c->r[29],32767); // 800CCF94
  c->r[3]=c->r[4]+c->r[0]; // 800CCF98
  c->r[25]=c->r[3]+0xFFFFFFD0u; // 800CCF9C
  if (!crb(c,1)) { goto L_800CCFAC; } // 800CCFA0
  c->r[0]=0u+0x00000001u; // 800CCFA4
  W32(c->r[20]+0x00000000u,c->r[0]); // 800CCFA8
L_800CCFAC:;
  c->r[12]=c->r[18]|c->r[18]; // 800CCFAC
  c->r[3]=c->r[19]|c->r[19]; // 800CCFB0
  c->r[4]=0u+0x00000000u; // 800CCFB4
  c->r[5]=0u+0x00000000u; // 800CCFB8
  c->ctr=c->r[12]; // 800CCFBC
  c->r[30]=c->r[30]+0x00000001u; // 800CCFC0
  if (true) { c->lr=0x800CCFC8u; dispatch(c,c->ctr); } // 800CCFC4
  c->r[4]=c->r[3]|c->r[3]; // 800CCFC8
L_800CCFCC:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800CCFCC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800CCFD0
  if (crb(c,1)) { goto L_800CCFE8; } // 800CCFD4
  cmps(c,0,(int32_t)c->r[4],-1); // 800CCFD8
  if (crb(c,2)) { goto L_800CCFE8; } // 800CCFDC
  c->r[0]=rotl(c->r[17],0)&0x00001800u; cr0(c,c->r[0]); // 800CCFE0
  if (crb(c,2)) { IRQCHK(c); goto L_800CC000; } // 800CCFE4
L_800CCFE8:;
  c->r[0]=c->r[17]+0x00000000u; // 800CCFE8
  cmpu(c,0,c->r[0],0x00008000u); // 800CCFEC
  if (crb(c,2)) { goto L_800CD004; } // 800CCFF0
  c->r[0]=c->r[17]&0x00000E2Cu; cr0(c,c->r[0]); // 800CCFF4
  c->r[0]=cntlz(c->r[0]); // 800CCFF8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CCFFC
  goto L_800CD020; // 800CD000
L_800CD004:;
  c->r[0]=c->r[30]+0xFFFFFFFFu; // 800CD004
  c->r[3]=0u+0x00000000u; // 800CD008
  cmps(c,0,(int32_t)c->r[0],2); // 800CD00C
  if (!crb(c,1)) { goto L_800CD01C; } // 800CD010
  c->r[0]=c->r[31]&0x0000018Eu; cr0(c,c->r[0]); // 800CD014
  if (!crb(c,2)) { goto L_800CD020; } // 800CD018
L_800CD01C:;
  c->r[3]=0u+0x00000001u; // 800CD01C
L_800CD020:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CD020
  if (crb(c,2)) { goto L_800CD038; } // 800CD024
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800CD028
  c->r[0]=0u+0x00000000u; // 800CD02C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CD030
  goto L_800CD048; // 800CD034
L_800CD038:;
  c->r[3]=c->r[30]+c->r[14]; // 800CD038
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CD03C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800CD040
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CD044
L_800CD048:;
  c->r[12]=c->r[18]|c->r[18]; // 800CD048
  c->r[3]=c->r[19]|c->r[19]; // 800CD04C
  c->r[5]=0u+0x00000001u; // 800CD050
  c->ctr=c->r[12]; // 800CD054
  if (true) { c->lr=0x800CD05Cu; dispatch(c,c->ctr); } // 800CD058
  cmps(c,0,(int32_t)c->r[31],0); // 800CD05C
  if (!crb(c,2)) { goto L_800CD190; } // 800CD060
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 800CD064
  cmps(c,0,(int32_t)c->r[0],0); // 800CD068
  if (crb(c,2)) { goto L_800CD074; } // 800CD06C
  c->r[29]=0u-c->r[29]; // 800CD070
L_800CD074:;
  c->r[3]=R8(c->r[1]+0x0000005Cu); // 800CD074
  c->r[4]=c->r[1]+0x0000005Du; // 800CD078
  c->r[4]=c->r[4]+c->r[3]; // 800CD07C
  goto L_800CD088; // 800CD080
L_800CD084:;
  c->r[28]=c->r[28]+0x00000001u; // 800CD084
L_800CD088:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CD088
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800CD08C
  if (crb(c,2)) { goto L_800CD0A0; } // 800CD090
  {uint32_t ea=c->r[4]+0xFFFFFFFFu; c->r[0]=R8(ea); c->r[4]=ea;} // 800CD094
  cmpu(c,0,c->r[0],0x00000030u); // 800CD098
  if (crb(c,2)) { IRQCHK(c); goto L_800CD084; } // 800CD09C
L_800CD0A0:;
  c->r[0]=c->r[3]+0x00000001u; // 800CD0A0
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[4]); // 800CD0A4
  W8(c->r[1]+0x0000005Cu,c->r[0]); // 800CD0A8
  if (!crb(c,2)) { goto L_800CD0C4; } // 800CD0AC
  c->r[3]=c->r[1]+0x0000005Du; // 800CD0B0
  c->r[0]=0u+0x00000030u; // 800CD0B4
  W8(c->r[3]+c->r[4],c->r[0]); // 800CD0B8
  c->r[0]=c->r[4]+0x00000001u; // 800CD0BC
  W8(c->r[1]+0x0000005Cu,c->r[0]); // 800CD0C0
L_800CD0C4:;
  c->r[29]=c->r[29]+c->r[28]; // 800CD0C4
  cmps(c,0,(int32_t)c->r[29],-32768); // 800CD0C8
  if (crb(c,0)) { goto L_800CD0D8; } // 800CD0CC
  cmps(c,0,(int32_t)c->r[29],32767); // 800CD0D0
  if (!crb(c,1)) { goto L_800CD0E0; } // 800CD0D4
L_800CD0D8:;
  c->r[0]=0u+0x00000001u; // 800CD0D8
  W32(c->r[20]+0x00000000u,c->r[0]); // 800CD0DC
L_800CD0E0:;
  c->r[0]=R32(c->r[20]+0x00000000u); // 800CD0E0
  cmps(c,0,(int32_t)c->r[0],0); // 800CD0E4
  if (crb(c,2)) { goto L_800CD128; } // 800CD0E8
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 800CD0EC
  cmps(c,0,(int32_t)c->r[0],0); // 800CD0F0
  if (crb(c,2)) { goto L_800CD100; } // 800CD0F4
  {uint32_t ea=c->r[2]+0xFFFF91D8u; c->f[1]=RF64(ea);} // 800CD0F8
  goto L_800CD308; // 800CD0FC
L_800CD100:;
  c->r[0]=R32(c->r[1]+0x00000090u); // 800CD100
  cmps(c,0,(int32_t)c->r[0],0); // 800CD104
  if (crb(c,2)) { goto L_800CD11C; } // 800CD108
  c->r[3]=0u+0x803C0000u; // 800CD10C
  {uint32_t ea=c->r[3]+0x00007718u; c->f[0]=RF64(ea);} // 800CD110
  c->f[1]=-c->f[0]; // 800CD114
  goto L_800CD308; // 800CD118
L_800CD11C:;
  c->r[3]=0u+0x803C0000u; // 800CD11C
  {uint32_t ea=c->r[3]+0x00007718u; c->f[1]=RF64(ea);} // 800CD120
  goto L_800CD308; // 800CD124
L_800CD128:;
  W16(c->r[1]+0x0000005Au,c->r[29]); // 800CD128
  c->r[3]=c->r[1]+0x00000058u; // 800CD12C
  c->lr=0x800CD134u; f_800C6118(c); // 800CD130
  {uint32_t ea=c->r[2]+0xFFFF91D8u; c->f[0]=RF64(ea);} // 800CD134
  fcmp(c,0,c->f[0],c->f[1]); // 800CD138
  if (crb(c,2)) { goto L_800CD158; } // 800CD13C
  {uint32_t ea=c->r[2]+0xFFFF91E0u; c->f[0]=RF64(ea);} // 800CD140
  fcmp(c,0,c->f[1],c->f[0]); // 800CD144
  if (!crb(c,0)) { goto L_800CD158; } // 800CD148
  c->r[0]=0u+0x00000001u; // 800CD14C
  W32(c->r[20]+0x00000000u,c->r[0]); // 800CD150
  goto L_800CD174; // 800CD154
L_800CD158:;
  {uint32_t ea=c->r[2]+0xFFFF91E8u; c->f[0]=RF64(ea);} // 800CD158
  fcmp(c,0,c->f[1],c->f[0]); // 800CD15C
  if (!crb(c,1)) { goto L_800CD174; } // 800CD160
  c->r[0]=0u+0x00000001u; // 800CD164
  c->r[3]=0u+0x803C0000u; // 800CD168
  W32(c->r[20]+0x00000000u,c->r[0]); // 800CD16C
  {uint32_t ea=c->r[3]+0x00007718u; c->f[1]=RF64(ea);} // 800CD170
L_800CD174:;
  c->r[0]=R32(c->r[1]+0x00000090u); // 800CD174
  cmps(c,0,(int32_t)c->r[0],0); // 800CD178
  if (crb(c,2)) { goto L_800CD308; } // 800CD17C
  c->r[0]=c->r[17]&0x00000E2Cu; cr0(c,c->r[0]); // 800CD180
  if (crb(c,2)) { goto L_800CD308; } // 800CD184
  c->f[1]=-c->f[1]; // 800CD188
  goto L_800CD308; // 800CD18C
L_800CD190:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 800CD190
  c->r[3]=c->r[1]+0x00000010u; // 800CD194
  cmps(c,0,(int32_t)c->r[0],0); // 800CD198
  if (crb(c,2)) { goto L_800CD1A4; } // 800CD19C
  c->r[25]=0u-c->r[25]; // 800CD1A0
L_800CD1A4:;
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800CD1A4
  c->r[5]=R8(c->r[1]+0x00000020u); // 800CD1A8
  c->r[25]=c->r[25]+c->r[0]; // 800CD1AC
  c->r[6]=0u+0x00000000u; // 800CD1B0
  c->r[4]=0u+0x00000080u; // 800CD1B4
  goto L_800CD1C4; // 800CD1B8
L_800CD1BC:;
  c->r[6]=c->r[6]+0x00000001u; // 800CD1BC
  c->r[25]=c->r[25]+0xFFFFFFFFu; // 800CD1C0
L_800CD1C4:;
  cmpu(c,0,c->r[6],0x00000004u); // 800CD1C4
  if (!crb(c,0)) { goto L_800CD1D8; } // 800CD1C8
  c->r[0]=sraw(c,c->r[4],(c->r[6])&63); // 800CD1CC
  c->r[0]=c->r[5]&c->r[0]; cr0(c,c->r[0]); // 800CD1D0
  if (crb(c,2)) { IRQCHK(c); goto L_800CD1BC; } // 800CD1D4
L_800CD1D8:;
  c->r[5]=addc(c,c->r[6],0x00000001u,0); cr0(c,c->r[5]); // 800CD1D8
  if (crb(c,2)) { goto L_800CD228; } // 800CD1DC
  c->r[26]=c->r[1]+0x00000027u; // 800CD1E0
  c->r[4]=c->r[1]+0x00000020u; // 800CD1E4
  cmpu(c,0,c->r[26],c->r[4]); // 800CD1E8
  c->r[7]=0u+0x00000000u; // 800CD1EC
  if (crb(c,0)) { goto L_800CD228; } // 800CD1F0
  c->r[0]=c->r[26]+0x00000001u; // 800CD1F4
  c->r[6]=addc(c,~c->r[5],0x00000008u,1); // 800CD1F8
  c->r[0]=c->r[0]-c->r[4]; // 800CD1FC
  c->ctr=c->r[0]; // 800CD200
  if (crb(c,0)) { goto L_800CD228; } // 800CD204
L_800CD208:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 800CD208
  c->r[4]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 800CD20C
  c->r[0]=sraw(c,c->r[0],(c->r[6])&63); // 800CD210
  c->r[4]=c->r[7]|c->r[4]; // 800CD214
  W8(c->r[26]+0x00000000u,c->r[4]); // 800CD218
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 800CD21C
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 800CD220
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CD208; } // 800CD224
L_800CD228:;
  c->r[4]=0u+0x00000000u; // 800CD228
  c->r[5]=0u+0x00000008u; // 800CD22C
  c->lr=0x800CD234u; f_8000443C(c); // 800CD230
  c->r[0]=0u+0x00000007u; // 800CD234
  c->r[4]=c->r[1]+0x00000020u; // 800CD238
  c->r[3]=c->r[1]+0x00000011u; // 800CD23C
  c->r[8]=0u+0x00000000u; // 800CD240
  c->r[7]=0u+0x000000FFu; // 800CD244
  c->ctr=c->r[0]; // 800CD248
L_800CD24C:;
  c->r[0]=c->r[8]+0x00000008u; // 800CD24C
  c->r[9]=R8(c->r[4]+0x00000000u); // 800CD250
  cmpu(c,0,c->r[0],0x00000034u); // 800CD254
  c->r[5]=c->r[8]+0x0000000Cu; // 800CD258
  if (!crb(c,1)) { goto L_800CD270; } // 800CD25C
  c->r[0]=addc(c,~c->r[8],0x00000034u,1); // 800CD260
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]<<((c->r[0])&31)); // 800CD264
  c->r[0]=c->r[9]&c->r[0]; // 800CD268
  c->r[9]=rotl(c->r[0],0)&0x000000FFu; // 800CD26C
L_800CD270:;
  c->r[10]=rotl(c->r[5],0)&0x00000007u; // 800CD270
  c->r[6]=R8(c->r[3]+0x00000000u); // 800CD274
  c->r[0]=sraw(c,c->r[9],(c->r[10])&63); // 800CD278
  c->r[4]=c->r[4]+0x00000001u; // 800CD27C
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800CD280
  c->r[8]=c->r[8]+0x00000008u; // 800CD284
  c->r[5]=c->r[6]|c->r[5]; // 800CD288
  c->r[0]=addc(c,~c->r[10],0x00000008u,1); // 800CD28C
  W8(c->r[3]+0x00000000u,c->r[5]); // 800CD290
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[9]<<((c->r[0])&31)); // 800CD294
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800CD298
  {uint32_t ea=c->r[3]+0x00000001u; c->r[5]=R8(ea); c->r[3]=ea;} // 800CD29C
  c->r[0]=c->r[5]|c->r[0]; // 800CD2A0
  W8(c->r[3]+0x00000000u,c->r[0]); // 800CD2A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CD24C; } // 800CD2A8
  c->r[25]=c->r[25]+0x000003FEu; // 800CD2AC
  c->r[0]=rotl(c->r[25],0)&0xFFFFF800u; cr0(c,c->r[0]); // 800CD2B0
  if (crb(c,2)) { goto L_800CD2C8; } // 800CD2B4
  c->r[0]=0u+0x00000001u; // 800CD2B8
  {uint32_t ea=c->r[2]+0xFFFF91D8u; c->f[1]=RF64(ea);} // 800CD2BC
  W32(c->r[20]+0x00000000u,c->r[0]); // 800CD2C0
  goto L_800CD308; // 800CD2C4
L_800CD2C8:;
  c->r[25]=rotl(c->r[25],21)&0xFFE00000u; // 800CD2C8
  c->r[0]=R32(c->r[1]+0x00000090u); // 800CD2CC
  c->r[6]=R8(c->r[1]+0x00000010u); // 800CD2D0
  c->r[5]=rotl(c->r[25],7)&0x0000007Fu; // 800CD2D4
  c->r[4]=R8(c->r[1]+0x00000011u); // 800CD2D8
  c->r[3]=rotl(c->r[25],15)&0x00007FFFu; // 800CD2DC
  cmps(c,0,(int32_t)c->r[0],0); // 800CD2E0
  c->r[5]=c->r[6]|c->r[5]; // 800CD2E4
  c->r[0]=c->r[4]|c->r[3]; // 800CD2E8
  W8(c->r[1]+0x00000010u,c->r[5]); // 800CD2EC
  W8(c->r[1]+0x00000011u,c->r[0]); // 800CD2F0
  if (crb(c,2)) { goto L_800CD304; } // 800CD2F4
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 800CD2F8
  c->r[0]=c->r[0]|0x00000080u; // 800CD2FC
  W8(c->r[1]+0x00000010u,c->r[0]); // 800CD300
L_800CD304:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800CD304
L_800CD308:;
  c->r[11]=c->r[1]+0x000000E0u; // 800CD308
  c->lr=0x800CD310u; f_800C2170(c); // 800CD30C
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800CD310
  c->lr=c->r[0]; // 800CD314
  c->r[1]=c->r[1]+0x000000E0u; // 800CD318
  return; // 800CD31C
}

// fn_800CD320
void f_800CD320(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD320
  c->r[0]=c->lr; // 800CD324
  c->r[4]=0u+0x800D0000u; // 800CD328
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD32C
  c->r[0]=0u+0x00000000u; // 800CD330
  c->r[4]=c->r[4]+0xFFFFB7E8u; // 800CD334
  c->r[5]=c->r[1]+0x00000010u; // 800CD338
  W32(c->r[1]+0x00000010u,c->r[3]); // 800CD33C
  c->r[3]=0u+0x80000000u; // 800CD340
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800CD344
  c->r[6]=c->r[1]+0x00000008u; // 800CD348
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD34C
  c->r[7]=c->r[1]+0x0000000Cu; // 800CD350
  c->lr=0x800CD358u; f_800CBF2C(c); // 800CD354
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CD358
  c->f[2]=std::fabs(c->f[1]); // 800CD35C
  cmps(c,0,(int32_t)c->r[0],0); // 800CD360
  if (!crb(c,2)) { goto L_800CD38C; } // 800CD364
  {uint32_t ea=c->r[2]+0xFFFF91F0u; c->f[0]=RF64(ea);} // 800CD368
  fcmp(c,0,c->f[0],c->f[1]); // 800CD36C
  if (crb(c,2)) { goto L_800CD394; } // 800CD370
  {uint32_t ea=c->r[2]+0xFFFF91F8u; c->f[0]=RF64(ea);} // 800CD374
  fcmp(c,0,c->f[2],c->f[0]); // 800CD378
  if (crb(c,0)) { goto L_800CD38C; } // 800CD37C
  {uint32_t ea=c->r[2]+0xFFFF9200u; c->f[0]=RF64(ea);} // 800CD380
  fcmp(c,0,c->f[2],c->f[0]); // 800CD384
  if (!crb(c,1)) { goto L_800CD394; } // 800CD388
L_800CD38C:;
  c->r[0]=0u+0x00000022u; // 800CD38C
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 800CD390
L_800CD394:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD394
  c->lr=c->r[0]; // 800CD398
  c->r[1]=c->r[1]+0x00000020u; // 800CD39C
  return; // 800CD3A0
}

// fn_800CD3A4
void f_800CD3A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD3A4
  c->r[0]=c->lr; // 800CD3A8
  cmps(c,0,(int32_t)c->r[3],0); // 800CD3AC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CD3B0
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=16;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CD3B4
  c->r[26]=0u+0x00000000u; // 800CD3B8
  c->r[16]=c->r[3]|c->r[3]; // 800CD3BC
  c->r[17]=c->r[4]|c->r[4]; // 800CD3C0
  c->r[18]=c->r[5]|c->r[5]; // 800CD3C4
  c->r[19]=c->r[6]|c->r[6]; // 800CD3C8
  c->r[20]=c->r[7]|c->r[7]; // 800CD3CC
  c->r[21]=c->r[8]|c->r[8]; // 800CD3D0
  c->r[22]=c->r[9]|c->r[9]; // 800CD3D4
  c->r[27]=0u+0x00000001u; // 800CD3D8
  c->r[25]=0u+0x00000000u; // 800CD3DC
  c->r[24]=0u+0x00000000u; // 800CD3E0
  c->r[23]=0u+0x00000000u; // 800CD3E4
  W32(c->r[9]+0x00000000u,c->r[26]); // 800CD3E8
  W32(c->r[8]+0x00000000u,c->r[26]); // 800CD3EC
  if (crb(c,0)) { goto L_800CD40C; } // 800CD3F0
  cmps(c,0,(int32_t)c->r[3],1); // 800CD3F4
  if (crb(c,2)) { goto L_800CD40C; } // 800CD3F8
  cmps(c,0,(int32_t)c->r[3],36); // 800CD3FC
  if (crb(c,1)) { goto L_800CD40C; } // 800CD400
  cmps(c,0,(int32_t)c->r[4],1); // 800CD404
  if (!crb(c,0)) { goto L_800CD414; } // 800CD408
L_800CD40C:;
  c->r[27]=0u+0x00000040u; // 800CD40C
  goto L_800CD434; // 800CD410
L_800CD414:;
  c->r[12]=c->r[18]|c->r[18]; // 800CD414
  c->r[3]=c->r[19]|c->r[19]; // 800CD418
  c->r[4]=0u+0x00000000u; // 800CD41C
  c->r[5]=0u+0x00000000u; // 800CD420
  c->ctr=c->r[12]; // 800CD424
  c->r[26]=0u+0x00000001u; // 800CD428
  if (true) { c->lr=0x800CD430u; dispatch(c,c->ctr); } // 800CD42C
  c->r[4]=c->r[3]|c->r[3]; // 800CD430
L_800CD434:;
  cmps(c,0,(int32_t)c->r[16],0); // 800CD434
  if (crb(c,2)) { goto L_800CD444; } // 800CD438
  c->r[0]=0u+0xFFFFFFFFu; // 800CD43C
  c->r[23]=divwu(c->r[0],c->r[16]); // 800CD440
L_800CD444:;
  c->r[3]=0u+0x80220000u; // 800CD444
  c->r[30]=0u+0x00000001u; // 800CD448
  c->r[31]=0u+0xFFFFFFFFu; // 800CD44C
  c->r[28]=0u+0x80220000u; // 800CD450
  c->r[29]=c->r[3]+0xFFFFBE90u; // 800CD454
  goto L_800CD770; // 800CD458
L_800CD45C:;
  cmpu(c,0,c->r[27],0x00000010u); // 800CD45C
  if (crb(c,1)) { goto L_800CD770; } // 800CD460
  c->r[3]=c->r[28]+0xFFFFC248u; // 800CD464
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800CD468
  c->r[3]=R32(c->r[3]+c->r[0]); // 800CD46C
  c->ctr=c->r[3]; // 800CD470
  if (true) { switch (c->ctr) { case 0x800CD478u: goto L_800CD478; case 0x800CD540u: goto L_800CD540; case 0x800CD588u: goto L_800CD588; case 0x800CD5D8u: goto L_800CD5D8; case 0x800CD770u: goto L_800CD770; default: break; } dispatch(c,c->ctr); return; } // 800CD474
L_800CD478:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CD478
  c->r[0]=0u+0x00000000u; // 800CD47C
  if (crb(c,0)) { goto L_800CD48C; } // 800CD480
  cmps(c,0,(int32_t)c->r[4],256); // 800CD484
  if (crb(c,0)) { goto L_800CD490; } // 800CD488
L_800CD48C:;
  c->r[0]=0u+0x00000001u; // 800CD48C
L_800CD490:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CD490
  if (crb(c,2)) { goto L_800CD4A0; } // 800CD494
  c->r[0]=0u+0x00000000u; // 800CD498
  goto L_800CD4B4; // 800CD49C
L_800CD4A0:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 800CD4A0
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CD4A4
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CD4A8
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CD4AC
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 800CD4B0
L_800CD4B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CD4B4
  if (crb(c,2)) { goto L_800CD4E0; } // 800CD4B8
  c->r[12]=c->r[18]|c->r[18]; // 800CD4BC
  c->r[3]=c->r[19]|c->r[19]; // 800CD4C0
  c->r[4]=0u+0x00000000u; // 800CD4C4
  c->r[5]=0u+0x00000000u; // 800CD4C8
  c->ctr=c->r[12]; // 800CD4CC
  if (true) { c->lr=0x800CD4D4u; dispatch(c,c->ctr); } // 800CD4D0
  c->r[4]=c->r[3]|c->r[3]; // 800CD4D4
  c->r[25]=c->r[25]+0x00000001u; // 800CD4D8
  goto L_800CD770; // 800CD4DC
L_800CD4E0:;
  cmps(c,0,(int32_t)c->r[4],43); // 800CD4E0
  if (!crb(c,2)) { goto L_800CD50C; } // 800CD4E4
  c->r[12]=c->r[18]|c->r[18]; // 800CD4E8
  c->r[3]=c->r[19]|c->r[19]; // 800CD4EC
  c->r[4]=0u+0x00000000u; // 800CD4F0
  c->r[5]=0u+0x00000000u; // 800CD4F4
  c->ctr=c->r[12]; // 800CD4F8
  c->r[26]=c->r[26]+0x00000001u; // 800CD4FC
  if (true) { c->lr=0x800CD504u; dispatch(c,c->ctr); } // 800CD500
  c->r[4]=c->r[3]|c->r[3]; // 800CD504
  goto L_800CD538; // 800CD508
L_800CD50C:;
  cmps(c,0,(int32_t)c->r[4],45); // 800CD50C
  if (!crb(c,2)) { goto L_800CD538; } // 800CD510
  c->r[12]=c->r[18]|c->r[18]; // 800CD514
  c->r[3]=c->r[19]|c->r[19]; // 800CD518
  c->r[4]=0u+0x00000000u; // 800CD51C
  c->r[5]=0u+0x00000000u; // 800CD520
  c->ctr=c->r[12]; // 800CD524
  c->r[26]=c->r[26]+0x00000001u; // 800CD528
  if (true) { c->lr=0x800CD530u; dispatch(c,c->ctr); } // 800CD52C
  c->r[4]=c->r[3]|c->r[3]; // 800CD530
  W32(c->r[21]+0x00000000u,c->r[30]); // 800CD534
L_800CD538:;
  c->r[27]=0u+0x00000002u; // 800CD538
  goto L_800CD770; // 800CD53C
L_800CD540:;
  cmps(c,0,(int32_t)c->r[16],0); // 800CD540
  if (crb(c,2)) { goto L_800CD550; } // 800CD544
  cmps(c,0,(int32_t)c->r[16],16); // 800CD548
  if (!crb(c,2)) { goto L_800CD580; } // 800CD54C
L_800CD550:;
  cmps(c,0,(int32_t)c->r[4],48); // 800CD550
  if (!crb(c,2)) { goto L_800CD580; } // 800CD554
  c->r[12]=c->r[18]|c->r[18]; // 800CD558
  c->r[3]=c->r[19]|c->r[19]; // 800CD55C
  c->r[27]=0u+0x00000004u; // 800CD560
  c->r[4]=0u+0x00000000u; // 800CD564
  c->r[5]=0u+0x00000000u; // 800CD568
  c->ctr=c->r[12]; // 800CD56C
  c->r[26]=c->r[26]+0x00000001u; // 800CD570
  if (true) { c->lr=0x800CD578u; dispatch(c,c->ctr); } // 800CD574
  c->r[4]=c->r[3]|c->r[3]; // 800CD578
  goto L_800CD770; // 800CD57C
L_800CD580:;
  c->r[27]=0u+0x00000008u; // 800CD580
  goto L_800CD770; // 800CD584
L_800CD588:;
  cmps(c,0,(int32_t)c->r[4],88); // 800CD588
  if (crb(c,2)) { goto L_800CD598; } // 800CD58C
  cmps(c,0,(int32_t)c->r[4],120); // 800CD590
  if (!crb(c,2)) { goto L_800CD5C4; } // 800CD594
L_800CD598:;
  c->r[12]=c->r[18]|c->r[18]; // 800CD598
  c->r[3]=c->r[19]|c->r[19]; // 800CD59C
  c->r[16]=0u+0x00000010u; // 800CD5A0
  c->r[27]=0u+0x00000008u; // 800CD5A4
  c->r[4]=0u+0x00000000u; // 800CD5A8
  c->r[5]=0u+0x00000000u; // 800CD5AC
  c->ctr=c->r[12]; // 800CD5B0
  c->r[26]=c->r[26]+0x00000001u; // 800CD5B4
  if (true) { c->lr=0x800CD5BCu; dispatch(c,c->ctr); } // 800CD5B8
  c->r[4]=c->r[3]|c->r[3]; // 800CD5BC
  goto L_800CD770; // 800CD5C0
L_800CD5C4:;
  cmps(c,0,(int32_t)c->r[16],0); // 800CD5C4
  if (!crb(c,2)) { goto L_800CD5D0; } // 800CD5C8
  c->r[16]=0u+0x00000008u; // 800CD5CC
L_800CD5D0:;
  c->r[27]=0u+0x00000010u; // 800CD5D0
  goto L_800CD770; // 800CD5D4
L_800CD5D8:;
  cmps(c,0,(int32_t)c->r[16],0); // 800CD5D8
  if (!crb(c,2)) { goto L_800CD5E4; } // 800CD5DC
  c->r[16]=0u+0x0000000Au; // 800CD5E0
L_800CD5E4:;
  cmps(c,0,(int32_t)c->r[23],0); // 800CD5E4
  if (!crb(c,2)) { goto L_800CD5F0; } // 800CD5E8
  c->r[23]=divwu(c->r[31],c->r[16]); // 800CD5EC
L_800CD5F0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CD5F0
  c->r[0]=0u+0x00000000u; // 800CD5F4
  if (crb(c,0)) { goto L_800CD604; } // 800CD5F8
  cmps(c,0,(int32_t)c->r[4],256); // 800CD5FC
  if (crb(c,0)) { goto L_800CD608; } // 800CD600
L_800CD604:;
  c->r[0]=0u+0x00000001u; // 800CD604
L_800CD608:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CD608
  if (crb(c,2)) { goto L_800CD618; } // 800CD60C
  c->r[0]=0u+0x00000000u; // 800CD610
  goto L_800CD62C; // 800CD614
L_800CD618:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 800CD618
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CD61C
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CD620
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CD624
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CD628
L_800CD62C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CD62C
  if (crb(c,2)) { goto L_800CD658; } // 800CD630
  c->r[4]=c->r[4]+0xFFFFFFD0u; // 800CD634
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[16]); // 800CD638
  if (crb(c,0)) { goto L_800CD728; } // 800CD63C
  cmps(c,0,(int32_t)c->r[27],16); // 800CD640
  c->r[27]=0u+0x00000040u; // 800CD644
  if (!crb(c,2)) { goto L_800CD650; } // 800CD648
  c->r[27]=0u+0x00000020u; // 800CD64C
L_800CD650:;
  c->r[4]=c->r[4]+0x00000030u; // 800CD650
  goto L_800CD770; // 800CD654
L_800CD658:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CD658
  c->r[0]=0u+0x00000000u; // 800CD65C
  if (crb(c,0)) { goto L_800CD66C; } // 800CD660
  cmps(c,0,(int32_t)c->r[4],256); // 800CD664
  if (crb(c,0)) { goto L_800CD670; } // 800CD668
L_800CD66C:;
  c->r[0]=0u+0x00000001u; // 800CD66C
L_800CD670:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CD670
  if (crb(c,2)) { goto L_800CD680; } // 800CD674
  c->r[0]=0u+0x00000000u; // 800CD678
  goto L_800CD694; // 800CD67C
L_800CD680:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 800CD680
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 800CD684
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CD688
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CD68C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800CD690
L_800CD694:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CD694
  if (crb(c,2)) { goto L_800CD6DC; } // 800CD698
  cmps(c,0,(int32_t)c->r[4],0); // 800CD69C
  c->r[0]=0u+0x00000000u; // 800CD6A0
  if (crb(c,0)) { goto L_800CD6B0; } // 800CD6A4
  cmps(c,0,(int32_t)c->r[4],256); // 800CD6A8
  if (crb(c,0)) { goto L_800CD6B4; } // 800CD6AC
L_800CD6B0:;
  c->r[0]=0u+0x00000001u; // 800CD6B0
L_800CD6B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CD6B4
  if (crb(c,2)) { goto L_800CD6C4; } // 800CD6B8
  c->r[3]=c->r[4]|c->r[4]; // 800CD6BC
  goto L_800CD6D0; // 800CD6C0
L_800CD6C4:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 800CD6C4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CD6C8
  c->r[3]=R8(c->r[3]+c->r[4]); // 800CD6CC
L_800CD6D0:;
  c->r[0]=c->r[3]+0xFFFFFFC9u; // 800CD6D0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[16]); // 800CD6D4
  if (crb(c,0)) { goto L_800CD6F4; } // 800CD6D8
L_800CD6DC:;
  cmps(c,0,(int32_t)c->r[27],16); // 800CD6DC
  if (!crb(c,2)) { goto L_800CD6EC; } // 800CD6E0
  c->r[27]=0u+0x00000020u; // 800CD6E4
  goto L_800CD770; // 800CD6E8
L_800CD6EC:;
  c->r[27]=0u+0x00000040u; // 800CD6EC
  goto L_800CD770; // 800CD6F0
L_800CD6F4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CD6F4
  c->r[0]=0u+0x00000000u; // 800CD6F8
  if (crb(c,0)) { goto L_800CD708; } // 800CD6FC
  cmps(c,0,(int32_t)c->r[4],256); // 800CD700
  if (crb(c,0)) { goto L_800CD70C; } // 800CD704
L_800CD708:;
  c->r[0]=0u+0x00000001u; // 800CD708
L_800CD70C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CD70C
  if (crb(c,2)) { goto L_800CD718; } // 800CD710
  goto L_800CD724; // 800CD714
L_800CD718:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 800CD718
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CD71C
  c->r[4]=R8(c->r[3]+c->r[4]); // 800CD720
L_800CD724:;
  c->r[4]=c->r[4]+0xFFFFFFC9u; // 800CD724
L_800CD728:;
  cmpu(c,0,c->r[24],c->r[23]); // 800CD728
  if (!crb(c,1)) { goto L_800CD734; } // 800CD72C
  W32(c->r[22]+0x00000000u,c->r[30]); // 800CD730
L_800CD734:;
  c->r[24]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[16]); // 800CD734
  c->r[0]=addc(c,~c->r[24],0xFFFFFFFFu,1); // 800CD738
  cmpu(c,0,c->r[4],c->r[0]); // 800CD73C
  if (!crb(c,1)) { goto L_800CD748; } // 800CD740
  W32(c->r[22]+0x00000000u,c->r[30]); // 800CD744
L_800CD748:;
  c->r[12]=c->r[18]|c->r[18]; // 800CD748
  c->r[24]=c->r[24]+c->r[4]; // 800CD74C
  c->r[3]=c->r[19]|c->r[19]; // 800CD750
  c->r[27]=0u+0x00000010u; // 800CD754
  c->r[4]=0u+0x00000000u; // 800CD758
  c->r[5]=0u+0x00000000u; // 800CD75C
  c->ctr=c->r[12]; // 800CD760
  c->r[26]=c->r[26]+0x00000001u; // 800CD764
  if (true) { c->lr=0x800CD76Cu; dispatch(c,c->ctr); } // 800CD768
  c->r[4]=c->r[3]|c->r[3]; // 800CD76C
L_800CD770:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[17]); // 800CD770
  if (crb(c,1)) { goto L_800CD788; } // 800CD774
  cmps(c,0,(int32_t)c->r[4],-1); // 800CD778
  if (crb(c,2)) { goto L_800CD788; } // 800CD77C
  c->r[0]=rotl(c->r[27],0)&0x00000060u; cr0(c,c->r[0]); // 800CD780
  if (crb(c,2)) { IRQCHK(c); goto L_800CD45C; } // 800CD784
L_800CD788:;
  c->r[0]=c->r[27]&0x00000034u; cr0(c,c->r[0]); // 800CD788
  if (!crb(c,2)) { goto L_800CD79C; } // 800CD78C
  c->r[24]=0u+0x00000000u; // 800CD790
  W32(c->r[20]+0x00000000u,c->r[24]); // 800CD794
  goto L_800CD7A8; // 800CD798
L_800CD79C:;
  c->r[3]=c->r[26]+c->r[25]; // 800CD79C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CD7A0
  W32(c->r[20]+0x00000000u,c->r[0]); // 800CD7A4
L_800CD7A8:;
  c->r[12]=c->r[18]|c->r[18]; // 800CD7A8
  c->r[3]=c->r[19]|c->r[19]; // 800CD7AC
  c->r[5]=0u+0x00000001u; // 800CD7B0
  c->ctr=c->r[12]; // 800CD7B4
  if (true) { c->lr=0x800CD7BCu; dispatch(c,c->ctr); } // 800CD7B8
  c->r[3]=c->r[24]|c->r[24]; // 800CD7BC
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=16;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CD7C0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CD7C4
  c->lr=c->r[0]; // 800CD7C8
  c->r[1]=c->r[1]+0x00000050u; // 800CD7CC
  return; // 800CD7D0
}

// fn_800CD7D4
void f_800CD7D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD7D4
  c->r[0]=c->lr; // 800CD7D8
  cmps(c,0,(int32_t)c->r[3],0); // 800CD7DC
  W32(c->r[1]+0x00000064u,c->r[0]); // 800CD7E0
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=14;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800CD7E4
  c->r[27]=0u+0x00000000u; // 800CD7E8
  c->r[15]=c->r[3]|c->r[3]; // 800CD7EC
  c->r[16]=c->r[4]|c->r[4]; // 800CD7F0
  W32(c->r[1]+0x00000008u,c->r[7]); // 800CD7F4
  c->r[17]=c->r[5]|c->r[5]; // 800CD7F8
  c->r[18]=c->r[6]|c->r[6]; // 800CD7FC
  c->r[19]=c->r[8]|c->r[8]; // 800CD800
  c->r[20]=c->r[9]|c->r[9]; // 800CD804
  c->r[28]=0u+0x00000001u; // 800CD808
  c->r[26]=0u+0x00000000u; // 800CD80C
  c->r[24]=0u+0x00000000u; // 800CD810
  c->r[25]=0u+0x00000000u; // 800CD814
  c->r[22]=0u+0x00000000u; // 800CD818
  c->r[23]=0u+0x00000000u; // 800CD81C
  W32(c->r[9]+0x00000000u,c->r[27]); // 800CD820
  W32(c->r[8]+0x00000000u,c->r[27]); // 800CD824
  if (crb(c,0)) { goto L_800CD844; } // 800CD828
  cmps(c,0,(int32_t)c->r[3],1); // 800CD82C
  if (crb(c,2)) { goto L_800CD844; } // 800CD830
  cmps(c,0,(int32_t)c->r[3],36); // 800CD834
  if (crb(c,1)) { goto L_800CD844; } // 800CD838
  cmps(c,0,(int32_t)c->r[4],1); // 800CD83C
  if (!crb(c,0)) { goto L_800CD84C; } // 800CD840
L_800CD844:;
  c->r[28]=0u+0x00000040u; // 800CD844
  goto L_800CD86C; // 800CD848
L_800CD84C:;
  c->r[12]=c->r[17]|c->r[17]; // 800CD84C
  c->r[3]=c->r[18]|c->r[18]; // 800CD850
  c->r[4]=0u+0x00000000u; // 800CD854
  c->r[5]=0u+0x00000000u; // 800CD858
  c->ctr=c->r[12]; // 800CD85C
  c->r[27]=0u+0x00000001u; // 800CD860
  if (true) { c->lr=0x800CD868u; dispatch(c,c->ctr); } // 800CD864
  c->r[21]=c->r[3]|c->r[3]; // 800CD868
L_800CD86C:;
  cmps(c,0,(int32_t)c->r[15],0); // 800CD86C
  if (crb(c,2)) { goto L_800CD890; } // 800CD870
  c->r[6]=c->r[15]|c->r[15]; // 800CD874
  c->r[5]=sraw(c,c->r[15],31); // 800CD878
  c->r[3]=0u+0xFFFFFFFFu; // 800CD87C
  c->r[4]=0u+0xFFFFFFFFu; // 800CD880
  c->lr=0x800CD888u; f_800C21BC(c); // 800CD884
  c->r[22]=c->r[4]|c->r[4]; // 800CD888
  c->r[23]=c->r[3]|c->r[3]; // 800CD88C
L_800CD890:;
  c->r[3]=0u+0x80220000u; // 800CD890
  c->r[30]=0u+0x00000001u; // 800CD894
  c->r[31]=0u+0xFFFFFFFFu; // 800CD898
  c->r[14]=0u+0x80220000u; // 800CD89C
  c->r[29]=c->r[3]+0xFFFFBE90u; // 800CD8A0
  goto L_800CDC20; // 800CD8A4
L_800CD8A8:;
  cmpu(c,0,c->r[28],0x00000010u); // 800CD8A8
  if (crb(c,1)) { goto L_800CDC20; } // 800CD8AC
  c->r[3]=c->r[14]+0xFFFFC28Cu; // 800CD8B0
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800CD8B4
  c->r[3]=R32(c->r[3]+c->r[0]); // 800CD8B8
  c->ctr=c->r[3]; // 800CD8BC
  if (true) { switch (c->ctr) { case 0x800CD8C4u: goto L_800CD8C4; case 0x800CD98Cu: goto L_800CD98C; case 0x800CD9D4u: goto L_800CD9D4; case 0x800CDA24u: goto L_800CDA24; case 0x800CDC20u: goto L_800CDC20; default: break; } dispatch(c,c->ctr); return; } // 800CD8C0
L_800CD8C4:;
  cmps(c,0,(int32_t)c->r[21],0); // 800CD8C4
  c->r[0]=0u+0x00000000u; // 800CD8C8
  if (crb(c,0)) { goto L_800CD8D8; } // 800CD8CC
  cmps(c,0,(int32_t)c->r[21],256); // 800CD8D0
  if (crb(c,0)) { goto L_800CD8DC; } // 800CD8D4
L_800CD8D8:;
  c->r[0]=0u+0x00000001u; // 800CD8D8
L_800CD8DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CD8DC
  if (crb(c,2)) { goto L_800CD8EC; } // 800CD8E0
  c->r[0]=0u+0x00000000u; // 800CD8E4
  goto L_800CD900; // 800CD8E8
L_800CD8EC:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 800CD8EC
  c->r[0]=rotl(c->r[21],1)&0xFFFFFFFEu; // 800CD8F0
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CD8F4
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CD8F8
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 800CD8FC
L_800CD900:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CD900
  if (crb(c,2)) { goto L_800CD92C; } // 800CD904
  c->r[12]=c->r[17]|c->r[17]; // 800CD908
  c->r[3]=c->r[18]|c->r[18]; // 800CD90C
  c->r[4]=0u+0x00000000u; // 800CD910
  c->r[5]=0u+0x00000000u; // 800CD914
  c->ctr=c->r[12]; // 800CD918
  if (true) { c->lr=0x800CD920u; dispatch(c,c->ctr); } // 800CD91C
  c->r[21]=c->r[3]|c->r[3]; // 800CD920
  c->r[26]=c->r[26]+0x00000001u; // 800CD924
  goto L_800CDC20; // 800CD928
L_800CD92C:;
  cmps(c,0,(int32_t)c->r[21],43); // 800CD92C
  if (!crb(c,2)) { goto L_800CD958; } // 800CD930
  c->r[12]=c->r[17]|c->r[17]; // 800CD934
  c->r[3]=c->r[18]|c->r[18]; // 800CD938
  c->r[4]=0u+0x00000000u; // 800CD93C
  c->r[5]=0u+0x00000000u; // 800CD940
  c->ctr=c->r[12]; // 800CD944
  c->r[27]=c->r[27]+0x00000001u; // 800CD948
  if (true) { c->lr=0x800CD950u; dispatch(c,c->ctr); } // 800CD94C
  c->r[21]=c->r[3]|c->r[3]; // 800CD950
  goto L_800CD984; // 800CD954
L_800CD958:;
  cmps(c,0,(int32_t)c->r[21],45); // 800CD958
  if (!crb(c,2)) { goto L_800CD984; } // 800CD95C
  c->r[12]=c->r[17]|c->r[17]; // 800CD960
  c->r[3]=c->r[18]|c->r[18]; // 800CD964
  c->r[4]=0u+0x00000000u; // 800CD968
  c->r[5]=0u+0x00000000u; // 800CD96C
  c->ctr=c->r[12]; // 800CD970
  c->r[27]=c->r[27]+0x00000001u; // 800CD974
  if (true) { c->lr=0x800CD97Cu; dispatch(c,c->ctr); } // 800CD978
  c->r[21]=c->r[3]|c->r[3]; // 800CD97C
  W32(c->r[19]+0x00000000u,c->r[30]); // 800CD980
L_800CD984:;
  c->r[28]=0u+0x00000002u; // 800CD984
  goto L_800CDC20; // 800CD988
L_800CD98C:;
  cmps(c,0,(int32_t)c->r[15],0); // 800CD98C
  if (crb(c,2)) { goto L_800CD99C; } // 800CD990
  cmps(c,0,(int32_t)c->r[15],16); // 800CD994
  if (!crb(c,2)) { goto L_800CD9CC; } // 800CD998
L_800CD99C:;
  cmps(c,0,(int32_t)c->r[21],48); // 800CD99C
  if (!crb(c,2)) { goto L_800CD9CC; } // 800CD9A0
  c->r[12]=c->r[17]|c->r[17]; // 800CD9A4
  c->r[3]=c->r[18]|c->r[18]; // 800CD9A8
  c->r[28]=0u+0x00000004u; // 800CD9AC
  c->r[4]=0u+0x00000000u; // 800CD9B0
  c->r[5]=0u+0x00000000u; // 800CD9B4
  c->ctr=c->r[12]; // 800CD9B8
  c->r[27]=c->r[27]+0x00000001u; // 800CD9BC
  if (true) { c->lr=0x800CD9C4u; dispatch(c,c->ctr); } // 800CD9C0
  c->r[21]=c->r[3]|c->r[3]; // 800CD9C4
  goto L_800CDC20; // 800CD9C8
L_800CD9CC:;
  c->r[28]=0u+0x00000008u; // 800CD9CC
  goto L_800CDC20; // 800CD9D0
L_800CD9D4:;
  cmps(c,0,(int32_t)c->r[21],88); // 800CD9D4
  if (crb(c,2)) { goto L_800CD9E4; } // 800CD9D8
  cmps(c,0,(int32_t)c->r[21],120); // 800CD9DC
  if (!crb(c,2)) { goto L_800CDA10; } // 800CD9E0
L_800CD9E4:;
  c->r[12]=c->r[17]|c->r[17]; // 800CD9E4
  c->r[3]=c->r[18]|c->r[18]; // 800CD9E8
  c->r[15]=0u+0x00000010u; // 800CD9EC
  c->r[28]=0u+0x00000008u; // 800CD9F0
  c->r[4]=0u+0x00000000u; // 800CD9F4
  c->r[5]=0u+0x00000000u; // 800CD9F8
  c->ctr=c->r[12]; // 800CD9FC
  c->r[27]=c->r[27]+0x00000001u; // 800CDA00
  if (true) { c->lr=0x800CDA08u; dispatch(c,c->ctr); } // 800CDA04
  c->r[21]=c->r[3]|c->r[3]; // 800CDA08
  goto L_800CDC20; // 800CDA0C
L_800CDA10:;
  cmps(c,0,(int32_t)c->r[15],0); // 800CDA10
  if (!crb(c,2)) { goto L_800CDA1C; } // 800CDA14
  c->r[15]=0u+0x00000008u; // 800CDA18
L_800CDA1C:;
  c->r[28]=0u+0x00000010u; // 800CDA1C
  goto L_800CDC20; // 800CDA20
L_800CDA24:;
  cmps(c,0,(int32_t)c->r[15],0); // 800CDA24
  if (!crb(c,2)) { goto L_800CDA30; } // 800CDA28
  c->r[15]=0u+0x0000000Au; // 800CDA2C
L_800CDA30:;
  c->r[0]=0u+0x00000000u; // 800CDA30
  c->r[0]=sraw(c,c->r[0],31); // 800CDA34
  c->r[0]=c->r[23]^c->r[0]; // 800CDA38
  c->r[0]=c->r[22]|c->r[0]; cr0(c,c->r[0]); // 800CDA3C
  if (!crb(c,2)) { goto L_800CDA60; } // 800CDA40
  c->r[6]=c->r[15]|c->r[15]; // 800CDA44
  c->r[5]=sraw(c,c->r[15],31); // 800CDA48
  c->r[3]=0u+0xFFFFFFFFu; // 800CDA4C
  c->r[4]=0u+0xFFFFFFFFu; // 800CDA50
  c->lr=0x800CDA58u; f_800C21BC(c); // 800CDA54
  c->r[22]=c->r[4]|c->r[4]; // 800CDA58
  c->r[23]=c->r[3]|c->r[3]; // 800CDA5C
L_800CDA60:;
  cmps(c,0,(int32_t)c->r[21],0); // 800CDA60
  c->r[0]=0u+0x00000000u; // 800CDA64
  if (crb(c,0)) { goto L_800CDA74; } // 800CDA68
  cmps(c,0,(int32_t)c->r[21],256); // 800CDA6C
  if (crb(c,0)) { goto L_800CDA78; } // 800CDA70
L_800CDA74:;
  c->r[0]=0u+0x00000001u; // 800CDA74
L_800CDA78:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CDA78
  if (crb(c,2)) { goto L_800CDA88; } // 800CDA7C
  c->r[0]=0u+0x00000000u; // 800CDA80
  goto L_800CDA9C; // 800CDA84
L_800CDA88:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 800CDA88
  c->r[0]=rotl(c->r[21],1)&0xFFFFFFFEu; // 800CDA8C
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CDA90
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CDA94
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CDA98
L_800CDA9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CDA9C
  if (crb(c,2)) { goto L_800CDAC8; } // 800CDAA0
  c->r[21]=c->r[21]+0xFFFFFFD0u; // 800CDAA4
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[15]); // 800CDAA8
  if (crb(c,0)) { goto L_800CDB98; } // 800CDAAC
  cmps(c,0,(int32_t)c->r[28],16); // 800CDAB0
  c->r[28]=0u+0x00000040u; // 800CDAB4
  if (!crb(c,2)) { goto L_800CDAC0; } // 800CDAB8
  c->r[28]=0u+0x00000020u; // 800CDABC
L_800CDAC0:;
  c->r[21]=c->r[21]+0x00000030u; // 800CDAC0
  goto L_800CDC20; // 800CDAC4
L_800CDAC8:;
  cmps(c,0,(int32_t)c->r[21],0); // 800CDAC8
  c->r[0]=0u+0x00000000u; // 800CDACC
  if (crb(c,0)) { goto L_800CDADC; } // 800CDAD0
  cmps(c,0,(int32_t)c->r[21],256); // 800CDAD4
  if (crb(c,0)) { goto L_800CDAE0; } // 800CDAD8
L_800CDADC:;
  c->r[0]=0u+0x00000001u; // 800CDADC
L_800CDAE0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CDAE0
  if (crb(c,2)) { goto L_800CDAF0; } // 800CDAE4
  c->r[0]=0u+0x00000000u; // 800CDAE8
  goto L_800CDB04; // 800CDAEC
L_800CDAF0:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 800CDAF0
  c->r[0]=rotl(c->r[21],1)&0xFFFFFFFEu; // 800CDAF4
  c->r[3]=R32(c->r[3]+0x00000008u); // 800CDAF8
  c->r[0]=R16(c->r[3]+c->r[0]); // 800CDAFC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800CDB00
L_800CDB04:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CDB04
  if (crb(c,2)) { goto L_800CDB4C; } // 800CDB08
  cmps(c,0,(int32_t)c->r[21],0); // 800CDB0C
  c->r[0]=0u+0x00000000u; // 800CDB10
  if (crb(c,0)) { goto L_800CDB20; } // 800CDB14
  cmps(c,0,(int32_t)c->r[21],256); // 800CDB18
  if (crb(c,0)) { goto L_800CDB24; } // 800CDB1C
L_800CDB20:;
  c->r[0]=0u+0x00000001u; // 800CDB20
L_800CDB24:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CDB24
  if (crb(c,2)) { goto L_800CDB34; } // 800CDB28
  c->r[3]=c->r[21]|c->r[21]; // 800CDB2C
  goto L_800CDB40; // 800CDB30
L_800CDB34:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 800CDB34
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CDB38
  c->r[3]=R8(c->r[3]+c->r[21]); // 800CDB3C
L_800CDB40:;
  c->r[0]=c->r[3]+0xFFFFFFC9u; // 800CDB40
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[15]); // 800CDB44
  if (crb(c,0)) { goto L_800CDB64; } // 800CDB48
L_800CDB4C:;
  cmps(c,0,(int32_t)c->r[28],16); // 800CDB4C
  if (!crb(c,2)) { goto L_800CDB5C; } // 800CDB50
  c->r[28]=0u+0x00000020u; // 800CDB54
  goto L_800CDC20; // 800CDB58
L_800CDB5C:;
  c->r[28]=0u+0x00000040u; // 800CDB5C
  goto L_800CDC20; // 800CDB60
L_800CDB64:;
  cmps(c,0,(int32_t)c->r[21],0); // 800CDB64
  c->r[0]=0u+0x00000000u; // 800CDB68
  if (crb(c,0)) { goto L_800CDB78; } // 800CDB6C
  cmps(c,0,(int32_t)c->r[21],256); // 800CDB70
  if (crb(c,0)) { goto L_800CDB7C; } // 800CDB74
L_800CDB78:;
  c->r[0]=0u+0x00000001u; // 800CDB78
L_800CDB7C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800CDB7C
  if (crb(c,2)) { goto L_800CDB88; } // 800CDB80
  goto L_800CDB94; // 800CDB84
L_800CDB88:;
  c->r[3]=R32(c->r[29]+0x00000038u); // 800CDB88
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800CDB8C
  c->r[21]=R8(c->r[3]+c->r[21]); // 800CDB90
L_800CDB94:;
  c->r[21]=c->r[21]+0xFFFFFFC9u; // 800CDB94
L_800CDB98:;
  c->r[0]=addc(c,~c->r[24],c->r[22],1); // 800CDB98
  c->r[0]=addc(c,~c->r[25],c->r[23],c->xer_ca); // 800CDB9C
  c->r[0]=addc(c,~c->r[22],c->r[22],c->xer_ca); // 800CDBA0
  c->r[0]=0u-c->r[0]; cr0(c,c->r[0]); // 800CDBA4
  if (crb(c,2)) { goto L_800CDBB0; } // 800CDBA8
  W32(c->r[20]+0x00000000u,c->r[30]); // 800CDBAC
L_800CDBB0:;
  c->r[3]=(uint32_t)(((uint64_t)c->r[24]*(uint64_t)c->r[15])>>32); // 800CDBB0
  c->r[5]=sraw(c,c->r[15],31); // 800CDBB4
  c->r[6]=sraw(c,c->r[21],31); // 800CDBB8
  c->r[4]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[15]); // 800CDBBC
  c->r[4]=c->r[3]+c->r[4]; // 800CDBC0
  c->r[3]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[5]); // 800CDBC4
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[15]); // 800CDBC8
  c->r[7]=c->r[4]+c->r[3]; // 800CDBCC
  c->r[5]=addc(c,~c->r[0],c->r[31],1); // 800CDBD0
  c->r[4]=addc(c,~c->r[7],c->r[31],c->xer_ca); // 800CDBD4
  c->r[3]=addc(c,~c->r[21],c->r[5],1); // 800CDBD8
  c->r[3]=addc(c,~c->r[6],c->r[4],c->xer_ca); // 800CDBDC
  c->r[3]=addc(c,~c->r[5],c->r[5],c->xer_ca); // 800CDBE0
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 800CDBE4
  if (crb(c,2)) { goto L_800CDBF0; } // 800CDBE8
  W32(c->r[20]+0x00000000u,c->r[30]); // 800CDBEC
L_800CDBF0:;
  c->r[4]=sraw(c,c->r[21],31); // 800CDBF0
  c->r[12]=c->r[17]|c->r[17]; // 800CDBF4
  c->r[24]=addc(c,c->r[0],c->r[21],0); // 800CDBF8
  c->r[3]=c->r[18]|c->r[18]; // 800CDBFC
  c->r[25]=addc(c,c->r[7],c->r[4],c->xer_ca); // 800CDC00
  c->r[28]=0u+0x00000010u; // 800CDC04
  c->r[4]=0u+0x00000000u; // 800CDC08
  c->r[5]=0u+0x00000000u; // 800CDC0C
  c->ctr=c->r[12]; // 800CDC10
  c->r[27]=c->r[27]+0x00000001u; // 800CDC14
  if (true) { c->lr=0x800CDC1Cu; dispatch(c,c->ctr); } // 800CDC18
  c->r[21]=c->r[3]|c->r[3]; // 800CDC1C
L_800CDC20:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[16]); // 800CDC20
  if (crb(c,1)) { goto L_800CDC38; } // 800CDC24
  cmps(c,0,(int32_t)c->r[21],-1); // 800CDC28
  if (crb(c,2)) { goto L_800CDC38; } // 800CDC2C
  c->r[0]=rotl(c->r[28],0)&0x00000060u; cr0(c,c->r[0]); // 800CDC30
  if (crb(c,2)) { IRQCHK(c); goto L_800CD8A8; } // 800CDC34
L_800CDC38:;
  c->r[0]=c->r[28]&0x00000034u; cr0(c,c->r[0]); // 800CDC38
  if (!crb(c,2)) { goto L_800CDC54; } // 800CDC3C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CDC40
  c->r[24]=0u+0x00000000u; // 800CDC44
  c->r[25]=0u+0x00000000u; // 800CDC48
  W32(c->r[3]+0x00000000u,c->r[24]); // 800CDC4C
  goto L_800CDC64; // 800CDC50
L_800CDC54:;
  c->r[3]=c->r[27]+c->r[26]; // 800CDC54
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CDC58
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CDC5C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CDC60
L_800CDC64:;
  c->r[12]=c->r[17]|c->r[17]; // 800CDC64
  c->r[3]=c->r[18]|c->r[18]; // 800CDC68
  c->r[4]=c->r[21]|c->r[21]; // 800CDC6C
  c->r[5]=0u+0x00000001u; // 800CDC70
  c->ctr=c->r[12]; // 800CDC74
  if (true) { c->lr=0x800CDC7Cu; dispatch(c,c->ctr); } // 800CDC78
  c->r[4]=c->r[24]|c->r[24]; // 800CDC7C
  c->r[3]=c->r[25]|c->r[25]; // 800CDC80
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=14;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800CDC84
  c->r[0]=R32(c->r[1]+0x00000064u); // 800CDC88
  c->lr=c->r[0]; // 800CDC8C
  c->r[1]=c->r[1]+0x00000060u; // 800CDC90
  return; // 800CDC94
}

// fn_800CDC98
void f_800CDC98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDC98
  c->r[0]=c->lr; // 800CDC9C
  c->r[7]=0u+0x80000000u; // 800CDCA0
  c->r[6]=0u+0x800D0000u; // 800CDCA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CDCA8
  c->r[0]=0u+0x00000000u; // 800CDCAC
  c->r[8]=c->r[1]+0x0000000Cu; // 800CDCB0
  c->r[9]=c->r[1]+0x00000008u; // 800CDCB4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CDCB8
  c->r[31]=c->r[4]|c->r[4]; // 800CDCBC
  c->r[4]=c->r[7]+0xFFFFFFFFu; // 800CDCC0
  c->r[7]=c->r[1]+0x00000010u; // 800CDCC4
  W32(c->r[1]+0x00000028u,c->r[30]); // 800CDCC8
  c->r[30]=c->r[3]|c->r[3]; // 800CDCCC
  c->r[3]=c->r[5]|c->r[5]; // 800CDCD0
  c->r[5]=c->r[6]+0xFFFFB7E8u; // 800CDCD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CDCD8
  c->r[6]=c->r[1]+0x00000018u; // 800CDCDC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CDCE0
  c->lr=0x800CDCE8u; f_800CD3A4(c); // 800CDCE4
  cmps(c,0,(int32_t)c->r[31],0); // 800CDCE8
  if (crb(c,2)) { goto L_800CDCFC; } // 800CDCEC
  c->r[0]=R32(c->r[1]+0x00000010u); // 800CDCF0
  c->r[0]=c->r[30]+c->r[0]; // 800CDCF4
  W32(c->r[31]+0x00000000u,c->r[0]); // 800CDCF8
L_800CDCFC:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800CDCFC
  cmps(c,0,(int32_t)c->r[0],0); // 800CDD00
  if (crb(c,2)) { goto L_800CDD18; } // 800CDD04
  c->r[0]=0u+0x00000022u; // 800CDD08
  c->r[3]=0u+0xFFFFFFFFu; // 800CDD0C
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 800CDD10
  goto L_800CDD28; // 800CDD14
L_800CDD18:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CDD18
  cmps(c,0,(int32_t)c->r[0],0); // 800CDD1C
  if (crb(c,2)) { goto L_800CDD28; } // 800CDD20
  c->r[3]=0u-c->r[3]; // 800CDD24
L_800CDD28:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CDD28
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CDD2C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800CDD30
  c->lr=c->r[0]; // 800CDD34
  c->r[1]=c->r[1]+0x00000030u; // 800CDD38
  return; // 800CDD3C
}

// fn_800CDD40
void f_800CDD40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDD40
  c->r[0]=c->lr; // 800CDD44
  c->r[7]=0u+0x80000000u; // 800CDD48
  c->r[6]=0u+0x800D0000u; // 800CDD4C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CDD50
  c->r[0]=0u+0x00000000u; // 800CDD54
  c->r[8]=c->r[1]+0x0000000Cu; // 800CDD58
  c->r[9]=c->r[1]+0x00000008u; // 800CDD5C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CDD60
  c->r[31]=c->r[4]|c->r[4]; // 800CDD64
  c->r[4]=c->r[7]+0xFFFFFFFFu; // 800CDD68
  c->r[7]=c->r[1]+0x00000010u; // 800CDD6C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800CDD70
  c->r[30]=c->r[3]|c->r[3]; // 800CDD74
  c->r[3]=c->r[5]|c->r[5]; // 800CDD78
  c->r[5]=c->r[6]+0xFFFFB7E8u; // 800CDD7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CDD80
  c->r[6]=c->r[1]+0x00000018u; // 800CDD84
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800CDD88
  c->lr=0x800CDD90u; f_800CD3A4(c); // 800CDD8C
  cmps(c,0,(int32_t)c->r[31],0); // 800CDD90
  if (crb(c,2)) { goto L_800CDDA4; } // 800CDD94
  c->r[0]=R32(c->r[1]+0x00000010u); // 800CDD98
  c->r[0]=c->r[30]+c->r[0]; // 800CDD9C
  W32(c->r[31]+0x00000000u,c->r[0]); // 800CDDA0
L_800CDDA4:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800CDDA4
  cmps(c,0,(int32_t)c->r[0],0); // 800CDDA8
  if (!crb(c,2)) { goto L_800CDDE0; } // 800CDDAC
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800CDDB0
  cmps(c,0,(int32_t)c->r[5],0); // 800CDDB4
  if (!crb(c,2)) { goto L_800CDDCC; } // 800CDDB8
  c->r[4]=0u+0x80000000u; // 800CDDBC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800CDDC0
  cmpu(c,0,c->r[3],c->r[0]); // 800CDDC4
  if (crb(c,1)) { goto L_800CDDE0; } // 800CDDC8
L_800CDDCC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CDDCC
  if (crb(c,2)) { goto L_800CDE08; } // 800CDDD0
  c->r[0]=0u+0x80000000u; // 800CDDD4
  cmpu(c,0,c->r[3],c->r[0]); // 800CDDD8
  if (!crb(c,1)) { goto L_800CDE08; } // 800CDDDC
L_800CDDE0:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800CDDE0
  c->r[0]=0u+0x00000022u; // 800CDDE4
  c->r[3]=0u+0x80000000u; // 800CDDE8
  W32(c->r[13]+0xFFFFA4D0u,c->r[0]); // 800CDDEC
  c->r[4]=0u-c->r[5]; // 800CDDF0
  c->r[4]=c->r[4]|c->r[5]; // 800CDDF4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CDDF8
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 800CDDFC
  c->r[3]=c->r[3]+c->r[0]; // 800CDE00
  goto L_800CDE14; // 800CDE04
L_800CDE08:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CDE08
  if (crb(c,2)) { goto L_800CDE14; } // 800CDE0C
  c->r[3]=0u-c->r[3]; // 800CDE10
L_800CDE14:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CDE14
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CDE18
  c->r[30]=R32(c->r[1]+0x00000028u); // 800CDE1C
  c->lr=c->r[0]; // 800CDE20
  c->r[1]=c->r[1]+0x00000030u; // 800CDE24
  return; // 800CDE28
}

