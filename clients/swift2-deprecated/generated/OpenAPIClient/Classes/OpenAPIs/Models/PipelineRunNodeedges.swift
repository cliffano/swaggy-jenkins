//
// PipelineRunNodeedges.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class PipelineRunNodeedges: JSONEncodable {
    public var id: String?
    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["id"] = self.id
        nillableDictionary["_class"] = self._class
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}