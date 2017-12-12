#
#  Be sure to run `pod spec lint DHImageKit.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|
  s.name         = "DHAnimationKit"
  s.version      = "1.0.1"
  s.summary      = "DHAnimationKit is a library that allows you to transit or show/hide views with beautiful animations"
  s.description  = "DHAnimationKit is a library that allows you to add animations and transitions to views very easily. You can have the power of adding animations like in Keynotes very easily."
  s.homepage     = "https://github.com/Danielhhs/DHAnimationKit"
  s.license      = "MIT"
  s.author             = { "Daniel Huang" => "Danielhhs@163.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/Danielhhs/DHAnimationKit.git", :tag => "#{s.version}" }
  s.source_files  = "Classes", "Classes/Source/**/*.{h,m,c}"
  s.resources = "Classes/Resource/*.glsl", "Classes/Resource/*.png", "Classes/Resource/*.jpg"
  s.exclude_files = "Classes/Exclude"
  s.requires_arc = true
  s.xcconfig = { 'CLANG_MODULES_AUTOLINK' => 'YES' }
  # s.resource  = "icon.png"
  s.frameworks = "OpenGLES", "CoreMedia", "QuartzCore", "AVFoundation"


end
