#
# Be sure to run `pod lib lint YLCustomerServiceSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'YLHCustomerServiceSDK'
  s.version          = '1.3.9'
  s.summary          = '智能客服sdk.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/jeffrey202006/YLHCustomerServiceSDK.git'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'frank' => 'frank@keepfun.cn' }
  s.source           = { :git => 'https://github.com/jeffrey202006/YLHCustomerServiceSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '10.0'
  s.platform = :ios, '10.0'

  s.swift_version = '4.2'

  s.static_framework = true
  
  s.exclude_files = 'YLCustomerServiceSDK/Info.plist'

  s.source_files = ['YLCustomerServiceSDK/*.{m,h}', 'YLCustomerServiceSDK/YLCustomerService.framework/Headers/*.h']
  
  s.resource = ['YLCustomerServiceSDK/YLCustomerService.framework/YLSkinDefault.bundle',
                'YLCustomerServiceSDK/YLCustomerService.framework/YLCustomerService.bundle',
                'YLCustomerServiceSDK/YLCustomerService.framework/*.{nib}']
  
  s.public_header_files = ['YLCustomerServiceSDK/YLCustomerService.framework/Headers/*.h', 'YLCustomerServiceSDK/YLViewController.h']
  
  s.vendored_frameworks = 'YLCustomerServiceSDK/YLCustomerService.framework',
                          'YLCustomerServiceSDK/YLCustomerService.framework/Frameworks/mediasoup-client-nf-ios.framework',
                          'YLCustomerServiceSDK/YLCustomerService.framework/Frameworks/mediasoup-client-nf-ios.framework/Frameworks/*.framework'

  s.frameworks = "Foundation", "UIKit"
  s.library = 'stdc++'
  
  s.xcconfig = {
      'HEADER_SEARCH_PATHS' => '${PODS_ROOT}/YLCustomerServiceSDK/YLCustomerServiceSDK/YLCustomerService.framework/Headers'
  }
  
  s.pod_target_xcconfig = {
      'VALID_ARCHS' => 'arm64 arm64e',
  }

end
