import XCTest
import SwiftTreeSitter
import TreeSitterCcIni

final class TreeSitterCcIniTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_ccini())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading CcIni grammar")
    }
}
