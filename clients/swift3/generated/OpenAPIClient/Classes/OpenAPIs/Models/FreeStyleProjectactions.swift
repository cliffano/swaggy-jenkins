//
// FreeStyleProjectactions.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class FreeStyleProjectactions: JSONEncodable {

    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["_class"] = self._class

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

