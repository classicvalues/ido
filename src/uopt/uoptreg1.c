#include "libp/libp.h"
#include "libu/libu.h"
#include "uoptdata.h"
#include "uoptions.h"
#include "uoptdbg.h"
#include "uoptutil.h"

__asm__(R""(
.macro glabel label
    .global \label
    .balign 4
    \label:
.endm

.rdata
RO_1000D560:
    # 0045E0B8 varappear
    .asciz "uoptreg1.p"

    .balign 4
jtbl_1000D56C:
    # 0045E0B8 varappear
    .gpword .L0045E118
    .gpword .L0045E118
    .gpword .L0045E120
    .gpword .L0045E154
    .gpword .L0045E118
    .gpword .L0045E120
    .gpword .L0045E1BC
    .gpword .L0045E118

RO_1000D5B8:
    # 0045FBB4 func_0045FBB4
    .asciz "uoptreg1.p"

    .balign 4
jtbl_1000D5C4:
    # 0045FBB4 func_0045FBB4
    .gpword .L0045FC28
    .gpword .L0045FC10
    .gpword .L0045FC34
    .gpword .L00460464
    .gpword .L00460190
    .gpword .L00460190
    .gpword .L0046104C
    .gpword .L0045FC1C

RO_1000D5E4:
    # 00461084 func_00461084
    .asciz "uoptreg1.p"

    .balign 4
jtbl_1000D5F0:
    # 00461084 func_00461084
    .gpword .L0046121C
    .gpword .L0046121C
    .gpword .L00461104
    .gpword .L004611B4
    .gpword .L004610F4
    .gpword .L004610FC

.data
D_10010DD0:
    # 0045D9A0 is_cup
    .byte 0x00,0x00,0x80,0x00,0x00,0x08,0x00,0x00

D_10010DD8:
    # 0045E1F8 caninsertearly
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_10010DE4:
    # 0045E1F8 caninsertearly
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x10

D_10010DF4:
    # 0045E408 sizeofsetexpr
    .byte 0x20,0x00,0x00,0x08,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x04,0x00,0x00,0x20,0x00,0x00,0x20,0x00,0x00

D_10010E70:
    # 0045FBB4 func_0045FBB4
    .byte 0x20,0x10,0x00,0x80,0x00,0x03,0x9e,0xa0,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x02,0x00,0x10,0x20

D_10010E84:
    # 0045FBB4 func_0045FBB4
    .byte 0x80,0x0c,0x00,0x60,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x02,0x60,0x00,0x02,0x00

D_10010E94:
    # 0045FBB4 func_0045FBB4
    .byte 0x48,0x00,0x00,0x04,0x10,0xc0,0x00,0x08,0x00,0x06,0x07,0x11,0x00,0x40,0x00,0x04

D_10010EA4:
    # 0045FBB4 func_0045FBB4
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0xfc,0x00,0x08,0x10

D_10010EB4:
    # 0045FBB4 func_0045FBB4
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_10010EBC:
    # 0045FBB4 func_0045FBB4
    .byte 0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10

D_10010EC8:
    # 0046195C func_0046195C
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_10010ED0:
    # 00461A00 func_00461A00
    .byte 0x00,0x00,0x81,0x00,0x00,0x08,0x00,0x00

D_10010ED8:
    # 00461AAC makelivranges
    .byte 0x10,0x80,0xe7,0x12,0x80,0x08,0x00,0x00,0x2c,0x08,0x48,0x08,0x80,0x20,0x00,0x40,0x00,0x82,0x00,0x00

D_10010EEC:
    # 00461AAC makelivranges
    .byte 0x02,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x08,0x00,0x00

D_10010EFC:
    # 00461AAC makelivranges
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x10

D_10010F0C:
    # 00461AAC makelivranges
    .byte 0x00,0x00,0x00,0x01,0x80,0x00,0x00,0xc0,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x10,0x00,0x00,0x00,0x00


.bss
# 10013878
glabel ever_altered
    # 0045DA18 formlivbb
    # 00461AAC makelivranges
    .space 8
    .size ever_altered, 8
    .type ever_altered, @object
    .space 100


.bss
    .balign 4
# 1001C624
glabel passedcl
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    .space 4
    .size passedcl, 4
    .type passedcl, @object

    .balign 4
# 1001C628
glabel outonly_parm
    # 0045DA18 formlivbb
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    .space 4
    .size outonly_parm, 4
    .type outonly_parm, @object


.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

.text
)"");

extern struct BitVector ever_altered;
extern int passedcl;
extern int outonly_parm;


__asm__(R""(
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches

glabel is_cup
    .ent is_cup
    # 004638C0 regdataflow
/* 0045D9A0 8C820020 */  lw    $v0, 0x20($a0)
/* 0045D9A4 90450000 */  lbu   $a1, ($v0)
/* 0045D9A8 2CAE0040 */  sltiu $t6, $a1, 0x40
/* 0045D9AC 11C00009 */  beqz  $t6, .L0045D9D4
/* 0045D9B0 00000000 */   nop   
/* 0045D9B4 8F998044 */  lw    $t9, %got(D_10010DD0)($gp)
/* 0045D9B8 00057943 */  sra   $t7, $a1, 5
/* 0045D9BC 000FC080 */  sll   $t8, $t7, 2
/* 0045D9C0 27390DD0 */  addiu $t9, %lo(D_10010DD0) # addiu $t9, $t9, 0xdd0
/* 0045D9C4 03384021 */  addu  $t0, $t9, $t8
/* 0045D9C8 8D090000 */  lw    $t1, ($t0)
/* 0045D9CC 00A95004 */  sllv  $t2, $t1, $a1
/* 0045D9D0 294E0000 */  slti  $t6, $t2, 0
.L0045D9D4:
/* 0045D9D4 15C0000E */  bnez  $t6, .L0045DA10
/* 0045D9D8 01C01825 */   move  $v1, $t6
/* 0045D9DC 38A30017 */  xori  $v1, $a1, 0x17
/* 0045D9E0 2C630001 */  sltiu $v1, $v1, 1
/* 0045D9E4 1060000A */  beqz  $v1, .L0045DA10
/* 0045D9E8 00000000 */   nop   
/* 0045D9EC 9444001A */  lhu   $a0, 0x1a($v0)
/* 0045D9F0 30830002 */  andi  $v1, $a0, 2
/* 0045D9F4 0003182B */  sltu  $v1, $zero, $v1
/* 0045D9F8 2C630001 */  sltiu $v1, $v1, 1
/* 0045D9FC 14600004 */  bnez  $v1, .L0045DA10
/* 0045DA00 00000000 */   nop   
/* 0045DA04 30830001 */  andi  $v1, $a0, 1
/* 0045DA08 0003182B */  sltu  $v1, $zero, $v1
/* 0045DA0C 2C630001 */  sltiu $v1, $v1, 1
.L0045DA10:
/* 0045DA10 03E00008 */  jr    $ra
/* 0045DA14 00601025 */   move  $v0, $v1
    .type is_cup, @function
    .size is_cup, .-is_cup
    .end is_cup
)"");

/*
0045E45C func_0045E45C
0045E5C4 func_0045E5C4
0045FBB4 func_0045FBB4
00461084 func_00461084
0046123C func_0046123C
00461640 func_00461640
00461AAC makelivranges
*/
void formlivbb(struct IChain *ichain, struct Graphnode *node, struct livbb **dest) {
    int argnum;
    int i;
    bool phi_t3;
    bool phi_v1_2;

    if (bittab[ichain->bitpos].unk4 == NULL) {
        setbit(&iscolored[regclassof(ichain) - 1], ichain->bitpos);

        if (ichain->type == isvar && ichain->isvar_issvar.location.memtype == Pmt && curblk == ichain->isvar_issvar.location.blockno) {
            argnum = ichain->isvar_issvar.location.addr / 4;
            phi_t3 = false;
            if (argnum > pdefmax || pdeftab[argnum].opc == Unop || pdeftab[argnum].dtype == Mdt) {
                phi_t3 = true;
            } else if (!allcallersave && argnum > MIN(pdefmax, 3)) {
                phi_t3 = true;
            } else if (fitparmreg(ichain->isvar_issvar.location.addr, ichain->isvar_issvar.size, pdeftab[argnum].offset, pdeftab[argnum].size) &&
                    ((pdeftab[argnum].dtype != Idt && pdeftab[argnum].dtype != Kdt) || mips3_64data || (dwopcode && allcallersave))) {
                
                setbit(&coloredparms, ichain->bitpos);
                outonly_parm = lang == LANG_ADA && !pdeftab[argnum].inmode;
                setbitbb(&ever_altered, ichain->bitpos);
            } else {
                phi_t3 = true;
            }

            if (phi_t3 && !allcallersave) {
                if (argnum <= MIN(pdefmax, 3)) {
                    i = argnum;
                    while (pdeftab[i].opc == Unop) {
                        i--;
                    }
                    pdeftab[i].unk3 = true;
                }
            }
        } else if (ichain->type == isvar && ichain->isvar_issvar.location.memtype == Mmt && curblk == ichain->isvar_issvar.location.blockno && staticlinkloc == ichain->isvar_issvar.location.addr) {
            setbit(&coloredparms, ichain->bitpos);
            outonly_parm = false;
        }

        bittab[ichain->bitpos].unk4 = alloc_new(sizeof(struct BittabItemUnk4), &perm_heap);
        if (bittab[ichain->bitpos].unk4 == NULL) {
            outofmem = true;
            return;
        }

        bittab[ichain->bitpos].unk4->ichain = ichain;
        bittab[ichain->bitpos].unk4->unk8 = NULL;
        bittab[ichain->bitpos].unk4->unk4 = ichain->bitpos;
        formbvlivran(&bittab[ichain->bitpos].unk4->unkC);
        formbvlivran(&bittab[ichain->bitpos].unk4->unk14);
        phi_v1_2 = false;
        if (bittab[ichain->bitpos].unk4->unk14.blocks == NULL) {
            return;
        }
        bittab[ichain->bitpos].unk4->unk1C = -1;
        bittab[ichain->bitpos].unk4->unk20 = 0;
        bittab[ichain->bitpos].unk4->unk24 = 0;
        bittab[ichain->bitpos].unk4->unk23 = 0;
        bittab[ichain->bitpos].unk4->next = NULL;
        bittab[ichain->bitpos].unk4->interfere = NULL;
    } else {
        phi_v1_2 = bvectin(node->num, &bittab[ichain->bitpos].unk4->unk14);
    }

    if (!phi_v1_2) {
        numlu++;

        *dest = alloc_new(sizeof(struct livbb), &perm_heap);
        if (*dest == NULL) {
            outofmem = true;
            return;
        }

        (*dest)->count = 0;
        (*dest)->unk12 = 0;
        (*dest)->firstisstr = 0;
        (*dest)->unk13 = 0;
        (*dest)->node = node;

        if (bittab[ichain->bitpos].unk4->interfere == NULL) {
            bittab[ichain->bitpos].unk4->unk8 = *dest;
        } else {
            bittab[ichain->bitpos].unk4->interfere->next = *dest;
        }

        bittab[ichain->bitpos].unk4->interfere = *dest;
        (*dest)->next = NULL;
        (*dest)->unk8 = bittab[ichain->bitpos].unk4;
        (*dest)->unkC = node->unk30;
        node->unk30 = *dest;
        setbitbb(&bittab[ichain->bitpos].unk4->unk14, node->num);
        setbit(&node->bvs.stage2.appear, ichain->bitpos);
        (*dest)->needreglod = 0;
        (*dest)->needregsave = 0;
        (*dest)->deadout = 0;
    } else {
        *dest = node->unk30;
        while ((*dest)->unk8->ichain != ichain) {
            *dest = (*dest)->unkC;
        }
    }
}

__asm__(R""(
.set noat
.set noreorder

glabel passedinreg
    .ent passedinreg
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
    # 00464BFC localcolor
/* 0045DFAC 3C1C0FBC */  .cpload $t9
/* 0045DFB0 279CC2E4 */  
/* 0045DFB4 0399E021 */  
/* 0045DFB8 908E0016 */  lbu   $t6, 0x16($a0)
/* 0045DFBC 27BDFFE0 */  addiu $sp, $sp, -0x20
/* 0045DFC0 24010001 */  li    $at, 1
/* 0045DFC4 31CF0007 */  andi  $t7, $t6, 7
/* 0045DFC8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045DFCC 15E10003 */  bne   $t7, $at, .L0045DFDC
/* 0045DFD0 AFBC0018 */   sw    $gp, 0x18($sp)
/* 0045DFD4 10000033 */  b     .L0045E0A4
/* 0045DFD8 24030001 */   li    $v1, 1
.L0045DFDC:
/* 0045DFDC 8F988B0C */  lw     $t8, %got(allcallersave)($gp)
/* 0045DFE0 93180000 */  lbu   $t8, ($t8)
/* 0045DFE4 1300000F */  beqz  $t8, .L0045E024
/* 0045DFE8 00000000 */   nop   
/* 0045DFEC 8F828B28 */  lw     $v0, %got(mips3_64data)($gp)
/* 0045DFF0 90420000 */  lbu   $v0, ($v0)
/* 0045DFF4 14400009 */  bnez  $v0, .L0045E01C
/* 0045DFF8 00000000 */   nop   
/* 0045DFFC 90990001 */  lbu   $t9, 1($a0)
/* 0045E000 3C010500 */  lui   $at, 0x500
/* 0045E004 2F280020 */  sltiu $t0, $t9, 0x20
/* 0045E008 00084823 */  negu  $t1, $t0
/* 0045E00C 01215024 */  and   $t2, $t1, $at
/* 0045E010 032A1004 */  sllv  $v0, $t2, $t9
/* 0045E014 28420000 */  slti  $v0, $v0, 0
/* 0045E018 2C420001 */  sltiu $v0, $v0, 1
.L0045E01C:
/* 0045E01C 10000021 */  b     .L0045E0A4
/* 0045E020 304300FF */   andi  $v1, $v0, 0xff
.L0045E024:
/* 0045E024 8F9986BC */  lw    $t9, %call16(regclassof)($gp)
/* 0045E028 AFA40020 */  sw    $a0, 0x20($sp)
/* 0045E02C AFA50024 */  sw    $a1, 0x24($sp)
/* 0045E030 0320F809 */  jalr  $t9
/* 0045E034 00000000 */   nop   
/* 0045E038 24010001 */  li    $at, 1
/* 0045E03C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045E040 8FA40020 */  lw    $a0, 0x20($sp)
/* 0045E044 14410014 */  bne   $v0, $at, .L0045E098
/* 0045E048 8FA50024 */   lw    $a1, 0x24($sp)
/* 0045E04C 8C8B0010 */  lw    $t3, 0x10($a0)
/* 0045E050 0165102A */  slt   $v0, $t3, $a1
/* 0045E054 38420001 */  xori  $v0, $v0, 1
/* 0045E058 1040000D */  beqz  $v0, .L0045E090
/* 0045E05C 00000000 */   nop   
/* 0045E060 8F828B28 */  lw     $v0, %got(mips3_64data)($gp)
/* 0045E064 90420000 */  lbu   $v0, ($v0)
/* 0045E068 14400009 */  bnez  $v0, .L0045E090
/* 0045E06C 00000000 */   nop   
/* 0045E070 908C0001 */  lbu   $t4, 1($a0)
/* 0045E074 3C010500 */  lui   $at, 0x500
/* 0045E078 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 0045E07C 000D7023 */  negu  $t6, $t5
/* 0045E080 01C17824 */  and   $t7, $t6, $at
/* 0045E084 018F1004 */  sllv  $v0, $t7, $t4
/* 0045E088 28420000 */  slti  $v0, $v0, 0
/* 0045E08C 2C420001 */  sltiu $v0, $v0, 1
.L0045E090:
/* 0045E090 10000004 */  b     .L0045E0A4
/* 0045E094 304300FF */   andi  $v1, $v0, 0xff
.L0045E098:
/* 0045E098 8C980010 */  lw    $t8, 0x10($a0)
/* 0045E09C 0305182A */  slt   $v1, $t8, $a1
/* 0045E0A0 306300FF */  andi  $v1, $v1, 0xff
.L0045E0A4:
/* 0045E0A4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0045E0A8 27BD0020 */  addiu $sp, $sp, 0x20
/* 0045E0AC 00601025 */  move  $v0, $v1
/* 0045E0B0 03E00008 */  jr    $ra
/* 0045E0B4 00000000 */   nop   
    .type passedinreg, @function
    .size passedinreg, .-passedinreg
    .end passedinreg
)"");

__asm__(R""(
.set noat
.set noreorder

glabel varappear
    .ent varappear
    # 0045E0B8 varappear
    # 0045E1F8 caninsertearly
/* 0045E0B8 3C1C0FBC */  .cpload $t9
/* 0045E0BC 279CC1D8 */  
/* 0045E0C0 0399E021 */  
/* 0045E0C4 27BDFFD8 */  addiu $sp, $sp, -0x28
/* 0045E0C8 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045E0CC AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045E0D0 00A03025 */  move  $a2, $a1
/* 0045E0D4 8F8389CC */  lw     $v1, %got(nocopy)($gp)
.L0045E0D8:
/* 0045E0D8 54C00004 */  bnezl $a2, .L0045E0EC
/* 0045E0DC 90C20000 */   lbu   $v0, ($a2)
/* 0045E0E0 10000040 */  b     .L0045E1E4
/* 0045E0E4 A3A00027 */   sb    $zero, 0x27($sp)
/* 0045E0E8 90C20000 */  lbu   $v0, ($a2)
.L0045E0EC:
/* 0045E0EC 244EFFFF */  addiu $t6, $v0, -1
/* 0045E0F0 2DC10008 */  sltiu $at, $t6, 8
/* 0045E0F4 10200033 */  beqz  $at, .L0045E1C4
/* 0045E0F8 00000000 */   nop   
/* 0045E0FC 8F818044 */  lw    $at, %got(jtbl_1000D56C)($gp)
/* 0045E100 000E7080 */  sll   $t6, $t6, 2
/* 0045E104 002E0821 */  addu  $at, $at, $t6
/* 0045E108 8C2ED56C */  lw    $t6, %lo(jtbl_1000D56C)($at)
/* 0045E10C 01DC7021 */  addu  $t6, $t6, $gp
/* 0045E110 01C00008 */  jr    $t6
/* 0045E114 00000000 */   nop   
.L0045E118:
/* 0045E118 10000032 */  b     .L0045E1E4
/* 0045E11C A3A00027 */   sb    $zero, 0x27($sp)
.L0045E120:
/* 0045E120 8CC20030 */  lw    $v0, 0x30($a2)
/* 0045E124 50400005 */  beql  $v0, $zero, .L0045E13C
/* 0045E128 8CD80014 */   lw    $t8, 0x14($a2)
/* 0045E12C 8C6F0000 */  lw    $t7, ($v1)
/* 0045E130 15E20006 */  bne   $t7, $v0, .L0045E14C
/* 0045E134 00000000 */   nop   
/* 0045E138 8CD80014 */  lw    $t8, 0x14($a2)
.L0045E13C:
/* 0045E13C 0098C826 */  xor   $t9, $a0, $t8
/* 0045E140 2F390001 */  sltiu $t9, $t9, 1
/* 0045E144 10000027 */  b     .L0045E1E4
/* 0045E148 A3B90027 */   sb    $t9, 0x27($sp)
.L0045E14C:
/* 0045E14C 1000FFE2 */  b     .L0045E0D8
/* 0045E150 00403025 */   move  $a2, $v0
.L0045E154:
/* 0045E154 8F9984C4 */  lw    $t9, %call16(varappear)($gp)
/* 0045E158 8CC50024 */  lw    $a1, 0x24($a2)
/* 0045E15C AFA40028 */  sw    $a0, 0x28($sp)
/* 0045E160 0320F809 */  jalr  $t9
/* 0045E164 AFA6002C */   sw    $a2, 0x2c($sp)
/* 0045E168 304300FF */  andi  $v1, $v0, 0xff
/* 0045E16C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045E170 8FA40028 */  lw    $a0, 0x28($sp)
/* 0045E174 1460000F */  bnez  $v1, .L0045E1B4
/* 0045E178 8FA6002C */   lw    $a2, 0x2c($sp)
/* 0045E17C 90C80020 */  lbu   $t0, 0x20($a2)
/* 0045E180 8F8A8DBC */  lw     $t2, %got(optab)($gp)
/* 0045E184 00084880 */  sll   $t1, $t0, 2
/* 0045E188 01284823 */  subu  $t1, $t1, $t0
/* 0045E18C 012A5821 */  addu  $t3, $t1, $t2
/* 0045E190 916C0002 */  lbu   $t4, 2($t3)
/* 0045E194 11800007 */  beqz  $t4, .L0045E1B4
/* 0045E198 00000000 */   nop   
/* 0045E19C 8F9984C4 */  lw    $t9, %call16(varappear)($gp)
/* 0045E1A0 8CC50028 */  lw    $a1, 0x28($a2)
/* 0045E1A4 0320F809 */  jalr  $t9
/* 0045E1A8 00000000 */   nop   
/* 0045E1AC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045E1B0 304300FF */  andi  $v1, $v0, 0xff
.L0045E1B4:
/* 0045E1B4 1000000B */  b     .L0045E1E4
/* 0045E1B8 A3A30027 */   sb    $v1, 0x27($sp)
.L0045E1BC:
/* 0045E1BC 10000009 */  b     .L0045E1E4
/* 0045E1C0 A3A00027 */   sb    $zero, 0x27($sp)
.L0045E1C4:
/* 0045E1C4 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 0045E1C8 8F868044 */  lw    $a2, %got(RO_1000D560)($gp)
/* 0045E1CC 24040001 */  li    $a0, 1
/* 0045E1D0 240500CC */  li    $a1, 204
/* 0045E1D4 2407000A */  li    $a3, 10
/* 0045E1D8 0320F809 */  jalr  $t9
/* 0045E1DC 24C6D560 */   addiu $a2, %lo(RO_1000D560) # addiu $a2, $a2, -0x2aa0
/* 0045E1E0 8FBC0018 */  lw    $gp, 0x18($sp)
.L0045E1E4:
/* 0045E1E4 8FBF001C */  lw    $ra, 0x1c($sp)
/* 0045E1E8 93A20027 */  lbu   $v0, 0x27($sp)
/* 0045E1EC 27BD0028 */  addiu $sp, $sp, 0x28
/* 0045E1F0 03E00008 */  jr    $ra
/* 0045E1F4 00000000 */   nop   
    .type varappear, @function
    .size varappear, .-varappear
    .end varappear
)"");

__asm__(R""(
.set noat
.set noreorder

glabel caninsertearly
    .ent caninsertearly
    # 00461AAC makelivranges
/* 0045E1F8 3C1C0FBC */  .cpload $t9
/* 0045E1FC 279CC098 */  
/* 0045E200 0399E021 */  
/* 0045E204 27BDFFC0 */  addiu $sp, $sp, -0x40
/* 0045E208 AFBE0038 */  sw    $fp, 0x38($sp)
/* 0045E20C 8F9E89E8 */  lw     $fp, %got(firstconstbit)($gp)
/* 0045E210 AFB70030 */  sw    $s7, 0x30($sp)
/* 0045E214 AFB2001C */  sw    $s2, 0x1c($sp)
/* 0045E218 8FC20000 */  lw    $v0, ($fp)
/* 0045E21C AFB10018 */  sw    $s1, 0x18($sp)
/* 0045E220 00A0B825 */  move  $s7, $a1
/* 0045E224 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0045E228 AFBC0034 */  sw    $gp, 0x34($sp)
/* 0045E22C AFB6002C */  sw    $s6, 0x2c($sp)
/* 0045E230 AFB50028 */  sw    $s5, 0x28($sp)
/* 0045E234 AFB40024 */  sw    $s4, 0x24($sp)
/* 0045E238 AFB30020 */  sw    $s3, 0x20($sp)
/* 0045E23C AFB00014 */  sw    $s0, 0x14($sp)
/* 0045E240 AFA40040 */  sw    $a0, 0x40($sp)
/* 0045E244 24120001 */  li    $s2, 1
/* 0045E248 18400062 */  blez  $v0, .L0045E3D4
/* 0045E24C 00008825 */   move  $s1, $zero
/* 0045E250 00009900 */  sll   $s3, $zero, 4
/* 0045E254 24160080 */  li    $s6, 128
/* 0045E258 8F9589EC */  lw     $s5, %got(bittab)($gp)
/* 0045E25C 8F948CEC */  lw     $s4, %got(storeop)($gp)
/* 0045E260 8EEE0168 */  lw    $t6, 0x168($s7)
.L0045E264:
/* 0045E264 01D37821 */  addu  $t7, $t6, $s3
/* 0045E268 8DF8000C */  lw    $t8, 0xc($t7)
/* 0045E26C 8DF90008 */  lw    $t9, 8($t7)
/* 0045E270 8DE90004 */  lw    $t1, 4($t7)
/* 0045E274 8DEB0000 */  lw    $t3, ($t7)
/* 0045E278 03194025 */  or    $t0, $t8, $t9
/* 0045E27C 01095025 */  or    $t2, $t0, $t1
/* 0045E280 014B6025 */  or    $t4, $t2, $t3
/* 0045E284 15800003 */  bnez  $t4, .L0045E294
/* 0045E288 00000000 */   nop   
/* 0045E28C 1000004B */  b     .L0045E3BC
/* 0045E290 26310080 */   addiu $s1, $s1, 0x80
.L0045E294:
/* 0045E294 12400049 */  beqz  $s2, .L0045E3BC
/* 0045E298 00008025 */   move  $s0, $zero
/* 0045E29C 0222082A */  slt   $at, $s1, $v0
/* 0045E2A0 10200046 */  beqz  $at, .L0045E3BC
/* 0045E2A4 2E0D0080 */   sltiu $t5, $s0, 0x80
.L0045E2A8:
/* 0045E2A8 11A00009 */  beqz  $t5, .L0045E2D0
/* 0045E2AC 00000000 */   nop   
/* 0045E2B0 8EEE0168 */  lw    $t6, 0x168($s7)
/* 0045E2B4 0010C943 */  sra   $t9, $s0, 5
/* 0045E2B8 00194080 */  sll   $t0, $t9, 2
/* 0045E2BC 01D3C021 */  addu  $t8, $t6, $s3
/* 0045E2C0 03084821 */  addu  $t1, $t8, $t0
/* 0045E2C4 8D2F0000 */  lw    $t7, ($t1)
/* 0045E2C8 020F5004 */  sllv  $t2, $t7, $s0
/* 0045E2CC 294D0000 */  slti  $t5, $t2, 0
.L0045E2D0:
/* 0045E2D0 51A00032 */  beql  $t5, $zero, .L0045E39C
/* 0045E2D4 26100001 */   addiu $s0, $s0, 1
/* 0045E2D8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0045E2DC 02202025 */  move  $a0, $s1
/* 0045E2E0 02802825 */  move  $a1, $s4
/* 0045E2E4 0320F809 */  jalr  $t9
/* 0045E2E8 00000000 */   nop   
/* 0045E2EC 1040002A */  beqz  $v0, .L0045E398
/* 0045E2F0 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045E2F4 8EAC0000 */  lw    $t4, ($s5)
/* 0045E2F8 001170C0 */  sll   $t6, $s1, 3
/* 0045E2FC 018EC821 */  addu  $t9, $t4, $t6
/* 0045E300 8F220000 */  lw    $v0, ($t9)
/* 0045E304 90430010 */  lbu   $v1, 0x10($v0)
/* 0045E308 2463FFE0 */  addiu $v1, $v1, -0x20
/* 0045E30C 2C780080 */  sltiu $t8, $v1, 0x80
/* 0045E310 13000009 */  beqz  $t8, .L0045E338
/* 0045E314 2C6E0060 */   sltiu $t6, $v1, 0x60
/* 0045E318 8F8F8044 */  lw    $t7, %got(D_10010DE4)($gp)
/* 0045E31C 00034143 */  sra   $t0, $v1, 5
/* 0045E320 00084880 */  sll   $t1, $t0, 2
/* 0045E324 25EF0DE4 */  addiu $t7, %lo(D_10010DE4) # addiu $t7, $t7, 0xde4
/* 0045E328 01E95021 */  addu  $t2, $t7, $t1
/* 0045E32C 8D4B0000 */  lw    $t3, ($t2)
/* 0045E330 006B6804 */  sllv  $t5, $t3, $v1
/* 0045E334 29B80000 */  slti  $t8, $t5, 0
.L0045E338:
/* 0045E338 13000003 */  beqz  $t8, .L0045E348
/* 0045E33C 00000000 */   nop   
/* 0045E340 10000015 */  b     .L0045E398
/* 0045E344 00009025 */   move  $s2, $zero
.L0045E348:
/* 0045E348 11C00009 */  beqz  $t6, .L0045E370
/* 0045E34C 00000000 */   nop   
/* 0045E350 8F8F8044 */  lw    $t7, %got(D_10010DD8)($gp)
/* 0045E354 0003C943 */  sra   $t9, $v1, 5
/* 0045E358 00194080 */  sll   $t0, $t9, 2
/* 0045E35C 25EF0DD8 */  addiu $t7, %lo(D_10010DD8) # addiu $t7, $t7, 0xdd8
/* 0045E360 01E84821 */  addu  $t1, $t7, $t0
/* 0045E364 8D2A0000 */  lw    $t2, ($t1)
/* 0045E368 006A5804 */  sllv  $t3, $t2, $v1
/* 0045E36C 296E0000 */  slti  $t6, $t3, 0
.L0045E370:
/* 0045E370 51C0000A */  beql  $t6, $zero, .L0045E39C
/* 0045E374 26100001 */   addiu $s0, $s0, 1
/* 0045E378 8F9984C4 */  lw    $t9, %call16(varappear)($gp)
/* 0045E37C 8C440014 */  lw    $a0, 0x14($v0)
/* 0045E380 8FA50040 */  lw    $a1, 0x40($sp)
/* 0045E384 0320F809 */  jalr  $t9
/* 0045E388 00000000 */   nop   
/* 0045E38C 10400002 */  beqz  $v0, .L0045E398
/* 0045E390 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0045E394 00009025 */  move  $s2, $zero
.L0045E398:
/* 0045E398 26100001 */  addiu $s0, $s0, 1
.L0045E39C:
/* 0045E39C 12400007 */  beqz  $s2, .L0045E3BC
/* 0045E3A0 26310001 */   addiu $s1, $s1, 1
/* 0045E3A4 8FCC0000 */  lw    $t4, ($fp)
/* 0045E3A8 022C082A */  slt   $at, $s1, $t4
/* 0045E3AC 10200003 */  beqz  $at, .L0045E3BC
/* 0045E3B0 00000000 */   nop   
/* 0045E3B4 5616FFBC */  bnel  $s0, $s6, .L0045E2A8
/* 0045E3B8 2E0D0080 */   sltiu $t5, $s0, 0x80
.L0045E3BC:
/* 0045E3BC 12400005 */  beqz  $s2, .L0045E3D4
/* 0045E3C0 26730010 */   addiu $s3, $s3, 0x10
/* 0045E3C4 8FC20000 */  lw    $v0, ($fp)
/* 0045E3C8 0222082A */  slt   $at, $s1, $v0
/* 0045E3CC 5420FFA5 */  bnezl $at, .L0045E264
/* 0045E3D0 8EEE0168 */   lw    $t6, 0x168($s7)
.L0045E3D4:
/* 0045E3D4 8FBF003C */  lw    $ra, 0x3c($sp)
/* 0045E3D8 02401025 */  move  $v0, $s2
/* 0045E3DC 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0045E3E0 8FB00014 */  lw    $s0, 0x14($sp)
/* 0045E3E4 8FB10018 */  lw    $s1, 0x18($sp)
/* 0045E3E8 8FB30020 */  lw    $s3, 0x20($sp)
/* 0045E3EC 8FB40024 */  lw    $s4, 0x24($sp)
/* 0045E3F0 8FB50028 */  lw    $s5, 0x28($sp)
/* 0045E3F4 8FB6002C */  lw    $s6, 0x2c($sp)
/* 0045E3F8 8FB70030 */  lw    $s7, 0x30($sp)
/* 0045E3FC 8FBE0038 */  lw    $fp, 0x38($sp)
/* 0045E400 03E00008 */  jr    $ra
/* 0045E404 27BD0040 */   addiu $sp, $sp, 0x40
    .type caninsertearly, @function
    .size caninsertearly, .-caninsertearly
    .end caninsertearly
)"");

__asm__(R""(
.set noat
.set noreorder

glabel sizeofsetexpr
    .ent sizeofsetexpr
    # 0045E5C4 func_0045E5C4
    # 0045FBB4 func_0045FBB4
/* 0045E408 90820010 */  lbu   $v0, 0x10($a0)
/* 0045E40C 24010002 */  li    $at, 2
/* 0045E410 2C4E00A0 */  sltiu $t6, $v0, 0xa0
/* 0045E414 51C0000A */  beql  $t6, $zero, .L0045E440
/* 0045E418 01C002B4 */   teq   $t6, $zero, 0xa
/* 0045E41C 8F998044 */  lw    $t9, %got(D_10010DF4)($gp)
/* 0045E420 00027943 */  sra   $t7, $v0, 5
/* 0045E424 000FC080 */  sll   $t8, $t7, 2
/* 0045E428 27390DF4 */  addiu $t9, %lo(D_10010DF4) # addiu $t9, $t9, 0xdf4
/* 0045E42C 03384021 */  addu  $t0, $t9, $t8
/* 0045E430 8D090000 */  lw    $t1, ($t0)
/* 0045E434 00495004 */  sllv  $t2, $t1, $v0
/* 0045E438 294E0000 */  slti  $t6, $t2, 0
/* 0045E43C 01C002B4 */  teq   $t6, $zero, 0xa
.L0045E440:
/* 0045E440 54410004 */  bnel  $v0, $at, .L0045E454
/* 0045E444 8C82001C */   lw    $v0, 0x1c($a0)
/* 0045E448 03E00008 */  jr    $ra
/* 0045E44C 94820024 */   lhu   $v0, 0x24($a0)

/* 0045E450 8C82001C */  lw    $v0, 0x1c($a0)
.L0045E454:
/* 0045E454 03E00008 */  jr    $ra
/* 0045E458 00000000 */   nop   
    .type sizeofsetexpr, @function
    .size sizeofsetexpr, .-sizeofsetexpr
    .end sizeofsetexpr
)"");

/*
0045E5C4 func_0045E5C4
*/
static void func_0045E45C(struct TrepImageThing *trep, bool is_equ_neq, struct Graphnode *node_shared) {
    struct livbb *sp3C;
    union Constant value;
    bool const_reg;

    if (do_const_in_reg) {
        if (trep->opc == Ulda) {
            const_reg = true;
        } else {
            value.intval = trep->unk18;
            if (is_equ_neq) {
                const_reg = constinreg(Jdt, is_equ_neq, value, 3);
            } else {
                const_reg = constinreg(Jdt, is_equ_neq, value, 1);
            }
        }

        if (const_reg) {
            trep->unk28->bitpos = newbit(trep->unk28, NULL);
            formlivbb(trep->unk28, node_shared, &sp3C);
            if (outofmem) {
                return;
            }

            sp3C->count++;
            if (sp3C->count == 1) {
                setbit(&node_shared->bvs.stage2.loclive, trep->unk28->bitpos);
            }
        }
    }
}

/*
0045E5C4 func_0045E5C4
00461640 func_00461640
00461AAC makelivranges
*/
static void func_0045E5C4(struct Expression *expr, unsigned char arg1, struct Graphnode *node_shared, struct livbb **livbb_shared) {
    struct livbb *livbb_saved;
    int phi_s1;
    struct IChain *phi_a3;

    *livbb_shared = NULL;
    if (expr == NULL) {
        return;
    }

    switch (expr->type) {
        case isconst:
            if (constinreg(expr->datatype, arg1, expr->data.isconst.number, arg1)) {
                if (expr->ichain->bitpos == 0xFFFF) {
                    expr->ichain->bitpos = newbit(expr->ichain, NULL);
                }

                formlivbb(expr->ichain, node_shared, livbb_shared);
                if (outofmem) {
                    return;
                }

                (*livbb_shared)->count++;
                if ((*livbb_shared)->count == 1) {
                    setbit(&node_shared->bvs.stage2.loclive, expr->ichain->bitpos);
                }
            }
            return;

        case islda:
            if (ldainreg(expr->data.islda_isilda.address.memtype, expr->data.islda_isilda.offset, arg1)) {
                if (expr->ichain->bitpos == 0xFFFF) {
                    expr->ichain->bitpos = newbit(expr->ichain, NULL);
                }

                formlivbb(expr->ichain, node_shared, livbb_shared);
                if (outofmem) {
                    return;
                }

                (*livbb_shared)->count++;
                if ((*livbb_shared)->count == 1) {
                    setbit(&node_shared->bvs.stage2.loclive, expr->ichain->bitpos);
                }
            }
            return;

        case isvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_0045E5C4(expr->data.isvar_issvar.copy, arg1, node_shared, livbb_shared);
            }
            return;

        case isilda:
            if (expr->unk4 == 0) {
                if (!bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.scm.region)) {
                    if (!bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.subinsert) ||
                            (expr->data.islda_isilda.outer_stack->type == issvar &&
                             expr->data.islda_isilda.outer_stack->unk2 &&
                             !bvectin(expr->data.islda_isilda.outer_stack->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand))) {
                        expr->unk4 = 1;
                    } else {
                        expr->unk4 = 5;
                        setbit(&node_shared->bvs.stage1.u.scm.region, expr->ichain->bitpos);
                        setbit(&coloreditems, expr->ichain->bitpos);
                    }
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.delete) &&
                        (expr->data.islda_isilda.outer_stack->type != issvar ||
                         expr->data.islda_isilda.outer_stack->unk3 ||
                         bvectin(expr->data.islda_isilda.outer_stack->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand))) {
                    expr->unk4 = 2;
                    expr->unk5 = 7;
                } else if (expr->data.islda_isilda.outer_stack->type == issvar &&
                        expr->data.islda_isilda.outer_stack->unk2 &&
                        !bvectin(expr->data.islda_isilda.outer_stack->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand)) {
                    expr->unk4 = 4;
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.scm.source)) {
                    expr->unk4 = 3;
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.subinsert)) {
                    expr->unk4 = 5;
                } else {
                    expr->unk4 = 4;
                }
            }

            if (expr->unk5 == 7) {
                formlivbb(expr->ichain, node_shared, livbb_shared);
                if (outofmem) {
                    return;
                }

                (*livbb_shared)->count++;
                if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                    setbit(&node_shared->bvs.stage2.loclive, expr->ichain->bitpos);
                }
            } else {
                func_0045E5C4(expr->data.islda_isilda.outer_stack, 3, node_shared, livbb_shared);

                if ((expr->count > 1 && expr->unk4 != 2) || ((expr->unk4 == 3 || expr->unk4 == 5) && expr->unk5 != 7)) {
                    formlivbb(expr->ichain, node_shared, livbb_shared);
                    if (outofmem == 0) {
                        (*livbb_shared)->unk12++;
                        setbit(&node_shared->bvs.stage2.locdef, expr->ichain->bitpos);
                        if ((*livbb_shared)->count == 0) {
                            (*livbb_shared)->firstisstr = true;
                        }
                        (*livbb_shared)->count++;
                        expr->unk5 = 7;
                    }
                } else {
                    *livbb_shared = NULL;
                }
            }
            return;

        case issvar:
            if (expr->data.isvar_issvar.copy != NULL && expr->data.isvar_issvar.copy != nocopy) {
                func_0045E5C4(expr->data.isvar_issvar.copy, arg1, node_shared, livbb_shared);
                return;
            }

            if (expr->unk4 == 0) {
                if (!bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.scm.region)) {
                    if (!bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.subinsert) ||
                            (expr->unk2 &&
                             !bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand))) {
                        expr->unk4 = 1;
                    } else {
                        expr->unk4 = 5;
                        setbit(&node_shared->bvs.stage1.u.scm.region, expr->ichain->bitpos);
                        setbit(&coloreditems, expr->ichain->bitpos);
                    }
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.delete) &&
                        (expr->unk3 || bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand))) {
                    expr->unk4 = 2;
                    expr->unk5 = 7;
                } else if (expr->unk2 && !bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand)) {
                    expr->unk4 = 4;
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.scm.source)) {
                    expr->unk4 = 3;
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.subinsert)) {
                    expr->unk4 = 5;
                } else {
                    expr->unk4 = 4;
                }
            }

            if (expr->unk5 == 7) {
                if (((expr->datatype != Idt && expr->datatype != Kdt) || dwopcode)) {
                    formlivbb(expr->ichain, node_shared, livbb_shared);
                    if (outofmem) {
                        return;
                    }

                    (*livbb_shared)->count++;
                    if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                        setbit(&node_shared->bvs.stage2.loclive, expr->ichain->bitpos);
                    }
                }
                return;
            }

            func_0045E5C4(expr->data.isvar_issvar.outer_stack, 3, node_shared, livbb_shared);
            if (((expr->count > 1 && expr->unk4 != 2) || ((expr->unk4 == 3 || expr->unk4 == 5) && expr->unk5 != 7)) &&
                    ((expr->datatype != Idt && expr->datatype != Kdt) || dwopcode)) {
                formlivbb(expr->ichain, node_shared, livbb_shared);
                if (outofmem) {
                    return;
                }

                (*livbb_shared)->unk12++;
                setbit(&node_shared->bvs.stage2.locdef, expr->ichain->bitpos);

                if ((*livbb_shared)->count == 0) {
                    (*livbb_shared)->firstisstr = 1;
                }
                (*livbb_shared)->count++;
                expr->unk5 = 7;
            } else {
                *livbb_shared = NULL;
            }
            return;

        case isop:
            if (expr->unk4 == 0) {
                if (!bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.scm.region)) {
                    if (!bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.subinsert) ||
                            (!expr->data.isop.unk22 && !bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand))) {
                        expr->unk4 = 1;
                    } else {
                        expr->unk4 = 5;
                        setbit(&node_shared->bvs.stage1.u.scm.region, expr->ichain->bitpos);
                        setbit(&coloreditems, expr->ichain->bitpos);
                    }
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.delete) &&
                        (expr->data.isop.unk21 || bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand))) {
                    expr->unk4 = 2;
                    expr->unk5 = 7;
                } else if (!expr->data.isop.unk22 && !bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.cand)) {
                    expr->unk4 = 4;
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.scm.source)) {
                    expr->unk4 = 3;
                } else if (bvectin(expr->ichain->bitpos, &node_shared->bvs.stage1.u.cm.subinsert)) {
                    expr->unk4 = 5;
                } else {
                    expr->unk4 = 4;
                }
            }

            if (expr->unk5 == 7) {
                if (((expr->data.isop.datatype != Idt && expr->data.isop.datatype != Kdt) || dwopcode) &&
                        (expr->data.isop.datatype != Sdt || sizeofsetexpr(expr->ichain) <= int_reg_size)) {
                    formlivbb(expr->ichain, node_shared, livbb_shared);
                    if (outofmem) {
                        return;
                    }

                    (*livbb_shared)->count++;
                    if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                        setbit(&node_shared->bvs.stage2.loclive, expr->ichain->bitpos);
                    }
                }
                return;
            }

            if (optab[expr->data.isop.opc].is_binary_op) {

                if ((expr->data.isop.opc == Uequ ||
                            expr->data.isop.opc == Ugeq ||
                            expr->data.isop.opc == Ugrt ||
                            expr->data.isop.opc == Uleq ||
                            expr->data.isop.opc == Ules ||
                            expr->data.isop.opc == Uneq) &&
                        (expr->data.isop.aux.unk38_trep->ichain2 != NULL || expr->data.isop.aux2.unk3C_trep->ichain2 != NULL)) {

                    if (expr->data.isop.aux.unk38_trep->ichain2 != NULL &&
                            ((expr->data.isop.aux.unk38_trep->ichain2->dtype != Idt && expr->data.isop.aux.unk38_trep->ichain2->dtype != Kdt) || dwopcode)) {
                        formlivbb(expr->data.isop.aux.unk38_trep->ichain2, node_shared, livbb_shared);
                        if (outofmem) {
                            return;
                        }

                        (*livbb_shared)->count++;
                        if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                            setbit(&node_shared->bvs.stage2.loclive, expr->data.isop.aux.unk38_trep->ichain2->bitpos);
                        }

                        if (expr->data.isop.op2->type == isconst) {
                            func_0045E45C(expr->data.isop.aux.unk38_trep, expr->data.isop.opc == Uequ || expr->data.isop.opc == Uneq, node_shared);
                        } else if ((expr->data.isop.aux2.unk3C_trep->ichain->dtype != Idt && expr->data.isop.aux2.unk3C_trep->ichain->dtype != Kdt) || dwopcode) {
                            formlivbb(expr->data.isop.aux2.unk3C_trep->ichain, node_shared, livbb_shared);
                            if (outofmem) {
                                return;
                            }

                            (*livbb_shared)->count++;
                            TRAP_IF((*livbb_shared)->unk12 != 0);
                            setbit(&node_shared->bvs.stage2.loclive, expr->data.isop.aux2.unk3C_trep->ichain->bitpos);
                        }
                    }


                    if (expr->data.isop.aux2.unk3C_trep->ichain2 != NULL &&
                            ((expr->data.isop.aux2.unk3C_trep->ichain2->dtype != Idt && expr->data.isop.aux2.unk3C_trep->ichain2->dtype != Kdt) || dwopcode)) {
                        formlivbb(expr->data.isop.aux2.unk3C_trep->ichain2, node_shared, livbb_shared);
                        if (outofmem) {
                            return;
                        }

                        (*livbb_shared)->count++;
                        if ((*livbb_shared)->count == 1 && (*livbb_shared)->unk12 == 0) {
                            setbit(&node_shared->bvs.stage2.loclive, expr->data.isop.aux2.unk3C_trep->ichain2->bitpos);
                        }

                        if (expr->data.isop.op1->type == isconst) {
                            func_0045E45C(expr->data.isop.aux2.unk3C_trep, expr->data.isop.opc == Uequ || expr->data.isop.opc == Uneq, node_shared);
                        } else if ((expr->data.isop.aux.unk38_trep->ichain->dtype != Idt && expr->data.isop.aux.unk38_trep->ichain->dtype != Kdt) || dwopcode) {
                            formlivbb(expr->data.isop.aux.unk38_trep->ichain, node_shared, livbb_shared);
                            if (outofmem) {
                                return;
                            }

                            (*livbb_shared)->count++;
                            TRAP_IF((*livbb_shared)->unk12 != 0);
                            setbit(&node_shared->bvs.stage2.loclive, expr->data.isop.aux.unk38_trep->ichain->bitpos);
                        }
                    }
                    *livbb_shared = NULL;
                } else {
                    switch (expr->data.isop.opc) {
                        case Uequ:
                        case Uneq:
                            phi_s1 = 3;
                            break;

                        case Uand:
                        case Uior:
                        case Uxor:
                            phi_s1 = 2;
                            break;

                        case Uadd:
                        case Ugeq:
                        case Ugrt:
                        case Uleq:
                        case Ules:
                        case Usub:
                            phi_s1 = 1;
                            break;

                        case Udiv:
                        case Umod:
                        case Umpy:
                        case Urem:
                            phi_s1 = 5;
                            break;

                        default:
                            phi_s1 = 0;
                            break;
                    }

                    if (expr->data.isop.opc == Usub) {
                        func_0045E5C4(expr->data.isop.op1, 3, node_shared, livbb_shared);
                    } else {
                        func_0045E5C4(expr->data.isop.op1, phi_s1, node_shared, livbb_shared);
                    }
                    func_0045E5C4(expr->data.isop.op2, phi_s1, node_shared, livbb_shared);
                }
            } else {
                if (expr->data.isop.opc == Uilod ||
                        expr->data.isop.opc == Uirlv ||
                        expr->data.isop.opc == Uildv ||
                        expr->data.isop.opc == Uirld) {
                    func_0045E5C4(expr->data.isop.op1, 3, node_shared, livbb_shared);
                } else {
                    func_0045E5C4(expr->data.isop.op1, 0, node_shared, livbb_shared);
                }
            }

            if ((expr->count > 1 && expr->unk4 != 2) || ((expr->unk4 == 3 || expr->unk4 == 5) && expr->unk5 != 7)) {
                expr->unk5 = 7;
                if (expr->data.isop.datatype == Sdt && int_reg_size < sizeofsetexpr(expr->ichain)) {
                    *livbb_shared = NULL;
                    return;
                }

                if ((expr->data.isop.datatype != Idt && expr->data.isop.datatype != Kdt) || dwopcode) {
                    formlivbb(expr->ichain, node_shared, livbb_shared);
                    if (outofmem) {
                        return;
                    }

                    (*livbb_shared)->unk12++;
                    setbit(&node_shared->bvs.stage2.locdef, expr->ichain->bitpos);
                    if ((*livbb_shared)->count == 0) {
                        (*livbb_shared)->firstisstr = true;
                    }

                    (*livbb_shared)->count++;
                } else {
                    *livbb_shared = NULL;
                }

                if ((expr->data.isop.opc != Uadj &&
                            expr->data.isop.opc != Ucg2 &&
                            expr->data.isop.opc != Ucvt &&
                            expr->data.isop.opc != Urnd &&
                            expr->data.isop.opc != Utyp &&
                            expr->data.isop.opc != Uidx &&
                            expr->data.isop.opc != Uinn &&
                            expr->data.isop.opc != Uiequ &&
                            expr->data.isop.opc != Uineq &&
                            expr->data.isop.opc != Uigeq &&
                            expr->data.isop.opc != Uigrt &&
                            expr->data.isop.opc != Uileq &&
                            expr->data.isop.opc != Uiles &&
                            expr->data.isop.opc != Uilod &&
                            expr->data.isop.opc != Uildv &&
                            expr->data.isop.opc != Uirld &&
                            expr->data.isop.opc != Uirlv) &&
                        expr->ichain->isop.unk24_cand != NULL && expr->ichain->isop.unk24_cand != nota_candof) {

                    if (expr->ichain->isop.unk24_cand->unk18 == 0) {
                        phi_a3 = alloc_new(sizeof (struct IChain), &perm_heap);
                        *phi_a3 = *expr->ichain->isop.unk24_cand->ichain;

                        phi_a3->isop.opc = Ucg1;
                        expr->ichain->isop.unk24_cand->unk18 = newbit(phi_a3, NULL);
                        phi_a3->bitpos = expr->ichain->isop.unk24_cand->unk18;

                        if ((tempdisp & 3) != 0) {
                            tempdisp = (tempdisp - (tempdisp & 3)) + 4;
                        }

                        phi_a3->isop.temploc = alloc_new(0x14, &perm_heap);
                        if (!stack_reversed) {
                            tempdisp += 4;
                            phi_a3->isop.temploc->disp = -tempdisp;
                        } else {
                            phi_a3->isop.temploc->disp = tempdisp;
                            tempdisp += 4;
                        }
                    } else {
                        phi_a3 = bittab[expr->ichain->isop.unk24_cand->unk18].ichain;
                    }

                    if ((phi_a3->isop.datatype != Idt && phi_a3->isop.datatype != Kdt) || dwopcode) {
                        livbb_saved = *livbb_shared;
                        formlivbb(expr->ichain->isop.unk24_cand->ichain_unk10, node_shared, livbb_shared);
                        if ((*livbb_shared)->count == 0 && (*livbb_shared)->unk12 == 0) {
                            setbit(&node_shared->bvs.stage2.loclive, expr->ichain->isop.unk24_cand->ichain_unk10->bitpos);
                        }

                        (*livbb_shared)->count++;
                        formlivbb(phi_a3, node_shared, livbb_shared);
                        (*livbb_shared)->unk12++;

                        setbit(&node_shared->bvs.stage2.locdef, expr->ichain->isop.unk24_cand->unk18);
                        if ((*livbb_shared)->count == 0) {
                            (*livbb_shared)->firstisstr = 1;
                        }

                        *livbb_shared = livbb_saved;
                    }
                }
            } else {
                *livbb_shared = NULL;
            }
            return;

        case isrconst:
            break;

        case dumped:
            caseerror(1, 335, "uoptreg1.p", 0xA);
            break;
    }
}

__asm__(R""(
.set noat
.set noreorder

    .type func_0045FBB4, @function
func_0045FBB4:
    # 0045FBB4 func_0045FBB4
    # 00461AAC makelivranges
/* 0045FBB4 3C1C0FBC */  .cpload $t9
/* 0045FBB8 279CA6DC */  
/* 0045FBBC 0399E021 */  
/* 0045FBC0 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 0045FBC4 AFBF001C */  sw    $ra, 0x1c($sp)
/* 0045FBC8 AFBC0018 */  sw    $gp, 0x18($sp)
/* 0045FBCC AFB00014 */  sw    $s0, 0x14($sp)
/* 0045FBD0 AFA5005C */  sw    $a1, 0x5c($sp)
/* 0045FBD4 AFA60060 */  sw    $a2, 0x60($sp)
/* 0045FBD8 AFA20054 */  sw    $v0, 0x54($sp)
/* 0045FBDC 90830000 */  lbu   $v1, ($a0)
/* 0045FBE0 00808025 */  move  $s0, $a0
/* 0045FBE4 246EFFFF */  addiu $t6, $v1, -1
/* 0045FBE8 2DC10008 */  sltiu $at, $t6, 8
/* 0045FBEC 10200517 */  beqz  $at, .L0046104C
/* 0045FBF0 00000000 */   nop   
/* 0045FBF4 8F818044 */  lw    $at, %got(jtbl_1000D5C4)($gp)
/* 0045FBF8 000E7080 */  sll   $t6, $t6, 2
/* 0045FBFC 002E0821 */  addu  $at, $at, $t6
/* 0045FC00 8C2ED5C4 */  lw    $t6, %lo(jtbl_1000D5C4)($at)
/* 0045FC04 01DC7021 */  addu  $t6, $t6, $gp
/* 0045FC08 01C00008 */  jr    $t6
/* 0045FC0C 00000000 */   nop   
.L0045FC10:
/* 0045FC10 240F0001 */  li    $t7, 1
/* 0045FC14 10000515 */  b     .L0046106C
/* 0045FC18 A3AF0053 */   sb    $t7, 0x53($sp)
.L0045FC1C:
/* 0045FC1C 24180001 */  li    $t8, 1
/* 0045FC20 10000512 */  b     .L0046106C
/* 0045FC24 A3B80053 */   sb    $t8, 0x53($sp)
.L0045FC28:
/* 0045FC28 24190001 */  li    $t9, 1
/* 0045FC2C 1000050F */  b     .L0046106C
/* 0045FC30 A3B90053 */   sb    $t9, 0x53($sp)
.L0045FC34:
/* 0045FC34 26020010 */  addiu $v0, $s0, 0x10
/* 0045FC38 8C440000 */  lw    $a0, ($v0)
/* 0045FC3C 8F99864C */  lw    $t9, %call16(isvarhash)($gp)
/* 0045FC40 AFA40000 */  sw    $a0, ($sp)
/* 0045FC44 8C450004 */  lw    $a1, 4($v0)
/* 0045FC48 AFA20020 */  sw    $v0, 0x20($sp)
/* 0045FC4C 0320F809 */  jalr  $t9
/* 0045FC50 AFA50004 */   sw    $a1, 4($sp)
/* 0045FC54 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045FC58 93AF0063 */  lbu   $t7, 0x63($sp)
/* 0045FC5C 00026080 */  sll   $t4, $v0, 2
/* 0045FC60 8F8D8DF8 */  lw     $t5, %got(table)($gp)
/* 0045FC64 AFA20048 */  sw    $v0, 0x48($sp)
/* 0045FC68 00004025 */  move  $t0, $zero
/* 0045FC6C 018D7021 */  addu  $t6, $t4, $t5
/* 0045FC70 8DC30000 */  lw    $v1, ($t6)
/* 0045FC74 11E00069 */  beqz  $t7, .L0045FE1C
/* 0045FC78 24090001 */   li    $t1, 1
/* 0045FC7C 1060002A */  beqz  $v1, .L0045FD28
/* 0045FC80 00000000 */   nop   
/* 0045FC84 90780000 */  lbu   $t8, ($v1)
.L0045FC88:
/* 0045FC88 24010003 */  li    $at, 3
/* 0045FC8C 1701001F */  bne   $t8, $at, .L0045FD0C
/* 0045FC90 00000000 */   nop   
/* 0045FC94 8C640028 */  lw    $a0, 0x28($v1)
/* 0045FC98 8C65002C */  lw    $a1, 0x2c($v1)
/* 0045FC9C 8FAB0020 */  lw    $t3, 0x20($sp)
/* 0045FCA0 AFA40000 */  sw    $a0, ($sp)
/* 0045FCA4 AFA50004 */  sw    $a1, 4($sp)
/* 0045FCA8 8D660000 */  lw    $a2, ($t3)
/* 0045FCAC 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0045FCB0 AFA60008 */  sw    $a2, 8($sp)
/* 0045FCB4 8D670004 */  lw    $a3, 4($t3)
/* 0045FCB8 A3A9004F */  sb    $t1, 0x4f($sp)
/* 0045FCBC A3A80051 */  sb    $t0, 0x51($sp)
/* 0045FCC0 AFA30044 */  sw    $v1, 0x44($sp)
/* 0045FCC4 0320F809 */  jalr  $t9
/* 0045FCC8 AFA7000C */   sw    $a3, 0xc($sp)
/* 0045FCCC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045FCD0 8FA30044 */  lw    $v1, 0x44($sp)
/* 0045FCD4 93A80051 */  lbu   $t0, 0x51($sp)
/* 0045FCD8 1040000C */  beqz  $v0, .L0045FD0C
/* 0045FCDC 93A9004F */   lbu   $t1, 0x4f($sp)
/* 0045FCE0 8FAE0054 */  lw    $t6, 0x54($sp)
/* 0045FCE4 8C780010 */  lw    $t8, 0x10($v1)
/* 0045FCE8 8DCFFFFC */  lw    $t7, -4($t6)
/* 0045FCEC 15F80007 */  bne   $t7, $t8, .L0045FD0C
/* 0045FCF0 00000000 */   nop   
/* 0045FCF4 90680002 */  lbu   $t0, 2($v1)
/* 0045FCF8 8C790038 */  lw    $t9, 0x38($v1)
/* 0045FCFC 2D080001 */  sltiu $t0, $t0, 1
/* 0045FD00 13200002 */  beqz  $t9, .L0045FD0C
/* 0045FD04 310800FF */   andi  $t0, $t0, 0xff
/* 0045FD08 00004825 */  move  $t1, $zero
.L0045FD0C:
/* 0045FD0C 15000002 */  bnez  $t0, .L0045FD18
/* 0045FD10 00000000 */   nop   
/* 0045FD14 8C63001C */  lw    $v1, 0x1c($v1)
.L0045FD18:
/* 0045FD18 15000003 */  bnez  $t0, .L0045FD28
/* 0045FD1C 00000000 */   nop   
/* 0045FD20 5460FFD9 */  bnezl $v1, .L0045FC88
/* 0045FD24 90780000 */   lbu   $t8, ($v1)
.L0045FD28:
/* 0045FD28 1500003C */  bnez  $t0, .L0045FE1C
/* 0045FD2C 00000000 */   nop   
/* 0045FD30 1120003A */  beqz  $t1, .L0045FE1C
/* 0045FD34 00000000 */   nop   
/* 0045FD38 920A0019 */  lbu   $t2, 0x19($s0)
/* 0045FD3C 8FAB0054 */  lw    $t3, 0x54($sp)
/* 0045FD40 11400036 */  beqz  $t2, .L0045FE1C
/* 0045FD44 00000000 */   nop   
/* 0045FD48 8D6CFFFC */  lw    $t4, -4($t3)
/* 0045FD4C AFAC0028 */  sw    $t4, 0x28($sp)
/* 0045FD50 8D820014 */  lw    $v0, 0x14($t4)
/* 0045FD54 10400031 */  beqz  $v0, .L0045FE1C
/* 0045FD58 00000000 */   nop   
/* 0045FD5C 8C4D0004 */  lw    $t5, 4($v0)
/* 0045FD60 8FAE0048 */  lw    $t6, 0x48($sp)
/* 0045FD64 15A0002D */  bnez  $t5, .L0045FE1C
/* 0045FD68 00000000 */   nop   
/* 0045FD6C 8F988DF8 */  lw     $t8, %got(table)($gp)
/* 0045FD70 000E7880 */  sll   $t7, $t6, 2
/* 0045FD74 01F8C821 */  addu  $t9, $t7, $t8
/* 0045FD78 15000028 */  bnez  $t0, .L0045FE1C
/* 0045FD7C 8F230000 */   lw    $v1, ($t9)
/* 0045FD80 10600026 */  beqz  $v1, .L0045FE1C
/* 0045FD84 00000000 */   nop   
/* 0045FD88 906A0000 */  lbu   $t2, ($v1)
.L0045FD8C:
/* 0045FD8C 24010003 */  li    $at, 3
/* 0045FD90 1541001B */  bne   $t2, $at, .L0045FE00
/* 0045FD94 00000000 */   nop   
/* 0045FD98 8C640028 */  lw    $a0, 0x28($v1)
/* 0045FD9C 8C65002C */  lw    $a1, 0x2c($v1)
/* 0045FDA0 8FAD0020 */  lw    $t5, 0x20($sp)
/* 0045FDA4 AFA40000 */  sw    $a0, ($sp)
/* 0045FDA8 AFA50004 */  sw    $a1, 4($sp)
/* 0045FDAC 8DA60000 */  lw    $a2, ($t5)
/* 0045FDB0 8F99860C */  lw    $t9, %call16(addreq)($gp)
/* 0045FDB4 AFA60008 */  sw    $a2, 8($sp)
/* 0045FDB8 8DA70004 */  lw    $a3, 4($t5)
/* 0045FDBC A3A80051 */  sb    $t0, 0x51($sp)
/* 0045FDC0 AFA30044 */  sw    $v1, 0x44($sp)
/* 0045FDC4 0320F809 */  jalr  $t9
/* 0045FDC8 AFA7000C */   sw    $a3, 0xc($sp)
/* 0045FDCC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045FDD0 8FA30044 */  lw    $v1, 0x44($sp)
/* 0045FDD4 1040000A */  beqz  $v0, .L0045FE00
/* 0045FDD8 93A80051 */   lbu   $t0, 0x51($sp)
/* 0045FDDC 8FB80028 */  lw    $t8, 0x28($sp)
/* 0045FDE0 8C6B0010 */  lw    $t3, 0x10($v1)
/* 0045FDE4 8F190014 */  lw    $t9, 0x14($t8)
/* 0045FDE8 8F2A0000 */  lw    $t2, ($t9)
/* 0045FDEC 154B0004 */  bne   $t2, $t3, .L0045FE00
/* 0045FDF0 00000000 */   nop   
/* 0045FDF4 90680002 */  lbu   $t0, 2($v1)
/* 0045FDF8 2D080001 */  sltiu $t0, $t0, 1
/* 0045FDFC 310800FF */  andi  $t0, $t0, 0xff
.L0045FE00:
/* 0045FE00 15000002 */  bnez  $t0, .L0045FE0C
/* 0045FE04 00000000 */   nop   
/* 0045FE08 8C63001C */  lw    $v1, 0x1c($v1)
.L0045FE0C:
/* 0045FE0C 15000003 */  bnez  $t0, .L0045FE1C
/* 0045FE10 00000000 */   nop   
/* 0045FE14 5460FFDD */  bnezl $v1, .L0045FD8C
/* 0045FE18 906A0000 */   lbu   $t2, ($v1)
.L0045FE1C:
/* 0045FE1C 1100001B */  beqz  $t0, .L0045FE8C
/* 0045FE20 00003825 */   move  $a3, $zero
/* 0045FE24 920C0016 */  lbu   $t4, 0x16($s0)
/* 0045FE28 24010003 */  li    $at, 3
/* 0045FE2C 318D0007 */  andi  $t5, $t4, 7
/* 0045FE30 11A10016 */  beq   $t5, $at, .L0045FE8C
/* 0045FE34 00000000 */   nop   
/* 0045FE38 8C6E0038 */  lw    $t6, 0x38($v1)
/* 0045FE3C 11C00013 */  beqz  $t6, .L0045FE8C
/* 0045FE40 00000000 */   nop   
/* 0045FE44 8C620034 */  lw    $v0, 0x34($v1)
/* 0045FE48 10400010 */  beqz  $v0, .L0045FE8C
/* 0045FE4C 00000000 */   nop   
/* 0045FE50 90430000 */  lbu   $v1, ($v0)
/* 0045FE54 24010001 */  li    $at, 1
/* 0045FE58 1061000B */  beq   $v1, $at, .L0045FE88
/* 0045FE5C 24010002 */   li    $at, 2
/* 0045FE60 1461000A */  bne   $v1, $at, .L0045FE8C
/* 0045FE64 00000000 */   nop   
/* 0045FE68 904F0001 */  lbu   $t7, 1($v0)
/* 0045FE6C 3C018A80 */  lui   $at, 0x8a80
/* 0045FE70 2DF80020 */  sltiu $t8, $t7, 0x20
/* 0045FE74 0018C823 */  negu  $t9, $t8
/* 0045FE78 03215024 */  and   $t2, $t9, $at
/* 0045FE7C 01EA5804 */  sllv  $t3, $t2, $t7
/* 0045FE80 05610002 */  bgez  $t3, .L0045FE8C
/* 0045FE84 00000000 */   nop   
.L0045FE88:
/* 0045FE88 24070001 */  li    $a3, 1
.L0045FE8C:
/* 0045FE8C 14E000B7 */  bnez  $a3, .L0046016C
/* 0045FE90 A3A70053 */   sb    $a3, 0x53($sp)
/* 0045FE94 920C001A */  lbu   $t4, 0x1a($s0)
/* 0045FE98 8FAD0054 */  lw    $t5, 0x54($sp)
/* 0045FE9C 158000B3 */  bnez  $t4, .L0046016C
/* 0045FEA0 00000000 */   nop   
/* 0045FEA4 8DA2FFFC */  lw    $v0, -4($t5)
/* 0045FEA8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0045FEAC A3A70052 */  sb    $a3, 0x52($sp)
/* 0045FEB0 96040002 */  lhu   $a0, 2($s0)
/* 0045FEB4 244500F4 */  addiu $a1, $v0, 0xf4
/* 0045FEB8 0320F809 */  jalr  $t9
/* 0045FEBC AFA20028 */   sw    $v0, 0x28($sp)
/* 0045FEC0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045FEC4 144000A9 */  bnez  $v0, .L0046016C
/* 0045FEC8 93A70052 */   lbu   $a3, 0x52($sp)
/* 0045FECC 920E0001 */  lbu   $t6, 1($s0)
/* 0045FED0 3C010500 */  lui   $at, 0x500
/* 0045FED4 02002025 */  move  $a0, $s0
/* 0045FED8 2DD80020 */  sltiu $t8, $t6, 0x20
/* 0045FEDC 0018C823 */  negu  $t9, $t8
/* 0045FEE0 03215024 */  and   $t2, $t9, $at
/* 0045FEE4 01CA7804 */  sllv  $t7, $t2, $t6
/* 0045FEE8 05E1000A */  bgez  $t7, .L0045FF14
/* 0045FEEC 8FA50028 */   lw    $a1, 0x28($sp)
/* 0045FEF0 8F8B8B2C */  lw     $t3, %got(dwopcode)($gp)
/* 0045FEF4 916B0000 */  lbu   $t3, ($t3)
/* 0045FEF8 15600006 */  bnez  $t3, .L0045FF14
/* 0045FEFC 00000000 */   nop   
/* 0045FF00 920C0016 */  lbu   $t4, 0x16($s0)
/* 0045FF04 24010003 */  li    $at, 3
/* 0045FF08 318D0007 */  andi  $t5, $t4, 7
/* 0045FF0C 15A10097 */  bne   $t5, $at, .L0046016C
/* 0045FF10 00000000 */   nop   
.L0045FF14:
/* 0045FF14 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 0045FF18 8FA60054 */  lw    $a2, 0x54($sp)
/* 0045FF1C A3A70052 */  sb    $a3, 0x52($sp)
/* 0045FF20 0320F809 */  jalr  $t9
/* 0045FF24 24C6FFF4 */   addiu $a2, $a2, -0xc
/* 0045FF28 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045FF2C 93A70052 */  lbu   $a3, 0x52($sp)
/* 0045FF30 8F988B20 */  lw     $t8, %got(outofmem)($gp)
/* 0045FF34 93180000 */  lbu   $t8, ($t8)
/* 0045FF38 53000004 */  beql  $t8, $zero, .L0045FF4C
/* 0045FF3C 8FB90054 */   lw    $t9, 0x54($sp)
/* 0045FF40 1000044B */  b     .L00461070
/* 0045FF44 00E01025 */   move  $v0, $a3
/* 0045FF48 8FB90054 */  lw    $t9, 0x54($sp)
.L0045FF4C:
/* 0045FF4C 24010001 */  li    $at, 1
/* 0045FF50 8F23FFF4 */  lw    $v1, -0xc($t9)
/* 0045FF54 946A0010 */  lhu   $t2, 0x10($v1)
/* 0045FF58 254E0001 */  addiu $t6, $t2, 1
/* 0045FF5C 31CFFFFF */  andi  $t7, $t6, 0xffff
/* 0045FF60 15E1000D */  bne   $t7, $at, .L0045FF98
/* 0045FF64 A46E0010 */   sh    $t6, 0x10($v1)
/* 0045FF68 906B0012 */  lbu   $t3, 0x12($v1)
/* 0045FF6C 8FA40028 */  lw    $a0, 0x28($sp)
/* 0045FF70 15600009 */  bnez  $t3, .L0045FF98
/* 0045FF74 24840114 */   addiu $a0, $a0, 0x114
/* 0045FF78 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0045FF7C 96050002 */  lhu   $a1, 2($s0)
/* 0045FF80 AFA30024 */  sw    $v1, 0x24($sp)
/* 0045FF84 0320F809 */  jalr  $t9
/* 0045FF88 A3A70052 */   sb    $a3, 0x52($sp)
/* 0045FF8C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045FF90 8FA30024 */  lw    $v1, 0x24($sp)
/* 0045FF94 93A70052 */  lbu   $a3, 0x52($sp)
.L0045FF98:
/* 0045FF98 8F8C89AC */  lw     $t4, %got(graphhead)($gp)
/* 0045FF9C 8FAD0028 */  lw    $t5, 0x28($sp)
/* 0045FFA0 8D8C0000 */  lw    $t4, ($t4)
/* 0045FFA4 158D0071 */  bne   $t4, $t5, .L0046016C
/* 0045FFA8 00000000 */   nop   
/* 0045FFAC 90780014 */  lbu   $t8, 0x14($v1)
/* 0045FFB0 1700006E */  bnez  $t8, .L0046016C
/* 0045FFB4 00000000 */   nop   
/* 0045FFB8 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 0045FFBC 96040002 */  lhu   $a0, 2($s0)
/* 0045FFC0 8F858D24 */  lw     $a1, %got(coloredparms)($gp)
/* 0045FFC4 AFA30024 */  sw    $v1, 0x24($sp)
/* 0045FFC8 0320F809 */  jalr  $t9
/* 0045FFCC A3A70052 */   sb    $a3, 0x52($sp)
/* 0045FFD0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0045FFD4 8FA30024 */  lw    $v1, 0x24($sp)
/* 0045FFD8 10400064 */  beqz  $v0, .L0046016C
/* 0045FFDC 93A70052 */   lbu   $a3, 0x52($sp)
/* 0045FFE0 8F998C60 */  lw     $t9, %got(outonly_parm)($gp)
/* 0045FFE4 240A0001 */  li    $t2, 1
/* 0045FFE8 93390000 */  lbu   $t9, ($t9)
/* 0045FFEC 17200002 */  bnez  $t9, .L0045FFF8
/* 0045FFF0 00000000 */   nop   
/* 0045FFF4 A06A0014 */  sb    $t2, 0x14($v1)
.L0045FFF8:
/* 0045FFF8 8F8E8B0C */  lw     $t6, %got(allcallersave)($gp)
/* 0045FFFC 91CE0000 */  lbu   $t6, ($t6)
/* 00460000 51C00007 */  beql  $t6, $zero, .L00460020
/* 00460004 906C0013 */   lbu   $t4, 0x13($v1)
/* 00460008 920F0016 */  lbu   $t7, 0x16($s0)
/* 0046000C 24010001 */  li    $at, 1
/* 00460010 31EB0007 */  andi  $t3, $t7, 7
/* 00460014 15610055 */  bne   $t3, $at, .L0046016C
/* 00460018 00000000 */   nop   
/* 0046001C 906C0013 */  lbu   $t4, 0x13($v1)
.L00460020:
/* 00460020 15800052 */  bnez  $t4, .L0046016C
/* 00460024 00000000 */   nop   
/* 00460028 8F8D8AA4 */  lw     $t5, %got(doprecolor)($gp)
/* 0046002C 02002025 */  move  $a0, $s0
/* 00460030 91AD0000 */  lbu   $t5, ($t5)
/* 00460034 11A0004D */  beqz  $t5, .L0046016C
/* 00460038 00000000 */   nop   
/* 0046003C 8F9984C0 */  lw    $t9, %call16(passedinreg)($gp)
/* 00460040 8F858A28 */  lw     $a1, %got(offsetpassedbyint)($gp)
/* 00460044 AFA30024 */  sw    $v1, 0x24($sp)
/* 00460048 A3A70052 */  sb    $a3, 0x52($sp)
/* 0046004C 0320F809 */  jalr  $t9
/* 00460050 8CA50000 */   lw    $a1, ($a1)
/* 00460054 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460058 8FA30024 */  lw    $v1, 0x24($sp)
/* 0046005C 10400043 */  beqz  $v0, .L0046016C
/* 00460060 93A70052 */   lbu   $a3, 0x52($sp)
/* 00460064 8F9986BC */  lw    $t9, %call16(regclassof)($gp)
/* 00460068 02002025 */  move  $a0, $s0
/* 0046006C AFA30024 */  sw    $v1, 0x24($sp)
/* 00460070 0320F809 */  jalr  $t9
/* 00460074 A3A70052 */   sb    $a3, 0x52($sp)
/* 00460078 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046007C 92180016 */  lbu   $t8, 0x16($s0)
/* 00460080 24010001 */  li    $at, 1
/* 00460084 8F858C5C */  lw     $a1, %got(passedcl)($gp)
/* 00460088 33190007 */  andi  $t9, $t8, 7
/* 0046008C 8FA30024 */  lw    $v1, 0x24($sp)
/* 00460090 93A70052 */  lbu   $a3, 0x52($sp)
/* 00460094 17210006 */  bne   $t9, $at, .L004600B0
/* 00460098 ACA20000 */   sw    $v0, ($a1)
/* 0046009C 8F848C5C */  lw     $a0, %got(passedcl)($gp)
/* 004600A0 240A0001 */  li    $t2, 1
/* 004600A4 A06A0013 */  sb    $t2, 0x13($v1)
/* 004600A8 1000000E */  b     .L004600E4
/* 004600AC 8C840000 */   lw    $a0, ($a0)
.L004600B0:
/* 004600B0 8CA40000 */  lw    $a0, ($a1)
/* 004600B4 8F8F8D44 */  lw     $t7, %got(firstparmreg)($gp)
/* 004600B8 8E0D0010 */  lw    $t5, 0x10($s0)
/* 004600BC 00047080 */  sll   $t6, $a0, 2
/* 004600C0 25EFFFFC */  addiu $t7, $t7, -4
/* 004600C4 01CF5821 */  addu  $t3, $t6, $t7
/* 004600C8 8D6C0000 */  lw    $t4, ($t3)
/* 004600CC 05A10003 */  bgez  $t5, .L004600DC
/* 004600D0 000DC083 */   sra   $t8, $t5, 2
/* 004600D4 25A10003 */  addiu $at, $t5, 3
/* 004600D8 0001C083 */  sra   $t8, $at, 2
.L004600DC:
/* 004600DC 0198C821 */  addu  $t9, $t4, $t8
/* 004600E0 A0790013 */  sb    $t9, 0x13($v1)
.L004600E4:
/* 004600E4 24010002 */  li    $at, 2
/* 004600E8 5481000C */  bnel  $a0, $at, .L0046011C
/* 004600EC 90780013 */   lbu   $t8, 0x13($v1)
/* 004600F0 8E0A0010 */  lw    $t2, 0x10($s0)
/* 004600F4 51400009 */  beql  $t2, $zero, .L0046011C
/* 004600F8 90780013 */   lbu   $t8, 0x13($v1)
/* 004600FC 8F8F8D44 */  lw     $t7, %got(firstparmreg)($gp)
/* 00460100 00047080 */  sll   $t6, $a0, 2
/* 00460104 25EFFFFC */  addiu $t7, $t7, -4
/* 00460108 01CF5821 */  addu  $t3, $t6, $t7
/* 0046010C 8D6D0000 */  lw    $t5, ($t3)
/* 00460110 25AC0001 */  addiu $t4, $t5, 1
/* 00460114 A06C0013 */  sb    $t4, 0x13($v1)
/* 00460118 90780013 */  lbu   $t8, 0x13($v1)
.L0046011C:
/* 0046011C 8FAF0054 */  lw    $t7, 0x54($sp)
/* 00460120 03005027 */  not   $t2, $t8
/* 00460124 270BFFE0 */  addiu $t3, $t8, -0x20
/* 00460128 2D6D0020 */  sltiu $t5, $t3, 0x20
/* 0046012C 2F190020 */  sltiu $t9, $t8, 0x20
/* 00460130 01597004 */  sllv  $t6, $t9, $t2
/* 00460134 014D6004 */  sllv  $t4, $t5, $t2
/* 00460138 ADECFFC8 */  sw    $t4, -0x38($t7)
/* 0046013C ADEEFFC4 */  sw    $t6, -0x3c($t7)
/* 00460140 8FB90028 */  lw    $t9, 0x28($sp)
/* 00460144 0004C0C0 */  sll   $t8, $a0, 3
/* 00460148 8FAC0054 */  lw    $t4, 0x54($sp)
/* 0046014C 03381021 */  addu  $v0, $t9, $t8
/* 00460150 8C4B002C */  lw    $t3, 0x2c($v0)
/* 00460154 8C4A0030 */  lw    $t2, 0x30($v0)
/* 00460158 016E6825 */  or    $t5, $t3, $t6
/* 0046015C AC4D002C */  sw    $t5, 0x2c($v0)
/* 00460160 8D8FFFC8 */  lw    $t7, -0x38($t4)
/* 00460164 014FC825 */  or    $t9, $t2, $t7
/* 00460168 AC590030 */  sw    $t9, 0x30($v0)
.L0046016C:
/* 0046016C 10E003BF */  beqz  $a3, .L0046106C
/* 00460170 8FB80054 */   lw    $t8, 0x54($sp)
/* 00460174 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00460178 8F04FFFC */  lw    $a0, -4($t8)
/* 0046017C 96050002 */  lhu   $a1, 2($s0)
/* 00460180 0320F809 */  jalr  $t9
/* 00460184 2484016C */   addiu $a0, $a0, 0x16c
/* 00460188 100003B8 */  b     .L0046106C
/* 0046018C 8FBC0018 */   lw    $gp, 0x18($sp)
.L00460190:
/* 00460190 8FAB0054 */  lw    $t3, 0x54($sp)
/* 00460194 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00460198 96040002 */  lhu   $a0, 2($s0)
/* 0046019C 8D62FFFC */  lw    $v0, -4($t3)
/* 004601A0 24450164 */  addiu $a1, $v0, 0x164
/* 004601A4 0320F809 */  jalr  $t9
/* 004601A8 AFA20028 */   sw    $v0, 0x28($sp)
/* 004601AC 14400033 */  bnez  $v0, .L0046027C
/* 004601B0 8FBC0018 */   lw    $gp, 0x18($sp)
/* 004601B4 93AE005F */  lbu   $t6, 0x5f($sp)
/* 004601B8 51C00005 */  beql  $t6, $zero, .L004601D0
/* 004601BC 920D0001 */   lbu   $t5, 1($s0)
/* 004601C0 8F818A3C */  lw     $at, %got(noop)($gp)
/* 004601C4 100003A9 */  b     .L0046106C
/* 004601C8 AC200000 */   sw    $zero, ($at)
/* 004601CC 920D0001 */  lbu   $t5, 1($s0)
.L004601D0:
/* 004601D0 3C010500 */  lui   $at, 0x500
/* 004601D4 02002025 */  move  $a0, $s0
/* 004601D8 2DAC0020 */  sltiu $t4, $t5, 0x20
/* 004601DC 000C5023 */  negu  $t2, $t4
/* 004601E0 01417824 */  and   $t7, $t2, $at
/* 004601E4 01AFC804 */  sllv  $t9, $t7, $t5
/* 004601E8 07210005 */  bgez  $t9, .L00460200
/* 004601EC 00000000 */   nop   
/* 004601F0 8F988B2C */  lw     $t8, %got(dwopcode)($gp)
/* 004601F4 93180000 */  lbu   $t8, ($t8)
/* 004601F8 1300001E */  beqz  $t8, .L00460274
/* 004601FC 00000000 */   nop   
.L00460200:
/* 00460200 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 00460204 8FA60054 */  lw    $a2, 0x54($sp)
/* 00460208 8FA50028 */  lw    $a1, 0x28($sp)
/* 0046020C 0320F809 */  jalr  $t9
/* 00460210 24C6FFF4 */   addiu $a2, $a2, -0xc
/* 00460214 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460218 8FAE0054 */  lw    $t6, 0x54($sp)
/* 0046021C 8F8B8B20 */  lw     $t3, %got(outofmem)($gp)
/* 00460220 916B0000 */  lbu   $t3, ($t3)
/* 00460224 51600004 */  beql  $t3, $zero, .L00460238
/* 00460228 8DC3FFF4 */   lw    $v1, -0xc($t6)
/* 0046022C 10000390 */  b     .L00461070
/* 00460230 93A20053 */   lbu   $v0, 0x53($sp)
/* 00460234 8DC3FFF4 */  lw    $v1, -0xc($t6)
.L00460238:
/* 00460238 24010001 */  li    $at, 1
/* 0046023C 946C0010 */  lhu   $t4, 0x10($v1)
/* 00460240 258A0001 */  addiu $t2, $t4, 1
/* 00460244 314FFFFF */  andi  $t7, $t2, 0xffff
/* 00460248 15E1000A */  bne   $t7, $at, .L00460274
/* 0046024C A46A0010 */   sh    $t2, 0x10($v1)
/* 00460250 906D0012 */  lbu   $t5, 0x12($v1)
/* 00460254 15A00007 */  bnez  $t5, .L00460274
/* 00460258 00000000 */   nop   
/* 0046025C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00460260 8FA40028 */  lw    $a0, 0x28($sp)
/* 00460264 96050002 */  lhu   $a1, 2($s0)
/* 00460268 0320F809 */  jalr  $t9
/* 0046026C 24840114 */   addiu $a0, $a0, 0x114
/* 00460270 8FBC0018 */  lw    $gp, 0x18($sp)
.L00460274:
/* 00460274 1000037D */  b     .L0046106C
/* 00460278 A3A00053 */   sb    $zero, 0x53($sp)
.L0046027C:
/* 0046027C 93B9005F */  lbu   $t9, 0x5f($sp)
/* 00460280 57200035 */  bnezl $t9, .L00460358
/* 00460284 920A0000 */   lbu   $t2, ($s0)
/* 00460288 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046028C 8FA50028 */  lw    $a1, 0x28($sp)
/* 00460290 96040002 */  lhu   $a0, 2($s0)
/* 00460294 0320F809 */  jalr  $t9
/* 00460298 24A50154 */   addiu $a1, $a1, 0x154
/* 0046029C 1040002D */  beqz  $v0, .L00460354
/* 004602A0 8FBC0018 */   lw    $gp, 0x18($sp)
/* 004602A4 92180001 */  lbu   $t8, 1($s0)
/* 004602A8 3C010500 */  lui   $at, 0x500
/* 004602AC 02002025 */  move  $a0, $s0
/* 004602B0 2F0B0020 */  sltiu $t3, $t8, 0x20
/* 004602B4 000B7023 */  negu  $t6, $t3
/* 004602B8 01C16024 */  and   $t4, $t6, $at
/* 004602BC 030C5004 */  sllv  $t2, $t4, $t8
/* 004602C0 05410005 */  bgez  $t2, .L004602D8
/* 004602C4 00000000 */   nop   
/* 004602C8 8F8F8B2C */  lw     $t7, %got(dwopcode)($gp)
/* 004602CC 91EF0000 */  lbu   $t7, ($t7)
/* 004602D0 11E0001E */  beqz  $t7, .L0046034C
/* 004602D4 00000000 */   nop   
.L004602D8:
/* 004602D8 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 004602DC 8FA60054 */  lw    $a2, 0x54($sp)
/* 004602E0 8FA50028 */  lw    $a1, 0x28($sp)
/* 004602E4 0320F809 */  jalr  $t9
/* 004602E8 24C6FFF4 */   addiu $a2, $a2, -0xc
/* 004602EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004602F0 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 004602F4 91AD0000 */  lbu   $t5, ($t5)
/* 004602F8 51A00004 */  beql  $t5, $zero, .L0046030C
/* 004602FC 8FB90054 */   lw    $t9, 0x54($sp)
/* 00460300 1000035B */  b     .L00461070
/* 00460304 93A20053 */   lbu   $v0, 0x53($sp)
/* 00460308 8FB90054 */  lw    $t9, 0x54($sp)
.L0046030C:
/* 0046030C 24010001 */  li    $at, 1
/* 00460310 8F23FFF4 */  lw    $v1, -0xc($t9)
/* 00460314 946B0010 */  lhu   $t3, 0x10($v1)
/* 00460318 256E0001 */  addiu $t6, $t3, 1
/* 0046031C 31CCFFFF */  andi  $t4, $t6, 0xffff
/* 00460320 1581000A */  bne   $t4, $at, .L0046034C
/* 00460324 A46E0010 */   sh    $t6, 0x10($v1)
/* 00460328 90780012 */  lbu   $t8, 0x12($v1)
/* 0046032C 17000007 */  bnez  $t8, .L0046034C
/* 00460330 00000000 */   nop   
/* 00460334 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00460338 8FA40028 */  lw    $a0, 0x28($sp)
/* 0046033C 96050002 */  lhu   $a1, 2($s0)
/* 00460340 0320F809 */  jalr  $t9
/* 00460344 24840114 */   addiu $a0, $a0, 0x114
/* 00460348 8FBC0018 */  lw    $gp, 0x18($sp)
.L0046034C:
/* 0046034C 10000347 */  b     .L0046106C
/* 00460350 A3A00053 */   sb    $zero, 0x53($sp)
.L00460354:
/* 00460354 920A0000 */  lbu   $t2, ($s0)
.L00460358:
/* 00460358 24010005 */  li    $at, 5
/* 0046035C 93A60063 */  lbu   $a2, 0x63($sp)
/* 00460360 15410009 */  bne   $t2, $at, .L00460388
/* 00460364 00002825 */   move  $a1, $zero
/* 00460368 8F99802C */  lw    $t9, %got(func_0045FBB4)($gp)
/* 0046036C 8E040020 */  lw    $a0, 0x20($s0)
/* 00460370 00002825 */  move  $a1, $zero
/* 00460374 2739FBB4 */  addiu $t9, %lo(func_0045FBB4) # addiu $t9, $t9, -0x44c
/* 00460378 0320F809 */  jalr  $t9
/* 0046037C 8FA20054 */   lw    $v0, 0x54($sp)
/* 00460380 10000008 */  b     .L004603A4
/* 00460384 8FBC0018 */   lw    $gp, 0x18($sp)
.L00460388:
/* 00460388 8F99802C */  lw    $t9, %got(func_0045FBB4)($gp)
/* 0046038C 8E04001C */  lw    $a0, 0x1c($s0)
/* 00460390 93A60063 */  lbu   $a2, 0x63($sp)
/* 00460394 2739FBB4 */  addiu $t9, %lo(func_0045FBB4) # addiu $t9, $t9, -0x44c
/* 00460398 0320F809 */  jalr  $t9
/* 0046039C 8FA20054 */   lw    $v0, 0x54($sp)
/* 004603A0 8FBC0018 */  lw    $gp, 0x18($sp)
.L004603A4:
/* 004603A4 93AF005F */  lbu   $t7, 0x5f($sp)
/* 004603A8 A3A00053 */  sb    $zero, 0x53($sp)
/* 004603AC 51E00330 */  beql  $t7, $zero, .L00461070
/* 004603B0 93A20053 */   lbu   $v0, 0x53($sp)
/* 004603B4 920D0001 */  lbu   $t5, 1($s0)
/* 004603B8 3C010500 */  lui   $at, 0x500
/* 004603BC 8FA20054 */  lw    $v0, 0x54($sp)
/* 004603C0 2DB90020 */  sltiu $t9, $t5, 0x20
/* 004603C4 00195823 */  negu  $t3, $t9
/* 004603C8 01617024 */  and   $t6, $t3, $at
/* 004603CC 01AE6004 */  sllv  $t4, $t6, $t5
/* 004603D0 05810005 */  bgez  $t4, .L004603E8
/* 004603D4 02002025 */   move  $a0, $s0
/* 004603D8 8F988B2C */  lw     $t8, %got(dwopcode)($gp)
/* 004603DC 93180000 */  lbu   $t8, ($t8)
/* 004603E0 53000323 */  beql  $t8, $zero, .L00461070
/* 004603E4 93A20053 */   lbu   $v0, 0x53($sp)
.L004603E8:
/* 004603E8 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 004603EC 8C45FFFC */  lw    $a1, -4($v0)
/* 004603F0 2446FFF4 */  addiu $a2, $v0, -0xc
/* 004603F4 0320F809 */  jalr  $t9
/* 004603F8 AFA50028 */   sw    $a1, 0x28($sp)
/* 004603FC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460400 8FAF0054 */  lw    $t7, 0x54($sp)
/* 00460404 8F8A8B20 */  lw     $t2, %got(outofmem)($gp)
/* 00460408 914A0000 */  lbu   $t2, ($t2)
/* 0046040C 51400004 */  beql  $t2, $zero, .L00460420
/* 00460410 8DE3FFF4 */   lw    $v1, -0xc($t7)
/* 00460414 10000316 */  b     .L00461070
/* 00460418 00001025 */   move  $v0, $zero
/* 0046041C 8DE3FFF4 */  lw    $v1, -0xc($t7)
.L00460420:
/* 00460420 90790012 */  lbu   $t9, 0x12($v1)
/* 00460424 272B0001 */  addiu $t3, $t9, 1
/* 00460428 A06B0012 */  sb    $t3, 0x12($v1)
/* 0046042C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00460430 8FA40028 */  lw    $a0, 0x28($sp)
/* 00460434 96050002 */  lhu   $a1, 2($s0)
/* 00460438 AFA30024 */  sw    $v1, 0x24($sp)
/* 0046043C 0320F809 */  jalr  $t9
/* 00460440 2484010C */   addiu $a0, $a0, 0x10c
/* 00460444 8FA30024 */  lw    $v1, 0x24($sp)
/* 00460448 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046044C 240D0001 */  li    $t5, 1
/* 00460450 946E0010 */  lhu   $t6, 0x10($v1)
/* 00460454 55C00306 */  bnezl $t6, .L00461070
/* 00460458 93A20053 */   lbu   $v0, 0x53($sp)
/* 0046045C 10000303 */  b     .L0046106C
/* 00460460 A06D0014 */   sb    $t5, 0x14($v1)
.L00460464:
/* 00460464 92040010 */  lbu   $a0, 0x10($s0)
/* 00460468 2401003E */  li    $at, 62
/* 0046046C 2482FFE0 */  addiu $v0, $a0, -0x20
/* 00460470 2C4C0060 */  sltiu $t4, $v0, 0x60
/* 00460474 11800009 */  beqz  $t4, .L0046049C
/* 00460478 00000000 */   nop   
/* 0046047C 8F8F8044 */  lw    $t7, %got(D_10010EBC)($gp)
/* 00460480 0002C143 */  sra   $t8, $v0, 5
/* 00460484 00185080 */  sll   $t2, $t8, 2
/* 00460488 25EF0EBC */  addiu $t7, %lo(D_10010EBC) # addiu $t7, $t7, 0xebc
/* 0046048C 01EAC821 */  addu  $t9, $t7, $t2
/* 00460490 8F2B0000 */  lw    $t3, ($t9)
/* 00460494 004B7004 */  sllv  $t6, $t3, $v0
/* 00460498 29CC0000 */  slti  $t4, $t6, 0
.L0046049C:
/* 0046049C 11800060 */  beqz  $t4, .L00460620
/* 004604A0 2C590080 */   sltiu $t9, $v0, 0x80
/* 004604A4 14810009 */  bne   $a0, $at, .L004604CC
/* 004604A8 00002825 */   move  $a1, $zero
/* 004604AC 8F99802C */  lw    $t9, %got(func_0045FBB4)($gp)
/* 004604B0 8E180014 */  lw    $t8, 0x14($s0)
/* 004604B4 93A60063 */  lbu   $a2, 0x63($sp)
/* 004604B8 2739FBB4 */  addiu $t9, %lo(func_0045FBB4) # addiu $t9, $t9, -0x44c
/* 004604BC 8FA20054 */  lw    $v0, 0x54($sp)
/* 004604C0 0320F809 */  jalr  $t9
/* 004604C4 8F04001C */   lw    $a0, 0x1c($t8)
/* 004604C8 8FBC0018 */  lw    $gp, 0x18($sp)
.L004604CC:
/* 004604CC 8F99802C */  lw    $t9, %got(func_0045FBB4)($gp)
/* 004604D0 8E040018 */  lw    $a0, 0x18($s0)
/* 004604D4 00002825 */  move  $a1, $zero
/* 004604D8 2739FBB4 */  addiu $t9, %lo(func_0045FBB4) # addiu $t9, $t9, -0x44c
/* 004604DC 93A60063 */  lbu   $a2, 0x63($sp)
/* 004604E0 0320F809 */  jalr  $t9
/* 004604E4 8FA20054 */   lw    $v0, 0x54($sp)
/* 004604E8 8E070014 */  lw    $a3, 0x14($s0)
/* 004604EC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004604F0 8FAA0054 */  lw    $t2, 0x54($sp)
/* 004604F4 90EF001A */  lbu   $t7, 0x1a($a3)
/* 004604F8 15E00047 */  bnez  $t7, .L00460618
/* 004604FC 00000000 */   nop   
/* 00460500 8D42FFFC */  lw    $v0, -4($t2)
/* 00460504 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00460508 94E40002 */  lhu   $a0, 2($a3)
/* 0046050C 244500F4 */  addiu $a1, $v0, 0xf4
/* 00460510 0320F809 */  jalr  $t9
/* 00460514 AFA20028 */   sw    $v0, 0x28($sp)
/* 00460518 1440003F */  bnez  $v0, .L00460618
/* 0046051C 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00460520 8E070014 */  lw    $a3, 0x14($s0)
/* 00460524 3C010500 */  lui   $at, 0x500
/* 00460528 90F90001 */  lbu   $t9, 1($a3)
/* 0046052C 00E02025 */  move  $a0, $a3
/* 00460530 2F2B0020 */  sltiu $t3, $t9, 0x20
/* 00460534 000B7023 */  negu  $t6, $t3
/* 00460538 01C16824 */  and   $t5, $t6, $at
/* 0046053C 032D6004 */  sllv  $t4, $t5, $t9
/* 00460540 05810005 */  bgez  $t4, .L00460558
/* 00460544 00000000 */   nop   
/* 00460548 8F988B2C */  lw     $t8, %got(dwopcode)($gp)
/* 0046054C 93180000 */  lbu   $t8, ($t8)
/* 00460550 13000031 */  beqz  $t8, .L00460618
/* 00460554 00000000 */   nop   
.L00460558:
/* 00460558 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 0046055C 8FA60054 */  lw    $a2, 0x54($sp)
/* 00460560 8FA50028 */  lw    $a1, 0x28($sp)
/* 00460564 0320F809 */  jalr  $t9
/* 00460568 24C6FFF4 */   addiu $a2, $a2, -0xc
/* 0046056C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460570 8FAA0054 */  lw    $t2, 0x54($sp)
/* 00460574 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 00460578 91EF0000 */  lbu   $t7, ($t7)
/* 0046057C 51E00004 */  beql  $t7, $zero, .L00460590
/* 00460580 8D43FFF4 */   lw    $v1, -0xc($t2)
/* 00460584 100002BA */  b     .L00461070
/* 00460588 93A20053 */   lbu   $v0, 0x53($sp)
/* 0046058C 8D43FFF4 */  lw    $v1, -0xc($t2)
.L00460590:
/* 00460590 906B0012 */  lbu   $t3, 0x12($v1)
/* 00460594 256E0001 */  addiu $t6, $t3, 1
/* 00460598 A06E0012 */  sb    $t6, 0x12($v1)
/* 0046059C 8E0D0014 */  lw    $t5, 0x14($s0)
/* 004605A0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004605A4 8FA40028 */  lw    $a0, 0x28($sp)
/* 004605A8 95A50002 */  lhu   $a1, 2($t5)
/* 004605AC AFA30024 */  sw    $v1, 0x24($sp)
/* 004605B0 0320F809 */  jalr  $t9
/* 004605B4 2484010C */   addiu $a0, $a0, 0x10c
/* 004605B8 8FA30024 */  lw    $v1, 0x24($sp)
/* 004605BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004605C0 240C0001 */  li    $t4, 1
/* 004605C4 94790010 */  lhu   $t9, 0x10($v1)
/* 004605C8 57200003 */  bnezl $t9, .L004605D8
/* 004605CC 8FB80028 */   lw    $t8, 0x28($sp)
/* 004605D0 A06C0014 */  sb    $t4, 0x14($v1)
/* 004605D4 8FB80028 */  lw    $t8, 0x28($sp)
.L004605D8:
/* 004605D8 8F0F0020 */  lw    $t7, 0x20($t8)
/* 004605DC 91EA0000 */  lbu   $t2, ($t7)
/* 004605E0 2D4B0040 */  sltiu $t3, $t2, 0x40
/* 004605E4 11600009 */  beqz  $t3, .L0046060C
/* 004605E8 00000000 */   nop   
/* 004605EC 8F998044 */  lw    $t9, %got(D_10010EB4)($gp)
/* 004605F0 000A7143 */  sra   $t6, $t2, 5
/* 004605F4 000E6880 */  sll   $t5, $t6, 2
/* 004605F8 27390EB4 */  addiu $t9, %lo(D_10010EB4) # addiu $t9, $t9, 0xeb4
/* 004605FC 032D6021 */  addu  $t4, $t9, $t5
/* 00460600 8D980000 */  lw    $t8, ($t4)
/* 00460604 01587804 */  sllv  $t7, $t8, $t2
/* 00460608 29EB0000 */  slti  $t3, $t7, 0
.L0046060C:
/* 0046060C 11600002 */  beqz  $t3, .L00460618
/* 00460610 00000000 */   nop   
/* 00460614 A0600013 */  sb    $zero, 0x13($v1)
.L00460618:
/* 00460618 10000294 */  b     .L0046106C
/* 0046061C A3A00053 */   sb    $zero, 0x53($sp)
.L00460620:
/* 00460620 13200009 */  beqz  $t9, .L00460648
/* 00460624 2401000F */   li    $at, 15
/* 00460628 8F988044 */  lw    $t8, %got(D_10010EA4)($gp)
/* 0046062C 00026943 */  sra   $t5, $v0, 5
/* 00460630 000D6080 */  sll   $t4, $t5, 2
/* 00460634 27180EA4 */  addiu $t8, %lo(D_10010EA4) # addiu $t8, $t8, 0xea4
/* 00460638 030C5021 */  addu  $t2, $t8, $t4
/* 0046063C 8D4F0000 */  lw    $t7, ($t2)
/* 00460640 004F7004 */  sllv  $t6, $t7, $v0
/* 00460644 29D90000 */  slti  $t9, $t6, 0
.L00460648:
/* 00460648 13200013 */  beqz  $t9, .L00460698
/* 0046064C 00002825 */   move  $a1, $zero
/* 00460650 8F99802C */  lw    $t9, %got(func_0045FBB4)($gp)
/* 00460654 8E040014 */  lw    $a0, 0x14($s0)
/* 00460658 93A60063 */  lbu   $a2, 0x63($sp)
/* 0046065C 2739FBB4 */  addiu $t9, %lo(func_0045FBB4) # addiu $t9, $t9, -0x44c
/* 00460660 0320F809 */  jalr  $t9
/* 00460664 8FA20054 */   lw    $v0, 0x54($sp)
/* 00460668 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046066C 8E040018 */  lw    $a0, 0x18($s0)
/* 00460670 00002825 */  move  $a1, $zero
/* 00460674 8F99802C */  lw    $t9, %got(func_0045FBB4)($gp)
/* 00460678 93A60063 */  lbu   $a2, 0x63($sp)
/* 0046067C 8FA20054 */  lw    $v0, 0x54($sp)
/* 00460680 2739FBB4 */  addiu $t9, %lo(func_0045FBB4) # addiu $t9, $t9, -0x44c
/* 00460684 0320F809 */  jalr  $t9
/* 00460688 00000000 */   nop   
/* 0046068C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460690 10000276 */  b     .L0046106C
/* 00460694 A3A00053 */   sb    $zero, 0x53($sp)
.L00460698:
/* 00460698 1481000B */  bne   $a0, $at, .L004606C8
/* 0046069C 8FAD0054 */   lw    $t5, 0x54($sp)
/* 004606A0 8F99802C */  lw    $t9, %got(func_0045FBB4)($gp)
/* 004606A4 8E040014 */  lw    $a0, 0x14($s0)
/* 004606A8 00002825 */  move  $a1, $zero
/* 004606AC 2739FBB4 */  addiu $t9, %lo(func_0045FBB4) # addiu $t9, $t9, -0x44c
/* 004606B0 93A60063 */  lbu   $a2, 0x63($sp)
/* 004606B4 0320F809 */  jalr  $t9
/* 004606B8 8FA20054 */   lw    $v0, 0x54($sp)
/* 004606BC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004606C0 1000026A */  b     .L0046106C
/* 004606C4 A3A00053 */   sb    $zero, 0x53($sp)
.L004606C8:
/* 004606C8 8DA2FFFC */  lw    $v0, -4($t5)
/* 004606CC 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004606D0 96040002 */  lhu   $a0, 2($s0)
/* 004606D4 24450164 */  addiu $a1, $v0, 0x164
/* 004606D8 0320F809 */  jalr  $t9
/* 004606DC AFA20028 */   sw    $v0, 0x28($sp)
/* 004606E0 14400042 */  bnez  $v0, .L004607EC
/* 004606E4 8FBC0018 */   lw    $gp, 0x18($sp)
/* 004606E8 93B8005F */  lbu   $t8, 0x5f($sp)
/* 004606EC 53000005 */  beql  $t8, $zero, .L00460704
/* 004606F0 92020012 */   lbu   $v0, 0x12($s0)
/* 004606F4 8F818A3C */  lw     $at, %got(noop)($gp)
/* 004606F8 1000025C */  b     .L0046106C
/* 004606FC AC200000 */   sw    $zero, ($at)
/* 00460700 92020012 */  lbu   $v0, 0x12($s0)
.L00460704:
/* 00460704 2401000E */  li    $at, 14
/* 00460708 A3A00053 */  sb    $zero, 0x53($sp)
/* 0046070C 5441000D */  bnel  $v0, $at, .L00460744
/* 00460710 2C4A0020 */   sltiu $t2, $v0, 0x20
/* 00460714 8F9984CC */  lw    $t9, %call16(sizeofsetexpr)($gp)
/* 00460718 02002025 */  move  $a0, $s0
/* 0046071C 0320F809 */  jalr  $t9
/* 00460720 00000000 */   nop   
/* 00460724 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460728 8F8C8B34 */  lw     $t4, %got(int_reg_size)($gp)
/* 0046072C 8D8C0000 */  lw    $t4, ($t4)
/* 00460730 0182082A */  slt   $at, $t4, $v0
/* 00460734 1420000D */  bnez  $at, .L0046076C
/* 00460738 00000000 */   nop   
/* 0046073C 92020012 */  lbu   $v0, 0x12($s0)
/* 00460740 2C4A0020 */  sltiu $t2, $v0, 0x20
.L00460744:
/* 00460744 000A7823 */  negu  $t7, $t2
/* 00460748 3C010500 */  lui   $at, 0x500
/* 0046074C 01E17024 */  and   $t6, $t7, $at
/* 00460750 004E5804 */  sllv  $t3, $t6, $v0
/* 00460754 05610007 */  bgez  $t3, .L00460774
/* 00460758 02002025 */   move  $a0, $s0
/* 0046075C 8F998B2C */  lw     $t9, %got(dwopcode)($gp)
/* 00460760 93390000 */  lbu   $t9, ($t9)
/* 00460764 17200003 */  bnez  $t9, .L00460774
/* 00460768 00000000 */   nop   
.L0046076C:
/* 0046076C 10000240 */  b     .L00461070
/* 00460770 00001025 */   move  $v0, $zero
.L00460774:
/* 00460774 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 00460778 8FA60054 */  lw    $a2, 0x54($sp)
/* 0046077C 8FA50028 */  lw    $a1, 0x28($sp)
/* 00460780 0320F809 */  jalr  $t9
/* 00460784 24C6FFF4 */   addiu $a2, $a2, -0xc
/* 00460788 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046078C 8FB80054 */  lw    $t8, 0x54($sp)
/* 00460790 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 00460794 91AD0000 */  lbu   $t5, ($t5)
/* 00460798 51A00004 */  beql  $t5, $zero, .L004607AC
/* 0046079C 8F03FFF4 */   lw    $v1, -0xc($t8)
/* 004607A0 10000233 */  b     .L00461070
/* 004607A4 00001025 */   move  $v0, $zero
/* 004607A8 8F03FFF4 */  lw    $v1, -0xc($t8)
.L004607AC:
/* 004607AC 24010001 */  li    $at, 1
/* 004607B0 946C0010 */  lhu   $t4, 0x10($v1)
/* 004607B4 258A0001 */  addiu $t2, $t4, 1
/* 004607B8 314FFFFF */  andi  $t7, $t2, 0xffff
/* 004607BC 15E1022B */  bne   $t7, $at, .L0046106C
/* 004607C0 A46A0010 */   sh    $t2, 0x10($v1)
/* 004607C4 906E0012 */  lbu   $t6, 0x12($v1)
/* 004607C8 55C00229 */  bnezl $t6, .L00461070
/* 004607CC 93A20053 */   lbu   $v0, 0x53($sp)
/* 004607D0 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004607D4 8FA40028 */  lw    $a0, 0x28($sp)
/* 004607D8 96050002 */  lhu   $a1, 2($s0)
/* 004607DC 0320F809 */  jalr  $t9
/* 004607E0 24840114 */   addiu $a0, $a0, 0x114
/* 004607E4 10000221 */  b     .L0046106C
/* 004607E8 8FBC0018 */   lw    $gp, 0x18($sp)
.L004607EC:
/* 004607EC 93AB005F */  lbu   $t3, 0x5f($sp)
/* 004607F0 1560004D */  bnez  $t3, .L00460928
/* 004607F4 00000000 */   nop   
/* 004607F8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004607FC 8FA50028 */  lw    $a1, 0x28($sp)
/* 00460800 96040002 */  lhu   $a0, 2($s0)
/* 00460804 0320F809 */  jalr  $t9
/* 00460808 24A50154 */   addiu $a1, $a1, 0x154
/* 0046080C 10400046 */  beqz  $v0, .L00460928
/* 00460810 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00460814 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00460818 8FA50028 */  lw    $a1, 0x28($sp)
/* 0046081C 96040002 */  lhu   $a0, 2($s0)
/* 00460820 0320F809 */  jalr  $t9
/* 00460824 24A5016C */   addiu $a1, $a1, 0x16c
/* 00460828 1440003C */  bnez  $v0, .L0046091C
/* 0046082C 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00460830 92020012 */  lbu   $v0, 0x12($s0)
/* 00460834 2401000E */  li    $at, 14
/* 00460838 5441000D */  bnel  $v0, $at, .L00460870
/* 0046083C 2C4D0020 */   sltiu $t5, $v0, 0x20
/* 00460840 8F9984CC */  lw    $t9, %call16(sizeofsetexpr)($gp)
/* 00460844 02002025 */  move  $a0, $s0
/* 00460848 0320F809 */  jalr  $t9
/* 0046084C 00000000 */   nop   
/* 00460850 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460854 8F998B34 */  lw     $t9, %got(int_reg_size)($gp)
/* 00460858 8F390000 */  lw    $t9, ($t9)
/* 0046085C 0322082A */  slt   $at, $t9, $v0
/* 00460860 1420000D */  bnez  $at, .L00460898
/* 00460864 00000000 */   nop   
/* 00460868 92020012 */  lbu   $v0, 0x12($s0)
/* 0046086C 2C4D0020 */  sltiu $t5, $v0, 0x20
.L00460870:
/* 00460870 000DC023 */  negu  $t8, $t5
/* 00460874 3C010500 */  lui   $at, 0x500
/* 00460878 03016024 */  and   $t4, $t8, $at
/* 0046087C 004C5004 */  sllv  $t2, $t4, $v0
/* 00460880 05410007 */  bgez  $t2, .L004608A0
/* 00460884 02002025 */   move  $a0, $s0
/* 00460888 8F8F8B2C */  lw     $t7, %got(dwopcode)($gp)
/* 0046088C 91EF0000 */  lbu   $t7, ($t7)
/* 00460890 15E00003 */  bnez  $t7, .L004608A0
/* 00460894 00000000 */   nop   
.L00460898:
/* 00460898 100001F5 */  b     .L00461070
/* 0046089C 93A20053 */   lbu   $v0, 0x53($sp)
.L004608A0:
/* 004608A0 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 004608A4 8FA60054 */  lw    $a2, 0x54($sp)
/* 004608A8 A3A00053 */  sb    $zero, 0x53($sp)
/* 004608AC 8FA50028 */  lw    $a1, 0x28($sp)
/* 004608B0 0320F809 */  jalr  $t9
/* 004608B4 24C6FFF4 */   addiu $a2, $a2, -0xc
/* 004608B8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004608BC 8FAB0054 */  lw    $t3, 0x54($sp)
/* 004608C0 8F8E8B20 */  lw     $t6, %got(outofmem)($gp)
/* 004608C4 91CE0000 */  lbu   $t6, ($t6)
/* 004608C8 51C00004 */  beql  $t6, $zero, .L004608DC
/* 004608CC 8D63FFF4 */   lw    $v1, -0xc($t3)
/* 004608D0 100001E7 */  b     .L00461070
/* 004608D4 00001025 */   move  $v0, $zero
/* 004608D8 8D63FFF4 */  lw    $v1, -0xc($t3)
.L004608DC:
/* 004608DC 24010001 */  li    $at, 1
/* 004608E0 94790010 */  lhu   $t9, 0x10($v1)
/* 004608E4 272D0001 */  addiu $t5, $t9, 1
/* 004608E8 31B8FFFF */  andi  $t8, $t5, 0xffff
/* 004608EC 170101DF */  bne   $t8, $at, .L0046106C
/* 004608F0 A46D0010 */   sh    $t5, 0x10($v1)
/* 004608F4 906C0012 */  lbu   $t4, 0x12($v1)
/* 004608F8 558001DD */  bnezl $t4, .L00461070
/* 004608FC 93A20053 */   lbu   $v0, 0x53($sp)
/* 00460900 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00460904 8FA40028 */  lw    $a0, 0x28($sp)
/* 00460908 96050002 */  lhu   $a1, 2($s0)
/* 0046090C 0320F809 */  jalr  $t9
/* 00460910 24840114 */   addiu $a0, $a0, 0x114
/* 00460914 100001D5 */  b     .L0046106C
/* 00460918 8FBC0018 */   lw    $gp, 0x18($sp)
.L0046091C:
/* 0046091C 240A0001 */  li    $t2, 1
/* 00460920 100001D2 */  b     .L0046106C
/* 00460924 A3AA0053 */   sb    $t2, 0x53($sp)
.L00460928:
/* 00460928 8F8F8B24 */  lw     $t7, %got(mipsflag)($gp)
/* 0046092C 24010003 */  li    $at, 3
/* 00460930 91EF0000 */  lbu   $t7, ($t7)
/* 00460934 11E1004A */  beq   $t7, $at, .L00460A60
/* 00460938 00000000 */   nop   
/* 0046093C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00460940 96040002 */  lhu   $a0, 2($s0)
/* 00460944 8F858D2C */  lw     $a1, %got(old)($gp)
/* 00460948 0320F809 */  jalr  $t9
/* 0046094C 00000000 */   nop   
/* 00460950 10400043 */  beqz  $v0, .L00460A60
/* 00460954 8FBC0018 */   lw    $gp, 0x18($sp)
/* 00460958 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046095C 8FA40028 */  lw    $a0, 0x28($sp)
/* 00460960 96050002 */  lhu   $a1, 2($s0)
/* 00460964 0320F809 */  jalr  $t9
/* 00460968 24840154 */   addiu $a0, $a0, 0x154
/* 0046096C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460970 8FA40028 */  lw    $a0, 0x28($sp)
/* 00460974 96050002 */  lhu   $a1, 2($s0)
/* 00460978 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046097C 2484015C */  addiu $a0, $a0, 0x15c
/* 00460980 0320F809 */  jalr  $t9
/* 00460984 00000000 */   nop   
/* 00460988 8FBC0018 */  lw    $gp, 0x18($sp)
/* 0046098C 96050002 */  lhu   $a1, 2($s0)
/* 00460990 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00460994 8F848D18 */  lw     $a0, %got(coloreditems)($gp)
/* 00460998 0320F809 */  jalr  $t9
/* 0046099C 00000000 */   nop   
/* 004609A0 920E0012 */  lbu   $t6, 0x12($s0)
/* 004609A4 3C010500 */  lui   $at, 0x500
/* 004609A8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004609AC 2DCB0020 */  sltiu $t3, $t6, 0x20
/* 004609B0 000BC823 */  negu  $t9, $t3
/* 004609B4 03216824 */  and   $t5, $t9, $at
/* 004609B8 01CDC004 */  sllv  $t8, $t5, $t6
/* 004609BC 07010005 */  bgez  $t8, .L004609D4
/* 004609C0 02002025 */   move  $a0, $s0
/* 004609C4 8F8C8B2C */  lw     $t4, %got(dwopcode)($gp)
/* 004609C8 918C0000 */  lbu   $t4, ($t4)
/* 004609CC 11800022 */  beqz  $t4, .L00460A58
/* 004609D0 00000000 */   nop   
.L004609D4:
/* 004609D4 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 004609D8 8FA60054 */  lw    $a2, 0x54($sp)
/* 004609DC 8FA50028 */  lw    $a1, 0x28($sp)
/* 004609E0 0320F809 */  jalr  $t9
/* 004609E4 24C6FFF4 */   addiu $a2, $a2, -0xc
/* 004609E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004609EC 8FAF0054 */  lw    $t7, 0x54($sp)
/* 004609F0 8F8A8B20 */  lw     $t2, %got(outofmem)($gp)
/* 004609F4 914A0000 */  lbu   $t2, ($t2)
/* 004609F8 51400004 */  beql  $t2, $zero, .L00460A0C
/* 004609FC 8DE3FFF4 */   lw    $v1, -0xc($t7)
/* 00460A00 1000019B */  b     .L00461070
/* 00460A04 93A20053 */   lbu   $v0, 0x53($sp)
/* 00460A08 8DE3FFF4 */  lw    $v1, -0xc($t7)
.L00460A0C:
/* 00460A0C 906B0012 */  lbu   $t3, 0x12($v1)
/* 00460A10 25790001 */  addiu $t9, $t3, 1
/* 00460A14 A0790012 */  sb    $t9, 0x12($v1)
/* 00460A18 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00460A1C 8FA40028 */  lw    $a0, 0x28($sp)
/* 00460A20 96050002 */  lhu   $a1, 2($s0)
/* 00460A24 AFA30024 */  sw    $v1, 0x24($sp)
/* 00460A28 0320F809 */  jalr  $t9
/* 00460A2C 2484010C */   addiu $a0, $a0, 0x10c
/* 00460A30 8FA30024 */  lw    $v1, 0x24($sp)
/* 00460A34 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460A38 240D0001 */  li    $t5, 1
/* 00460A3C 94620010 */  lhu   $v0, 0x10($v1)
/* 00460A40 54400004 */  bnezl $v0, .L00460A54
/* 00460A44 244E0001 */   addiu $t6, $v0, 1
/* 00460A48 A06D0014 */  sb    $t5, 0x14($v1)
/* 00460A4C 94620010 */  lhu   $v0, 0x10($v1)
/* 00460A50 244E0001 */  addiu $t6, $v0, 1
.L00460A54:
/* 00460A54 A46E0010 */  sh    $t6, 0x10($v1)
.L00460A58:
/* 00460A58 10000184 */  b     .L0046106C
/* 00460A5C A3A00053 */   sb    $zero, 0x53($sp)
.L00460A60:
/* 00460A60 8F99802C */  lw    $t9, %got(func_0045FBB4)($gp)
/* 00460A64 8E040014 */  lw    $a0, 0x14($s0)
/* 00460A68 00002825 */  move  $a1, $zero
/* 00460A6C 2739FBB4 */  addiu $t9, %lo(func_0045FBB4) # addiu $t9, $t9, -0x44c
/* 00460A70 93A60063 */  lbu   $a2, 0x63($sp)
/* 00460A74 0320F809 */  jalr  $t9
/* 00460A78 8FA20054 */   lw    $v0, 0x54($sp)
/* 00460A7C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460A80 92040010 */  lbu   $a0, 0x10($s0)
/* 00460A84 304700FF */  andi  $a3, $v0, 0xff
/* 00460A88 8F8C8DBC */  lw     $t4, %got(optab)($gp)
/* 00460A8C 0004C080 */  sll   $t8, $a0, 2
/* 00460A90 0304C023 */  subu  $t8, $t8, $a0
/* 00460A94 030C5021 */  addu  $t2, $t8, $t4
/* 00460A98 914F0002 */  lbu   $t7, 2($t2)
/* 00460A9C 00002825 */  move  $a1, $zero
/* 00460AA0 93A60063 */  lbu   $a2, 0x63($sp)
/* 00460AA4 11E00034 */  beqz  $t7, .L00460B78
/* 00460AA8 2401000B */   li    $at, 11
/* 00460AAC 8F99802C */  lw    $t9, %got(func_0045FBB4)($gp)
/* 00460AB0 8E040018 */  lw    $a0, 0x18($s0)
/* 00460AB4 8FA20054 */  lw    $v0, 0x54($sp)
/* 00460AB8 2739FBB4 */  addiu $t9, %lo(func_0045FBB4) # addiu $t9, $t9, -0x44c
/* 00460ABC 0320F809 */  jalr  $t9
/* 00460AC0 A3A70052 */   sb    $a3, 0x52($sp)
/* 00460AC4 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460AC8 93A70052 */  lbu   $a3, 0x52($sp)
/* 00460ACC 10400002 */  beqz  $v0, .L00460AD8
/* 00460AD0 00401825 */   move  $v1, $v0
/* 00460AD4 00E01825 */  move  $v1, $a3
.L00460AD8:
/* 00460AD8 306B00FF */  andi  $t3, $v1, 0xff
/* 00460ADC 11600066 */  beqz  $t3, .L00460C78
/* 00460AE0 306700FF */   andi  $a3, $v1, 0xff
/* 00460AE4 92040010 */  lbu   $a0, 0x10($s0)
/* 00460AE8 24010041 */  li    $at, 65
/* 00460AEC 2C990080 */  sltiu $t9, $a0, 0x80
/* 00460AF0 13200009 */  beqz  $t9, .L00460B18
/* 00460AF4 00000000 */   nop   
/* 00460AF8 8F988044 */  lw    $t8, %got(D_10010E94)($gp)
/* 00460AFC 00046943 */  sra   $t5, $a0, 5
/* 00460B00 000D7080 */  sll   $t6, $t5, 2
/* 00460B04 27180E94 */  addiu $t8, %lo(D_10010E94) # addiu $t8, $t8, 0xe94
/* 00460B08 030E6021 */  addu  $t4, $t8, $t6
/* 00460B0C 8D8A0000 */  lw    $t2, ($t4)
/* 00460B10 008A7804 */  sllv  $t7, $t2, $a0
/* 00460B14 29F90000 */  slti  $t9, $t7, 0
.L00460B18:
/* 00460B18 1320000A */  beqz  $t9, .L00460B44
/* 00460B1C 00000000 */   nop   
/* 00460B20 920D0001 */  lbu   $t5, 1($s0)
/* 00460B24 3C018A80 */  lui   $at, 0x8a80
/* 00460B28 2DB80020 */  sltiu $t8, $t5, 0x20
/* 00460B2C 00187023 */  negu  $t6, $t8
/* 00460B30 01C16024 */  and   $t4, $t6, $at
/* 00460B34 01AC3804 */  sllv  $a3, $t4, $t5
/* 00460B38 28E70000 */  slti  $a3, $a3, 0
/* 00460B3C 1000004E */  b     .L00460C78
/* 00460B40 30E700FF */   andi  $a3, $a3, 0xff
.L00460B44:
/* 00460B44 1481000A */  bne   $a0, $at, .L00460B70
/* 00460B48 00000000 */   nop   
/* 00460B4C 920A0001 */  lbu   $t2, 1($s0)
/* 00460B50 3C018A80 */  lui   $at, 0x8a80
/* 00460B54 2D4F0020 */  sltiu $t7, $t2, 0x20
/* 00460B58 000F5823 */  negu  $t3, $t7
/* 00460B5C 0161C824 */  and   $t9, $t3, $at
/* 00460B60 01593804 */  sllv  $a3, $t9, $t2
/* 00460B64 28E70000 */  slti  $a3, $a3, 0
/* 00460B68 10000043 */  b     .L00460C78
/* 00460B6C 30E700FF */   andi  $a3, $a3, 0xff
.L00460B70:
/* 00460B70 10000041 */  b     .L00460C78
/* 00460B74 00003825 */   move  $a3, $zero
.L00460B78:
/* 00460B78 1481000D */  bne   $a0, $at, .L00460BB0
/* 00460B7C 00000000 */   nop   
/* 00460B80 8E040018 */  lw    $a0, 0x18($s0)
/* 00460B84 00002825 */  move  $a1, $zero
/* 00460B88 10800009 */  beqz  $a0, .L00460BB0
/* 00460B8C 00000000 */   nop   
/* 00460B90 8F99802C */  lw    $t9, %got(func_0045FBB4)($gp)
/* 00460B94 93A60063 */  lbu   $a2, 0x63($sp)
/* 00460B98 8FA20054 */  lw    $v0, 0x54($sp)
/* 00460B9C 2739FBB4 */  addiu $t9, %lo(func_0045FBB4) # addiu $t9, $t9, -0x44c
/* 00460BA0 0320F809 */  jalr  $t9
/* 00460BA4 A3A70052 */   sb    $a3, 0x52($sp)
/* 00460BA8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460BAC 93A70052 */  lbu   $a3, 0x52($sp)
.L00460BB0:
/* 00460BB0 50E00032 */  beql  $a3, $zero, .L00460C7C
/* 00460BB4 920A0012 */   lbu   $t2, 0x12($s0)
/* 00460BB8 92040010 */  lbu   $a0, 0x10($s0)
/* 00460BBC 24010018 */  li    $at, 24
/* 00460BC0 10810016 */  beq   $a0, $at, .L00460C1C
/* 00460BC4 2C980080 */   sltiu $t8, $a0, 0x80
/* 00460BC8 13000009 */  beqz  $t8, .L00460BF0
/* 00460BCC 00000000 */   nop   
/* 00460BD0 8F8D8044 */  lw    $t5, %got(D_10010E84)($gp)
/* 00460BD4 00047143 */  sra   $t6, $a0, 5
/* 00460BD8 000E6080 */  sll   $t4, $t6, 2
/* 00460BDC 25AD0E84 */  addiu $t5, %lo(D_10010E84) # addiu $t5, $t5, 0xe84
/* 00460BE0 01AC7821 */  addu  $t7, $t5, $t4
/* 00460BE4 8DEB0000 */  lw    $t3, ($t7)
/* 00460BE8 008BC804 */  sllv  $t9, $t3, $a0
/* 00460BEC 2B380000 */  slti  $t8, $t9, 0
.L00460BF0:
/* 00460BF0 13000008 */  beqz  $t8, .L00460C14
/* 00460BF4 03001825 */   move  $v1, $t8
/* 00460BF8 920E0001 */  lbu   $t6, 1($s0)
/* 00460BFC 3C018A80 */  lui   $at, 0x8a80
/* 00460C00 2DCD0020 */  sltiu $t5, $t6, 0x20
/* 00460C04 000D6023 */  negu  $t4, $t5
/* 00460C08 01817824 */  and   $t7, $t4, $at
/* 00460C0C 01CF1804 */  sllv  $v1, $t7, $t6
/* 00460C10 28630000 */  slti  $v1, $v1, 0
.L00460C14:
/* 00460C14 10000018 */  b     .L00460C78
/* 00460C18 306700FF */   andi  $a3, $v1, 0xff
.L00460C1C:
/* 00460C1C 920B0001 */  lbu   $t3, 1($s0)
/* 00460C20 3C018A80 */  lui   $at, 0x8a80
/* 00460C24 2D790020 */  sltiu $t9, $t3, 0x20
/* 00460C28 00195023 */  negu  $t2, $t9
/* 00460C2C 0141C024 */  and   $t8, $t2, $at
/* 00460C30 01781804 */  sllv  $v1, $t8, $t3
/* 00460C34 28630000 */  slti  $v1, $v1, 0
/* 00460C38 5060000F */  beql  $v1, $zero, .L00460C78
/* 00460C3C 306700FF */   andi  $a3, $v1, 0xff
/* 00460C40 920D0024 */  lbu   $t5, 0x24($s0)
/* 00460C44 3C018A80 */  lui   $at, 0x8a80
/* 00460C48 2DAC0020 */  sltiu $t4, $t5, 0x20
/* 00460C4C 000C7823 */  negu  $t7, $t4
/* 00460C50 01E17024 */  and   $t6, $t7, $at
/* 00460C54 01AE1804 */  sllv  $v1, $t6, $t5
/* 00460C58 28630000 */  slti  $v1, $v1, 0
/* 00460C5C 50600006 */  beql  $v1, $zero, .L00460C78
/* 00460C60 306700FF */   andi  $a3, $v1, 0xff
/* 00460C64 8E190014 */  lw    $t9, 0x14($s0)
/* 00460C68 93230000 */  lbu   $v1, ($t9)
/* 00460C6C 38630001 */  xori  $v1, $v1, 1
/* 00460C70 0003182B */  sltu  $v1, $zero, $v1
/* 00460C74 306700FF */  andi  $a3, $v1, 0xff
.L00460C78:
/* 00460C78 920A0012 */  lbu   $t2, 0x12($s0)
.L00460C7C:
/* 00460C7C 2401000E */  li    $at, 14
/* 00460C80 A3A70053 */  sb    $a3, 0x53($sp)
/* 00460C84 55410010 */  bnel  $t2, $at, .L00460CC8
/* 00460C88 93AB005F */   lbu   $t3, 0x5f($sp)
/* 00460C8C 8F9984CC */  lw    $t9, %call16(sizeofsetexpr)($gp)
/* 00460C90 02002025 */  move  $a0, $s0
/* 00460C94 A3A70052 */  sb    $a3, 0x52($sp)
/* 00460C98 0320F809 */  jalr  $t9
/* 00460C9C 00000000 */   nop   
/* 00460CA0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460CA4 93A70052 */  lbu   $a3, 0x52($sp)
/* 00460CA8 8F988B34 */  lw     $t8, %got(int_reg_size)($gp)
/* 00460CAC 8F180000 */  lw    $t8, ($t8)
/* 00460CB0 0302082A */  slt   $at, $t8, $v0
/* 00460CB4 50200004 */  beql  $at, $zero, .L00460CC8
/* 00460CB8 93AB005F */   lbu   $t3, 0x5f($sp)
/* 00460CBC 100000EC */  b     .L00461070
/* 00460CC0 00E01025 */   move  $v0, $a3
/* 00460CC4 93AB005F */  lbu   $t3, 0x5f($sp)
.L00460CC8:
/* 00460CC8 15600011 */  bnez  $t3, .L00460D10
/* 00460CCC 00000000 */   nop   
/* 00460CD0 14E0000F */  bnez  $a3, .L00460D10
/* 00460CD4 00000000 */   nop   
/* 00460CD8 8E020024 */  lw    $v0, 0x24($s0)
/* 00460CDC 10400005 */  beqz  $v0, .L00460CF4
/* 00460CE0 00000000 */   nop   
/* 00460CE4 8F8C89D0 */  lw     $t4, %got(nota_candof)($gp)
/* 00460CE8 8D8C0000 */  lw    $t4, ($t4)
/* 00460CEC 15820008 */  bne   $t4, $v0, .L00460D10
/* 00460CF0 00000000 */   nop   
.L00460CF4:
/* 00460CF4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00460CF8 8F848D2C */  lw     $a0, %got(old)($gp)
/* 00460CFC 96050002 */  lhu   $a1, 2($s0)
/* 00460D00 0320F809 */  jalr  $t9
/* 00460D04 A3A70052 */   sb    $a3, 0x52($sp)
/* 00460D08 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460D0C 93A70052 */  lbu   $a3, 0x52($sp)
.L00460D10:
/* 00460D10 10E00009 */  beqz  $a3, .L00460D38
/* 00460D14 8FAF0054 */   lw    $t7, 0x54($sp)
/* 00460D18 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00460D1C 8DE4FFFC */  lw    $a0, -4($t7)
/* 00460D20 A3A70052 */  sb    $a3, 0x52($sp)
/* 00460D24 96050002 */  lhu   $a1, 2($s0)
/* 00460D28 0320F809 */  jalr  $t9
/* 00460D2C 2484016C */   addiu $a0, $a0, 0x16c
/* 00460D30 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460D34 93A70052 */  lbu   $a3, 0x52($sp)
.L00460D38:
/* 00460D38 93AE005F */  lbu   $t6, 0x5f($sp)
/* 00460D3C 51C000CC */  beql  $t6, $zero, .L00461070
/* 00460D40 93A20053 */   lbu   $v0, 0x53($sp)
/* 00460D44 920D0012 */  lbu   $t5, 0x12($s0)
/* 00460D48 3C010500 */  lui   $at, 0x500
/* 00460D4C 8FA20054 */  lw    $v0, 0x54($sp)
/* 00460D50 2DB90020 */  sltiu $t9, $t5, 0x20
/* 00460D54 00195023 */  negu  $t2, $t9
/* 00460D58 0141C024 */  and   $t8, $t2, $at
/* 00460D5C 01B85804 */  sllv  $t3, $t8, $t5
/* 00460D60 05610005 */  bgez  $t3, .L00460D78
/* 00460D64 02002025 */   move  $a0, $s0
/* 00460D68 8F8C8B2C */  lw     $t4, %got(dwopcode)($gp)
/* 00460D6C 918C0000 */  lbu   $t4, ($t4)
/* 00460D70 51800022 */  beql  $t4, $zero, .L00460DFC
/* 00460D74 920B0010 */   lbu   $t3, 0x10($s0)
.L00460D78:
/* 00460D78 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 00460D7C 8C45FFFC */  lw    $a1, -4($v0)
/* 00460D80 A3A70052 */  sb    $a3, 0x52($sp)
/* 00460D84 2446FFF4 */  addiu $a2, $v0, -0xc
/* 00460D88 0320F809 */  jalr  $t9
/* 00460D8C AFA50028 */   sw    $a1, 0x28($sp)
/* 00460D90 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460D94 93A70052 */  lbu   $a3, 0x52($sp)
/* 00460D98 8FAE0054 */  lw    $t6, 0x54($sp)
/* 00460D9C 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 00460DA0 91EF0000 */  lbu   $t7, ($t7)
/* 00460DA4 51E00004 */  beql  $t7, $zero, .L00460DB8
/* 00460DA8 8DC3FFF4 */   lw    $v1, -0xc($t6)
/* 00460DAC 100000B0 */  b     .L00461070
/* 00460DB0 00E01025 */   move  $v0, $a3
/* 00460DB4 8DC3FFF4 */  lw    $v1, -0xc($t6)
.L00460DB8:
/* 00460DB8 90790012 */  lbu   $t9, 0x12($v1)
/* 00460DBC 272A0001 */  addiu $t2, $t9, 1
/* 00460DC0 A06A0012 */  sb    $t2, 0x12($v1)
/* 00460DC4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00460DC8 8FA40028 */  lw    $a0, 0x28($sp)
/* 00460DCC 96050002 */  lhu   $a1, 2($s0)
/* 00460DD0 AFA30024 */  sw    $v1, 0x24($sp)
/* 00460DD4 0320F809 */  jalr  $t9
/* 00460DD8 2484010C */   addiu $a0, $a0, 0x10c
/* 00460DDC 8FA30024 */  lw    $v1, 0x24($sp)
/* 00460DE0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460DE4 240D0001 */  li    $t5, 1
/* 00460DE8 94780010 */  lhu   $t8, 0x10($v1)
/* 00460DEC 57000003 */  bnezl $t8, .L00460DFC
/* 00460DF0 920B0010 */   lbu   $t3, 0x10($s0)
/* 00460DF4 A06D0014 */  sb    $t5, 0x14($v1)
/* 00460DF8 920B0010 */  lbu   $t3, 0x10($s0)
.L00460DFC:
/* 00460DFC 2D6C00A0 */  sltiu $t4, $t3, 0xa0
/* 00460E00 11800009 */  beqz  $t4, .L00460E28
/* 00460E04 00000000 */   nop   
/* 00460E08 8F998044 */  lw    $t9, %got(D_10010E70)($gp)
/* 00460E0C 000B7943 */  sra   $t7, $t3, 5
/* 00460E10 000F7080 */  sll   $t6, $t7, 2
/* 00460E14 27390E70 */  addiu $t9, %lo(D_10010E70) # addiu $t9, $t9, 0xe70
/* 00460E18 032E5021 */  addu  $t2, $t9, $t6
/* 00460E1C 8D580000 */  lw    $t8, ($t2)
/* 00460E20 01786804 */  sllv  $t5, $t8, $t3
/* 00460E24 29AC0000 */  slti  $t4, $t5, 0
.L00460E28:
/* 00460E28 55800091 */  bnezl $t4, .L00461070
/* 00460E2C 93A20053 */   lbu   $v0, 0x53($sp)
/* 00460E30 8E020024 */  lw    $v0, 0x24($s0)
/* 00460E34 5040008E */  beql  $v0, $zero, .L00461070
/* 00460E38 93A20053 */   lbu   $v0, 0x53($sp)
/* 00460E3C 8F9989D0 */  lw     $t9, %got(nota_candof)($gp)
/* 00460E40 8F390000 */  lw    $t9, ($t9)
/* 00460E44 5322008A */  beql  $t9, $v0, .L00461070
/* 00460E48 93A20053 */   lbu   $v0, 0x53($sp)
/* 00460E4C 8C430018 */  lw    $v1, 0x18($v0)
/* 00460E50 14600046 */  bnez  $v1, .L00460F6C
/* 00460E54 00000000 */   nop   
/* 00460E58 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00460E5C 24040028 */  li    $a0, 40
/* 00460E60 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00460E64 0320F809 */  jalr  $t9
/* 00460E68 00000000 */   nop   
/* 00460E6C 8E0E0024 */  lw    $t6, 0x24($s0)
/* 00460E70 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460E74 00403825 */  move  $a3, $v0
/* 00460E78 8DCA0000 */  lw    $t2, ($t6)
/* 00460E7C 00406825 */  move  $t5, $v0
/* 00460E80 254F0024 */  addiu $t7, $t2, 0x24
.L00460E84:
/* 00460E84 8D4B0000 */  lw    $t3, ($t2)
/* 00460E88 254A000C */  addiu $t2, $t2, 0xc
/* 00460E8C 25AD000C */  addiu $t5, $t5, 0xc
/* 00460E90 ADABFFF4 */  sw    $t3, -0xc($t5)
/* 00460E94 8D58FFF8 */  lw    $t8, -8($t2)
/* 00460E98 ADB8FFF8 */  sw    $t8, -8($t5)
/* 00460E9C 8D4BFFFC */  lw    $t3, -4($t2)
/* 00460EA0 154FFFF8 */  bne   $t2, $t7, .L00460E84
/* 00460EA4 ADABFFFC */   sw    $t3, -4($t5)
/* 00460EA8 8D4B0000 */  lw    $t3, ($t2)
/* 00460EAC 240C000A */  li    $t4, 10
/* 00460EB0 00402025 */  move  $a0, $v0
/* 00460EB4 ADAB0000 */  sw    $t3, ($t5)
/* 00460EB8 A04C0010 */  sb    $t4, 0x10($v0)
/* 00460EBC 8F998664 */  lw    $t9, %call16(newbit)($gp)
/* 00460EC0 AFA70040 */  sw    $a3, 0x40($sp)
/* 00460EC4 00002825 */  move  $a1, $zero
/* 00460EC8 0320F809 */  jalr  $t9
/* 00460ECC 00000000 */   nop   
/* 00460ED0 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460ED4 8E190024 */  lw    $t9, 0x24($s0)
/* 00460ED8 8FA70040 */  lw    $a3, 0x40($sp)
/* 00460EDC 8F868970 */  lw     $a2, %got(tempdisp)($gp)
/* 00460EE0 AF220018 */  sw    $v0, 0x18($t9)
/* 00460EE4 8E0E0024 */  lw    $t6, 0x24($s0)
/* 00460EE8 8CC30000 */  lw    $v1, ($a2)
/* 00460EEC 8DCF0018 */  lw    $t7, 0x18($t6)
/* 00460EF0 30640003 */  andi  $a0, $v1, 3
/* 00460EF4 10800004 */  beqz  $a0, .L00460F08
/* 00460EF8 A4EF0002 */   sh    $t7, 2($a3)
/* 00460EFC 00645023 */  subu  $t2, $v1, $a0
/* 00460F00 254D0004 */  addiu $t5, $t2, 4
/* 00460F04 ACCD0000 */  sw    $t5, ($a2)
.L00460F08:
/* 00460F08 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00460F0C 24040014 */  li    $a0, 20
/* 00460F10 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00460F14 0320F809 */  jalr  $t9
/* 00460F18 AFA70040 */   sw    $a3, 0x40($sp)
/* 00460F1C 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460F20 8FA70040 */  lw    $a3, 0x40($sp)
/* 00460F24 8F988B48 */  lw     $t8, %got(stack_reversed)($gp)
/* 00460F28 ACE20020 */  sw    $v0, 0x20($a3)
/* 00460F2C 8F868970 */  lw     $a2, %got(tempdisp)($gp)
/* 00460F30 93180000 */  lbu   $t8, ($t8)
/* 00460F34 57000008 */  bnezl $t8, .L00460F58
/* 00460F38 8CC30000 */   lw    $v1, ($a2)
/* 00460F3C 8CCB0000 */  lw    $t3, ($a2)
/* 00460F40 256C0004 */  addiu $t4, $t3, 4
/* 00460F44 ACCC0000 */  sw    $t4, ($a2)
/* 00460F48 000C7023 */  negu  $t6, $t4
/* 00460F4C 1000000C */  b     .L00460F80
/* 00460F50 AC4E0004 */   sw    $t6, 4($v0)
/* 00460F54 8CC30000 */  lw    $v1, ($a2)
.L00460F58:
/* 00460F58 8CEA0020 */  lw    $t2, 0x20($a3)
/* 00460F5C 246D0004 */  addiu $t5, $v1, 4
/* 00460F60 AD430004 */  sw    $v1, 4($t2)
/* 00460F64 10000006 */  b     .L00460F80
/* 00460F68 ACCD0000 */   sw    $t5, ($a2)
.L00460F6C:
/* 00460F6C 8F9889EC */  lw     $t8, %got(bittab)($gp)
/* 00460F70 000358C0 */  sll   $t3, $v1, 3
/* 00460F74 8F180000 */  lw    $t8, ($t8)
/* 00460F78 030B6021 */  addu  $t4, $t8, $t3
/* 00460F7C 8D870000 */  lw    $a3, ($t4)
.L00460F80:
/* 00460F80 90F90012 */  lbu   $t9, 0x12($a3)
/* 00460F84 3C010500 */  lui   $at, 0x500
/* 00460F88 8FA20054 */  lw    $v0, 0x54($sp)
/* 00460F8C 2F2E0020 */  sltiu $t6, $t9, 0x20
/* 00460F90 000E7823 */  negu  $t7, $t6
/* 00460F94 01E15024 */  and   $t2, $t7, $at
/* 00460F98 032A6804 */  sllv  $t5, $t2, $t9
/* 00460F9C 05A10005 */  bgez  $t5, .L00460FB4
/* 00460FA0 00002825 */   move  $a1, $zero
/* 00460FA4 8F988B2C */  lw     $t8, %got(dwopcode)($gp)
/* 00460FA8 93180000 */  lbu   $t8, ($t8)
/* 00460FAC 53000030 */  beql  $t8, $zero, .L00461070
/* 00460FB0 93A20053 */   lbu   $v0, 0x53($sp)
.L00460FB4:
/* 00460FB4 8E0B0024 */  lw    $t3, 0x24($s0)
/* 00460FB8 8F99802C */  lw    $t9, %got(func_0045FBB4)($gp)
/* 00460FBC 244CFFF4 */  addiu $t4, $v0, -0xc
/* 00460FC0 8D640010 */  lw    $a0, 0x10($t3)
/* 00460FC4 2739FBB4 */  addiu $t9, %lo(func_0045FBB4) # addiu $t9, $t9, -0x44c
/* 00460FC8 AFA70040 */  sw    $a3, 0x40($sp)
/* 00460FCC AFAC0024 */  sw    $t4, 0x24($sp)
/* 00460FD0 0320F809 */  jalr  $t9
/* 00460FD4 00003025 */   move  $a2, $zero
/* 00460FD8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00460FDC 8FAE0054 */  lw    $t6, 0x54($sp)
/* 00460FE0 8FA40040 */  lw    $a0, 0x40($sp)
/* 00460FE4 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 00460FE8 8DC5FFFC */  lw    $a1, -4($t6)
/* 00460FEC 8FA60024 */  lw    $a2, 0x24($sp)
/* 00460FF0 0320F809 */  jalr  $t9
/* 00460FF4 AFA50028 */   sw    $a1, 0x28($sp)
/* 00460FF8 8FAF0054 */  lw    $t7, 0x54($sp)
/* 00460FFC 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00461000 8DE3FFF4 */  lw    $v1, -0xc($t7)
/* 00461004 906A0012 */  lbu   $t2, 0x12($v1)
/* 00461008 25590001 */  addiu $t9, $t2, 1
/* 0046100C A0790012 */  sb    $t9, 0x12($v1)
/* 00461010 8E0D0024 */  lw    $t5, 0x24($s0)
/* 00461014 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00461018 8FA40028 */  lw    $a0, 0x28($sp)
/* 0046101C 8DA50018 */  lw    $a1, 0x18($t5)
/* 00461020 AFA30024 */  sw    $v1, 0x24($sp)
/* 00461024 0320F809 */  jalr  $t9
/* 00461028 2484010C */   addiu $a0, $a0, 0x10c
/* 0046102C 8FA30024 */  lw    $v1, 0x24($sp)
/* 00461030 8FBC0018 */  lw    $gp, 0x18($sp)
/* 00461034 240B0001 */  li    $t3, 1
/* 00461038 94780010 */  lhu   $t8, 0x10($v1)
/* 0046103C 5700000C */  bnezl $t8, .L00461070
/* 00461040 93A20053 */   lbu   $v0, 0x53($sp)
/* 00461044 10000009 */  b     .L0046106C
/* 00461048 A06B0014 */   sb    $t3, 0x14($v1)
.L0046104C:
/* 0046104C 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00461050 8F868044 */  lw    $a2, %got(RO_1000D5B8)($gp)
/* 00461054 24040001 */  li    $a0, 1
/* 00461058 240502D2 */  li    $a1, 722
/* 0046105C 2407000A */  li    $a3, 10
/* 00461060 0320F809 */  jalr  $t9
/* 00461064 24C6D5B8 */   addiu $a2, %lo(RO_1000D5B8) # addiu $a2, $a2, -0x2a48
/* 00461068 8FBC0018 */  lw    $gp, 0x18($sp)
.L0046106C:
/* 0046106C 93A20053 */  lbu   $v0, 0x53($sp)
.L00461070:
/* 00461070 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00461074 8FB00014 */  lw    $s0, 0x14($sp)
/* 00461078 27BD0058 */  addiu $sp, $sp, 0x58
/* 0046107C 03E00008 */  jr    $ra
/* 00461080 00000000 */   nop   
)"");

__asm__(R""(
.set noat
.set noreorder

    .type func_00461084, @function
func_00461084:
    # 00461084 func_00461084
    # 0046123C func_0046123C
/* 00461084 3C1C0FBC */  .cpload $t9
/* 00461088 279C920C */  
/* 0046108C 0399E021 */  
/* 00461090 27BDFFB8 */  addiu $sp, $sp, -0x48
/* 00461094 AFB40024 */  sw    $s4, 0x24($sp)
/* 00461098 AFB30020 */  sw    $s3, 0x20($sp)
/* 0046109C AFB2001C */  sw    $s2, 0x1c($sp)
/* 004610A0 AFB00014 */  sw    $s0, 0x14($sp)
/* 004610A4 00808025 */  move  $s0, $a0
/* 004610A8 8F928DBC */  lw     $s2, %got(optab)($gp)
/* 004610AC 00409825 */  move  $s3, $v0
/* 004610B0 24140003 */  li    $s4, 3
/* 004610B4 AFBF002C */  sw    $ra, 0x2c($sp)
/* 004610B8 AFBC0028 */  sw    $gp, 0x28($sp)
/* 004610BC AFB10018 */  sw    $s1, 0x18($sp)
.L004610C0:
/* 004610C0 92020000 */  lbu   $v0, ($s0)
/* 004610C4 02008825 */  move  $s1, $s0
/* 004610C8 244EFFFF */  addiu $t6, $v0, -1
/* 004610CC 2DC10006 */  sltiu $at, $t6, 6
/* 004610D0 1020004A */  beqz  $at, .L004611FC
/* 004610D4 00000000 */   nop   
/* 004610D8 8F818044 */  lw    $at, %got(jtbl_1000D5F0)($gp)
/* 004610DC 000E7080 */  sll   $t6, $t6, 2
/* 004610E0 002E0821 */  addu  $at, $at, $t6
/* 004610E4 8C2ED5F0 */  lw    $t6, %lo(jtbl_1000D5F0)($at)
/* 004610E8 01DC7021 */  addu  $t6, $t6, $gp
/* 004610EC 01C00008 */  jr    $t6
/* 004610F0 00000000 */   nop   
.L004610F4:
/* 004610F4 1000FFF2 */  b     .L004610C0
/* 004610F8 8E300020 */   lw    $s0, 0x20($s1)
.L004610FC:
/* 004610FC 1000FFF0 */  b     .L004610C0
/* 00461100 8E30001C */   lw    $s0, 0x1c($s1)
.L00461104:
/* 00461104 920F0001 */  lbu   $t7, 1($s0)
/* 00461108 3C010500 */  lui   $at, 0x500
/* 0046110C 02002025 */  move  $a0, $s0
/* 00461110 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00461114 0018C823 */  negu  $t9, $t8
/* 00461118 03214024 */  and   $t0, $t9, $at
/* 0046111C 01E84804 */  sllv  $t1, $t0, $t7
/* 00461120 05210009 */  bgez  $t1, .L00461148
/* 00461124 00000000 */   nop   
/* 00461128 8F8A8B2C */  lw     $t2, %got(dwopcode)($gp)
/* 0046112C 914A0000 */  lbu   $t2, ($t2)
/* 00461130 15400005 */  bnez  $t2, .L00461148
/* 00461134 00000000 */   nop   
/* 00461138 920B0016 */  lbu   $t3, 0x16($s0)
/* 0046113C 316C0007 */  andi  $t4, $t3, 7
/* 00461140 568C0037 */  bnel  $s4, $t4, .L00461220
/* 00461144 8FBF002C */   lw    $ra, 0x2c($sp)
.L00461148:
/* 00461148 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 0046114C 8E71FFFC */  lw    $s1, -4($s3)
/* 00461150 27A60040 */  addiu $a2, $sp, 0x40
/* 00461154 0320F809 */  jalr  $t9
/* 00461158 02202825 */   move  $a1, $s1
/* 0046115C 8FBC0028 */  lw    $gp, 0x28($sp)
/* 00461160 8FA20040 */  lw    $v0, 0x40($sp)
/* 00461164 8F8D8B20 */  lw     $t5, %got(outofmem)($gp)
/* 00461168 91AD0000 */  lbu   $t5, ($t5)
/* 0046116C 55A0002C */  bnezl $t5, .L00461220
/* 00461170 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00461174 944E0010 */  lhu   $t6, 0x10($v0)
/* 00461178 24010001 */  li    $at, 1
/* 0046117C 25D80001 */  addiu $t8, $t6, 1
/* 00461180 3319FFFF */  andi  $t9, $t8, 0xffff
/* 00461184 17210025 */  bne   $t9, $at, .L0046121C
/* 00461188 A4580010 */   sh    $t8, 0x10($v0)
/* 0046118C 90480012 */  lbu   $t0, 0x12($v0)
/* 00461190 55000023 */  bnezl $t0, .L00461220
/* 00461194 8FBF002C */   lw    $ra, 0x2c($sp)
/* 00461198 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 0046119C 26240114 */  addiu $a0, $s1, 0x114
/* 004611A0 96050002 */  lhu   $a1, 2($s0)
/* 004611A4 0320F809 */  jalr  $t9
/* 004611A8 00000000 */   nop   
/* 004611AC 1000001B */  b     .L0046121C
/* 004611B0 8FBC0028 */   lw    $gp, 0x28($sp)
.L004611B4:
/* 004611B4 920F0010 */  lbu   $t7, 0x10($s0)
/* 004611B8 01F40019 */  multu $t7, $s4
/* 004611BC 00004812 */  mflo  $t1
/* 004611C0 02495021 */  addu  $t2, $s2, $t1
/* 004611C4 914B0002 */  lbu   $t3, 2($t2)
/* 004611C8 1160000A */  beqz  $t3, .L004611F4
/* 004611CC 00000000 */   nop   
/* 004611D0 8F99802C */  lw    $t9, %got(func_00461084)($gp)
/* 004611D4 8E040014 */  lw    $a0, 0x14($s0)
/* 004611D8 02601025 */  move  $v0, $s3
/* 004611DC 27391084 */  addiu $t9, %lo(func_00461084) # addiu $t9, $t9, 0x1084
/* 004611E0 0320F809 */  jalr  $t9
/* 004611E4 00000000 */   nop   
/* 004611E8 8FBC0028 */  lw    $gp, 0x28($sp)
/* 004611EC 1000FFB4 */  b     .L004610C0
/* 004611F0 8E300018 */   lw    $s0, 0x18($s1)
.L004611F4:
/* 004611F4 1000FFB2 */  b     .L004610C0
/* 004611F8 8E300014 */   lw    $s0, 0x14($s1)
.L004611FC:
/* 004611FC 8F9988A4 */  lw    $t9, %call16(caseerror)($gp)
/* 00461200 8F868044 */  lw    $a2, %got(RO_1000D5E4)($gp)
/* 00461204 24040001 */  li    $a0, 1
/* 00461208 24050418 */  li    $a1, 1048
/* 0046120C 2407000A */  li    $a3, 10
/* 00461210 0320F809 */  jalr  $t9
/* 00461214 24C6D5E4 */   addiu $a2, %lo(RO_1000D5E4) # addiu $a2, $a2, -0x2a1c
/* 00461218 8FBC0028 */  lw    $gp, 0x28($sp)
.L0046121C:
/* 0046121C 8FBF002C */  lw    $ra, 0x2c($sp)
.L00461220:
/* 00461220 8FB00014 */  lw    $s0, 0x14($sp)
/* 00461224 8FB10018 */  lw    $s1, 0x18($sp)
/* 00461228 8FB2001C */  lw    $s2, 0x1c($sp)
/* 0046122C 8FB30020 */  lw    $s3, 0x20($sp)
/* 00461230 8FB40024 */  lw    $s4, 0x24($sp)
/* 00461234 03E00008 */  jr    $ra
/* 00461238 27BD0048 */   addiu $sp, $sp, 0x48
)"");

__asm__(R""(
.set noat
.set noreorder

    .type func_0046123C, @function
func_0046123C:
    # 00461AAC makelivranges
/* 0046123C 3C1C0FBC */  .cpload $t9
/* 00461240 279C9054 */  
/* 00461244 0399E021 */  
/* 00461248 27BDFF90 */  addiu $sp, $sp, -0x70
/* 0046124C 8C85002C */  lw    $a1, 0x2c($a0)
/* 00461250 AFB50028 */  sw    $s5, 0x28($sp)
/* 00461254 0040A825 */  move  $s5, $v0
/* 00461258 AFBF003C */  sw    $ra, 0x3c($sp)
/* 0046125C AFBE0038 */  sw    $fp, 0x38($sp)
/* 00461260 AFBC0034 */  sw    $gp, 0x34($sp)
/* 00461264 AFB70030 */  sw    $s7, 0x30($sp)
/* 00461268 AFB6002C */  sw    $s6, 0x2c($sp)
/* 0046126C AFB40024 */  sw    $s4, 0x24($sp)
/* 00461270 AFB30020 */  sw    $s3, 0x20($sp)
/* 00461274 AFB2001C */  sw    $s2, 0x1c($sp)
/* 00461278 AFB10018 */  sw    $s1, 0x18($sp)
/* 0046127C 10A000E4 */  beqz  $a1, .L00461610
/* 00461280 AFB00014 */   sw    $s0, 0x14($sp)
/* 00461284 8F828B24 */  lw     $v0, %got(mipsflag)($gp)
/* 00461288 00A09025 */  move  $s2, $a1
/* 0046128C 27BE0068 */  addiu $fp, $sp, 0x68
/* 00461290 90420000 */  lbu   $v0, ($v0)
/* 00461294 38420003 */  xori  $v0, $v0, 3
/* 00461298 2C420001 */  sltiu $v0, $v0, 1
/* 0046129C 50400005 */  beql  $v0, $zero, .L004612B4
/* 004612A0 304F00FF */   andi  $t7, $v0, 0xff
/* 004612A4 8C8E0010 */  lw    $t6, 0x10($a0)
/* 004612A8 8DC200E8 */  lw    $v0, 0xe8($t6)
/* 004612AC 0002102B */  sltu  $v0, $zero, $v0
/* 004612B0 304F00FF */  andi  $t7, $v0, 0xff
.L004612B4:
/* 004612B4 11E00011 */  beqz  $t7, .L004612FC
/* 004612B8 305600FF */   andi  $s6, $v0, 0xff
/* 004612BC 8C980010 */  lw    $t8, 0x10($a0)
/* 004612C0 8F898A0C */  lw     $t1, %got(looptab)($gp)
/* 004612C4 8F1900E8 */  lw    $t9, 0xe8($t8)
/* 004612C8 8D290000 */  lw    $t1, ($t1)
/* 004612CC 8F280000 */  lw    $t0, ($t9)
/* 004612D0 00085880 */  sll   $t3, $t0, 2
/* 004612D4 01685823 */  subu  $t3, $t3, $t0
/* 004612D8 000B5880 */  sll   $t3, $t3, 2
/* 004612DC 012B1821 */  addu  $v1, $t1, $t3
/* 004612E0 90620009 */  lbu   $v0, 9($v1)
/* 004612E4 AFA80058 */  sw    $t0, 0x58($sp)
/* 004612E8 50400004 */  beql  $v0, $zero, .L004612FC
/* 004612EC 305600FF */   andi  $s6, $v0, 0xff
/* 004612F0 8C620004 */  lw    $v0, 4($v1)
/* 004612F4 0002102B */  sltu  $v0, $zero, $v0
/* 004612F8 305600FF */  andi  $s6, $v0, 0xff
.L004612FC:
/* 004612FC 8F978B2C */  lw     $s7, %got(dwopcode)($gp)
/* 00461300 8F948970 */  lw     $s4, %got(tempdisp)($gp)
.L00461304:
/* 00461304 52C0000B */  beql  $s6, $zero, .L00461334
/* 00461308 8E440000 */   lw    $a0, ($s2)
/* 0046130C 8F998718 */  lw    $t9, %call16(check_ix_candidate)($gp)
/* 00461310 8E440000 */  lw    $a0, ($s2)
/* 00461314 8FA50058 */  lw    $a1, 0x58($sp)
/* 00461318 0320F809 */  jalr  $t9
/* 0046131C 00000000 */   nop   
/* 00461320 10400003 */  beqz  $v0, .L00461330
/* 00461324 8FBC0034 */   lw    $gp, 0x34($sp)
/* 00461328 100000B7 */  b     .L00461608
/* 0046132C 8E520004 */   lw    $s2, 4($s2)
.L00461330:
/* 00461330 8E440000 */  lw    $a0, ($s2)
.L00461334:
/* 00461334 3C010500 */  lui   $at, 0x500
/* 00461338 908C0012 */  lbu   $t4, 0x12($a0)
/* 0046133C 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 00461340 000D7023 */  negu  $t6, $t5
/* 00461344 01C17824 */  and   $t7, $t6, $at
/* 00461348 018FC004 */  sllv  $t8, $t7, $t4
/* 0046134C 07010004 */  bgez  $t8, .L00461360
/* 00461350 00000000 */   nop   
/* 00461354 92F90000 */  lbu   $t9, ($s7)
/* 00461358 53200032 */  beql  $t9, $zero, .L00461424
/* 0046135C 8E440010 */   lw    $a0, 0x10($s2)
.L00461360:
/* 00461360 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 00461364 8EB3FFFC */  lw    $s3, -4($s5)
/* 00461368 03C03025 */  move  $a2, $fp
/* 0046136C 0320F809 */  jalr  $t9
/* 00461370 02602825 */   move  $a1, $s3
/* 00461374 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00461378 8FB00068 */  lw    $s0, 0x68($sp)
/* 0046137C 8F888B20 */  lw     $t0, %got(outofmem)($gp)
/* 00461380 91080000 */  lbu   $t0, ($t0)
/* 00461384 550000A3 */  bnezl $t0, .L00461614
/* 00461388 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0046138C 960A0010 */  lhu   $t2, 0x10($s0)
/* 00461390 2671010C */  addiu $s1, $s3, 0x10c
/* 00461394 25490001 */  addiu $t1, $t2, 1
/* 00461398 12C0000B */  beqz  $s6, .L004613C8
/* 0046139C A6090010 */   sh    $t1, 0x10($s0)
/* 004613A0 8F998720 */  lw    $t9, %call16(check_ix_source)($gp)
/* 004613A4 8E440000 */  lw    $a0, ($s2)
/* 004613A8 8FA50058 */  lw    $a1, 0x58($sp)
/* 004613AC 0320F809 */  jalr  $t9
/* 004613B0 00000000 */   nop   
/* 004613B4 10400004 */  beqz  $v0, .L004613C8
/* 004613B8 8FBC0034 */   lw    $gp, 0x34($sp)
/* 004613BC 960B0010 */  lhu   $t3, 0x10($s0)
/* 004613C0 256D0002 */  addiu $t5, $t3, 2
/* 004613C4 A60D0010 */  sh    $t5, 0x10($s0)
.L004613C8:
/* 004613C8 960E0010 */  lhu   $t6, 0x10($s0)
/* 004613CC 24010001 */  li    $at, 1
/* 004613D0 55C1000B */  bnel  $t6, $at, .L00461400
/* 004613D4 92180012 */   lbu   $t8, 0x12($s0)
/* 004613D8 920F0012 */  lbu   $t7, 0x12($s0)
/* 004613DC 55E00008 */  bnezl $t7, .L00461400
/* 004613E0 92180012 */   lbu   $t8, 0x12($s0)
/* 004613E4 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004613E8 8E4C0000 */  lw    $t4, ($s2)
/* 004613EC 26640114 */  addiu $a0, $s3, 0x114
/* 004613F0 0320F809 */  jalr  $t9
/* 004613F4 95850002 */   lhu   $a1, 2($t4)
/* 004613F8 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004613FC 92180012 */  lbu   $t8, 0x12($s0)
.L00461400:
/* 00461400 02202025 */  move  $a0, $s1
/* 00461404 27190001 */  addiu $t9, $t8, 1
/* 00461408 A2190012 */  sb    $t9, 0x12($s0)
/* 0046140C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00461410 8E480000 */  lw    $t0, ($s2)
/* 00461414 0320F809 */  jalr  $t9
/* 00461418 95050002 */   lhu   $a1, 2($t0)
/* 0046141C 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00461420 8E440010 */  lw    $a0, 0x10($s2)
.L00461424:
/* 00461424 50800078 */  beql  $a0, $zero, .L00461608
/* 00461428 8E520004 */   lw    $s2, 4($s2)
/* 0046142C 8E4A0000 */  lw    $t2, ($s2)
/* 00461430 8D420024 */  lw    $v0, 0x24($t2)
/* 00461434 1040000A */  beqz  $v0, .L00461460
/* 00461438 00000000 */   nop   
/* 0046143C 8F8989D0 */  lw     $t1, %got(nota_candof)($gp)
/* 00461440 8D290000 */  lw    $t1, ($t1)
/* 00461444 11220006 */  beq   $t1, $v0, .L00461460
/* 00461448 00000000 */   nop   
/* 0046144C 8EB3FFFC */  lw    $s3, -4($s5)
/* 00461450 926B000B */  lbu   $t3, 0xb($s3)
/* 00461454 000B7600 */  sll   $t6, $t3, 0x18
/* 00461458 05C30009 */  bgezl $t6, .L00461480
/* 0046145C 8E420018 */   lw    $v0, 0x18($s2)
.L00461460:
/* 00461460 8F99802C */  lw    $t9, %got(func_00461084)($gp)
/* 00461464 02A01025 */  move  $v0, $s5
/* 00461468 27391084 */  addiu $t9, %lo(func_00461084) # addiu $t9, $t9, 0x1084
/* 0046146C 0320F809 */  jalr  $t9
/* 00461470 00000000 */   nop   
/* 00461474 10000063 */  b     .L00461604
/* 00461478 8FBC0034 */   lw    $gp, 0x34($sp)
/* 0046147C 8E420018 */  lw    $v0, 0x18($s2)
.L00461480:
/* 00461480 1440003D */  bnez  $v0, .L00461578
/* 00461484 00000000 */   nop   
/* 00461488 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 0046148C 24040028 */  li    $a0, 40
/* 00461490 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00461494 0320F809 */  jalr  $t9
/* 00461498 00000000 */   nop   
/* 0046149C 8E4F0000 */  lw    $t7, ($s2)
/* 004614A0 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004614A4 00408825 */  move  $s1, $v0
/* 004614A8 0040C825 */  move  $t9, $v0
/* 004614AC 25E80024 */  addiu $t0, $t7, 0x24
.L004614B0:
/* 004614B0 8DF80000 */  lw    $t8, ($t7)
/* 004614B4 25EF000C */  addiu $t7, $t7, 0xc
/* 004614B8 2739000C */  addiu $t9, $t9, 0xc
/* 004614BC AF38FFF4 */  sw    $t8, -0xc($t9)
/* 004614C0 8DECFFF8 */  lw    $t4, -8($t7)
/* 004614C4 AF2CFFF8 */  sw    $t4, -8($t9)
/* 004614C8 8DF8FFFC */  lw    $t8, -4($t7)
/* 004614CC 15E8FFF8 */  bne   $t7, $t0, .L004614B0
/* 004614D0 AF38FFFC */   sw    $t8, -4($t9)
/* 004614D4 8DF80000 */  lw    $t8, ($t7)
/* 004614D8 240A000A */  li    $t2, 10
/* 004614DC 00402025 */  move  $a0, $v0
/* 004614E0 AF380000 */  sw    $t8, ($t9)
/* 004614E4 A04A0010 */  sb    $t2, 0x10($v0)
/* 004614E8 8F998664 */  lw    $t9, %call16(newbit)($gp)
/* 004614EC 00002825 */  move  $a1, $zero
/* 004614F0 0320F809 */  jalr  $t9
/* 004614F4 00000000 */   nop   
/* 004614F8 8E830000 */  lw    $v1, ($s4)
/* 004614FC AE420018 */  sw    $v0, 0x18($s2)
/* 00461500 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00461504 30640003 */  andi  $a0, $v1, 3
/* 00461508 10800004 */  beqz  $a0, .L0046151C
/* 0046150C A6220002 */   sh    $v0, 2($s1)
/* 00461510 00644823 */  subu  $t1, $v1, $a0
/* 00461514 252B0004 */  addiu $t3, $t1, 4
/* 00461518 AE8B0000 */  sw    $t3, ($s4)
.L0046151C:
/* 0046151C 8F9988B8 */  lw    $t9, %call16(alloc_new)($gp)
/* 00461520 24040014 */  li    $a0, 20
/* 00461524 8F858954 */  lw     $a1, %got(perm_heap)($gp)
/* 00461528 0320F809 */  jalr  $t9
/* 0046152C 00000000 */   nop   
/* 00461530 8FBC0034 */  lw    $gp, 0x34($sp)
/* 00461534 AE220020 */  sw    $v0, 0x20($s1)
/* 00461538 8F8D8B48 */  lw     $t5, %got(stack_reversed)($gp)
/* 0046153C 91AD0000 */  lbu   $t5, ($t5)
/* 00461540 55A00008 */  bnezl $t5, .L00461564
/* 00461544 8E830000 */   lw    $v1, ($s4)
/* 00461548 8E8E0000 */  lw    $t6, ($s4)
/* 0046154C 25C80004 */  addiu $t0, $t6, 4
/* 00461550 AE880000 */  sw    $t0, ($s4)
/* 00461554 0008C823 */  negu  $t9, $t0
/* 00461558 1000000C */  b     .L0046158C
/* 0046155C AC590004 */   sw    $t9, 4($v0)
/* 00461560 8E830000 */  lw    $v1, ($s4)
.L00461564:
/* 00461564 8E380020 */  lw    $t8, 0x20($s1)
/* 00461568 246A0004 */  addiu $t2, $v1, 4
/* 0046156C AF030004 */  sw    $v1, 4($t8)
/* 00461570 10000006 */  b     .L0046158C
/* 00461574 AE8A0000 */   sw    $t2, ($s4)
.L00461578:
/* 00461578 8F8989EC */  lw     $t1, %got(bittab)($gp)
/* 0046157C 000258C0 */  sll   $t3, $v0, 3
/* 00461580 8D290000 */  lw    $t1, ($t1)
/* 00461584 012B6821 */  addu  $t5, $t1, $t3
/* 00461588 8DB10000 */  lw    $s1, ($t5)
.L0046158C:
/* 0046158C 922E0012 */  lbu   $t6, 0x12($s1)
/* 00461590 3C010500 */  lui   $at, 0x500
/* 00461594 2DC80020 */  sltiu $t0, $t6, 0x20
/* 00461598 00087823 */  negu  $t7, $t0
/* 0046159C 01E1C824 */  and   $t9, $t7, $at
/* 004615A0 01D96004 */  sllv  $t4, $t9, $t6
/* 004615A4 05810004 */  bgez  $t4, .L004615B8
/* 004615A8 00000000 */   nop   
/* 004615AC 92F80000 */  lbu   $t8, ($s7)
/* 004615B0 53000015 */  beql  $t8, $zero, .L00461608
/* 004615B4 8E520004 */   lw    $s2, 4($s2)
.L004615B8:
/* 004615B8 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 004615BC 02202025 */  move  $a0, $s1
/* 004615C0 02602825 */  move  $a1, $s3
/* 004615C4 0320F809 */  jalr  $t9
/* 004615C8 03C03025 */   move  $a2, $fp
/* 004615CC 8FB00068 */  lw    $s0, 0x68($sp)
/* 004615D0 24010001 */  li    $at, 1
/* 004615D4 8FBC0034 */  lw    $gp, 0x34($sp)
/* 004615D8 960A0010 */  lhu   $t2, 0x10($s0)
/* 004615DC 25490001 */  addiu $t1, $t2, 1
/* 004615E0 312BFFFF */  andi  $t3, $t1, 0xffff
/* 004615E4 15610007 */  bne   $t3, $at, .L00461604
/* 004615E8 A6090010 */   sh    $t1, 0x10($s0)
/* 004615EC 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004615F0 26640114 */  addiu $a0, $s3, 0x114
/* 004615F4 96250002 */  lhu   $a1, 2($s1)
/* 004615F8 0320F809 */  jalr  $t9
/* 004615FC 00000000 */   nop   
/* 00461600 8FBC0034 */  lw    $gp, 0x34($sp)
.L00461604:
/* 00461604 8E520004 */  lw    $s2, 4($s2)
.L00461608:
/* 00461608 1640FF3E */  bnez  $s2, .L00461304
/* 0046160C 00000000 */   nop   
.L00461610:
/* 00461610 8FBF003C */  lw    $ra, 0x3c($sp)
.L00461614:
/* 00461614 8FB00014 */  lw    $s0, 0x14($sp)
/* 00461618 8FB10018 */  lw    $s1, 0x18($sp)
/* 0046161C 8FB2001C */  lw    $s2, 0x1c($sp)
/* 00461620 8FB30020 */  lw    $s3, 0x20($sp)
/* 00461624 8FB40024 */  lw    $s4, 0x24($sp)
/* 00461628 8FB50028 */  lw    $s5, 0x28($sp)
/* 0046162C 8FB6002C */  lw    $s6, 0x2c($sp)
/* 00461630 8FB70030 */  lw    $s7, 0x30($sp)
/* 00461634 8FBE0038 */  lw    $fp, 0x38($sp)
/* 00461638 03E00008 */  jr    $ra
/* 0046163C 27BD0070 */   addiu $sp, $sp, 0x70
)"");

__asm__(R""(
.set noat
.set noreorder

    .type func_00461640, @function
func_00461640:
    # 00461AAC makelivranges
/* 00461640 3C1C0FBC */  .cpload $t9
/* 00461644 279C8C50 */  
/* 00461648 0399E021 */  
/* 0046164C 27BDFFA8 */  addiu $sp, $sp, -0x58
/* 00461650 8C830030 */  lw    $v1, 0x30($a0)
/* 00461654 AFB30024 */  sw    $s3, 0x24($sp)
/* 00461658 00409825 */  move  $s3, $v0
/* 0046165C AFBF003C */  sw    $ra, 0x3c($sp)
/* 00461660 AFBC0038 */  sw    $gp, 0x38($sp)
/* 00461664 AFB70034 */  sw    $s7, 0x34($sp)
/* 00461668 AFB60030 */  sw    $s6, 0x30($sp)
/* 0046166C AFB5002C */  sw    $s5, 0x2c($sp)
/* 00461670 AFB40028 */  sw    $s4, 0x28($sp)
/* 00461674 AFB20020 */  sw    $s2, 0x20($sp)
/* 00461678 AFB1001C */  sw    $s1, 0x1c($sp)
/* 0046167C 10600033 */  beqz  $v1, .L0046174C
/* 00461680 AFB00018 */   sw    $s0, 0x18($sp)
/* 00461684 00608025 */  move  $s0, $v1
/* 00461688 24170001 */  li    $s7, 1
/* 0046168C 8F968B20 */  lw     $s6, %got(outofmem)($gp)
/* 00461690 27B50050 */  addiu $s5, $sp, 0x50
/* 00461694 8F948B2C */  lw     $s4, %got(dwopcode)($gp)
.L00461698:
/* 00461698 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 0046169C 8E040004 */  lw    $a0, 4($s0)
/* 004616A0 00002825 */  move  $a1, $zero
/* 004616A4 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/* 004616AC 02601025 */  move  $v0, $s3
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 004616A8 0320F809 */  jalr  $t9
                          nop
/* 004616B0 8E040000 */  lw    $a0, ($s0)
/* 004616B4 3C010500 */  lui   $at, 0x500
/* 004616B8 8FBC0038 */  lw    $gp, 0x38($sp)
/* 004616BC 908E0012 */  lbu   $t6, 0x12($a0)
/* 004616C0 2DCF0020 */  sltiu $t7, $t6, 0x20
/* 004616C4 000FC023 */  negu  $t8, $t7
/* 004616C8 0301C824 */  and   $t9, $t8, $at
/* 004616CC 01D94004 */  sllv  $t0, $t9, $t6
/* 004616D0 05010004 */  bgez  $t0, .L004616E4
/* 004616D4 00000000 */   nop   
/* 004616D8 92890000 */  lbu   $t1, ($s4)
/* 004616DC 51200019 */  beql  $t1, $zero, .L00461744
/* 004616E0 8E100008 */   lw    $s0, 8($s0)
.L004616E4:
/* 004616E4 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 004616E8 8E71FFFC */  lw    $s1, -4($s3)
/* 004616EC 02A03025 */  move  $a2, $s5
/* 004616F0 0320F809 */  jalr  $t9
/* 004616F4 02202825 */   move  $a1, $s1
/* 004616F8 92CA0000 */  lbu   $t2, ($s6)
/* 004616FC 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00461700 8FB20050 */  lw    $s2, 0x50($sp)
/* 00461704 55400012 */  bnezl $t2, .L00461750
/* 00461708 8FBF003C */   lw    $ra, 0x3c($sp)
/* 0046170C 924B0012 */  lbu   $t3, 0x12($s2)
/* 00461710 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00461714 2624010C */  addiu $a0, $s1, 0x10c
/* 00461718 256C0001 */  addiu $t4, $t3, 1
/* 0046171C A24C0012 */  sb    $t4, 0x12($s2)
/* 00461720 8E0D0000 */  lw    $t5, ($s0)
/* 00461724 0320F809 */  jalr  $t9
/* 00461728 95A50002 */   lhu   $a1, 2($t5)
/* 0046172C 964F0010 */  lhu   $t7, 0x10($s2)
/* 00461730 8FBC0038 */  lw    $gp, 0x38($sp)
/* 00461734 55E00003 */  bnezl $t7, .L00461744
/* 00461738 8E100008 */   lw    $s0, 8($s0)
/* 0046173C A2570014 */  sb    $s7, 0x14($s2)
/* 00461740 8E100008 */  lw    $s0, 8($s0)
.L00461744:
/* 00461744 1600FFD4 */  bnez  $s0, .L00461698
/* 00461748 00000000 */   nop   
.L0046174C:
/* 0046174C 8FBF003C */  lw    $ra, 0x3c($sp)
.L00461750:
/* 00461750 8FB00018 */  lw    $s0, 0x18($sp)
/* 00461754 8FB1001C */  lw    $s1, 0x1c($sp)
/* 00461758 8FB20020 */  lw    $s2, 0x20($sp)
/* 0046175C 8FB30024 */  lw    $s3, 0x24($sp)
/* 00461760 8FB40028 */  lw    $s4, 0x28($sp)
/* 00461764 8FB5002C */  lw    $s5, 0x2c($sp)
/* 00461768 8FB60030 */  lw    $s6, 0x30($sp)
/* 0046176C 8FB70034 */  lw    $s7, 0x34($sp)
/* 00461770 03E00008 */  jr    $ra
/* 00461774 27BD0058 */   addiu $sp, $sp, 0x58
)"");

__asm__(R""(
.set noat
.set noreorder

    .type func_00461778, @function
func_00461778:
    # 00461AAC makelivranges
/* 00461778 3C1C0FBC */  .cpload $t9
/* 0046177C 279C8B18 */  
/* 00461780 0399E021 */  
/* 00461784 8F8E8AD0 */  lw     $t6, %got(usingregoption)($gp)
/* 00461788 27BDFFD0 */  addiu $sp, $sp, -0x30
/* 0046178C AFBF001C */  sw    $ra, 0x1c($sp)
/* 00461790 91CE0000 */  lbu   $t6, ($t6)
/* 00461794 AFBC0018 */  sw    $gp, 0x18($sp)
/* 00461798 AFA50034 */  sw    $a1, 0x34($sp)
/* 0046179C AFA60038 */  sw    $a2, 0x38($sp)
/* 004617A0 15C00033 */  bnez  $t6, .L00461870
/* 004617A4 00803825 */   move  $a3, $a0
/* 004617A8 54C00013 */  bnezl $a2, .L004617F8
/* 004617AC 8CE20030 */   lw    $v0, 0x30($a3)
/* 004617B0 8F8F89AC */  lw     $t7, %got(graphhead)($gp)
/* 004617B4 8DEF0000 */  lw    $t7, ($t7)
/* 004617B8 508F000F */  beql  $a0, $t7, .L004617F8
/* 004617BC 8CE20030 */   lw    $v0, 0x30($a3)
/* 004617C0 8F988A5C */  lw     $t8, %got(lang)($gp)
/* 004617C4 24010003 */  li    $at, 3
/* 004617C8 93180000 */  lbu   $t8, ($t8)
/* 004617CC 5301000A */  beql  $t8, $at, .L004617F8
/* 004617D0 8CE20030 */   lw    $v0, 0x30($a3)
/* 004617D4 8F99861C */  lw    $t9, %call16(dbgerror)($gp)
/* 004617D8 24041F9B */  li    $a0, 8091
/* 004617DC A3A50037 */  sb    $a1, 0x37($sp)
/* 004617E0 0320F809 */  jalr  $t9
/* 004617E4 AFA70030 */   sw    $a3, 0x30($sp)
/* 004617E8 8FBC0018 */  lw    $gp, 0x18($sp)
/* 004617EC 93A50037 */  lbu   $a1, 0x37($sp)
/* 004617F0 8FA70030 */  lw    $a3, 0x30($sp)
/* 004617F4 8CE20030 */  lw    $v0, 0x30($a3)
.L004617F8:
/* 004617F8 2CA90020 */  sltiu $t1, $a1, 0x20
/* 004617FC 00A05027 */  not   $t2, $a1
/* 00461800 90590013 */  lbu   $t9, 0x13($v0)
/* 00461804 28A10018 */  slti  $at, $a1, 0x18
/* 00461808 01495804 */  sllv  $t3, $t1, $t2
/* 0046180C 10B90005 */  beq   $a1, $t9, .L00461824
/* 00461810 24ACFFE0 */   addiu $t4, $a1, -0x20
/* 00461814 8C42000C */  lw    $v0, 0xc($v0)
.L00461818:
/* 00461818 90480013 */  lbu   $t0, 0x13($v0)
/* 0046181C 54A8FFFE */  bnel  $a1, $t0, .L00461818
/* 00461820 8C42000C */   lw    $v0, 0xc($v0)
.L00461824:
/* 00461824 10200003 */  beqz  $at, .L00461834
/* 00461828 A0400013 */   sb    $zero, 0x13($v0)
/* 0046182C 10000002 */  b     .L00461838
/* 00461830 24030001 */   li    $v1, 1
.L00461834:
/* 00461834 24030002 */  li    $v1, 2
.L00461838:
/* 00461838 000378C0 */  sll   $t7, $v1, 3
/* 0046183C 00EF1021 */  addu  $v0, $a3, $t7
/* 00461840 8C59002C */  lw    $t9, 0x2c($v0)
/* 00461844 8C490030 */  lw    $t1, 0x30($v0)
/* 00461848 2D8D0020 */  sltiu $t5, $t4, 0x20
/* 0046184C 014D7004 */  sllv  $t6, $t5, $t2
/* 00461850 01C06827 */  not   $t5, $t6
/* 00461854 0160C027 */  not   $t8, $t3
/* 00461858 03384024 */  and   $t0, $t9, $t8
/* 0046185C 012D5024 */  and   $t2, $t1, $t5
/* 00461860 AFAE0024 */  sw    $t6, 0x24($sp)
/* 00461864 AFAB0020 */  sw    $t3, 0x20($sp)
/* 00461868 AC4A0030 */  sw    $t2, 0x30($v0)
/* 0046186C AC48002C */  sw    $t0, 0x2c($v0)
.L00461870:
/* 00461870 8FBF001C */  lw    $ra, 0x1c($sp)
/* 00461874 27BD0030 */  addiu $sp, $sp, 0x30
/* 00461878 03E00008 */  jr    $ra
/* 0046187C 00000000 */   nop   
)"");

__asm__(R""(
.set noat
.set noreorder

    .type func_00461880, @function
func_00461880:
    # 00461AAC makelivranges
/* 00461880 24030001 */  li    $v1, 1
/* 00461884 00037080 */  sll   $t6, $v1, 2
/* 00461888 00001025 */  move  $v0, $zero
/* 0046188C 00AE3021 */  addu  $a2, $a1, $t6
/* 00461890 8CCF0020 */  lw    $t7, 0x20($a2)
.L00461894:
/* 00461894 548F0004 */  bnel  $a0, $t7, .L004618A8
/* 00461898 24630001 */   addiu $v1, $v1, 1
/* 0046189C 10000003 */  b     .L004618AC
/* 004618A0 24020001 */   li    $v0, 1
/* 004618A4 24630001 */  addiu $v1, $v1, 1
.L004618A8:
/* 004618A8 24C60004 */  addiu $a2, $a2, 4
.L004618AC:
/* 004618AC 14400003 */  bnez  $v0, .L004618BC
/* 004618B0 28610024 */   slti  $at, $v1, 0x24
/* 004618B4 5420FFF7 */  bnezl $at, .L00461894
/* 004618B8 8CCF0020 */   lw    $t7, 0x20($a2)
.L004618BC:
/* 004618BC 10400003 */  beqz  $v0, .L004618CC
/* 004618C0 00002025 */   move  $a0, $zero
/* 004618C4 03E00008 */  jr    $ra
/* 004618C8 00601025 */   move  $v0, $v1

.L004618CC:
/* 004618CC 03E00008 */  jr    $ra
/* 004618D0 00801025 */   move  $v0, $a0
)"");

/*
00461AAC makelivranges
   register class for datatype
*/
static int func_004618D4(struct Expression *var) {
    Datatype dtype;

    if (var->type == isop) {
        dtype = var->data.isop.datatype;
    } else {
        dtype = var->datatype;
    }

    if (dtype == Qdt || dtype == Rdt) {
        return 2;
    } else {
        return 1;
    }
}

__asm__(R""(
.set noat
.set noreorder

    .type func_00461920, @function
func_00461920:
    # 00461AAC makelivranges
/* 00461920 908E0000 */  lbu   $t6, ($a0)
/* 00461924 24010004 */  li    $at, 4
/* 00461928 55C10004 */  bnel  $t6, $at, .L0046193C
/* 0046192C 90820001 */   lbu   $v0, 1($a0)
/* 00461930 10000002 */  b     .L0046193C
/* 00461934 90820023 */   lbu   $v0, 0x23($a0)
/* 00461938 90820001 */  lbu   $v0, 1($a0)
.L0046193C:
/* 0046193C 38440005 */  xori  $a0, $v0, 5
/* 00461940 2C830001 */  sltiu $v1, $a0, 1
/* 00461944 14600003 */  bnez  $v1, .L00461954
/* 00461948 00000000 */   nop   
/* 0046194C 38430007 */  xori  $v1, $v0, 7
/* 00461950 2C630001 */  sltiu $v1, $v1, 1
.L00461954:
/* 00461954 03E00008 */  jr    $ra
/* 00461958 00601025 */   move  $v0, $v1
)"");

__asm__(R""(
.set noat
.set noreorder

    .type func_0046195C, @function
func_0046195C:
    # 00461AAC makelivranges
/* 0046195C 8C840008 */  lw    $a0, 8($a0)
/* 00461960 2403007B */  li    $v1, 123
/* 00461964 90820000 */  lbu   $v0, ($a0)
/* 00461968 2C4E0040 */  sltiu $t6, $v0, 0x40
/* 0046196C 11C00009 */  beqz  $t6, .L00461994
/* 00461970 00000000 */   nop   
/* 00461974 8F998044 */  lw    $t9, %got(D_10010EC8)($gp)
/* 00461978 00027943 */  sra   $t7, $v0, 5
/* 0046197C 000FC080 */  sll   $t8, $t7, 2
/* 00461980 27390EC8 */  addiu $t9, %lo(D_10010EC8) # addiu $t9, $t9, 0xec8
/* 00461984 03384021 */  addu  $t0, $t9, $t8
/* 00461988 8D090000 */  lw    $t1, ($t0)
/* 0046198C 00495004 */  sllv  $t2, $t1, $v0
/* 00461990 294E0000 */  slti  $t6, $t2, 0
.L00461994:
/* 00461994 55C00018 */  bnezl $t6, .L004619F8
/* 00461998 24020001 */   li    $v0, 1
.L0046199C:
/* 0046199C 54620007 */  bnel  $v1, $v0, .L004619BC
/* 004619A0 8C840008 */   lw    $a0, 8($a0)
/* 004619A4 908C0001 */  lbu   $t4, 1($a0)
/* 004619A8 51800004 */  beql  $t4, $zero, .L004619BC
/* 004619AC 8C840008 */   lw    $a0, 8($a0)
/* 004619B0 03E00008 */  jr    $ra
/* 004619B4 00001025 */   move  $v0, $zero

/* 004619B8 8C840008 */  lw    $a0, 8($a0)
.L004619BC:
/* 004619BC 90820000 */  lbu   $v0, ($a0)
/* 004619C0 2C4D0040 */  sltiu $t5, $v0, 0x40
/* 004619C4 11A00009 */  beqz  $t5, .L004619EC
/* 004619C8 00000000 */   nop   
/* 004619CC 8F988044 */  lw    $t8, %got(D_10010EC8)($gp)
/* 004619D0 00027943 */  sra   $t7, $v0, 5
/* 004619D4 000FC880 */  sll   $t9, $t7, 2
/* 004619D8 27180EC8 */  addiu $t8, %lo(D_10010EC8) # addiu $t8, $t8, 0xec8
/* 004619DC 03194021 */  addu  $t0, $t8, $t9
/* 004619E0 8D090000 */  lw    $t1, ($t0)
/* 004619E4 00495004 */  sllv  $t2, $t1, $v0
/* 004619E8 294D0000 */  slti  $t5, $t2, 0
.L004619EC:
/* 004619EC 11A0FFEB */  beqz  $t5, .L0046199C
/* 004619F0 00000000 */   nop   
/* 004619F4 24020001 */  li    $v0, 1
.L004619F8:
/* 004619F8 03E00008 */  jr    $ra
/* 004619FC 00000000 */   nop   
)"");

__asm__(R""(
.set noat
.set noreorder

    .type func_00461A00, @function
func_00461A00:
    # 00461AAC makelivranges
/* 00461A00 8C840008 */  lw    $a0, 8($a0)
/* 00461A04 2403007B */  li    $v1, 123
/* 00461A08 90820000 */  lbu   $v0, ($a0)
/* 00461A0C 2C4E0040 */  sltiu $t6, $v0, 0x40
/* 00461A10 11C00009 */  beqz  $t6, .L00461A38
/* 00461A14 00000000 */   nop   
/* 00461A18 8F998044 */  lw    $t9, %got(D_10010ED0)($gp)
/* 00461A1C 00027943 */  sra   $t7, $v0, 5
/* 00461A20 000FC080 */  sll   $t8, $t7, 2
/* 00461A24 27390ED0 */  addiu $t9, %lo(D_10010ED0) # addiu $t9, $t9, 0xed0
/* 00461A28 03384021 */  addu  $t0, $t9, $t8
/* 00461A2C 8D090000 */  lw    $t1, ($t0)
/* 00461A30 00495004 */  sllv  $t2, $t1, $v0
/* 00461A34 294E0000 */  slti  $t6, $t2, 0
.L00461A38:
/* 00461A38 55C0001A */  bnezl $t6, .L00461AA4
/* 00461A3C 24020001 */   li    $v0, 1
.L00461A40:
/* 00461A40 54620009 */  bnel  $v1, $v0, .L00461A68
/* 00461A44 8C840008 */   lw    $a0, 8($a0)
/* 00461A48 8C8D0004 */  lw    $t5, 4($a0)
/* 00461A4C 8CAC0014 */  lw    $t4, 0x14($a1)
/* 00461A50 8DAF0014 */  lw    $t7, 0x14($t5)
/* 00461A54 558F0004 */  bnel  $t4, $t7, .L00461A68
/* 00461A58 8C840008 */   lw    $a0, 8($a0)
/* 00461A5C 03E00008 */  jr    $ra
/* 00461A60 00001025 */   move  $v0, $zero

/* 00461A64 8C840008 */  lw    $a0, 8($a0)
.L00461A68:
/* 00461A68 90820000 */  lbu   $v0, ($a0)
/* 00461A6C 2C590040 */  sltiu $t9, $v0, 0x40
/* 00461A70 13200009 */  beqz  $t9, .L00461A98
/* 00461A74 00000000 */   nop   
/* 00461A78 8F898044 */  lw    $t1, %got(D_10010ED0)($gp)
/* 00461A7C 0002C143 */  sra   $t8, $v0, 5
/* 00461A80 00184080 */  sll   $t0, $t8, 2
/* 00461A84 25290ED0 */  addiu $t1, %lo(D_10010ED0) # addiu $t1, $t1, 0xed0
/* 00461A88 01285021 */  addu  $t2, $t1, $t0
/* 00461A8C 8D4B0000 */  lw    $t3, ($t2)
/* 00461A90 004B7004 */  sllv  $t6, $t3, $v0
/* 00461A94 29D90000 */  slti  $t9, $t6, 0
.L00461A98:
/* 00461A98 1320FFE9 */  beqz  $t9, .L00461A40
/* 00461A9C 00000000 */   nop   
/* 00461AA0 24020001 */  li    $v0, 1
.L00461AA4:
/* 00461AA4 03E00008 */  jr    $ra
/* 00461AA8 00000000 */   nop   
)"");

__asm__(R""(
.set noat
.set noreorder

glabel makelivranges
    .ent makelivranges
    # 00456A2C oneproc
/* 00461AAC 3C1C0FBC */  .cpload $t9
/* 00461AB0 279C87E4 */  
/* 00461AB4 0399E021 */  
/* 00461AB8 8F8E89B8 */  lw     $t6, %got(curstaticno)($gp)
/* 00461ABC 8F818A50 */  lw     $at, %got(bvlivransize)($gp)
/* 00461AC0 27BDFEC8 */  addiu $sp, $sp, -0x138
/* 00461AC4 8DCE0000 */  lw    $t6, ($t6)
/* 00461AC8 8F848938 */  lw     $a0, %got(ever_altered)($gp)
/* 00461ACC AFBF0044 */  sw    $ra, 0x44($sp)
/* 00461AD0 25CFFFFF */  addiu $t7, $t6, -1
/* 00461AD4 000FC1C2 */  srl   $t8, $t7, 7
/* 00461AD8 27190001 */  addiu $t9, $t8, 1
/* 00461ADC AC390000 */  sw    $t9, ($at)
/* 00461AE0 8F818BF4 */  lw     $at, %got(numlu)($gp)
/* 00461AE4 AFBE0040 */  sw    $fp, 0x40($sp)
/* 00461AE8 AFBC003C */  sw    $gp, 0x3c($sp)
/* 00461AEC AC200000 */  sw    $zero, ($at)
/* 00461AF0 AC800004 */  sw    $zero, 4($a0)
/* 00461AF4 AC800000 */  sw    $zero, ($a0)
/* 00461AF8 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00461AFC AFB70038 */  sw    $s7, 0x38($sp)
/* 00461B00 AFB60034 */  sw    $s6, 0x34($sp)
/* 00461B04 AFB50030 */  sw    $s5, 0x30($sp)
/* 00461B08 AFB4002C */  sw    $s4, 0x2c($sp)
/* 00461B0C AFB30028 */  sw    $s3, 0x28($sp)
/* 00461B10 AFB20024 */  sw    $s2, 0x24($sp)
/* 00461B14 AFB10020 */  sw    $s1, 0x20($sp)
/* 00461B18 0320F809 */  jalr  $t9
/* 00461B1C AFB0001C */   sw    $s0, 0x1c($sp)
/* 00461B20 AFA000D8 */  sw    $zero, 0xd8($sp)
/* 00461B24 AFA000DC */  sw    $zero, 0xdc($sp)
/* 00461B28 AFA000E0 */  sw    $zero, 0xe0($sp)
/* 00461B2C AFA000E4 */  sw    $zero, 0xe4($sp)
/* 00461B30 27AC00D8 */  addiu $t4, $sp, 0xd8
/* 00461B34 8D8E0000 */  lw    $t6, ($t4)
/* 00461B38 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00461B3C AFAE0004 */  sw    $t6, 4($sp)
/* 00461B40 8D8D0004 */  lw    $t5, 4($t4)
/* 00461B44 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00461B48 8FA50004 */  lw    $a1, 4($sp)
/* 00461B4C AFAD0008 */  sw    $t5, 8($sp)
/* 00461B50 8D870008 */  lw    $a3, 8($t4)
/* 00461B54 8FA60008 */  lw    $a2, 8($sp)
/* 00461B58 8F848938 */  lw     $a0, %got(ever_altered)($gp)
/* 00461B5C AFA7000C */  sw    $a3, 0xc($sp)
/* 00461B60 8D8D000C */  lw    $t5, 0xc($t4)
/* 00461B64 0320F809 */  jalr  $t9
/* 00461B68 AFAD0010 */   sw    $t5, 0x10($sp)
/* 00461B6C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00461B70 8F8F89AC */  lw     $t7, %got(graphhead)($gp)
/* 00461B74 8DEF0000 */  lw    $t7, ($t7)
/* 00461B78 11E0000E */  beqz  $t7, .L00461BB4
/* 00461B7C AFAF0134 */   sw    $t7, 0x134($sp)
.L00461B80:
/* 00461B80 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00461B84 8FA50134 */  lw    $a1, 0x134($sp)
/* 00461B88 8F848938 */  lw     $a0, %got(ever_altered)($gp)
/* 00461B8C 0320F809 */  jalr  $t9
/* 00461B90 24A5010C */   addiu $a1, $a1, 0x10c
/* 00461B94 8FB80134 */  lw    $t8, 0x134($sp)
/* 00461B98 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00461B9C 8F19000C */  lw    $t9, 0xc($t8)
/* 00461BA0 1720FFF7 */  bnez  $t9, .L00461B80
/* 00461BA4 AFB90134 */   sw    $t9, 0x134($sp)
/* 00461BA8 8F8C89AC */  lw     $t4, %got(graphhead)($gp)
/* 00461BAC 8D8C0000 */  lw    $t4, ($t4)
/* 00461BB0 AFAC0134 */  sw    $t4, 0x134($sp)
.L00461BB4:
/* 00461BB4 8F8D89E0 */  lw     $t5, %got(bitposcount)($gp)
/* 00461BB8 8FAE0134 */  lw    $t6, 0x134($sp)
/* 00461BBC 8F8189E8 */  lw     $at, %got(firstconstbit)($gp)
/* 00461BC0 8DAD0000 */  lw    $t5, ($t5)
/* 00461BC4 8FB700F0 */  lw    $s7, 0xf0($sp)
/* 00461BC8 11C0070B */  beqz  $t6, .L004637F8
/* 00461BCC AC2D0000 */   sw    $t5, ($at)
/* 00461BD0 24130001 */  li    $s3, 1
.L00461BD4:
/* 00461BD4 AFA000C8 */  sw    $zero, 0xc8($sp)
/* 00461BD8 AFA000CC */  sw    $zero, 0xcc($sp)
/* 00461BDC AFA000D0 */  sw    $zero, 0xd0($sp)
/* 00461BE0 AFA000D4 */  sw    $zero, 0xd4($sp)
/* 00461BE4 27AF00C8 */  addiu $t7, $sp, 0xc8
/* 00461BE8 8DF90000 */  lw    $t9, ($t7)
/* 00461BEC 8FA40134 */  lw    $a0, 0x134($sp)
/* 00461BF0 AFB90004 */  sw    $t9, 4($sp)
/* 00461BF4 8DF80004 */  lw    $t8, 4($t7)
/* 00461BF8 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00461BFC 8FA50004 */  lw    $a1, 4($sp)
/* 00461C00 AFB80008 */  sw    $t8, 8($sp)
/* 00461C04 8DE70008 */  lw    $a3, 8($t7)
/* 00461C08 8FA60008 */  lw    $a2, 8($sp)
/* 00461C0C 24840104 */  addiu $a0, $a0, 0x104
/* 00461C10 AFA7000C */  sw    $a3, 0xc($sp)
/* 00461C14 8DF8000C */  lw    $t8, 0xc($t7)
/* 00461C18 0320F809 */  jalr  $t9
/* 00461C1C AFB80010 */   sw    $t8, 0x10($sp)
/* 00461C20 AFA000B8 */  sw    $zero, 0xb8($sp)
/* 00461C24 AFA000BC */  sw    $zero, 0xbc($sp)
/* 00461C28 AFA000C0 */  sw    $zero, 0xc0($sp)
/* 00461C2C AFA000C4 */  sw    $zero, 0xc4($sp)
/* 00461C30 27AC00B8 */  addiu $t4, $sp, 0xb8
/* 00461C34 8D8E0000 */  lw    $t6, ($t4)
/* 00461C38 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00461C3C 8FB20134 */  lw    $s2, 0x134($sp)
/* 00461C40 AFAE0004 */  sw    $t6, 4($sp)
/* 00461C44 8D8D0004 */  lw    $t5, 4($t4)
/* 00461C48 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00461C4C 26520114 */  addiu $s2, $s2, 0x114
/* 00461C50 AFAD0008 */  sw    $t5, 8($sp)
/* 00461C54 8D870008 */  lw    $a3, 8($t4)
/* 00461C58 8FA60008 */  lw    $a2, 8($sp)
/* 00461C5C 02402025 */  move  $a0, $s2
/* 00461C60 AFA7000C */  sw    $a3, 0xc($sp)
/* 00461C64 8D8D000C */  lw    $t5, 0xc($t4)
/* 00461C68 8FA50004 */  lw    $a1, 4($sp)
/* 00461C6C 0320F809 */  jalr  $t9
/* 00461C70 AFAD0010 */   sw    $t5, 0x10($sp)
/* 00461C74 AFA000A8 */  sw    $zero, 0xa8($sp)
/* 00461C78 AFA000AC */  sw    $zero, 0xac($sp)
/* 00461C7C AFA000B0 */  sw    $zero, 0xb0($sp)
/* 00461C80 AFA000B4 */  sw    $zero, 0xb4($sp)
/* 00461C84 27AF00A8 */  addiu $t7, $sp, 0xa8
/* 00461C88 8DF90000 */  lw    $t9, ($t7)
/* 00461C8C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00461C90 8FB40134 */  lw    $s4, 0x134($sp)
/* 00461C94 AFB90004 */  sw    $t9, 4($sp)
/* 00461C98 8DF80004 */  lw    $t8, 4($t7)
/* 00461C9C 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00461CA0 2694010C */  addiu $s4, $s4, 0x10c
/* 00461CA4 AFB80008 */  sw    $t8, 8($sp)
/* 00461CA8 8DE70008 */  lw    $a3, 8($t7)
/* 00461CAC 8FA60008 */  lw    $a2, 8($sp)
/* 00461CB0 02802025 */  move  $a0, $s4
/* 00461CB4 AFA7000C */  sw    $a3, 0xc($sp)
/* 00461CB8 8DF8000C */  lw    $t8, 0xc($t7)
/* 00461CBC 8FA50004 */  lw    $a1, 4($sp)
/* 00461CC0 0320F809 */  jalr  $t9
/* 00461CC4 AFB80010 */   sw    $t8, 0x10($sp)
/* 00461CC8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00461CCC 8FAD0134 */  lw    $t5, 0x134($sp)
/* 00461CD0 24110004 */  li    $s1, 4
/* 00461CD4 8F8C8D58 */  lw     $t4, %got(dftregsused)($gp)
/* 00461CD8 8F8E8D58 */  lw     $t6, %got(dftregsused)($gp)
/* 00461CDC 8D8C0000 */  lw    $t4, ($t4)
/* 00461CE0 ADAC0034 */  sw    $t4, 0x34($t5)
/* 00461CE4 8DCE0004 */  lw    $t6, 4($t6)
/* 00461CE8 ADAE0038 */  sw    $t6, 0x38($t5)
/* 00461CEC 8FAF0134 */  lw    $t7, 0x134($sp)
/* 00461CF0 ADE0003C */  sw    $zero, 0x3c($t7)
/* 00461CF4 ADE00040 */  sw    $zero, 0x40($t7)
/* 00461CF8 8FB80134 */  lw    $t8, 0x134($sp)
/* 00461CFC AF0000E0 */  sw    $zero, 0xe0($t8)
/* 00461D00 8FB90134 */  lw    $t9, 0x134($sp)
/* 00461D04 AF2000E4 */  sw    $zero, 0xe4($t9)
/* 00461D08 8FA30134 */  lw    $v1, 0x134($sp)
/* 00461D0C 8FA20134 */  lw    $v0, 0x134($sp)
/* 00461D10 24630004 */  addiu $v1, $v1, 4
/* 00461D14 AC600048 */  sw    $zero, 0x48($v1)
/* 00461D18 AC600044 */  sw    $zero, 0x44($v1)
/* 00461D1C AC600040 */  sw    $zero, 0x40($v1)
/* 00461D20 24030024 */  li    $v1, 36
/* 00461D24 24420010 */  addiu $v0, $v0, 0x10
.L00461D28:
/* 00461D28 26310004 */  addiu $s1, $s1, 4
/* 00461D2C 323100FF */  andi  $s1, $s1, 0xff
/* 00461D30 AC400040 */  sw    $zero, 0x40($v0)
/* 00461D34 AC400044 */  sw    $zero, 0x44($v0)
/* 00461D38 AC400048 */  sw    $zero, 0x48($v0)
/* 00461D3C AC40004C */  sw    $zero, 0x4c($v0)
/* 00461D40 1623FFF9 */  bne   $s1, $v1, .L00461D28
/* 00461D44 24420010 */   addiu $v0, $v0, 0x10
/* 00461D48 8FB10134 */  lw    $s1, 0x134($sp)
/* 00461D4C 8F9981AC */  lw    $t9, %call16(bvectminus)($gp)
/* 00461D50 8F858CE4 */  lw     $a1, %got(slvarbits)($gp)
/* 00461D54 263100F4 */  addiu $s1, $s1, 0xf4
/* 00461D58 0320F809 */  jalr  $t9
/* 00461D5C 02202025 */   move  $a0, $s1
/* 00461D60 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00461D64 02202025 */  move  $a0, $s1
/* 00461D68 8F9981A8 */  lw    $t9, %call16(bvectintsect)($gp)
/* 00461D6C 8F858938 */  lw     $a1, %got(ever_altered)($gp)
/* 00461D70 0320F809 */  jalr  $t9
/* 00461D74 00000000 */   nop   
/* 00461D78 8FAC0134 */  lw    $t4, 0x134($sp)
/* 00461D7C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00461D80 8D900024 */  lw    $s0, 0x24($t4)
/* 00461D84 520001B2 */  beql  $s0, $zero, .L00462450
/* 00461D88 8FB80134 */   lw    $t8, 0x134($sp)
/* 00461D8C 92020009 */  lbu   $v0, 9($s0)
.L00461D90:
/* 00461D90 24010002 */  li    $at, 2
/* 00461D94 14410109 */  bne   $v0, $at, .L004621BC
/* 00461D98 00000000 */   nop   
/* 00461D9C 8E03000C */  lw    $v1, 0xc($s0)
/* 00461DA0 24010003 */  li    $at, 3
/* 00461DA4 906E0000 */  lbu   $t6, ($v1)
/* 00461DA8 55C101A6 */  bnel  $t6, $at, .L00462444
/* 00461DAC 8E100004 */   lw    $s0, 4($s0)
/* 00461DB0 8C620014 */  lw    $v0, 0x14($v1)
/* 00461DB4 904D001A */  lbu   $t5, 0x1a($v0)
/* 00461DB8 55A001A2 */  bnezl $t5, .L00462444
/* 00461DBC 8E100004 */   lw    $s0, 4($s0)
/* 00461DC0 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00461DC4 94440002 */  lhu   $a0, 2($v0)
/* 00461DC8 02202825 */  move  $a1, $s1
/* 00461DCC 0320F809 */  jalr  $t9
/* 00461DD0 00000000 */   nop   
/* 00461DD4 1440019A */  bnez  $v0, .L00462440
/* 00461DD8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00461DDC 8E03000C */  lw    $v1, 0xc($s0)
/* 00461DE0 3C010500 */  lui   $at, 0x500
/* 00461DE4 906F0001 */  lbu   $t7, 1($v1)
/* 00461DE8 2DF80020 */  sltiu $t8, $t7, 0x20
/* 00461DEC 0018C823 */  negu  $t9, $t8
/* 00461DF0 03216024 */  and   $t4, $t9, $at
/* 00461DF4 01EC7004 */  sllv  $t6, $t4, $t7
/* 00461DF8 05C1000A */  bgez  $t6, .L00461E24
/* 00461DFC 00000000 */   nop   
/* 00461E00 8F8D8B2C */  lw     $t5, %got(dwopcode)($gp)
/* 00461E04 91AD0000 */  lbu   $t5, ($t5)
/* 00461E08 15A00006 */  bnez  $t5, .L00461E24
/* 00461E0C 00000000 */   nop   
/* 00461E10 9078002E */  lbu   $t8, 0x2e($v1)
/* 00461E14 24010003 */  li    $at, 3
/* 00461E18 33190007 */  andi  $t9, $t8, 7
/* 00461E1C 57210189 */  bnel  $t9, $at, .L00462444
/* 00461E20 8E100004 */   lw    $s0, 4($s0)
.L00461E24:
/* 00461E24 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 00461E28 8C640014 */  lw    $a0, 0x14($v1)
/* 00461E2C 8FA50134 */  lw    $a1, 0x134($sp)
/* 00461E30 0320F809 */  jalr  $t9
/* 00461E34 27A6012C */   addiu $a2, $sp, 0x12c
/* 00461E38 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00461E3C 8FB5012C */  lw    $s5, 0x12c($sp)
/* 00461E40 8F8C8B20 */  lw     $t4, %got(outofmem)($gp)
/* 00461E44 918C0000 */  lbu   $t4, ($t4)
/* 00461E48 55800690 */  bnezl $t4, .L0046388C
/* 00461E4C 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00461E50 96A20010 */  lhu   $v0, 0x10($s5)
/* 00461E54 5440000D */  bnezl $v0, .L00461E8C
/* 00461E58 8E18000C */   lw    $t8, 0xc($s0)
/* 00461E5C 92AF0012 */  lbu   $t7, 0x12($s5)
/* 00461E60 55E0000A */  bnezl $t7, .L00461E8C
/* 00461E64 8E18000C */   lw    $t8, 0xc($s0)
/* 00461E68 8E0E000C */  lw    $t6, 0xc($s0)
/* 00461E6C 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00461E70 02402025 */  move  $a0, $s2
/* 00461E74 8DCD0014 */  lw    $t5, 0x14($t6)
/* 00461E78 0320F809 */  jalr  $t9
/* 00461E7C 95A50002 */   lhu   $a1, 2($t5)
/* 00461E80 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00461E84 96A20010 */  lhu   $v0, 0x10($s5)
/* 00461E88 8E18000C */  lw    $t8, 0xc($s0)
.L00461E8C:
/* 00461E8C 8F8E89AC */  lw     $t6, %got(graphhead)($gp)
/* 00461E90 8FAF0134 */  lw    $t7, 0x134($sp)
/* 00461E94 97190006 */  lhu   $t9, 6($t8)
/* 00461E98 00596021 */  addu  $t4, $v0, $t9
/* 00461E9C A6AC0010 */  sh    $t4, 0x10($s5)
/* 00461EA0 8DCE0000 */  lw    $t6, ($t6)
/* 00461EA4 55EE006F */  bnel  $t7, $t6, .L00462064
/* 00461EA8 8FB90134 */   lw    $t9, 0x134($sp)
/* 00461EAC 92AD0014 */  lbu   $t5, 0x14($s5)
/* 00461EB0 55A0006C */  bnezl $t5, .L00462064
/* 00461EB4 8FB90134 */   lw    $t9, 0x134($sp)
/* 00461EB8 8E18000C */  lw    $t8, 0xc($s0)
/* 00461EBC 8F858D24 */  lw     $a1, %got(coloredparms)($gp)
/* 00461EC0 8F190014 */  lw    $t9, 0x14($t8)
/* 00461EC4 97240002 */  lhu   $a0, 2($t9)
/* 00461EC8 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00461ECC 0320F809 */  jalr  $t9
/* 00461ED0 00000000 */   nop   
/* 00461ED4 10400062 */  beqz  $v0, .L00462060
/* 00461ED8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00461EDC 8F8C8C60 */  lw     $t4, %got(outonly_parm)($gp)
/* 00461EE0 918C0000 */  lbu   $t4, ($t4)
/* 00461EE4 15800002 */  bnez  $t4, .L00461EF0
/* 00461EE8 00000000 */   nop   
/* 00461EEC A2B30014 */  sb    $s3, 0x14($s5)
.L00461EF0:
/* 00461EF0 8F8F8B0C */  lw     $t7, %got(allcallersave)($gp)
/* 00461EF4 91EF0000 */  lbu   $t7, ($t7)
/* 00461EF8 51E00007 */  beql  $t7, $zero, .L00461F18
/* 00461EFC 92B90013 */   lbu   $t9, 0x13($s5)
/* 00461F00 8E0E000C */  lw    $t6, 0xc($s0)
/* 00461F04 91CD002E */  lbu   $t5, 0x2e($t6)
/* 00461F08 31B80007 */  andi  $t8, $t5, 7
/* 00461F0C 5678014D */  bnel  $s3, $t8, .L00462444
/* 00461F10 8E100004 */   lw    $s0, 4($s0)
/* 00461F14 92B90013 */  lbu   $t9, 0x13($s5)
.L00461F18:
/* 00461F18 5720014A */  bnezl $t9, .L00462444
/* 00461F1C 8E100004 */   lw    $s0, 4($s0)
/* 00461F20 8F8C8AA4 */  lw     $t4, %got(doprecolor)($gp)
/* 00461F24 918C0000 */  lbu   $t4, ($t4)
/* 00461F28 51800146 */  beql  $t4, $zero, .L00462444
/* 00461F2C 8E100004 */   lw    $s0, 4($s0)
/* 00461F30 8F9984C0 */  lw    $t9, %call16(passedinreg)($gp)
/* 00461F34 8E0F000C */  lw    $t7, 0xc($s0)
/* 00461F38 8F858A28 */  lw     $a1, %got(offsetpassedbyint)($gp)
/* 00461F3C 8DE40014 */  lw    $a0, 0x14($t7)
/* 00461F40 0320F809 */  jalr  $t9
/* 00461F44 8CA50000 */   lw    $a1, ($a1)
/* 00461F48 1040013D */  beqz  $v0, .L00462440
/* 00461F4C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00461F50 8F99802C */  lw    $t9, %got(func_004618D4)($gp)
/* 00461F54 8E04000C */  lw    $a0, 0xc($s0)
/* 00461F58 27A20138 */  addiu $v0, $sp, 0x138
/* 00461F5C 273918D4 */  addiu $t9, %lo(func_004618D4) # addiu $t9, $t9, 0x18d4
/* 00461F60 0320F809 */  jalr  $t9
/* 00461F64 00000000 */   nop   
/* 00461F68 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00461F6C 8FB5012C */  lw    $s5, 0x12c($sp)
/* 00461F70 8F818C5C */  lw     $at, %got(passedcl)($gp)
/* 00461F74 AC220000 */  sw    $v0, ($at)
/* 00461F78 8E03000C */  lw    $v1, 0xc($s0)
/* 00461F7C 906E002E */  lbu   $t6, 0x2e($v1)
/* 00461F80 31CD0007 */  andi  $t5, $t6, 7
/* 00461F84 166D0005 */  bne   $s3, $t5, .L00461F9C
/* 00461F88 00000000 */   nop   
/* 00461F8C 8F848C5C */  lw     $a0, %got(passedcl)($gp)
/* 00461F90 A2B30013 */  sb    $s3, 0x13($s5)
/* 00461F94 10000010 */  b     .L00461FD8
/* 00461F98 8C840000 */   lw    $a0, ($a0)
.L00461F9C:
/* 00461F9C 8F848C5C */  lw     $a0, %got(passedcl)($gp)
/* 00461FA0 8F998D44 */  lw     $t9, %got(firstparmreg)($gp)
/* 00461FA4 8C6E0028 */  lw    $t6, 0x28($v1)
/* 00461FA8 8C840000 */  lw    $a0, ($a0)
/* 00461FAC 2739FFFC */  addiu $t9, $t9, -4
/* 00461FB0 8FB5012C */  lw    $s5, 0x12c($sp)
/* 00461FB4 0004C080 */  sll   $t8, $a0, 2
/* 00461FB8 03196021 */  addu  $t4, $t8, $t9
/* 00461FBC 8D8F0000 */  lw    $t7, ($t4)
/* 00461FC0 05C10003 */  bgez  $t6, .L00461FD0
/* 00461FC4 000E6883 */   sra   $t5, $t6, 2
/* 00461FC8 25C10003 */  addiu $at, $t6, 3
/* 00461FCC 00016883 */  sra   $t5, $at, 2
.L00461FD0:
/* 00461FD0 01EDC021 */  addu  $t8, $t7, $t5
/* 00461FD4 A2B80013 */  sb    $t8, 0x13($s5)
.L00461FD8:
/* 00461FD8 24010002 */  li    $at, 2
/* 00461FDC 5481000D */  bnel  $a0, $at, .L00462014
/* 00461FE0 92AC0013 */   lbu   $t4, 0x13($s5)
/* 00461FE4 8E19000C */  lw    $t9, 0xc($s0)
/* 00461FE8 8F2C0028 */  lw    $t4, 0x28($t9)
/* 00461FEC 51800009 */  beql  $t4, $zero, .L00462014
/* 00461FF0 92AC0013 */   lbu   $t4, 0x13($s5)
/* 00461FF4 8F8F8D44 */  lw     $t7, %got(firstparmreg)($gp)
/* 00461FF8 00047080 */  sll   $t6, $a0, 2
/* 00461FFC 25EFFFFC */  addiu $t7, $t7, -4
/* 00462000 01CF6821 */  addu  $t5, $t6, $t7
/* 00462004 8DB80000 */  lw    $t8, ($t5)
/* 00462008 27190001 */  addiu $t9, $t8, 1
/* 0046200C A2B90013 */  sb    $t9, 0x13($s5)
/* 00462010 92AC0013 */  lbu   $t4, 0x13($s5)
.L00462014:
/* 00462014 2D8E0020 */  sltiu $t6, $t4, 0x20
/* 00462018 01807827 */  not   $t7, $t4
/* 0046201C 2598FFE0 */  addiu $t8, $t4, -0x20
/* 00462020 8FAC0134 */  lw    $t4, 0x134($sp)
/* 00462024 2F190020 */  sltiu $t9, $t8, 0x20
/* 00462028 01EE6804 */  sllv  $t5, $t6, $t7
/* 0046202C 0004C0C0 */  sll   $t8, $a0, 3
/* 00462030 01F97004 */  sllv  $t6, $t9, $t7
/* 00462034 01981021 */  addu  $v0, $t4, $t8
/* 00462038 AFAE0100 */  sw    $t6, 0x100($sp)
/* 0046203C 8FAC0100 */  lw    $t4, 0x100($sp)
/* 00462040 8C4E0030 */  lw    $t6, 0x30($v0)
/* 00462044 8C59002C */  lw    $t9, 0x2c($v0)
/* 00462048 AFAD00FC */  sw    $t5, 0xfc($sp)
/* 0046204C 01CCC025 */  or    $t8, $t6, $t4
/* 00462050 032D7825 */  or    $t7, $t9, $t5
/* 00462054 AC4F002C */  sw    $t7, 0x2c($v0)
/* 00462058 100000F9 */  b     .L00462440
/* 0046205C AC580030 */   sw    $t8, 0x30($v0)
.L00462060:
/* 00462060 8FB90134 */  lw    $t9, 0x134($sp)
.L00462064:
/* 00462064 8F2D0018 */  lw    $t5, 0x18($t9)
/* 00462068 55A000F6 */  bnezl $t5, .L00462444
/* 0046206C 8E100004 */   lw    $s0, 4($s0)
/* 00462070 8E0F000C */  lw    $t7, 0xc($s0)
/* 00462074 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00462078 8F858D24 */  lw     $a1, %got(coloredparms)($gp)
/* 0046207C 8DEE0014 */  lw    $t6, 0x14($t7)
/* 00462080 0320F809 */  jalr  $t9
/* 00462084 95C40002 */   lhu   $a0, 2($t6)
/* 00462088 104000ED */  beqz  $v0, .L00462440
/* 0046208C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00462090 8E0C000C */  lw    $t4, 0xc($s0)
/* 00462094 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00462098 8F858D0C */  lw     $a1, %got(outmodebits)($gp)
/* 0046209C 8D980014 */  lw    $t8, 0x14($t4)
/* 004620A0 0320F809 */  jalr  $t9
/* 004620A4 97040002 */   lhu   $a0, 2($t8)
/* 004620A8 104000E5 */  beqz  $v0, .L00462440
/* 004620AC 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004620B0 8F998B0C */  lw     $t9, %got(allcallersave)($gp)
/* 004620B4 93390000 */  lbu   $t9, ($t9)
/* 004620B8 572000E2 */  bnezl $t9, .L00462444
/* 004620BC 8E100004 */   lw    $s0, 4($s0)
/* 004620C0 92AD0013 */  lbu   $t5, 0x13($s5)
/* 004620C4 55A000DF */  bnezl $t5, .L00462444
/* 004620C8 8E100004 */   lw    $s0, 4($s0)
/* 004620CC 8F9984C0 */  lw    $t9, %call16(passedinreg)($gp)
/* 004620D0 8E0F000C */  lw    $t7, 0xc($s0)
/* 004620D4 8F858A28 */  lw     $a1, %got(offsetpassedbyint)($gp)
/* 004620D8 8DE40014 */  lw    $a0, 0x14($t7)
/* 004620DC 0320F809 */  jalr  $t9
/* 004620E0 8CA50000 */   lw    $a1, ($a1)
/* 004620E4 104000D6 */  beqz  $v0, .L00462440
/* 004620E8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004620EC 8F99802C */  lw    $t9, %got(func_004618D4)($gp)
/* 004620F0 8E04000C */  lw    $a0, 0xc($s0)
/* 004620F4 27A20138 */  addiu $v0, $sp, 0x138
/* 004620F8 273918D4 */  addiu $t9, %lo(func_004618D4) # addiu $t9, $t9, 0x18d4
/* 004620FC 0320F809 */  jalr  $t9
/* 00462100 00000000 */   nop   
/* 00462104 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00462108 8E19000C */  lw    $t9, 0xc($s0)
/* 0046210C 00027080 */  sll   $t6, $v0, 2
/* 00462110 8F858C5C */  lw     $a1, %got(passedcl)($gp)
/* 00462114 8F8C8D44 */  lw     $t4, %got(firstparmreg)($gp)
/* 00462118 8FB5012C */  lw    $s5, 0x12c($sp)
/* 0046211C ACA20000 */  sw    $v0, ($a1)
/* 00462120 8F2D0028 */  lw    $t5, 0x28($t9)
/* 00462124 258CFFFC */  addiu $t4, $t4, -4
/* 00462128 01CCC021 */  addu  $t8, $t6, $t4
/* 0046212C 8F030000 */  lw    $v1, ($t8)
/* 00462130 00402025 */  move  $a0, $v0
/* 00462134 05A10003 */  bgez  $t5, .L00462144
/* 00462138 000D7883 */   sra   $t7, $t5, 2
/* 0046213C 25A10003 */  addiu $at, $t5, 3
/* 00462140 00017883 */  sra   $t7, $at, 2
.L00462144:
/* 00462144 24010002 */  li    $at, 2
/* 00462148 006F7021 */  addu  $t6, $v1, $t7
/* 0046214C 14810007 */  bne   $a0, $at, .L0046216C
/* 00462150 A2AE0013 */   sb    $t6, 0x13($s5)
/* 00462154 8E0C000C */  lw    $t4, 0xc($s0)
/* 00462158 24790001 */  addiu $t9, $v1, 1
/* 0046215C 8D980028 */  lw    $t8, 0x28($t4)
/* 00462160 53000003 */  beql  $t8, $zero, .L00462170
/* 00462164 92AD0013 */   lbu   $t5, 0x13($s5)
/* 00462168 A2B90013 */  sb    $t9, 0x13($s5)
.L0046216C:
/* 0046216C 92AD0013 */  lbu   $t5, 0x13($s5)
.L00462170:
/* 00462170 2DAF0020 */  sltiu $t7, $t5, 0x20
/* 00462174 01A07027 */  not   $t6, $t5
/* 00462178 25B8FFE0 */  addiu $t8, $t5, -0x20
/* 0046217C 8FAD0134 */  lw    $t5, 0x134($sp)
/* 00462180 2F190020 */  sltiu $t9, $t8, 0x20
/* 00462184 01CF6004 */  sllv  $t4, $t7, $t6
/* 00462188 0004C0C0 */  sll   $t8, $a0, 3
/* 0046218C 01D97804 */  sllv  $t7, $t9, $t6
/* 00462190 01B81021 */  addu  $v0, $t5, $t8
/* 00462194 AFAF0100 */  sw    $t7, 0x100($sp)
/* 00462198 8FAD0100 */  lw    $t5, 0x100($sp)
/* 0046219C 8C4F0030 */  lw    $t7, 0x30($v0)
/* 004621A0 8C59002C */  lw    $t9, 0x2c($v0)
/* 004621A4 AFAC00FC */  sw    $t4, 0xfc($sp)
/* 004621A8 01EDC025 */  or    $t8, $t7, $t5
/* 004621AC 032C7025 */  or    $t6, $t9, $t4
/* 004621B0 AC4E002C */  sw    $t6, 0x2c($v0)
/* 004621B4 100000A2 */  b     .L00462440
/* 004621B8 AC580030 */   sw    $t8, 0x30($v0)
.L004621BC:
/* 004621BC 566200A1 */  bnel  $s3, $v0, .L00462444
/* 004621C0 8E100004 */   lw    $s0, 4($s0)
/* 004621C4 8E03000C */  lw    $v1, 0xc($s0)
/* 004621C8 2401007B */  li    $at, 123
/* 004621CC 90790000 */  lbu   $t9, ($v1)
/* 004621D0 5721009C */  bnel  $t9, $at, .L00462444
/* 004621D4 8E100004 */   lw    $s0, 4($s0)
/* 004621D8 906C0003 */  lbu   $t4, 3($v1)
/* 004621DC 55800099 */  bnezl $t4, .L00462444
/* 004621E0 8E100004 */   lw    $s0, 4($s0)
/* 004621E4 8C6E0004 */  lw    $t6, 4($v1)
/* 004621E8 8DC20014 */  lw    $v0, 0x14($t6)
/* 004621EC 904F001A */  lbu   $t7, 0x1a($v0)
/* 004621F0 55E00094 */  bnezl $t7, .L00462444
/* 004621F4 8E100004 */   lw    $s0, 4($s0)
/* 004621F8 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 004621FC 94440002 */  lhu   $a0, 2($v0)
/* 00462200 02202825 */  move  $a1, $s1
/* 00462204 0320F809 */  jalr  $t9
/* 00462208 00000000 */   nop   
/* 0046220C 1440008C */  bnez  $v0, .L00462440
/* 00462210 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00462214 8E0D000C */  lw    $t5, 0xc($s0)
/* 00462218 3C010500 */  lui   $at, 0x500
/* 0046221C 8DA20004 */  lw    $v0, 4($t5)
/* 00462220 90580001 */  lbu   $t8, 1($v0)
/* 00462224 2F190020 */  sltiu $t9, $t8, 0x20
/* 00462228 00196023 */  negu  $t4, $t9
/* 0046222C 01817024 */  and   $t6, $t4, $at
/* 00462230 030E7804 */  sllv  $t7, $t6, $t8
/* 00462234 05E1000A */  bgez  $t7, .L00462260
/* 00462238 00000000 */   nop   
/* 0046223C 8F8D8B2C */  lw     $t5, %got(dwopcode)($gp)
/* 00462240 91AD0000 */  lbu   $t5, ($t5)
/* 00462244 15A00006 */  bnez  $t5, .L00462260
/* 00462248 00000000 */   nop   
/* 0046224C 9059002E */  lbu   $t9, 0x2e($v0)
/* 00462250 24010003 */  li    $at, 3
/* 00462254 332C0007 */  andi  $t4, $t9, 7
/* 00462258 5581007A */  bnel  $t4, $at, .L00462444
/* 0046225C 8E100004 */   lw    $s0, 4($s0)
.L00462260:
/* 00462260 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 00462264 8C440014 */  lw    $a0, 0x14($v0)
/* 00462268 8FA50134 */  lw    $a1, 0x134($sp)
/* 0046226C 0320F809 */  jalr  $t9
/* 00462270 27A6012C */   addiu $a2, $sp, 0x12c
/* 00462274 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00462278 8FB5012C */  lw    $s5, 0x12c($sp)
/* 0046227C 8F8E8B20 */  lw     $t6, %got(outofmem)($gp)
/* 00462280 91CE0000 */  lbu   $t6, ($t6)
/* 00462284 55C00581 */  bnezl $t6, .L0046388C
/* 00462288 8FBF0044 */   lw    $ra, 0x44($sp)
/* 0046228C 92B80012 */  lbu   $t8, 0x12($s5)
/* 00462290 02802025 */  move  $a0, $s4
/* 00462294 270F0001 */  addiu $t7, $t8, 1
/* 00462298 A2AF0012 */  sb    $t7, 0x12($s5)
/* 0046229C 8E0D000C */  lw    $t5, 0xc($s0)
/* 004622A0 8DB90004 */  lw    $t9, 4($t5)
/* 004622A4 8F2C0014 */  lw    $t4, 0x14($t9)
/* 004622A8 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 004622AC 95850002 */  lhu   $a1, 2($t4)
/* 004622B0 0320F809 */  jalr  $t9
/* 004622B4 00000000 */   nop   
/* 004622B8 96AE0010 */  lhu   $t6, 0x10($s5)
/* 004622BC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004622C0 55C00003 */  bnezl $t6, .L004622D0
/* 004622C4 8FB80134 */   lw    $t8, 0x134($sp)
/* 004622C8 A2B30014 */  sb    $s3, 0x14($s5)
/* 004622CC 8FB80134 */  lw    $t8, 0x134($sp)
.L004622D0:
/* 004622D0 8F0F0018 */  lw    $t7, 0x18($t8)
/* 004622D4 55E0005B */  bnezl $t7, .L00462444
/* 004622D8 8E100004 */   lw    $s0, 4($s0)
/* 004622DC 8E0D000C */  lw    $t5, 0xc($s0)
/* 004622E0 8F858D24 */  lw     $a1, %got(coloredparms)($gp)
/* 004622E4 8DB90004 */  lw    $t9, 4($t5)
/* 004622E8 8F2C0014 */  lw    $t4, 0x14($t9)
/* 004622EC 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 004622F0 95840002 */  lhu   $a0, 2($t4)
/* 004622F4 0320F809 */  jalr  $t9
/* 004622F8 00000000 */   nop   
/* 004622FC 10400050 */  beqz  $v0, .L00462440
/* 00462300 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00462304 8E0E000C */  lw    $t6, 0xc($s0)
/* 00462308 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 0046230C 8F858D0C */  lw     $a1, %got(outmodebits)($gp)
/* 00462310 8DD80004 */  lw    $t8, 4($t6)
/* 00462314 8F0F0014 */  lw    $t7, 0x14($t8)
/* 00462318 0320F809 */  jalr  $t9
/* 0046231C 95E40002 */   lhu   $a0, 2($t7)
/* 00462320 10400047 */  beqz  $v0, .L00462440
/* 00462324 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00462328 8F8D8B0C */  lw     $t5, %got(allcallersave)($gp)
/* 0046232C 91AD0000 */  lbu   $t5, ($t5)
/* 00462330 55A00044 */  bnezl $t5, .L00462444
/* 00462334 8E100004 */   lw    $s0, 4($s0)
/* 00462338 92B90013 */  lbu   $t9, 0x13($s5)
/* 0046233C 57200041 */  bnezl $t9, .L00462444
/* 00462340 8E100004 */   lw    $s0, 4($s0)
/* 00462344 8E0C000C */  lw    $t4, 0xc($s0)
/* 00462348 8F9984C0 */  lw    $t9, %call16(passedinreg)($gp)
/* 0046234C 8F858A28 */  lw     $a1, %got(offsetpassedbyint)($gp)
/* 00462350 8D8E0004 */  lw    $t6, 4($t4)
/* 00462354 8CA50000 */  lw    $a1, ($a1)
/* 00462358 0320F809 */  jalr  $t9
/* 0046235C 8DC40014 */   lw    $a0, 0x14($t6)
/* 00462360 10400037 */  beqz  $v0, .L00462440
/* 00462364 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00462368 8F99802C */  lw    $t9, %got(func_004618D4)($gp)
/* 0046236C 8E18000C */  lw    $t8, 0xc($s0)
/* 00462370 27A20138 */  addiu $v0, $sp, 0x138
/* 00462374 273918D4 */  addiu $t9, %lo(func_004618D4) # addiu $t9, $t9, 0x18d4
/* 00462378 0320F809 */  jalr  $t9
/* 0046237C 8F040004 */   lw    $a0, 4($t8)
/* 00462380 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00462384 8FB5012C */  lw    $s5, 0x12c($sp)
/* 00462388 8F818C5C */  lw     $at, %got(passedcl)($gp)
/* 0046238C 8F848C5C */  lw     $a0, %got(passedcl)($gp)
/* 00462390 8F8D8D44 */  lw     $t5, %got(firstparmreg)($gp)
/* 00462394 AC220000 */  sw    $v0, ($at)
/* 00462398 8E0C000C */  lw    $t4, 0xc($s0)
/* 0046239C 8C840000 */  lw    $a0, ($a0)
/* 004623A0 25ADFFFC */  addiu $t5, $t5, -4
/* 004623A4 8D8E0004 */  lw    $t6, 4($t4)
/* 004623A8 00047880 */  sll   $t7, $a0, 2
/* 004623AC 01EDC821 */  addu  $t9, $t7, $t5
/* 004623B0 8DD80028 */  lw    $t8, 0x28($t6)
/* 004623B4 8F230000 */  lw    $v1, ($t9)
/* 004623B8 07010003 */  bgez  $t8, .L004623C8
/* 004623BC 00187883 */   sra   $t7, $t8, 2
/* 004623C0 27010003 */  addiu $at, $t8, 3
/* 004623C4 00017883 */  sra   $t7, $at, 2
.L004623C8:
/* 004623C8 24010002 */  li    $at, 2
/* 004623CC 006F6821 */  addu  $t5, $v1, $t7
/* 004623D0 14810008 */  bne   $a0, $at, .L004623F4
/* 004623D4 A2AD0013 */   sb    $t5, 0x13($s5)
/* 004623D8 8E19000C */  lw    $t9, 0xc($s0)
/* 004623DC 24780001 */  addiu $t8, $v1, 1
/* 004623E0 8F2C0004 */  lw    $t4, 4($t9)
/* 004623E4 8D8E0028 */  lw    $t6, 0x28($t4)
/* 004623E8 51C00003 */  beql  $t6, $zero, .L004623F8
/* 004623EC 92AF0013 */   lbu   $t7, 0x13($s5)
/* 004623F0 A2B80013 */  sb    $t8, 0x13($s5)
.L004623F4:
/* 004623F4 92AF0013 */  lbu   $t7, 0x13($s5)
.L004623F8:
/* 004623F8 2DED0020 */  sltiu $t5, $t7, 0x20
/* 004623FC 01E0C827 */  not   $t9, $t7
/* 00462400 25EEFFE0 */  addiu $t6, $t7, -0x20
/* 00462404 8FAF0134 */  lw    $t7, 0x134($sp)
/* 00462408 2DD80020 */  sltiu $t8, $t6, 0x20
/* 0046240C 032D6004 */  sllv  $t4, $t5, $t9
/* 00462410 000470C0 */  sll   $t6, $a0, 3
/* 00462414 03386804 */  sllv  $t5, $t8, $t9
/* 00462418 01EE1021 */  addu  $v0, $t7, $t6
/* 0046241C AFAD0100 */  sw    $t5, 0x100($sp)
/* 00462420 8FAF0100 */  lw    $t7, 0x100($sp)
/* 00462424 8C4D0030 */  lw    $t5, 0x30($v0)
/* 00462428 8C58002C */  lw    $t8, 0x2c($v0)
/* 0046242C AFAC00FC */  sw    $t4, 0xfc($sp)
/* 00462430 01AF7025 */  or    $t6, $t5, $t7
/* 00462434 030CC825 */  or    $t9, $t8, $t4
/* 00462438 AC59002C */  sw    $t9, 0x2c($v0)
/* 0046243C AC4E0030 */  sw    $t6, 0x30($v0)
.L00462440:
/* 00462440 8E100004 */  lw    $s0, 4($s0)
.L00462444:
/* 00462444 5600FE52 */  bnezl $s0, .L00461D90
/* 00462448 92020009 */   lbu   $v0, 9($s0)
/* 0046244C 8FB80134 */  lw    $t8, 0x134($sp)
.L00462450:
/* 00462450 8F1E001C */  lw    $fp, 0x1c($t8)
/* 00462454 A3A00127 */  sb    $zero, 0x127($sp)
/* 00462458 93C20000 */  lbu   $v0, ($fp)
.L0046245C:
/* 0046245C 2401007B */  li    $at, 123
/* 00462460 5441009F */  bnel  $v0, $at, .L004626E0
/* 00462464 2401003E */   li    $at, 62
/* 00462468 93CC0003 */  lbu   $t4, 3($fp)
/* 0046246C 8FAE0134 */  lw    $t6, 0x134($sp)
/* 00462470 27A6012C */  addiu $a2, $sp, 0x12c
/* 00462474 55800021 */  bnezl $t4, .L004624FC
/* 00462478 8FD20004 */   lw    $s2, 4($fp)
/* 0046247C 93D90002 */  lbu   $t9, 2($fp)
/* 00462480 00002825 */  move  $a1, $zero
/* 00462484 52790009 */  beql  $s3, $t9, .L004624AC
/* 00462488 93CF0001 */   lbu   $t7, 1($fp)
/* 0046248C 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 00462490 8FCD0004 */  lw    $t5, 4($fp)
/* 00462494 27A20138 */  addiu $v0, $sp, 0x138
/* 00462498 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 0046249C 0320F809 */  jalr  $t9
/* 004624A0 8DA40034 */   lw    $a0, 0x34($t5)
/* 004624A4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004624A8 93CF0001 */  lbu   $t7, 1($fp)
.L004624AC:
/* 004624AC 11E0000F */  beqz  $t7, .L004624EC
/* 004624B0 00000000 */   nop   
/* 004624B4 8F99802C */  lw    $t9, %got(func_0046123C)($gp)
/* 004624B8 03C02025 */  move  $a0, $fp
/* 004624BC 27A20138 */  addiu $v0, $sp, 0x138
/* 004624C0 2739123C */  addiu $t9, %lo(func_0046123C) # addiu $t9, $t9, 0x123c
/* 004624C4 0320F809 */  jalr  $t9
/* 004624C8 00000000 */   nop   
/* 004624CC 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004624D0 03C02025 */  move  $a0, $fp
/* 004624D4 27A20138 */  addiu $v0, $sp, 0x138
/* 004624D8 8F99802C */  lw    $t9, %got(func_00461640)($gp)
/* 004624DC 27391640 */  addiu $t9, %lo(func_00461640) # addiu $t9, $t9, 0x1640
/* 004624E0 0320F809 */  jalr  $t9
/* 004624E4 00000000 */   nop   
/* 004624E8 8FBC003C */  lw    $gp, 0x3c($sp)
.L004624EC:
/* 004624EC 8F898B20 */  lw     $t1, %got(outofmem)($gp)
/* 004624F0 1000042F */  b     .L004635B0
/* 004624F4 91290000 */   lbu   $t1, ($t1)
/* 004624F8 8FD20004 */  lw    $s2, 4($fp)
.L004624FC:
/* 004624FC 8DD80014 */  lw    $t8, 0x14($t6)
/* 00462500 25D4010C */  addiu $s4, $t6, 0x10c
/* 00462504 8E4C0034 */  lw    $t4, 0x34($s2)
/* 00462508 8F030000 */  lw    $v1, ($t8)
/* 0046250C 8D820028 */  lw    $v0, 0x28($t4)
/* 00462510 8C700020 */  lw    $s0, 0x20($v1)
/* 00462514 04410002 */  bgez  $v0, .L00462520
/* 00462518 00400821 */   move  $at, $v0
/* 0046251C 24410003 */  addiu $at, $v0, 3
.L00462520:
/* 00462520 00011083 */  sra   $v0, $at, 2
/* 00462524 8E10000C */  lw    $s0, 0xc($s0)
.L00462528:
/* 00462528 24030064 */  li    $v1, 100
/* 0046252C 92190000 */  lbu   $t9, ($s0)
/* 00462530 5479FFFD */  bnel  $v1, $t9, .L00462528
/* 00462534 8E10000C */   lw    $s0, 0xc($s0)
/* 00462538 8E0D001C */  lw    $t5, 0x1c($s0)
/* 0046253C 05A10003 */  bgez  $t5, .L0046254C
/* 00462540 000D7883 */   sra   $t7, $t5, 2
/* 00462544 25A10003 */  addiu $at, $t5, 3
/* 00462548 00017883 */  sra   $t7, $at, 2
.L0046254C:
/* 0046254C 544FFFF6 */  bnel  $v0, $t7, .L00462528
/* 00462550 8E10000C */   lw    $s0, 0xc($s0)
/* 00462554 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 00462558 AFD0002C */  sw    $s0, 0x2c($fp)
/* 0046255C 8E440014 */  lw    $a0, 0x14($s2)
/* 00462560 0320F809 */  jalr  $t9
/* 00462564 8FA50134 */   lw    $a1, 0x134($sp)
/* 00462568 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0046256C 8FB5012C */  lw    $s5, 0x12c($sp)
/* 00462570 02802025 */  move  $a0, $s4
/* 00462574 8F998184 */  lw    $t9, %call16(setbit)($gp)
/* 00462578 A2B30014 */  sb    $s3, 0x14($s5)
/* 0046257C 8E580014 */  lw    $t8, 0x14($s2)
/* 00462580 0320F809 */  jalr  $t9
/* 00462584 97050002 */   lhu   $a1, 2($t8)
/* 00462588 92EE000C */  lbu   $t6, 0xc($s7)
/* 0046258C 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00462590 51C00010 */  beql  $t6, $zero, .L004625D4
/* 00462594 8E0C001C */   lw    $t4, 0x1c($s0)
/* 00462598 92020016 */  lbu   $v0, 0x16($s0)
/* 0046259C 54400005 */  bnezl $v0, .L004625B4
/* 004625A0 305100FF */   andi  $s1, $v0, 0xff
/* 004625A4 8F898B20 */  lw     $t1, %got(outofmem)($gp)
/* 004625A8 10000401 */  b     .L004635B0
/* 004625AC 91290000 */   lbu   $t1, ($t1)
/* 004625B0 305100FF */  andi  $s1, $v0, 0xff
.L004625B4:
/* 004625B4 2A210018 */  slti  $at, $s1, 0x18
/* 004625B8 10200003 */  beqz  $at, .L004625C8
/* 004625BC 00000000 */   nop   
/* 004625C0 10000020 */  b     .L00462644
/* 004625C4 24160001 */   li    $s6, 1
.L004625C8:
/* 004625C8 1000001E */  b     .L00462644
/* 004625CC 24160002 */   li    $s6, 2
/* 004625D0 8E0C001C */  lw    $t4, 0x1c($s0)
.L004625D4:
/* 004625D4 8FB90108 */  lw    $t9, 0x108($sp)
/* 004625D8 0199082A */  slt   $at, $t4, $t9
/* 004625DC 5020000A */  beql  $at, $zero, .L00462608
/* 004625E0 8E020018 */   lw    $v0, 0x18($s0)
/* 004625E4 8E020018 */  lw    $v0, 0x18($s0)
/* 004625E8 24160002 */  li    $s6, 2
/* 004625EC 28410003 */  slti  $at, $v0, 3
/* 004625F0 1420000C */  bnez  $at, .L00462624
/* 004625F4 00000000 */   nop   
/* 004625F8 8F898B20 */  lw     $t1, %got(outofmem)($gp)
/* 004625FC 100003EC */  b     .L004635B0
/* 00462600 91290000 */   lbu   $t1, ($t1)
/* 00462604 8E020018 */  lw    $v0, 0x18($s0)
.L00462608:
/* 00462608 24160001 */  li    $s6, 1
/* 0046260C 28410005 */  slti  $at, $v0, 5
/* 00462610 14200004 */  bnez  $at, .L00462624
/* 00462614 00000000 */   nop   
/* 00462618 8F898B20 */  lw     $t1, %got(outofmem)($gp)
/* 0046261C 100003E4 */  b     .L004635B0
/* 00462620 91290000 */   lbu   $t1, ($t1)
.L00462624:
/* 00462624 8F8F8D44 */  lw     $t7, %got(firstparmreg)($gp)
/* 00462628 00166880 */  sll   $t5, $s6, 2
/* 0046262C 25EFFFFC */  addiu $t7, $t7, -4
/* 00462630 01AFC021 */  addu  $t8, $t5, $t7
/* 00462634 8F0E0000 */  lw    $t6, ($t8)
/* 00462638 01C28821 */  addu  $s1, $t6, $v0
/* 0046263C 2631FFFF */  addiu $s1, $s1, -1
/* 00462640 323100FF */  andi  $s1, $s1, 0xff
.L00462644:
/* 00462644 8FAC0134 */  lw    $t4, 0x134($sp)
/* 00462648 0016C8C0 */  sll   $t9, $s6, 3
/* 0046264C 2E2D0040 */  sltiu $t5, $s1, 0x40
/* 00462650 11A00007 */  beqz  $t5, .L00462670
/* 00462654 01998021 */   addu  $s0, $t4, $t9
/* 00462658 00117943 */  sra   $t7, $s1, 5
/* 0046265C 000FC080 */  sll   $t8, $t7, 2
/* 00462660 02187021 */  addu  $t6, $s0, $t8
/* 00462664 8DCC002C */  lw    $t4, 0x2c($t6)
/* 00462668 022CC804 */  sllv  $t9, $t4, $s1
/* 0046266C 2B2D0000 */  slti  $t5, $t9, 0
.L00462670:
/* 00462670 11A00004 */  beqz  $t5, .L00462684
/* 00462674 00000000 */   nop   
/* 00462678 8F898B20 */  lw     $t1, %got(outofmem)($gp)
/* 0046267C 100003CC */  b     .L004635B0
/* 00462680 91290000 */   lbu   $t1, ($t1)
.L00462684:
/* 00462684 8F898B20 */  lw     $t1, %got(outofmem)($gp)
/* 00462688 91290000 */  lbu   $t1, ($t1)
/* 0046268C 5520047F */  bnezl $t1, .L0046388C
/* 00462690 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00462694 92B80013 */  lbu   $t8, 0x13($s5)
/* 00462698 2E2E0020 */  sltiu $t6, $s1, 0x20
/* 0046269C 02206027 */  not   $t4, $s1
/* 004626A0 170003C3 */  bnez  $t8, .L004635B0
/* 004626A4 262FFFE0 */   addiu $t7, $s1, -0x20
/* 004626A8 A2B10013 */  sb    $s1, 0x13($s5)
/* 004626AC 2DED0020 */  sltiu $t5, $t7, 0x20
/* 004626B0 018DC004 */  sllv  $t8, $t5, $t4
/* 004626B4 018EC804 */  sllv  $t9, $t6, $t4
/* 004626B8 8E0E002C */  lw    $t6, 0x2c($s0)
/* 004626BC 8E0D0030 */  lw    $t5, 0x30($s0)
/* 004626C0 AFB80100 */  sw    $t8, 0x100($sp)
/* 004626C4 01D97825 */  or    $t7, $t6, $t9
/* 004626C8 01B8C025 */  or    $t8, $t5, $t8
/* 004626CC AFB900FC */  sw    $t9, 0xfc($sp)
/* 004626D0 AE180030 */  sw    $t8, 0x30($s0)
/* 004626D4 100003B6 */  b     .L004635B0
/* 004626D8 AE0F002C */   sw    $t7, 0x2c($s0)
/* 004626DC 2401003E */  li    $at, 62
.L004626E0:
/* 004626E0 14410021 */  bne   $v0, $at, .L00462768
/* 004626E4 2443FFE0 */   addiu $v1, $v0, -0x20
/* 004626E8 93CE0002 */  lbu   $t6, 2($fp)
/* 004626EC 526E0012 */  beql  $s3, $t6, .L00462738
/* 004626F0 93CF0001 */   lbu   $t7, 1($fp)
/* 004626F4 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 004626F8 8FC40014 */  lw    $a0, 0x14($fp)
/* 004626FC 24050003 */  li    $a1, 3
/* 00462700 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 00462704 0320F809 */  jalr  $t9
/* 00462708 27A20138 */   addiu $v0, $sp, 0x138
/* 0046270C 8FD90004 */  lw    $t9, 4($fp)
/* 00462710 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00462714 00002825 */  move  $a1, $zero
/* 00462718 8F240034 */  lw    $a0, 0x34($t9)
/* 0046271C 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 00462720 27A20138 */  addiu $v0, $sp, 0x138
/* 00462724 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 00462728 0320F809 */  jalr  $t9
/* 0046272C 00000000 */   nop   
/* 00462730 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00462734 93CF0001 */  lbu   $t7, 1($fp)
.L00462738:
/* 00462738 11E00008 */  beqz  $t7, .L0046275C
/* 0046273C 00000000 */   nop   
/* 00462740 8F99802C */  lw    $t9, %got(func_0046123C)($gp)
/* 00462744 03C02025 */  move  $a0, $fp
/* 00462748 27A20138 */  addiu $v0, $sp, 0x138
/* 0046274C 2739123C */  addiu $t9, %lo(func_0046123C) # addiu $t9, $t9, 0x123c
/* 00462750 0320F809 */  jalr  $t9
/* 00462754 00000000 */   nop   
/* 00462758 8FBC003C */  lw    $gp, 0x3c($sp)
.L0046275C:
/* 0046275C 8F898B20 */  lw     $t1, %got(outofmem)($gp)
/* 00462760 10000393 */  b     .L004635B0
/* 00462764 91290000 */   lbu   $t1, ($t1)
.L00462768:
/* 00462768 2C6D0080 */  sltiu $t5, $v1, 0x80
/* 0046276C 11A00009 */  beqz  $t5, .L00462794
/* 00462770 2444FF80 */   addiu $a0, $v0, -0x80
/* 00462774 8F8E8044 */  lw    $t6, %got(D_10010F0C)($gp)
/* 00462778 00036143 */  sra   $t4, $v1, 5
/* 0046277C 000CC080 */  sll   $t8, $t4, 2
/* 00462780 25CE0F0C */  addiu $t6, %lo(D_10010F0C) # addiu $t6, $t6, 0xf0c
/* 00462784 01D8C821 */  addu  $t9, $t6, $t8
/* 00462788 8F2F0000 */  lw    $t7, ($t9)
/* 0046278C 006F6004 */  sllv  $t4, $t7, $v1
/* 00462790 298D0000 */  slti  $t5, $t4, 0
.L00462794:
/* 00462794 11A00027 */  beqz  $t5, .L00462834
/* 00462798 2C8F0020 */   sltiu $t7, $a0, 0x20
/* 0046279C 2C780080 */  sltiu $t8, $v1, 0x80
/* 004627A0 13000009 */  beqz  $t8, .L004627C8
/* 004627A4 00000000 */   nop   
/* 004627A8 8F8C8044 */  lw    $t4, %got(D_10010EFC)($gp)
/* 004627AC 0003C943 */  sra   $t9, $v1, 5
/* 004627B0 00197880 */  sll   $t7, $t9, 2
/* 004627B4 258C0EFC */  addiu $t4, %lo(D_10010EFC) # addiu $t4, $t4, 0xefc
/* 004627B8 018F7021 */  addu  $t6, $t4, $t7
/* 004627BC 8DCD0000 */  lw    $t5, ($t6)
/* 004627C0 006DC804 */  sllv  $t9, $t5, $v1
/* 004627C4 2B380000 */  slti  $t8, $t9, 0
.L004627C8:
/* 004627C8 13000009 */  beqz  $t8, .L004627F0
/* 004627CC 00000000 */   nop   
/* 004627D0 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 004627D4 8FC40004 */  lw    $a0, 4($fp)
/* 004627D8 02602825 */  move  $a1, $s3
/* 004627DC 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 004627E0 0320F809 */  jalr  $t9
/* 004627E4 27A20138 */   addiu $v0, $sp, 0x138
/* 004627E8 10000008 */  b     .L0046280C
/* 004627EC 8FBC003C */   lw    $gp, 0x3c($sp)
.L004627F0:
/* 004627F0 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 004627F4 8FC40004 */  lw    $a0, 4($fp)
/* 004627F8 24050003 */  li    $a1, 3
/* 004627FC 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 00462800 0320F809 */  jalr  $t9
/* 00462804 27A20138 */   addiu $v0, $sp, 0x138
/* 00462808 8FBC003C */  lw    $gp, 0x3c($sp)
.L0046280C:
/* 0046280C 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 00462810 8FC40014 */  lw    $a0, 0x14($fp)
/* 00462814 24050003 */  li    $a1, 3
/* 00462818 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 0046281C 0320F809 */  jalr  $t9
/* 00462820 27A20138 */   addiu $v0, $sp, 0x138
/* 00462824 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00462828 8F898B20 */  lw     $t1, %got(outofmem)($gp)
/* 0046282C 10000360 */  b     .L004635B0
/* 00462830 91290000 */   lbu   $t1, ($t1)
.L00462834:
/* 00462834 000F7023 */  negu  $t6, $t7
/* 00462838 3C01FC00 */  lui   $at, 0xfc00
/* 0046283C 01C16824 */  and   $t5, $t6, $at
/* 00462840 008DC804 */  sllv  $t9, $t5, $a0
/* 00462844 0721002A */  bgez  $t9, .L004628F0
/* 00462848 2C6D0080 */   sltiu $t5, $v1, 0x80
/* 0046284C 2C8C0020 */  sltiu $t4, $a0, 0x20
/* 00462850 000CC023 */  negu  $t8, $t4
/* 00462854 3C018400 */  lui   $at, 0x8400
/* 00462858 03017824 */  and   $t7, $t8, $at
/* 0046285C 008F7004 */  sllv  $t6, $t7, $a0
/* 00462860 05C10011 */  bgez  $t6, .L004628A8
/* 00462864 00000000 */   nop   
/* 00462868 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 0046286C 8FC40004 */  lw    $a0, 4($fp)
/* 00462870 24050003 */  li    $a1, 3
/* 00462874 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 00462878 0320F809 */  jalr  $t9
/* 0046287C 27A20138 */   addiu $v0, $sp, 0x138
/* 00462880 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00462884 8FC40014 */  lw    $a0, 0x14($fp)
/* 00462888 24050003 */  li    $a1, 3
/* 0046288C 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 00462890 27A20138 */  addiu $v0, $sp, 0x138
/* 00462894 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 00462898 0320F809 */  jalr  $t9
/* 0046289C 00000000 */   nop   
/* 004628A0 10000010 */  b     .L004628E4
/* 004628A4 8FBC003C */   lw    $gp, 0x3c($sp)
.L004628A8:
/* 004628A8 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 004628AC 8FC40004 */  lw    $a0, 4($fp)
/* 004628B0 02602825 */  move  $a1, $s3
/* 004628B4 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 004628B8 0320F809 */  jalr  $t9
/* 004628BC 27A20138 */   addiu $v0, $sp, 0x138
/* 004628C0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004628C4 8FC40014 */  lw    $a0, 0x14($fp)
/* 004628C8 02602825 */  move  $a1, $s3
/* 004628CC 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 004628D0 27A20138 */  addiu $v0, $sp, 0x138
/* 004628D4 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 004628D8 0320F809 */  jalr  $t9
/* 004628DC 00000000 */   nop   
/* 004628E0 8FBC003C */  lw    $gp, 0x3c($sp)
.L004628E4:
/* 004628E4 8F898B20 */  lw     $t1, %got(outofmem)($gp)
/* 004628E8 10000331 */  b     .L004635B0
/* 004628EC 91290000 */   lbu   $t1, ($t1)
.L004628F0:
/* 004628F0 11A00009 */  beqz  $t5, .L00462918
/* 004628F4 00000000 */   nop   
/* 004628F8 8F988044 */  lw    $t8, %got(D_10010EEC)($gp)
/* 004628FC 0003C943 */  sra   $t9, $v1, 5
/* 00462900 00196080 */  sll   $t4, $t9, 2
/* 00462904 27180EEC */  addiu $t8, %lo(D_10010EEC) # addiu $t8, $t8, 0xeec
/* 00462908 030C7821 */  addu  $t7, $t8, $t4
/* 0046290C 8DEE0000 */  lw    $t6, ($t7)
/* 00462910 006EC804 */  sllv  $t9, $t6, $v1
/* 00462914 2B2D0000 */  slti  $t5, $t9, 0
.L00462918:
/* 00462918 11A00016 */  beqz  $t5, .L00462974
/* 0046291C 2C4E00A0 */   sltiu $t6, $v0, 0xa0
/* 00462920 8F9984C8 */  lw    $t9, %call16(caninsertearly)($gp)
/* 00462924 8FC40004 */  lw    $a0, 4($fp)
/* 00462928 8FA50134 */  lw    $a1, 0x134($sp)
/* 0046292C 0320F809 */  jalr  $t9
/* 00462930 00000000 */   nop   
/* 00462934 14400005 */  bnez  $v0, .L0046294C
/* 00462938 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0046293C 8FC20004 */  lw    $v0, 4($fp)
/* 00462940 944C0006 */  lhu   $t4, 6($v0)
/* 00462944 258F0001 */  addiu $t7, $t4, 1
/* 00462948 A44F0006 */  sh    $t7, 6($v0)
.L0046294C:
/* 0046294C 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 00462950 8FC40004 */  lw    $a0, 4($fp)
/* 00462954 00002825 */  move  $a1, $zero
/* 00462958 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 0046295C 0320F809 */  jalr  $t9
/* 00462960 27A20138 */   addiu $v0, $sp, 0x138
/* 00462964 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00462968 8F898B20 */  lw     $t1, %got(outofmem)($gp)
/* 0046296C 10000310 */  b     .L004635B0
/* 00462970 91290000 */   lbu   $t1, ($t1)
.L00462974:
/* 00462974 11C00009 */  beqz  $t6, .L0046299C
/* 00462978 2401000F */   li    $at, 15
/* 0046297C 8F8D8044 */  lw    $t5, %got(D_10010ED8)($gp)
/* 00462980 0002C943 */  sra   $t9, $v0, 5
/* 00462984 0019C080 */  sll   $t8, $t9, 2
/* 00462988 25AD0ED8 */  addiu $t5, %lo(D_10010ED8) # addiu $t5, $t5, 0xed8
/* 0046298C 01B86021 */  addu  $t4, $t5, $t8
/* 00462990 8D8F0000 */  lw    $t7, ($t4)
/* 00462994 004FC804 */  sllv  $t9, $t7, $v0
/* 00462998 2B2E0000 */  slti  $t6, $t9, 0
.L0046299C:
/* 0046299C 15C001F5 */  bnez  $t6, .L00463174
/* 004629A0 00000000 */   nop   
/* 004629A4 5441000A */  bnel  $v0, $at, .L004629D0
/* 004629A8 24010064 */   li    $at, 100
/* 004629AC 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 004629B0 8FC40004 */  lw    $a0, 4($fp)
/* 004629B4 00002825 */  move  $a1, $zero
/* 004629B8 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 004629BC 0320F809 */  jalr  $t9
/* 004629C0 27A20138 */   addiu $v0, $sp, 0x138
/* 004629C4 100000B8 */  b     .L00462CA8
/* 004629C8 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004629CC 24010064 */  li    $at, 100
.L004629D0:
/* 004629D0 54410044 */  bnel  $v0, $at, .L00462AE4
/* 004629D4 24010066 */   li    $at, 102
/* 004629D8 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 004629DC 8FC40004 */  lw    $a0, 4($fp)
/* 004629E0 00002825 */  move  $a1, $zero
/* 004629E4 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 004629E8 0320F809 */  jalr  $t9
/* 004629EC 27A20138 */   addiu $v0, $sp, 0x138
/* 004629F0 93D80014 */  lbu   $t8, 0x14($fp)
/* 004629F4 2401000E */  li    $at, 14
/* 004629F8 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004629FC 570100AB */  bnel  $t8, $at, .L00462CAC
/* 00462A00 93D90000 */   lbu   $t9, ($fp)
/* 00462A04 92EC000C */  lbu   $t4, 0xc($s7)
/* 00462A08 558000A8 */  bnezl $t4, .L00462CAC
/* 00462A0C 93D90000 */   lbu   $t9, ($fp)
/* 00462A10 8F828B34 */  lw     $v0, %got(int_reg_size)($gp)
/* 00462A14 93C30015 */  lbu   $v1, 0x15($fp)
/* 00462A18 8C420000 */  lw    $v0, ($v0)
/* 00462A1C 0043082A */  slt   $at, $v0, $v1
/* 00462A20 502000A2 */  beql  $at, $zero, .L00462CAC
/* 00462A24 93D90000 */   lbu   $t9, ($fp)
/* 00462A28 8FCF001C */  lw    $t7, 0x1c($fp)
/* 00462A2C 8F848D44 */  lw     $a0, %got(firstparmreg)($gp)
/* 00462A30 00608025 */  move  $s0, $v1
/* 00462A34 01E2001A */  div   $zero, $t7, $v0
/* 00462A38 8C840000 */  lw    $a0, ($a0)
/* 00462A3C 0000C812 */  mflo  $t9
/* 00462A40 14400002 */  bnez  $v0, .L00462A4C
/* 00462A44 00000000 */   nop   
/* 00462A48 0007000D */  break 7
.L00462A4C:
/* 00462A4C 2401FFFF */  li    $at, -1
/* 00462A50 14410004 */  bne   $v0, $at, .L00462A64
/* 00462A54 3C018000 */   lui   $at, 0x8000
/* 00462A58 15E10002 */  bne   $t7, $at, .L00462A64
/* 00462A5C 00000000 */   nop   
/* 00462A60 0006000D */  break 6
.L00462A64:
/* 00462A64 00998821 */  addu  $s1, $a0, $t9
/* 00462A68 1860008F */  blez  $v1, .L00462CA8
/* 00462A6C 323100FF */   andi  $s1, $s1, 0xff
/* 00462A70 24830004 */  addiu $v1, $a0, 4
/* 00462A74 0223082A */  slt   $at, $s1, $v1
/* 00462A78 1020008B */  beqz  $at, .L00462CA8
/* 00462A7C 2E2D0020 */   sltiu $t5, $s1, 0x20
.L00462A80:
/* 00462A80 02207027 */  not   $t6, $s1
/* 00462A84 01CDC004 */  sllv  $t8, $t5, $t6
/* 00462A88 262CFFE0 */  addiu $t4, $s1, -0x20
/* 00462A8C 8FAD0134 */  lw    $t5, 0x134($sp)
/* 00462A90 2D8F0020 */  sltiu $t7, $t4, 0x20
/* 00462A94 01CFC804 */  sllv  $t9, $t7, $t6
/* 00462A98 AFB90100 */  sw    $t9, 0x100($sp)
/* 00462A9C AFB800FC */  sw    $t8, 0xfc($sp)
/* 00462AA0 8DAC0034 */  lw    $t4, 0x34($t5)
/* 00462AA4 8DAE0038 */  lw    $t6, 0x38($t5)
/* 00462AA8 26310001 */  addiu $s1, $s1, 1
/* 00462AAC 01987825 */  or    $t7, $t4, $t8
/* 00462AB0 ADAF0034 */  sw    $t7, 0x34($t5)
/* 00462AB4 8FB90100 */  lw    $t9, 0x100($sp)
/* 00462AB8 02028023 */  subu  $s0, $s0, $v0
/* 00462ABC 323100FF */  andi  $s1, $s1, 0xff
/* 00462AC0 01D96025 */  or    $t4, $t6, $t9
/* 00462AC4 1A000078 */  blez  $s0, .L00462CA8
/* 00462AC8 ADAC0038 */   sw    $t4, 0x38($t5)
/* 00462ACC 0223082A */  slt   $at, $s1, $v1
/* 00462AD0 5420FFEB */  bnezl $at, .L00462A80
/* 00462AD4 2E2D0020 */   sltiu $t5, $s1, 0x20
/* 00462AD8 10000074 */  b     .L00462CAC
/* 00462ADC 93D90000 */   lbu   $t9, ($fp)
/* 00462AE0 24010066 */  li    $at, 102
.L00462AE4:
/* 00462AE4 54410053 */  bnel  $v0, $at, .L00462C34
/* 00462AE8 24010067 */   li    $at, 103
/* 00462AEC 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 00462AF0 8FC40004 */  lw    $a0, 4($fp)
/* 00462AF4 24050003 */  li    $a1, 3
/* 00462AF8 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 00462AFC 0320F809 */  jalr  $t9
/* 00462B00 27A20138 */   addiu $v0, $sp, 0x138
/* 00462B04 92F8000C */  lbu   $t8, 0xc($s7)
/* 00462B08 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00462B0C 57000067 */  bnezl $t8, .L00462CAC
/* 00462B10 93D90000 */   lbu   $t9, ($fp)
/* 00462B14 8F828B34 */  lw     $v0, %got(int_reg_size)($gp)
/* 00462B18 97CF0030 */  lhu   $t7, 0x30($fp)
/* 00462B1C 8F848D44 */  lw     $a0, %got(firstparmreg)($gp)
/* 00462B20 8C420000 */  lw    $v0, ($v0)
/* 00462B24 8FD00020 */  lw    $s0, 0x20($fp)
/* 00462B28 8C840000 */  lw    $a0, ($a0)
/* 00462B2C 01E2001A */  div   $zero, $t7, $v0
/* 00462B30 00007012 */  mflo  $t6
/* 00462B34 008E8821 */  addu  $s1, $a0, $t6
/* 00462B38 14400002 */  bnez  $v0, .L00462B44
/* 00462B3C 00000000 */   nop   
/* 00462B40 0007000D */  break 7
.L00462B44:
/* 00462B44 2401FFFF */  li    $at, -1
/* 00462B48 14410004 */  bne   $v0, $at, .L00462B5C
/* 00462B4C 3C018000 */   lui   $at, 0x8000
/* 00462B50 15E10002 */  bne   $t7, $at, .L00462B5C
/* 00462B54 00000000 */   nop   
/* 00462B58 0006000D */  break 6
.L00462B5C:
/* 00462B5C 323100FF */  andi  $s1, $s1, 0xff
/* 00462B60 1A000051 */  blez  $s0, .L00462CA8
/* 00462B64 24990004 */   addiu $t9, $a0, 4
/* 00462B68 0239082A */  slt   $at, $s1, $t9
/* 00462B6C 1020004E */  beqz  $at, .L00462CA8
/* 00462B70 2E2C0040 */   sltiu $t4, $s1, 0x40
.L00462B74:
/* 00462B74 11800007 */  beqz  $t4, .L00462B94
/* 00462B78 8FAD0134 */   lw    $t5, 0x134($sp)
/* 00462B7C 0011C143 */  sra   $t8, $s1, 5
/* 00462B80 00187880 */  sll   $t7, $t8, 2
/* 00462B84 01AF7021 */  addu  $t6, $t5, $t7
/* 00462B88 8DD90034 */  lw    $t9, 0x34($t6)
/* 00462B8C 0239C004 */  sllv  $t8, $t9, $s1
/* 00462B90 2B0C0000 */  slti  $t4, $t8, 0
.L00462B94:
/* 00462B94 1180000A */  beqz  $t4, .L00462BC0
/* 00462B98 8FA40134 */   lw    $a0, 0x134($sp)
/* 00462B9C 8F99802C */  lw    $t9, %got(func_00461778)($gp)
/* 00462BA0 02202825 */  move  $a1, $s1
/* 00462BA4 00003025 */  move  $a2, $zero
/* 00462BA8 27391778 */  addiu $t9, %lo(func_00461778) # addiu $t9, $t9, 0x1778
/* 00462BAC 0320F809 */  jalr  $t9
/* 00462BB0 27A20138 */   addiu $v0, $sp, 0x138
/* 00462BB4 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00462BB8 8F828B34 */  lw     $v0, %got(int_reg_size)($gp)
/* 00462BBC 8C420000 */  lw    $v0, ($v0)
.L00462BC0:
/* 00462BC0 2E2F0020 */  sltiu $t7, $s1, 0x20
/* 00462BC4 02207027 */  not   $t6, $s1
/* 00462BC8 01CFC804 */  sllv  $t9, $t7, $t6
/* 00462BCC 2638FFE0 */  addiu $t8, $s1, -0x20
/* 00462BD0 8FAF0134 */  lw    $t7, 0x134($sp)
/* 00462BD4 2F0D0020 */  sltiu $t5, $t8, 0x20
/* 00462BD8 01CD6004 */  sllv  $t4, $t5, $t6
/* 00462BDC AFAC0100 */  sw    $t4, 0x100($sp)
/* 00462BE0 AFB900FC */  sw    $t9, 0xfc($sp)
/* 00462BE4 8DF80034 */  lw    $t8, 0x34($t7)
/* 00462BE8 8DEE0038 */  lw    $t6, 0x38($t7)
/* 00462BEC 26310001 */  addiu $s1, $s1, 1
/* 00462BF0 03196825 */  or    $t5, $t8, $t9
/* 00462BF4 ADED0034 */  sw    $t5, 0x34($t7)
/* 00462BF8 8FAC0100 */  lw    $t4, 0x100($sp)
/* 00462BFC 02028023 */  subu  $s0, $s0, $v0
/* 00462C00 323100FF */  andi  $s1, $s1, 0xff
/* 00462C04 01CCC025 */  or    $t8, $t6, $t4
/* 00462C08 1A000027 */  blez  $s0, .L00462CA8
/* 00462C0C ADF80038 */   sw    $t8, 0x38($t7)
/* 00462C10 8F998D44 */  lw     $t9, %got(firstparmreg)($gp)
/* 00462C14 8F390000 */  lw    $t9, ($t9)
/* 00462C18 272D0004 */  addiu $t5, $t9, 4
/* 00462C1C 022D082A */  slt   $at, $s1, $t5
/* 00462C20 5420FFD4 */  bnezl $at, .L00462B74
/* 00462C24 2E2C0040 */   sltiu $t4, $s1, 0x40
/* 00462C28 10000020 */  b     .L00462CAC
/* 00462C2C 93D90000 */   lbu   $t9, ($fp)
/* 00462C30 24010067 */  li    $at, 103
.L00462C34:
/* 00462C34 14410015 */  bne   $v0, $at, .L00462C8C
/* 00462C38 00000000 */   nop   
/* 00462C3C 93CE0015 */  lbu   $t6, 0x15($fp)
/* 00462C40 11C00012 */  beqz  $t6, .L00462C8C
/* 00462C44 00000000 */   nop   
/* 00462C48 8F9984C8 */  lw    $t9, %call16(caninsertearly)($gp)
/* 00462C4C A3C00016 */  sb    $zero, 0x16($fp)
/* 00462C50 8FC40004 */  lw    $a0, 4($fp)
/* 00462C54 0320F809 */  jalr  $t9
/* 00462C58 8FA50134 */   lw    $a1, 0x134($sp)
/* 00462C5C 1440000B */  bnez  $v0, .L00462C8C
/* 00462C60 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00462C64 8FC20004 */  lw    $v0, 4($fp)
/* 00462C68 24010004 */  li    $at, 4
/* 00462C6C 904C0000 */  lbu   $t4, ($v0)
/* 00462C70 55810006 */  bnel  $t4, $at, .L00462C8C
/* 00462C74 A3D30016 */   sb    $s3, 0x16($fp)
/* 00462C78 94580006 */  lhu   $t8, 6($v0)
/* 00462C7C 270F0001 */  addiu $t7, $t8, 1
/* 00462C80 10000002 */  b     .L00462C8C
/* 00462C84 A44F0006 */   sh    $t7, 6($v0)
/* 00462C88 A3D30016 */  sb    $s3, 0x16($fp)
.L00462C8C:
/* 00462C8C 8F99802C */  lw    $t9, %got(func_0045E5C4)($gp)
/* 00462C90 8FC40004 */  lw    $a0, 4($fp)
/* 00462C94 24050003 */  li    $a1, 3
/* 00462C98 2739E5C4 */  addiu $t9, %lo(func_0045E5C4) # addiu $t9, $t9, -0x1a3c
# shared stack
/*                   */  addiu $v0, $sp, 0x138
                         lw    $a2, -4($v0)
                         addiu $a3, $v0, -0xC
/* 00462C9C 0320F809 */  jalr  $t9
/* 00462CA0 27A20138 */   addiu $v0, $sp, 0x138
/* 00462CA4 8FBC003C */  lw    $gp, 0x3c($sp)
.L00462CA8:
/* 00462CA8 93D90000 */  lbu   $t9, ($fp)
.L00462CAC:
/* 00462CAC 24010064 */  li    $at, 100
/* 00462CB0 1721012D */  bne   $t9, $at, .L00463168
/* 00462CB4 00000000 */   nop   
/* 00462CB8 92E5000C */  lbu   $a1, 0xc($s7)
/* 00462CBC 14A0000F */  bnez  $a1, .L00462CFC
/* 00462CC0 00000000 */   nop   
/* 00462CC4 8FCD0018 */  lw    $t5, 0x18($fp)
/* 00462CC8 29A10005 */  slti  $at, $t5, 5
/* 00462CCC 10200126 */  beqz  $at, .L00463168
/* 00462CD0 00000000 */   nop   
/* 00462CD4 93CE0014 */  lbu   $t6, 0x14($fp)
/* 00462CD8 2401000E */  li    $at, 14
/* 00462CDC 15C10007 */  bne   $t6, $at, .L00462CFC
/* 00462CE0 00000000 */   nop   
/* 00462CE4 8F8C8B34 */  lw     $t4, %got(int_reg_size)($gp)
/* 00462CE8 93D80015 */  lbu   $t8, 0x15($fp)
/* 00462CEC 8D8C0000 */  lw    $t4, ($t4)
/* 00462CF0 0198082A */  slt   $at, $t4, $t8
/* 00462CF4 1420011C */  bnez  $at, .L00463168
/* 00462CF8 00000000 */   nop   
.L00462CFC:
/* 00462CFC 8F8F8B20 */  lw     $t7, %got(outofmem)($gp)
/* 00462D00 91EF0000 */  lbu   $t7, ($t7)
/* 00462D04 55E002E1 */  bnezl $t7, .L0046388C
/* 00462D08 8FBF0044 */   lw    $ra, 0x44($sp)
/* 00462D0C 8FD20004 */  lw    $s2, 4($fp)
/* 00462D10 24010003 */  li    $at, 3
/* 00462D14 8FC6001C */  lw    $a2, 0x1c($fp)
/* 00462D18 92440000 */  lbu   $a0, ($s2)
/* 00462D1C 8FAD0108 */  lw    $t5, 0x108($sp)
/* 00462D20 14810012 */  bne   $a0, $at, .L00462D6C
/* 00462D24 00000000 */   nop   
/* 00462D28 8E420030 */  lw    $v0, 0x30($s2)
/* 00462D2C 1040000F */  beqz  $v0, .L00462D6C
/* 00462D30 00000000 */   nop   
/* 00462D34 8F8389CC */  lw     $v1, %got(nocopy)($gp)
/* 00462D38 8C630000 */  lw    $v1, ($v1)
/* 00462D3C 1062000B */  beq   $v1, $v0, .L00462D6C
/* 00462D40 00000000 */   nop   
/* 00462D44 90440000 */  lbu   $a0, ($v0)
.L00462D48:
/* 00462D48 24010003 */  li    $at, 3
/* 00462D4C 00409025 */  move  $s2, $v0
/* 00462D50 14810006 */  bne   $a0, $at, .L00462D6C
/* 00462D54 00000000 */   nop   
/* 00462D58 8C420030 */  lw    $v0, 0x30($v0)
/* 00462D5C 10400003 */  beqz  $v0, .L00462D6C
/* 00462D60 00000000 */   nop   
/* 00462D64 5462FFF8 */  bnel  $v1, $v0, .L00462D48
/* 00462D68 90440000 */   lbu   $a0, ($v0)
.L00462D6C:
/* 00462D6C 10A00015 */  beqz  $a1, .L00462DC4
/* 00462D70 00CD082A */   slt   $at, $a2, $t5
/* 00462D74 8F99802C */  lw    $t9, %got(func_00461880)($gp)
/* 00462D78 00C02025 */  move  $a0, $a2
/* 00462D7C 8EE50024 */  lw    $a1, 0x24($s7)
/* 00462D80 27391880 */  addiu $t9, %lo(func_00461880) # addiu $t9, $t9, 0x1880
/* 00462D84 0320F809 */  jalr  $t9
/* 00462D88 27A20138 */   addiu $v0, $sp, 0x138
/* 00462D8C 304300FF */  andi  $v1, $v0, 0xff
/* 00462D90 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00462D94 106000F4 */  beqz  $v1, .L00463168
/* 00462D98 A3C20016 */   sb    $v0, 0x16($fp)
/* 00462D9C 307100FF */  andi  $s1, $v1, 0xff
/* 00462DA0 2A210018 */  slti  $at, $s1, 0x18
/* 00462DA4 24190001 */  li    $t9, 1
/* 00462DA8 10200003 */  beqz  $at, .L00462DB8
/* 00462DAC A3B900F7 */   sb    $t9, 0xf7($sp)
/* 00462DB0 10000002 */  b     .L00462DBC
/* 00462DB4 24160001 */   li    $s6, 1
.L00462DB8:
/* 00462DB8 24160002 */  li    $s6, 2
.L00462DBC:
/* 00462DBC 10000014 */  b     .L00462E10
/* 00462DC0 92440000 */   lbu   $a0, ($s2)
.L00462DC4:
/* 00462DC4 10200007 */  beqz  $at, .L00462DE4
/* 00462DC8 8FC20018 */   lw    $v0, 0x18($fp)
/* 00462DCC 28410003 */  slti  $at, $v0, 3
/* 00462DD0 102000E5 */  beqz  $at, .L00463168
/* 00462DD4 24160002 */   li    $s6, 2
/* 00462DD8 240E0001 */  li    $t6, 1
/* 00462DDC 10000004 */  b     .L00462DF0
/* 00462DE0 A3AE00F7 */   sb    $t6, 0xf7($sp)
.L00462DE4:
/* 00462DE4 240C0001 */  li    $t4, 1
/* 00462DE8 A3AC00F7 */  sb    $t4, 0xf7($sp)
/* 00462DEC 24160001 */  li    $s6, 1
.L00462DF0:
/* 00462DF0 8F8F8D44 */  lw     $t7, %got(firstparmreg)($gp)
/* 00462DF4 0016C080 */  sll   $t8, $s6, 2
/* 00462DF8 25EFFFFC */  addiu $t7, $t7, -4
/* 00462DFC 030FC821 */  addu  $t9, $t8, $t7
/* 00462E00 8F2D0000 */  lw    $t5, ($t9)
/* 00462E04 01A28821 */  addu  $s1, $t5, $v0
/* 00462E08 2631FFFF */  addiu $s1, $s1, -1
/* 00462E0C 323100FF */  andi  $s1, $s1, 0xff
.L00462E10:
/* 00462E10 24010003 */  li    $at, 3
/* 00462E14 54810014 */  bnel  $a0, $at, .L00462E68
/* 00462E18 A3A000F7 */   sb    $zero, 0xf7($sp)
/* 00462E1C 8E420014 */  lw    $v0, 0x14($s2)
/* 00462E20 904E001A */  lbu   $t6, 0x1a($v0)
/* 00462E24 55C00010 */  bnezl $t6, .L00462E68
/* 00462E28 A3A000F7 */   sb    $zero, 0xf7($sp)
/* 00462E2C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00462E30 8FA50134 */  lw    $a1, 0x134($sp)
/* 00462E34 94440002 */  lhu   $a0, 2($v0)
/* 00462E38 0320F809 */  jalr  $t9
/* 00462E3C 24A500F4 */   addiu $a1, $a1, 0xf4
/* 00462E40 14400008 */  bnez  $v0, .L00462E64
/* 00462E44 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00462E48 8F9984BC */  lw    $t9, %call16(formlivbb)($gp)
/* 00462E4C 8E440014 */  lw    $a0, 0x14($s2)
/* 00462E50 8FA50134 */  lw    $a1, 0x134($sp)
/* 00462E54 0320F809 */  jalr  $t9
/* 00462E58 27A6012C */   addiu $a2, $sp, 0x12c
/* 00462E5C 10000002 */  b     .L00462E68
/* 00462E60 8FBC003C */   lw    $gp, 0x3c($sp)
.L00462E64:
/* 00462E64 A3A000F7 */  sb    $zero, 0xf7($sp)
.L00462E68:
/* 00462E68 3AC20001 */  xori  $v0, $s6, 1
/* 00462E6C 2C540001 */  sltiu $s4, $v0, 1
/* 00462E70 1280001D */  beqz  $s4, .L00462EE8
/* 00462E74 00000000 */   nop   
/* 00462E78 8F99802C */  lw    $t9, %got(func_004618D4)($gp)
/* 00462E7C 02402025 */  move  $a0, $s2
/* 00462E80 27A20138 */  addiu $v0, $sp, 0x138
/* 00462E84 273918D4 */  addiu $t9, %lo(func_004618D4) # addiu $t9, $t9, 0x18d4
/* 00462E88 0320F809 */  jalr  $t9
/* 00462E8C 00000000 */   nop   
/* 00462E90 38430001 */  xori  $v1, $v0, 1
/* 00462E94 0003A02B */  sltu  $s4, $zero, $v1
/* 00462E98 12800004 */  beqz  $s4, .L00462EAC
/* 00462E9C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00462EA0 92540001 */  lbu   $s4, 1($s2)
/* 00462EA4 3A94000C */  xori  $s4, $s4, 0xc
/* 00462EA8 2E940001 */  sltiu $s4, $s4, 1
.L00462EAC:
/* 00462EAC 1680000E */  bnez  $s4, .L00462EE8
/* 00462EB0 00000000 */   nop   
/* 00462EB4 8F948B28 */  lw     $s4, %got(mips3_64data)($gp)
/* 00462EB8 92940000 */  lbu   $s4, ($s4)
/* 00462EBC 2E940001 */  sltiu $s4, $s4, 1
/* 00462EC0 12800009 */  beqz  $s4, .L00462EE8
/* 00462EC4 00000000 */   nop   
/* 00462EC8 8F99802C */  lw    $t9, %got(func_00461920)($gp)
/* 00462ECC 02402025 */  move  $a0, $s2
/* 00462ED0 27A20138 */  addiu $v0, $sp, 0x138
/* 00462ED4 27391920 */  addiu $t9, %lo(func_00461920) # addiu $t9, $t9, 0x1920
/* 00462ED8 0320F809 */  jalr  $t9
/* 00462EDC 00000000 */   nop   
/* 00462EE0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00462EE4 0040A025 */  move  $s4, $v0
.L00462EE8:
/* 00462EE8 8F8C8B0C */  lw     $t4, %got(allcallersave)($gp)
/* 00462EEC 2E380040 */  sltiu $t8, $s1, 0x40
/* 00462EF0 918C0000 */  lbu   $t4, ($t4)
/* 00462EF4 55800020 */  bnezl $t4, .L00462F78
/* 00462EF8 8FAE0134 */   lw    $t6, 0x134($sp)
/* 00462EFC 13000009 */  beqz  $t8, .L00462F24
/* 00462F00 8FAF0134 */   lw    $t7, 0x134($sp)
/* 00462F04 0016C8C0 */  sll   $t9, $s6, 3
/* 00462F08 00117143 */  sra   $t6, $s1, 5
/* 00462F0C 000E6080 */  sll   $t4, $t6, 2
/* 00462F10 01F96821 */  addu  $t5, $t7, $t9
/* 00462F14 01AC7821 */  addu  $t7, $t5, $t4
/* 00462F18 8DF9002C */  lw    $t9, 0x2c($t7)
/* 00462F1C 02397004 */  sllv  $t6, $t9, $s1
/* 00462F20 29D80000 */  slti  $t8, $t6, 0
.L00462F24:
/* 00462F24 13000013 */  beqz  $t8, .L00462F74
/* 00462F28 8FB5012C */   lw    $s5, 0x12c($sp)
/* 00462F2C 12A00009 */  beqz  $s5, .L00462F54
/* 00462F30 93AC00F7 */   lbu   $t4, 0xf7($sp)
/* 00462F34 11800007 */  beqz  $t4, .L00462F54
/* 00462F38 00000000 */   nop   
/* 00462F3C 92AF0013 */  lbu   $t7, 0x13($s5)
/* 00462F40 162F0004 */  bne   $s1, $t7, .L00462F54
/* 00462F44 00000000 */   nop   
/* 00462F48 92B90012 */  lbu   $t9, 0x12($s5)
/* 00462F4C 13200086 */  beqz  $t9, .L00463168
/* 00462F50 00000000 */   nop   
.L00462F54:
/* 00462F54 8F99802C */  lw    $t9, %got(func_00461778)($gp)
/* 00462F58 8FA40134 */  lw    $a0, 0x134($sp)
/* 00462F5C 02202825 */  move  $a1, $s1
/* 00462F60 27391778 */  addiu $t9, %lo(func_00461778) # addiu $t9, $t9, 0x1778
/* 00462F64 00003025 */  move  $a2, $zero
/* 00462F68 0320F809 */  jalr  $t9
/* 00462F6C 27A20138 */   addiu $v0, $sp, 0x138
/* 00462F70 8FBC003C */  lw    $gp, 0x3c($sp)
.L00462F74:
/* 00462F74 8FAE0134 */  lw    $t6, 0x134($sp)
.L00462F78:
/* 00462F78 329500FF */  andi  $s5, $s4, 0xff
/* 00462F7C 001668C0 */  sll   $t5, $s6, 3
/* 00462F80 12A00013 */  beqz  $s5, .L00462FD0
/* 00462F84 01CD8021 */   addu  $s0, $t6, $t5
/* 00462F88 26250001 */  addiu $a1, $s1, 1
/* 00462F8C 2CB80040 */  sltiu $t8, $a1, 0x40
/* 00462F90 13000006 */  beqz  $t8, .L00462FAC
/* 00462F94 00056143 */   sra   $t4, $a1, 5
/* 00462F98 000C7880 */  sll   $t7, $t4, 2
/* 00462F9C 020FC821 */  addu  $t9, $s0, $t7
/* 00462FA0 8F2E002C */  lw    $t6, 0x2c($t9)
/* 00462FA4 00AE6804 */  sllv  $t5, $t6, $a1
/* 00462FA8 29B80000 */  slti  $t8, $t5, 0
.L00462FAC:
/* 00462FAC 13000008 */  beqz  $t8, .L00462FD0
/* 00462FB0 00000000 */   nop   
/* 00462FB4 8F99802C */  lw    $t9, %got(func_00461778)($gp)
/* 00462FB8 8FA40134 */  lw    $a0, 0x134($sp)
/* 00462FBC 00003025 */  move  $a2, $zero
/* 00462FC0 27391778 */  addiu $t9, %lo(func_00461778) # addiu $t9, $t9, 0x1778
/* 00462FC4 0320F809 */  jalr  $t9
/* 00462FC8 27A20138 */   addiu $v0, $sp, 0x138
/* 00462FCC 8FBC003C */  lw    $gp, 0x3c($sp)
.L00462FD0:
/* 00462FD0 12A00013 */  beqz  $s5, .L00463020
/* 00462FD4 02402025 */   move  $a0, $s2
/* 00462FD8 262F0001 */  addiu $t7, $s1, 1
/* 00462FDC 2DF90020 */  sltiu $t9, $t7, 0x20
/* 00462FE0 01E07027 */  not   $t6, $t7
/* 00462FE4 01D96804 */  sllv  $t5, $t9, $t6
/* 00462FE8 2E2C0020 */  sltiu $t4, $s1, 0x20
/* 00462FEC 0220C027 */  not   $t8, $s1
/* 00462FF0 030CC804 */  sllv  $t9, $t4, $t8
/* 00462FF4 01B96025 */  or    $t4, $t5, $t9
/* 00462FF8 25EDFFE0 */  addiu $t5, $t7, -0x20
/* 00462FFC 2DB90020 */  sltiu $t9, $t5, 0x20
/* 00463000 262FFFE0 */  addiu $t7, $s1, -0x20
/* 00463004 AFAC00FC */  sw    $t4, 0xfc($sp)
/* 00463008 01D96004 */  sllv  $t4, $t9, $t6
/* 0046300C 2DED0020 */  sltiu $t5, $t7, 0x20
/* 00463010 030DC804 */  sllv  $t9, $t5, $t8
/* 00463014 01997025 */  or    $t6, $t4, $t9
/* 00463018 10000009 */  b     .L00463040
/* 0046301C AFAE0100 */   sw    $t6, 0x100($sp)
.L00463020:
/* 00463020 02206827 */  not   $t5, $s1
/* 00463024 262CFFE0 */  addiu $t4, $s1, -0x20
/* 00463028 2D990020 */  sltiu $t9, $t4, 0x20
/* 0046302C 2E2F0020 */  sltiu $t7, $s1, 0x20
/* 00463030 01AFC004 */  sllv  $t8, $t7, $t5
/* 00463034 01B97004 */  sllv  $t6, $t9, $t5
/* 00463038 AFAE0100 */  sw    $t6, 0x100($sp)
/* 0046303C AFB800FC */  sw    $t8, 0xfc($sp)
.L00463040:
/* 00463040 8E190030 */  lw    $t9, 0x30($s0)
/* 00463044 8FAD0100 */  lw    $t5, 0x100($sp)
/* 00463048 8E0F002C */  lw    $t7, 0x2c($s0)
/* 0046304C 8FB800FC */  lw    $t8, 0xfc($sp)
/* 00463050 032D7025 */  or    $t6, $t9, $t5
/* 00463054 8F99802C */  lw    $t9, %got(func_004618D4)($gp)
/* 00463058 01F86025 */  or    $t4, $t7, $t8
/* 0046305C AE0C002C */  sw    $t4, 0x2c($s0)
/* 00463060 273918D4 */  addiu $t9, %lo(func_004618D4) # addiu $t9, $t9, 0x18d4
/* 00463064 AE0E0030 */  sw    $t6, 0x30($s0)
/* 00463068 0320F809 */  jalr  $t9
/* 0046306C 27A20138 */   addiu $v0, $sp, 0x138
/* 00463070 1456003D */  bne   $v0, $s6, .L00463168
/* 00463074 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463078 8F8F8AA4 */  lw     $t7, %got(doprecolor)($gp)
/* 0046307C 91EF0000 */  lbu   $t7, ($t7)
/* 00463080 11E00039 */  beqz  $t7, .L00463168
/* 00463084 00000000 */   nop   
/* 00463088 92580000 */  lbu   $t8, ($s2)
/* 0046308C 24010003 */  li    $at, 3
/* 00463090 93AC00F7 */  lbu   $t4, 0xf7($sp)
/* 00463094 57010018 */  bnel  $t8, $at, .L004630F8
/* 00463098 8FB5012C */   lw    $s5, 0x12c($sp)
/* 0046309C 11800032 */  beqz  $t4, .L00463168
/* 004630A0 00000000 */   nop   
/* 004630A4 8FB5012C */  lw    $s5, 0x12c($sp)
/* 004630A8 92B90013 */  lbu   $t9, 0x13($s5)
/* 004630AC 1720002E */  bnez  $t9, .L00463168
/* 004630B0 00000000 */   nop   
/* 004630B4 8F8D8A5C */  lw     $t5, %got(lang)($gp)
/* 004630B8 24010002 */  li    $at, 2
/* 004630BC 91AD0000 */  lbu   $t5, ($t5)
/* 004630C0 15A1000A */  bne   $t5, $at, .L004630EC
/* 004630C4 00000000 */   nop   
/* 004630C8 8F99802C */  lw    $t9, %got(func_00461A00)($gp)
/* 004630CC 03C02025 */  move  $a0, $fp
/* 004630D0 02402825 */  move  $a1, $s2
/* 004630D4 27391A00 */  addiu $t9, %lo(func_00461A00) # addiu $t9, $t9, 0x1a00
/* 004630D8 0320F809 */  jalr  $t9
/* 004630DC 27A20138 */   addiu $v0, $sp, 0x138
/* 004630E0 10400021 */  beqz  $v0, .L00463168
/* 004630E4 8FBC003C */   lw    $gp, 0x3c($sp)
/* 004630E8 8FB5012C */  lw    $s5, 0x12c($sp)
.L004630EC:
/* 004630EC 1000001E */  b     .L00463168
/* 004630F0 A2B10013 */   sb    $s1, 0x13($s5)
/* 004630F4 8FB5012C */  lw    $s5, 0x12c($sp)
.L004630F8:
/* 004630F8 12A0001B */  beqz  $s5, .L00463168
/* 004630FC 00000000 */   nop   
/* 00463100 92AE0013 */  lbu   $t6, 0x13($s5)
/* 00463104 15C00018 */  bnez  $t6, .L00463168
/* 00463108 00000000 */   nop   
/* 0046310C 8F8F8A5C */  lw     $t7, %got(lang)($gp)
/* 00463110 24010002 */  li    $at, 2
/* 00463114 8FA50134 */  lw    $a1, 0x134($sp)
/* 00463118 91EF0000 */  lbu   $t7, ($t7)
/* 0046311C 55E10012 */  bnel  $t7, $at, .L00463168
/* 00463120 A2B10013 */   sb    $s1, 0x13($s5)
/* 00463124 8F998170 */  lw    $t9, %call16(bvectin0)($gp)
/* 00463128 8E580014 */  lw    $t8, 0x14($s2)
/* 0046312C 24A5013C */  addiu $a1, $a1, 0x13c
/* 00463130 0320F809 */  jalr  $t9
/* 00463134 97040002 */   lhu   $a0, 2($t8)
/* 00463138 1040000A */  beqz  $v0, .L00463164
/* 0046313C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463140 8F99802C */  lw    $t9, %got(func_0046195C)($gp)
/* 00463144 03C02025 */  move  $a0, $fp
/* 00463148 27A20138 */  addiu $v0, $sp, 0x138
/* 0046314C 2739195C */  addiu $t9, %lo(func_0046195C) # addiu $t9, $t9, 0x195c
/* 00463150 0320F809 */  jalr  $t9
/* 00463154 00000000 */   nop   
/* 00463158 10400003 */  beqz  $v0, .L00463168
/* 0046315C 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463160 8FB5012C */  lw    $s5, 0x12c($sp)
.L00463164:
/* 00463164 A2B10013 */  sb    $s1, 0x13($s5)
.L00463168:
/* 00463168 8F898B20 */  lw     $t1, %got(outofmem)($gp)
/* 0046316C 10000110 */  b     .L004635B0
/* 00463170 91290000 */   lbu   $t1, ($t1)
.L00463174:
/* 00463174 8F898B20 */  lw     $t1, %got(outofmem)($gp)
/* 00463178 2401005C */  li    $at, 92
/* 0046317C 1441010C */  bne   $v0, $at, .L004635B0
/* 00463180 91290000 */   lbu   $t1, ($t1)
/* 00463184 8F998B0C */  lw     $t9, %got(allcallersave)($gp)
/* 00463188 8FCC0018 */  lw    $t4, 0x18($fp)
/* 0046318C 8FD70020 */  lw    $s7, 0x20($fp)
/* 00463190 93390000 */  lbu   $t9, ($t9)
/* 00463194 AFAC0108 */  sw    $t4, 0x108($sp)
/* 00463198 1720005D */  bnez  $t9, .L00463310
/* 0046319C 00000000 */   nop   
/* 004631A0 92ED000C */  lbu   $t5, 0xc($s7)
/* 004631A4 51A00103 */  beql  $t5, $zero, .L004635B4
/* 004631A8 8FC20008 */   lw    $v0, 8($fp)
/* 004631AC 8F8E8AFC */  lw     $t6, %got(someusefp)($gp)
/* 004631B0 8F858D3C */  lw     $a1, %got(lasterreg)($gp)
/* 004631B4 8F8A8D3C */  lw     $t2, %got(lasterreg)($gp)
/* 004631B8 91CE0000 */  lbu   $t6, ($t6)
/* 004631BC 24030016 */  li    $v1, 22
/* 004631C0 8CA50000 */  lw    $a1, ($a1)
/* 004631C4 11C00003 */  beqz  $t6, .L004631D4
/* 004631C8 8D4A0004 */   lw    $t2, 4($t2)
/* 004631CC 10000001 */  b     .L004631D4
/* 004631D0 24030015 */   li    $v1, 21
.L004631D4:
/* 004631D4 8F848D54 */  lw     $a0, %got(highesteereg)($gp)
/* 004631D8 8C840000 */  lw    $a0, ($a0)
/* 004631DC 0083082A */  slt   $at, $a0, $v1
/* 004631E0 1020000D */  beqz  $at, .L00463218
/* 004631E4 00000000 */   nop   
/* 004631E8 8EEF0024 */  lw    $t7, 0x24($s7)
/* 004631EC 01E31021 */  addu  $v0, $t7, $v1
/* 004631F0 9058FFFF */  lbu   $t8, -1($v0)
/* 004631F4 17000008 */  bnez  $t8, .L00463218
/* 004631F8 00000000 */   nop   
/* 004631FC 2463FFFF */  addiu $v1, $v1, -1
.L00463200:
/* 00463200 0083082A */  slt   $at, $a0, $v1
/* 00463204 10200004 */  beqz  $at, .L00463218
/* 00463208 2442FFFF */   addiu $v0, $v0, -1
/* 0046320C 904CFFFF */  lbu   $t4, -1($v0)
/* 00463210 5180FFFB */  beql  $t4, $zero, .L00463200
/* 00463214 2463FFFF */   addiu $v1, $v1, -1
.L00463218:
/* 00463218 8F848D50 */  lw     $a0, %got(highesterreg)($gp)
/* 0046321C 8F818D54 */  lw     $at, %got(highesteereg)($gp)
/* 00463220 8C840000 */  lw    $a0, ($a0)
/* 00463224 AC230000 */  sw    $v1, ($at)
/* 00463228 00A01825 */  move  $v1, $a1
/* 0046322C 0085082A */  slt   $at, $a0, $a1
/* 00463230 1020000D */  beqz  $at, .L00463268
/* 00463234 00000000 */   nop   
/* 00463238 8EF90024 */  lw    $t9, 0x24($s7)
/* 0046323C 03251021 */  addu  $v0, $t9, $a1
/* 00463240 904DFFFF */  lbu   $t5, -1($v0)
/* 00463244 15A00008 */  bnez  $t5, .L00463268
/* 00463248 00000000 */   nop   
/* 0046324C 2463FFFF */  addiu $v1, $v1, -1
.L00463250:
/* 00463250 0083082A */  slt   $at, $a0, $v1
/* 00463254 10200004 */  beqz  $at, .L00463268
/* 00463258 2442FFFF */   addiu $v0, $v0, -1
/* 0046325C 904EFFFF */  lbu   $t6, -1($v0)
/* 00463260 51C0FFFB */  beql  $t6, $zero, .L00463250
/* 00463264 2463FFFF */   addiu $v1, $v1, -1
.L00463268:
/* 00463268 8F848D54 */  lw     $a0, %got(highesteereg)($gp)
/* 0046326C 8F818D50 */  lw     $at, %got(highesterreg)($gp)
/* 00463270 8C840004 */  lw    $a0, 4($a0)
/* 00463274 AC230000 */  sw    $v1, ($at)
/* 00463278 24030023 */  li    $v1, 35
/* 0046327C 28810023 */  slti  $at, $a0, 0x23
/* 00463280 1020000C */  beqz  $at, .L004632B4
/* 00463284 00000000 */   nop   
/* 00463288 8EE20024 */  lw    $v0, 0x24($s7)
/* 0046328C 904F0022 */  lbu   $t7, 0x22($v0)
/* 00463290 15E00008 */  bnez  $t7, .L004632B4
/* 00463294 00000000 */   nop   
/* 00463298 2463FFFF */  addiu $v1, $v1, -1
.L0046329C:
/* 0046329C 0083082A */  slt   $at, $a0, $v1
/* 004632A0 10200004 */  beqz  $at, .L004632B4
/* 004632A4 0043C021 */   addu  $t8, $v0, $v1
/* 004632A8 930CFFFF */  lbu   $t4, -1($t8)
/* 004632AC 5180FFFB */  beql  $t4, $zero, .L0046329C
/* 004632B0 2463FFFF */   addiu $v1, $v1, -1
.L004632B4:
/* 004632B4 8F848D50 */  lw     $a0, %got(highesterreg)($gp)
/* 004632B8 8F818D54 */  lw     $at, %got(highesteereg)($gp)
/* 004632BC 8C840004 */  lw    $a0, 4($a0)
/* 004632C0 AC230004 */  sw    $v1, 4($at)
/* 004632C4 01401825 */  move  $v1, $t2
/* 004632C8 008A082A */  slt   $at, $a0, $t2
/* 004632CC 1020000D */  beqz  $at, .L00463304
/* 004632D0 00000000 */   nop   
/* 004632D4 8EF90024 */  lw    $t9, 0x24($s7)
/* 004632D8 032A1021 */  addu  $v0, $t9, $t2
/* 004632DC 904DFFFF */  lbu   $t5, -1($v0)
/* 004632E0 15A00008 */  bnez  $t5, .L00463304
/* 004632E4 00000000 */   nop   
/* 004632E8 2463FFFF */  addiu $v1, $v1, -1
.L004632EC:
/* 004632EC 0083082A */  slt   $at, $a0, $v1
/* 004632F0 10200004 */  beqz  $at, .L00463304
/* 004632F4 2442FFFF */   addiu $v0, $v0, -1
/* 004632F8 904EFFFF */  lbu   $t6, -1($v0)
/* 004632FC 51C0FFFB */  beql  $t6, $zero, .L004632EC
/* 00463300 2463FFFF */   addiu $v1, $v1, -1
.L00463304:
/* 00463304 8F818D50 */  lw     $at, %got(highesterreg)($gp)
/* 00463308 100000A9 */  b     .L004635B0
/* 0046330C AC230004 */   sw    $v1, 4($at)
.L00463310:
/* 00463310 8F8F8B6C */  lw     $t7, %got(curproc)($gp)
/* 00463314 8F828D34 */  lw     $v0, %got(firsterreg)($gp)
/* 00463318 8F8B8D34 */  lw     $t3, %got(firsterreg)($gp)
/* 0046331C 92F8000C */  lbu   $t8, 0xc($s7)
/* 00463320 8DEF0000 */  lw    $t7, ($t7)
/* 00463324 8C420000 */  lw    $v0, ($v0)
/* 00463328 8D6B0004 */  lw    $t3, 4($t3)
/* 0046332C 8DE40024 */  lw    $a0, 0x24($t7)
/* 00463330 24420001 */  addiu $v0, $v0, 1
/* 00463334 17000033 */  bnez  $t8, .L00463404
/* 00463338 256B0002 */   addiu $t3, $t3, 2
/* 0046333C 8F878D3C */  lw     $a3, %got(lasterreg)($gp)
/* 00463340 8F8A8D3C */  lw     $t2, %got(lasterreg)($gp)
/* 00463344 8CE70000 */  lw    $a3, ($a3)
/* 00463348 8D4A0004 */  lw    $t2, 4($t2)
/* 0046334C 00E2082A */  slt   $at, $a3, $v0
/* 00463350 14200014 */  bnez  $at, .L004633A4
/* 00463354 24E70001 */   addiu $a3, $a3, 1
/* 00463358 00E24023 */  subu  $t0, $a3, $v0
/* 0046335C 31080003 */  andi  $t0, $t0, 3
/* 00463360 11000008 */  beqz  $t0, .L00463384
/* 00463364 00401825 */   move  $v1, $v0
/* 00463368 01022821 */  addu  $a1, $t0, $v0
/* 0046336C 00821021 */  addu  $v0, $a0, $v0
.L00463370:
/* 00463370 24630001 */  addiu $v1, $v1, 1
/* 00463374 A053FFFF */  sb    $s3, -1($v0)
/* 00463378 14A3FFFD */  bne   $a1, $v1, .L00463370
/* 0046337C 24420001 */   addiu $v0, $v0, 1
/* 00463380 10670008 */  beq   $v1, $a3, .L004633A4
.L00463384:
/* 00463384 00831021 */   addu  $v0, $a0, $v1
.L00463388:
/* 00463388 24630004 */  addiu $v1, $v1, 4
/* 0046338C A053FFFF */  sb    $s3, -1($v0)
/* 00463390 A0530000 */  sb    $s3, ($v0)
/* 00463394 A0530001 */  sb    $s3, 1($v0)
/* 00463398 A0530002 */  sb    $s3, 2($v0)
/* 0046339C 1467FFFA */  bne   $v1, $a3, .L00463388
/* 004633A0 24420004 */   addiu $v0, $v0, 4
.L004633A4:
/* 004633A4 014B082A */  slt   $at, $t2, $t3
/* 004633A8 14200081 */  bnez  $at, .L004635B0
/* 004633AC 25470001 */   addiu $a3, $t2, 1
/* 004633B0 00EB4023 */  subu  $t0, $a3, $t3
/* 004633B4 31080003 */  andi  $t0, $t0, 3
/* 004633B8 11000008 */  beqz  $t0, .L004633DC
/* 004633BC 01601825 */   move  $v1, $t3
/* 004633C0 010B2821 */  addu  $a1, $t0, $t3
/* 004633C4 008B1021 */  addu  $v0, $a0, $t3
.L004633C8:
/* 004633C8 24630001 */  addiu $v1, $v1, 1
/* 004633CC A053FFFF */  sb    $s3, -1($v0)
/* 004633D0 14A3FFFD */  bne   $a1, $v1, .L004633C8
/* 004633D4 24420001 */   addiu $v0, $v0, 1
/* 004633D8 10670075 */  beq   $v1, $a3, .L004635B0
.L004633DC:
/* 004633DC 00831021 */   addu  $v0, $a0, $v1
.L004633E0:
/* 004633E0 24630004 */  addiu $v1, $v1, 4
/* 004633E4 A053FFFF */  sb    $s3, -1($v0)
/* 004633E8 A0530000 */  sb    $s3, ($v0)
/* 004633EC A0530001 */  sb    $s3, 1($v0)
/* 004633F0 A0530002 */  sb    $s3, 2($v0)
/* 004633F4 1467FFFA */  bne   $v1, $a3, .L004633E0
/* 004633F8 24420004 */   addiu $v0, $v0, 4
/* 004633FC 1000006D */  b     .L004635B4
/* 00463400 8FC20008 */   lw    $v0, 8($fp)
.L00463404:
/* 00463404 8F878D40 */  lw     $a3, %got(lasteereg)($gp)
/* 00463408 8F858D40 */  lw     $a1, %got(lasteereg)($gp)
/* 0046340C 00403025 */  move  $a2, $v0
/* 00463410 8CE70000 */  lw    $a3, ($a3)
/* 00463414 8CA50004 */  lw    $a1, 4($a1)
/* 00463418 00E2082A */  slt   $at, $a3, $v0
/* 0046341C 14200031 */  bnez  $at, .L004634E4
/* 00463420 24E70001 */   addiu $a3, $a3, 1
/* 00463424 00E24023 */  subu  $t0, $a3, $v0
/* 00463428 31080003 */  andi  $t0, $t0, 3
/* 0046342C 1100000E */  beqz  $t0, .L00463468
/* 00463430 00401825 */   move  $v1, $v0
/* 00463434 01061021 */  addu  $v0, $t0, $a2
/* 00463438 8EEC0024 */  lw    $t4, 0x24($s7)
.L0046343C:
/* 0046343C 00837021 */  addu  $t6, $a0, $v1
/* 00463440 0183C821 */  addu  $t9, $t4, $v1
/* 00463444 932DFFFF */  lbu   $t5, -1($t9)
/* 00463448 51A00003 */  beql  $t5, $zero, .L00463458
/* 0046344C 24630001 */   addiu $v1, $v1, 1
/* 00463450 A1D3FFFF */  sb    $s3, -1($t6)
/* 00463454 24630001 */  addiu $v1, $v1, 1
.L00463458:
/* 00463458 5443FFF8 */  bnel  $v0, $v1, .L0046343C
/* 0046345C 8EEC0024 */   lw    $t4, 0x24($s7)
/* 00463460 50670021 */  beql  $v1, $a3, .L004634E8
/* 00463464 00AB082A */   slt   $at, $a1, $t3
.L00463468:
/* 00463468 8EEF0024 */  lw    $t7, 0x24($s7)
.L0046346C:
/* 0046346C 00836021 */  addu  $t4, $a0, $v1
/* 00463470 00837021 */  addu  $t6, $a0, $v1
/* 00463474 01E31021 */  addu  $v0, $t7, $v1
/* 00463478 9058FFFF */  lbu   $t8, -1($v0)
/* 0046347C 53000005 */  beql  $t8, $zero, .L00463494
/* 00463480 904D0000 */   lbu   $t5, ($v0)
/* 00463484 A193FFFF */  sb    $s3, -1($t4)
/* 00463488 8EF90024 */  lw    $t9, 0x24($s7)
/* 0046348C 03231021 */  addu  $v0, $t9, $v1
/* 00463490 904D0000 */  lbu   $t5, ($v0)
.L00463494:
/* 00463494 00836021 */  addu  $t4, $a0, $v1
/* 00463498 51A00005 */  beql  $t5, $zero, .L004634B0
/* 0046349C 90580001 */   lbu   $t8, 1($v0)
/* 004634A0 A1D30000 */  sb    $s3, ($t6)
/* 004634A4 8EEF0024 */  lw    $t7, 0x24($s7)
/* 004634A8 01E31021 */  addu  $v0, $t7, $v1
/* 004634AC 90580001 */  lbu   $t8, 1($v0)
.L004634B0:
/* 004634B0 00837021 */  addu  $t6, $a0, $v1
/* 004634B4 53000005 */  beql  $t8, $zero, .L004634CC
/* 004634B8 904D0002 */   lbu   $t5, 2($v0)
/* 004634BC A1930001 */  sb    $s3, 1($t4)
/* 004634C0 8EF90024 */  lw    $t9, 0x24($s7)
/* 004634C4 03231021 */  addu  $v0, $t9, $v1
/* 004634C8 904D0002 */  lbu   $t5, 2($v0)
.L004634CC:
/* 004634CC 24630004 */  addiu $v1, $v1, 4
/* 004634D0 11A00002 */  beqz  $t5, .L004634DC
/* 004634D4 00000000 */   nop   
/* 004634D8 A1D30002 */  sb    $s3, 2($t6)
.L004634DC:
/* 004634DC 5467FFE3 */  bnel  $v1, $a3, .L0046346C
/* 004634E0 8EEF0024 */   lw    $t7, 0x24($s7)
.L004634E4:
/* 004634E4 00AB082A */  slt   $at, $a1, $t3
.L004634E8:
/* 004634E8 14200031 */  bnez  $at, .L004635B0
/* 004634EC 24A70001 */   addiu $a3, $a1, 1
/* 004634F0 00EB4023 */  subu  $t0, $a3, $t3
/* 004634F4 31080003 */  andi  $t0, $t0, 3
/* 004634F8 1100000E */  beqz  $t0, .L00463534
/* 004634FC 01601825 */   move  $v1, $t3
/* 00463500 010B1021 */  addu  $v0, $t0, $t3
/* 00463504 8EEF0024 */  lw    $t7, 0x24($s7)
.L00463508:
/* 00463508 01E3C021 */  addu  $t8, $t7, $v1
/* 0046350C 930CFFFF */  lbu   $t4, -1($t8)
/* 00463510 51800004 */  beql  $t4, $zero, .L00463524
/* 00463514 24630001 */   addiu $v1, $v1, 1
/* 00463518 0083C821 */  addu  $t9, $a0, $v1
/* 0046351C A333FFFF */  sb    $s3, -1($t9)
/* 00463520 24630001 */  addiu $v1, $v1, 1
.L00463524:
/* 00463524 5443FFF8 */  bnel  $v0, $v1, .L00463508
/* 00463528 8EEF0024 */   lw    $t7, 0x24($s7)
/* 0046352C 50670021 */  beql  $v1, $a3, .L004635B4
/* 00463530 8FC20008 */   lw    $v0, 8($fp)
.L00463534:
/* 00463534 8EED0024 */  lw    $t5, 0x24($s7)
.L00463538:
/* 00463538 00837821 */  addu  $t7, $a0, $v1
/* 0046353C 01A31021 */  addu  $v0, $t5, $v1
/* 00463540 904EFFFF */  lbu   $t6, -1($v0)
/* 00463544 51C00005 */  beql  $t6, $zero, .L0046355C
/* 00463548 904C0000 */   lbu   $t4, ($v0)
/* 0046354C A1F3FFFF */  sb    $s3, -1($t7)
/* 00463550 8EF80024 */  lw    $t8, 0x24($s7)
/* 00463554 03031021 */  addu  $v0, $t8, $v1
/* 00463558 904C0000 */  lbu   $t4, ($v0)
.L0046355C:
/* 0046355C 00837821 */  addu  $t7, $a0, $v1
/* 00463560 51800006 */  beql  $t4, $zero, .L0046357C
/* 00463564 904E0001 */   lbu   $t6, 1($v0)
/* 00463568 0083C821 */  addu  $t9, $a0, $v1
/* 0046356C A3330000 */  sb    $s3, ($t9)
/* 00463570 8EED0024 */  lw    $t5, 0x24($s7)
/* 00463574 01A31021 */  addu  $v0, $t5, $v1
/* 00463578 904E0001 */  lbu   $t6, 1($v0)
.L0046357C:
/* 0046357C 51C00005 */  beql  $t6, $zero, .L00463594
/* 00463580 904C0002 */   lbu   $t4, 2($v0)
/* 00463584 A1F30001 */  sb    $s3, 1($t7)
/* 00463588 8EF80024 */  lw    $t8, 0x24($s7)
/* 0046358C 03031021 */  addu  $v0, $t8, $v1
/* 00463590 904C0002 */  lbu   $t4, 2($v0)
.L00463594:
/* 00463594 51800004 */  beql  $t4, $zero, .L004635A8
/* 00463598 24630004 */   addiu $v1, $v1, 4
/* 0046359C 0083C821 */  addu  $t9, $a0, $v1
/* 004635A0 A3330002 */  sb    $s3, 2($t9)
/* 004635A4 24630004 */  addiu $v1, $v1, 4
.L004635A8:
/* 004635A8 5467FFE3 */  bnel  $v1, $a3, .L00463538
/* 004635AC 8EED0024 */   lw    $t5, 0x24($s7)
.L004635B0:
/* 004635B0 8FC20008 */  lw    $v0, 8($fp)
.L004635B4:
/* 004635B4 10400006 */  beqz  $v0, .L004635D0
/* 004635B8 00000000 */   nop   
/* 004635BC 8C4D0010 */  lw    $t5, 0x10($v0)
/* 004635C0 8FCE0010 */  lw    $t6, 0x10($fp)
/* 004635C4 01AE7826 */  xor   $t7, $t5, $t6
/* 004635C8 000F782B */  sltu  $t7, $zero, $t7
/* 004635CC A3AF0127 */  sb    $t7, 0x127($sp)
.L004635D0:
/* 004635D0 552000AE */  bnezl $t1, .L0046388C
/* 004635D4 8FBF0044 */   lw    $ra, 0x44($sp)
/* 004635D8 10400004 */  beqz  $v0, .L004635EC
/* 004635DC 0040F025 */   move  $fp, $v0
/* 004635E0 93B80127 */  lbu   $t8, 0x127($sp)
/* 004635E4 5300FB9D */  beql  $t8, $zero, .L0046245C
/* 004635E8 93C20000 */   lbu   $v0, ($fp)
.L004635EC:
/* 004635EC AFA00080 */  sw    $zero, 0x80($sp)
/* 004635F0 AFA00084 */  sw    $zero, 0x84($sp)
/* 004635F4 AFA00088 */  sw    $zero, 0x88($sp)
/* 004635F8 AFA0008C */  sw    $zero, 0x8c($sp)
/* 004635FC 27AC0080 */  addiu $t4, $sp, 0x80
/* 00463600 8D8D0000 */  lw    $t5, ($t4)
/* 00463604 8F848D2C */  lw     $a0, %got(old)($gp)
/* 00463608 00008025 */  move  $s0, $zero
/* 0046360C AFAD0004 */  sw    $t5, 4($sp)
/* 00463610 8D990004 */  lw    $t9, 4($t4)
/* 00463614 8FA50004 */  lw    $a1, 4($sp)
/* 00463618 00001025 */  move  $v0, $zero
/* 0046361C AFB90008 */  sw    $t9, 8($sp)
/* 00463620 8D870008 */  lw    $a3, 8($t4)
/* 00463624 8FA60008 */  lw    $a2, 8($sp)
/* 00463628 AFA7000C */  sw    $a3, 0xc($sp)
/* 0046362C 8D99000C */  lw    $t9, 0xc($t4)
/* 00463630 AFB90010 */  sw    $t9, 0x10($sp)
/* 00463634 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 00463638 0320F809 */  jalr  $t9
/* 0046363C 00000000 */   nop   
/* 00463640 AFA00070 */  sw    $zero, 0x70($sp)
/* 00463644 AFA00074 */  sw    $zero, 0x74($sp)
/* 00463648 AFA00078 */  sw    $zero, 0x78($sp)
/* 0046364C AFA0007C */  sw    $zero, 0x7c($sp)
/* 00463650 27AE0070 */  addiu $t6, $sp, 0x70
/* 00463654 8DD80000 */  lw    $t8, ($t6)
/* 00463658 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0046365C 8FA40134 */  lw    $a0, 0x134($sp)
/* 00463660 AFB80004 */  sw    $t8, 4($sp)
/* 00463664 8DCF0004 */  lw    $t7, 4($t6)
/* 00463668 8F998180 */  lw    $t9, %call16(initbv)($gp)
/* 0046366C 8FA50004 */  lw    $a1, 4($sp)
/* 00463670 AFAF0008 */  sw    $t7, 8($sp)
/* 00463674 8DC70008 */  lw    $a3, 8($t6)
/* 00463678 8FA60008 */  lw    $a2, 8($sp)
/* 0046367C 2484016C */  addiu $a0, $a0, 0x16c
/* 00463680 AFA7000C */  sw    $a3, 0xc($sp)
/* 00463684 8DCF000C */  lw    $t7, 0xc($t6)
/* 00463688 0320F809 */  jalr  $t9
/* 0046368C AFAF0010 */   sw    $t7, 0x10($sp)
/* 00463690 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463694 00009025 */  move  $s2, $zero
/* 00463698 8F8289E8 */  lw     $v0, %got(firstconstbit)($gp)
/* 0046369C 8C420000 */  lw    $v0, ($v0)
/* 004636A0 58400051 */  blezl $v0, .L004637E8
/* 004636A4 8FB90134 */   lw    $t9, 0x134($sp)
.L004636A8:
/* 004636A8 8FAC0134 */  lw    $t4, 0x134($sp)
/* 004636AC 0202082A */  slt   $at, $s0, $v0
/* 004636B0 8D990168 */  lw    $t9, 0x168($t4)
/* 004636B4 03326821 */  addu  $t5, $t9, $s2
/* 004636B8 8DAE000C */  lw    $t6, 0xc($t5)
/* 004636BC 8DAF0008 */  lw    $t7, 8($t5)
/* 004636C0 8DAC0004 */  lw    $t4, 4($t5)
/* 004636C4 01CFC025 */  or    $t8, $t6, $t7
/* 004636C8 8DAE0000 */  lw    $t6, ($t5)
/* 004636CC 030CC825 */  or    $t9, $t8, $t4
/* 004636D0 032E7825 */  or    $t7, $t9, $t6
/* 004636D4 15E00003 */  bnez  $t7, .L004636E4
/* 004636D8 00000000 */   nop   
/* 004636DC 1000003E */  b     .L004637D8
/* 004636E0 26100080 */   addiu $s0, $s0, 0x80
.L004636E4:
/* 004636E4 1020003C */  beqz  $at, .L004637D8
/* 004636E8 00008825 */   move  $s1, $zero
/* 004636EC 2E380080 */  sltiu $t8, $s1, 0x80
.L004636F0:
/* 004636F0 13000009 */  beqz  $t8, .L00463718
/* 004636F4 8FAC0134 */   lw    $t4, 0x134($sp)
/* 004636F8 8D8D0168 */  lw    $t5, 0x168($t4)
/* 004636FC 00117143 */  sra   $t6, $s1, 5
/* 00463700 000E7880 */  sll   $t7, $t6, 2
/* 00463704 01B2C821 */  addu  $t9, $t5, $s2
/* 00463708 032F6021 */  addu  $t4, $t9, $t7
/* 0046370C 8D8D0000 */  lw    $t5, ($t4)
/* 00463710 022D7004 */  sllv  $t6, $t5, $s1
/* 00463714 29D80000 */  slti  $t8, $t6, 0
.L00463718:
/* 00463718 13000026 */  beqz  $t8, .L004637B4
/* 0046371C 00000000 */   nop   
/* 00463720 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00463724 8FA50134 */  lw    $a1, 0x134($sp)
/* 00463728 02002025 */  move  $a0, $s0
/* 0046372C 0320F809 */  jalr  $t9
/* 00463730 24A50154 */   addiu $a1, $a1, 0x154
/* 00463734 1440000F */  bnez  $v0, .L00463774
/* 00463738 8FBC003C */   lw    $gp, 0x3c($sp)
/* 0046373C 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 00463740 02002025 */  move  $a0, $s0
/* 00463744 8F858CEC */  lw     $a1, %got(storeop)($gp)
/* 00463748 0320F809 */  jalr  $t9
/* 0046374C 00000000 */   nop   
/* 00463750 14400008 */  bnez  $v0, .L00463774
/* 00463754 8FBC003C */   lw    $gp, 0x3c($sp)
/* 00463758 8F99816C */  lw    $t9, %call16(bvectin)($gp)
/* 0046375C 02002025 */  move  $a0, $s0
/* 00463760 8F858CF0 */  lw     $a1, %got(trapop)($gp)
/* 00463764 0320F809 */  jalr  $t9
/* 00463768 00000000 */   nop   
/* 0046376C 10400011 */  beqz  $v0, .L004637B4
/* 00463770 8FBC003C */   lw    $gp, 0x3c($sp)
.L00463774:
/* 00463774 8F8F89EC */  lw     $t7, %got(bittab)($gp)
/* 00463778 8F99802C */  lw    $t9, %got(func_0045FBB4)($gp)
/* 0046377C 001060C0 */  sll   $t4, $s0, 3
/* 00463780 8DEF0000 */  lw    $t7, ($t7)
/* 00463784 2739FBB4 */  addiu $t9, %lo(func_0045FBB4) # addiu $t9, $t9, -0x44c
/* 00463788 02602825 */  move  $a1, $s3
/* 0046378C 01EC6821 */  addu  $t5, $t7, $t4
/* 00463790 8DA40000 */  lw    $a0, ($t5)
/* 00463794 02603025 */  move  $a2, $s3
/* 00463798 0320F809 */  jalr  $t9
/* 0046379C 27A20138 */   addiu $v0, $sp, 0x138
/* 004637A0 8FBC003C */  lw    $gp, 0x3c($sp)
/* 004637A4 8F8E8B20 */  lw     $t6, %got(outofmem)($gp)
/* 004637A8 91CE0000 */  lbu   $t6, ($t6)
/* 004637AC 55C00037 */  bnezl $t6, .L0046388C
/* 004637B0 8FBF0044 */   lw    $ra, 0x44($sp)
.L004637B4:
/* 004637B4 8F8289E8 */  lw     $v0, %got(firstconstbit)($gp)
/* 004637B8 26100001 */  addiu $s0, $s0, 1
/* 004637BC 26310001 */  addiu $s1, $s1, 1
/* 004637C0 8C420000 */  lw    $v0, ($v0)
/* 004637C4 0202082A */  slt   $at, $s0, $v0
/* 004637C8 10200003 */  beqz  $at, .L004637D8
/* 004637CC 24010080 */   li    $at, 128
/* 004637D0 5621FFC7 */  bnel  $s1, $at, .L004636F0
/* 004637D4 2E380080 */   sltiu $t8, $s1, 0x80
.L004637D8:
/* 004637D8 0202082A */  slt   $at, $s0, $v0
/* 004637DC 1420FFB2 */  bnez  $at, .L004636A8
/* 004637E0 26520010 */   addiu $s2, $s2, 0x10
/* 004637E4 8FB90134 */  lw    $t9, 0x134($sp)
.L004637E8:
/* 004637E8 8F38000C */  lw    $t8, 0xc($t9)
/* 004637EC 1700F8F9 */  bnez  $t8, .L00461BD4
/* 004637F0 AFB80134 */   sw    $t8, 0x134($sp)
/* 004637F4 AFB700F0 */  sw    $s7, 0xf0($sp)
.L004637F8:
/* 004637F8 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 004637FC 8F918D78 */  lw     $s1, %got(iscolored)($gp)
/* 00463800 0320F809 */  jalr  $t9
/* 00463804 02202025 */   move  $a0, $s1
/* 00463808 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0046380C 8F928D78 */  lw     $s2, %got(iscolored)($gp)
/* 00463810 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463814 26520008 */  addiu $s2, $s2, 8
/* 00463818 0320F809 */  jalr  $t9
/* 0046381C 02402025 */   move  $a0, $s2
/* 00463820 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463824 8F908D28 */  lw     $s0, %got(iscolored12)($gp)
/* 00463828 AE000000 */  sw    $zero, ($s0)
/* 0046382C AE000004 */  sw    $zero, 4($s0)
/* 00463830 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463834 02002025 */  move  $a0, $s0
/* 00463838 0320F809 */  jalr  $t9
/* 0046383C 00000000 */   nop   
/* 00463840 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463844 02002025 */  move  $a0, $s0
/* 00463848 02202825 */  move  $a1, $s1
/* 0046384C 8F998194 */  lw    $t9, %call16(bvectcopy)($gp)
/* 00463850 0320F809 */  jalr  $t9
/* 00463854 00000000 */   nop   
/* 00463858 8FBC003C */  lw    $gp, 0x3c($sp)
/* 0046385C 02002025 */  move  $a0, $s0
/* 00463860 02402825 */  move  $a1, $s2
/* 00463864 8F9981A4 */  lw    $t9, %call16(bvectunion)($gp)
/* 00463868 0320F809 */  jalr  $t9
/* 0046386C 00000000 */   nop   
/* 00463870 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463874 8F99818C */  lw    $t9, %call16(checkbvlist)($gp)
/* 00463878 8F848CD4 */  lw     $a0, %got(varbits)($gp)
/* 0046387C 0320F809 */  jalr  $t9
/* 00463880 00000000 */   nop   
/* 00463884 8FBC003C */  lw    $gp, 0x3c($sp)
/* 00463888 8FBF0044 */  lw    $ra, 0x44($sp)
.L0046388C:
/* 0046388C 8FB0001C */  lw    $s0, 0x1c($sp)
/* 00463890 8FB10020 */  lw    $s1, 0x20($sp)
/* 00463894 8FB20024 */  lw    $s2, 0x24($sp)
/* 00463898 8FB30028 */  lw    $s3, 0x28($sp)
/* 0046389C 8FB4002C */  lw    $s4, 0x2c($sp)
/* 004638A0 8FB50030 */  lw    $s5, 0x30($sp)
/* 004638A4 8FB60034 */  lw    $s6, 0x34($sp)
/* 004638A8 8FB70038 */  lw    $s7, 0x38($sp)
/* 004638AC 8FBE0040 */  lw    $fp, 0x40($sp)
/* 004638B0 03E00008 */  jr    $ra
/* 004638B4 27BD0138 */   addiu $sp, $sp, 0x138
    .type makelivranges, @function
    .size makelivranges, .-makelivranges
    .end makelivranges
)"");
