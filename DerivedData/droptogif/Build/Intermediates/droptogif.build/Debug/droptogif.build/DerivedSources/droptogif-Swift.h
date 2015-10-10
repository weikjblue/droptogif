// Generated by Apple Swift version 2.0 (swiftlang-700.0.59 clang-700.0.72)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import AppKit;
@import Foundation;
@import Dispatch;
@import SpriteKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class ViewController;
@class NSNotification;
@class NSApplication;
@class NSWindow;

SWIFT_CLASS("_TtC9droptogif11AppDelegate")
@interface AppDelegate : NSObject <NSApplicationDelegate>
@property (nonatomic, weak) IBOutlet NSWindow * __null_unspecified window;
@property (nonatomic) ViewController * __null_unspecified vc;
- (void)applicationDidFinishLaunching:(NSNotification * __nonnull)aNotification;
- (void)startMonitoringFolderInPrefs;
- (void)applicationWillTerminate:(NSNotification * __nonnull)aNotification;
- (void)application:(NSApplication * __nonnull)sender openFiles:(NSArray<NSString *> * __nonnull)filenames;
- (void)handleNewFile:(NSString * __nonnull)filePath;
- (void)convertFiles:(NSArray<NSString *> * __nonnull)filenames;
- (NSString * __nonnull)getFps;
- (void)showNotification:(NSString * __nonnull)title text:(NSString * __nonnull)text;
- (void)openAndSelectFile:(NSString * __nonnull)filename;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@protocol NSDraggingInfo;
@class NSPasteboard;
@class NSCoder;

SWIFT_CLASS("_TtC9droptogif16DragReceiverView")
@interface DragReceiverView : NSImageView
- (NSDragOperation)draggingEntered:(id <NSDraggingInfo> __nonnull)sender;
- (BOOL)performDragOperation:(id <NSDraggingInfo> __nonnull)sender;
- (NSDragOperation)draggingUpdated:(id <NSDraggingInfo> __nonnull)sender;
- (void)draggingExited:(id <NSDraggingInfo> __nullable)sender;
- (void)concludeDragOperation:(id <NSDraggingInfo> __nullable)sender;
- (NSString * __nonnull)getPathFromBoard:(NSPasteboard * __nonnull)board;
- (nonnull instancetype)initWithFrame:(NSRect)frameRect OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)setup;
- (void)drawRect:(NSRect)dirtyRect;
@end


SWIFT_CLASS("_TtC9droptogif13FolderWatcher")
@interface FolderWatcher : NSObject
@property (nonatomic) dispatch_queue_t __nonnull queue;
+ (FolderWatcher * __nonnull)use;
- (void)stopAll;
- (void)startMonitoringFolder:(NSString * __nonnull)givenFolder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SKFieldNode;
@class SKAction;
@class SKView;

SWIFT_CLASS("_TtC9droptogif11LoaderScene")
@interface LoaderScene : SKScene
@property (nonatomic, copy) NSString * __nonnull REPEAT_ACTION;
@property (nonatomic) SKFieldNode * __null_unspecified radial;
- (SKAction * __nonnull)getAddSliceAction;
- (void)addSliceAtLocation:(CGPoint)loc;
- (void)startLoading;
- (void)showDragInvite;
- (void)hideDragInvite;
- (void)prepareForDrop;
- (void)updateDragPosition:(CGPoint)location;
- (void)stopLoading;
- (void)setInviteGravity;
- (void)setStandardGravity;
- (void)didMoveToView:(SKView * __nonnull)view;
- (nonnull instancetype)initWithSize:(CGSize)size OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSEvent;

SWIFT_CLASS("_TtC9droptogif21MJWatchFolderTextView")
@interface MJWatchFolderTextView : NSTextView
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)drawRect:(NSRect)dirtyRect;
- (void)mouseDown:(NSEvent * __nonnull)theEvent;
@end

@class NSTask;
@class NSString;

SWIFT_CLASS("_TtC9droptogif11ShellTasker")
@interface ShellTasker : NSObject
@property (nonatomic, copy) NSString * __null_unspecified scriptFile;
@property (nonatomic) NSTask * __null_unspecified task;
- (nonnull instancetype)initWithScriptFile:(NSString * __nonnull)scriptFile OBJC_DESIGNATED_INITIALIZER;
- (void)stop;
- (void)runWithArguments:(NSArray<NSString *> * __nonnull)args complete:(void (^ __nonnull)(NSString * __nonnull))complete;
@end


SWIFT_CLASS("_TtC9droptogif4Util")
@interface Util : NSObject
+ (Util * __nonnull)use;
- (void)savePref:(NSString * __nonnull)key value:(NSString * __nonnull)value;
- (id __nullable)getPref:(NSString * __nonnull)key;
- (NSString * __nullable)getStringPref:(NSString * __nonnull)key;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSButton;
@class NSView;
@class NSBundle;

SWIFT_CLASS("_TtC9droptogif14ViewController")
@interface ViewController : NSViewController <NSOpenSavePanelDelegate, NSTextViewDelegate, NSTextDelegate>
@property (nonatomic, weak) IBOutlet NSTextView * __null_unspecified watchFolderLabel;
@property (nonatomic, weak) IBOutlet NSButton * __null_unspecified settingsButton;
@property (nonatomic, weak) IBOutlet SKView * __null_unspecified loaderSKView;
@property (nonatomic) LoaderScene * __null_unspecified scene;
@property (nonatomic, weak) IBOutlet DragReceiverView * __null_unspecified circleDropView;
@property (nonatomic) AppDelegate * __null_unspecified appDelegate;
@property (nonatomic, weak) IBOutlet NSView * __null_unspecified waitForDrop;
- (void)viewDidLoad;
- (void)startLoader;
- (void)stopLoader;
- (void)animateDropInvitationOut;
- (void)animateDropInvitationIn;
@property (nonatomic) id __nullable representedObject;
- (IBAction)settingsClicked:(id __nonnull)sender;
- (void)toggleWindowSize;
- (IBAction)watchFolderPressed:(id __nonnull)sender;
- (void)folderTextViewClicked;
- (void)selectFolder;
- (void)circleDropDragExited;
- (void)circleDropDragEntered;
- (void)circleDropDragPerformed:(NSString * __nonnull)filePath;
- (void)circleDropUpdated:(NSPoint)location;
- (nullable instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
