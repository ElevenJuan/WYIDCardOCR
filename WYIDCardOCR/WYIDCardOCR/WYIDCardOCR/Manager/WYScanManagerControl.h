//
//  WYScanManagerControl.h
//  WYIDCardOCR
//
//  Created by 汪年成 on 17/7/6.
//  Copyright © 2017年 之静之初. All rights reserved.
//

#import "WYScanManagerInitialize.h"

@interface WYScanManagerControl : WYScanManagerInitialize

- (void)startSession;

- (void)stopSession;

- (void)resetConfig;

- (void)resetParams;

- (void)doSomethingWhenWillAppear;

- (void)doSomethingWhenWillDisappear;


/** 识别身份证信息 */
- (void)parseIDFrontCardImageBuffer:(CVImageBufferRef)imageBuffer;

/** 识别身份证反面信息 */
- (void)parseIDDownCardImageBuffer:(CVImageBufferRef)imageBuffer;

/** 识别银行卡信息 */
- (void)parseBankImageBuffer:(CVImageBufferRef)imageBuffer;

/** 选择前置和后置 */
- (BOOL)switchCameras;

/** 闪关灯 */
- (void)setFlashMode:(AVCaptureFlashMode)flashMode;

/** 手电筒 */
- (void)setTorchMode:(AVCaptureTorchMode)torchMode;

/** 焦距 */
- (void)focusAtPoint:(CGPoint)point;

/** 曝光量 */
- (void)exposeAtPoint:(CGPoint)point;

/** 重置曝光 */
- (void)resetFocusAndExposureModes;



@end
