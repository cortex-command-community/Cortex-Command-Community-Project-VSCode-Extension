// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterCcIni",
    products: [
        .library(name: "TreeSitterCcIni", targets: ["TreeSitterCcIni"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterCcIni",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterCcIniTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterCcIni",
            ],
            path: "bindings/swift/TreeSitterCcIniTests"
        )
    ],
    cLanguageStandard: .c11
)
