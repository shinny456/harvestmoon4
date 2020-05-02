typedef char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct BACHELORETTE_RAM_DATA {
    u32 unknown0; //0-3
    u32 unknown1; //4-7
    u32 unknown2; //8-11
    u32 unknown3; //12-15
    u32 unknown4; //16-19 
    u16 Affection; //20-21
    u8 unknown5; //22
    u8 unknown6; //23
};

//returns a bachelorette's Affection
u16 sub_809E498(struct BACHELORETTE_RAM_DATA *t){
    return t->Affection;
}

//Not sure what these functions do, my guess is related to flags
u32 sub_809E49C(struct BACHELORETTE_RAM_DATA *t){
    return ((u32)t->unknown5 << 0x1d) >> 0x1d;
}

u32 sub_809E4A4(struct BACHELORETTE_RAM_DATA *t){
    return ((u32)t->unknown6 << 0x1c) >> 0x1d;
}

u32 sub_809E4AC(u32 r0){
    return ((u32)*(u16 *)(r0 + 0x16) << 0x17) >> 0x1d;
}

u32 sub_809E4B4(struct BACHELORETTE_RAM_DATA *t){
    return ((u32)t->unknown6 << 0x1c) >> 0x1d;
}

u32 sub_809E4BC(struct BACHELORETTE_RAM_DATA *t){
    return ((u32)t->unknown6 << 0x19) >> 0x1d;
}