#
#  Be sure to run `pod spec lint JHNAdSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #

  spec.name         = "JHNAdSDK"
  spec.version      = "1.0.0"
  spec.summary      = "A short description of JHNAdSDK."

  # This description is used to generate tags and improve search results.
  #   * Think: What does it do? Why did you write it? What is the focus?
  #   * Try to keep it short, snappy and to the point.
  #   * Write the description between the DESC delimiters below.
  #   * Finally, don't worry about the indent, CocoaPods strips it!
  spec.description  = <<-DESC
                   DESC

  spec.homepage     = "http://EXAMPLE/JHNAdSDK"
  # spec.screenshots  = "www.example.com/screenshots_1.gif", "www.example.com/screenshots_2.gif"


  # ―――  Spec License  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Licensing your code is important. See https://choosealicense.com for more info.
  #  CocoaPods will detect a license file if there is a named LICENSE*
  #  Popular ones are 'MIT', 'BSD' and 'Apache License, Version 2.0'.
  #

  spec.license      = "MIT (example)"
  # spec.license      = { :type => "MIT", :file => "FILE_LICENSE" }


  # ――― Author Metadata  ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Specify the authors of the library, with email addresses. Email addresses
  #  of the authors are extracted from the SCM log. E.g. $ git log. CocoaPods also
  #  accepts just a name if you'd rather not provide an email address.
  #
  #  Specify a social_media_url where others can refer to, for example a twitter
  #  profile URL.
  #

  spec.author             = { "zilllionaire" => "zilllionaire@sina.com" }
  # Or just: spec.author    = "zilllionaire"
  # spec.authors            = { "zilllionaire" => "zilllionaire@sina.com" }
  # spec.social_media_url   = "https://twitter.com/zilllionaire"

  # ――― Platform Specifics ――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If this Pod runs only on iOS or OS X, then specify the platform and
  #  the deployment target. You can optionally include the target after the platform.
  #

  # spec.platform     = :ios
  # spec.platform     = :ios, "5.0"

  #  When using multiple platforms
  # spec.ios.deployment_target = "5.0"
  # spec.osx.deployment_target = "10.7"
  # spec.watchos.deployment_target = "2.0"
  # spec.tvos.deployment_target = "9.0"


  # ――― Source Location ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Specify the location from where the source should be retrieved.
  #  Supports git, hg, bzr, svn and HTTP.
  #

  spec.source       = { :git => "https://github.com/zilllionaire/JHNAdSDK.git", :tag => "#{spec.version}" }


  # ――― Source Code ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  CocoaPods is smart about how it includes source code. For source files
  #  giving a folder will include any swift, h, m, mm, c & cpp files.
  #  For header files it will include any header in the folder.
  #  Not including the public_header_files will make all headers public.
  #

  spec.source_files  = "Classes", "Classes/**/*.{h,m}"
  spec.exclude_files = "Classes/Exclude"

  # spec.public_header_files = "Classes/**/*.h"


  # ――― Resources ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  A list of resources included with the Pod. These are copied into the
  #  target bundle with a build phase script. Anything else will be cleaned.
  #  You can preserve files from being cleaned, please don't preserve
  #  non-essential files like tests, examples and documentation.
  #

  # spec.resource  = "icon.png"
  # spec.resources = "Resources/*.png"

  # spec.preserve_paths = "FilesToSave", "MoreFilesToSave"


  # ――― Project Linking ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  Link your library with frameworks, or libraries. Libraries do not include
  #  the lib prefix of their name.
  #

  # spec.framework  = "SomeFramework"
  # spec.frameworks = "SomeFramework", "AnotherFramework"

  # spec.library   = "iconv"
  # spec.libraries = "iconv", "xml2"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  If your library depends on compiler flags you can set them in the xcconfig hash
  #  where they will only apply to your library. If you depend on other Podspecs
  #  you can include multiple dependencies to ensure it works.

  # spec.requires_arc = true

  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # spec.dependency "JSONKit", "~> 1.4"

  spec.subspec 'JiHuoNiaoAdSDK' do |s|
    s.frameworks   = "MessageUI","iAd","ImageIO","SystemConfiguration","WebKit","MobileCoreServices", "SafariServices","CoreTelephony","CoreLocation","AVFoundation","CoreGraphics","MediaPlayer",
    "AdSupport","CoreMedia","CFNetwork", "CoreMotion","CoreServices", "StoreKit","Security","Photos","DeviceCheck"
    s.weak_framework = 'WebKit', 'UIKit', 'Foundation'
    s.libraries    = "c++", "sqlite3.0", "z", "xml2", "resolv.9"
    s.vendored_frameworks =  'JiHuoNiaoAdSDK/JiHuoNiaoAdSDK.framework', 'JiHuoNiaoAdSDK/AdSpaceLib.framework'

  end

 # GDT
  spec.subspec 'GDTCommonSDK' do |s|
         s.ios.deployment_target = '9.0'
         s.vendored_frameworks = 'JHNAdSDK/GDTCommonSDK/GDTCommonSDK.framework'
         s.dependency 'JHNAdSDK/JiHuoNiaoAdSDK'
         s.dependency 'GDTMobSDK', '4.14.02'
  end


 # csj
  spec.subspec 'CSJCommonSDK' do |s|
     s.ios.deployment_target = '9.0'
     s.vendored_frameworks = 'JHNAdSDK/CSJCommonSDK/CSJCommonSDK.framework'
     s.dependency 'JHNAdSDK/JiHuoNiaoAdSDK'
     s.dependency 'Ads-CN-Beta', '5.1.0.1'
  end


 # KS
  spec.subspec 'KSCommonSDK' do |s|
     s.ios.deployment_target = '9.0'
     s.vendored_frameworks =  'JHNAdSDK/KSCommonSDK/KSCommonSDK.framework'
     s.dependency 'JHNAdSDK/JiHuoNiaoAdSDK'
     s.dependency 'KSAdSDK', '3.3.36'
  end
  
  
 # sig
  spec.subspec 'SIGCommonSDK' do |s|
     s.ios.deployment_target = '9.0'
     s.vendored_frameworks =  'JHNAdSDK/SIGCommonSDK/SIGCommonSDK.framework'
     s.dependency 'JHNAdSDK/JiHuoNiaoAdSDK'
     s.dependency 'SigmobAd-iOS', '4.6.1'
  end
  
 # BD
  spec.subspec 'BDCommonSDK' do |s|
     s.ios.deployment_target = '9.0'
     s.vendored_frameworks =  'JHNAdSDK/BDCommonSDK/BDCommonSDK.framework'
     s.dependency 'JHNAdSDK/JiHuoNiaoAdSDK'
     s.dependency 'BaiduMobAdSDK', '4.901'
  end
    
end
