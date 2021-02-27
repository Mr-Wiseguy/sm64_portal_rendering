#ifndef __PORTAL_H__
#define __PORTAL_H__

#include <types.h>

#define NUM_PORTALS 2

struct PortalState {
    Mat4 transform;
    Mat4 inverseTransform;
    s32 pairedPortal;
    u8 active;
};

extern struct PortalState gPortalStates[NUM_PORTALS];

extern s32 gPortalRenderPass;

#endif
