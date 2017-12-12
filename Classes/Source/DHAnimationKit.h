//
//  DHAnimationKit.h
//  DHAnimationKit
//
//  Created by 黄鸿森 on 2017/12/12.
//  Copyright © 2017年 Huang Hongsen. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for DHAnimationKit.
FOUNDATION_EXPORT double DHAnimationKitVersionNumber;

//! Project version string for DHAnimationKit.
FOUNDATION_EXPORT const unsigned char DHAnimationKitVersionString[];

//Object Animation Renderers
#import "DHObjectAnimationRenderer.h"
#import "DHBlindsAnimationRenderer.h"
#import "DHBlurAnimationRenderer.h"
#import "DHConfettiAnimationRenderer.h"
#import "DHDissolveAnimationRenderer.h"
#import "DHDropAnimationRenderer.h"
#import "DHFireworkAnimationRenderer.h"
#import "DHFlameAnimationRenderer.h"
#import "DHPivotAnimationRenderer.h"
#import "DHPopAnimationRenderer.h"
#import "DHRotationAnimationRenderer.h"
#import "DHScaleAnimationRenderer.h"
#import "DHScaleBigAnimationRenderer.h"
#import "DHShimmerAnimationRenderer.h"
#import "DHSkidAnimationRenderer.h"
#import "DHSparkleAnimationRenderer.h"
#import "DHSpinAnimationRenderer.h"
#import "DHTwirlAnimationRenderer.h"
#import "DHDissolveAnimationRenderer.h"
#import "DHSkidAnimationRenderer.h"
#import "DHFlameAnimationRenderer.h"
#import "DHAnvilAnimationRenderer.h"
#import "DHFaceExplosionAnimationRenderer.h"
#import "DHCompressAnimationRenderer.h"
#import "DHBackgroundRenderer.h"
#import "DHTextDanceAnimationRenderer.h"
#import "DHTextEffectRenderer.h"
#import "DHTextSquishAnimationRenderer.h"
#import "DHTextFlyInAnimationRenderer.h"
#import "DHPointExplosionAnimationRenderer.h"
#import "DHTextOrbitalAnimationRenderer.h"
#import "DHWipeAnimationRenderer.h"
#import "DHBlowAnimationRenderer.h"
#import "DHDiffuseAnimationRenderer.h"
#import "DHTextFadeAnimationRenderer.h"
#import "DHFoldAnimationRenderer.h"

//Transition Renderers
#import "DHTransitionRenderer.h"
#import "DHClothLineTransitionRenderer.h"
#import "DHConfettiTransitionRenderer.h"
#import "DHCoverTransitionRenderer.h"
#import "DHCubeTransitionRenderer.h"
#import "DHDoorWayTransitionRenderer.h"
#import "DHDropTransitionRenderer.h"
#import "DHFlipTransitionRenderer.h"
#import "DHFlopTransitionRenderer.h"
#import "DHGridTransitionRenderer.h"
#import "DHMosaicTransitionRenderer.h"
#import "DHPageCurlTransitionRenderer.h"
#import "DHPushTransitionRenderer.h"
#import "DHReflectionTransitionRenderer.h"
#import "DHResolvingDoorTransitionRenderer.h"
#import "DHRevealTransitionRenderer.h"
#import "DHRippleTransitionRenderer.h"
#import "DHSpinDismissTransitionRenderer.h"
#import "DHSwitchTransitionRenderer.h"
#import "DHTwistTransitionRenderer.h"
#import "DHPageCurlTransitionRenderer.h"
#import "DHShredderAnimationRenderer.h"

//Helpers and Infrastructure classes
#import "DHObjectAnimationSettings.h"
#import "DHTransitionSettings.h"
#import "DHTextAnimationSettings.h"
#import "DHConstants.h"
#import "DHParticleEffect.h"
#import "DHFaceExplosionEffect.h"
#import "DHCameraShakeEffect.h"
#import "DHDustEffect.h"
#import "DHSceneMesh.h"
#import "OpenGLHelper.h"
#import "TextureHelper.h"
#import "DHTimingFunctionHelper.h"
#import "NSBKeyframeAnimationFunctions.h"
#import "DHPointExplosionEffect.h"
#import "DHFlameEffect.h"
#import "DHTextFadeMesh.h"

//Meshes
#import "DHShimmerBackgroundMesh.h"
#import "DHConfettiSourceMesh.h"
#import "DHCubeDestinationMesh.h"
#import "DHCubeMesh.h"
#import "DHCubeSourceMesh.h"
#import "DHMosaicBackMesh.h"
#import "DHMosaicMesh.h"
#import "DHTwistMesh.h"
#import "DHDustEffect.h"
#import "DHFireworkEffect.h"
#import "DHShimmerParticleEffect.h"
#import "DHShiningStarEffect.h"
#import "DHSparkleEffect.h"
#import "DHConsecutiveTextureSceneMesh.h"
#import "DHSplitTextureSceneMesh.h"
#import "DHTextOrbitalMesh.h"
#import "DHTextSquishMesh.h"
#import "DHTextFlyInMesh.h"
#import "DHTextSceneMesh.h"
#import "DHTextDanceMesh.h"
#import "DHBlowSceneMesh.h"
#import "DHShredderMesh.h"
#import "DHFoldSceneMesh.h"
#import "DHDiffuseSceneMesh.h"
#import "DHShredderMesh.h"
#import "DHShredderConfettiMesh.h"
#import "DHShredderAnimationSceneMesh.h"

#import "DHSceneMeshFactory.h"
//! Project version number for DHAnimationFramework.
FOUNDATION_EXPORT double DHAnimationFrameworkVersionNumber;

//! Project version string for DHAnimationFramework.
FOUNDATION_EXPORT const unsigned char DHAnimationFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <DHAnimationFramework/PublicHeader.h>


