//
// ExtensionClassImpl.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ExtensionClassImpl: JSONEncodable {

    public var _class: String?
    public var links: ExtensionClassImpllinks?
    public var classes: [String]?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["_links"] = self.links?.encodeToJSON()
        nillableDictionary["classes"] = self.classes?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

