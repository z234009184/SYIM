Pod::Spec.new do |s|
  s.name = "SYIM"
  s.version = "0.2.7"
  s.summary = "A short description of SYIM."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"z234009184"=>"234009184@qq.com"}
  s.homepage = "https://github.com/z234009184/SYIM"
  s.description = "TODO: Add long description of the pod here."
  s.requires_arc = ["SYIM/Classes/ARC/**/*"]
  s.source = { :git => 'https://github.com/z234009184/SYIM.git' }

  s.ios.deployment_target    = '12.0'
  # s.ios.vendored_framework   = 'ios/SYIM.embeddedframework/SYIM.framework'
  s.ios.vendored_frameworks = "Frameworks/*.framework"

  s.dependency 'CocoaAsyncSocket'
  s.dependency 'AFNetworking'
  s.dependency 'Protobuf'
  s.dependency 'RealReachability'
  s.dependency 'MJExtension'
  s.dependency 'ReactiveObjC'
  s.dependency 'WCDB','~>1.0.7.5'
  s.dependency 'CocoaLumberjack'
end
