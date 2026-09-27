#pragma once

#include <nn/gfx/gfx_Types.h>
#include <nn/types.h>

#include <_nn/g3d/ResUserData.h>

/*
* Direct copy fron nnheaders for the purpose of 
* adding methods without forking the entire repository
*/

namespace nn::g3d {
    class ResMaterial;

    typedef void* TextureRef;

    class ResModel {
    public:
        u64 BindTexture(nn::g3d::TextureRef (*)(char const*, void*), void*);
        void ForceBindTexture(nn::g3d::TextureRef const&, char const*);
        void ReleaseTexture();
        void Setup(gfx::Device*);
        void Cleanup(gfx::Device*);
        void Reset();
        void Reset(u32);
        nn::g3d::ResMaterial* FindMaterial(char const* materialName) const;
        nn::g3d::ResUserData* FindUserData(const char* name) const;

        u8 _0[0x70];
    };
}
