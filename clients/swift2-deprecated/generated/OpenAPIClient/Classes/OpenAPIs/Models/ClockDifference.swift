//
// ClockDifference.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ClockDifference: JSONEncodable {
    public var _class: String?
    public var diff: Int32?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["diff"] = self.diff?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}