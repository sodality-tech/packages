// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
// Autogenerated from Pigeon (v20.0.1), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

@class FGMPlatformTileLayer;
@class FGMPlatformZoomRange;

/// Pigeon equivalent of GMSTileLayer properties.
@interface FGMPlatformTileLayer : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithVisible:(BOOL)visible
                         fadeIn:(BOOL)fadeIn
                        opacity:(double)opacity
                         zIndex:(NSInteger)zIndex;
@property(nonatomic, assign) BOOL visible;
@property(nonatomic, assign) BOOL fadeIn;
@property(nonatomic, assign) double opacity;
@property(nonatomic, assign) NSInteger zIndex;
@end

/// Possible outcomes of launching a URL.
@interface FGMPlatformZoomRange : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithMin:(double)min max:(double)max;
@property(nonatomic, assign) double min;
@property(nonatomic, assign) double max;
@end

/// The codec used by all APIs.
NSObject<FlutterMessageCodec> *FGMGetMessagesCodec(void);

/// Inspector API only intended for use in integration tests.
@protocol FGMMapsInspectorApi
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)areBuildingsEnabledWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)areRotateGesturesEnabledWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)areScrollGesturesEnabledWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)areTiltGesturesEnabledWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)areZoomGesturesEnabledWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)isCompassEnabledWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)isMyLocationButtonEnabledWithError:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable NSNumber *)isTrafficEnabledWithError:(FlutterError *_Nullable *_Nonnull)error;
- (nullable FGMPlatformTileLayer *)
    getInfoForTileOverlayWithIdentifier:(NSString *)tileOverlayId
                                  error:(FlutterError *_Nullable *_Nonnull)error;
/// @return `nil` only when `error != nil`.
- (nullable FGMPlatformZoomRange *)zoomRange:(FlutterError *_Nullable *_Nonnull)error;
@end

extern void SetUpFGMMapsInspectorApi(id<FlutterBinaryMessenger> binaryMessenger,
                                     NSObject<FGMMapsInspectorApi> *_Nullable api);

extern void SetUpFGMMapsInspectorApiWithSuffix(id<FlutterBinaryMessenger> binaryMessenger,
                                               NSObject<FGMMapsInspectorApi> *_Nullable api,
                                               NSString *messageChannelSuffix);

NS_ASSUME_NONNULL_END
