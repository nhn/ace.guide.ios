// Generated by Apple Swift version 4.2.1 (swiftlang-1000.11.42 clang-1000.11.45.1)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="AceTM",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC5AceTM9AceCommon")
@interface AceCommon : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
+ (BOOL)getIsDebug SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=1.0.8,message="Ace 로그(info, warning)를 콘솔에 표시 여부, default: true");
+ (void)setIsDebugWithDebug:(BOOL)debug SWIFT_AVAILABILITY(ios,introduced=1.0.8,message="Ace 로그(info, warning)를 콘솔에 표시 설정, default: true");
@end


SWIFT_CLASS("_TtC5AceTM16AceConfiguration")
@interface AceConfiguration : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtCC5AceTM16AceConfiguration7Builder")
@interface Builder : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (Builder * _Nonnull)setServiceIdWithServiceId:(NSString * _Nullable)serviceId;
- (Builder * _Nonnull)setDebugModeWithDebug:(BOOL)debug;
- (Builder * _Nonnull)setCordovaPluginModeWithCordovaPluginMode:(BOOL)cordovaPluginMode;
- (Builder * _Nonnull)setEncryptWithKey:(NSString * _Nullable)key;
- (AceConfiguration * _Nonnull)build;
@end


SWIFT_CLASS("_TtC5AceTM9AceOption") SWIFT_AVAILABILITY(ios,introduced=8)
@interface AceOption : NSObject
- (nonnull instancetype)initWithCode:(NSString * _Nonnull)code name:(NSString * _Nonnull)name quantity:(NSInteger)quantity OBJC_DESIGNATED_INITIALIZER;
- (void)setCode:(NSString * _Nonnull)code;
- (NSString * _Nonnull)getCode SWIFT_WARN_UNUSED_RESULT;
- (void)setName:(NSString * _Nonnull)name;
- (NSString * _Nonnull)getName SWIFT_WARN_UNUSED_RESULT;
- (void)setQuantity:(NSInteger)quantity;
- (NSInteger)getQuantity SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)toQueryString SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC5AceTM10AceProduct") SWIFT_AVAILABILITY(ios,introduced=8)
@interface AceProduct : NSObject
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name code:(NSString * _Nonnull)code price:(double)price quantity:(NSInteger)quantity OBJC_DESIGNATED_INITIALIZER;
- (void)setCode:(NSString * _Nonnull)code;
- (NSString * _Nonnull)getCode SWIFT_WARN_UNUSED_RESULT;
- (void)setName:(NSString * _Nonnull)name;
- (NSString * _Nonnull)getName SWIFT_WARN_UNUSED_RESULT;
- (void)setPrice:(double)price;
- (id _Nonnull)getPrice SWIFT_WARN_UNUSED_RESULT;
- (void)setQuantity:(NSInteger)quantity;
- (NSInteger)getQuantity SWIFT_WARN_UNUSED_RESULT;
- (void)addOptionWithOption:(AceOption * _Nonnull)option;
- (NSArray<NSString *> * _Nonnull)toQueryString SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<NSString *> * _Nonnull)toProductListQueryString:(NSArray<AceProduct *> * _Nonnull)products SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC5AceTM5AceTM")
@interface AceTM : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull GD_MAN;)
+ (NSString * _Nonnull)GD_MAN SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull GD_WOMAN;)
+ (NSString * _Nonnull)GD_WOMAN SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull GD_UNKNOWN;)
+ (NSString * _Nonnull)GD_UNKNOWN SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
+ (BOOL)isCordovaPluginMode SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=1.1.1,message="CordovaPluginMode 설정 가져오기");
+ (void)setCordovaPluginModeWithIsCordovaPluginMode:(BOOL)isCordovaPluginMode SWIFT_AVAILABILITY(ios,introduced=1.1.1,message="CordovaPluginMode 설정");
+ (NSString * _Nullable)getServiceId SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=1.1.1,message="service id를 얻고자 할때 호출");
+ (void)setGsck:(NSString * _Nullable)gsck SWIFT_AVAILABILITY(ios,introduced=1.2.0,message="deeplink 수신했을 때 gsck 값을 설정");
+ (NSString * _Nullable)getGsck SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=1.2.0,message="deeplink 수신했을 때 설정한 gsck 값을 가져오기");
@end


@interface AceTM (SWIFT_EXTENSION(AceTM))
+ (void)pushWithData:(NSDictionary * _Nullable)data SWIFT_AVAILABILITY(ios,introduced=1.0.8,message="push 이벤트를 수집합니다.");
@end

@class UIResponder;

@interface AceTM (SWIFT_EXTENSION(AceTM))
+ (void)appOpenUrlWithResponder:(UIResponder * _Nullable)responder url:(NSURL * _Nullable)url SWIFT_AVAILABILITY(ios,unavailable,message="'appOpenUrl' has been renamed to 'appOpenUrl(url:)': 사용불가");
+ (void)appOpenUrlWithUrl:(NSURL * _Nullable)url SWIFT_AVAILABILITY(ios,introduced=1.3.0,message="딥링크, 유니버셜링크 이벤트를 수집합니다.");
@end


@interface AceTM (SWIFT_EXTENSION(AceTM))
+ (void)appDidFinishLaunchingWithResponder:(UIResponder * _Nullable)responder SWIFT_AVAILABILITY(ios,unavailable,message="'appDidFinishLaunching' has been renamed to 'appDidFinishLaunching(configuration:)': appDidFinishLaunching 안에서 호출");
+ (void)appDidFinishLaunchingWithConfiguration:(AceConfiguration * _Nullable)configuration SWIFT_AVAILABILITY(ios,introduced=1.0.8,message="appDidFinishLaunching 안에서 호출");
+ (void)viewDidLoadWithResponder:(UIResponder * _Nullable)responder autoPv:(BOOL)autoPv SWIFT_AVAILABILITY(ios,unavailable,message="'viewDidLoad' has been renamed to 'viewDidLoad(autoPv:)': 사용불가");
+ (void)viewDidLoadWithAutoPv:(BOOL)autoPv SWIFT_AVAILABILITY(ios,introduced=1.3.0,message="viewDidLoad 이벤트를 수집합니다.");
@end


@interface AceTM (SWIFT_EXTENSION(AceTM))
+ (void)pageErrWithResponder:(UIResponder * _Nullable)responder SWIFT_AVAILABILITY(ios,unavailable,message="'pageErr' has been renamed to 'pageErr()': 사용불가");
+ (void)pageErr SWIFT_AVAILABILITY(ios,introduced=1.3.0,message="페이지 오류 이벤트를 전송합니다.");
+ (void)pageErrWithPage:(NSString * _Nullable)page SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="페이지 오류 이벤트를 전송합니다.");
+ (void)codeErrWithErrCode:(NSInteger)errCode reason:(NSString * _Nullable)reason SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="코드 에러 이벤트를 전송합니다.");
+ (void)sdkErrWithFunctionName:(NSString * _Nullable)functionName reason:(NSString * _Nullable)reason SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="SDK내부에 에러가 발생했을때 에러정보 전송합니다.");
+ (void)sdkErrWithMsg:(NSString * _Nullable)msg SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="SDK내부에 에러가 발생했을때 에러정보 전송합니다.");
@end


@interface AceTM (SWIFT_EXTENSION(AceTM))
+ (void)pvWithResponder:(UIResponder * _Nullable)responder SWIFT_AVAILABILITY(ios,unavailable,message="'pv' has been renamed to 'pv()': 사용불가");
+ (void)pv SWIFT_AVAILABILITY(ios,introduced=1.3.0,message="페이지 뷰를 수집합니다.");
+ (void)pvWithPage:(NSString * _Nullable)page SWIFT_AVAILABILITY(ios,introduced=1.3.0,message="페이지 뷰를 수집합니다.");
+ (void)pvWithParameters:(NSString * _Nullable)parameters SWIFT_AVAILABILITY(ios,introduced=1.1.1,message="완성형 파라미터를 수집 합니다.");
+ (NSString * _Nonnull)getPVParameters:(NSString * _Nullable)url isNeedRemoveFirstChar:(BOOL)isNeedRemoveFirstChar SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=1.1.1,message="PV 전송에 필요한 현 SDK 파라미터값을 URL 포맷을 받음");
@end


@interface AceTM (SWIFT_EXTENSION(AceTM))
+ (void)loginWithResponder:(UIResponder * _Nullable)responder userId:(NSString * _Nonnull)userId userAge:(NSInteger)userAge userGender:(NSString * _Nonnull)userGender groupDictionary:(NSDictionary<NSString *, NSNumber *> * _Nullable)groupDictionary SWIFT_AVAILABILITY(ios,unavailable,message="'login' has been renamed to 'login(userId:userAge:userGender:groupDictionary:)': 사용불가");
+ (void)loginWithUserId:(NSString * _Nonnull)userId userAge:(NSInteger)userAge userGender:(NSString * _Nonnull)userGender groupDictionary:(NSDictionary<NSString *, NSNumber *> * _Nullable)groupDictionary SWIFT_AVAILABILITY(ios,introduced=1.3.0,message="로그인 이벤트를 수집합니다.");
+ (void)loginWithResponder:(UIResponder * _Nullable)responder userId:(NSString * _Nonnull)userId userAge:(NSInteger)userAge userGender:(NSString * _Nonnull)userGender SWIFT_AVAILABILITY(ios,unavailable,message="'login' has been renamed to 'login(userId:userAge:userGender:)': 사용불가");
+ (void)loginWithUserId:(NSString * _Nonnull)userId userAge:(NSInteger)userAge userGender:(NSString * _Nonnull)userGender SWIFT_AVAILABILITY(ios,introduced=1.3.0,message="로그인 이벤트를 수집합니다.");
+ (void)loginWithPage:(NSString * _Nullable)page userId:(NSString * _Nonnull)userId userAge:(NSInteger)userAge userGender:(NSString * _Nonnull)userGender groupDictionary:(NSDictionary<NSString *, NSNumber *> * _Nullable)groupDictionary SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="로그인 이벤트를 수집합니다.");
+ (void)loginWithPage:(NSString * _Nullable)page userId:(NSString * _Nonnull)userId userAge:(NSInteger)userAge userGender:(NSString * _Nonnull)userGender SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="로그인 이벤트를 수집합니다.");
+ (void)joinWithResponder:(UIResponder * _Nullable)responder userId:(NSString * _Nonnull)userId userValue:(NSInteger)userValue SWIFT_AVAILABILITY(ios,unavailable,message="'join' has been renamed to 'join(userId:userValue:)': 사용불가");
+ (void)joinWithUserId:(NSString * _Nonnull)userId userValue:(NSInteger)userValue SWIFT_AVAILABILITY(ios,introduced=1.3.0,message="회원가입 이벤트를 수집합니다.");
+ (void)deactivateWithResponder:(UIResponder * _Nullable)responder userId:(NSString * _Nonnull)userId SWIFT_AVAILABILITY(ios,unavailable,message="'deactivate' has been renamed to 'deactivate(userId:)': 사용불가");
+ (void)deactivateWithUserId:(NSString * _Nonnull)userId SWIFT_AVAILABILITY(ios,introduced=1.3.0,message="회원탈퇴 이벤트를 수집합니다.");
@end

@class UIWebView;
@class UIView;
@class WKWebView;
@protocol WKScriptMessageHandler;
@class WKUserContentController;
@class WKScriptMessage;

@interface AceTM (SWIFT_EXTENSION(AceTM))
+ (BOOL)uiWebViewWithWebView:(UIWebView * _Nullable)webView shouldStartLoadWith:(NSURLRequest * _Nullable)request navigationType:(enum UIWebViewNavigationType)navigationType SWIFT_AVAILABILITY(ios,introduced=1.2.0,message="UIWebview 사용시 Ace 웹스크립트와 통신할때 사용");
+ (void)injectServiceIdWithHybridFlagAtWebView:(UIView * _Nullable)webView isCordovaPlugin:(BOOL)isCordovaPlugin SWIFT_AVAILABILITY(ios,introduced=1.1.1,message="webview에 Ace script에 초기값 설정을 위해 사용하세요");
+ (void)showJSLogWithWebView:(UIWebView * _Nullable)webView SWIFT_AVAILABILITY(ios,introduced=1.1.1,message="UIWebview에서 console.log 출력 결과를 xcode.console에 표기 할때 사용");
+ (void)showJSLogWithWebView:(WKWebView * _Nullable)webView scriptMessageHandler:(id <WKScriptMessageHandler> _Nullable)scriptMessageHandler wkUserContentController:(WKUserContentController * _Nullable)wkUserContentController SWIFT_AVAILABILITY(ios,introduced=1.1.1,message="WKWebview에서 console.log 출력 결과를 xcode.console에 표기 할때 사용");
+ (void)loadView:(id <WKScriptMessageHandler> _Nullable)scriptMessageHandler wkUserContentController:(WKUserContentController * _Nullable)wkUserContentController SWIFT_AVAILABILITY(ios,introduced=1.0.8,message="WKWebview를 사용할때 javascript와 통신하기 위해 사용");
+ (void)userContentController:(WKUserContentController * _Nullable)userContentController didReceive:(WKScriptMessage * _Nullable)message SWIFT_AVAILABILITY(ios,introduced=1.2.0,message="WKWebview 사용시 Ace 웹스크립트와 통신할때 사용");
+ (void)uiWebViewDidStartLoadWithWebView:(UIView * _Nullable)webView SWIFT_AVAILABILITY(ios,deprecated=1.2.7,message="webViewDidStartLoad을 사용하세요");
+ (void)wkWebViewDidStartLoadWithWebView:(UIView * _Nullable)webView SWIFT_AVAILABILITY(ios,deprecated=1.2.7,message="webViewDidStartLoad을 사용하세요");
+ (void)webViewDidStartLoadWithWebView:(UIView * _Nullable)webView SWIFT_AVAILABILITY(ios,introduced=1.2.0,message="Webview에서 load가 시작된 경우 사용");
+ (void)uiWebViewDidFinishLoadWithWebView:(UIView * _Nullable)webView SWIFT_AVAILABILITY(ios,deprecated=1.2.7,message="webViewDidFinishLoad을 사용하세요");
+ (void)wkWebViewDidFinishLoadWithWebView:(UIView * _Nullable)webView SWIFT_AVAILABILITY(ios,deprecated=1.2.7,message="webViewDidFinishLoad을 사용하세요");
+ (void)webViewDidFinishLoadWithWebView:(UIView * _Nullable)webView SWIFT_AVAILABILITY(ios,introduced=1.2.7,message="Webview에서 load가 끝난 경우 사용");
@end


@interface AceTM (SWIFT_EXTENSION(AceTM))
+ (void)payWithPayName:(NSString * _Nullable)payName product:(AceProduct * _Nullable)product SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="구매 이벤트를 수집합니다.");
+ (void)payWithPayName:(NSString * _Nullable)payName products:(NSArray<AceProduct *> * _Nullable)products SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="구매 이벤트들을 수집합니다.");
+ (void)buyNowWithProduct:(AceProduct * _Nullable)product SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="즉시 구매 이벤트를 수집합니다.");
+ (void)wishListWithProduct:(AceProduct * _Nullable)product SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="위시(좋아요) 이벤트를 수집합니다.");
+ (void)addCartWithProduct:(AceProduct * _Nullable)product SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="장바구니 담기 이벤트를 수집합니다.");
+ (void)buyListWithPaymentMethod:(NSString * _Nullable)paymentMethod orderNumber:(NSString * _Nullable)orderNumber totalPrice:(id _Nullable)totalPrice product:(AceProduct * _Nullable)product SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="구매완료 이벤트를 수집합니다.");
+ (void)buyListWithPaymentMethod:(NSString * _Nullable)paymentMethod orderNumber:(NSString * _Nullable)orderNumber totalPrice:(id _Nullable)totalPrice products:(NSArray<AceProduct *> * _Nullable)products SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="구매완료 이벤트들을 수집합니다.");
+ (void)detailViewWithResponder:(UIResponder * _Nullable)responder productNumber:(NSString * _Nullable)productNumber productName:(NSString * _Nullable)productName productPrice:(double)productPrice productCategory:(NSString * _Nullable)productCategory productImageUrl:(NSString * _Nullable)productImageUrl SWIFT_AVAILABILITY(ios,unavailable,message="'detailView' has been renamed to 'detailView(responder:productNumber:productName:productPrice:productCategory:productImageUrl:)': 사용불가");
+ (void)detailViewWithProductNumber:(NSString * _Nullable)productNumber productName:(NSString * _Nullable)productName productPrice:(double)productPrice productCategory:(NSString * _Nullable)productCategory productImageUrl:(NSString * _Nullable)productImageUrl SWIFT_AVAILABILITY(ios,introduced=1.3.0,message="상품 상세보기 이벤트를 수집합니다.");
+ (void)detailViewWithPage:(NSString * _Nullable)page productNumber:(NSString * _Nullable)productNumber productName:(NSString * _Nullable)productName productPrice:(double)productPrice productCategory:(NSString * _Nullable)productCategory productImageUrl:(NSString * _Nullable)productImageUrl SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="상품 상세보기 이벤트를 수집합니다.");
+ (void)hrefWithHref:(NSString * _Nullable)href SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="하이퍼링크 이벤트를 전송합니다.");
+ (void)telWithPhoneNumber:(NSString * _Nullable)phoneNumber SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="전화 이벤트를 전송합니다.");
+ (void)customerClickWithClickName:(NSString * _Nullable)clickName SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="클릭 이벤트를 전송합니다.");
+ (void)snsWithProductNumber:(NSString * _Nullable)productNumber sns:(NSString * _Nullable)sns SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="SNS 이벤트를 전송합니다.");
+ (void)bannerClickWithPromotionCode:(NSInteger)promotionCode bannerCode:(NSInteger)bannerCode SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="배너 클릭 이벤트를 전송합니다.");
+ (void)bannerViewWithPromotionCode:(NSInteger)promotionCode bannerCode:(NSInteger)bannerCode SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="배너 뷰 이벤트를 전송합니다.");
+ (void)reviewWithProductNumber:(NSString * _Nullable)productNumber reviewContents:(NSString * _Nullable)reviewContents score:(NSInteger)score SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="리뷰 이벤트를 전송합니다.");
+ (void)innerSearchWithResponder:(UIResponder * _Nullable)responder keyword:(NSString * _Nullable)keyword SWIFT_AVAILABILITY(ios,unavailable,message="'innerSearch' has been renamed to 'innerSearch(keyword:)': 사용불가");
+ (void)innerSearchWithKeyword:(NSString * _Nullable)keyword SWIFT_AVAILABILITY(ios,introduced=1.3.0,message="내부 검색 이벤트를 전송합니다.");
+ (void)innerSearchWithPage:(NSString * _Nullable)page keyword:(NSString * _Nullable)keyword SWIFT_AVAILABILITY(ios,introduced=1.0.0,message="내부 검색 이벤트를 전송합니다.");
@end









#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
