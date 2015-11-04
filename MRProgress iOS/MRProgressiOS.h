//
//  MRProgress iOS.h
//  MRProgress iOS
//
//  Created by Martin Puza on 04.11.15.
//  Copyright © 2015 Marius Rackwitz. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for MRProgress iOS.
FOUNDATION_EXPORT double MRProgress_iOSVersionNumber;

//! Project version string for MRProgress iOS.
FOUNDATION_EXPORT const unsigned char MRProgress_iOSVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MRProgress_iOS/PublicHeader.h>




#ifdef COCOAPODS_POD_AVAILABLE_MRProgress

#ifdef COCOAPODS_POD_AVAILABLE_MRProgress_ActivityIndicator
#import "MRActivityIndicatorView.h"
#endif

#ifdef COCOAPODS_POD_AVAILABLE_MRProgress_Blur
#import "MRBlurView.h"
#import "UIImage+MRImageEffects.h"
#endif

#ifdef COCOAPODS_POD_AVAILABLE_MRProgress_Circular
#import "MRCircularProgressView.h"
#endif

#ifdef COCOAPODS_POD_AVAILABLE_MRProgress_Icons
#import "MRIconView.h"
#endif

#ifdef COCOAPODS_POD_AVAILABLE_MRProgress_MessageInterceptor
#import "MRMessageInterceptor.h"
#endif

#ifdef COCOAPODS_POD_AVAILABLE_MRProgress_NavigationBarProgress
#import "MRNavigationBarProgressView.h"
#endif

#ifdef COCOAPODS_POD_AVAILABLE_MRProgress_Overlay
#import "MRProgressOverlayView.h"
#endif

#ifdef COCOAPODS_POD_AVAILABLE_MRProgress_WeakProxy
#import "MRWeakProxy.h"
#endif

#else

#import "MRActivityIndicatorView.h"
#import "MRCircularProgressView.h"
#import "MRIconView.h"
#import "MRNavigationBarProgressView.h"
#import "MRProgressOverlayView.h"

#endif
