//
//	This file is automatically generated
//
case 0x09: /**** $09:add $i,bc ****/
	IZ() = add16(IZ(),BC());
	CYCLES(15);break;

case 0x19: /**** $19:add $i,de ****/
	IZ() = add16(IZ(),DE());
	CYCLES(15);break;

case 0x21: /**** $21:ld $i,$2 ****/
	IZ() = FETCH16();;
	CYCLES(14);break;

case 0x22: /**** $22:ld ($2),$i ****/
	temp16 = FETCH16();WRITE16(temp16,IZ());
	CYCLES(20);break;

case 0x23: /**** $23:inc $i ****/
	IZ() = IZ()+1;
	CYCLES(10);break;

case 0x29: /**** $29:add $i,ix ****/
	IZ() = add16(IZ(),IZ());
	CYCLES(15);break;

case 0x2a: /**** $2a:ld $i,($2) ****/
	temp16 = FETCH16();IZ() = READ16(temp16);
	CYCLES(20);break;

case 0x2b: /**** $2b:dec $i ****/
	IZ() = IZ()-1;
	CYCLES(10);break;

case 0x2c: /**** $2c:inc $il ****/
	temp8 = IZ(); INC8(temp8); IZ() = (IZ() & 0xFF00) | temp8;;
	CYCLES(8);break;

case 0x2d: /**** $2d:dec $il ****/
	temp8 = IZ(); DEC8(temp8); IZ() = (IZ() & 0xFF00) | temp8;;
	CYCLES(8);break;

case 0x34: /**** $34:inc ($i$o) ****/
	temp16 = IZDISP8(); temp8 = READ8(temp16); INC8(temp8); WRITE8(temp16,temp8);;
	CYCLES(23);break;

case 0x35: /**** $35:dec ($i$o) ****/
	temp16 = IZDISP8(); temp8 = READ8(temp16); DEC8(temp8); WRITE8(temp16,temp8);;
	CYCLES(23);break;

case 0x36: /**** $36:ld ($i$o),$1 ****/
	temp16 = IZDISP8(); WRITE8(temp16,FETCH8());;
	CYCLES(19);break;

case 0x39: /**** $39:add $i,sp ****/
	IZ() = add16(IZ(),SP());
	CYCLES(15);break;

case 0x46: /**** $46:ld b,($i$o) ****/
	B = READ8(IZDISP8());
	CYCLES(19);break;

case 0x4e: /**** $4e:ld c,($i$o) ****/
	C = READ8(IZDISP8());
	CYCLES(19);break;

case 0x56: /**** $56:ld d,($i$o) ****/
	D = READ8(IZDISP8());
	CYCLES(19);break;

case 0x5e: /**** $5e:ld e,($i$o) ****/
	E = READ8(IZDISP8());
	CYCLES(19);break;

case 0x66: /**** $66:ld h,($i$o) ****/
	H = READ8(IZDISP8());
	CYCLES(19);break;

case 0x6e: /**** $6e:ld l,($i$o) ****/
	L = READ8(IZDISP8());
	CYCLES(19);break;

case 0x70: /**** $70:ld ($i$o),b ****/
	WRITE8(IZDISP8(),B);
	CYCLES(19);break;

case 0x71: /**** $71:ld ($i$o),c ****/
	WRITE8(IZDISP8(),C);
	CYCLES(19);break;

case 0x72: /**** $72:ld ($i$o),d ****/
	WRITE8(IZDISP8(),D);
	CYCLES(19);break;

case 0x73: /**** $73:ld ($i$o),e ****/
	WRITE8(IZDISP8(),E);
	CYCLES(19);break;

case 0x74: /**** $74:ld ($i$o),h ****/
	WRITE8(IZDISP8(),H);
	CYCLES(19);break;

case 0x75: /**** $75:ld ($i$o),l ****/
	WRITE8(IZDISP8(),L);
	CYCLES(19);break;

case 0x77: /**** $77:ld ($i$o),a ****/
	WRITE8(IZDISP8(),A);
	CYCLES(19);break;

case 0x7e: /**** $7e:ld a,($i$o) ****/
	A = READ8(IZDISP8());
	CYCLES(19);break;

case 0x86: /**** $86:add ($i$o) ****/
	ALUADD(READ8(IZDISP8()));
	CYCLES(19);break;

case 0x8e: /**** $8e:adc ($i$o) ****/
	ALUADC(READ8(IZDISP8()));
	CYCLES(19);break;

case 0x96: /**** $96:sub ($i$o) ****/
	ALUSUB(READ8(IZDISP8()));
	CYCLES(19);break;

case 0x9e: /**** $9e:sbc ($i$o) ****/
	ALUSBC(READ8(IZDISP8()));
	CYCLES(19);break;

case 0xa6: /**** $a6:and ($i$o) ****/
	ALUAND(READ8(IZDISP8()));
	CYCLES(19);break;

case 0xae: /**** $ae:xor ($i$o) ****/
	ALUXOR(READ8(IZDISP8()));
	CYCLES(19);break;

case 0xb6: /**** $b6:or ($i$o) ****/
	ALUOR(READ8(IZDISP8()));
	CYCLES(19);break;

case 0xbe: /**** $be:cp ($i$o) ****/
	ALUCP(READ8(IZDISP8()));
	CYCLES(19);break;

case 0xcb: /**** $cb:[ddcb] ****/
	ExecuteDDCBGroup();;
	CYCLES(0);break;

case 0xe1: /**** $e1:pop $i ****/
	IZ() = POP();
	CYCLES(14);break;

case 0xe3: /**** $e3:ex (sp),$i ****/
	temp16 = READ16(SP);temp16a =IZ(); WRITE16(SP,temp16a);IZ() = temp16;;
	CYCLES(23);break;

case 0xe5: /**** $e5:push $i ****/
	PUSH(IZ());
	CYCLES(15);break;

case 0xe9: /**** $e9:jp ($i) ****/
	PC = IZ();
	CYCLES(8);break;

case 0xf9: /**** $f9:ld sp,$i ****/
	SETSP(IZ());
	CYCLES(10);break;


