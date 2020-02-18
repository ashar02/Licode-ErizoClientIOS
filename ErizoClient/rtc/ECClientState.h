//
//  ErizoClientIOS
//
//  Copyright (c) 2015 Alvaro Gil (zevarito@gmail.com).
//
//  MIT License, see LICENSE file for details.
//

/**
 @enum ECClientState
 */
typedef NS_ENUM(NSInteger, ECClientState) {
    /// Disconnected
    ECClientStateDisconnected,
    /// IceFailed
    ECClientStateIceFailed,
    /// Ready to signaling
    ECClientStateReady,
    /// Signaling proccess
    ECClientStateConnecting,
    /// Signlaning done
    ECClientStateConnected,
};
