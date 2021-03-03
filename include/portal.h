#ifndef __PORTAL_H__
#define __PORTAL_H__

#include <types.h>

#define NUM_PORTALS 2

struct PortalState {
    Mat4 transform;
    Mat4 inverseTransform;
    Vec4f worldCoords[4];
    Vec4f normDevCoords[4];
    Vec2s screenCoords[4];
    s16 minX;
    s16 minY;
    s16 maxX;
    s16 maxY;
    s32 pairedPortal;
    u8 active;
    u8 visible;
};

extern Vec3f gPortalVerts[4];

extern struct PortalState gPortalStates[NUM_PORTALS];

extern s32 gPortalRenderPass;

#endif
